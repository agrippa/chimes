#include "checkpoint.h"
#include <assert.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *arr = (int *)malloc(sizeof(int) * 10);
    arr[0] = 42;
    arr[1] = 43;
    arr[2] = 44;

    arr = (int *)realloc(arr, sizeof(int) * 30);

    arr[27] = 100;
    arr[28] = 101;
    arr[29] = 102;

    checkpoint();

    assert(arr[0] == 42);
    assert(arr[1] == 43);
    assert(arr[2] == 44);

    assert(arr[27] == 100);
    assert(arr[28] == 101);
    assert(arr[29] == 102);

    return arr[0];
}
