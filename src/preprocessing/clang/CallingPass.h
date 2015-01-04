#ifndef CALLING_PASS_H
#define CALLING_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class CallingPass : public ParentTransform {
public:
    CallingPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
};

#endif
