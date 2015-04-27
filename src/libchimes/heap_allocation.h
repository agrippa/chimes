#ifndef HEAP_ALLOCATION_H
#define HEAP_ALLOCATION_H

#include <stddef.h>
#include <stdint.h>
#include <assert.h>
#include <vector>

#include "hash_chunker.h"

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
        // heap_allocation() : address(NULL), size(0), alias_group(0),
        //         elem_is_ptr(0), elem_is_struct(0), elem_size(0),
        //         tmp_buffer(NULL), is_cuda_alloc(0), must_hash(true) { }

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
        void invalidate_hashes() {
            invalid_hashes = true;
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

        void copy(heap_allocation *dst);
};

#endif
