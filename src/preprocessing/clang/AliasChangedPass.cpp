#include <sstream>

#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/ADT/ArrayRef.h>

extern DesiredInsertions *insertions;
extern std::set<std::string> *ignorable;
extern std::map<std::string, std::set<std::string>> func_to_alias_locs;
extern std::set<std::string> function_pointers_loaded;

static std::vector<MatchedLocation *> already_matched;

/*
 * Check if we've already inserted the alises for this location.
 */
static bool matched(int line, int col, const char *filename) {
    std::string filename_str(filename);
    for (std::vector<MatchedLocation *>::iterator i = already_matched.begin(),
            e = already_matched.end(); i != e; i++) {
        MatchedLocation *loc = *i;
        if (loc->get_line() == line && loc->get_col() == col &&
                loc->get_filename() == filename_str) {
            return true;
        }
    }
    return false;
}

/*
 * This function tries to figure out if prev is the RHS of an assignment, curr.
 * It is used to see if a reference to a function is being stored from the
 * bottom up, starting at the reference. For each of these cases, the important
 * thing to ask is "If I hit this type of expression on the way up the AST, is
 * it still possible the value at the leaf will hit an assignment operator at
 * the top without modification?".
 */
bool AliasChangedPass::isRValueOfAssignment(const clang::Stmt *curr,
        const clang::Stmt *prev) {
    switch (curr->getStmtClass()) {
        case (clang::Stmt::ImplicitCastExprClass):
        case (clang::Stmt::CStyleCastExprClass):
        case (clang::Stmt::ParenExprClass):
            return isRValueOfAssignment(getParent(curr), curr);
        case (clang::Stmt::CallExprClass):
        case (clang::Stmt::CXXOperatorCallExprClass):
            return false;
        case (clang::Stmt::BinaryOperatorClass): {
            const clang::BinaryOperator *binop =
                clang::dyn_cast<clang::BinaryOperator>(curr);
            assert(binop);
            if (binop->getOpcode() == BO_Assign && binop->getRHS() == prev) {
                return true;
            } else {
                llvm::errs() << "Unhandled class " <<
                    std::string(curr->getStmtClassName()) << "\n";
                assert(false);
            }
        }
        default:
            llvm::errs() << "Unhandled class " <<
                std::string(curr->getStmtClassName()) << "\n";
            assert(false);
    }
}

/*
 * Mark a location as already matched after having inserted the alias changes
 * for that location.
 */
static void mark_matched(int line, int col, const char *filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

void AliasChangedPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid()) {
        clang::PresumedLoc start_loc = SM->getPresumedLoc(start);
        clang::PresumedLoc end_loc = SM->getPresumedLoc(end);
        std::string filename_str(start_loc.getFilename());

        /*
         * If this statement is at a line:column location that was marked by the
         * analysis pass as a good point to insert an alias change notification.
         */
        if (insertions->isMainFile(start_loc.getFilename()) &&
                insertions->contains(start_loc.getLine(),
                    start_loc.getColumn(), start_loc.getFilename()) &&
                !matched(start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename())) {
            mark_matched(start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename());

            // Get the list of alias groups changed at this location
            StateChangeInsertion *state = insertions->get_matching(
                    start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename());
            assert(state);
            unsigned loc_id = state->get_id();

            if (func_to_alias_locs.find(curr_func) ==
                    func_to_alias_locs.end()) {
                func_to_alias_locs.insert(std::pair<std::string,
                        std::set<std::string>>(curr_func,
                            std::set<std::string>()));
            }
            func_to_alias_locs.at(curr_func).insert(insertions->get_alias_loc_var(
                        loc_id));

            bool do_insert = true;
            if (const CallExpr *call = dyn_cast<CallExpr>(s)) {
                std::string callee_name = get_callee_name(call);
                assert(state->is_call());
                assert((callee_name == "anon" &&
                            state->get_reason() == "NULL") ||
                        callee_name == state->get_reason());
                do_insert = (ignorable->find(callee_name) != ignorable->end());
            }

            if (do_insert) {
                // Generate the alias_group_changed callback
                std::stringstream ss;
                ss << "alias_group_changed(" << \
                    insertions->get_alias_loc_var(loc_id) << ")";

                unsigned int inserted_line = start_loc.getLine();
                unsigned int inserted_col = start_loc.getColumn();
                unsigned int ninserted;

                // Insert the API call
                switch (parent->getStmtClass()) {
                    case clang::Stmt::IfStmtClass: {
                        ss << " || ";
                        InsertText(start, ss.str(), true, true);
                        ninserted = ss.str().length();
                        break;
                    }
                    case clang::Stmt::ForStmtClass: {
                        const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(parent);
                        if (f->getInit() == s || f->getInc() == s) {
                            ss << ", ";
                            InsertText(start, ss.str(), true, true);
                            ninserted = ss.str().length();
                        } else if (f->getCond() == s) {
                            ss << " || ";
                            InsertText(start, ss.str(), true, true);
                            ninserted = ss.str().length();
                        } else {
                            llvm::errs() << "Unsupported\n";
                            assert(false);
                        }
                        break;
                    }
                    default: {
                        ss << "; ";
                        clang::PresumedLoc insert_loc = InsertAtFront(s, ss.str());
                        inserted_line = insert_loc.getLine();
                        inserted_col = insert_loc.getColumn();
                        ninserted = ss.str().length();
                        break;
                    }
                }
            }
        }

        if (const clang::DeclRefExpr *declref =
                clang::dyn_cast<clang::DeclRefExpr>(s)) {
            if (clang::isa<FunctionDecl>(declref->getDecl())) {
                if (isRValueOfAssignment(getParent(declref), declref)) {
                    const clang::FunctionDecl *fdecl =
                        clang::dyn_cast<clang::FunctionDecl>(declref->getDecl());
                    assert(fdecl);
                    function_pointers_loaded.insert(fdecl->getNameAsString());
                }
            }
        }
    }

    /*
     * Visit children and do call inserts before adding braces around any
     * children
     */
    visitChildren(s);
}
