#ifndef PARENT_TRANSFORM_H
#define PARENT_TRANSFORM_H

#include <string>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "DesiredInsertions.h"
#include "OMPTree.h"

using namespace clang;

class ParentTransform : public clang::ConstStmtVisitor<ParentTransform> {
public:
    // ParentTransform() { }

    void setRewriter(clang::Rewriter &R) {
        rewriter = &R;
        SM = &R.getSourceMgr();
    }
    void setContext(clang::ASTContext &set_Context) { Context = &set_Context; }

    virtual void VisitStmt(const clang::Stmt *s) = 0;
    virtual bool usesStackInfo() = 0;
    virtual bool setsLastGoto() = 0;
    virtual bool createsRegisterLabels() = 0;
    virtual bool createsFunctionLabels() = 0;
    virtual bool createsOMPTree() = 0;
    virtual bool requiresMangledVarsReset() = 0;
    virtual bool transformsOriginal() = 0;
    virtual void VisitTopLevel(clang::FunctionDecl *toplevel) {}

    void setLastGoto(clang::SourceLocation last);
    clang::SourceLocation getLastGoto();
    bool hasLastGoto();
    void resetLastGoto();

    int getNumRegisterLabels();
    int getNumFunctionLabels();
    OMPTree *getOMPTree();
    void resetRegisterLabels();
    void resetFunctionLabels(int nlabels);
    void resetRootFlag();
    void resetOMPTree();

    clang::SourceManager *getSM() { return SM; }
    int get_current_function_label() { return curr_function_label; }
protected:
    clang::ASTContext *Context;
    clang::SourceManager *SM;
    const clang::Stmt *parent;

    std::string constructRegisterStackVarArgs(StackAlloc *alloc);
    std::string constructRegisterStackVar(StackAlloc *alloc);
    std::string get_cond_registration_varname(std::string mangled_varname);
    void visitChildren(const clang::Stmt *s);
    const clang::Stmt *getParentMayBeNull(const clang::Stmt *s);
    const clang::Stmt *getParent(const clang::Stmt *s);
    void setParent(const clang::Stmt *child, const clang::Stmt *parent);

    clang::PresumedLoc InsertAtFront(const clang::Stmt *s, std::string st);
    clang::SourceLocation getStartOfNextStmt(const clang::Stmt *s);
    void InsertText(clang::SourceLocation start, std::string s,
        bool insertAfter, bool indent);
    void InsertTextBefore(clang::SourceLocation start, std::string s);
    void InsertTextAfterToken(clang::SourceLocation start, std::string s);
    void InsertTextAfter(clang::SourceLocation start, std::string s);
    void RemoveText(clang::SourceRange rng);
    void ReplaceText(clang::SourceLocation loc, unsigned len,
            std::string new_str);
    void ReplaceText(clang::SourceRange range, std::string s);
    void ReplaceWholeStatement(const clang::Stmt *s,
        std::string st);
    std::string getRewrittenText(clang::SourceRange range);

    std::string stmtToString(const clang::Stmt* s);

    bool is_omp_for_iter_declaration(const Stmt *s);

    int getNextRegisterLabel();
    int getNextFunctionLabel();

    void setRootFlag(bool v);
    bool getRootFlag();

    OMPTree *ompTree;
    std::map<const clang::Stmt *, const clang::Stmt *> *getParentMap() {
        return &parentMap;
    }

    int startingLine(const clang::Stmt *stmt);
    int endingLine(const clang::Stmt *stmt);

    bool currently_inside_function_arguments() {
        return inside_function_arguments;
    }

    std::string get_callee_name(const CallExpr *call);

private:
    clang::Rewriter *rewriter;
    std::map<const clang::Stmt *, const clang::Stmt *> parentMap;

    clang::SourceLocation lastGoto;
    bool hasGoto = false;

    int curr_register_label = 0;
    int curr_function_label = 0;
    bool root_flag;

    bool inside_function_arguments = false;
};

#endif
