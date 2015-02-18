#include <stdio.h>
#include <omp.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int a = 3;
    int b = 4;
    int c = 5;
#pragma omp parallel firstprivate(a) private(b, c)
    {
        int inside = 6;
#pragma omp parallel private(inside)
        {
            printf("hello from %d : %d\n", omp_get_thread_num(), inside);
            checkpoint();
        }
    }

    return 0;
}
