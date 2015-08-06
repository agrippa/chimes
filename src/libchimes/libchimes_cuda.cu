#include "type_info.h"
#include "heap_allocation.h"
#include "ptr_and_size.h"
#include "chimes_common.h"
#include "heap_tree.h"
#include <map>
#include <cstdarg>

using namespace std;

extern void malloc_impl(void *new_ptr, size_t nbytes, size_t group,
        int is_cuda_alloc, int is_ptr, int is_struct, int elem_size,
        int *ptr_field_offsets, int n_ptr_field_offsets, bool filled);
extern heap_allocation *free_impl(const void *ptr, heap_allocation *alloc);
extern map<void *, heap_allocation *>::iterator find_in_heap(void *ptr);

__global__ void translate_pointers_kernel(void *arr, int nelems, int elem_size,
        int *ptr_offsets, int n_ptr_offsets, void **old_ptrs, void **new_ptrs,
        size_t *ptr_size, int n_translations);

void cudaMalloc_helper(cudaError_t err, void **ptr, size_t size, size_t group,
        int is_ptr, int is_struct, ...) {
    if (err != cudaSuccess) {
        return;
    }

    chimes_type_info info; memset(&info, 0x00, sizeof(info));
    if (is_struct) {
        va_list vl;
        va_start(vl, is_struct);
        parse_type_info(&vl, &info);
        va_end(vl);
    }

    malloc_impl(*ptr, size, group, 1, is_ptr, is_struct, info.elem_size,
            info.ptr_field_offsets, info.n_ptr_fields, false);
}

void cudaFree_helper(cudaError_t err, void *ptr, size_t group) {
    if (err == cudaSuccess) {
        free_impl(ptr);
    }
}

void translate_cuda_pointers(void *d_arr, int nelems, int elem_size,
        int *ptr_offsets, unsigned n_ptr_offsets, heap_tree *old_to_new) {

    int *d_ptr_offsets;
    void **d_old, **d_new;
    size_t *d_size;

    void **h_old, **h_new;
    size_t *h_size;
    const int index = old_to_new->serialize(&h_old, &h_new, &h_size);

    CHECK(cudaMalloc((void **)&d_ptr_offsets, sizeof(int) * n_ptr_offsets));
    CHECK(cudaMalloc((void **)&d_old, sizeof(void *) * index));
    CHECK(cudaMalloc((void **)&d_new, sizeof(void *) * index));
    CHECK(cudaMalloc((void **)&d_size, sizeof(size_t) * index));

    CHECK(cudaMemcpy(d_ptr_offsets, ptr_offsets,
                sizeof(int) * n_ptr_offsets, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_old, h_old, sizeof(void *) * index, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_new, h_new, sizeof(void *) * index, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_size, h_size, sizeof(size_t) * index, cudaMemcpyHostToDevice));

    int threads = 256;
    int blocks = (nelems + threads - 1) / threads;
    translate_pointers_kernel<<<blocks, threads>>>(d_arr, nelems, elem_size,
            d_ptr_offsets, n_ptr_offsets, d_old, d_new, d_size, index);
    CHECK(cudaDeviceSynchronize());

    CHECK(cudaFree(d_ptr_offsets));
    CHECK(cudaFree(d_old));
    CHECK(cudaFree(d_new));
    CHECK(cudaFree(d_size));
    free(h_old);
    free(h_new);
    free(h_size);
}

__device__ void *translate_ptr(void *ptr, void **old_ptrs, void **new_ptrs,
        size_t *ptr_size, int n_translations) {
    int i;
    unsigned char *c_ptr = (unsigned char *)ptr;
    for (i = 0; i < n_translations; i++) {
        unsigned char *old = (unsigned char *)old_ptrs[i];
        size_t size = ptr_size[i];
        size_t diff = c_ptr - old;
        if (diff < size) {
            return (void *)(((unsigned char *)(new_ptrs[i])) + diff);
        }
    }
    return NULL;
}

__global__ void translate_pointers_kernel(void *arr, int nelems, int elem_size,
        int *ptr_offsets, int n_ptr_offsets, void **old_ptrs, void **new_ptrs,
        size_t *ptr_size, int n_translations) {
    int i;
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    if (tid >= nelems) return;

    unsigned char *elem_ptr = (unsigned char *)arr + (tid * elem_size);
    for (i = 0; i < n_ptr_offsets; i++) {
        void **ptr_ptr = (void **)(elem_ptr + ptr_offsets[i]);
        void *new_ptr = translate_ptr(*ptr_ptr, old_ptrs, new_ptrs, ptr_size, n_translations);
        *ptr_ptr = new_ptr;
    }
}
