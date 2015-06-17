#ifndef ANY_ALIASES_PASS_H
#define ANY_ALIASES_PASS_H

#include <set>
#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class AnyAliasesPass : public ParentTransform {
public:
    AnyAliasesPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    void VisitTopLevel(clang::FunctionDecl *toplevel) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }
    bool createsOMPTree() override { return false; }
    bool requiresMangledVarsReset() { return false; }
    bool transformsOriginal() { return false; }
private:
};

#endif
