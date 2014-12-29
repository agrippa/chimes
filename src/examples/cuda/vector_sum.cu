#include <stdio.h>
#include <stdlib.h>

#define CHECK(call) { \
    cudaError_t error; \
    if ((error = (call)) != cudaSuccess) { \
        fprintf(stderr, "Error at %s:%d - %s\n", __FILE__, __LINE__, \
                cudaGetErrorString(error)); \
        exit(1); \
    } \
}

__global__ void kernel(int *A, int *B, int *C, int N) {
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    if (tid < N) {
        C[tid] = A[tid] + B[tid];
    }
}

int main(int argc, char **argv) {
    int i;
    int N = 1024 * 1024;

    int *h_A, *h_B, *h_C;
    int *d_A, *d_B, *d_C;

    h_A = (int *)malloc(sizeof(int) * N);
    h_B = (int *)malloc(sizeof(int) * N);
    h_C = (int *)malloc(sizeof(int) * N);

    CHECK(cudaMalloc((void **)&d_A, sizeof(int) * N));
    CHECK(cudaMalloc((void **)&d_B, sizeof(int) * N));
    CHECK(cudaMalloc((void **)&d_C, sizeof(int) * N));

    for (i = 0; i < N; i++) {
        h_A[i] = i;
        h_B[i] = 2 * i;
    }

    CHECK(cudaMemcpy(d_A, h_A, sizeof(int) * N, cudaMemcpyHostToDevice))
    CHECK(cudaMemcpy(d_B, h_B, sizeof(int) * N, cudaMemcpyHostToDevice))

    int threads_per_block = 128;
    int blocks_per_grid = (N + threads_per_block - 1) / threads_per_block;

    kernel<<<blocks_per_grid, threads_per_block>>>(d_A, d_B, d_C, N);

    CHECK(cudaMemcpy(h_C, d_C, sizeof(int) * N, cudaMemcpyDeviceToHost));

    FILE *fp = fopen("dump.out", "w");
    for (i = 0; i < N; i++) {
        fprintf(fp, "%d\n", h_C[i]);
    }
    fclose(fp);

    CHECK(cudaFree(d_A));
    CHECK(cudaFree(d_B));
    CHECK(cudaFree(d_C));

    return 0;
}
