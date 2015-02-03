#include "checkpoint.h"
#include <assert.h>
#include <stdio.h>

#define CHECK(call) { \
    cudaError_t err = (call); \
    if (err != cudaSuccess) { \
        fprintf(stderr, "CUDA Error at %s:%d - %s\n", __FILE__, __LINE__, \
                cudaGetErrorString(err)); \
        exit(1); \
    } \
}

__global__ void vector_add(int *A, int *B, int *C, int N) {
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    if (tid < N) {
        C[tid] = A[tid] + B[tid];
    }
}

int main(int argc, char **argv) {
    int i;
    int N = 1024;
    int iter, iters = 10;
    int *h_A, *h_B, *h_C;
    int *d_A, *d_B, *d_C;

    h_A = (int *)malloc(N * sizeof(int));
    h_B = (int *)malloc(N * sizeof(int));
    h_C = (int *)malloc(N * sizeof(int));

    CHECK(cudaMalloc((void **)&d_A, N * sizeof(int)));
    CHECK(cudaMalloc((void **)&d_B, N * sizeof(int)));
    CHECK(cudaMalloc((void **)&d_C, N * sizeof(int)));

    for (i = 0; i < N; i++) {
        h_C[i] = i;
    }

    for (iter = 0; iter < iters; iter++) {
        for (i = 0; i < N; i++) {
            h_A[i] = h_C[i];
            h_B[i] = 2 * h_C[i];
        }

        CHECK(cudaMemcpy(d_A, h_A, N * sizeof(int), cudaMemcpyHostToDevice));
        CHECK(cudaMemcpy(d_B, h_B, N * sizeof(int), cudaMemcpyHostToDevice));

        wait_for_checkpoint();
        checkpoint();

        vector_add<<<4, 256>>>(d_A, d_B, d_C, N);

        CHECK(cudaMemcpy(h_C, d_C, N * sizeof(int), cudaMemcpyDeviceToHost));

        for (i = 0; i < N; i++) {
            assert(h_C[i] == h_A[i] + h_B[i]);
        }
    }

    CHECK(cudaFree(d_A));
    CHECK(cudaFree(d_B));
    CHECK(cudaFree(d_C));

    free(h_A);
    free(h_B);
    free(h_C);

    return 0;
}
