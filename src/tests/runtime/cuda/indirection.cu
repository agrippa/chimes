#include <stdio.h>
#include "checkpoint.h"
#include <assert.h>

#define CHECK(call) { \
    cudaError_t err = (call); \
    if (err != cudaSuccess) { \
        fprintf(stderr, "CUDA Error at %s:%d - %s\n", __FILE__, __LINE__, \
                cudaGetErrorString(err)); \
        exit(1); \
    } \
}

__global__ void kernel(int **ptr_to_ptr, int N) {
    int tid = blockIdx.x * blockDim.x + threadIdx.x;

    int *ptr = *ptr_to_ptr;
    if (tid < N) {
        ptr[tid] = tid;
    }
}

int main(int argc, char **argv) {
    int i;
    int N = 1024;
    int *d_arr, *h_arr;
    int **d_ptr_to_ptr, *h_ptr_to_ptr;
    int *d_tmp_buffer;

    h_arr = (int *)malloc(sizeof(int) * N);
    CHECK(cudaMalloc((void **)&d_ptr_to_ptr, sizeof(int *)));
    CHECK(cudaMalloc((void **)&d_tmp_buffer, sizeof(int) * N));
    CHECK(cudaMalloc((void **)&d_arr, sizeof(int) * N));
    CHECK(cudaFree(d_tmp_buffer));

    checkpoint();

    CHECK(cudaMemcpy(d_ptr_to_ptr, &d_arr, sizeof(int *), cudaMemcpyHostToDevice));

    wait_for_checkpoint();
    checkpoint();

    kernel<<<4, 256>>>(d_ptr_to_ptr, N);
    CHECK(cudaDeviceSynchronize());

    wait_for_checkpoint();
    checkpoint();

    CHECK(cudaMemcpy(h_arr, d_arr, sizeof(int) * N, cudaMemcpyDeviceToHost));
    CHECK(cudaMemcpy(&h_ptr_to_ptr, d_ptr_to_ptr, sizeof(void *), cudaMemcpyDeviceToHost));

    assert(h_ptr_to_ptr == d_arr);
    for (i = 0; i < N; i++) {
        assert(h_arr[i] == i);
    }

    CHECK(cudaFree(d_ptr_to_ptr));
    CHECK(cudaFree(d_arr));
    free(h_arr);

    return 0;
}
