# 1 "resize.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "resize.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_resize_npm = 1;


static int ____must_manage_resize = 2;

static unsigned ____alias_loc_id_0;
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 2


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
# 76 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 2 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 3 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 4 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 5 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"

# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/define.h" 1
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/define.h"
extern long long get_time();
extern void write_graphics( char* filename,
         float* input,
         int data_rows,
         int data_cols,
         int major,
         int data_range);
extern void read_graphics( char* filename,
         float* input,
         int data_rows,
         int data_cols,
         int major);

extern void resize( float* input,
     int input_rows,
     int input_cols,
     float* output,
     int output_rows,
     int output_cols,
     int major);
# 7 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c" 2
# 7 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 8 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
void resize_npm( float* input, int input_rows, int input_cols, float* output, int output_rows, int output_cols, int major);
void resize_quick( float* input, int input_rows, int input_cols, float* output, int output_rows, int output_cols, int major); void resize( float* input, int input_rows, int input_cols, float* output, int output_rows, int output_cols, int major);
void resize_resumable( float* input,
# 9 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_rows,
# 10 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_cols,
# 11 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     float* output,
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_rows,
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_cols,
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int major){const int ____chimes_did_disable0 = new_stack((void *)(&resize), "resize", &____must_manage_resize, 7, 0, (size_t)(6065301789804862068UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6065301789804862071UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 19 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 int i; int j; ;
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 int i2; int j2; ;
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 if(major == 0){
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  for(i=0, i2=0; i<output_rows; i++, i2++){
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   if(i2>=input_rows){
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    i2 = i2 - input_rows;
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   for(j=0, j2=0; j<output_cols; j++, j2++){
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    if(j2>=input_cols){
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     j2 = j2 - input_cols;
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    }
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    output[i*output_cols+j] = input[i2*input_cols+j2];
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  }
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 }
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 else{
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 53 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  for(j=0, j2=0; j<output_cols; j++, j2++){
# 54 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   if(j2>=input_cols){
# 55 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    j2 = j2 - input_cols;
# 56 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   for(i=0, i2=0; i<output_rows; i++, i2++){
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    if(i2>=input_rows){
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     i2 = i2 - input_rows;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    }
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    output[j*output_rows+i] = input[j2*input_rows+i2];
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  }
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 }
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
rm_stack(false, 0UL, "resize", &____must_manage_resize, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 8 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
void resize_quick( float* input,
# 9 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_rows,
# 10 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_cols,
# 11 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     float* output,
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_rows,
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_cols,
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int major){const int ____chimes_did_disable0 = new_stack((void *)(&resize), "resize", &____must_manage_resize, 7, 0, (size_t)(6065301789804862068UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6065301789804862071UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 19 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 int i; int j; ;
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 int i2; int j2; ;
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 if(major == 0){
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  for(i=0, i2=0; i<output_rows; i++, i2++){
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   if(i2>=input_rows){
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    i2 = i2 - input_rows;
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   for(j=0, j2=0; j<output_cols; j++, j2++){
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    if(j2>=input_cols){
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     j2 = j2 - input_cols;
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    }
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    output[i*output_cols+j] = input[i2*input_cols+j2];
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  }
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 }
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 else{
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 53 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  for(j=0, j2=0; j<output_cols; j++, j2++){
# 54 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   if(j2>=input_cols){
# 55 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    j2 = j2 - input_cols;
# 56 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   for(i=0, i2=0; i<output_rows; i++, i2++){
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    if(i2>=input_rows){
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     i2 = i2 - input_rows;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    }
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    output[j*output_rows+i] = input[j2*input_rows+i2];
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  }
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 }
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
rm_stack(false, 0UL, "resize", &____must_manage_resize, ____alias_loc_id_0, ____chimes_did_disable0, false); }

void resize( float* input,
# 9 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_rows,
# 10 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_cols,
# 11 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     float* output,
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_rows,
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_cols,
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int major) { (____chimes_replaying ? resize_resumable(input, input_rows, input_cols, output, output_rows, output_cols, major) : resize_quick(input, input_rows, input_cols, output, output_rows, output_cols, major)); }
# 8 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
void resize_npm( float* input,
# 9 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_rows,
# 10 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int input_cols,
# 11 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     float* output,
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_rows,
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int output_cols,
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     int major){
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 19 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 int i, j;
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 int i2, j2;
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 if(major == 0){
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  for(i=0, i2=0; i<output_rows; i++, i2++){
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   if(i2>=input_rows){
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    i2 = i2 - input_rows;
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   for(j=0, j2=0; j<output_cols; j++, j2++){
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    if(j2>=input_cols){
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     j2 = j2 - input_cols;
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    }
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    output[i*output_cols+j] = input[i2*input_cols+j2];
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  }
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 }
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 else{
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 53 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  for(j=0, j2=0; j<output_cols; j++, j2++){
# 54 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   if(j2>=input_cols){
# 55 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    j2 = j2 - input_cols;
# 56 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   for(i=0, i2=0; i<output_rows; i++, i2++){
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    if(i2>=input_rows){
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
     i2 = i2 - input_rows;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    }
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
    output[j*output_rows+i] = input[j2*input_rows+i2];
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
   }
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
  }
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
 }
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/srad/srad_v1/resize.c"
}





static int module_init() {
    init_module(6065301789804861900UL, 2, 1, 0, 1, 1, 0, 1, 0, 0, 0,
                           &____alias_loc_id_0, (unsigned)12, (unsigned)0, (unsigned)0, (6065301789804861900UL + 1UL), (6065301789804861900UL + 2UL), (6065301789804861900UL + 3UL), (6065301789804861900UL + 4UL), (6065301789804861900UL + 5UL), (6065301789804861900UL + 6UL), (6065301789804861900UL + 7UL), (6065301789804861900UL + 8UL), (6065301789804861900UL + 9UL), (6065301789804861900UL + 10UL), (6065301789804861900UL + 11UL), (6065301789804861900UL + 171UL),
                            "resize", 0, "_Z6resizePfiiS_iii", "_Z10resize_npmPfiiS_iii", 0, 7, (6065301789804861900UL + 168UL), 0UL, 0UL, (6065301789804861900UL + 171UL), 0UL, 0UL, 0UL, 0UL, 0,
                           "resize", &(____chimes_does_checkpoint_resize_npm),
                             (6065301789804861900UL + 1UL), (6065301789804861900UL + 168UL),
                             (6065301789804861900UL + 4UL), (6065301789804861900UL + 171UL),
                             "resize", "_Z6resizePfiiS_iii", 0, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
