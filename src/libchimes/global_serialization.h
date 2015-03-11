#ifndef GLOBAL_SERIALIZATION_H
#define GLOBAL_SERIALIZATION_H

unsigned char *serialize_globals(map<string, stack_var *> *globals,
        uint64_t *out_len);
map<string, stack_var *> *deserialize_globals(unsigned char *globals_serialized,
        uint64_t globals_serialized_len);

#endif
