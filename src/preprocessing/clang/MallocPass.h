#ifndef MALLOC_PASS_H
#define MALLOC_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class MallocPass : public ParentTransform {
public:
    MallocPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
};

#endif
