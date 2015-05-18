#include <sstream>

#include "InitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void InitPass::VisitTopLevel(clang::FunctionDecl *toplevel) {
    clang::FunctionDecl *func = clang::dyn_cast<clang::FunctionDecl>(toplevel);
    if (func != NULL && func->isMain() &&
            func->isThisDeclarationADefinition()) {
        clang::SourceLocation end = func->getBody()->getLocStart();

        // InsertTextAfterToken(end, "init_chimes(); ");
    }
}

void InitPass::VisitStmt(const clang::Stmt *s) {
}
