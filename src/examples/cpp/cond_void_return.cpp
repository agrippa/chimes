#include <checkpoint.h>
#include <stdlib.h>

void bar(int *A, int *B) {
    A[0] = 3;

    if (A[0] == 3) {
        return;
    }

    B[0] = 3;

    return;
}

int main(int argc, char **argv) {
    int *A = (int *)malloc(sizeof(int) * 10);
    int *B = (int *)malloc(sizeof(int) * 10);

    bar(A, B);
    checkpoint();

    return 0;
}
