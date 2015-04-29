#ifndef CHECKPOINTABLE_HEAP_ALLOCATION_H
#define CHECKPOINTABLE_HEAP_ALLOCATION_H

#ifdef CUDA_SUPPORT
#include <cuda_runtime.h>
#endif

#include "chimes_common.h"
#include <stdlib.h>
#include <string.h>
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

        // (start_offset, end_offset)
        std::vector<std::pair<size_t, size_t> > ranges;
        void *buffer;

        void init(heap_allocation *other) {
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
        }

    public:
        checkpointable_heap_allocation(heap_allocation *other) {
            init(other);

            ranges.push_back(std::pair<size_t, size_t>(0, size));
            buffer = malloc(size);
            assert(buffer);

            if (is_cuda_alloc) {
#ifdef CUDA_SUPPORT
                CHECK(cudaMemcpy(buffer, other->get_address(), size,
                            cudaMemcpyDeviceToHost));
#else
                assert(false);
#endif
            } else {
                memcpy(buffer, other->get_address(), size);
            }
        }

        checkpointable_heap_allocation(heap_allocation *other, void *set_buffer,
                vector<pair<size_t, size_t> > *set_ranges) {
            init(other);
            buffer = set_buffer;
            for (vector<pair<size_t, size_t> >::iterator i =
                    set_ranges->begin(), e = set_ranges->end(); i != e; i++) {
                ranges.push_back(*i);
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

        std::vector<std::pair<size_t, size_t> > *get_buffer_ranges() {
            return &ranges;
        }
        void *get_buffer() { return buffer; }
};

#endif
