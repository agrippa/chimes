#include <sstream>

#include "StartExitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;
extern std::vector<StackAlloc *> *insert_at_front;

static std::vector<int> matched_exits;

void StartExitPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);
        unsigned end_line = SM->getPresumedLineNumber(end);
        unsigned end_col = SM->getPresumedColumnNumber(end);
        std::string filename = SM->getFilename(start);

        /*
         * Insert new_stack callbacks.
         */
        if (FunctionStartInsertion *insert =
                insertions->is_function_start(start_line)) {
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
        if (insertions->is_function_exit(start_line) &&
                std::find(matched_exits.begin(), matched_exits.end(),
                    start_line) == matched_exits.end()) {
            TheRewriter->InsertText(start, "rm_stack(); ", true,
                    true);
            matched_exits.push_back(start_line);
        }
    }

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            parent = s;
            VisitStmt(child);
        }
    }
}
