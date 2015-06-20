#ifndef FUNCTION_SERIALIZATION_H
#define FUNCTION_SERIALIZATION_H

#include "serialization_common.h"

unsigned char *serialize_function_addresses(map<string, void *> *functions,
        uint64_t *out_len);
map<string, void *> *deserialize_function_addresses(
        unsigned char *functions_serialized, uint64_t functions_serialized_len);

#endif
