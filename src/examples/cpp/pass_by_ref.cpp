#include <stdio.h>
#include <stdlib.h>

extern void foo(int *A);

int main(int argc, char **argv) {
    int b = 3;
    foo(&b);
    return 0;
}
