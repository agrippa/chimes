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

#include <sstream>

#include "ReturnUnroll.h"

extern std::set<std::string> functions_with_nocheckpoint_attr;

void ReturnUnroll::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            setParent(child, s);
            VisitStmt(child);
        }
    }
}

void ReturnUnroll::setParent(const clang::Stmt *child,
        const clang::Stmt *parent) {
    assert(parentMap.find(child) == parentMap.end());
    parentMap[child] = parent;
}

std::string ReturnUnroll::stmtToString(const clang::Stmt* s) {
    std::string s_str;
    llvm::raw_string_ostream s_stream(s_str);
    s->printPretty(s_stream, NULL, Context->getPrintingPolicy());
    s_stream.flush();
    return s_str;
}

std::string ReturnUnroll::get_unique_return_varname() {
    std::stringstream ss;
    ss << "____chimes_ret_var_" << ret_var_counter;
    ret_var_counter++;
    return ss.str();
}

std::string ReturnUnroll::get_decl_with_same_type(const clang::Expr *e,
        std::string varname) {
    std::stringstream ss;
    std::string type_str = e->getType().getAsString();
    if (type_str.find("(*)") != std::string::npos) {
        /*
         * If the type of e is a multi-dimensional stack
         * array, we need to special case the declaration of its
         * copy.
         */
        assert(type_str.find("(*)") == type_str.rfind("(*)"));
        size_t index = type_str.find("(*)");
        type_str.insert(index + 2, varname);
        ss << " " << type_str;
    } else if (type_str == "_Bool") {
        ss << " bool " << varname;
    } else {
        ss << " " << type_str << " " << varname;
    }

    return (ss.str());
}

const clang::Stmt *ReturnUnroll::getParent(const clang::Stmt *s) {
    assert(parentMap.find(s) != parentMap.end());
    return parentMap.at(s);
}

void ReturnUnroll::VisitStmt(const clang::Stmt *s) {

    if (const clang::ReturnStmt *ret = clang::dyn_cast<clang::ReturnStmt>(s)) {
        const clang::Expr *ret_value = ret->getRetValue();
        if (ret_value) {
            std::string varname = get_unique_return_varname();
            std::string ret_value_txt = rewriter->getRewrittenText(
                    clang::SourceRange(ret_value->getLocStart(),
                        ret_value->getLocEnd()));
            std::stringstream replace;
            replace << get_decl_with_same_type(ret_value, varname) << "; " <<
                varname << " = (" << ret_value_txt << "); return " << varname <<
                "; ";
            rewriter->ReplaceText(
                    clang::SourceRange(ret->getLocStart(), ret->getLocEnd()),
                    replace.str());
        }
    } else {
        visitChildren(s);
    }
}
