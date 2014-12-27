#include <vector>

#include <stdlib.h>
#include <assert.h>

#include "stack_var.h"
#include "stack_frame.h"
#include "stack_serialization.h"

static int initial_serialization_size = 1024;
static uint64_t stream_capacity_increase_ratio = 2;

static void increase_capacity(unsigned char **stream,
        uint64_t *stream_capacity, uint64_t new_capacity) {
    unsigned char *new_stream = (unsigned char *)realloc(*stream, new_capacity);
    assert(new_stream != NULL);
    *stream = new_stream;
    *stream_capacity = new_capacity;
}

static void ensure_capacity(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t desired_capacity) {
    if (desired_capacity > *stream_capacity) {
        uint64_t new_capacity = *stream_capacity *
            stream_capacity_increase_ratio;
        while (new_capacity < desired_capacity) {
            new_capacity *= stream_capacity_increase_ratio;
        }
        increase_capacity(stream, stream_capacity, new_capacity);
    }
}

static void new_stack_frame(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t *stream_len) {
    ensure_capacity(stream, stream_capacity, *stream_len + 1);

    (*stream)[*stream_len] = NEW_STACK_FRAME;
    *stream_len += 1;
}

static void new_var(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t *stream_len, string mangled_name, void *address, size_t size) {
    int var_record_size = 1 + (mangled_name.length() + 1) + sizeof(address) +
        sizeof(size);
    ensure_capacity(stream, stream_capacity, *stream_len + var_record_size);

    unsigned char *base = (*stream) + *stream_len;
    *base = NEW_STACK_VAR;
    base++;

    memcpy(base, mangled_name.c_str(), mangled_name.length());
    base[mangled_name.length()] = '\0';
    base += (mangled_name.length() + 1);

    memcpy(base, &address, sizeof(address));
    base += sizeof(address);
    
    memcpy(base, &size, sizeof(size));
    base += sizeof(size);

    *stream_len += var_record_size;
}

unsigned char *serialize_program_stack(vector<stack_frame *> *program_stack,
        uint64_t *out_len) {
    unsigned char *serialization =
        (unsigned char *)malloc(initial_serialization_size);
    register uint64_t serialization_capacity = initial_serialization_size;
    register uint64_t serialization_used = 0;

    for (vector<stack_frame *>::iterator stack_iter = program_stack->begin(),
            stack_end = program_stack->end(); stack_iter != stack_end;
            stack_iter++) {
        stack_frame *frame = *stack_iter;

        new_stack_frame(&serialization, &serialization_capacity,
                &serialization_used);

        for (map<string, stack_var *>::iterator locals_iter =
                frame->get_locals().begin(), locals_end =
                frame->get_locals().end(); locals_iter != locals_end;
                locals_iter++) {
            stack_var *var = locals_iter->second;

            new_var(&serialization, &serialization_capacity,
                    &serialization_used, var->get_name(), var->get_address(),
                    var->get_size());
        }
    }

    /*
     * Give the memory allocator the chance to tighten up the size of the stack
     * dump.
     */
    serialization = (unsigned char *)realloc(serialization, serialization_used);
    *out_len = serialization_used;

    return serialization;
}
