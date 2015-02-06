#include <stdio.h>
#include <stdlib.h>

#include "checkpoint.h"

extern void foo(int *A);

int main(int argc, char **argv) {
    int b;
    foo(&b);
    checkpoint();
    return b;
}
