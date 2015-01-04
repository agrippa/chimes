#include <sstream>

#include "RegisterStackPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;
extern int lbl_counter;
clang::SourceLocation lastGoto;
bool hasLastGoto = false;

extern std::string constructMangledName(std::string varname);

void RegisterStackPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);
        unsigned end_line = SM->getPresumedLineNumber(end);
        unsigned end_col = SM->getPresumedColumnNumber(end);
        std::string filename = SM->getFilename(start);

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
                ss << " lbl_" << lbl_counter++ << ": ";

                std::stringstream ss2;
                ss2 << " if (____numdebug_replaying) { goto lbl_" << (lbl_counter) << "; } ";

                if (anyInitLists) {
                    TheRewriter->InsertTextBefore(start, ss.str());
                } else {
                    TheRewriter->InsertTextAfterToken(end, ss.str());
                }
                TheRewriter->InsertTextAfterToken(end, acc.str());
                TheRewriter->InsertTextAfterToken(end, ss2.str());

                hasLastGoto = true;
                lastGoto = end;
            }
        }

    }

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            parent = s;
            VisitStmt(child);
        }
    }
}
