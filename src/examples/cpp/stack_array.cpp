#include "checkpoint.h"
#include <assert.h>

int main(int argc, char **argv) {
    int a[] = { 1, 2, 3, 4, 5 };
    a[4] = a[0];
    a[3] = a[1];

    checkpoint();

    assert(a[0] == 5);
    assert(a[1] == 4);
    assert(a[2] == 3);
    assert(a[3] == 2);
    assert(a[4] == 1);

    return 0;
}
