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

class MatchedLocation {
public:
    MatchedLocation(int set_line, int set_col, const char *set_filename) :
        line(set_line), col(set_col), filename(set_filename) {}
    int get_line() { return line; }
    int get_col() { return col; }
    std::string get_filename() { return filename; }

private:
    int line, col;
    std::string filename;
};

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
