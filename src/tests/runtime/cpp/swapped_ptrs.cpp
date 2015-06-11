#include <checkpoint.h>
#include <assert.h>

int main(int argc, char **argv) {
    int *a = (int *)malloc(sizeof(int) * 100);
    int *b = (int *)malloc(sizeof(int) * 100);

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    b[0] = 33;
    b[1] = 44;
    b[2] = 55;

    checkpoint();

    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);

    assert(b[0] == 33);
    assert(b[1] == 44);
    assert(b[2] == 55);

    int *tmp = a;
    a = b;
    b = tmp;

    checkpoint();

    assert(a[0] == 33);
    assert(a[1] == 44);
    assert(a[2] == 55);

    assert(b[0] == 1);
    assert(b[1] == 2);
    assert(b[2] == 3);

    return 0;
}
