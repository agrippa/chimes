#include <checkpoint.h>
#include <assert.h>

typedef struct _foo {
    int *arr;
    int scalar;
} foo;

typedef struct _bar {
    foo *st;
    int *arr;
} bar;

foo *allocate(int N) {
    foo *f = (foo *)malloc(sizeof(foo));
    f->scalar = N;
    f->arr = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        (f->arr)[i] = i;
    }
    return f;
}

int main(int argc, char **arg) {
    bar *b = (bar *)malloc(sizeof(bar));
    b->arr = (int *)malloc(10 * sizeof(int));

    checkpoint();
    wait_for_checkpoint();

    b->st = allocate(20);

    for (int i = 0; i < 10; i++) {
        (b->arr)[i] = -1 * i;
    }

    checkpoint();
    wait_for_checkpoint();

    assert(b->st);
    assert(b->st->arr);
    for (int i = 0; i < 20; i++) {
        assert((b->st->arr)[i] == i);
    }
    assert(b->st->scalar == 20);

    assert(b->arr);
    for (int i = 0; i < 10; i++) {
        assert((b->arr)[i] == (-1 * i));
    }

    for (int i = 0; i < 20; i++) {
        (b->st->arr)[i] = 2 * i;
    }

    checkpoint();
    wait_for_checkpoint();

    for (int i = 0; i < 20; i++) {
        assert((b->st->arr)[i] == (2 * i));
    }

    return 0;
}
