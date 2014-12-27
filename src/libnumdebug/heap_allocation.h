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

    public:
        heap_allocation(void *set_address, size_t set_size,
                int set_alias_group, uint64_t set_seq) : address(set_address),
                size(set_size), alias_group(set_alias_group), refcount(0),
                deferred_free(0), seq(set_seq) { }

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
};

#endif
