#include "checkpoint.h"
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc == 0)
        printf("hello there\n");

    if (argc > 0)
        printf("hello again\n");

    for (int i = 0; i < argc; i++)
        printf("ha\n");

    return 0;
}
