#include "checkpoint.h"
#include <assert.h>

void foo(int b) {
    checkpoint();
    assert(b == 5);
}

int main(int argc, char **argv) {
    int a = 5;
    foo(a);
    return a;
}
