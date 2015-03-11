#include <map>
#include <string>

#include <assert.h>

#include "stack_var.h"
#include "serialization_common.h"

using namespace std;

unsigned char *serialize_globals(map<string, stack_var *> *globals,
        uint64_t *out_len) {
    unsigned char *serialization =
        (unsigned char *)malloc(initial_serialization_size);
    register uint64_t serialization_capacity = initial_serialization_size;
    register uint64_t serialization_used = 0;

    for (map<string, stack_var *>::iterator i = globals->begin(),
            e = globals->end(); i != e; i++) {
        stack_var *var = i->second;
        new_var(&serialization, &serialization_capacity, &serialization_used,
                var->get_name(), var->get_type(), var->get_address(),
                var->get_size(), var->check_is_ptr(), var->get_ptr_offsets());
    }

    serialization = (unsigned char *)realloc(serialization, serialization_used);
    *out_len = serialization_used;

    return serialization;
}

map<string, stack_var *> *deserialize_globals(unsigned char *globals_serialized,
        uint64_t globals_serialized_len) {
    map<string, stack_var *> *globals = new map<string, stack_var *>();
    unsigned char *iter = globals_serialized;

    while ((uint64_t)(iter - globals_serialized) < globals_serialized_len) {
        unsigned char marker = *iter;
        iter++;

        assert(marker == NEW_STACK_VAR);
        stack_var *var = deserialize_var(&iter);
        assert(globals->find(var->get_name()) == globals->end());
        (*globals)[var->get_name()] = var;
    }

    return globals;
}
