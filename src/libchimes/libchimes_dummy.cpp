#include <stdlib.h>
#include <stdarg.h>

/*
 * This file contains dummy (empty) definitions for all libchimes APIs. This
 * allows us to calculate the overheads incurred by simply the code
 * transformations, and the effect they have on the optimizations the host
 * compiler is able to make.
 */

int ____chimes_replaying = 0;

void init_chimes() { }

void calling(void *func_ptr, int lbl, size_t set_return_alias, unsigned loc_id,
        unsigned naliases, ...) { }

int get_next_call() { return (0); }
int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...) {
    if (conditional) { *conditional = 0; }
    return 1;
}

void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs, int nstructs, ...) { }

void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled) {
    if (conditional) { *conditional = 0; }
}

void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...) {
    if (cond_registration) { *cond_registration = 0; }
}

void register_stack_vars(int nvars, ...) {
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

int alias_group_changed(unsigned loc_id) { return 0; }

void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) { return malloc(nbytes); }

void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...) { return calloc(num, size); }

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) { return realloc(ptr, nbytes); }

void free_wrapper(void *ptr, size_t group) { free(ptr); }

bool disable_current_thread() { return true; }

void reenable_current_thread(bool was_disabled) { }

unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...) { return 0; }

void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, unsigned threads_in_region, bool spawns_threads,
        bool is_parallel_for, bool is_critical, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...) { }

void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id) { }

unsigned get_parent_vars_stack_depth() { return 0; }

unsigned get_thread_stack_depth() { return 0; }

void chimes_error() { }

#ifdef __NVCC__
cudaError_t cudaMalloc_wrapper(void **ptr, size_t size, size_t group,
        int is_ptr, int is_struct, ...) { }

cudaError_t cudaFree_wrapper(void *ptr, size_t group) { }
#endif

void checkpoint() { }

void wait_for_checkpoint() { }
