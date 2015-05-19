#include <checkpoint.h>

int foo(int a) {
    return a + 3;
}

int bar(int a) {
    return a + 4;
}

int main(int argc, char **argv) {
    int a = 3;

    a = foo(bar(a));
    checkpoint();
    return a;
}
