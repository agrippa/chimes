#include "type_info.h"
#include <cstdarg>

extern void malloc_helper(void *new_ptr, size_t nbytes, int group,
        int is_cuda_alloc, int has_type_info, int is_ptr, int is_struct,
        int elem_size, int *ptr_field_offsets, int n_ptr_field_offsets);

cudaError_t cudaMalloc_wrapper(void **ptr, size_t size, int group,
        int has_type_info, ...) {
    cudaError_t err = cudaMalloc(ptr, size);
    if (err != cudaSuccess) {
        return err;
    }

    numdebug_type_info info; memset(&info, 0x00, sizeof(info));
    if (has_type_info) {
        va_list vl;
        va_start(vl, has_type_info);
        parse_type_info(vl, &info);
        va_end(vl);
    }

    malloc_helper(*ptr, size, group, 1, has_type_info, info.is_ptr,
            info.is_struct, info.elem_size, info.ptr_field_offsets,
            info.n_ptr_fields);

    return cudaSuccess;
}

cudaError_t cudaFree_wrapper(void *ptr, int group) {
    cudaError_t err = cudaFree(ptr);
    if (err != cudaSuccess) {
        return err;
    }

    return cudaSuccess;
}
