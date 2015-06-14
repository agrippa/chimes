#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "stack_var.h"
#include "stack_frame.h"
#include "stack_serialization.h"
#include "serialization_common.h"
#include "thread_ctx.h"

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
    assert(serialization);
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
    assert(serialization);
    *out_len = serialization_used;

    return serialization;
}

unsigned char *serialize_program_stacks(
        map<unsigned, thread_ctx *> *thread_ctxs,
        uint64_t *out_len) {

    /*
     * A thread_ctx may have an empty stack if the creation of a checkpoint
     * races with the destroy_thread_ctx constructor following a parallel
     * region. Here we just ignore any empty thread stacks because we know those
     * threads must have died, and therefore cannot be part of the resume.
     */
    unsigned nthreads = 0;
    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs->begin(),
            e = thread_ctxs->end(); i != e; i++) {
        if (i->second->get_stack()->size() > 0) {
            nthreads++;
        }
    }
    unsigned char *serialized = (unsigned char *)malloc(sizeof(nthreads));
    assert(serialized);
    uint64_t total_len = sizeof(nthreads);
    memcpy(serialized, &nthreads, sizeof(nthreads));

    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs->begin(),
            e = thread_ctxs->end(); i != e; i++) {
        unsigned thread_id = i->first;
        thread_ctx *ctx = i->second;
        vector<stack_frame *> *stack = ctx->get_stack();

        if (stack->size() == 0) continue;

        uint64_t stack_serialized_len;
        unsigned char *stack_serialized = serialize_program_stack(stack,
                &stack_serialized_len);

        size_t new_len = total_len + sizeof(thread_id) +
            sizeof(stack_serialized_len) + stack_serialized_len;
        serialized = (unsigned char *)realloc(serialized, new_len);
        assert(serialized);

        unsigned char *base = serialized + total_len;
        memcpy(base, &thread_id, sizeof(thread_id));
        base += sizeof(thread_id);

        memcpy(base, &stack_serialized_len, sizeof(stack_serialized_len));
        base += sizeof(stack_serialized_len);

        memcpy(base, stack_serialized, stack_serialized_len);
        free(stack_serialized);

        total_len = new_len;
    }

    *out_len = total_len;
    return serialized;
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

map<unsigned, vector<stack_frame *> *> *deserialize_program_stacks(
        unsigned char *stacks_serialized, uint64_t stacks_serialized_len) {
    map<unsigned, vector<stack_frame *> *> *result =
        new map<unsigned, vector<stack_frame *> *>();

    unsigned char *local = stacks_serialized;
    unsigned nthreads;
    memcpy(&nthreads, local, sizeof(nthreads));
    local += sizeof(nthreads);

    for (unsigned i = 0; i < nthreads; i++) {
        unsigned thread_id;
        memcpy(&thread_id, local, sizeof(thread_id));
        local += sizeof(thread_id);

        uint64_t stack_serialized_len;
        memcpy(&stack_serialized_len, local, sizeof(stack_serialized_len));
        local += sizeof(stack_serialized_len);

        vector<stack_frame *> *stack = deserialize_program_stack(local,
                stack_serialized_len);

        assert(result->find(thread_id) == result->end());
        (*result)[thread_id] = stack;

        local += stack_serialized_len;
    }

    return result;
}
