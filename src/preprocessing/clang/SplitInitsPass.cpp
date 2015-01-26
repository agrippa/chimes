#include <sstream>

#include "SplitInitsPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void SplitInitsPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {

        if (s->getStmtClass() == clang::Stmt::DeclStmtClass) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);
            std::stringstream acc_decl;

            for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
                    e = d->decl_end(); i != e; i++) {
                clang::Decl *dd = *i;
                if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
   
                    if (v->hasInit() && !clang::dyn_cast<clang::InitListExpr>(v->getInit()) && !clang::dyn_cast<clang::CXXConstructExpr>(v->getInit())) {
                        clang::SourceLocation decl_start = v->getLocStart();
                        clang::SourceLocation decl_end = v->getLocEnd();
                        const clang::Expr *init = v->getInit();

                        std::string init_str;
                        llvm::raw_string_ostream init_stream(init_str);
                        init->printPretty(init_stream, NULL, Context->getPrintingPolicy());
                        init_stream.flush();

                        v->setInit(NULL);
                        std::string decl_str;
                        llvm::raw_string_ostream decl_stream(decl_str);
                        v->print(decl_stream, Context->getPrintingPolicy());
                        decl_stream.flush();

                        std::stringstream converted;
                        converted << " " << decl_str << "; " << v->getName().str() <<
                            " = " << init_str << "; ";
                        acc_decl << converted.str() << " ";
                    } else {
                        std::string decl_str;
                        llvm::raw_string_ostream decl_stream(decl_str);
                        v->print(decl_stream, Context->getPrintingPolicy());
                        decl_stream.flush();

                        acc_decl << decl_str << "; ";
                    }
                }
            }

            clang::SourceLocation decl_start = s->getLocStart();
            clang::SourceLocation decl_end = s->getLocEnd();

            clang::SourceRange rng;
            rng.setBegin(decl_start);
            rng.setEnd(decl_end);

            RemoveText(rng);

            InsertTextAfterToken(end, acc_decl.str());
        }
    }
    
    visitChildren(s);
}
