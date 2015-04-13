#include <sstream>

#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/ADT/ArrayRef.h>

extern DesiredInsertions *insertions;

static std::vector<MatchedLocation *> already_matched;

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

static void mark_matched(int line, int col, const char *filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

std::string AliasChangedPass::to_string(const clang::Stmt *stmt) {
    std::string s;
    llvm::raw_string_ostream stream(s);

    stmt->printPretty(stream, NULL, Context->getPrintingPolicy());
    stream.flush();

    int start_index = 0;
    while (start_index < s.length() && std::isspace(s[start_index])) {
        start_index++;
    }

    int end_index = s.length() - 1;
    while (end_index >= 0 && std::isspace(s[end_index])) {
        end_index--;
    }

    std::string trimmed = s.substr(start_index, end_index - start_index + 1);
    std::replace(trimmed.begin(), trimmed.end(), '\n', ' ');
    return trimmed;
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
            std::vector<size_t> *groups = insertions->get_groups(
                    start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename());

            // Generate the alias_group_changed callback
            std::stringstream ss;
            ss << "alias_group_changed(" << groups->size();
            for (std::vector<size_t>::iterator i = groups->begin(),
                    e = groups->end(); i != e; i++) {
                ss << ", (size_t)(" << *i << "UL)";
            }
            ss << ")";

            unsigned int inserted_line = start_loc.getLine();
            unsigned int inserted_col = start_loc.getColumn();
            unsigned int ninserted;

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
                        llvm::errs() << "Unsupported\n";
                        assert(false);
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

    /*
     * Visit children and do call inserts before adding braces around any
     * children
     */
    visitChildren(s);

    int start_line = startingLine(s);
    int end_line = endingLine(s);

    // Insert braces around all if and for statement bodies
    switch(s->getStmtClass()) {
        case clang::Stmt::ForStmtClass: {
            const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(s);
            assert(f);

            const clang::Stmt *body = f->getBody();
            assert(body != NULL);

            if (!clang::isa<clang::CompoundStmt>(body)) {
                std::string for_str;
                llvm::raw_string_ostream for_stream(for_str);

                int base_line = startingLine(f);

                std::string init_str = to_string(f->getInit());
                std::string cond_str = to_string(f->getCond());
                std::string inc_str = to_string(f->getInc());
                std::string body_str = to_string(f->getBody());

                for_stream << "for (";

                for_stream << init_str;
                if (f->getInit()->getStmtClass() != clang::Stmt::DeclStmtClass) {
                    for_stream << "; ";
                }

                for_stream << cond_str << "; " << inc_str << ") { " <<
                    body_str << "; }";

                for_stream.flush();

                ReplaceText(f->getSourceRange(), for_str);
                insertions->add_line_collapse(start_line, end_line);
            }
            break;
        }
        case clang::Stmt::IfStmtClass: {
            const clang::IfStmt *f = clang::dyn_cast<clang::IfStmt>(s);
            assert(f);

            assert(f->getThen() != NULL);

            if (!clang::isa<clang::CompoundStmt>(f->getThen()) ||
                    (f->getElse() != NULL && !clang::isa<clang::CompoundStmt>(f->getElse()))) {
                std::string if_str;
                llvm::raw_string_ostream if_stream(if_str);

                int base_line = startingLine(f);

                std::string cond_str = to_string(f->getCond());
                std::string then_str = to_string(f->getThen());

                if_stream << "if (" << cond_str << ") {" << then_str << "; }";

                if (f->getElse() != NULL) {
                    if_stream << " else ";
                    if (!clang::isa<clang::IfStmt>(f->getElse())) {
                        if_stream << " {";
                    }

                    std::string else_str = to_string(f->getElse());
                    if_stream << else_str;
                    if (!clang::isa<clang::IfStmt>(f->getElse())) {
                        if_stream << "} ";
                    }
                }
                if_stream.flush();

                ReplaceText(f->getSourceRange(), if_str);
                insertions->add_line_collapse(start_line, end_line);
            }
            break;
        }
        default:
            break;
    }
}
