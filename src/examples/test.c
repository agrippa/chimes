#include <stdlib.h>

int main(int argc, char **argv) {
    int i;
    int N = 10;
    int *a = (int *)malloc(sizeof(int) * N);

    for (i = 0; i < N; i++) {
        a[i] = i;
    }

    free(a);
    return 0;
}
