#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "llvm/Support/raw_ostream.h"

#include "BraceInserter.h"

void BraceInserter::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            VisitStmt(child);
        }
    }
}

std::string BraceInserter::to_string(const clang::Stmt *stmt) {
    std::string s;
    llvm::raw_string_ostream stream(s);

    stmt->printPretty(stream, NULL, Context->getPrintingPolicy());
    stream.flush();

    int start_index = 0;
    while (start_index < s.length() && std::isspace(s[start_index])) {
        start_index++;
    }

    int end_index = s.length() - 1;
    while (end_index >= 0 && std::isspace(s[end_index])) {
        end_index--;
    }

    std::string trimmed = s.substr(start_index, end_index - start_index + 1);
    std::replace(trimmed.begin(), trimmed.end(), '\n', ' ');
    return trimmed;
}

void BraceInserter::VisitStmt(const clang::Stmt *s) {
    /*
     * Visit children and do call inserts before adding braces around any
     * children
     */
    visitChildren(s);

    // Insert braces around all if and for statement bodies
    switch(s->getStmtClass()) {
        case clang::Stmt::ForStmtClass: {
            const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(s);
            assert(f);

            const clang::Stmt *body = f->getBody();
            assert(body != NULL);

            if (!clang::isa<clang::CompoundStmt>(body)) {
                std::string for_str;
                llvm::raw_string_ostream for_stream(for_str);

                std::string init_str = to_string(f->getInit());
                std::string cond_str = to_string(f->getCond());
                std::string inc_str = to_string(f->getInc());
                std::string body_str = to_string(f->getBody());

                for_stream << "for (";

                for_stream << init_str;
                if (f->getInit()->getStmtClass() != clang::Stmt::DeclStmtClass) {
                    for_stream << "; ";
                }

                for_stream << cond_str << "; " << inc_str << ") { " <<
                    body_str << "; }";

                for_stream.flush();

                rewriter->ReplaceText(f->getSourceRange(), for_str);
            }
            break;
        }
        case clang::Stmt::IfStmtClass: {
            const clang::IfStmt *f = clang::dyn_cast<clang::IfStmt>(s);
            assert(f);

            assert(f->getThen() != NULL);

            if (!clang::isa<clang::CompoundStmt>(f->getThen()) ||
                    (f->getElse() != NULL &&
                     !clang::isa<clang::CompoundStmt>(f->getElse()))) {
                std::string if_str;
                llvm::raw_string_ostream if_stream(if_str);

                std::string cond_str = to_string(f->getCond());
                std::string then_str = to_string(f->getThen());

                if_stream << "if (" << cond_str << ") {" << then_str << "; }";

                if (f->getElse() != NULL) {
                    if_stream << " else ";
                    if (!clang::isa<clang::IfStmt>(f->getElse())) {
                        if_stream << " {";
                    }

                    std::string else_str = to_string(f->getElse());
                    if_stream << else_str;
                    if (!clang::isa<clang::IfStmt>(f->getElse())) {
                        if_stream << "; } ";
                    }
                }
                if_stream.flush();

                rewriter->ReplaceText(f->getSourceRange(), if_str);
            }
            break;
        }
        default:
            break;
    }
}
