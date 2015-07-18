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

#include "FindNonChkptingFptr.h"

extern std::set<std::string> non_checkpointing;
extern void checkIfAllocator(const clang::FunctionDecl *callee);

const clang::Decl *FindNonChkptingFptr::getRootDecl(const clang::Expr *curr) {
    assert(curr);
    if (const clang::DeclRefExpr *declref =
            clang::dyn_cast<clang::DeclRefExpr>(curr)) {
        return declref->getDecl();
    } else if (const clang::ImplicitCastExpr *cast =
            clang::dyn_cast<clang::ImplicitCastExpr>(curr)) {
        return getRootDecl(cast->getSubExpr());
    } else if (const clang::MemberExpr *mem =
            clang::dyn_cast<clang::MemberExpr>(curr)) {
        return mem->getMemberDecl();
    } else {
        curr->dump();
        assert(false);
    }
}

bool FindNonChkptingFptr::checkIfNonCheckpointing(const clang::Expr *target) {
    const clang::Decl *decl = getRootDecl(target);

#ifdef VERBOSE
    llvm::errs() << "Got decl=\n";
    decl->dump();
#endif

    if (decl && decl->hasAttrs()) {
        for (clang::AttrVec::const_iterator i = decl->getAttrs().begin(),
                e = decl->getAttrs().end(); i != e; i++) {
            clang::NoCheckpointAttr *a =
                clang::dyn_cast<clang::NoCheckpointAttr>(*i);
            if (a) {
                return true;
            }
        }
    }
    return false;
}

void FindNonChkptingFptr::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            VisitStmt(child);
        }
    }
}

void FindNonChkptingFptr::VisitStmt(const clang::Stmt *s) {
    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {

        if (call->getDirectCallee() == NULL) {
            // Function pointer
            any_fptr_calls = true;
            if (!checkIfNonCheckpointing(call->getCallee())) {
                noncheckpointing = false;
            }
        }
    }
    visitChildren(s);
}
