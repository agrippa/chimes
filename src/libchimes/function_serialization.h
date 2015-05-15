#ifndef FUNCTION_SERIALIZATION_H
#define FUNCTION_SERIALIZATION_H

#include "serialization_common.h"

unsigned char *serialize_functions(
        map<string, map<std::string, void *> > *functions, uint64_t *out_len);
map<string, map<std::string, void *> > *deserialize_functions(
        unsigned char *functions_serialized, uint64_t functions_serialized_len);

#endif
