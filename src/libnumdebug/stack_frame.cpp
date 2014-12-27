#include <assert.h>

#include "stack_frame.h"

void stack_frame::add_stack_var(stack_var *var) {
    if (locals.find(var->get_name()) != locals.end()) {
        assert(locals[var->get_name()]->get_address() == var->get_address());
    } else {
        locals[var->get_name()] = var;
    }
}