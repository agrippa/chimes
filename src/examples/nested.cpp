#include <stdlib.h>

int main(int argc, char **argv) {
    int **nested = (int **)malloc(sizeof(int *) * 10);
    nested[0] = (int *)malloc(sizeof(int) * 20);
    void *dummy_alloc = malloc(sizeof(int) * 30);
    nested[1] = (int *)dummy_alloc;
    return 0;
}
