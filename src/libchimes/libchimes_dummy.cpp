#include <stdlib.h>

/*
 * This file contains dummy (empty) definitions for all libchimes APIs. This
 * allows us to calculate the overheads incurred by simply the code
 * transformations, and the effect they have on the optimizations the host
 * compiler is able to make.
 */

void init_chimes() { }

void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned naliases, ...) { }

int get_next_call() { return (0); }
void new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...) { }

void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs, int nstructs, ...) { }

void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id) { }

void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...) { }

void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...) { }

void register_constant(size_t const_id, void *address,
        size_t length) { }

int alias_group_changed(unsigned loc_id) { return 0; }

void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) { return malloc(nbytes); }

void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...) { return calloc(num, size); }

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) { return realloc(ptr, nbytes); }

void free_wrapper(void *ptr, size_t group) { free(ptr); }

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
