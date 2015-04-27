#ifndef CHECKPOINTABLE_HEAP_ALLOCATION_H
#define CHECKPOINTABLE_HEAP_ALLOCATION_H

#include <stdlib.h>
#include <vector>
#include "heap_allocation.h"

class checkpointable_heap_allocation {
    private:
        void *address;
        size_t size;
        size_t group;
        int is_cuda_alloc;

        int elem_is_ptr;
        int elem_is_struct;
        size_t elem_size;
        std::vector<int> elem_ptr_offsets;

        size_t buffer_offset;
        size_t buffer_length;
        void *buffer;

    public:
        checkpointable_heap_allocation(heap_allocation *other) {
            address = other->get_address();
            size = other->get_size();
            group = other->get_alias_group();
            is_cuda_alloc = other->get_is_cuda_alloc();
            elem_is_ptr = other->check_elem_is_ptr();
            elem_is_struct = other->check_elem_is_struct();
            if (elem_is_struct) {
                elem_size = other->get_elem_size();
                for (std::vector<int>::iterator i =
                        other->get_ptr_field_offsets()->begin(), e =
                        other->get_ptr_field_offsets()->end(); i != e; i++) {
                    elem_ptr_offsets.push_back(*i);
                }
            }

            buffer_offset = 0;
            buffer_length = size;
            buffer = malloc(size);
            assert(buffer);

            if (is_cuda_alloc) {
                CHECK(cudaMemcpy(buffer, other->get_address(), size,
                            cudaMemcpyDeviceToHost));
            } else {
                memcpy(buffer, other->get_address(), size);
            }
        }

        void *get_address() { return address; }
        size_t get_size() { return size; }
        size_t get_alias_group() { return group; }
        int get_is_cuda_alloc() { return is_cuda_alloc; }
        int check_elem_is_ptr() { return elem_is_ptr; }
        int check_elem_is_struct() { return elem_is_struct; }
        size_t get_elem_size() { return elem_size; }
        std::vector<int> *get_ptr_field_offsets() { return &elem_ptr_offsets; }

        size_t get_buffer_offset() { return buffer_offset; }
        size_t get_buffer_length() { return buffer_length; }
        void *get_buffer() { return buffer; }
};

#endif
