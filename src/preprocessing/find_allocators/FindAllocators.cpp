#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "llvm/Support/raw_ostream.h"

#include <sstream>

#include "FindAllocators.h"

extern std::set<std::string> allocators;
extern void checkIfAllocator(const clang::FunctionDecl *callee);

void FindAllocators::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            VisitStmt(child);
        }
    }
}

void FindAllocators::VisitStmt(const clang::Stmt *s) {
    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {

        const clang::FunctionDecl *callee = call->getDirectCallee();
        checkIfAllocator(callee);
    }
    visitChildren(s);
}
