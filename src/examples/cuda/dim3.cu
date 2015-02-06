#include <stdio.h>
#include "checkpoint.h"

int main(int argc, char **argv) {
    dim3 blocks(4, 256);
    checkpoint();
    return 0;
}
