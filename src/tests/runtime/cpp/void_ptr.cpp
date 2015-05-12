#include <checkpoint.h>
#include <assert.h>

typedef struct _bar {
    int *arr;
} bar;

typedef struct _foo {
    void *ptr;
} foo;

int main(int argc, char **argv) {
    bar *b = (bar *)malloc(sizeof(bar));
    b->arr = (int *)malloc(10 * sizeof(int));
    foo *f = (foo *)malloc(sizeof(foo));

    for (int i = 0; i < 10; i++) {
        (b->arr)[i] = i;
    }

    checkpoint();
    wait_for_checkpoint();

    f->ptr = b;

    checkpoint();
    wait_for_checkpoint();

    for (int i = 0; i < 10; i++) {
        assert((((bar *)(f->ptr))->arr)[i] == i);
    }
    return 0;
}
