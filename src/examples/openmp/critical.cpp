#include <stdio.h>
#include <omp.h>
#include <checkpoint.h>

void foo() {
    checkpoint();
}

int main(int argc, char **argv) {
    int a = 3;
    int b = 4;
    int c = 5;
    int d = 0;
#pragma omp parallel firstprivate(a) private(b, c)
    {
        int inside = 6;

#pragma omp critical
        {
            d = d + 1;
        }

        printf("hello from %d : %d\n", omp_get_thread_num(), inside);
        foo();
    }

    return 0;
}
