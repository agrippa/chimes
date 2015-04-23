#include <stdio.h>
#include "checkpoint.h"

const char *hello_world = "hello world";
const char *arr1[1] = { hello_world };
const char *arr2[1] = { "woop" };

int main(int argc, char **argv) {
    int a = 3;

    checkpoint();

    printf("%s %s %s\n", hello_world, arr1[0], arr2[0]);

    return 1;
}
