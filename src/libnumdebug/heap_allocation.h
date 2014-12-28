#ifndef HEAP_ALLOCATION_H
#define HEAP_ALLOCATION_H

#include <assert.h>

class heap_allocation {
    private:
        void *address;
        size_t size;
        int alias_group;
        int refcount;
        int deferred_free;
        uint64_t seq;

        bool have_type_info;
        size_t elem_size;
        int elem_is_ptr;
        int elem_is_struct;
        std::vector<int> elem_ptr_offsets;

    public:
        heap_allocation(void *set_address, size_t set_size,
                int set_alias_group, uint64_t set_seq) : address(set_address),
                size(set_size), alias_group(set_alias_group), refcount(0),
                deferred_free(0), seq(set_seq), have_type_info(false),
                elem_size(0), elem_is_ptr(0), elem_is_struct(0) { }

        int get_alias_group() { return alias_group; }
        void *get_address() { return address; }

        void update_size(size_t new_size) { size = new_size; }
        size_t get_size() { return size; }

        int has_been_freed() { return deferred_free; }
        void set_free() {
            assert(!deferred_free);
            deferred_free = 1;
        }

        int decr_refcount() { return --refcount; }
        void incr_refcount() { refcount++; }
        int get_refcount() { return refcount; }

        int get_seq() { return seq; }

        bool check_have_type_info() { return have_type_info; }
        int get_elem_size() { return elem_size; }
        int check_elem_is_ptr() { return elem_is_ptr; }
        int check_elem_is_struct() { return elem_is_struct; }
        std::vector<int> *get_ptr_field_offsets() { return &elem_ptr_offsets; }

        void add_type_info(size_t set_elem_size, int set_elem_is_ptr,
                int set_elem_is_struct) {
            assert(!have_type_info);
            assert(!set_elem_is_ptr || set_elem_size == sizeof(void *));
            if (set_elem_is_ptr) assert(!set_elem_is_struct);
            if (set_elem_is_struct) assert(!set_elem_is_ptr);

            have_type_info = true;
            elem_size = set_elem_size;
            elem_is_ptr = set_elem_is_ptr;
            elem_is_struct = set_elem_is_struct;
        }

        void add_pointer_offset(int offset) {
            assert(have_type_info);
            assert(!elem_is_ptr);
            assert(std::find(elem_ptr_offsets.begin(), elem_ptr_offsets.end(),
                        offset) == elem_ptr_offsets.end());

            elem_ptr_offsets.push_back(offset);
        }
};

#endif
