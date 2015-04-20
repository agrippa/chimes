#include <sstream>

#include "SplitInitsPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/DeclCXX.h>
#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

using namespace clang;

extern DesiredInsertions *insertions;

static std::string join_strings(std::vector<std::string> &l,
        std::string joiner, std::string ender) {
    std::stringstream stream;

    bool first = true;
    for (std::vector<std::string>::iterator i = l.begin(), e = l.end(); i != e;
            i++) {
        if (!first) stream << " " << joiner;
        stream << *i;
        first = false;
    }
    stream << ender;

    return (stream.str());
}

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
        if (s->getStmtClass() == clang::Stmt::DeclStmtClass &&
                !is_omp_for_iter_declaration(s)) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);
            std::stringstream acc_decl;
            std::vector<std::string> acc_init;

            // Iterate over declarations in this declaration statement
            for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
                    e = d->decl_end(); i != e; i++) {
                clang::Decl *dd = *i;

                // If we are declaring a local variable (otherwise do nothing)
                if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
  
                    // If this local variable declaration has an initializer
                    if (v->hasInit() &&
                            !clang::isa<clang::InitListExpr>(v->getInit())) {
                        clang::SourceLocation decl_start = v->getLocStart();
                        clang::SourceLocation decl_end = v->getLocEnd();
                        const clang::Expr *init = v->getInit();

                        std::string init_str;
                        llvm::raw_string_ostream init_stream(init_str);
                        init->printPretty(init_stream, NULL, Context->getPrintingPolicy());
                        init_stream.flush();

                        /*
                         * TODO it seems that anonymous struct declarations in
                         * C++ appear as a variable declaration with a
                         * CXXConstructExpr as its init method. For now, we just
                         * don't support anonymous structs.
                         */
                        v->setInit(NULL);
                        std::string decl_str;
                        llvm::raw_string_ostream decl_stream(decl_str);
                        v->print(decl_stream, Context->getPrintingPolicy());
                        decl_stream.flush();

                        acc_decl << " " << decl_str << "; ";
                        /*
                         * TODO not sure if just checking for zero-length
                         * argument list is okay.
                         */
                        if (clang::isa<clang::CXXConstructExpr>(init)) {
                            if (((const clang::CXXConstructExpr *)init)->getNumArgs() != 0) {
                                int i = 0;
                                while (decl_str[i] != ' ') i++;

                                std::stringstream this_init;
                                this_init << " " << v->getName().str() << " = " <<
                                    decl_str.substr(0, i) << "(" << init_str << ") ";
                                acc_init.push_back(this_init.str());
                            }
                        } else {
                            std::stringstream this_init;
                            this_init << " " << v->getName().str() << " = (" <<
                                init_str << ") ";
                            acc_init.push_back(this_init.str());
                        }
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

            switch (parent->getStmtClass()) {
                case clang::Stmt::ForStmtClass: {
                    const clang::ForStmt *f =
                        clang::dyn_cast<clang::ForStmt>(parent);
                    if (f->getInit() == s) {
                        std::stringstream full_decl;
                        full_decl << "{ " << acc_decl.str();
                        InsertAtFront(f, full_decl.str());
                        InsertTextAfterToken(f->getLocEnd(), " }");
                        ReplaceText(rng, join_strings(acc_init, ",", ";"));
                        insertions->add_line_collapse(
                                startingLine(f->getInit()),
                                endingLine(f->getInit()));
                    } else {
                        std::stringstream complete;
                        complete << acc_decl.str() << join_strings(acc_init,
                                ";", ";");
                        ReplaceText(rng, complete.str());
                        insertions->add_line_collapse(startingLine(s),
                                endingLine(s));
                    }
                    break;
                }
                default: {
                    std::stringstream complete;
                    complete << acc_decl.str() << join_strings(acc_init, ";",
                            ";");
                    ReplaceText(rng, complete.str());
                    insertions->add_line_collapse(startingLine(s),
                            endingLine(s));
                    break;
                }
            }
        }
    }
    
    visitChildren(s);
}
