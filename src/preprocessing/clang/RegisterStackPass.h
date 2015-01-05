#ifndef REGISTER_STACK_PASS_H
#define REGISTER_STACK_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class RegisterStackPass : public ParentTransform {
public:
    RegisterStackPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return true; }
    bool createsRegisterLabels() override { return true; }
    bool createsFunctionLabels() override { return false; }
};

#endif
