#include <stdio.h>
#include <omp.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int a = 3;
    int b = 4;
    int c = 5;
#pragma omp parallel firstprivate(a) private(b, c)
    {
#pragma omp for
        for (int i = 0; i < 10; i++) {
            int a = 4;
        }
    }

    checkpoint();

    return 0;
}
