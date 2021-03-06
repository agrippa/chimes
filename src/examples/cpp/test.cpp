#include <stdlib.h>
#include <stdio.h>
#include "checkpoint.h"

int bar(int *callee_ptr2) {
    return *callee_ptr2 + 2;
}

int foo(int *callee_ptr) {
    return *callee_ptr + 1;
}

int main(int argc, char **argv) {
    int i;
    int *caller_ptr = (int *)malloc(sizeof(int));
    int caller_var = 3;
    int caller_var2 = 4;
    int arr[10];
    int arr2[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int aa, b; int c;
    int inita = 3, initb = 4;
    int initptra = 5, *initptrb = NULL;
    foo(&caller_var);

    aa = 3;
    b = 4;
    c = 5;
    arr2[0] = 3;

    *caller_ptr = 5;
    
    bar(&caller_var2);

    if (caller_var) {
        caller_var2 = 1;
        bar(&caller_var2);
    }

    caller_ptr = (int *)realloc(caller_ptr, 2 * sizeof(int));

    for (i = 0; i < 10; i++) {
        bar(&caller_var2);
    }

    for (i = 0; i < 10; i++) {
        bar(&caller_var2);
    }

    checkpoint();

    printf("*caller_ptr = %d\n", *caller_ptr);

    free(caller_ptr);
    fprintf(stderr, "Exiting...\n");
    return 0;
}
