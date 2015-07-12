#ifndef HEAP_SERIALIZATION_WRAPPER_H
#define HEAP_SERIALIZATION_WRAPPER_H

#include <vector>

#include "heap_allocation.h"

using namespace std;

#define BUFFER_INCR (1024 * 1024)

/*
 * The partial_heap_serialization class wraps an actual application heap
 * allocation (i.e. a chunk of memory that the application malloc-ed) and the
 * ranges of that memory that need to be checkpointed. This class is used to
 * store information on heap allocations which need to be directly written to
 * disk, and for which we could not create a separate copy of because of an
 * out-of-memory error during heap serialization.
 */
class partial_heap_serialization {
    public:
        partial_heap_serialization(heap_allocation *set_alloc,
                vector<pair<size_t, size_t> > *set_ranges) {
            alloc = set_alloc;
            for (vector<pair<size_t, size_t> >::iterator i = set_ranges->begin(),
                    e = set_ranges->end(); i != e; i++) {
                ranges.push_back(pair<size_t, size_t>(i->first, i->second));
            }
        }

        partial_heap_serialization(heap_allocation *set_alloc) :
            alloc(set_alloc) { }

        heap_allocation *get_alloc() { return alloc; }
        vector<pair<size_t, size_t> >::iterator ranges_begin() {
            return ranges.begin();
        }
        vector<pair<size_t, size_t> >::iterator ranges_end() {
            return ranges.end();
        }

    private:
        heap_allocation *alloc;
        vector<pair<size_t, size_t> > ranges;
};

/*
 * The heap serialization wrapper adds an abstraction on top of a void* that we
 * serialize all heap allocations to during checkpoint creation. As the size of
 * the serialized heap increases, we repeatedly have to realloc that void* to
 * make space for more heap serializations. However, if one of those reallocs
 * fail we can conclude there isn't enough space on the machine to support a
 * fully copied heap on the side to allow for an asynchronous checkpoint. This
 * wrapper wraps that void*, but also includes any references to heap
 * allocations which could not be copied due to an out-of-memory error (keeping
 * the API simple).
 */
class heap_serialization_wrapper {
    public:
        heap_serialization_wrapper() {
            buffer = NULL;
            used = 0;
            capacity = 0;
            out_of_memory = false;
        }

        ~heap_serialization_wrapper() {
            free(buffer);
        }

        bool ensure_space(size_t additional);
        void append_all_to_buffer(heap_allocation *alloc, size_t len);
        void append_some_to_buffer(heap_allocation *alloc, size_t len,
                vector<pair<size_t, size_t> > *ranges);
        void append_all_to_buffer_nocopy(heap_allocation *alloc);
        void append_some_to_buffer_nocopy(heap_allocation *alloc,
                vector<pair<size_t, size_t> > *ranges);

        void resize_to_used();
        size_t get_used() { return used; }
        bool is_out_of_memory() { return out_of_memory; }
        bool has_no_copy_buffers() { return no_copy.size() > 0; }
        bool is_buffer_empty() { return used == 0; }
        void *get_buffer() { return buffer; }

        vector<partial_heap_serialization>::iterator no_copy_begin() {
            return no_copy.begin();
        }
        vector<partial_heap_serialization>::iterator no_copy_end() {
            return no_copy.end();
        }
        unsigned n_no_copy() { return no_copy.size(); }

    private:
        void *buffer;
        size_t used, capacity;
        bool out_of_memory;
        vector<partial_heap_serialization> no_copy;
};

#endif
