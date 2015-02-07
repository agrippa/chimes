#include <checkpoint.h>

int a = 3;

void haha_this_sux2() {
    if (a) {
        return;
    } else {
        return;
    }
}

int main(int argc, char **argv) {
    haha_this_sux2();
    checkpoint();
    return 0;
}
