#include "checkpoint.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    int nx = 24;
    int ny = 24;
    int nz = 24;

    int ***arr = (int ***)malloc(sizeof(int **) * nx);
    for (int i = 0; i < nx; i++) {
        arr[i] = (int **)malloc(sizeof(int *) * ny);
        for (int j = 0; j < ny; j++) {
            arr[i][j] = (int *)malloc(sizeof(int) * nz);
            for (int k = 0; k < nz; k++) {
                arr[i][j][k] = i + j + k;
            }
        }
    }

    checkpoint();

    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                assert(arr[i][j][k] == i + j + k);
            }
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);

    return 0;
}
