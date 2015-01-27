#include "checkpoint.h"
#include <assert.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int *d_arr;
    int *h_arr = (int *)malloc(sizeof(int) * 100);
    cudaMalloc((void **)&d_arr, sizeof(int) * 100);
    cudaMemcpy(d_arr, h_arr, sizeof(int) * 100, cudaMemcpyHostToDevice);
    h_arr[0] = 0;

    checkpoint();

    assert(h_arr != NULL);

    cudaFree(d_arr);
    free(h_arr);
    return 0;
}
