#ifndef MALLOC_PASS_H
#define MALLOC_PASS_H

#include <set>
#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class MallocPass : public ParentTransform {
public:
    MallocPass() {
        supportedAllocationFunctions.insert("malloc");
        supportedAllocationFunctions.insert("realloc");
        supportedAllocationFunctions.insert("free");
        supportedAllocationFunctions.insert("cudaMalloc");
        supportedAllocationFunctions.insert("cudaFree");
    }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }
private:
    std::set<std::string> supportedAllocationFunctions;
};

#endif
