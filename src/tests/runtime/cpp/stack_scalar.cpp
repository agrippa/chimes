#include "checkpoint.h"
#include <assert.h>

int main(int argc, char **argv) {
    int a = 3;
    checkpoint();
    assert(a == 3);
    return a;
}
