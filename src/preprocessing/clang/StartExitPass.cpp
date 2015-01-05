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
            TheRewriter->InsertText(cmpd->getLocEnd(), "rm_stack(); ", true, true);
        }
    }
}

void StartExitPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);
        unsigned end_line = SM->getPresumedLineNumber(end);
        unsigned end_col = SM->getPresumedColumnNumber(end);
        clang::PresumedLoc start_loc = SM->getPresumedLoc(start);
        clang::PresumedLoc end_loc = SM->getPresumedLoc(end);
        std::string filename = start_loc.getFilename();

        /*
         * Insert new_stack callbacks.
         */
        if (getRootFlag()) {
            assert(!s->children().empty());
            clang::Stmt::const_child_iterator iter = s->child_begin();
            const clang::Stmt *child = *iter;
            TheRewriter->InsertText(child->getLocStart(), "new_stack(); ", true,
                    true);
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
                TheRewriter->InsertText(child->getLocStart(), stmt);
            }
            insert_at_front = NULL;
        }

        /*
         * Insert rm_stack callbacks.
         */
        if (clang::isa<clang::ReturnStmt>(s)) {
            TheRewriter->InsertText(start, "rm_stack(); ", true,
                    true);
        }
    }

    visitChildren(s);
}
