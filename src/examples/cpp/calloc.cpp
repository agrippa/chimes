#include <checkpoint.h>

int main(int argc, char **argv) {
    int *alloc = (int *)calloc(10, sizeof(int));

    checkpoint();

    alloc[0] = 4;
    alloc[1] = 3;

    return alloc[1];
}
