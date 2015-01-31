#ifndef ALIAS_CHANGED_PASS_H
#define ALIAS_CHANGED_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"
#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>

#include "ParentTransform.h"

class AliasChangedPass : public ParentTransform {
public:
    AliasChangedPass() { }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }

private:
    void WrapAroundBlock(const clang::Stmt *block, std::string toPrefix,
            std::string toAppend);
};

#endif
