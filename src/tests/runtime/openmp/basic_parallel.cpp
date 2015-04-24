#include <stdio.h>
#include <assert.h>
#include <omp.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int a = 3;
    int b = 4;
    int c = 5;
#pragma omp parallel firstprivate(a) private(b, c)
    {
        int inside = 6;

        checkpoint();

        assert(a == 3);
        assert(inside == 6);
    }

    return 0;
}
