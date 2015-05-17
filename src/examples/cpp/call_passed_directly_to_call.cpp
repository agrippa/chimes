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

    foo(&b, bar());

    checkpoint();

    assert(b == 6);
    return 0;
}
