#ifndef MALLOC_PASS_H
#define MALLOC_PASS_H

#include <set>
#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class FoundAlloc {
    public:
        FoundAlloc(int set_col, const clang::CallExpr *set_call) : col(set_col),
                call(set_call) {}

        int get_col() { return col; }
        const clang::CallExpr *get_call() { return call; }

        bool operator < (const FoundAlloc& other) const {
            return col < other.col;
        }

    private:
        unsigned col;
        const clang::CallExpr *call;
};

class MallocPass : public ParentTransform {
public:
    MallocPass() {
        supportedAllocationFunctions.insert("malloc");
        supportedAllocationFunctions.insert("calloc");
        supportedAllocationFunctions.insert("realloc");
        supportedAllocationFunctions.insert("free");
        supportedAllocationFunctions.insert("cudaMalloc");
        supportedAllocationFunctions.insert("cudaFree");
    }

    void VisitStmt(const clang::Stmt *s) override;
    void VisitTopLevel(clang::Decl *toplevel) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }
    bool createsOMPTree() override { return false; }
private:
    std::set<std::string> supportedAllocationFunctions;

    // Mapping from line number -> function name -> function call information
    std::map<int, std::map<std::string, std::vector<FoundAlloc> *> *>
        found_allocs;
};

#endif
