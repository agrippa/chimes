#include <checkpoint.h>

int bar(int c) {
    return c + 10;
}

int foo(int a) {
    return bar(a) + 5;
}

int main(int argc, char **argv) {
    int a = 5;
    int d = foo(a);
    checkpoint();
    d = d + 10;
    return d;
}
