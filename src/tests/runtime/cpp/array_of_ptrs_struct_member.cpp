#include <checkpoint.h>
#include <assert.h>

typedef struct _foo {
    int *arr[10];
} foo;

int main(int argc, char **argv) {
    foo *f = (foo *)malloc(sizeof(foo));

    checkpoint();

    for (int i = 0; i < 10; i++) {
        (f->arr)[i] = (int *)malloc(i * sizeof(int));
    }

    checkpoint();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            (f->arr)[i][j] = i * j;
        }
    }

    checkpoint();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            assert((f->arr)[i][j] == (i * j));
        }
    }

    return 0;
}
