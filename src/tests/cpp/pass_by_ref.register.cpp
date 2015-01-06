#include <stdio.h>
#include <stdlib.h>

extern void foo(int *A);

int main(int argc, char **argv) {
    init_numdebug(0); new_stack();  register_stack_var("main|argc|0", "i32", &argc, 4, 0, 0, 0);  register_stack_var("main|argv|0", "i8**", &argv, 8, 1, 0, 0); int b; lbl_0:  register_stack_var("main|b|0", "i32", &b, 4, 0, 0, 0);  if (____numdebug_replaying) { goto lbl_1; } lbl_1: if (____numdebug_replaying) { int dst = get_next_call(); switch(dst) { default: { fprintf(stderr, "Unknown label %d at %s:%d\n", dst, __FILE__, __LINE__); exit(1); } } }  
    alias_group_changed(3, 0, 1, 2); foo(&b);
    alias_group_changed(1, 3); rm_stack(); return b;
}
