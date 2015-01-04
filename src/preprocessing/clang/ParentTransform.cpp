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
