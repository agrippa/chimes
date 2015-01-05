#ifndef START_PASS_H
#define START_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class StartExitPass : public ParentTransform {
public:
    StartExitPass() { }

    void VisitTopLevel(clang::Decl *toplevel) override;
    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return true; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }
};

#endif
