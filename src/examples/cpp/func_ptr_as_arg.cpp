#include <checkpoint.h>

int bar(int a) {
    return a + 4;
}

int foo(int (*fptr)(int)) {
    return (*fptr)(3);
}

int main(int argc, char **argv) {

    int c = foo(bar);

    checkpoint();

    return c;
}
