#include <stdlib.h>

int main(int argc, char **argv) {
    int a = atoi(argv[1]);

    if (a < 3)
        return 4;
    else if (a > 5)
        return 6;
    return 5;
}
