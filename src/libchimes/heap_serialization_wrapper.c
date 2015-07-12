#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "chimes_common.h"
#include "heap_serialization_wrapper.h"

#ifdef CUDA_SUPPORT
#include <cuda_runtime.h>
#include "libchimes_cuda.h"
#endif

bool heap_serialization_wrapper::ensure_space(size_t additional) {
    if (out_of_memory) return false;
    if (used + additional <= capacity) return true;

    const size_t target_capacity = capacity + additional;
    size_t new_capacity = target_capacity + (BUFFER_INCR -
            (target_capacity % BUFFER_INCR));
    void *new_buffer = (void *)realloc(buffer, new_capacity);
    if (new_buffer == NULL) {
        fprintf(stderr, "WARNING: Have to perform blocking checkpoint due to "
                "insufficient heap space\n");
        out_of_memory = true;
        return false;
    } else {
        buffer = new_buffer;
        capacity = new_capacity;
        return true;
    }
}

void heap_serialization_wrapper::append_all_to_buffer(heap_allocation *alloc, size_t len) {
    assert(!out_of_memory);

    const void *address = alloc->get_address();
    const size_t size = alloc->get_size();;
    const size_t group = alloc->get_alias_group();
    const int is_cuda_alloc = alloc->get_is_cuda_alloc();
    const int elem_is_ptr = alloc->check_elem_is_ptr();
    const int elem_is_struct = alloc->check_elem_is_struct();

    size_t elem_size = 0;
    int elem_ptr_offsets_len = 0;

    if (elem_is_struct) {
        elem_size = alloc->get_elem_size();
        elem_ptr_offsets_len =
            alloc->get_ptr_field_offsets()->size();
    }
    unsigned char *iter = (unsigned char *)buffer + used;

    memcpy(iter, &address, sizeof(address));
    iter += sizeof(address);

    memcpy(iter, &size, sizeof(size));
    iter += sizeof(size);

    memcpy(iter, &group, sizeof(group));
    iter += sizeof(group);

    memcpy(iter, &is_cuda_alloc, sizeof(is_cuda_alloc));
    iter += sizeof(is_cuda_alloc);

    memcpy(iter, &elem_is_ptr, sizeof(elem_is_ptr));
    iter += sizeof(elem_is_ptr);

    memcpy(iter, &elem_is_struct, sizeof(elem_is_struct));
    iter += sizeof(elem_is_struct);

    if (elem_is_struct) {
        memcpy(iter, &elem_size, sizeof(elem_size));
        iter += sizeof(elem_size);

        memcpy(iter, &elem_ptr_offsets_len, sizeof(elem_ptr_offsets_len));
        iter += sizeof(elem_ptr_offsets_len);

        for (int i = 0; i < elem_ptr_offsets_len; i++) {
            int offset = (*alloc->get_ptr_field_offsets())[i];
            memcpy(iter, &offset, sizeof(offset));
            iter += sizeof(offset);
        }
    }

    const int n_ranges = 1;
    memcpy(iter, &n_ranges, sizeof(n_ranges));
    iter += sizeof(n_ranges);

    size_t zero = 0;
    memcpy(iter, &zero, sizeof(zero));
    iter += sizeof(zero);

    memcpy(iter, &size, sizeof(size));
    iter += sizeof(size);

    if (is_cuda_alloc) {
#ifdef CUDA_SUPPORT
        CHECK(cudaMemcpy(buffer, address, size,
                    cudaMemcpyDeviceToHost));
#else
        VERIFY(false);
#endif
    } else {
        memcpy(iter, address, size);
    }

    used += (len + size);
}

void heap_serialization_wrapper::append_some_to_buffer(heap_allocation *alloc,
        size_t len, vector<pair<size_t, size_t> > *ranges) {
    const void *address = alloc->get_address();
    const size_t size = alloc->get_size();;
    const size_t group = alloc->get_alias_group();
    const int is_cuda_alloc = alloc->get_is_cuda_alloc();
    const int elem_is_ptr = alloc->check_elem_is_ptr();
    const int elem_is_struct = alloc->check_elem_is_struct();

    size_t elem_size = 0;
    int elem_ptr_offsets_len = 0;

    if (elem_is_struct) {
        elem_size = alloc->get_elem_size();
        elem_ptr_offsets_len =
            alloc->get_ptr_field_offsets()->size();
    }

    const int n_ranges = ranges->size();

    unsigned char *iter = (unsigned char *)buffer + used;

    memcpy(iter, &address, sizeof(address));
    iter += sizeof(address);

    memcpy(iter, &size, sizeof(size));
    iter += sizeof(size);

    memcpy(iter, &group, sizeof(group));
    iter += sizeof(group);

    memcpy(iter, &is_cuda_alloc, sizeof(is_cuda_alloc));
    iter += sizeof(is_cuda_alloc);

    memcpy(iter, &elem_is_ptr, sizeof(elem_is_ptr));
    iter += sizeof(elem_is_ptr);

    memcpy(iter, &elem_is_struct, sizeof(elem_is_struct));
    iter += sizeof(elem_is_struct);

    if (elem_is_struct) {
        memcpy(iter, &elem_size, sizeof(elem_size));
        iter += sizeof(elem_size);

        memcpy(iter, &elem_ptr_offsets_len, sizeof(elem_ptr_offsets_len));
        iter += sizeof(elem_ptr_offsets_len);

        for (int i = 0; i < elem_ptr_offsets_len; i++) {
            int offset = (*alloc->get_ptr_field_offsets())[i];
            memcpy(iter, &offset, sizeof(offset));
            iter += sizeof(offset);
        }
    }

    memcpy(iter, &n_ranges, sizeof(n_ranges));
    iter += sizeof(n_ranges);

    size_t n_bytes_changed = 0;
    for (vector<pair<size_t, size_t> >::iterator range_iter =
            ranges->begin(), range_e =
            ranges->end(); range_iter != range_e;
            range_iter++) {
        size_t range_start = range_iter->first;
        size_t range_end = range_iter->second;

        memcpy(iter, &range_start, sizeof(range_start));
        iter += sizeof(range_start);

        memcpy(iter, &range_end, sizeof(range_end));
        iter += sizeof(range_end);

        n_bytes_changed += (range_end - range_start);
    }

    assert((size_t)(iter - ((unsigned char *)buffer + used)) == len);

    size_t packed_so_far = 0;
    unsigned char *source = (unsigned char *)address;
    unsigned char *dest = iter;
    for (vector<pair<size_t, size_t> >::iterator i =
            ranges->begin(), e = ranges->end(); i != e; i++) {
        if (is_cuda_alloc) {
            CHECK(cudaMemcpy(dest + packed_so_far, source + i->first,
                        i->second - i->first, cudaMemcpyDeviceToHost));
        } else {
            memcpy(dest + packed_so_far, source + i->first,
                    i->second - i->first); 
        }
        packed_so_far += (i->second - i->first);
    }

    used += (len + packed_so_far);
}

void heap_serialization_wrapper::append_all_to_buffer_nocopy(
        heap_allocation *alloc) {
    assert(out_of_memory);
    no_copy.push_back(partial_heap_serialization(alloc));
}

void heap_serialization_wrapper::append_some_to_buffer_nocopy(
        heap_allocation *alloc, vector<pair<size_t, size_t> > *ranges) {
    assert(out_of_memory);
    no_copy.push_back(partial_heap_serialization(alloc, ranges));
}

void heap_serialization_wrapper::resize_to_used() {
    buffer = realloc(buffer, used);
    capacity = used;
}
