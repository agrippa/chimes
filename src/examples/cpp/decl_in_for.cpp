#include <checkpoint.h>
#include <assert.h>

int main(int argc, char **argv) {
    int a = 0;
    for (int i = 0; i < 10; i++) {
        a += i;
    }

    checkpoint();

    assert(a == 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9);
    return 0;
}
