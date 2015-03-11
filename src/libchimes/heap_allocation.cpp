#include <vector>
#include <algorithm>

#include <string.h>

#include "chimes_common.h"
#include "heap_allocation.h"

#ifdef CUDA_SUPPORT
#include <cuda_runtime.h>
#endif

void heap_allocation::add_pointer_offset(int offset) {
    assert(!elem_is_ptr && elem_is_struct);
    assert(std::find(elem_ptr_offsets.begin(), elem_ptr_offsets.end(),
                offset) == elem_ptr_offsets.end());

    elem_ptr_offsets.push_back(offset);
}

void heap_allocation::copy(heap_allocation *dst) {
    assert(dst->address == NULL);

    dst->tmp_buffer = (void *)malloc(size);
    assert(dst->tmp_buffer != NULL);

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
    dst->elem_is_ptr = elem_is_ptr;
    dst->elem_is_struct = elem_is_struct;

    if (elem_is_struct) {
        dst->elem_size = elem_size;
        for (std::vector<int>::iterator i =
                elem_ptr_offsets.begin(), e =
                elem_ptr_offsets.end(); i != e; i++) {
            dst->elem_ptr_offsets.push_back(*i);
        }
    }
}
