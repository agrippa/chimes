#include <checkpoint.h>
#include <assert.h>

typedef struct _foo {
    int a;
} foo;

void handler(void *ptr) {
    foo *f_ptr = (foo *)ptr;
    f_ptr->a = 42;
}

int main(int argc, char **argv) {
    register_custom_init_handler("_foo", handler);

    foo *f = (foo *)malloc(sizeof(foo));
    f->a = 3;

    checkpoint();
    wait_for_checkpoint();

    assert(f->a == 42);
    return 0;
}
