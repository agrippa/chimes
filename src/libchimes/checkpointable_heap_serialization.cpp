#include <string.h>

#include "checkpointable_heap_serialization.h"
#include "heap_serialization_wrapper.h"

using namespace std;

#define BUFFER_INCR (1024 * 1024)

void serialize_heap_allocation(heap_allocation *alloc,
        heap_serialization_wrapper *buffer) {
    const void *address = alloc->get_address();
    const size_t size = alloc->get_size();;
    const size_t group = alloc->get_alias_group();
    const int is_cuda_alloc = alloc->get_is_cuda_alloc();
    const int elem_is_ptr = alloc->check_elem_is_ptr();
    const int elem_is_struct = alloc->check_elem_is_struct();

    size_t elem_size = 0;
    int elem_ptr_offsets_len = 0;

    size_t len = sizeof(address) + sizeof(size) + sizeof(group) +
        sizeof(is_cuda_alloc) + sizeof(elem_is_ptr) + sizeof(elem_is_struct);

    if (elem_is_struct) {
        elem_size = alloc->get_elem_size();
        elem_ptr_offsets_len = alloc->get_n_ptr_fields();

        len += (sizeof(elem_size) + sizeof(elem_ptr_offsets_len));
        len += (elem_ptr_offsets_len * sizeof(int)); // offsets
    }

    const int n_ranges = 1;
    len += sizeof(n_ranges);

    len += (2 * sizeof(size_t)); // start and end of range

    bool have_space = buffer->ensure_space(len + size);
    if (have_space) {
        buffer->append_all_to_buffer(alloc, len);
    } else {
        buffer->append_all_to_buffer_nocopy(alloc);
    }
}

void serialize_heap_allocation(heap_allocation *alloc,
        vector<pair<size_t, size_t> > *ranges,
        heap_serialization_wrapper *buffer) {
    const void *address = alloc->get_address();
    const size_t size = alloc->get_size();;
    const size_t group = alloc->get_alias_group();
    const int is_cuda_alloc = alloc->get_is_cuda_alloc();
    const int elem_is_ptr = alloc->check_elem_is_ptr();
    const int elem_is_struct = alloc->check_elem_is_struct();

    size_t elem_size = 0;
    int elem_ptr_offsets_len = 0;

    size_t len = sizeof(address) + sizeof(size) + sizeof(group) +
        sizeof(is_cuda_alloc) + sizeof(elem_is_ptr) + sizeof(elem_is_struct);

    if (elem_is_struct) {
        elem_size = alloc->get_elem_size();
        elem_ptr_offsets_len = alloc->get_n_ptr_fields();

        len += (sizeof(elem_size) + sizeof(elem_ptr_offsets_len));
        len += (elem_ptr_offsets_len * sizeof(int)); // offsets
    }

    const int n_ranges = ranges->size();
    len += sizeof(n_ranges);

    size_t buffer_length = 0;
    for (vector<pair<size_t, size_t> >::iterator range_iter =
            ranges->begin(), range_e =
            ranges->end(); range_iter != range_e;
            range_iter++) {
        size_t range_start = range_iter->first;
        size_t range_end = range_iter->second;
        len += (sizeof(range_start) + sizeof(range_end));
        buffer_length += (range_end - range_start);
    }

    bool have_space = buffer->ensure_space(len + buffer_length);
    if (have_space) {
        buffer->append_some_to_buffer(alloc, len, ranges);
    } else {
        buffer->append_some_to_buffer_nocopy(alloc, ranges);
    }
}
