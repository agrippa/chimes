#include <stdlib.h>
#include <checkpoint.h>

void *haha_this_sux_part_trois() {
    int *A = (int *)malloc(sizeof(int) * 10);
    if (A[0]) {
        return A;
    } else {
        return NULL;
    }
}

int main(int argc, char **argv) {
    void *tmp = haha_this_sux_part_trois();
    checkpoint();
    return 0;
}
