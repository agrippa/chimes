#ifndef SPLIT_INITS_PASS_H
#define SPLIT_INITS_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class SplitInitsPass : public ParentTransform {
public:
    SplitInitsPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }
    bool createsOMPTree() override { return false; }
};

#endif
