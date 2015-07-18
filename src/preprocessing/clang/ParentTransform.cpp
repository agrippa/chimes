#include "ParentTransform.h"

#include <sstream>

extern DesiredInsertions *insertions;
extern std::set<std::string> *ignorable;

std::string ParentTransform::get_cond_registration_varname(
        std::string mangled_varname) {
    std::string cond_varname(mangled_varname);
    std::replace(cond_varname.begin(), cond_varname.end(), '|', '_');

    std::stringstream ss;
    ss << "____must_checkpoint_" << cond_varname;
    return (ss.str());
}

std::string ParentTransform::constructRegisterStackVarArgs(StackAlloc *alloc) {
    assert(alloc->get_may_checkpoint());

    std::string actual_name = alloc->get_varname_from_mangled_name();
    std::string cond_varname = get_cond_registration_varname(
            alloc->get_mangled_varname());

    std::stringstream ss;
    ss << "\"" << alloc->get_mangled_varname() << "\", ";
    if (insertions->always_checkpoints(alloc)) {
        ss << "(int *)0x0, ";
    } else {
        ss << "&" << cond_varname << ", ";
    }
    ss << "\"" << alloc->get_full_type() << "\", ";
    if ((alloc->get_full_type())[0] == '[') {
        // Stack array
        ss << "(void *)(" << actual_name << "), ";
    } else {
        ss << "(void *)(&" << actual_name << "), ";
    }
    ss << "(size_t)" << (alloc->get_type_size_in_bits() / 8) << ", ";
    ss << (alloc->get_is_ptr() ? "1" : "0") << ", ";
    ss << (alloc->get_is_struct() ? "1" : "0") << ", ";
    ss << alloc->get_num_ptr_fields();

    if (alloc->ptrs_begin() != alloc->ptrs_end()) {
        bool is_unnamed = insertions->get_struct_fields_for(
                alloc->get_struct_type_name())->get_is_unnamed();
        std::string full_struct_type_name = (is_unnamed ?
                alloc->get_struct_type_name() :
                "struct " + alloc->get_struct_type_name());

        for (std::vector<std::string>::iterator ptrs =
                alloc->ptrs_begin(), ptrs_end = alloc->ptrs_end();
                ptrs != ptrs_end; ptrs++) {
            std::string ptr_field = *ptrs;
            ss << ", (int)__builtin_offsetof(" << full_struct_type_name << ", " <<
                ptr_field << ")";
        }
    }
    return ss.str();
}

std::string ParentTransform::constructRegisterStackVar(StackAlloc *alloc) {
    std::stringstream ss;
    if (insertions->always_checkpoints(alloc)) {
        ss << " register_stack_var(" << constructRegisterStackVarArgs(alloc) <<
            "); ";
    } else {
        std::string cond_varname = get_cond_registration_varname(
                alloc->get_mangled_varname());
        ss << " if (" << cond_varname << " != 0) { register_stack_var(" <<
            constructRegisterStackVarArgs(alloc) << "); } ";
    }
    return ss.str();

}

void ParentTransform::visitChildren(const clang::Stmt *s) {
    setRootFlag(false);

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            parent = s;
            setParent(child, s);
            VisitStmt(child);
        }
    }
}

std::string ParentTransform::stmtToString(const clang::Stmt* s) {
    std::string s_str;
    llvm::raw_string_ostream s_stream(s_str);
    s->printPretty(s_stream, NULL, Context->getPrintingPolicy());
    s_stream.flush();
    return s_str;
}

const clang::Stmt *ParentTransform::getParentMayBeNull(const clang::Stmt *s) {
    if (parentMap.find(s) == parentMap.end()) {
        return NULL;
    } else {
        return parentMap[s];
    }
}

const clang::Stmt *ParentTransform::getParent(const clang::Stmt *s) {
    const clang::Stmt *parent = getParentMayBeNull(s);
    if (parent == NULL) {
        llvm::errs() << "No parent found for \"" << stmtToString(s) << "\"\n";
        assert(false);
    } else {
        return parent;
    }
}

void ParentTransform::setParent(const clang::Stmt *child,
        const clang::Stmt *parent) {
    assert(parentMap.find(child) == parentMap.end());
    parentMap[child] = parent;
}

void ParentTransform::ReplaceWholeStatement(const clang::Stmt *s,
        std::string st) {
    const clang::Stmt *parent = getParent(s);
    while (!clang::isa<clang::CompoundStmt>(parent) &&
            !clang::isa<clang::CaseStmt>(parent)) {
        s = parent;
        parent = getParent(s);
    }
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();
    rewriter->ReplaceText(clang::SourceRange(start, end),
            st);
    insertions->AppendToDiagnostics("ReplaceText", start, st, *SM);
}

std::string ParentTransform::getRewrittenText(clang::SourceRange range) {
    return (rewriter->getRewrittenText(range));
}

clang::PresumedLoc ParentTransform::InsertAtFront(const clang::Stmt *s,
        std::string st) {
    const clang::Stmt *parent = getParent(s);
    while (!clang::isa<clang::CompoundStmt>(parent) &&
            !clang::isa<clang::CaseStmt>(parent)) {
        s = parent;
        parent = getParent(s);
    }
    clang::SourceLocation start = s->getLocStart();
    rewriter->InsertText(start, st, true, true);
    insertions->AppendToDiagnostics("InsertText", start, st, *SM);

    return SM->getPresumedLoc(start);
}

clang::SourceLocation ParentTransform::getStartOfNextStmt(
        const clang::Stmt *s) {
    const clang::Stmt *parent = getParent(s);
    while (!clang::isa<clang::CompoundStmt>(parent)) {
        s = parent;
        parent = getParent(s);
    }

    const clang::CompoundStmt *parent_cmpd = clang::dyn_cast<clang::CompoundStmt>(parent);
    assert(parent_cmpd != NULL);

    const clang::Stmt *found_next = NULL;
    clang::CompoundStmt::const_body_iterator i = parent_cmpd->body_begin();
    clang::CompoundStmt::const_body_iterator e = parent_cmpd->body_end();
    while (i != e) {
        const clang::Stmt *curr = *i;
        if (curr == s) {
            break;
        }
        i++;
    }
    assert(i != e);
    i++;
    if (i == e) {
        // No statement after this one
        return parent_cmpd->getRBracLoc();
    } else {
        const clang::Stmt *next = *i;
        return next->getLocStart();
    }
}

void ParentTransform::InsertText(clang::SourceLocation start, std::string s,
        bool insertAfter, bool indent) {
    rewriter->InsertText(start, s, insertAfter, indent);
    insertions->AppendToDiagnostics("InsertText", start, s, *SM);
}

void ParentTransform::InsertTextBefore(clang::SourceLocation start,
        std::string s) {
    rewriter->InsertTextBefore(start, s);
    insertions->AppendToDiagnostics("InsertTextBefore", start, s, *SM);
}

void ParentTransform::InsertTextAfterToken(clang::SourceLocation start,
        std::string s) {
    rewriter->InsertTextAfterToken(start, s);
    insertions->AppendToDiagnostics("InsertTextAfterToken", start, s, *SM);
}

void ParentTransform::InsertTextAfter(clang::SourceLocation start,
        std::string s) {
    rewriter->InsertTextAfter(start, s);
    insertions->AppendToDiagnostics("InsertTextAfter", start, s, *SM);
}

void ParentTransform::RemoveText(clang::SourceRange rng) {
    rewriter->RemoveText(rng);
    insertions->AppendToDiagnostics("RemoveTextBegin", rng.getBegin(), "", *SM);
    insertions->AppendToDiagnostics("RemoveTextEnd", rng.getEnd(), "", *SM);
}

void ParentTransform::ReplaceText(clang::SourceLocation loc, unsigned len,
        std::string new_str) {
    rewriter->ReplaceText(loc, len, new_str);

    std::stringstream ss;
    ss << "len=" << len << " " << new_str;
    insertions->AppendToDiagnostics("ReplaceText", loc, ss.str(), *SM);
}

void ParentTransform::ReplaceText(clang::SourceRange range, std::string s) {
    rewriter->ReplaceText(range, s);

    insertions->AppendToDiagnostics("ReplaceTextStart", range.getBegin(), s, *SM);
    insertions->AppendToDiagnostics("ReplaceTextEnd", range.getEnd(), "", *SM);
}

void ParentTransform::setLastGoto(clang::SourceLocation last) {
    assert(setsLastGoto());
    hasGoto = true;
    lastGoto = last;
}

clang::SourceLocation ParentTransform::getLastGoto() {
    assert(setsLastGoto());
    assert(hasLastGoto());
    return lastGoto;
}

bool ParentTransform::hasLastGoto() {
    return hasGoto;
}

void ParentTransform::resetLastGoto() {
    assert(setsLastGoto());
    hasGoto = false;
}

int ParentTransform::getNumRegisterLabels() {
    assert(createsRegisterLabels());
    return curr_register_label;
}

int ParentTransform::getNextRegisterLabel() {
    assert(createsRegisterLabels());
    return curr_register_label++;
}

OMPTree *ParentTransform::getOMPTree() {
    assert(createsOMPTree());
    return ompTree;
}

void ParentTransform::resetRegisterLabels() {
    assert(createsRegisterLabels());
    curr_register_label = 0;
}

int ParentTransform::getNumFunctionLabels() {
    assert(createsFunctionLabels());
    return curr_function_label;
}

int ParentTransform::getNextFunctionLabel() {
    assert(createsFunctionLabels());
    return curr_function_label++;
}

void ParentTransform::resetFunctionLabels(int nlabels) {
    assert(createsFunctionLabels());
    curr_function_label = nlabels;
}

void ParentTransform::resetRootFlag() {
    root_flag = true;
}

void ParentTransform::resetOMPTree() {
    ompTree = new OMPTree(SM, Context);
}

void ParentTransform::setRootFlag(bool v) {
    root_flag = v;
}

bool ParentTransform::getRootFlag() {
    return root_flag;
}

int ParentTransform::startingLine(const clang::Stmt *stmt) {
    return SM->getPresumedLoc(stmt->getLocStart()).getLine();
}

int ParentTransform::endingLine(const clang::Stmt *stmt) {
    return SM->getPresumedLoc(stmt->getLocEnd()).getLine();
}

bool ParentTransform::is_omp_for_iter_declaration(const Stmt *s) {
    const DeclStmt *d = dyn_cast<DeclStmt>(s);
    const Stmt *parent = getParentMayBeNull(s);
    int line =
        SM->getPresumedLoc(s->getLocStart()).getLine();

    if (d && d->isSingleDecl() && parent && isa<ForStmt>(parent)) {
        const ForStmt *parent_for = dyn_cast<ForStmt>(parent);
        assert(parent_for);
        if (parent_for->getInit() == s) {
            if (const VarDecl *var = dyn_cast<VarDecl>(d->getSingleDecl())) {
                if (var->hasInit() &&
                        insertions->get_omp_pragma_for(line - 1)) {
                    return true;
                }
            }
        }
    }
    return false;
}

std::string ParentTransform::get_callee_name(const CallExpr *call) {
    if (call->getDirectCallee() == NULL) {
        return ("anon");
    } else {
        return (call->getDirectCallee()->getNameAsString());
    }
}

bool ParentTransform::should_be_labelled(const CallExpr *call) {
    std::string callee_name = get_callee_name(call);

    if (callee_name == "register_custom_init_handler") {
        return false;
    }
    if (clang::isa<const clang::CXXConstructExpr>(call)) {
        return false;
    }
    if (ignorable->find(callee_name) != ignorable->end()) {
        return false;
    }

    return true;
    // return (callee_name == "anon" || insertions->may_cause_checkpoint(callee_name));
}

std::string ParentTransform::getArgString(const clang::CallExpr *call, int arg) {
    assert(arg < call->getNumArgs());
    return getRewrittenText(clang::SourceRange(call->getArg(arg)->getLocStart(),
                call->getArg(arg)->getLocEnd()));
}

std::string ParentTransform::get_func_symbol(const CallExpr *call) {
    std::string callee_name = get_callee_name(call);
    std::string func_symbol;
    if (callee_name == "anon") {
        func_symbol = stmtToString(call->getCallee());
    } else {
        func_symbol = callee_name;
    }
    return (func_symbol);
}

std::string ParentTransform::get_unique_argument_varname() {
    std::stringstream ss;
    ss << "____chimes_arg" << arg_counter;
    arg_counter++;
    return ss.str();
}

bool ParentTransform::has_side_effects(const Expr *arg) {
    switch (arg->getStmtClass()) {
        case (clang::Stmt::ImplicitCastExprClass): {
            const Expr *sub = dyn_cast<ImplicitCastExpr>(arg)->getSubExpr();

            if (isa<clang::DeclRefExpr>(sub) ||
                    isa<clang::StringLiteral>(sub)) {
                return false;
            }
            if (isa<clang::ImplicitCastExpr>(sub)) {
                const Expr *sub_sub =
                    dyn_cast<ImplicitCastExpr>(sub)->getSubExpr();
                if (isa<clang::DeclRefExpr>(sub_sub)) {
                    return false;
                } else {
#ifdef VERBOSE
                    std::string st = dyn_cast<clang::ImplicitCastExpr>(
                            sub)->getSubExpr()->getStmtClassName();
                    llvm::errs() << "    Doubly nested ImplicitCast " << st <<
                        "\n";
#endif
                }
            }
#ifdef VERBOSE
            llvm::errs() << "  ImplicitCast NESTED " <<
                sub->getStmtClassName() << "\n";
#endif
            break;
        }
        case (clang::Stmt::DeclRefExprClass): {
            return false;
        }
        case (clang::Stmt::IntegerLiteralClass): {
            return false;
        }
        case (clang::Stmt::UnaryOperatorClass): {
            const UnaryOperator *unary = dyn_cast<UnaryOperator>(arg);
            const Expr *sub = unary->getSubExpr();
            switch (unary->getOpcode()) {
                case (UO_AddrOf): {
                    switch (sub->getStmtClass()) {
                        case (clang::Stmt::DeclRefExprClass):
                            // Address of a variable
                            return false;
                        case (clang::Stmt::ParenExprClass):
#ifdef VERBOSE
                            llvm::errs() << "Paren child is " <<
                                dyn_cast<ParenExpr>(
                                        sub)->getSubExpr()->getStmtClassName()
                                << "\n";
#endif
                            break;
                    }
                }
            }
#ifdef VERBOSE
            llvm::errs() << "  UnaryOp NESTED " << sub->getStmtClassName() <<
                " " << "opcode=" << unary->getOpcode() << "\n";
#endif
            break;
        }
    }
#ifdef VERBOSE
    llvm::errs() << "ARG is a " << arg->getStmtClassName() << "\n";
#endif
    return true;
}

bool ParentTransform::needsToBeHoisted(std::string funcname, const Expr *arg,
        bool gen_quick) {
    bool may_cause_checkpoint = true;
    if (funcname != "anon") {
        may_cause_checkpoint = insertions->may_cause_checkpoint(funcname);
    }

    return (!gen_quick && may_cause_checkpoint && has_side_effects(arg));
}

int ParentTransform::extractArgsWithSideEffects(const CallExpr *call,
        std::string funcname, int nargs, std::stringstream *ss,
        std::vector<std::string> *arg_varnames, bool gen_quick) {
    int count_args_with_side_effects = 0;

    for (int i = 0; i < nargs; i++) {
        std::string varname = get_unique_argument_varname();
        const Expr *arg = call->getArg(i);
        assert(!isa<CXXDefaultArgExpr>(arg));

        if (needsToBeHoisted(funcname, arg, gen_quick)) {
            std::string type_str = arg->getType().getAsString();
            if (type_str.find("(*)") != std::string::npos) {
                /*
                 * If one of the arguments is a multi-dimensional stack
                 * array, we need to special case the declaration of its
                 * copy.
                 */
                assert(type_str.find("(*)") == type_str.rfind("(*)"));
                size_t index = type_str.find("(*)");
                type_str.insert(index + 2, varname);
                *ss << " " << type_str << ";";
            } else {
                *ss << " " << arg->getType().getAsString() << " " <<
                    varname << "; ";
            }
            arg_varnames->push_back(varname);
            count_args_with_side_effects++;
        } else {
            std::string arg_str = stmtToString(arg);
#ifdef VERBOSE
            llvm::errs() << "Deciding " << arg_str <<
                " does not have side effects, class=" <<
                arg->getStmtClassName() << "\n";
#endif
            arg_varnames->push_back(arg_str);
        }
    }

    return (count_args_with_side_effects);
}

std::string ParentTransform::generateNormalCall(const CallExpr *call,
        int lbl, AliasesPassedToCallSite callsite, bool gen_quick,
        std::string loc_arg) {
    std::string callee_name = get_callee_name(call);
    std::string func_symbol = get_func_symbol(call);

    /*
     * Default parameters cannot be checkpointed, nor are they
     * printable.
     */
    int nargs = call->getNumArgs();
    while (nargs > 0 &&
            isa<CXXDefaultArgExpr>(call->getArg(
                    nargs - 1))) {
        nargs--;
    }

    std::stringstream ss;
    std::vector<std::string> arg_varnames;
    int count_args_with_side_effects =
        extractArgsWithSideEffects(call, callee_name, nargs, &ss,
                &arg_varnames, gen_quick);

    std::stringstream replace_func_call;
    replace_func_call << "(" << func_symbol << ")(";

    if (count_args_with_side_effects > 0) {
        ss << " if (!____chimes_replaying) { ";
    }
    for (int i = 0; i < nargs; i++) {
        const Expr *arg = call->getArg(i);
        if (needsToBeHoisted(callee_name, arg, gen_quick)) {
            ss << arg_varnames[i] << " = (" << stmtToString(arg) <<
                "); ";
        }

        if (i > 0) replace_func_call << ", ";
        replace_func_call << arg_varnames[i];
    }
    if (count_args_with_side_effects > 0) {
        ss << " } ";
    }
    replace_func_call << ")";

    // std::string loc_arg = get_loc_arg(call, callee_name);

    ss << " calling((void*)" << func_symbol << ", " << lbl << ", " <<
        loc_arg << ", " << get_return_alias(callee_name, callsite) <<
        "UL, " << callsite.nparams();
    for (unsigned a = 0; a < callsite.nparams(); a++) {
        ss << ", (size_t)(" << callsite.alias_no_for(a) << "UL)";
    }
    ss << "); ";

    return (" ({ " + ss.str() + replace_func_call.str() + "; }) ");
}

size_t ParentTransform::get_return_alias(std::string fname,
        AliasesPassedToCallSite callsite) {
    return (insertions->isAllocator(fname) ? 0 : callsite.get_return_alias());
}

std::string ParentTransform::generateFunctionPointerCall(const CallExpr *call,
        AliasesPassedToCallSite callsite, int lbl, std::string loc_arg) {
    std::stringstream ss;
    std::string fptr_type = call->getCallee()->getType().getAsString();

    // std::string loc_arg = get_loc_arg(call);

    ss << "((" << fptr_type << ")(translate_fptr((void *)" <<
        stmtToString(call->getCallee()) << ", " << lbl << ", " <<
        loc_arg << ", " << callsite.get_return_alias() << "UL, " <<
        callsite.nparams();

    for (int i = 0; i < callsite.nparams(); i++) {
        ss << ", " << callsite.alias_no_for(i) << "UL";
    }
    ss << ")))(";

    for (int a = 0; a < call->getNumArgs(); a++) {
        const Expr *arg = call->getArg(a);
        if (a != 0) ss << ", ";
        ss << getRewrittenText(clang::SourceRange(
                    arg->getLocStart(), arg->getLocEnd()));
    }
    ss << ")";
    return ss.str();
}
