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

#include "CallTranslator.h"

#include <sstream>

extern bool curr_func_is_quick;

void CallTranslator::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            VisitStmt(child);
        }
    }
}

std::string CallTranslator::to_string(const clang::Stmt *stmt) {
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

void CallTranslator::VisitStmt(const clang::Stmt *s) {
    // Insert braces around all if and for statement bodies
    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
        const clang::FunctionDecl *callee = call->getDirectCallee();
        if (callee) {
            std::string callee_name = callee->getNameAsString();
            assert(callee_name.size() > 0);
            if (is_transformed(callee_name)) {

                std::string replace_with;
                if (curr_func_is_quick == YES) {
                    replace_with = callee_name + "_quick";
                }

                if (replace_with.size() > 0) {
                    std::stringstream ss;
                    ss << replace_with << "(";

                    for (int i = 0; i < call->getNumArgs(); i++) {
                        if (i != 0) ss << ", ";
                        ss << to_string(call->getArg(i));
                    }
                    ss << ")";
                    rewriter->ReplaceText(clang::SourceRange(
                                call->getLocStart(), call->getLocEnd()),
                            ss.str());
                }
            }
        }
    }

    visitChildren(s);
}
