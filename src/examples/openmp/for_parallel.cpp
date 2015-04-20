#include <stdio.h>
#include <omp.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int a = 3;
    int b = 4;
    int c = 5;
#pragma omp parallel for firstprivate(a) private(b, c)
    for (int i = 0; i < 10; i++) {
        int inside = 6;
        printf("hello from %d : %d\n", omp_get_thread_num(), inside);
    }

    checkpoint();

    return 0;
}
