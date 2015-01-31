#ifndef CALLING_PASS_H
#define CALLING_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class CallLocation {
    public:
        CallLocation(int set_col, int set_label,
                const clang::CallExpr *set_call) : col(set_col),
                label(set_label), call(set_call) {}
        int get_col() { return col; }
        int get_label() { return label; }
        const clang::CallExpr *get_call() { return call; }

        bool operator < (const CallLocation& other) const {
            return col < other.col;
        }

    private:
        int col;
        int label;
        const clang::CallExpr *call;
};

class CallingPass : public ParentTransform {
public:
    CallingPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    void VisitTopLevel(clang::Decl *toplevel) override;

    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return true; }
private:
    bool parent_is_ternary(const clang::Stmt *parent);

    std::map<unsigned, std::vector<CallLocation>> calls_found;
};

#endif
