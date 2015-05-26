#include <map>
#include <string>

#include <assert.h>

#include "chimes_common.h"
#include "constant_var.h"
#include "serialization_common.h"

using namespace std;

unsigned char *serialize_constants(map<size_t, constant_var *> *constants,
        uint64_t *out_len) {
    unsigned char *serialization =
        (unsigned char *)malloc(initial_serialization_size);
    assert(serialization);
    register uint64_t serialization_capacity = initial_serialization_size;
    register uint64_t serialization_used = 0;

    for (map<size_t, constant_var *>::iterator i = constants->begin(),
            e = constants->end(); i != e; i++) {
        constant_var *var = i->second;
        new_constant(&serialization, &serialization_capacity,
                &serialization_used, var->get_id(), var->get_address(),
                var->get_length());
    }

    serialization = (unsigned char *)realloc(serialization, serialization_used);
    assert(serialization || serialization_used == 0);
    *out_len = serialization_used;

    return serialization;
}

map<size_t, constant_var *> *deserialize_constants(
        unsigned char *constants_serialized,
        uint64_t constants_serialized_len) {
    map<size_t, constant_var *> *constants = new map<size_t, constant_var *>();
    unsigned char *iter = constants_serialized;

    while ((uint64_t)(iter - constants_serialized) < constants_serialized_len) {
        unsigned char marker = *iter;
        iter++;

        VERIFY(marker == NEW_CONSTANT);
        constant_var *var = deserialize_constant(&iter);
        assert(constants->find(var->get_id()) == constants->end());
        constants->insert(std::pair<size_t, constant_var*>(var->get_id(), var));
    }

    return (constants);
}
