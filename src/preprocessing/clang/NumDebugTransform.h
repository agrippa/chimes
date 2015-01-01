#ifndef NUM_DEBUG_TRANSFORM_H
#define NUM_DEBUG_TRANSFORM_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

class NumDebugTransform : public clang::ConstStmtVisitor<NumDebugTransform> {
public:
    NumDebugTransform(clang::Rewriter &R) : TheRewriter(R), SM(R.getSourceMgr()) {
    }

    void VisitStmt(const clang::Stmt *s);

private:
    clang::Rewriter &TheRewriter;
    clang::SourceManager &SM;

    bool alreadyMatched(int line, int col, std::string &filename);
};

#endif
