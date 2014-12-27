#include <stdio.h>

typedef struct _foo {
    int a;
    int *b;
} foo;

int main(int argc, char **argv) {
    foo test;
    test.a = 3;
    test.b = NULL;
    return 0;
}
