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


class ReturnUnroll : public clang::ConstStmtVisitor<ReturnUnroll> {
    public:
        ReturnUnroll() { }

        void setRewriter(clang::Rewriter &R) {
            rewriter = &R;
            SM = &R.getSourceMgr();
        }
        void setContext(clang::ASTContext &set_Context) {
            Context = &set_Context;
        }

        void visitChildren(const clang::Stmt *s);
        void VisitStmt(const clang::Stmt *s);
        std::string stmtToString(const clang::Stmt* s);

    protected:
        clang::ASTContext *Context;
        clang::SourceManager *SM;
        clang::Rewriter *rewriter;

        std::string get_unique_return_varname();
        std::string get_decl_with_same_type(const clang::Expr *e, std::string varname);
        const clang::Stmt *getParent(const clang::Stmt *s);
        void setParent(const clang::Stmt *child, const clang::Stmt *parent);

        int ret_var_counter = 0;
        std::map<const clang::Stmt *, const clang::Stmt *> parentMap;
        std::set<std::string> ignorable;
};

#endif
