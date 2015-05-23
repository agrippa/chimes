#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

#ifdef __CHIMES_PROFILE
static unsigned long long count_calling = 0;
static unsigned long long count_calling_npm = 0;
static unsigned long long count_new_stack = 0;
static unsigned long long count_rm_stack = 0;
static unsigned long long count_register_stack_var = 0;
static unsigned long long count_register_stack_vars = 0;
static unsigned long long count_alias_group_changed = 0;
static unsigned long long count_malloc_wrapper = 0;
static unsigned long long count_calloc_wrapper = 0;
static unsigned long long count_realloc_wrapper = 0;
static unsigned long long count_free_wrapper = 0;
static unsigned long long count_disable_current_thread = 0;
static unsigned long long count_reenable_current_thread = 0;
static unsigned long long count_entering_omp_parallel = 0;
static unsigned long long count_register_thread_local_stack_vars = 0;
static unsigned long long count_leaving_omp_parallel = 0;
static unsigned long long count_get_parent_vars_stack_depth = 0;
static unsigned long long count_get_thread_stack_depth = 0;
static unsigned long long count_checkpoint = 0;
#endif

/*
 * This file contains dummy (empty) definitions for all libchimes APIs. This
 * allows us to calculate the overheads incurred by simply the code
 * transformations, and the effect they have on the optimizations the host
 * compiler is able to make.
 */

int ____chimes_replaying = 0;

#ifdef __CHIMES_PROFILE
void onexit() {
    fprintf(stderr, "calling %llu\n", count_calling);
    fprintf(stderr, "calling_npm %llu\n", count_calling_npm);
    fprintf(stderr, "new_stack %llu\n", count_new_stack);
    fprintf(stderr, "rm_stack %llu\n", count_rm_stack);
    fprintf(stderr, "register_stack_var %llu\n", count_register_stack_var);
    fprintf(stderr, "register_stack_vars %llu\n", count_register_stack_vars);
    fprintf(stderr, "alias_group_changed %llu\n", count_alias_group_changed);
    fprintf(stderr, "malloc_wrapper %llu\n", count_malloc_wrapper);
    fprintf(stderr, "calloc_wrapper %llu\n", count_calloc_wrapper);
    fprintf(stderr, "realloc_wrapper %llu\n", count_realloc_wrapper);
    fprintf(stderr, "free_wrapper %llu\n", count_free_wrapper);
    fprintf(stderr, "disable_current_thread %llu\n", count_disable_current_thread);
    fprintf(stderr, "reenable_current_thread %llu\n", count_reenable_current_thread);
    fprintf(stderr, "entering_omp_parallel %llu\n", count_entering_omp_parallel);
    fprintf(stderr, "register_thread_local_stack_vars %llu\n", count_register_thread_local_stack_vars);
    fprintf(stderr, "leaving_omp_parallel %llu\n", count_leaving_omp_parallel);
    fprintf(stderr, "get_parent_vars_stack_depth %llu\n", count_get_parent_vars_stack_depth);
    fprintf(stderr, "get_thread_stack_depth %llu\n", count_get_thread_stack_depth);
    fprintf(stderr, "checkpoint %llu\n", count_checkpoint);
}
#endif

void init_chimes() {
#ifdef __CHIMES_PROFILE
    atexit(onexit);
#endif
}

void calling_npm(int n_new_aliases, int n_change_locs, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_calling_npm, 1);
#endif
}

void calling(void *func_ptr, int lbl, size_t set_return_alias, unsigned loc_id,
        unsigned naliases, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_calling, 1);
#endif
}

int get_next_call() { return (0); }
int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...) {
    if (conditional) { *conditional = 0; }
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_new_stack, 1);
#endif
    return 1;
}

void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs,
        int n_provided_npm_functions, int n_external_npm_functions,
        int nstructs, ...) { }

void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled) {
    if (conditional) { *conditional = 0; }
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_rm_stack, 1);
#endif
}

void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...) {
    if (cond_registration) { *cond_registration = 0; }
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_register_stack_var, 1);
#endif
}

void register_stack_vars(int nvars, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_register_stack_vars, 1);
#endif
    va_list vl;
    va_start(vl, nvars);
    for (int i = 0; i < nvars; i++) {
        va_arg(vl, const char *);
        int *cond_registration = va_arg(vl, int *);
        va_arg(vl, const char *);
        va_arg(vl, void *);
        va_arg(vl, size_t);
        va_arg(vl, int);
        va_arg(vl, int);
        int n_ptr_fields = va_arg(vl, int);

        if (cond_registration) {
            *cond_registration = 0;
        }

        for (int j = 0; j < n_ptr_fields; j++) {
            va_arg(vl, int);
        }
    }
    va_end(vl);
}

void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...) { }

void register_constant(size_t const_id, void *address,
        size_t length) { }

void register_functions(int nfunctions, const char *module_name,  ...) { }

int alias_group_changed(unsigned loc_id) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_alias_group_changed, 1);
#endif
    return 0;
}

void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_malloc_wrapper, 1);
#endif
    return malloc(nbytes);
}

void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_calloc_wrapper, 1);
#endif
    return calloc(num, size);
}

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_realloc_wrapper, 1);
#endif
    return realloc(ptr, nbytes);
}

void free_wrapper(void *ptr, size_t group) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_free_wrapper, 1);
#endif
    free(ptr);
}

bool disable_current_thread() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_disable_current_thread, 1);
#endif
    return true;
}

void reenable_current_thread(bool was_disabled) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_reenable_current_thread, 1);
#endif
}

unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_entering_omp_parallel, 1);
#endif
    return 0;
}

void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, unsigned threads_in_region, bool spawns_threads,
        bool is_parallel_for, bool is_critical, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_register_thread_local_stack_vars, 1);
#endif
}

void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_leaving_omp_parallel, 1);
#endif
}

unsigned get_parent_vars_stack_depth() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_get_parent_vars_stack_depth, 1);
#endif
    return 0;
}

unsigned get_thread_stack_depth() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_get_thread_stack_depth, 1);
#endif
    return 0;
}

void chimes_error() { }

#ifdef __NVCC__
cudaError_t cudaMalloc_wrapper(void **ptr, size_t size, size_t group,
        int is_ptr, int is_struct, ...) { }

cudaError_t cudaFree_wrapper(void *ptr, size_t group) { }
#endif

void checkpoint() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_checkpoint, 1);
#endif
}

void wait_for_checkpoint() { }
