#include "checkpoint.h"
#include <assert.h>

struct foo {
    int a;
    int b;
};

void bar(int a) {
    struct foo f;
    f.a = a;
    f.b = 5;

    checkpoint();

    assert(f.a == 6);
    assert(f.b == 5);
}

int main(int argc, char **argv) {
    bar(6);
    return 0;
}
