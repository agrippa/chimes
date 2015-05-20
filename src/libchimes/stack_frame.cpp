#include <assert.h>
#include <iostream>
#include <sstream>

#include <stdio.h>
#include "stack_frame.h"

void stack_frame::add_stack_var(stack_var *var) {
    if (locals.find(var->get_name()) != locals.end()) {
        assert(locals[var->get_name()]->get_address() == var->get_address());
        delete var;
    } else {
        locals[var->get_name()] = var;
        local_addresses[var->get_address()] = var->get_name();
    }
}


bool stack_frame::stack_var_exists(std::string name, void *address) {
    if (locals.find(name) != locals.end()) {
        assert(locals[name]->get_address() == address);
        return true;
    }
    return false;
}

string stack_frame::str() {
    std::ostringstream buf;
    buf << "{ ";
    for (map<string, stack_var *>::iterator l_iter = locals.begin(),
            l_end = locals.end(); l_iter != l_end; l_iter++) {
        buf << l_iter->first << " ";
    }
    buf << "}";
    return buf.str();
}
