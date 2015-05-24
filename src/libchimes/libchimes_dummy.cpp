#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <assert.h>

#include <set>
#include <string>
#include <map>
#include <vector>

#include "chimes_common.h"

using namespace std;

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
static map<string, vector<void **> > requested_npm_functions;
static map<string, void *> provided_npm_functions;
static set<int *> all_npm_conditionals;
static map<void *, void *> original_function_to_npm;

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
    fprintf(stderr, "\n");
    /*
     * Resolve any NPM function pointers that different compilation units depend
     * on, and updated the compilation-unit-local function pointers for those
     * externally defined NPM function pointers.
     */
    bool all_satisfied = true;
    for (map<string, vector<void **> >::iterator i =
            requested_npm_functions.begin(), e = requested_npm_functions.end();
            i != e && all_satisfied; i++) {
        string fname = i->first;
        for (vector<void **>::iterator ii = i->second.begin(),
                ee = i->second.end(); ii != ee; ii++) {
            void **ptr_to_ptr = *ii;

#ifdef VERBOSE
            fprintf(stderr, "%s satisfied? %d\n", fname.c_str(),
                    provided_npm_functions.find(fname) !=
                    provided_npm_functions.end());
#endif

            if (provided_npm_functions.find(fname) == provided_npm_functions.end()) {
                all_satisfied = false;
                break;
            } else {
                *ptr_to_ptr = provided_npm_functions.at(fname);
            }
        }
    }

    if (all_satisfied) {
        for (set<int *>::iterator i = all_npm_conditionals.begin(),
                e = all_npm_conditionals.end(); i != e; i++) {
            *(*i) = 0;
        }
    }
}


void calling_npm(const char *name, size_t return_alias, unsigned loc_id,
        int n_params, ...) {
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
#ifdef VERBOSE
    fprintf(stderr, "Entering %s\n", funcname);
#endif
    return 1;
}

void *translate_fptr(void *fptr, int lbl, size_t return_alias,
        unsigned loc_id, int n_params, ...) {
    map<void *, void *>::iterator exists = original_function_to_npm.find(fptr);
    if (exists != original_function_to_npm.end()) {
        return exists->second;
    } else {
        return fptr;
    }
}

void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs,
        int n_provided_npm_functions, int n_external_npm_functions,
        int n_npm_conditionals, int nstructs, ...) {
    va_list vl;
    va_start(vl, nstructs);

    // Generate unique IDs for each change location
    for (int i = 0; i < n_change_locs; i++) {

        va_arg(vl, unsigned *);
        const unsigned n_aliases_at_loc = va_arg(vl, unsigned);
        for (unsigned j = 0; j < n_aliases_at_loc; j++) {
            va_arg(vl, size_t);
        }
    }

    // Iterate over the NPM functions defined inside this compilation unit.
    for (int i = 0; i < n_provided_npm_functions; i++) {
        std::string fname(va_arg(vl, char *));
        void *fptr = va_arg(vl, void *);
        void *original_fptr = va_arg(vl, void *);

        assert(original_function_to_npm.find(original_fptr) ==
                original_function_to_npm.end());
        original_function_to_npm[original_fptr] = fptr;

#ifdef VERBOSE
        fprintf(stderr, "%s provided\n", fname.c_str());
#endif
        VERIFY(provided_npm_functions.insert(pair<string, void *>(fname,
                        fptr)).second);

        // Alias locations that are stored in this function
        const int n_alias_locs = va_arg(vl, int);
        for (int j = 0; j < n_alias_locs; j++) {
            va_arg(vl, unsigned *);
        }

        /*
         * The aliases that this function assigns to its input parameters and
         * its returned value.
         */
        const int n_param_aliases = va_arg(vl, int);
        for (int j = 0; j < n_param_aliases; j++) {
            va_arg(vl, size_t);
        }
        va_arg(vl, size_t);

        /*
         * The set of calls made from the current function, including the name
         * of the function called, the number of arguments passed, the aliases
         * assigned to each of those arguments, and the return alias assigned to
         * any value that is returned.
         */
        const int n_calls_made = va_arg(vl, int);
        for (int j = 0; j < n_calls_made; j++) {
            va_arg(vl, const char *);
            const int n_args = va_arg(vl, int);
            for (int k = 0; k < n_args; k++) {
                va_arg(vl, size_t);
            }
            va_arg(vl, size_t);
        }
    }

    // Iterate over the NPM functions that this compilation unit depends on
    for (int i = 0; i < n_external_npm_functions; i++) {
        std::string npm_fname(va_arg(vl, const char *));
        void **fptr = va_arg(vl, void **);

        if (requested_npm_functions.find(npm_fname) ==
                requested_npm_functions.end()) {
            requested_npm_functions.insert(pair<string, vector<void **> >(
                        npm_fname, vector<void **>()));
        }

        requested_npm_functions.at(npm_fname).push_back(fptr);
    }

    /*
     * Get the addresses of the global variables which prevent conditional NPM
     * execution.
     */
    for (int i = 0; i < n_npm_conditionals; i++) {
        std::string func_name(va_arg(vl, const char *));
        int *conditional = va_arg(vl, int *);

        all_npm_conditionals.insert(conditional);
    }

    va_end(vl);
}

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
