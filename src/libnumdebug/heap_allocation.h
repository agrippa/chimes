#ifndef HEAP_ALLOCATION_H
#define HEAP_ALLOCATION_H

#include <stddef.h>
#include <stdint.h>
#include <assert.h>
#include <vector>

class heap_allocation {
    private:
        void *address;
        size_t size;
        size_t alias_group;
        uint64_t seq;

        int elem_is_ptr;
        int elem_is_struct;
        size_t elem_size;
        std::vector<int> elem_ptr_offsets;

        void *tmp_buffer;

        int is_cuda_alloc;

    public:
        heap_allocation() : address(NULL), size(0), alias_group(0), seq(0),
                elem_is_ptr(0), elem_is_struct(0), elem_size(0),
                tmp_buffer(NULL), is_cuda_alloc(0) { }

        heap_allocation(void *set_address, size_t set_size,
                size_t set_alias_group, uint64_t set_seq,
                int set_is_cuda_alloc, int set_elem_is_ptr,
                int set_elem_is_struct) : address(set_address), size(set_size),
                alias_group(set_alias_group), seq(set_seq),
                elem_is_ptr(set_elem_is_ptr),
                elem_is_struct(set_elem_is_struct), elem_size(0),
                tmp_buffer(NULL), is_cuda_alloc(set_is_cuda_alloc) { }

        // Getters
        size_t get_alias_group() { return alias_group; }
        void *get_address() { return address; }
        int get_seq() { return seq; }
        int check_elem_is_ptr() { return elem_is_ptr; }
        int check_elem_is_struct() { return elem_is_struct; }
        int get_elem_size() {
            assert(!elem_is_ptr && elem_is_struct);
            return elem_size;
        }
        std::vector<int> *get_ptr_field_offsets() {
            assert(!elem_is_ptr && elem_is_struct);
            return &elem_ptr_offsets;
        }
        void *get_tmp_buffer() { return tmp_buffer; }
        int get_is_cuda_alloc() { return is_cuda_alloc; }

        // Size can be updated on a realloc
        void update_size(size_t new_size) { size = new_size; }
        size_t get_size() { return size; }

        // Struct info
        void add_struct_elem_size(size_t set_elem_size) {
            assert(!elem_is_ptr && elem_is_struct);
            elem_size = set_elem_size;
        }
        void add_pointer_offset(int offset);

        void copy(heap_allocation *dst);
};

#endif
