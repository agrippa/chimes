#include "checkpoint.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    int i;
    int **arr = (int **)malloc(sizeof(int *) * 10);
    memset(arr, 0x00, sizeof(int *) * 10);

    checkpoint();

    for (i = 0; i < 10; i++) {
        assert(arr[i] == NULL);
    }

    return 0;
}
