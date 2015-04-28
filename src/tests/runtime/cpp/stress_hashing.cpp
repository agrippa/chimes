#include <checkpoint.h>
#include <assert.h>

int main(int argc, char **argv) {
    size_t len = 1024UL * 1024UL * 1024UL;
    int *arr = (int *)malloc(sizeof(int) * len);
    arr[0] = 42;
    arr[len - 1] = 43;

    checkpoint();
    wait_for_checkpoint();

    assert(arr[0] == 42);
    assert(arr[len - 1] == 43);

    arr[len - 1] = 44;

    checkpoint();
    wait_for_checkpoint();

    assert(arr[0] == 42);
    assert(arr[len - 1] == 44);

    arr[0] = 45;

    checkpoint();
    wait_for_checkpoint();

    assert(arr[0] == 45);
    assert(arr[len - 1] == 44);

    return 0;
}
