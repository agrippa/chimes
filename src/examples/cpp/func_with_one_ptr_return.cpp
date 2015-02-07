#include <stdlib.h>
#include <checkpoint.h>

void *haha_this_sux_part_deux() {
    int *A = (int *)malloc(sizeof(int) * 10);
    return A;
}

int main(int argc, char **argv) {
    void *tmp = haha_this_sux_part_deux();
    checkpoint();
    return 0;
}
