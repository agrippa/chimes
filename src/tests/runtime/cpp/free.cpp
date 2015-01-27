#include "checkpoint.h"
#include <assert.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *arr = (int *)malloc(sizeof(int) * 10);
    int *arr2 = (int *)malloc(sizeof(int) * 10);
    arr[0] = 42;
    arr[1] = 43;
    arr[2] = 44;

    arr2[0] = 3;

    free(arr2);

    checkpoint();

    assert(arr[0] == 42);
    assert(arr[1] == 43);
    assert(arr[2] == 44);

    return arr[0];
}
