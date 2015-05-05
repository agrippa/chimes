#include <stdlib.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int *A = (int *)malloc(sizeof(int) * 10);
    A[0] = 3;
    A[1] = 4;

    if (A[0] == 3) {
        return 1;
    }

    A[2] = 5;

    if (A[0] == 2) {
        checkpoint();
        return A[0];
    }

    return 3;
}
