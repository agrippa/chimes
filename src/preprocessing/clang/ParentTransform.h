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
    virtual bool setsLastGoto() = 0;
    virtual bool createsRegisterLabels() = 0;
    virtual bool createsFunctionLabels() = 0;
    virtual void VisitTopLevel(clang::Decl *toplevel) {}
    
    void setLastGoto(clang::SourceLocation last);
    clang::SourceLocation getLastGoto();
    bool hasLastGoto();
    void resetLastGoto();

    int getNumRegisterLabels();
    int getNumFunctionLabels();
    void resetRegisterLabels();
    void resetFunctionLabels();
    void resetRootFlag();

    clang::SourceManager *getSM() { return SM; }
protected:
    clang::Rewriter *TheRewriter;
    clang::ASTContext *Context;
    clang::SourceManager *SM;
    const clang::Stmt *parent;

    std::string constructRegisterStackVar(StackAlloc *alloc);
    void visitChildren(const clang::Stmt *s);
    const clang::Stmt *getParent(const clang::Stmt *s);
    void setParent(const clang::Stmt *child, const clang::Stmt *parent);
    void InsertAtFront(const clang::Stmt *s, std::string st);

    int getNextRegisterLabel();
    int getNextFunctionLabel();

    void setRootFlag(bool v);
    bool getRootFlag();
private:
    std::map<const clang::Stmt *, const clang::Stmt *> parentMap;

    clang::SourceLocation lastGoto;
    bool hasGoto = false;

    int curr_register_label = 0;
    int curr_function_label = 0;
    bool root_flag;
};

#endif
