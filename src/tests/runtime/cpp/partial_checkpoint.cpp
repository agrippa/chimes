#include <checkpoint.h>
#include <assert.h>

int main(int argc, char **argv) {
    int *a = (int *)malloc(sizeof(int) * 100);
    int *b = (int *)malloc(sizeof(int) * 100);

    b[0] = 33;
    b[1] = 44;
    b[2] = 55;

    checkpoint();
    wait_for_checkpoint();

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    checkpoint();

    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);

    assert(b[0] == 33);
    assert(b[1] == 44);
    assert(b[2] == 55);

    return 0;
}
