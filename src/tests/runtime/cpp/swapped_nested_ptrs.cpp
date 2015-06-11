#include <checkpoint.h>
#include <assert.h>

typedef struct _obj {
    int id;
    int *arr;
} obj;

int main(int argc, char **argv) {
    obj *first = (obj *)malloc(sizeof(obj));
    obj *second = (obj *)malloc(sizeof(obj));

    first->id = 0;
    first->arr = (int *)malloc(sizeof(int) * 10);

    second->id = 1;
    second->arr = (int *)malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; i++) {
        (first->arr)[i] = i;
        (second->arr)[i] = 2 * i;
    }

    checkpoint();

    assert(first->id == 0);
    assert(second->id == 1);
    for (int i = 0; i < 10; i++) {
        assert((first->arr)[i] == i);
        assert((second->arr)[i] == 2 * i);
    }

    obj *tmp = first;
    first = second;
    second = tmp;

    checkpoint();

    assert(first->id == 1);
    assert(second->id == 0);
    for (int i = 0; i < 10; i++) {
        assert((first->arr)[i] == 2 * i);
        assert((second->arr)[i] == i);
    }

    return 0;
}
