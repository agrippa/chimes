#include <sstream>

#include "CallingPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void CallingPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {

        if (const clang::CallExpr *call = clang::dyn_cast<const clang::CallExpr>(s)) {
            const clang::FunctionDecl *decl = call->getDirectCallee();
            if (decl->getNameAsString() == "checkpoint" ||
                    (decl->isDefined() && decl->hasBody())) {
                std::stringstream ss;
                int lbl = getNextFunctionLabel();
                ss << " call_lbl_" << lbl << ": calling(" << lbl << "); ";
                InsertText(start, ss.str(), true, true);
            }
        }
    }

    visitChildren(s);
}
