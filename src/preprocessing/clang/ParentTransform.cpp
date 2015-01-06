#include "ParentTransform.h"

#include <sstream>

std::string ParentTransform::constructRegisterStackVar(StackAlloc *alloc) {
    int first_pipe = alloc->get_mangled_varname().find('|');
    std::string actual_name = alloc->get_mangled_varname().substr(
            first_pipe + 1);;
    actual_name = actual_name.substr(0, actual_name.find('|'));

    std::stringstream ss;
    ss << " register_stack_var(\"" << alloc->get_mangled_varname() <<
        "\", \"" << alloc->get_full_type() << "\", &" <<
        actual_name << ", " << (alloc->get_type_size_in_bits() / 8)
        << ", " << (alloc->get_is_ptr() ? "1" : "0") << ", " <<
        (alloc->get_is_struct() ? "1" : "0") << ", " <<
        alloc->get_num_ptr_fields();
    for (std::vector<std::string>::iterator ptrs =
            alloc->ptrs_begin(), ptrs_end = alloc->ptrs_end();
            ptrs != ptrs_end; ptrs++) {
        std::string ptr_field = *ptrs;
        ss << ", (int)offsetof(struct " <<
            alloc->get_struct_type_name() << ", " << ptr_field <<
            ")";
    }
    ss << "); ";

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

const clang::Stmt *ParentTransform::getParent(const clang::Stmt *s) {
    assert(parentMap.find(s) != parentMap.end());
    return parentMap[s];
}

void ParentTransform::setParent(const clang::Stmt *child,
        const clang::Stmt *parent) {
    assert(parentMap.find(child) == parentMap.end());
    parentMap[child] = parent;
}

clang::PresumedLoc ParentTransform::InsertAtFront(const clang::Stmt *s,
        std::string st) {
    const clang::Stmt *parent = getParent(s);
    while (!clang::isa<clang::CompoundStmt>(parent)) {
        s = parent;
        parent = getParent(s);
    }
    clang::SourceLocation start = s->getLocStart();
    TheRewriter->InsertText(start, st, true, true);

    return SM->getPresumedLoc(start);
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

void ParentTransform::resetFunctionLabels() {
    assert(createsFunctionLabels());
    curr_function_label = 0;
}

void ParentTransform::resetRootFlag() {
    root_flag = true;
}

void ParentTransform::setRootFlag(bool v) {
    root_flag = v;
}

bool ParentTransform::getRootFlag() {
    return root_flag;
}
