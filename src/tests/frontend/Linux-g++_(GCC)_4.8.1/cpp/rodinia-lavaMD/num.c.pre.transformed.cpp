# 1 "num.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "num.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_isInteger_npm = 1;


static int ____must_manage_isInteger = 2;

static unsigned ____alias_loc_id_0;
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/chimes/src/libchimes/libchimes.h" 2


extern void init_chimes(int argc, char **argv);
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
        const char *funcname, int *conditional, unsigned loc_id, int disabled,
        bool is_allocator);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, size_t group, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(unsigned loc_id);
extern void malloc_helper(const void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void calloc_helper(const void *ptr, size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void realloc_helper(const void *new_ptr, const void *old_ptr,
        void *header, size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...);
extern void free_helper(const void *ptr, size_t group);
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
# 76 "/home/jmg3/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 2 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
extern "C" {
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
int isInteger_npm(char *str);
int isInteger_quick(char *str); int isInteger(char *str);
int isInteger_resumable(char *str){const int ____chimes_did_disable0 = new_stack((void *)(&isInteger), "isInteger", &____must_manage_isInteger, 1, 0, (size_t)(10298802388654553061UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 22 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 23 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 24 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 25 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 26 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 if (*str == '\0'){
# 27 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  rm_stack(false, 0UL, "isInteger", &____must_manage_isInteger, ____alias_loc_id_0, ____chimes_did_disable0, false); return 0;
# 28 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 }
# 29 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 30 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 for(; *str != '\0'; str++){
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  if (*str < 48 || *str > 57){
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
   rm_stack(false, 0UL, "isInteger", &____must_manage_isInteger, ____alias_loc_id_0, ____chimes_did_disable0, false); return 0;
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  }
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 }
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 rm_stack(false, 0UL, "isInteger", &____must_manage_isInteger, ____alias_loc_id_0, ____chimes_did_disable0, false); return 1;
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
}
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
}
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
int isInteger_quick(char *str){const int ____chimes_did_disable0 = new_stack((void *)(&isInteger), "isInteger", &____must_manage_isInteger, 1, 0, (size_t)(10298802388654553061UL)) ; ; ;
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 22 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 23 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 24 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 25 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 26 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 if (*str == '\0'){
# 27 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  rm_stack(false, 0UL, "isInteger", &____must_manage_isInteger, ____alias_loc_id_0, ____chimes_did_disable0, false); return 0;
# 28 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 }
# 29 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 30 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 for(; *str != '\0'; str++){
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  if (*str < 48 || *str > 57){
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
   rm_stack(false, 0UL, "isInteger", &____must_manage_isInteger, ____alias_loc_id_0, ____chimes_did_disable0, false); return 0;
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  }
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 }
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 rm_stack(false, 0UL, "isInteger", &____must_manage_isInteger, ____alias_loc_id_0, ____chimes_did_disable0, false); return 1;
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
}

int isInteger(char *str) { return (____chimes_replaying ? isInteger_resumable(str) : isInteger_quick(str)); }
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
int isInteger_npm(char *str){
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 22 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 23 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 24 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 25 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 26 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 if (*str == '\0'){
# 27 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  return 0;
# 28 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 }
# 29 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 30 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 for(; *str != '\0'; str++){
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  if (*str < 48 || *str > 57){
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
   return 0;
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
  }
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 }
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
 return 1;
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/lavaMD/util/num/num.c"
}





static int module_init() {
    init_module(10298802388654553022UL, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (unsigned)0, (10298802388654553022UL + 1UL), (10298802388654553022UL + 2UL),
                            "isInteger", 0, "isInteger", "isInteger_npm", 0, 1, (10298802388654553022UL + 39UL), 0UL, 0,
                           "isInteger", &(____chimes_does_checkpoint_isInteger_npm),
                             (10298802388654553022UL + 2UL), (10298802388654553022UL + 39UL),
                             "isInteger", "isInteger", 0, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
