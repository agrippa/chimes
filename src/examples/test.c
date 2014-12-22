#include <stdlib.h>

static int foo(int a);

static int bar(int b) {
    return foo(b + 2);
}

static int foo(int a) {
    return bar(a + 1);
}

int main(int argc, char **argv) {
    int i;
    int N = 10;
    int * arr1 = (int *)malloc(sizeof(int) * N);
    int * arr2 = (int *)malloc(sizeof(int) * N);
    // int **alias1 = &arr1;
    int *alias2 = arr1 + 4;
    int *alias3 = alias2 + 2;

    for (i = 0; i < N; i++) {
        alias2[i] = foo(i);
        arr1[i] = foo(i + 1);
        *alias3 = foo(i + 1);
    }

    free(arr1);
    free(arr2);
    return 0;
}
