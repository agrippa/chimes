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
    MatchedLocation(Line *set_line, int set_col, const char *set_filename) :
        line(set_line), col(set_col), filename(set_filename) {}
    Line* get_line() { return line; }
    int get_col() { return col; }
    std::string get_filename() { return filename; }

private:
    Line *line;
    int col;
    std::string filename;
};

class AliasChangedPass : public ParentTransform {
public:
    AliasChangedPass(LineNoSet& set_lines) : ParentTransform(set_lines) { }

    void VisitStmt(const clang::Stmt *s) override;
    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return false; }
    bool createsFunctionLabels() override { return false; }
    bool createsOMPTree() override { return false; }

private:
    void WrapAroundBlock(const clang::Stmt *block, std::string toPrefix,
            std::string toAppend, const clang::Stmt *parent);
    int startingLine(const clang::Stmt *stmt);
    int endingLine(const clang::Stmt *stmt);
    int countLines(std::string s, llvm::raw_string_ostream& stream);
    void addNecessaryLines(int curr_line, int target,
            llvm::raw_string_ostream &stream);
    std::string to_string(const clang::Stmt *stmt);
};

#endif
