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
// extern std::map<std::string, ExternalNPMCall> external_calls;
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
    return (rewriter->getRewrittenText(clang::SourceRange(
                stmt->getLocStart(), stmt->getLocEnd())));
}

static std::string get_external_func_name(std::string fname) {
    return ("____chimes_extern_func_" + fname);
}

void CallTranslator::VisitStmt(const clang::Stmt *s) {
    // Insert braces around all if and for statement bodies
    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
        const clang::FunctionDecl *callee = call->getDirectCallee();

        if (callee) {
            std::string callee_name = callee->getNameAsString();
            assert(callee_name.size() > 0);

            std::string replace_with;
            if (curr_func_is_quick == YES &&
                    is_quick_transformed(callee_name)) {
                replace_with = callee_name + "_quick";
            } else if (curr_func_is_npm == YES) {
                llvm::errs() << "checking if \"" << callee_name <<
                    "\" is in ignorable? " << (ignorable->find(callee_name) != ignorable->end()) << "\n";
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
                    std::string varname = get_external_func_name(
                            callee_name);

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
