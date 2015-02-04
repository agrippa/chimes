#include <stdio.h>
#include "checkpoint.h"

int a;
int b = 3;
const char *hello_world = "hello world";

int main(int argc, char **argv) {
    a = 4;
    printf("%s\n", hello_world);
    printf("auto global\n");

    checkpoint();

    return b + a;
}
