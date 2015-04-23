#ifndef SERIALIZATION_COMMON_H
#define SERIALIZATION_COMMON_H

#include <stdint.h>
#include "stack_var.h"
#include "constant_var.h"

#define NEW_STACK_FRAME 0
#define NEW_STACK_VAR   1
#define NEW_CONSTANT    2

const int initial_serialization_size = 1024;
const uint64_t stream_capacity_increase_ratio = 2;

extern void increase_capacity(unsigned char **stream,
        uint64_t *stream_capacity, uint64_t new_capacity);
extern void ensure_capacity(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t desired_capacity);
extern void new_var(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t *stream_len, string mangled_name, string type, void *address,
        size_t size, int is_ptr, std::vector<int> *ptr_offsets);
extern stack_var *deserialize_var(unsigned char **ptr_to_iter);
extern void new_constant(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t *stream_len, size_t const_id, void *address, size_t length);
extern constant_var *deserialize_constant(unsigned char **ptr_to_iter);

#endif
