#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "stack_var.h"
#include "stack_frame.h"
#include "stack_serialization.h"
#include "serialization_common.h"

static void new_stack_frame(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t *stream_len) {
    ensure_capacity(stream, stream_capacity, *stream_len + 1);

    (*stream)[*stream_len] = NEW_STACK_FRAME;
    *stream_len += 1;
}

unsigned char *serialize_program_stack(vector<stack_frame *> *program_stack,
        uint64_t *out_len) {
    unsigned char *serialization =
        (unsigned char *)malloc(initial_serialization_size);
    register uint64_t serialization_capacity = initial_serialization_size;
    register uint64_t serialization_used = 0;

    // For each stack frame
    for (vector<stack_frame *>::iterator stack_iter = program_stack->begin(),
            stack_end = program_stack->end(); stack_iter != stack_end;
            stack_iter++) {
        stack_frame *frame = *stack_iter;

        new_stack_frame(&serialization, &serialization_capacity,
                &serialization_used);

        // For each local
        for (stack_frame::iterator locals_iter = frame->begin(),
                locals_end = frame->end(); locals_iter != locals_end;
                locals_iter++) {
            stack_var *var = locals_iter->second;

            new_var(&serialization, &serialization_capacity,
                    &serialization_used, var->get_name(), var->get_type(),
                    var->get_address(), var->get_size(), var->check_is_ptr(),
                    var->get_ptr_offsets());
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

vector<stack_frame *> *deserialize_program_stack(
        unsigned char *stack_serialized, uint64_t stack_serialized_len) {
    vector<stack_frame *> *stack = new vector<stack_frame *>();
    stack_frame *curr = NULL;
    unsigned char *iter = stack_serialized;

    while ((uint64_t)(iter - stack_serialized) < stack_serialized_len) {
        unsigned char marker = *iter;
        iter++;

        if (marker == NEW_STACK_FRAME) {
            stack_frame *frame = new stack_frame();
            stack->push_back(frame);
            curr = frame;
        } else if (marker == NEW_STACK_VAR) {
            stack_var *var = deserialize_var(&iter);
            curr->add_stack_var(var);
        } else {
            fprintf(stderr, "Invalid record type in serialized stack: %d\n",
                    marker);
            exit(1);
        }
    }

    return stack;
}
