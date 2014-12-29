#include <stdio.h>
#include <stdlib.h>

typedef struct _foo {
    int a;
    int *b;
} foo;

int main(int argc, char **argv) {
    foo test;
    test.a = 3;
    test.b = NULL;
    foo *test2 = (foo *)malloc(sizeof(foo) * 3);
    test2[0].a = 3;
    return 0;
}
