#include <checkpoint.h>

int main(int argc, char **argv) {
    int a = 0;
    for (int i = 0; i < 10; i++) {
        a += i;
    }
    checkpoint();
    return 0;
}
