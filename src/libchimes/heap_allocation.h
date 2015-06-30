#ifndef HEAP_ALLOCATION_H
#define HEAP_ALLOCATION_H

#include <stddef.h>
#include <stdint.h>
#include <assert.h>
#include <vector>

#include "hash_chunker.h"
#include "xxhash/xxhash.h"

using namespace std;

class memory_filled {
    public:
        memory_filled(size_t set_length) : length(set_length) {
            not_filled = new vector<pair<size_t, size_t> >();
            not_filled->push_back(pair<size_t, size_t>(0, set_length));
        }

        pair<size_t, size_t> overlap(size_t start1, size_t end1, size_t start2,
                size_t end2) {
            if (start1 < start2) {
                if (end1 > start2) {
                    return pair<size_t, size_t>(start2, min(end1, end2));
                }
            } else if (start1 > start2) {
                if (start1 < end2) {
                    return pair<size_t, size_t>(start1, min(end1, end2));
                }
            } else { // start1 == start2
                return pair<size_t, size_t>(start1, min(end1, end2));
            }
            return pair<size_t, size_t>(0, 0);
        }

        bool is_valid(size_t start, size_t end) {
            return !(start == 0 && end == 0);
        }

        vector<pair<size_t, size_t> > *offer(size_t start_offset,
                size_t end_offset) {
            vector<pair<size_t, size_t> > *useful =
                new vector<pair<size_t, size_t> >();
            vector<pair<size_t, size_t> > *new_not_filled =
                new vector<pair<size_t, size_t> >();
            for (vector<pair<size_t, size_t> >::iterator i =
                    not_filled->begin(), e = not_filled->end(); i != e; i++) {
                size_t hole_start = i->first;
                size_t hole_end = i->second;

                pair<size_t, size_t> shaded = overlap(start_offset, end_offset,
                        hole_start, hole_end);
                if (is_valid(shaded.first, shaded.second)) {
                    useful->push_back(shaded);

                    if (shaded.first == hole_start && shaded.second == hole_end) {
                        /*
                         * do nothing, by inaction removing this entry from the
                         * new list of holes.
                         */
                    } else if (shaded.first == hole_start) {
                        new_not_filled->push_back(pair<size_t, size_t>(
                                    shaded.second, hole_end));
                    } else if (shaded.second == hole_end) {
                        new_not_filled->push_back(pair<size_t, size_t>(
                                    hole_start, shaded.first));
                    } else {
                        new_not_filled->push_back(pair<size_t, size_t>(
                                    hole_start, shaded.first));
                        new_not_filled->push_back(pair<size_t, size_t>(
                                    shaded.second, hole_end));
                    }
                } else {
                    new_not_filled->push_back(pair<size_t, size_t>(hole_start,
                                hole_end));
                }
            }

            delete not_filled;
            not_filled = new_not_filled;

            return useful;
        }

        bool empty() {
            return (not_filled->size() == 0);
        }

        vector<pair<size_t, size_t> > *get_not_filled() {
            return not_filled;
        }

    private:
        vector<pair<size_t, size_t> > *not_filled;
        size_t length;
};

class heap_allocation {
    private:
        void *address;
        size_t size;
        size_t alias_group;

        int elem_is_ptr;
        int elem_is_struct;
        size_t elem_size;
        std::vector<int> elem_ptr_offsets;

        void *tmp_buffer;

        int is_cuda_alloc;

        bool invalid_hashes;
        unsigned n_hash_chunks;
        unsigned long long *hashes;
        size_t *hash_chunk_start;
        size_t *hash_chunk_end;

    public:
        heap_allocation(void *set_address, size_t set_size,
                size_t set_alias_group, int set_is_cuda_alloc,
                int set_elem_is_ptr, int set_elem_is_struct,
                hash_chunker& chunker) :
                address(set_address), size(set_size),
                alias_group(set_alias_group),
                elem_is_ptr(set_elem_is_ptr),
                elem_is_struct(set_elem_is_struct), elem_size(0),
                tmp_buffer(NULL), is_cuda_alloc(set_is_cuda_alloc),
                invalid_hashes(true), n_hash_chunks(0), hashes(NULL),
                hash_chunk_start(NULL), hash_chunk_end(NULL) {
#ifdef VERBOSE
            fprintf(stderr, "creating new heap allocation address=%p size=%lu "
                    "group=%lu\n", set_address, set_size, set_alias_group);
#endif
            gen_hash_parameters(chunker);
        }

        void gen_hash_parameters(hash_chunker& chunker) {
            invalid_hashes = true;
            n_hash_chunks = chunker.get_n_chunks(size);
            hashes = (unsigned long long *)realloc(hashes,
                    n_hash_chunks * sizeof(unsigned long long));
            hash_chunk_start = (size_t *)realloc(hash_chunk_start,
                    n_hash_chunks * sizeof(size_t));
            hash_chunk_end = (size_t *)realloc(hash_chunk_end,
                    n_hash_chunks * sizeof(size_t));
            for (unsigned i = 0; i < n_hash_chunks; i++) {
                hash_chunk_start[i] = chunker.get_chunk_start(i, n_hash_chunks,
                        size);
                hash_chunk_end[i] = chunker.get_chunk_end(i, n_hash_chunks,
                        size);
            }
        }
        void update_hashes() {
            for (unsigned i = 0; i < n_hash_chunks; i++) {
                update_hash(i, calculate_hash(i));
            }
        }
        size_t get_hash_chunk_start(unsigned index) {
            assert(index < n_hash_chunks);
            return hash_chunk_start[index];
        }
        size_t get_hash_chunk_end(unsigned index) {
            assert(index < n_hash_chunks);
            return hash_chunk_end[index];
        }
        unsigned long long get_hash(unsigned index) {
            assert(index < n_hash_chunks);
            return hashes[index];
        }
        void update_hash(unsigned index, unsigned long long hash) {
            assert(index < n_hash_chunks);
            hashes[index] = hash;
        }
        unsigned long long calculate_hash(unsigned index) {
            assert(index < n_hash_chunks);

            const void *chunk_start = ((unsigned char *)address) +
                hash_chunk_start[index];
            size_t chunk_len = hash_chunk_end[index] - hash_chunk_start[index];
            return XXH64(chunk_start, chunk_len, 1);
        }
        void invalidate_hashes() {
            invalid_hashes = true;
        }
        void mark_hashes_valid() {
            invalid_hashes = false;
        }
        bool hashes_invalid() {
            return invalid_hashes;
        }
        unsigned get_n_hash_chunks() {
            return n_hash_chunks;
        }

        // Getters
        size_t get_alias_group() { return alias_group; }
        void *get_address() { return address; }
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
        void set_pointer_offsets(std::vector<int> *s) {
            assert(elem_ptr_offsets.size() == 0);
            for (std::vector<int>::iterator i = s->begin(), e = s->end(); i != e; i++) {
                elem_ptr_offsets.push_back(*i);
            }
        }

        void copy(heap_allocation *dst);
};

#endif
