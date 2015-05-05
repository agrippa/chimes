#include "checkpointable_heap_serialization.h"

using namespace std;

vector<serialized_heap_var> *serialize_checkpointable_heap(
        vector<checkpointable_heap_allocation> *to_checkpoint) {
    void *address;
    size_t size;
    size_t group;
    int is_cuda_alloc;
    int elem_is_ptr;
    int elem_is_struct;

    size_t elem_size = 0;
    int elem_ptr_offsets_len = 0;

    int n_ranges;

    vector<serialized_heap_var> *result = new vector<serialized_heap_var>();
    result->reserve(to_checkpoint->size());

    size_t base_len = sizeof(address) + sizeof(size) + sizeof(group) +
        sizeof(is_cuda_alloc) + sizeof(elem_is_ptr) + sizeof(elem_is_struct);

    for (vector<checkpointable_heap_allocation>::iterator heap_iter =
            to_checkpoint->begin(), heap_end = to_checkpoint->end();
            heap_iter != heap_end; heap_iter++) {
        checkpointable_heap_allocation alloc = *heap_iter;
        size_t len = base_len;

        address = alloc.get_address();
        size = alloc.get_size();
        group = alloc.get_alias_group();
        is_cuda_alloc = alloc.get_is_cuda_alloc();
        elem_is_ptr = alloc.check_elem_is_ptr();
        elem_is_struct = alloc.check_elem_is_struct();

        if (elem_is_struct) {
            elem_size = alloc.get_elem_size();
            elem_ptr_offsets_len =
                alloc.get_ptr_field_offsets()->size();

            len += (sizeof(elem_size) + sizeof(elem_ptr_offsets_len));
            len += (alloc.get_ptr_field_offsets()->size() * sizeof(int)); // offsets
        }

        n_ranges = alloc.get_buffer_ranges()->size();
        len += sizeof(n_ranges);

        size_t buffer_length = 0;
        for (vector<pair<size_t, size_t> >::iterator range_iter =
                alloc.get_buffer_ranges()->begin(), range_e =
                alloc.get_buffer_ranges()->end(); range_iter != range_e;
                range_iter++) {
            size_t range_start = range_iter->first;
            size_t range_end = range_iter->second;
            len += (sizeof(range_start) + sizeof(range_end));
            buffer_length += (range_end - range_start);
        }

        unsigned char *buffer = (unsigned char *)malloc(len);
        unsigned char *iter = buffer;

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
                int offset = (*alloc.get_ptr_field_offsets())[i];
                memcpy(iter, &offset, sizeof(offset));
                iter += sizeof(offset);
            }
        }

        memcpy(iter, &n_ranges, sizeof(n_ranges));
        iter += sizeof(n_ranges);

        for (vector<pair<size_t, size_t> >::iterator range_iter =
                alloc.get_buffer_ranges()->begin(), range_e =
                alloc.get_buffer_ranges()->end(); range_iter != range_e;
                range_iter++) {
            size_t range_start = range_iter->first;
            size_t range_end = range_iter->second;

            memcpy(iter, &range_start, sizeof(range_start));
            iter += sizeof(range_start);

            memcpy(iter, &range_end, sizeof(range_end));
            iter += sizeof(range_end);
        }

        assert((size_t)(iter - buffer) == len);
        result->push_back(serialized_heap_var(buffer, len, buffer_length));
    }

    return (result);
}
