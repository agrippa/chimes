#include <stdio.h>
#include <stdlib.h>

#include "checkpoint.h"

int main(int argc, char **argv) {
    init_numdebug(0); new_stack();  register_stack_var("main|argc|0", "i32", &argc, 4, 0, 0, 0);  register_stack_var("main|argv|0", "i8**", &argv, 8, 1, 0, 0); int i; lbl_0:  register_stack_var("main|i|0", "i32", &i, 4, 0, 0, 0);  if (____numdebug_replaying) { goto lbl_1; }  int iter; lbl_1:  register_stack_var("main|iter|0", "i32", &iter, 4, 0, 0, 0);  if (____numdebug_replaying) { goto lbl_2; }  
     int N; lbl_2:  register_stack_var("main|N|0", "i32", &N, 4, 0, 0, 0);  if (____numdebug_replaying) { goto lbl_3; }  N = 1024;  
     int niters; lbl_3:  register_stack_var("main|niters|0", "i32", &niters, 4, 0, 0, 0);  if (____numdebug_replaying) { goto lbl_4; }  niters = 10000;  

     int *curr; lbl_4:  register_stack_var("main|curr|0", "i32*", &curr, 8, 1, 0, 0);  if (____numdebug_replaying) { goto lbl_5; }  curr = (int *)malloc_wrapper(N * sizeof(int), 5, 0);  
     int *next; lbl_5:  register_stack_var("main|next|0", "i32*", &next, 8, 1, 0, 0);  if (____numdebug_replaying) { goto lbl_6; }  next = (int *)malloc_wrapper(N * sizeof(int), 5, 0);  
    for (alias_group_changed(2, 7, 8), i = 0; i < N; alias_group_changed(1, 8), i++) {
        curr[i] = next[i] = rand() % 100;
    }

    for (alias_group_changed(1, 9), iter = 0; iter < niters; alias_group_changed(1, 9), iter++) {
        printf("%d / %d\n", iter + 1, niters);
        for (alias_group_changed(2, 8, 12), i = 1; i < N - 1; alias_group_changed(1, 8), i++) {
            next[i] = (curr[i - 1] + curr[i] + curr[i + 1]) / 3;
        }
         int *tmp; lbl_6:  register_stack_var("main|tmp|0", "i32*", &tmp, 8, 1, 0, 0);  if (____numdebug_replaying) { goto lbl_7; }  tmp = curr;  
        curr = next;
        next = tmp;

        alias_group_changed(3, 6, 7, 10);  call_lbl_0: calling(0); checkpoint();
    }

     FILE *fp; lbl_7:  register_stack_var("main|fp|0", "%struct.__sFILE*", &fp, 8, 1, 0, 0);  if (____numdebug_replaying) { goto lbl_8; } lbl_8: if (____numdebug_replaying) { int dst = get_next_call(); switch(dst) { case(0): { goto call_lbl_0; } default: { fprintf(stderr, "Unknown label %d at %s:%d\n", dst, __FILE__, __LINE__); exit(1); } } }  fp = fopen("dump.out", "w");  
    for (alias_group_changed(4, 8, 11, 13, 14), i = 0; i < N; alias_group_changed(1, 8), i++) {
        fprintf(fp, "%d\n", curr[i]);
    }
    fclose(fp);

    alias_group_changed(1, -1); free_wrapper(curr, 5);
    alias_group_changed(1, 5); free_wrapper(next, 5);
    alias_group_changed(1, 5); rm_stack(); return 0;
}
