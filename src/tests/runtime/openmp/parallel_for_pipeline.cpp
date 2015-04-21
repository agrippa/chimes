#include <stdio.h>
#include <assert.h>
#include <omp.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int N = 3;
    int *a = (int *)malloc(sizeof(int) * N);
    int *b = (int *)malloc(sizeof(int) * N);
    int *c = (int *)malloc(sizeof(int) * N);
    int *d = (int *)malloc(sizeof(int) * N);

    int ca = 3;
    int cb = 4;
    int cc = 5;

    for (int i = 0; i < N; i++) {
        a[i] = i;
    }

#pragma omp parallel
    {
        int i;
#pragma omp for
        for (i = 0; i < N; i++) {
            b[i] = a[i];
        }

        int j;
#pragma omp for firstprivate(ca, cb)
        for (j = 0; j < N; j++) {
            c[j] = b[j] + ca + cb;
        }

        int k;
#pragma omp for firstprivate(cc)
        for (k = 0; k < N; k++) {
            d[k] = c[k] + cc;
        }
    }

    checkpoint();

    for (int i = 0; i < N; i++) {
        assert(a[i] == b[i]);
        assert(b[i] + ca + cb == c[i]);
        assert(c[i] + cc == d[i]);
    }
    
    free(a);
    free(b);
    free(c);
    free(d);

    return 0;
}
