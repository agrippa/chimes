#include "checkpoint.h"
#include <assert.h>

extern int foo(int *a) __attribute__((nocheckpoint));

int main(int argc, char **argv) {
    int *a = (int *)malloc(10 * sizeof(int));
    int *b = (int *)malloc(10 * sizeof(int));

    a[0] = 3;
    b[0] = 3;

    int c = foo(b);

    a[0] = 3;
    b[0] = 3;

    checkpoint();

    assert(a[0] == 3);
    assert(b[0] == 3);

    free(a);
    free(b);

    return 0;
}
