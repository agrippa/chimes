#include <stdio.h>
#include <assert.h>
#include <omp.h>
#include <checkpoint.h>

int main(int argc, char **argv) {
    int a = 3;
    int b = 4;
    int c = 5;
#pragma omp parallel for
    for (int i = 0; i < 10; i++) {
        checkpoint();
    }

    return 0;
}
