#include <checkpoint.h>
#include <assert.h>

int foo(int *a, int s) {
    *a = s;
}

int bar() {
    return 6;
}

int main(int argc, char **argv) {
    int b;

    foo(&b, bar() + 9);

    checkpoint();

    assert(b == 9);
    return 0;
}
