#include "ParentTransform.h"

#include <sstream>

extern DesiredInsertions *insertions;

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

    for (std::vector<std::string>::iterator ptrs =
            alloc->ptrs_begin(), ptrs_end = alloc->ptrs_end();
            ptrs != ptrs_end; ptrs++) {
        std::string ptr_field = *ptrs;
        ss << ", (int)__builtin_offsetof(struct " <<
            alloc->get_struct_type_name() << ", " << ptr_field <<
            ")";
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
    bool old = inside_function_arguments;
    inside_function_arguments = (isa<CallExpr>(s) || old);

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            parent = s;
            setParent(child, s);
            VisitStmt(child);
        }
    }

    inside_function_arguments = old;
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
