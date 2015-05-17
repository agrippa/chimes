#ifndef LBL_PASS_H
#define LBL_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class CallLabelInsertPass : public ParentTransform {
public:
    CallLabelInsertPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    void VisitTopLevel(clang::Decl *toplevel) override;

    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return true; }
    bool createsOMPTree() override { return false; }

private:
};

#endif
