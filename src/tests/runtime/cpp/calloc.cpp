#include "checkpoint.h"
#include <assert.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *arr = (int *)calloc(10, sizeof(int));
    arr[0] = 42;
    arr[1] = 43;
    arr[2] = 44;

    checkpoint();

    assert(arr[0] == 42);
    assert(arr[1] == 43);
    assert(arr[2] == 44);

    for (int i = 3; i < 10; i++) {
        assert(arr[i] == 0);
    }

    return arr[0];
}
