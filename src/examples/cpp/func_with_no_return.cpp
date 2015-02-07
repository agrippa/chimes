#include <stdlib.h>
#include <checkpoint.h>

int a = 3;

void haha_this_sux_part_canc() {
    a = 4;
}

int main(int argc, char **argv) {
    haha_this_sux_part_canc();
    return 0;
}
