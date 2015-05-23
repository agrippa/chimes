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

extern INSIDE_FUNC curr_func_is_quick;
extern INSIDE_FUNC curr_func_is_npm;
extern std::map<std::string, ExternalNPMCall> external_calls;
extern std::set<std::string> *ignorable;

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

static std::string get_external_func_name(std::string fname) {
    return ("____chimes_extern_func_" + fname);
}

void CallTranslator::VisitStmt(const clang::Stmt *s) {
    // Insert braces around all if and for statement bodies
    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
        const clang::FunctionDecl *callee = call->getDirectCallee();
        if (callee && SM->isInMainFile(callee->getLocStart())) {
            std::string callee_name = callee->getNameAsString();
            assert(callee_name.size() > 0);

            std::string replace_with;
            if (curr_func_is_quick == YES &&
                    is_quick_transformed(callee_name)) {
                replace_with = callee_name + "_quick";
            } else if (curr_func_is_npm == YES) {
                if (ignorable->find(callee_name) != ignorable->end()) {
                    /*
                     * Skip this function, we know it is an externally defined
                     * function that won't create a checkpoint.
                     */
                } else if (is_npm_transformed(callee_name)) {
                    /*
                     * There is a local NPM version of this function defined in
                     * the same compilation unit. We can simply reference it
                     * directly.
                     */
                    replace_with = callee_name + "_npm";
                } else {
                    /*
                     * We need to reference an externally defined NPM function
                     * through a function pointer.
                     */
                    const int line_no = SM->getPresumedLoc(
                            call->getLocStart()).getLine();
                    std::string varname = get_external_func_name(
                            callee_name);

                    if (external_calls.find(callee_name) ==
                            external_calls.end()) {

                        std::string filename = SM->getPresumedLoc(
                                call->getLocStart()).getFilename();
                        const clang::FunctionType *type =
                            callee->getFunctionType();
                        assert(type);
                        std::string type_str =
                            type->getCanonicalTypeInternal().getAsString();

                        int index = 0;
                        while (type_str[index] != '(') index++;
                        type_str.insert(index, "(*" + varname + ")");

                        external_calls.insert(
                                std::pair<std::string, ExternalNPMCall>(
                                    callee_name, ExternalNPMCall(callee_name,
                                        varname, type_str, line_no, filename)));
                    } else {
                        external_calls.at(callee_name).update_line(line_no);
                    }
                    replace_with = ("(*" + varname + ")");
                }
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

    visitChildren(s);
}
