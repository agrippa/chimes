# 1 "lud_base.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "lud_base.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_lud_base_npm = 1;


static int ____must_manage_lud_base = 2;

static unsigned ____alias_loc_id_0;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 2


extern void init_chimes();
extern void checkpoint_transformed(int lbl, unsigned loc_id);

extern void *translate_fptr(void *fptr, int lbl, unsigned loc_id,
        size_t return_alias, int n_params, ...);
extern void calling_npm(const char *name, unsigned loc_id);
extern void calling(void *func_ptr, int lbl, unsigned loc_id,
        size_t set_return_alias, unsigned naliases, ...);
extern int get_next_call();
extern int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nfunctions,
        int nvars, int n_change_locs, int n_provided_npm_functions,
        int n_external_npm_functions, int n_npm_conditionals,
        int n_static_merges, int n_dynamic_merges, int nstructs, ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(unsigned loc_id);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void free_wrapper(void *ptr, size_t group);
extern bool disable_current_thread();
extern void reenable_current_thread(bool was_disabled);
extern void thread_leaving();
extern void *get_thread_ctx();

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned relation,
        unsigned parent, void *parent_ctx_ptr, unsigned threads_in_region,
        unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id, int is_parallel_for);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 74 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
void lud_base_npm(float *a, int size);
void lud_base_quick(float *a, int size); void lud_base(float *a, int size);
void lud_base_resumable(float *a, int size)
# 2 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&lud_base), "lud_base", &____must_manage_lud_base, 2, 0, (size_t)(7743237120547627255UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 3 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     int i; int j; int k; ;
# 4 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     float sum; ;
# 5 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     for (i=0; i<size; i++){
# 7 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         for (j=i; j<size; j++){
# 8 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             sum=a[i*size+j];
# 9 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             for (k=0; k<i; k++) { sum -= a[i*size+k]*a[k*size+j]; };
# 10 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             a[i*size+j]=sum;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         }
# 12 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         for (j=i+1;j<size; j++){
# 14 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             sum=a[j*size+i];
# 15 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             for (k=0; k<i; k++) { sum -=a[j*size+k]*a[k*size+i]; };
# 16 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             a[j*size+i]=sum/a[i*size+i];
# 17 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         }
# 18 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     }
# 19 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
rm_stack(false, 0UL, "lud_base", &____must_manage_lud_base, ____alias_loc_id_0, ____chimes_did_disable0); }
void lud_base_quick(float *a, int size)
# 2 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&lud_base), "lud_base", &____must_manage_lud_base, 2, 0, (size_t)(7743237120547627255UL), (size_t)(0UL)) ; ; ;
# 3 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     int i; int j; int k; ;
# 4 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     float sum; ;
# 5 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     for (i=0; i<size; i++){
# 7 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         for (j=i; j<size; j++){
# 8 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             sum=a[i*size+j];
# 9 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             for (k=0; k<i; k++) { sum -= a[i*size+k]*a[k*size+j]; };
# 10 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             a[i*size+j]=sum;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         }
# 12 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         for (j=i+1;j<size; j++){
# 14 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             sum=a[j*size+i];
# 15 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             for (k=0; k<i; k++) { sum -=a[j*size+k]*a[k*size+i]; };
# 16 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             a[j*size+i]=sum/a[i*size+i];
# 17 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         }
# 18 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     }
# 19 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
rm_stack(false, 0UL, "lud_base", &____must_manage_lud_base, ____alias_loc_id_0, ____chimes_did_disable0); }

void lud_base(float *a, int size) { (____chimes_replaying ? lud_base_resumable(a, size) : lud_base_quick(a, size)); }



void lud_base_npm(float *a, int size)
# 2 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
{
# 3 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     int i,j,k;
# 4 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     float sum;
# 5 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     for (i=0; i<size; i++){
# 7 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         for (j=i; j<size; j++){
# 8 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             sum=a[i*size+j];
# 9 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             for (k=0; k<i; k++) { sum -= a[i*size+k]*a[k*size+j]; };
# 10 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             a[i*size+j]=sum;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         }
# 12 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         for (j=i+1;j<size; j++){
# 14 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             sum=a[j*size+i];
# 15 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             for (k=0; k<i; k++) { sum -=a[j*size+k]*a[k*size+i]; };
# 16 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
             a[j*size+i]=sum/a[i*size+i];
# 17 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
         }
# 18 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
     }
# 19 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud_base.c"
}





static int module_init() {
    init_module(7743237120547627087UL, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0,
                           &____alias_loc_id_0, (unsigned)7, (unsigned)0, (7743237120547627087UL + 1UL), (7743237120547627087UL + 2UL), (7743237120547627087UL + 3UL), (7743237120547627087UL + 4UL), (7743237120547627087UL + 5UL), (7743237120547627087UL + 6UL), (7743237120547627087UL + 168UL),
                            "lud_base", (void *)(&lud_base_npm), (void *)__null, 0, 2, (7743237120547627087UL + 168UL), 0UL, 0UL, 0,
                           "lud_base", &(____chimes_does_checkpoint_lud_base_npm),
                             (7743237120547627087UL + 1UL), (7743237120547627087UL + 168UL),
                             "lud_base", "_Z8lud_basePfi", 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
