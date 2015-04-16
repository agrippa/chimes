#include "checkpoint.h"

int foo(int a) {
    return a + 3;
}

int bar(int b) {
    return b + 5;
}

int main(int argc, char **argv) {
    int d;
    switch(argc) {
        case 0:
            d = foo(argc);
            break;
        case 1:
            d = bar(argc);
            break;
        default:
            d = 5;
    }
    checkpoint();
    return d;
}
