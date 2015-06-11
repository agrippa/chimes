#include <stdlib.h>
#include "checkpoint.h"
#include <assert.h>

int main(int argc, char **argv) {
    int i;
    int a = -1;

    for (i = 0; i < 100; i++) {
        a = i;
        checkpoint();

        assert(a == i);
    }

    return i;
}
