#ifndef HEAP_ALLOCATION_H
#define HEAP_ALLOCATION_H

#include <stddef.h>
#include <stdint.h>
#include <assert.h>

class heap_allocation {
    private:
        void *address;
        size_t size;
        size_t alias_group;
        uint64_t seq;

        bool have_type_info;
        size_t elem_size;
        int elem_is_ptr;
        int elem_is_struct;
        std::vector<int> elem_ptr_offsets;

        void *tmp_buffer;

        int is_cuda_alloc;

    public:
        heap_allocation() : address(NULL), size(0), alias_group(0), seq(0),
                have_type_info(false), tmp_buffer(NULL), is_cuda_alloc(0) { }
        heap_allocation(void *set_address, size_t set_size,
                size_t set_alias_group, uint64_t set_seq, int set_is_cuda_alloc) : address(set_address),
                size(set_size), alias_group(set_alias_group), seq(set_seq),
                have_type_info(false), elem_size(0), elem_is_ptr(0),
                elem_is_struct(0), tmp_buffer(NULL), is_cuda_alloc(set_is_cuda_alloc) { }

        size_t get_alias_group() { return alias_group; }
        void *get_address() { return address; }

        void update_size(size_t new_size) { size = new_size; }
        size_t get_size() { return size; }

        int get_seq() { return seq; }

        bool check_have_type_info() { return have_type_info; }
        int get_elem_size() { return elem_size; }
        int check_elem_is_ptr() { return elem_is_ptr; }
        int check_elem_is_struct() { return elem_is_struct; }
        std::vector<int> *get_ptr_field_offsets() { return &elem_ptr_offsets; }
        void *get_tmp_buffer() { return tmp_buffer; }
        int get_is_cuda_alloc() { return is_cuda_alloc; }

        void add_type_info(size_t set_elem_size, int set_elem_is_ptr,
                int set_elem_is_struct);
        void add_pointer_offset(int offset);
        void copy(heap_allocation *dst);
};

#endif
