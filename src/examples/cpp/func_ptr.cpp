#include <checkpoint.h>

int (*fptr)(int) = NULL;

int foo(int a) {
    return a + 5;
}

int main(int argc, char **argv) {
    fptr = foo;
    int b = (*fptr)(6);

    checkpoint();

    return b;
}
