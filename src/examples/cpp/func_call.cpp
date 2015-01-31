#include "checkpoint.h"

int foo(int a) {
    int b = a;
    int c = a + b;
    return c;
}

int main(int argc, char **argv) {
    int a = 3;
    int b = foo(a);
    return b;
}
