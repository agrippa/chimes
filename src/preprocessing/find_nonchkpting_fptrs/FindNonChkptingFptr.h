#ifndef FUNCTION_UNROLL_H
#define FUNCTION_UNROLL_H

#include <fstream>

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


class FindNonChkptingFptr : public clang::ConstStmtVisitor<FindNonChkptingFptr> {
    public:
        FindNonChkptingFptr() : noncheckpointing(true), any_fptr_calls(false) { }

        void setRewriter(clang::Rewriter &R) {
            rewriter = &R;
            SM = &R.getSourceMgr();
        }
        void setContext(clang::ASTContext &set_Context) {
            Context = &set_Context;
        }

        void visitChildren(const clang::Stmt *s);
        void VisitStmt(const clang::Stmt *s);

        void reset_noncheckpointing() {
            noncheckpointing = true;
            any_fptr_calls = false;
        }
        bool get_noncheckpointing() {
            return noncheckpointing;
        }
        bool get_any_fptr_calls() {
            return any_fptr_calls;
        }

    protected:
        clang::ASTContext *Context;
        clang::SourceManager *SM;
        clang::Rewriter *rewriter;

        const clang::Decl *getRootDecl(const clang::Expr *curr);
        bool checkIfNonCheckpointing(const clang::Expr *target);

        bool noncheckpointing;
        bool any_fptr_calls;
};

#endif
