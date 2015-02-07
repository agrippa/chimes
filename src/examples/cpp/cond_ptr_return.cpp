#include <stdlib.h>
#include <checkpoint.h>

void *foo() {
    int *A = (int *)malloc(sizeof(int) * 10);
    A[0] = 1;

    if (A[0] == 3) {
        return A;
    }

    return NULL;
}

int main(int argc, char **argv) {
    void *tmp = foo();
    checkpoint();
    return 0;
}
