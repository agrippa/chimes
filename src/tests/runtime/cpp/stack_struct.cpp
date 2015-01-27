#include "checkpoint.h"
#include <assert.h>

struct foo {
    int a;
    int b;
};

int main(int argc, char **argv) {
    struct foo a;
    a.a = 3;
    a.b = 4;

    checkpoint();

    assert(a.a == 3);
    assert(a.b == 4);
    return a.b;
}
