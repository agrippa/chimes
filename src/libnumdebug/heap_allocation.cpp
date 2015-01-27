#include <vector>
#include <algorithm>

#include <string.h>

#include "common.h"
#include "heap_allocation.h"

#ifdef CUDA_SUPPORT
#include <cuda_runtime.h>
#endif

void heap_allocation::add_type_info(size_t set_elem_size, int set_elem_is_ptr,
        int set_elem_is_struct) {
    assert(!have_type_info);
    if (set_elem_is_ptr) assert(!set_elem_is_struct);
    if (set_elem_is_struct) assert(!set_elem_is_ptr);

    have_type_info = true;
    elem_size = set_elem_size;
    elem_is_ptr = set_elem_is_ptr;
    elem_is_struct = set_elem_is_struct;
}

void heap_allocation::add_pointer_offset(int offset) {
    assert(have_type_info);
    assert(!elem_is_ptr);
    assert(std::find(elem_ptr_offsets.begin(), elem_ptr_offsets.end(),
                offset) == elem_ptr_offsets.end());

    elem_ptr_offsets.push_back(offset);
}

void heap_allocation::copy(heap_allocation *dst) {
    assert(dst->address == NULL);

    dst->tmp_buffer = (void *)malloc(size);
    if (is_cuda_alloc) {
        //TODO make this better
        CHECK(cudaMemcpy(dst->tmp_buffer, address, size,
                    cudaMemcpyDeviceToHost));
    } else {
        memcpy(dst->tmp_buffer, address, size);
    }

    dst->address = address;
    dst->size = size;
    dst->alias_group = alias_group;
    dst->is_cuda_alloc = is_cuda_alloc;
    dst->seq = seq;
    dst->have_type_info = have_type_info;
    if (have_type_info) {
        dst->elem_size = elem_size;
        dst->elem_is_ptr = elem_is_ptr;
        dst->elem_is_struct = elem_is_struct;
        if (elem_is_struct) {
            for (std::vector<int>::iterator i =
                    elem_ptr_offsets.begin(), e =
                    elem_ptr_offsets.end(); i != e; i++) {
                dst->elem_ptr_offsets.push_back(*i);
            }
        }
    }
}
