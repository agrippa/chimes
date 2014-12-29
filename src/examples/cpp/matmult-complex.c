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

static void matmult(int **A, int **B, int **C, int M, int N, int P) {
    int i, j, k;
    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            int sum = 0;
            for (k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
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

    int **A = (int **)malloc(M * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **C = (int **)malloc(M * sizeof(int *));
    for (i = 0; i < M; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
    }
    for (i = 0; i < N; i++) {
        B[i] = (int *)malloc(P * sizeof(int));
    }
    for (i = 0; i < P; i++) {
        C[i] = (int *)malloc(P * sizeof(int));
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = i + j;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < P; j++) {
            B[i][j] = i * j;
        }
    }

    matmult(A, B, C, M, N, P);

    printf("Done\n");

    for (i = 0; i < M; i++) {
        free(A[i]);
    }
    free(A);
    for (i = 0; i < N; i++) {
        free(B[i]);
    }
    free(B);
    for (i = 0; i < P; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}
