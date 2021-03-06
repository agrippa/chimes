#include <stdio.h>
#include <stdlib.h>
#include "checkpoint.h"
#include <assert.h>

typedef struct _foo {
    int a;
    int *b;
    int **c;
} foo;

int main(int argc, char **argv) {
    foo test;
    test.a = 3;
    test.b = NULL;
    test.c = NULL;
    foo *test2 = (foo *)malloc(sizeof(foo) * 3);
    test2[0].a = 3;
    fprintf(stderr, "Hello before checkpointing\n");

    checkpoint();

    assert(test.a == 3);
    assert(test.b == NULL);
    assert(test.c == NULL);
    assert(test2[0].a == 3);

    return 0;
}
