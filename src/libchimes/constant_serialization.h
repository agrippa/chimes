#ifndef CONSTANT_SERIALIZATION_H
#define CONSTANT_SERIALIZATION_H

#include "constant_var.h"
#include "serialization_common.h"

unsigned char *serialize_constants(map<size_t, constant_var *> *constants,
        uint64_t *out_len);
map<size_t, constant_var *> *deserialize_constants(
        unsigned char *constants_serialized, uint64_t constants_serialized_len);

#endif
