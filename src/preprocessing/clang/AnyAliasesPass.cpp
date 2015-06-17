#include <sstream>

#include "AnyAliasesPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

using namespace std;

extern DesiredInsertions *insertions;

void AnyAliasesPass::VisitTopLevel(clang::FunctionDecl *toplevel) {
}

void AnyAliasesPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        int start_line = SM->getPresumedLineNumber(start);
        int start_col = SM->getPresumedColumnNumber(start);

        if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
            const clang::FunctionDecl *callee = call->getDirectCallee();
            if (callee != NULL) {
                std::string funcname = callee->getNameAsString();

                std::string any_aliased = "any_aliased";
                if (funcname == any_aliased) {
                    int pragma_start_line = start_line + 1;
                    std::string containing_file(SM->getPresumedLoc(start).getFilename());
                    Scop scop = insertions->findScop(containing_file, pragma_start_line);
                    std::set<size_t> *accessed = insertions->getAllAccesses(scop);

                    std::stringstream ss;
                    ss << accessed->size();
                    for (std::set<size_t>::iterator i = accessed->begin(),
                            e = accessed->end(); i != e; i++) {
                        ss << ", " << *i << "ULL";
                    }
                    delete accessed;

                    ReplaceText(start, any_aliased.length() + 2, "any_aliased(" + ss.str());
                }
            }
        }
    }

    visitChildren(s);
}
