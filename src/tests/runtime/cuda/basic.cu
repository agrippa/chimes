#include "checkpoint.h"
#include <assert.h>
#include <stdio.h>

__global__ void kernel(int *arr) {
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    arr[tid] = tid;
}

int main(int argc, char **argv) {
    int *d_arr;
    int *h_arr = (int *)malloc(sizeof(int) * 100);
    cudaMalloc((void **)&d_arr, sizeof(int) * 100);
    cudaMemcpy(d_arr, h_arr, sizeof(int) * 100, cudaMemcpyHostToDevice);
    h_arr[0] = 0;
    h_arr[1] = 1;
    h_arr[2] = 2;

    checkpoint();

    kernel<<<10, 128>>>(d_arr);

    assert(h_arr != NULL);
    assert(d_arr != NULL);

    assert(h_arr[0] == 0);
    assert(h_arr[1] == 1);
    assert(h_arr[2] == 2);

    cudaMemcpy(h_arr, d_arr, sizeof(int) * 100, cudaMemcpyDeviceToHost);

    assert(h_arr[0] == 0);
    assert(h_arr[1] == 1);
    assert(h_arr[2] == 2);

    cudaFree(d_arr);
    free(h_arr);
    return 0;
}
