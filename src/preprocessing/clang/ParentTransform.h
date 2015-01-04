#ifndef PARENT_TRANSFORM_H
#define PARENT_TRANSFORM_H

#include <string>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "DesiredInsertions.h"

class ParentTransform : public clang::ConstStmtVisitor<ParentTransform> {
public:
    ParentTransform() { }

    void setRewriter(clang::Rewriter &R) {
        TheRewriter = &R;
        SM = &R.getSourceMgr();
    }
    void setContext(clang::ASTContext &set_Context) { Context = &set_Context; }
    virtual void VisitStmt(const clang::Stmt *s) = 0;
    virtual bool usesStackInfo() = 0;

protected:
    clang::Rewriter *TheRewriter;
    clang::ASTContext *Context;
    clang::SourceManager *SM;
    const clang::Stmt *parent;

    std::string constructRegisterStackVar(StackAlloc *alloc);
};

#endif
