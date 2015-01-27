#include "checkpoint.h"
#include <stdio.h>
#include <assert.h>

struct foo {
    int a;
    int b;
};

int main(int argc, char **argv) {
    struct foo a;
    a.a = 3;
    a.b = 4;

    checkpoint();
    fprintf(stderr, "%p %d %d\n", &a, a.a, a.b);

    assert(a.a == 3);
    assert(a.b == 4);
    return a.b;
}
