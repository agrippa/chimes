#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define OFFSET(i, j, interior) ((i) * (interior) + (j))

static void usage(char **argv) {
    fprintf(stderr, "usage: %s [-m size] [-n size] [-p size] [-h]\n", argv[0]);
    fprintf(stderr, "       Implements matrix multiplication\n");
    fprintf(stderr, "       [MxN] * [NxP] = [MxP]\n");
    exit(1);
}

static void matmult(int *A, int *B, int *C, int M, int N, int P) {
    int i, j, k;
    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            int sum = 0;
            for (k = 0; k < N; k++) {
                sum += A[OFFSET(i, k, N)] * B[OFFSET(k, j, P)];
            }
            C[OFFSET(i, j, P)] = sum;
        }
    }
}

int main(int argc, char **argv) {
    int c, i, j;
    int M = 1024;
    int N = 1024;
    int P = 1024;
    opterr = 0;

    while ((c = getopt(argc, argv, "m:n:p:h")) != -1) {
        switch (c) {
            case 'm':
                M = atoi(optarg);
                break;
            case 'n':
                N = atoi(optarg);
                break;
            case 'p':
                P = atoi(optarg);
                break;
            case '?':
                fprintf(stderr, "Missing argument to option %c\n", optopt);
            case 'h':
            default:
                usage(argv);

        }
    }

    int *A = (int *)malloc(M * N * sizeof(int));
    int *B = (int *)malloc(N * P * sizeof(int));
    int *C = (int *)malloc(M * P * sizeof(int));

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            A[OFFSET(i, j, N)] = i + j;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < P; j++) {
            B[OFFSET(i, j, P)] = i * j;
        }
    }

    matmult(A, B, C, M, N, P);

    printf("Done\n");

    free(A);
    free(B);
    free(C);

    return 0;
}
