#include "checkpoint.h"

int foo(int a) {
    return a + 3;
}

int main(int argc, char **argv) {
    int c = 4;
    int (*fp)(int) = &foo;
    int b = (*fp)(c);

    checkpoint();

    return b + c;
}
