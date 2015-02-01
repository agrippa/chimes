#include <sstream>

#include "RegisterStackPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

extern std::string constructMangledName(std::string varname);

void RegisterStackPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {

        if (s->getStmtClass() == clang::Stmt::DeclStmtClass) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);
            std::stringstream acc;

            bool anyInitLists = false;
            for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
                    e = d->decl_end(); i != e; i++) {
                clang::Decl *dd = *i;
                if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
                    std::string mangled = constructMangledName(v->getName().str());
                    StackAlloc *alloc = insertions->findStackAlloc(mangled);

                    llvm::errs() << "Found stack alloc info " << alloc << " for var " << mangled << "\n";

                    if (alloc != NULL) {
                        acc << constructRegisterStackVar(alloc);
                        if (v->hasInit() && clang::dyn_cast<clang::InitListExpr>(v->getInit())) {
                            anyInitLists = true;
                        }
                    }
                }
            }

            if (acc.str().length() > 0) {
                std::stringstream ss;
                int lbl = getNextRegisterLabel();
                ss << " lbl_" << lbl << ": ";

                std::stringstream ss2;
                ss2 << " if (____numdebug_replaying) { goto lbl_" << (lbl + 1) << "; } ";

                if (anyInitLists) {
                    InsertTextBefore(start, ss.str());
                } else {
                    InsertTextAfterToken(end, ss.str());
                }
                InsertTextAfterToken(end, acc.str());
                InsertTextAfterToken(end, ss2.str());

                setLastGoto(end);
            }
        }

    }

    visitChildren(s);
}
