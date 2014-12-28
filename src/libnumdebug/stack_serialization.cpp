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
        uint64_t *stream_len, string mangled_name, string type, void *address,
        size_t size, int is_ptr, std::vector<int> *ptr_offsets) {
    int ptr_offsets_len = ptr_offsets->size();
    int var_record_size = 1 + (mangled_name.length() + 1) +
        (type.length() + 1) + sizeof(address) + sizeof(size) + sizeof(is_ptr) +
        sizeof(ptr_offsets_len) + (ptr_offsets_len * sizeof(int)) + size;
    ensure_capacity(stream, stream_capacity, *stream_len + var_record_size);

    unsigned char *base = (*stream) + *stream_len;
    *base = NEW_STACK_VAR;
    base++;

    memcpy(base, mangled_name.c_str(), mangled_name.length());
    base[mangled_name.length()] = '\0';
    base += (mangled_name.length() + 1);

    memcpy(base, type.c_str(), type.length());
    base[type.length()] = '\0';
    base += (type.length() + 1);

    memcpy(base, &address, sizeof(address));
    base += sizeof(address);
    
    memcpy(base, &size, sizeof(size));
    base += sizeof(size);

    memcpy(base, &is_ptr, sizeof(is_ptr));
    base += sizeof(is_ptr);

    memcpy(base, &ptr_offsets_len, sizeof(ptr_offsets_len));
    base += sizeof(ptr_offsets_len);

    for (std::vector<int>::iterator i = ptr_offsets->begin(),
            e = ptr_offsets->end(); i != e; i++) {
        int offset = *i;
        memcpy(base, &offset, sizeof(offset));
        base += offset;
    }

    memcpy(base, address, size);

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

    while (iter - stack_serialized < stack_serialized_len) {
        unsigned char marker = *iter;
        iter++;

        if (marker == NEW_STACK_FRAME) {
            stack_frame *frame = new stack_frame();
            stack->push_back(frame);
            curr = frame;
        } else if (marker == NEW_STACK_VAR) {
            assert(curr != NULL);

            unsigned char *varname = iter;

            unsigned char *type = iter;
            while (*type != '\0') {
                type++;
            }
            type++;

            unsigned char *address_ptr = type;
            while (*address_ptr != '\0') {
                address_ptr++;
            }
            address_ptr++;
            void *address;
            memcpy(&address, address_ptr, sizeof(address));

            size_t size;
            unsigned char *size_ptr = address_ptr + sizeof(address);
            memcpy(&size, size_ptr, sizeof(size));

            int is_ptr;
            unsigned char *is_ptr_ptr = size_ptr + sizeof(size);
            memcpy(&is_ptr, is_ptr_ptr, sizeof(is_ptr));

            int ptr_offsets_len;
            unsigned char *ptr_offsets_len_ptr = is_ptr_ptr + sizeof(is_ptr);
            memcpy(&ptr_offsets_len, ptr_offsets_len_ptr, sizeof(ptr_offsets_len));

            stack_var *var = new stack_var((const char *)varname,
                    (const char *)type, address, size, is_ptr);

            int *ptr_offsets = (int *)(ptr_offsets_len_ptr + sizeof(ptr_offsets_len));
            for (int i = 0; i < ptr_offsets_len; i++) {
                var->add_pointer_offset(ptr_offsets[i]);
            }

            unsigned char *tmp_buffer_ptr = (unsigned char *)(ptr_offsets +
                    ptr_offsets_len);
            void *tmp_buffer = malloc(size);
            memcpy(tmp_buffer, tmp_buffer_ptr, size);
            var->set_tmp_buffer(tmp_buffer);

            curr->add_stack_var(var);

            iter = tmp_buffer_ptr + size;
        } else {
            fprintf(stderr, "Invalid record type in serialized stack: %d\n",
                    marker);
            exit(1);
        }
    }

    return stack;
}
