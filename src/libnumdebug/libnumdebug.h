#ifndef LIBNUMDEBUG_H
#define LIBNUMDEBUG_H

#include <stdlib.h>

extern void new_stack();
extern void rm_stack();
extern void register_stack_var(const char *mangled_name, void *ptr,
        size_t size);
extern void alias_group_changed(int group);
extern void *malloc_wrapper(size_t nbytes, int group);
extern void *realloc_wrapper(void *ptr, size_t nbytes, int group);
extern void free_wrapper(void *ptr, int group);

#endif
