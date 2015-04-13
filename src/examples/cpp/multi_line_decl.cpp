#include <checkpoint.h>

int foo(int a, int b) {
    return a + b;
}

int main(int argc, char **argv) {
    int a = 3 + 
        4 + 5 + 
        6;
    int *ptr = (int *)malloc(100);
    ptr[0] = 42;

    checkpoint();

    return foo(ptr[0], a);
}
