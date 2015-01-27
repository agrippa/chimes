#include "checkpoint.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    int i;
    int **arr = (int **)malloc(sizeof(int *) * 10);
    int *arr2 = (int *)malloc(sizeof(int) * 10);
    memset(arr, 0x00, sizeof(int *) * 10);
    arr[0] = arr2;

    for (i = 0; i < 10; i++) {
        arr2[i] = i;
    }

    checkpoint();

    assert(arr[0] == arr2);
    for (i = 1; i < 10; i++) {
        assert(arr[i] == NULL);
    }
    for (i = 0; i < 10; i++) {
        assert(arr[0][i] == i);
    }

    return 0;
}
