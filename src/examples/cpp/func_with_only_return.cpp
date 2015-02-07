#include <checkpoint.h>

void *haha_this_sux() {
    return NULL;
}

int main(int argc, char **argv) {
    void *tmp = haha_this_sux();
    checkpoint();
    return 0;
}
