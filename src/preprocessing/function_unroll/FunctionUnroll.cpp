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

#include "FunctionUnroll.h"

extern std::set<std::string> functions_with_nocheckpoint_attr;

void FunctionUnroll::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            setParent(child, s);
            VisitStmt(child);
        }
    }
}

void FunctionUnroll::setParent(const clang::Stmt *child,
        const clang::Stmt *parent) {
    assert(parentMap.find(child) == parentMap.end());
    parentMap[child] = parent;
}

std::string FunctionUnroll::stmtToString(const clang::Stmt* s) {
    std::string s_str;
    llvm::raw_string_ostream s_stream(s_str);
    s->printPretty(s_stream, NULL, Context->getPrintingPolicy());
    s_stream.flush();
    return s_str;
}

std::string FunctionUnroll::get_unique_arg_varname() {
    std::stringstream ss;
    ss << "____chimes_unroll_var_" << arg_var_counter;
    arg_var_counter++;
    return ss.str();
}

std::string FunctionUnroll::get_decl_with_same_type(const clang::Expr *e,
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
    } else {
        ss << " " << e->getType().getAsString() << " " <<
            varname;
    }

    return (ss.str());
}

void FunctionUnroll::convert_helper(const clang::Stmt *curr,
        std::stringstream *ss) {
    for (clang::Stmt::const_child_iterator i = curr->child_begin(),
            e = curr->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            convert_helper(child, ss);
        }
    }

    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(curr)) {
        if (call->getDirectCallee() == NULL ||
                call->getDirectCallee()->getNameAsString().size() == 0 ||
                ignorable.find(call->getDirectCallee()->getNameAsString()) ==
                    ignorable.end()) {
            std::string varname = get_unique_arg_varname();
            *ss << get_decl_with_same_type(call, varname) << " = " <<
                rewriter->getRewrittenText(clang::SourceRange(
                            call->getLocStart(), call->getLocEnd())) << "; ";
            rewriter->ReplaceText(clang::SourceRange(call->getLocStart(),
                        call->getLocEnd()), varname);
        }
    }
}

std::string FunctionUnroll::convert(const clang::CallExpr *call) {
    std::stringstream ss;
    for (clang::Stmt::const_child_iterator i = call->child_begin(),
            e = call->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            convert_helper(child, &ss);
        }
    }

    return ss.str();
}

const clang::Stmt *FunctionUnroll::getParent(const clang::Stmt *s) {
    assert(parentMap.find(s) != parentMap.end());
    return parentMap.at(s);
}

void FunctionUnroll::InsertAtFront(const clang::Stmt *s,
        std::string st) {
    const clang::Stmt *parent = getParent(s);
    while (!clang::isa<clang::CompoundStmt>(parent) &&
            !clang::isa<clang::CaseStmt>(parent)) {
        s = parent;
        parent = getParent(s);
    }
    clang::SourceLocation start = s->getLocStart();
    rewriter->InsertText(start, st, true, true);
}

void FunctionUnroll::VisitStmt(const clang::Stmt *s) {

    if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
        std::string prefix = convert(call);
        InsertAtFront(call, prefix);

        const clang::FunctionDecl *callee = call->getDirectCallee();
        if (callee && callee->hasAttrs()) {
            for (clang::AttrVec::const_iterator i = callee->getAttrs().begin(),
                    e = callee->getAttrs().end(); i != e; i++) {
                clang::NoCheckpointAttr *a = clang::dyn_cast<clang::NoCheckpointAttr>(*i);
                if (a) {
                    functions_with_nocheckpoint_attr.insert(callee->getNameAsString());
                }
            }
        }
    } else {
        visitChildren(s);
    }
}
