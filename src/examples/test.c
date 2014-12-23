#include <stdlib.h>

int bar(int *callee_ptr2) {
    return *callee_ptr2 + 2;
}

int foo(int *callee_ptr) {
    return *callee_ptr + 1;
}

int main(int argc, char **argv) {
    int caller_var = 3;
    int caller_var2 = 4;
    foo(&caller_var);
    
    bar(&caller_var2);
    return 0;
}
