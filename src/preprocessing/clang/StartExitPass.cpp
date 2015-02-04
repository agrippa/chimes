#include <sstream>

#include "StartExitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;
extern std::vector<StackAlloc *> *insert_at_front;

void StartExitPass::VisitTopLevel(clang::Decl *toplevel) {
    clang::FunctionDecl *func = clang::dyn_cast<clang::FunctionDecl>(toplevel);
    if (func != NULL) {
        // Insert rm_stack at end of function's body if this is a void
        const clang::Stmt *body = func->getBody();
        assert(clang::isa<clang::CompoundStmt>(body));
        const clang::CompoundStmt *cmpd = clang::dyn_cast<const clang::CompoundStmt>(body);
        const clang::Stmt *last = cmpd->body_back();
        if (!clang::isa<clang::ReturnStmt>(last)) {
            // implicit return at end of void funct
            clang::SourceLocation loc = cmpd->getLocStart();
            clang::PresumedLoc locloc = SM->getPresumedLoc(loc);
            if (insertions->isMainFile(locloc.getFilename())) {
                InsertText(cmpd->getLocEnd(), "rm_stack(false, 0UL); ", true, true);
            }
        }
    }
}

void StartExitPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();
    clang::PresumedLoc start_loc = SM->getPresumedLoc(start);

    if (start.isValid() && end.isValid() &&
            insertions->isMainFile(start_loc.getFilename())) {
        /*
         * Insert new_stack callbacks.
         */
        if (getRootFlag()) {
            assert(!s->children().empty());
            clang::Stmt::const_child_iterator iter = s->child_begin();
            const clang::Stmt *child = *iter;

            FunctionArgumentAliasGroups func =
                insertions->findMatchingFunction(curr_func);

            std::stringstream ss;
            ss << "new_stack(" << func.nargs();
            for (unsigned i = 0; i < func.nargs(); i++) {
                ss << ", (size_t)(" << func.alias_no_for(i) << "UL)";
            }
            ss << "); ";

            InsertText(child->getLocStart(), ss.str(), true, true);
        }

        /*
         * Insert stack registrations for parameters to functions.
         */
        if (insert_at_front != NULL) {
            for (std::vector<StackAlloc *>::iterator i =
                    insert_at_front->begin(), e = insert_at_front->end();
                    i != e; i++) {
                StackAlloc *alloc = *i;

                std::string stmt = constructRegisterStackVar(alloc);

                clang::Stmt::const_child_iterator iter = s->child_begin();
                const clang::Stmt *child = *iter;
                InsertText(child->getLocStart(), stmt, true, true);
            }
            insert_at_front = NULL;
        }

        /*
         * Insert rm_stack callbacks.
         */
        if (clang::isa<clang::ReturnStmt>(s)) {
            FunctionExit *func_exit = insertions->findFirstMatchingFunctionExit(
                    start_loc.getLine());
            if (func_exit) {
                std::stringstream ss;
                ss << "rm_stack(true, " << func_exit->get_alias() << "UL); ";
                InsertText(start, ss.str(), true, true);
            } else {
                InsertText(start, "rm_stack(false, 0UL); ", true, true);
            }
        }
    }

    visitChildren(s);
}
