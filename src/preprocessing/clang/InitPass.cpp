#include <sstream>

#include "InitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void InitPass::VisitTopLevel(clang::Decl *toplevel) {
    clang::FunctionDecl *func = clang::dyn_cast<clang::FunctionDecl>(toplevel);
    if (func != NULL) {
        const clang::Stmt *body = func->getBody();
        assert(clang::isa<clang::CompoundStmt>(body));
        const clang::CompoundStmt *cmpd = clang::dyn_cast<const clang::CompoundStmt>(body);

        if (func->getNameAsString() == "main") {
            clang::Stmt::const_child_iterator iter = cmpd->child_begin();
            const clang::Stmt *child = *iter;

            InsertText(child->getLocStart(), "init_numdebug(); ", true, true);
        }
    }
}

void InitPass::VisitStmt(const clang::Stmt *s) {
}
