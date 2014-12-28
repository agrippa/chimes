#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, iter;
    int N = 1024;
    int iters = 100;

    int *curr = (int *)malloc(N * sizeof(int));
    int *next = (int *)malloc(N * sizeof(int));
    for (i = 0; i < N; i++) {
        curr[i] = next[i] = rand() % 100;
    }

    for (iter = 0; iter < niters; iter++) {
        for (i = 1; i < N - 1; i++) {
            next[i] = (curr[i - 1] + curr[i] + curr[i + 1]) / 3;
        }
        int *tmp = curr;
        curr = next;
        next = tmp;
    }

    free(arr);
    return 0;
}
