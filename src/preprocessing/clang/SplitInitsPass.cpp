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

        /*
         * If this statement is a declaration or list of declarations, e.g. has
         * any of the following forms:
         *
         *   1. int x;
         *   2. int x, y;
         *   3. int x = 3;
         *   4. int x = 3, y = 4;
         *
         */
        if (s->getStmtClass() == clang::Stmt::DeclStmtClass) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);
            std::stringstream acc_decl;
            std::stringstream acc_init;

            // Iterate over declarations in this declaration statement
            for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
                    e = d->decl_end(); i != e; i++) {
                clang::Decl *dd = *i;

                // If we are declaring a local variable
                if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
  
                    // If this local variable declaration has an initializer
                    if (v->hasInit() &&
                            !clang::isa<clang::InitListExpr>(v->getInit()) &&
                            !clang::isa<clang::CXXConstructExpr>(v->getInit())) {
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

                        acc_decl << " " << decl_str << "; ";
                        acc_init << " " << v->getName().str() << " = " <<
                            init_str << "; ";
                    } else {
                        /*
                         * No initializer, just a declaration (possibly in a
                         * list of declarations)
                         */
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

            // RemoveText(rng);

            switch (parent->getStmtClass()) {
                case clang::Stmt::ForStmtClass: {
                    const clang::ForStmt *f =
                        clang::dyn_cast<clang::ForStmt>(parent);
                    if (f->getInit() == s) {
                        std::stringstream full_decl;
                        full_decl << "{ " << acc_decl.str();
                        InsertAtFront(f, full_decl.str());
                        InsertTextAfterToken(f->getLocEnd(), " }");
                        // InsertTextAfterToken(end, acc_init.str());
                        ReplaceText(rng, acc_init.str());
                    } else {
                        std::stringstream complete;
                        complete << acc_decl.str() << acc_init.str();
                        ReplaceText(rng, complete.str());
                        // InsertTextAfterToken(end, complete.str());
                    }
                    break;
                }
                default: {
                    std::stringstream complete;
                    complete << acc_decl.str() << acc_init.str();
                    ReplaceText(rng, complete.str());
                    // InsertTextAfterToken(end, complete.str());
                    break;
                }
            }
        }
    }
    
    visitChildren(s);
}
