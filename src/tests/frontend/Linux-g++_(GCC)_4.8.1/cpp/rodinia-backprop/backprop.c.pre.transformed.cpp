# 1 "backprop.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "backprop.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_bpnn_internal_create_npm = 1;
static int ____chimes_does_checkpoint_dpn1_npm = 1;
static int ____chimes_does_checkpoint_bpnn_zero_weights_npm = 1;
static int ____chimes_does_checkpoint_bpnn_hidden_error_npm = 1;
static int ____chimes_does_checkpoint_bpnn_layerforward_npm = 1;
static int ____chimes_does_checkpoint_bpnn_initialize_npm = 1;
static int ____chimes_does_checkpoint_bpnn_read_npm = 1;
static int ____chimes_does_checkpoint_bpnn_train_npm = 1;
static int ____chimes_does_checkpoint_squash_npm = 1;
static int ____chimes_does_checkpoint_alloc_1d_dbl_npm = 1;
static int ____chimes_does_checkpoint_bpnn_adjust_weights_npm = 1;
static int ____chimes_does_checkpoint_bpnn_randomize_weights_npm = 1;
static int ____chimes_does_checkpoint_bpnn_save_npm = 1;
static int ____chimes_does_checkpoint_bpnn_feedforward_npm = 1;
static int ____chimes_does_checkpoint_bpnn_output_error_npm = 1;
static int ____chimes_does_checkpoint_bpnn_randomize_row_npm = 1;
static int ____chimes_does_checkpoint_bpnn_free_npm = 1;
static int ____chimes_does_checkpoint_alloc_2d_dbl_npm = 1;
static int ____chimes_does_checkpoint_drnd_npm = 1;
static int ____chimes_does_checkpoint_bpnn_create_npm = 1;

static int ____must_checkpoint_bpnn_train_out_err_0 = 2;
static int ____must_checkpoint_bpnn_train_hid_err_0 = 2;
static int ____must_checkpoint_bpnn_save_dvalue_0 = 2;

static int ____must_manage_bpnn_internal_create = 2;
static int ____must_manage_dpn1 = 2;
static int ____must_manage_bpnn_zero_weights = 2;
static int ____must_manage_bpnn_hidden_error = 2;
static int ____must_manage_bpnn_layerforward = 2;
static int ____must_manage_bpnn_initialize = 2;
static int ____must_manage_bpnn_read = 2;
static int ____must_manage_bpnn_train = 2;
static int ____must_manage_squash = 2;
static int ____must_manage_alloc_1d_dbl = 2;
static int ____must_manage_bpnn_adjust_weights = 2;
static int ____must_manage_bpnn_randomize_weights = 2;
static int ____must_manage_bpnn_save = 2;
static int ____must_manage_bpnn_feedforward = 2;
static int ____must_manage_bpnn_output_error = 2;
static int ____must_manage_bpnn_randomize_row = 2;
static int ____must_manage_bpnn_free = 2;
static int ____must_manage_alloc_2d_dbl = 2;
static int ____must_manage_drnd = 2;
static int ____must_manage_bpnn_create = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
static unsigned ____alias_loc_id_8;
static unsigned ____alias_loc_id_9;
static unsigned ____alias_loc_id_10;
static unsigned ____alias_loc_id_11;
static unsigned ____alias_loc_id_12;
static unsigned ____alias_loc_id_13;
static unsigned ____alias_loc_id_14;
static unsigned ____alias_loc_id_15;
static unsigned ____alias_loc_id_16;
static unsigned ____alias_loc_id_17;
static unsigned ____alias_loc_id_18;
static unsigned ____alias_loc_id_19;
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
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
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 10 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/omp.h" 1 3 4
# 34 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/omp.h" 3 4
typedef struct
{
  unsigned char _x[4]
    __attribute__((__aligned__(4)));
} omp_lock_t;

typedef struct
{
  unsigned char _x[16]
    __attribute__((__aligned__(8)));
} omp_nest_lock_t;


typedef enum omp_sched_t
{
  omp_sched_static = 1,
  omp_sched_dynamic = 2,
  omp_sched_guided = 3,
  omp_sched_auto = 4
} omp_sched_t;


extern "C" {





extern void omp_set_num_threads (int) throw ();
extern int omp_get_num_threads (void) throw ();
extern int omp_get_max_threads (void) throw ();
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_procs (void) throw ();

extern int omp_in_parallel (void) throw ();

extern void omp_set_dynamic (int) throw ();
extern int omp_get_dynamic (void) throw ();

extern void omp_set_nested (int) throw ();
extern int omp_get_nested (void) throw ();

extern void omp_init_lock (omp_lock_t *) throw ();
extern void omp_destroy_lock (omp_lock_t *) throw ();
extern void omp_set_lock (omp_lock_t *) throw ();
extern void omp_unset_lock (omp_lock_t *) throw ();
extern int omp_test_lock (omp_lock_t *) throw ();

extern void omp_init_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_destroy_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_set_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_unset_nest_lock (omp_nest_lock_t *) throw ();
extern int omp_test_nest_lock (omp_nest_lock_t *) throw ();

extern double omp_get_wtime (void) throw ();
extern double omp_get_wtick (void) throw ();

void omp_set_schedule (omp_sched_t, int) throw ();
void omp_get_schedule (omp_sched_t *, int *) throw ();
int omp_get_thread_limit (void) throw ();
void omp_set_max_active_levels (int) throw ();
int omp_get_max_active_levels (void) throw ();
int omp_get_level (void) throw ();
int omp_get_ancestor_thread_num (int) throw ();
int omp_get_team_size (int) throw ();
int omp_get_active_level (void) throw ();

int omp_in_final (void) throw ();


}
# 11 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 361 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 365 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 366 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4
# 385 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4

extern "C" {



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stdarg.h" 1 3 4
# 40 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 552 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 177 "/usr/include/stdio.h" 3 4
extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();
# 194 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 204 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 236 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 261 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 271 "/usr/include/stdio.h" 3 4
extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 294 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 355 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
# 416 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 429 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 467 "/usr/include/stdio.h" 3 4
# 475 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 526 "/usr/include/stdio.h" 3 4
# 535 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 554 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 577 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 598 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 626 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;
# 644 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 660 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 684 "/usr/include/stdio.h" 3 4
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;
# 721 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;
# 744 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 768 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 787 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 810 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 841 "/usr/include/stdio.h" 3 4
extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 929 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 36 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 930 "/usr/include/stdio.h" 2 3 4
# 938 "/usr/include/stdio.h" 3 4
}
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {







 unsigned int:16;
 unsigned int __w_retcode:8;
 unsigned int __w_coredump:1;
 unsigned int __w_termsig:7;

      } __wait_terminated;
    struct
      {






 unsigned int:16;
 unsigned int __w_stopsig:8;
 unsigned int __w_stopval:8;

      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 236 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 237 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;





extern __inline __attribute__ ((__gnu_inline__)) double
atof (__const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
extern __inline __attribute__ ((__gnu_inline__)) int
atoi (__const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
atol (__const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
atoll (__const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();


__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 51 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 77 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 102 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 188 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/sys/types.h" 2 3 4


}
# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));
# 471 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 485 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));






extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 536 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));







extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 885 "/usr/include/stdlib.h" 3 4
extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4
}
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.h" 1
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.h"
typedef struct {
  int input_n;
  int hidden_n;
  int output_n;

  float *input_units;
  float *hidden_units;
  float *output_units;

  float *hidden_delta;
  float *output_delta;

  float *target;

  float **input_weights;
  float **hidden_weights;


  float **input_prev_weights;
  float **hidden_prev_weights;
} BPNN;




void bpnn_initialize(int);

BPNN *bpnn_create(int ,int, int);
void bpnn_free(BPNN *);

void bpnn_train(BPNN *, float *, float *);
void bpnn_feedforward(BPNN *);

void bpnn_save(BPNN *, char *);
BPNN *bpnn_read(char *);
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include-fixed/bits/mathdef.h" 1 3 4
# 55 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include-fixed/bits/mathdef.h" 3 4
typedef double float_t;

typedef double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                           ;





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();


extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                           ;





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();


extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                           ;





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();


extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 198 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 291 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 314 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 416 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathinline.h" 1 3 4
# 63 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[0] < 0;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __d; int __i[4]; } __u = { __d: __x };
  return __u.__i[0] < 0;
}
# 116 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double fdim (double __x, double __y) throw ();
extern __inline __attribute__ ((__gnu_inline__)) double
fdim (double __x, double __y) throw ()
{
  return __x <= __y ? 0 : __x - __y;
}

extern __inline __attribute__ ((__gnu_inline__)) float fdimf (float __x, float __y) throw ();
extern __inline __attribute__ ((__gnu_inline__)) float
fdimf (float __x, float __y) throw ()
{
  return __x <= __y ? 0 : __x - __y;
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4
}
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4
extern "C" {



# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 27 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/uio.h" 1 3 4
# 44 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 28 "/usr/include/bits/fcntl.h" 2 3 4
# 150 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };




enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 235 "/usr/include/bits/fcntl.h" 3 4
extern "C" {




extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    throw ();



extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);



extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);


extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);


extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);



extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 275 "/usr/include/bits/fcntl.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




}
# 35 "/usr/include/fcntl.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 41 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 27 "/usr/include/bits/stat.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/stat.h" 2 3 4
# 143 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;

    __ino_t st_ino;



    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad2;
    __dev_t st_rdev;

    __off_t st_size;



    __blksize_t st_blksize;


    __blkcnt_t st_blocks;
# 176 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 190 "/usr/include/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;
    unsigned long int __unused6;
  };


struct stat64
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad2;
    __dev_t st_rdev;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 230 "/usr/include/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;
    unsigned long int __unused6;
  };
# 42 "/usr/include/fcntl.h" 2 3 4
# 122 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 131 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/fcntl.h" 3 4
extern int open64 (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 155 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 166 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 177 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 187 "/usr/include/fcntl.h" 3 4
extern int creat64 (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len);
# 215 "/usr/include/fcntl.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len);







extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
     int __advise) throw ();
# 235 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, __off64_t __offset, __off64_t __len,
       int __advise) throw ();
# 245 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
# 256 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, __off64_t __offset, __off64_t __len);
# 267 "/usr/include/fcntl.h" 3 4
}
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
extern "C" {
# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 401 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 187 "/usr/include/getopt.h" 3 4
}
# 891 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1036 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) throw ();
# 1160 "/usr/include/unistd.h" 3 4
}
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c" 2
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float drnd_npm();
float drnd_quick(); float drnd();
float drnd_resumable()
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&drnd), "drnd", &____must_manage_drnd, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((float) rand() / (float) 0x7fffffff)); rm_stack(false, 0UL, "drnd", &____must_manage_drnd, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "drnd", &____must_manage_drnd, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float dpn1_npm();
float dpn1_quick(); float dpn1();
float dpn1_resumable()
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&dpn1), "dpn1", &____must_manage_dpn1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_1; ; call_lbl_0: ____chimes_ret_var_1 = (((({ calling_npm("drnd", 0); drnd_npm(); }) * 2.0) - 1.0)); rm_stack(false, 0UL, "dpn1", &____must_manage_dpn1, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "dpn1", &____must_manage_dpn1, ____alias_loc_id_1, ____chimes_did_disable1, false); }
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float squash_npm(float x);
float squash_quick(float x); float squash(float x);
float squash_resumable(float x)
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&squash), "squash", &____must_manage_squash, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float m; ;
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((1.0 / (1.0 + exp(-x)))); rm_stack(false, 0UL, "squash", &____must_manage_squash, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ;
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "squash", &____must_manage_squash, ____alias_loc_id_2, ____chimes_did_disable2, false); }
# 53 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 54 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 55 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 56 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float *alloc_1d_dbl_npm(size_t n);
float *alloc_1d_dbl_quick(size_t n); float *alloc_1d_dbl(size_t n);
float *alloc_1d_dbl_resumable(size_t n)
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&alloc_1d_dbl), "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float *new_mem; ;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = (float *) ({ void *____chimes_tmp_ptr = malloc(((n * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (n * sizeof (float)), 18030399740950320995UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (new_mem == __null) {
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("ALLOC_1D_DBL: Couldn't allocate array of floats\n");
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     float *____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((__null)); rm_stack(true, 18030399740950320995UL, "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, ____alias_loc_id_3, ____chimes_did_disable3, false); return ____chimes_ret_var_3; ;
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float *____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((new_mem)); rm_stack(true, 18030399740950320995UL, "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, ____alias_loc_id_3, ____chimes_did_disable3, false); return ____chimes_ret_var_4; ;
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950320995UL, "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, ____alias_loc_id_3, ____chimes_did_disable3, false); }
# 68 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 69 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 70 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 71 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 72 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float **alloc_2d_dbl_npm(size_t m, size_t n);
float **alloc_2d_dbl_quick(size_t m, size_t n); float **alloc_2d_dbl(size_t m, size_t n);
float **alloc_2d_dbl_resumable(size_t m, size_t n)
# 73 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&alloc_2d_dbl), "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 74 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  size_t i; ;
# 75 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float **new_mem; ;
# 76 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 77 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = (float **) ({ void *____chimes_tmp_ptr = malloc(((m * sizeof(float *))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m * sizeof (float *)), 18030399740950321034UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 78 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (new_mem == __null) {
# 79 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("ALLOC_2D_DBL: Couldn't allocate array of dbl ptrs\n");
# 80 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     float **____chimes_ret_var_5; ; ____chimes_ret_var_5 = ((__null)); rm_stack(true, 18030399740950321034UL, "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_5; ;
# 81 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 82 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 83 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float *acc; call_lbl_0: acc = (({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(m * n); })) ;
# 84 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i < m; i++) {
# 85 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    new_mem[i] = acc + (i * n);
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float **____chimes_ret_var_6; ; ____chimes_ret_var_6 = ((new_mem)); rm_stack(true, 18030399740950321034UL, "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_6; ;
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950321034UL, "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, ____alias_loc_id_4, ____chimes_did_disable4, false); }
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 92 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 93 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_randomize_weights_npm(float **w, int m, int n);
void bpnn_randomize_weights_quick(float **w, int m, int n); void bpnn_randomize_weights(float **w, int m, int n);
void bpnn_randomize_weights_resumable(float **w, int m, int n)
# 94 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&bpnn_randomize_weights), "bpnn_randomize_weights", &____must_manage_bpnn_randomize_weights, 3, 0, (size_t)(18030399740950321130UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 95 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int i; int j; ;
# 96 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 97 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= m; i++) {
# 98 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n; j++) {
# 99 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     w[i][j] = (float) rand()/2147483647;
# 100 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 101 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 102 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 103 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_randomize_weights", &____must_manage_bpnn_randomize_weights, ____alias_loc_id_5, ____chimes_did_disable5, false); }
# 104 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 105 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_randomize_row_npm(float *w, int m);
void bpnn_randomize_row_quick(float *w, int m); void bpnn_randomize_row(float *w, int m);
void bpnn_randomize_row_resumable(float *w, int m)
# 106 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&bpnn_randomize_row), "bpnn_randomize_row", &____must_manage_bpnn_randomize_row, 2, 0, (size_t)(18030399740950321158UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 int i; ;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 for (i = 0; i <= m; i++) {
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w[i] = 0.1;
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_randomize_row", &____must_manage_bpnn_randomize_row, ____alias_loc_id_6, ____chimes_did_disable6, false); }
# 113 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 114 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_zero_weights_npm(float **w, int m, int n);
void bpnn_zero_weights_quick(float **w, int m, int n); void bpnn_zero_weights(float **w, int m, int n);
void bpnn_zero_weights_resumable(float **w, int m, int n)
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&bpnn_zero_weights), "bpnn_zero_weights", &____must_manage_bpnn_zero_weights, 3, 0, (size_t)(18030399740950321205UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int i; int j; ;
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= m; i++) {
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n; j++) {
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      w[i][j] = 0.0;
# 122 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_zero_weights", &____must_manage_bpnn_zero_weights, ____alias_loc_id_7, ____chimes_did_disable7, false); }
# 125 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 126 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_initialize_npm(int seed);
void bpnn_initialize_quick(int seed); void bpnn_initialize(int seed);
void bpnn_initialize_resumable(int seed)
# 128 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&bpnn_initialize), "bpnn_initialize", &____must_manage_bpnn_initialize, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Random number generator seed: %d\n", seed);
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  srand(seed);
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_initialize", &____must_manage_bpnn_initialize, ____alias_loc_id_8, ____chimes_did_disable8, false); }
# 132 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 133 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_internal_create_npm(int n_in, int n_hidden, int n_out);
BPNN *bpnn_internal_create_quick(int n_in, int n_hidden, int n_out); BPNN *bpnn_internal_create(int n_in, int n_hidden, int n_out);
BPNN *bpnn_internal_create_resumable(int n_in, int n_hidden, int n_out)
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&bpnn_internal_create), "bpnn_internal_create", &____must_manage_bpnn_internal_create, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *newnet; ;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet = (BPNN *) ({ void *____chimes_tmp_ptr = malloc((sizeof(BPNN)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof (BPNN), 18030399740950322461UL, 0, 1, (int)sizeof(BPNN), 10, (int)__builtin_offsetof(BPNN, input_units), (int)__builtin_offsetof(BPNN, hidden_units), (int)__builtin_offsetof(BPNN, output_units), (int)__builtin_offsetof(BPNN, hidden_delta), (int)__builtin_offsetof(BPNN, output_delta), (int)__builtin_offsetof(BPNN, target), (int)__builtin_offsetof(BPNN, input_weights), (int)__builtin_offsetof(BPNN, hidden_weights), (int)__builtin_offsetof(BPNN, input_prev_weights), (int)__builtin_offsetof(BPNN, hidden_prev_weights)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (newnet == __null) {
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("BPNN_CREATE: Couldn't allocate neural network\n");
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     BPNN *____chimes_ret_var_7; ; ____chimes_ret_var_7 = ((__null)); rm_stack(true, 18030399740950322461UL, "bpnn_internal_create", &____must_manage_bpnn_internal_create, ____alias_loc_id_9, ____chimes_did_disable9, false); return ____chimes_ret_var_7; ;
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->input_n = n_in;
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_n = n_hidden;
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->output_n = n_out;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: newnet->input_units = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_in + 1); });
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: newnet->hidden_units = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_hidden + 1); });
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: newnet->output_units = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_out + 1); });
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_3: newnet->hidden_delta = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_hidden + 1); });
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_4: newnet->output_delta = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_out + 1); });
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_5: newnet->target = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_out + 1); });
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_6: newnet->input_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_in + 1, n_hidden + 1); });
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_7: newnet->hidden_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_hidden + 1, n_out + 1); });
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_8: newnet->input_prev_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_in + 1, n_hidden + 1); });
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_9: newnet->hidden_prev_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_hidden + 1, n_out + 1); });
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN *____chimes_ret_var_8; ; ____chimes_ret_var_8 = ((newnet)); rm_stack(true, 18030399740950322461UL, "bpnn_internal_create", &____must_manage_bpnn_internal_create, ____alias_loc_id_9, ____chimes_did_disable9, false); return ____chimes_ret_var_8; ;
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950322461UL, "bpnn_internal_create", &____must_manage_bpnn_internal_create, ____alias_loc_id_9, ____chimes_did_disable9, false); }
# 163 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 164 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_free_npm(BPNN *net);
void bpnn_free_quick(BPNN *net); void bpnn_free(BPNN *net);
void bpnn_free_resumable(BPNN *net)
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&bpnn_free), "bpnn_free", &____must_manage_bpnn_free, 1, 0, (size_t)(18030399740950321448UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int n1; int n2; int i; ;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n1 = net->input_n;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n2 = net->hidden_n;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_units) - sizeof(void *))); }) ;
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_units) - sizeof(void *))); }) ;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->output_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->output_units) - sizeof(void *))); }) ;
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_delta) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_delta) - sizeof(void *))); }) ;
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->output_delta) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->output_delta) - sizeof(void *))); }) ;
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->target) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->target) - sizeof(void *))); }) ;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->input_weights[0]) - sizeof(void *))); }) ;
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_prev_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->input_prev_weights[0]) - sizeof(void *))); }) ;
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_weights) - sizeof(void *))); }) ;
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_prev_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_prev_weights) - sizeof(void *))); }) ;
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->hidden_weights[0]) - sizeof(void *))); }) ;
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_prev_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->hidden_prev_weights[0]) - sizeof(void *))); }) ;
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 194 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 195 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_weights) - sizeof(void *))); }) ;
# 196 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_prev_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_prev_weights) - sizeof(void *))); }) ;
# 197 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 198 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net) - sizeof(void *)), 18030399740950321448UL);free((((unsigned char *)(char *)net) - sizeof(void *))); }) ;
# 199 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_free", &____must_manage_bpnn_free, ____alias_loc_id_10, ____chimes_did_disable10, false); }
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_create_npm(int n_in, int n_hidden, int n_out);
BPNN *bpnn_create_quick(int n_in, int n_hidden, int n_out); BPNN *bpnn_create(int n_in, int n_hidden, int n_out);
BPNN *bpnn_create_resumable(int n_in, int n_hidden, int n_out)
# 212 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&bpnn_create), "bpnn_create", &____must_manage_bpnn_create, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 213 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 214 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *newnet; ;
# 215 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 216 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: newnet = ({ calling_npm("bpnn_internal_create", 0); bpnn_internal_create_npm(n_in, n_hidden, n_out); });
# 217 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 218 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 219 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 220 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 221 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_randomize_weights", 0); bpnn_randomize_weights_npm(newnet->input_weights, n_in, n_hidden); });
# 222 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 223 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: ({ calling_npm("bpnn_randomize_weights", 0); bpnn_randomize_weights_npm(newnet->hidden_weights, n_hidden, n_out); });
# 224 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_3: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(newnet->input_prev_weights, n_in, n_hidden); });
# 225 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_4: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(newnet->hidden_prev_weights, n_hidden, n_out); });
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_5: ({ calling_npm("bpnn_randomize_row", 0); bpnn_randomize_row_npm(newnet->target, n_out); });
# 227 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN *____chimes_ret_var_9; ; ____chimes_ret_var_9 = ((newnet)); rm_stack(true, 18030399740950321465UL, "bpnn_create", &____must_manage_bpnn_create, ____alias_loc_id_11, ____chimes_did_disable11, false); return ____chimes_ret_var_9; ;
# 228 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950321465UL, "bpnn_create", &____must_manage_bpnn_create, ____alias_loc_id_11, ____chimes_did_disable11, false); }
# 229 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 230 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 231 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_layerforward_npm(float *l1, float *l2, float **conn, int n1, int n2);
void bpnn_layerforward_quick(float *l1, float *l2, float **conn, int n1, int n2); void bpnn_layerforward(float *l1, float *l2, float **conn, int n1, int n2);
void bpnn_layerforward_resumable(float *l1, float *l2, float **conn, int n1, int n2)
# 232 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable12 = new_stack((void *)(&bpnn_layerforward), "bpnn_layerforward", &____must_manage_bpnn_layerforward, 5, 0, (size_t)(18030399740950321577UL), (size_t)(18030399740950321578UL), (size_t)(18030399740950321579UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 233 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float sum; ;
# 234 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j; int k; ;
# 235 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 236 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 237 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  l1[0] = 1.0;
# 238 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 239 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 240 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 241 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 242 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 243 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= n2; j++) {
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 245 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 246 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    sum = 0.0;
# 247 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 0; k <= n1; k++) {
# 248 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      sum += conn[k][j] * l1[k];
# 249 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 250 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     call_lbl_0: l2[j] = ({ calling_npm("squash", 0); squash_npm(sum); });
# 251 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 252 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_layerforward", &____must_manage_bpnn_layerforward, ____alias_loc_id_12, ____chimes_did_disable12, false); }
# 253 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 254 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 255 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_output_error_npm(float *delta, float *target, float *output, int nj, float *err);
void bpnn_output_error_quick(float *delta, float *target, float *output, int nj, float *err); void bpnn_output_error(float *delta, float *target, float *output, int nj, float *err);
void bpnn_output_error_resumable(float *delta, float *target, float *output, int nj, float *err)
# 256 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable13 = new_stack((void *)(&bpnn_output_error), "bpnn_output_error", &____must_manage_bpnn_output_error, 5, 0, (size_t)(18030399740950321657UL), (size_t)(18030399740950321676UL), (size_t)(18030399740950321677UL), (size_t)(0UL), (size_t)(18030399740950321679UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 257 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j; ;
# 258 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float o; float t; float errsum; ;
# 259 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  errsum = 0.0;
# 260 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= nj; j++) {
# 261 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    o = output[j];
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    t = target[j];
# 263 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    delta[j] = o * (1.0 - o) * (t - o);
# 264 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    errsum += (((delta[j]) > 0.0) ? (delta[j]) : (-(delta[j])));
# 265 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 266 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *err = errsum;
# 267 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_output_error", &____must_manage_bpnn_output_error, ____alias_loc_id_13, ____chimes_did_disable13, false); }
# 268 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 269 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 270 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_hidden_error_npm(float *delta_h, int nh, float *delta_o, int no, float **who, float *hidden, float *err);
void bpnn_hidden_error_quick(float *delta_h, int nh, float *delta_o, int no, float **who, float *hidden, float *err); void bpnn_hidden_error(float *delta_h, int nh, float *delta_o, int no, float **who, float *hidden, float *err);
void bpnn_hidden_error_resumable(float *delta_h,
# 271 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int nh,
# 272 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *delta_o,
# 273 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int no,
# 274 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float **who,
# 275 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *hidden,
# 276 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *err)
# 277 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable14 = new_stack((void *)(&bpnn_hidden_error), "bpnn_hidden_error", &____must_manage_bpnn_hidden_error, 7, 0, (size_t)(18030399740950321785UL), (size_t)(0UL), (size_t)(18030399740950321805UL), (size_t)(0UL), (size_t)(18030399740950321807UL), (size_t)(18030399740950321808UL), (size_t)(18030399740950321809UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 278 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j; int k; ;
# 279 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float h; float sum; float errsum; ;
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 281 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  errsum = 0.0;
# 282 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= nh; j++) {
# 283 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    h = hidden[j];
# 284 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    sum = 0.0;
# 285 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 1; k <= no; k++) {
# 286 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      sum += delta_o[k] * who[j][k];
# 287 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 288 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    delta_h[j] = h * (1.0 - h) * sum;
# 289 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    errsum += (((delta_h[j]) > 0.0) ? (delta_h[j]) : (-(delta_h[j])));
# 290 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 291 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *err = errsum;
# 292 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_hidden_error", &____must_manage_bpnn_hidden_error, ____alias_loc_id_14, ____chimes_did_disable14, false); }
# 293 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 294 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 295 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_adjust_weights_npm(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw);
void bpnn_adjust_weights_quick(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw); void bpnn_adjust_weights(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw);
void bpnn_adjust_weights_resumable(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw)
# 296 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable15 = new_stack((void *)(&bpnn_adjust_weights), "bpnn_adjust_weights", &____must_manage_bpnn_adjust_weights, 6, 0, (size_t)(18030399740950321910UL), (size_t)(0UL), (size_t)(18030399740950321912UL), (size_t)(0UL), (size_t)(18030399740950321914UL), (size_t)(18030399740950321915UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 297 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float new_dw; ;
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int k; int j; ;
# 299 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  ly[0] = 1.0;
# 300 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 301 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 302 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 303 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 304 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 305 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 306 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
#pragma omp parallel for shared(oldw, w, delta) private(j, k, new_dw) firstprivate(ndelta, nly)
# 307 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 308 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 309 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 310 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= ndelta; j++) {
# 311 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 0; k <= nly; k++) {
# 312 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      new_dw = ((0.3 * delta[j] * ly[k]) + (0.3 * oldw[k][j]));
# 313 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   w[k][j] += new_dw;
# 314 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   oldw[k][j] = new_dw;
# 315 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 317 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_adjust_weights", &____must_manage_bpnn_adjust_weights, ____alias_loc_id_15, ____chimes_did_disable15, false); }
# 318 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 319 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 320 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_feedforward_npm(BPNN *net);
void bpnn_feedforward_quick(BPNN *net); void bpnn_feedforward(BPNN *net);
void bpnn_feedforward_resumable(BPNN *net)
# 321 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable16 = new_stack((void *)(&bpnn_feedforward), "bpnn_feedforward", &____must_manage_bpnn_feedforward, 1, 0, (size_t)(18030399740950321962UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 322 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int in; int hid; int out; ;
# 323 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 324 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  in = net->input_n;
# 325 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  hid = net->hidden_n;
# 326 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  out = net->output_n;
# 327 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 328 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 329 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->input_units, net->hidden_units, net->input_weights, in, hid); });
# 331 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->hidden_units, net->output_units, net->hidden_weights, hid, out); });
# 333 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_feedforward", &____must_manage_bpnn_feedforward, ____alias_loc_id_16, ____chimes_did_disable16, false); }
# 335 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 336 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 337 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_train_npm(BPNN *net, float *eo, float *eh);
void bpnn_train_quick(BPNN *net, float *eo, float *eh); void bpnn_train(BPNN *net, float *eo, float *eh);
void bpnn_train_resumable(BPNN *net, float *eo, float *eh)
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable17 = new_stack((void *)(&bpnn_train), "bpnn_train", &____must_manage_bpnn_train, 3, 0, (size_t)(18030399740950322081UL), (size_t)(18030399740950322082UL), (size_t)(18030399740950322083UL)) ; float hid_err;
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float out_err;
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 if (____must_checkpoint_bpnn_train_hid_err_0 || ____must_checkpoint_bpnn_train_out_err_0) { register_stack_vars(2, "bpnn_train|hid_err|0", &____must_checkpoint_bpnn_train_hid_err_0, "float", (void *)(&hid_err), (size_t)4, 0, 0, 0, "bpnn_train|out_err|0", &____must_checkpoint_bpnn_train_out_err_0, "float", (void *)(&out_err), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 339 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int in; int hid; int out; ;
# 340 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    ;
# 341 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 342 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  in = net->input_n;
# 343 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  hid = net->hidden_n;
# 344 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  out = net->output_n;
# 345 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 346 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 347 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->input_units, net->hidden_units, net->input_weights, in, hid); });
# 349 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->hidden_units, net->output_units, net->hidden_weights, hid, out); });
# 351 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 353 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: ({ calling_npm("bpnn_output_error", 0); bpnn_output_error_npm(net->output_delta, net->target, net->output_units, out, &out_err); });
# 355 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_3: ({ calling_npm("bpnn_hidden_error", 0); bpnn_hidden_error_npm(net->hidden_delta, hid, net->output_delta, out, net->hidden_weights, net->hidden_units, &hid_err); });
# 357 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *eo = out_err;
# 358 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *eh = hid_err;
# 359 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 360 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 361 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_4: ({ calling_npm("bpnn_adjust_weights", 0); bpnn_adjust_weights_npm(net->output_delta, out, net->hidden_units, hid, net->hidden_weights, net->hidden_prev_weights); });
# 363 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_5: ({ calling_npm("bpnn_adjust_weights", 0); bpnn_adjust_weights_npm(net->hidden_delta, hid, net->input_units, in, net->input_weights, net->input_prev_weights); });
# 365 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 366 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_train", &____must_manage_bpnn_train, ____alias_loc_id_17, ____chimes_did_disable17, false); }
# 367 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 368 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 369 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 371 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_save_npm(BPNN *net, char *filename);
void bpnn_save_quick(BPNN *net, char *filename); void bpnn_save(BPNN *net, char *filename);
void bpnn_save_resumable(BPNN *net, char *filename)
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable18 = new_stack((void *)(&bpnn_save), "bpnn_save", &____must_manage_bpnn_save, 2, 0, (size_t)(18030399740950322346UL), (size_t)(18030399740950322347UL)) ; float dvalue;
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 if (____must_checkpoint_bpnn_save_dvalue_0) { register_stack_vars(1, "bpnn_save|dvalue|0", &____must_checkpoint_bpnn_save_dvalue_0, "float", (void *)(&dvalue), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 373 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int n1; int n2; int n3; int i; int j; int memcnt; ;
# 374 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float **w; ;
# 375 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  char *mem; ;
# 376 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 377 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  FILE *pFile; ;
# 378 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  pFile = fopen( filename, "w+" );
# 387 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 387 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n1 = net->input_n; n2 = net->hidden_n; n3 = net->output_n;
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Saving %dx%dx%d network to '%s'\n", n1, n2, n3, filename);
# 389 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 390 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 391 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 392 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 393 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 394 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 395 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n1 , sizeof(char), sizeof(char), pFile);
# 396 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n2 , sizeof(char), sizeof(char), pFile);
# 397 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n3 , sizeof(char), sizeof(char), pFile);
# 398 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 399 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 400 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 401 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 402 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w = net->input_weights;
# 403 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n1 + 1) * (n2 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n1+1) * (n2+1) * sizeof(float)), 18030399740950322161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 404 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n1; i++) {
# 405 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n2; j++) {
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      dvalue = w[i][j];
# 407 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&mem[memcnt]); _from = (char *)(&dvalue); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 408 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 409 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 410 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 411 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 412 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( mem , (unsigned)(sizeof(float)), (unsigned) ((n1+1) * (n2+1) * sizeof(float)) , pFile);
# 413 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322161UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 414 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 415 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 416 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w = net->hidden_weights;
# 417 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n2 + 1) * (n3 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n2+1) * (n3+1) * sizeof(float)), 18030399740950322161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 418 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n2; i++) {
# 419 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n3; j++) {
# 420 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      dvalue = w[i][j];
# 421 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&mem[memcnt]); _from = (char *)(&dvalue); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 422 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 423 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 425 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 426 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( mem , sizeof(float), (unsigned) ((n2+1) * (n3+1) * sizeof(float)) , pFile);
# 427 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322161UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 428 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 429 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fclose(pFile);
# 430 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  rm_stack(false, 0UL, "bpnn_save", &____must_manage_bpnn_save, ____alias_loc_id_18, ____chimes_did_disable18, false); return;
# 431 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 432 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 433 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 434 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_read_npm(char *filename);
BPNN *bpnn_read_quick(char *filename); BPNN *bpnn_read(char *filename);
BPNN *bpnn_read_resumable(char *filename)
# 435 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable19 = new_stack((void *)(&bpnn_read), "bpnn_read", &____must_manage_bpnn_read, 1, 0, (size_t)(18030399740950322627UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 436 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  char *mem; ;
# 437 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *new_mem; ;
# 438 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int fd; int n1; int n2; int n3; int i; int j; int memcnt; ;
# 439 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 440 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if ((fd = open(filename, 0, 0644)) == -1) {
# 441 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     BPNN *____chimes_ret_var_10; ; ____chimes_ret_var_10 = ((__null)); rm_stack(true, 18030399740950322461UL, "bpnn_read", &____must_manage_bpnn_read, ____alias_loc_id_19, ____chimes_did_disable19, false); return ____chimes_ret_var_10; ;
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 443 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 444 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Reading '%s'\n", filename);
# 445 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 446 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n1, sizeof(int));
# 447 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n2, sizeof(int));
# 448 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n3, sizeof(int));
# 449 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: new_mem = ({ calling_npm("bpnn_internal_create", 0); bpnn_internal_create_npm(n1, n2, n3); });
# 450 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 451 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("'%s' contains a %dx%dx%d network\n", filename, n1, n2, n3);
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Reading input weights...");
# 453 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 454 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 455 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n1 + 1) * (n2 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n1+1) * (n2+1) * sizeof(float)), 18030399740950322471UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 456 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, mem, (n1+1) * (n2+1) * sizeof(float));
# 457 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n1; i++) {
# 458 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n2; j++) {
# 459 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&(new_mem->input_weights[i][j])); _from = (char *)(&mem[memcnt]); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 460 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 461 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 462 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 463 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322471UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 464 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 465 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Done\nReading hidden weights...");
# 466 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 467 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 468 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n2 + 1) * (n3 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n2+1) * (n3+1) * sizeof(float)), 18030399740950322471UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 469 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, mem, (n2+1) * (n3+1) * sizeof(float));
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n2; i++) {
# 471 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n3; j++) {
# 472 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&(new_mem->hidden_weights[i][j])); _from = (char *)(&mem[memcnt]); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 473 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 474 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 475 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 476 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322471UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 477 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  close(fd);
# 478 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 479 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Done\n");
# 480 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 481 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(new_mem->input_prev_weights, n1, n2); });
# 482 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(new_mem->hidden_prev_weights, n2, n3); });
# 483 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 484 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN *____chimes_ret_var_11; ; ____chimes_ret_var_11 = ((new_mem)); rm_stack(true, 18030399740950322461UL, "bpnn_read", &____must_manage_bpnn_read, ____alias_loc_id_19, ____chimes_did_disable19, false); return ____chimes_ret_var_11; ;
# 485 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950322461UL, "bpnn_read", &____must_manage_bpnn_read, ____alias_loc_id_19, ____chimes_did_disable19, false); }
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float drnd_quick()
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&drnd), "drnd", &____must_manage_drnd, 0, 0) ; ; ;
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((float) rand() / (float) 0x7fffffff)); rm_stack(false, 0UL, "drnd", &____must_manage_drnd, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "drnd", &____must_manage_drnd, ____alias_loc_id_0, ____chimes_did_disable0, false); }

float drnd() { return (____chimes_replaying ? drnd_resumable() : drnd_quick()); }
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float dpn1_quick()
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&dpn1), "dpn1", &____must_manage_dpn1, 0, 0) ; ; ;
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_1; ; call_lbl_0: ____chimes_ret_var_1 = (((({ calling_npm("drnd", 0); drnd_npm(); }) * 2.0) - 1.0)); rm_stack(false, 0UL, "dpn1", &____must_manage_dpn1, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "dpn1", &____must_manage_dpn1, ____alias_loc_id_1, ____chimes_did_disable1, false); }

float dpn1() { return (____chimes_replaying ? dpn1_resumable() : dpn1_quick()); }
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float squash_quick(float x)
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&squash), "squash", &____must_manage_squash, 1, 0, (size_t)(0UL)) ; ; ;
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float m; ;
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((1.0 / (1.0 + exp(-x)))); rm_stack(false, 0UL, "squash", &____must_manage_squash, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ;
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "squash", &____must_manage_squash, ____alias_loc_id_2, ____chimes_did_disable2, false); }

float squash(float x) { return (____chimes_replaying ? squash_resumable(x) : squash_quick(x)); }
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float *alloc_1d_dbl_quick(size_t n)
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&alloc_1d_dbl), "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, 1, 0, (size_t)(0UL)) ; ; ;
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float *new_mem; ;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = (float *) ({ void *____chimes_tmp_ptr = malloc(((n * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (n * sizeof (float)), 18030399740950320995UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (new_mem == __null) {
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("ALLOC_1D_DBL: Couldn't allocate array of floats\n");
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     float *____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((__null)); rm_stack(true, 18030399740950320995UL, "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, ____alias_loc_id_3, ____chimes_did_disable3, false); return ____chimes_ret_var_3; ;
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float *____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((new_mem)); rm_stack(true, 18030399740950320995UL, "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, ____alias_loc_id_3, ____chimes_did_disable3, false); return ____chimes_ret_var_4; ;
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950320995UL, "alloc_1d_dbl", &____must_manage_alloc_1d_dbl, ____alias_loc_id_3, ____chimes_did_disable3, false); }

float *alloc_1d_dbl(size_t n) { return (____chimes_replaying ? alloc_1d_dbl_resumable(n) : alloc_1d_dbl_quick(n)); }
# 72 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float **alloc_2d_dbl_quick(size_t m, size_t n)
# 73 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&alloc_2d_dbl), "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 74 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  size_t i; ;
# 75 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float **new_mem; ;
# 76 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 77 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = (float **) ({ void *____chimes_tmp_ptr = malloc(((m * sizeof(float *))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m * sizeof (float *)), 18030399740950321034UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 78 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (new_mem == __null) {
# 79 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("ALLOC_2D_DBL: Couldn't allocate array of dbl ptrs\n");
# 80 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     float **____chimes_ret_var_5; ; ____chimes_ret_var_5 = ((__null)); rm_stack(true, 18030399740950321034UL, "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_5; ;
# 81 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 82 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 83 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float *acc; call_lbl_0: acc = (({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(m * n); })) ;
# 84 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i < m; i++) {
# 85 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    new_mem[i] = acc + (i * n);
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float **____chimes_ret_var_6; ; ____chimes_ret_var_6 = ((new_mem)); rm_stack(true, 18030399740950321034UL, "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_6; ;
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950321034UL, "alloc_2d_dbl", &____must_manage_alloc_2d_dbl, ____alias_loc_id_4, ____chimes_did_disable4, false); }

float **alloc_2d_dbl(size_t m, size_t n) { return (____chimes_replaying ? alloc_2d_dbl_resumable(m, n) : alloc_2d_dbl_quick(m, n)); }
# 93 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_randomize_weights_quick(float **w, int m, int n)
# 94 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&bpnn_randomize_weights), "bpnn_randomize_weights", &____must_manage_bpnn_randomize_weights, 3, 0, (size_t)(18030399740950321130UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 95 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int i; int j; ;
# 96 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 97 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= m; i++) {
# 98 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n; j++) {
# 99 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     w[i][j] = (float) rand()/2147483647;
# 100 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 101 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 102 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 103 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_randomize_weights", &____must_manage_bpnn_randomize_weights, ____alias_loc_id_5, ____chimes_did_disable5, false); }

void bpnn_randomize_weights(float **w, int m, int n) { (____chimes_replaying ? bpnn_randomize_weights_resumable(w, m, n) : bpnn_randomize_weights_quick(w, m, n)); }
# 105 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_randomize_row_quick(float *w, int m)
# 106 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&bpnn_randomize_row), "bpnn_randomize_row", &____must_manage_bpnn_randomize_row, 2, 0, (size_t)(18030399740950321158UL), (size_t)(0UL)) ; ; ;
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 int i; ;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 for (i = 0; i <= m; i++) {
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w[i] = 0.1;
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_randomize_row", &____must_manage_bpnn_randomize_row, ____alias_loc_id_6, ____chimes_did_disable6, false); }

void bpnn_randomize_row(float *w, int m) { (____chimes_replaying ? bpnn_randomize_row_resumable(w, m) : bpnn_randomize_row_quick(w, m)); }
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_zero_weights_quick(float **w, int m, int n)
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&bpnn_zero_weights), "bpnn_zero_weights", &____must_manage_bpnn_zero_weights, 3, 0, (size_t)(18030399740950321205UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int i; int j; ;
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= m; i++) {
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n; j++) {
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      w[i][j] = 0.0;
# 122 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_zero_weights", &____must_manage_bpnn_zero_weights, ____alias_loc_id_7, ____chimes_did_disable7, false); }

void bpnn_zero_weights(float **w, int m, int n) { (____chimes_replaying ? bpnn_zero_weights_resumable(w, m, n) : bpnn_zero_weights_quick(w, m, n)); }
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_initialize_quick(int seed)
# 128 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&bpnn_initialize), "bpnn_initialize", &____must_manage_bpnn_initialize, 1, 0, (size_t)(0UL)) ; ; ;
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Random number generator seed: %d\n", seed);
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  srand(seed);
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_initialize", &____must_manage_bpnn_initialize, ____alias_loc_id_8, ____chimes_did_disable8, false); }

void bpnn_initialize(int seed) { (____chimes_replaying ? bpnn_initialize_resumable(seed) : bpnn_initialize_quick(seed)); }
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_internal_create_quick(int n_in, int n_hidden, int n_out)
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&bpnn_internal_create), "bpnn_internal_create", &____must_manage_bpnn_internal_create, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *newnet; ;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet = (BPNN *) ({ void *____chimes_tmp_ptr = malloc((sizeof(BPNN)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof (BPNN), 18030399740950322461UL, 0, 1, (int)sizeof(BPNN), 10, (int)__builtin_offsetof(BPNN, input_units), (int)__builtin_offsetof(BPNN, hidden_units), (int)__builtin_offsetof(BPNN, output_units), (int)__builtin_offsetof(BPNN, hidden_delta), (int)__builtin_offsetof(BPNN, output_delta), (int)__builtin_offsetof(BPNN, target), (int)__builtin_offsetof(BPNN, input_weights), (int)__builtin_offsetof(BPNN, hidden_weights), (int)__builtin_offsetof(BPNN, input_prev_weights), (int)__builtin_offsetof(BPNN, hidden_prev_weights)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (newnet == __null) {
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("BPNN_CREATE: Couldn't allocate neural network\n");
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     BPNN *____chimes_ret_var_7; ; ____chimes_ret_var_7 = ((__null)); rm_stack(true, 18030399740950322461UL, "bpnn_internal_create", &____must_manage_bpnn_internal_create, ____alias_loc_id_9, ____chimes_did_disable9, false); return ____chimes_ret_var_7; ;
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->input_n = n_in;
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_n = n_hidden;
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->output_n = n_out;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: newnet->input_units = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_in + 1); });
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: newnet->hidden_units = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_hidden + 1); });
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: newnet->output_units = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_out + 1); });
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_3: newnet->hidden_delta = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_hidden + 1); });
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_4: newnet->output_delta = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_out + 1); });
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_5: newnet->target = ({ calling_npm("alloc_1d_dbl", 0); alloc_1d_dbl_npm(n_out + 1); });
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_6: newnet->input_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_in + 1, n_hidden + 1); });
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_7: newnet->hidden_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_hidden + 1, n_out + 1); });
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_8: newnet->input_prev_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_in + 1, n_hidden + 1); });
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_9: newnet->hidden_prev_weights = ({ calling_npm("alloc_2d_dbl", 0); alloc_2d_dbl_npm(n_hidden + 1, n_out + 1); });
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN *____chimes_ret_var_8; ; ____chimes_ret_var_8 = ((newnet)); rm_stack(true, 18030399740950322461UL, "bpnn_internal_create", &____must_manage_bpnn_internal_create, ____alias_loc_id_9, ____chimes_did_disable9, false); return ____chimes_ret_var_8; ;
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950322461UL, "bpnn_internal_create", &____must_manage_bpnn_internal_create, ____alias_loc_id_9, ____chimes_did_disable9, false); }

BPNN *bpnn_internal_create(int n_in, int n_hidden, int n_out) { return (____chimes_replaying ? bpnn_internal_create_resumable(n_in, n_hidden, n_out) : bpnn_internal_create_quick(n_in, n_hidden, n_out)); }
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_free_quick(BPNN *net)
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&bpnn_free), "bpnn_free", &____must_manage_bpnn_free, 1, 0, (size_t)(18030399740950321448UL)) ; ; ;
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int n1; int n2; int i; ;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n1 = net->input_n;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n2 = net->hidden_n;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_units) - sizeof(void *))); }) ;
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_units) - sizeof(void *))); }) ;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->output_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->output_units) - sizeof(void *))); }) ;
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_delta) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_delta) - sizeof(void *))); }) ;
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->output_delta) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->output_delta) - sizeof(void *))); }) ;
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->target) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->target) - sizeof(void *))); }) ;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->input_weights[0]) - sizeof(void *))); }) ;
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_prev_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->input_prev_weights[0]) - sizeof(void *))); }) ;
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_weights) - sizeof(void *))); }) ;
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_prev_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_prev_weights) - sizeof(void *))); }) ;
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->hidden_weights[0]) - sizeof(void *))); }) ;
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_prev_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->hidden_prev_weights[0]) - sizeof(void *))); }) ;
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 194 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 195 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_weights) - sizeof(void *))); }) ;
# 196 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_prev_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_prev_weights) - sizeof(void *))); }) ;
# 197 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 198 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net) - sizeof(void *)), 18030399740950321448UL);free((((unsigned char *)(char *)net) - sizeof(void *))); }) ;
# 199 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_free", &____must_manage_bpnn_free, ____alias_loc_id_10, ____chimes_did_disable10, false); }

void bpnn_free(BPNN *net) { (____chimes_replaying ? bpnn_free_resumable(net) : bpnn_free_quick(net)); }
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_create_quick(int n_in, int n_hidden, int n_out)
# 212 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&bpnn_create), "bpnn_create", &____must_manage_bpnn_create, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 213 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 214 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *newnet; ;
# 215 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 216 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: newnet = ({ calling_npm("bpnn_internal_create", 0); bpnn_internal_create_npm(n_in, n_hidden, n_out); });
# 217 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 218 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 219 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 220 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 221 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_randomize_weights", 0); bpnn_randomize_weights_npm(newnet->input_weights, n_in, n_hidden); });
# 222 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 223 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: ({ calling_npm("bpnn_randomize_weights", 0); bpnn_randomize_weights_npm(newnet->hidden_weights, n_hidden, n_out); });
# 224 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_3: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(newnet->input_prev_weights, n_in, n_hidden); });
# 225 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_4: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(newnet->hidden_prev_weights, n_hidden, n_out); });
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_5: ({ calling_npm("bpnn_randomize_row", 0); bpnn_randomize_row_npm(newnet->target, n_out); });
# 227 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN *____chimes_ret_var_9; ; ____chimes_ret_var_9 = ((newnet)); rm_stack(true, 18030399740950321465UL, "bpnn_create", &____must_manage_bpnn_create, ____alias_loc_id_11, ____chimes_did_disable11, false); return ____chimes_ret_var_9; ;
# 228 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950321465UL, "bpnn_create", &____must_manage_bpnn_create, ____alias_loc_id_11, ____chimes_did_disable11, false); }

BPNN *bpnn_create(int n_in, int n_hidden, int n_out) { return (____chimes_replaying ? bpnn_create_resumable(n_in, n_hidden, n_out) : bpnn_create_quick(n_in, n_hidden, n_out)); }
# 231 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_layerforward_quick(float *l1, float *l2, float **conn, int n1, int n2)
# 232 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable12 = new_stack((void *)(&bpnn_layerforward), "bpnn_layerforward", &____must_manage_bpnn_layerforward, 5, 0, (size_t)(18030399740950321577UL), (size_t)(18030399740950321578UL), (size_t)(18030399740950321579UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 233 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float sum; ;
# 234 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j; int k; ;
# 235 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 236 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 237 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  l1[0] = 1.0;
# 238 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 239 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 240 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 241 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 242 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 243 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= n2; j++) {
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 245 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 246 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    sum = 0.0;
# 247 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 0; k <= n1; k++) {
# 248 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      sum += conn[k][j] * l1[k];
# 249 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 250 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     call_lbl_0: l2[j] = ({ calling_npm("squash", 0); squash_npm(sum); });
# 251 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 252 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_layerforward", &____must_manage_bpnn_layerforward, ____alias_loc_id_12, ____chimes_did_disable12, false); }

void bpnn_layerforward(float *l1, float *l2, float **conn, int n1, int n2) { (____chimes_replaying ? bpnn_layerforward_resumable(l1, l2, conn, n1, n2) : bpnn_layerforward_quick(l1, l2, conn, n1, n2)); }
# 255 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_output_error_quick(float *delta, float *target, float *output, int nj, float *err)
# 256 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable13 = new_stack((void *)(&bpnn_output_error), "bpnn_output_error", &____must_manage_bpnn_output_error, 5, 0, (size_t)(18030399740950321657UL), (size_t)(18030399740950321676UL), (size_t)(18030399740950321677UL), (size_t)(0UL), (size_t)(18030399740950321679UL)) ; ; ;
# 257 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j; ;
# 258 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float o; float t; float errsum; ;
# 259 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  errsum = 0.0;
# 260 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= nj; j++) {
# 261 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    o = output[j];
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    t = target[j];
# 263 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    delta[j] = o * (1.0 - o) * (t - o);
# 264 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    errsum += (((delta[j]) > 0.0) ? (delta[j]) : (-(delta[j])));
# 265 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 266 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *err = errsum;
# 267 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_output_error", &____must_manage_bpnn_output_error, ____alias_loc_id_13, ____chimes_did_disable13, false); }

void bpnn_output_error(float *delta, float *target, float *output, int nj, float *err) { (____chimes_replaying ? bpnn_output_error_resumable(delta, target, output, nj, err) : bpnn_output_error_quick(delta, target, output, nj, err)); }
# 270 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_hidden_error_quick(float *delta_h,
# 271 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int nh,
# 272 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *delta_o,
# 273 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int no,
# 274 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float **who,
# 275 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *hidden,
# 276 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *err)
# 277 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable14 = new_stack((void *)(&bpnn_hidden_error), "bpnn_hidden_error", &____must_manage_bpnn_hidden_error, 7, 0, (size_t)(18030399740950321785UL), (size_t)(0UL), (size_t)(18030399740950321805UL), (size_t)(0UL), (size_t)(18030399740950321807UL), (size_t)(18030399740950321808UL), (size_t)(18030399740950321809UL)) ; ; ;
# 278 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j; int k; ;
# 279 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float h; float sum; float errsum; ;
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 281 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  errsum = 0.0;
# 282 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= nh; j++) {
# 283 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    h = hidden[j];
# 284 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    sum = 0.0;
# 285 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 1; k <= no; k++) {
# 286 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      sum += delta_o[k] * who[j][k];
# 287 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 288 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    delta_h[j] = h * (1.0 - h) * sum;
# 289 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    errsum += (((delta_h[j]) > 0.0) ? (delta_h[j]) : (-(delta_h[j])));
# 290 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 291 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *err = errsum;
# 292 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_hidden_error", &____must_manage_bpnn_hidden_error, ____alias_loc_id_14, ____chimes_did_disable14, false); }

void bpnn_hidden_error(float *delta_h,
# 271 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int nh,
# 272 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *delta_o,
# 273 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int no,
# 274 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float **who,
# 275 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *hidden,
# 276 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *err) { (____chimes_replaying ? bpnn_hidden_error_resumable(delta_h, nh, delta_o, no, who, hidden, err) : bpnn_hidden_error_quick(delta_h, nh, delta_o, no, who, hidden, err)); }
# 295 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_adjust_weights_quick(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw)
# 296 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable15 = new_stack((void *)(&bpnn_adjust_weights), "bpnn_adjust_weights", &____must_manage_bpnn_adjust_weights, 6, 0, (size_t)(18030399740950321910UL), (size_t)(0UL), (size_t)(18030399740950321912UL), (size_t)(0UL), (size_t)(18030399740950321914UL), (size_t)(18030399740950321915UL)) ; ; ;
# 297 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float new_dw; ;
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int k; int j; ;
# 299 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  ly[0] = 1.0;
# 300 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 301 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 302 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 303 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 304 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 305 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 306 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
#pragma omp parallel for shared(oldw, w, delta) private(j, k, new_dw) firstprivate(ndelta, nly)
# 307 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 308 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 309 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 310 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= ndelta; j++) {
# 311 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 0; k <= nly; k++) {
# 312 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      new_dw = ((0.3 * delta[j] * ly[k]) + (0.3 * oldw[k][j]));
# 313 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   w[k][j] += new_dw;
# 314 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   oldw[k][j] = new_dw;
# 315 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 317 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_adjust_weights", &____must_manage_bpnn_adjust_weights, ____alias_loc_id_15, ____chimes_did_disable15, false); }

void bpnn_adjust_weights(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw) { (____chimes_replaying ? bpnn_adjust_weights_resumable(delta, ndelta, ly, nly, w, oldw) : bpnn_adjust_weights_quick(delta, ndelta, ly, nly, w, oldw)); }
# 320 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_feedforward_quick(BPNN *net)
# 321 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable16 = new_stack((void *)(&bpnn_feedforward), "bpnn_feedforward", &____must_manage_bpnn_feedforward, 1, 0, (size_t)(18030399740950321962UL)) ; ; ;
# 322 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int in; int hid; int out; ;
# 323 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 324 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  in = net->input_n;
# 325 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  hid = net->hidden_n;
# 326 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  out = net->output_n;
# 327 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 328 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 329 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->input_units, net->hidden_units, net->input_weights, in, hid); });
# 331 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->hidden_units, net->output_units, net->hidden_weights, hid, out); });
# 333 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_feedforward", &____must_manage_bpnn_feedforward, ____alias_loc_id_16, ____chimes_did_disable16, false); }

void bpnn_feedforward(BPNN *net) { (____chimes_replaying ? bpnn_feedforward_resumable(net) : bpnn_feedforward_quick(net)); }
# 337 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_train_quick(BPNN *net, float *eo, float *eh)
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable17 = new_stack((void *)(&bpnn_train), "bpnn_train", &____must_manage_bpnn_train, 3, 0, (size_t)(18030399740950322081UL), (size_t)(18030399740950322082UL), (size_t)(18030399740950322083UL)) ; float hid_err;
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float out_err;
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 if (____must_checkpoint_bpnn_train_hid_err_0 || ____must_checkpoint_bpnn_train_out_err_0) { register_stack_vars(2, "bpnn_train|hid_err|0", &____must_checkpoint_bpnn_train_hid_err_0, "float", (void *)(&hid_err), (size_t)4, 0, 0, 0, "bpnn_train|out_err|0", &____must_checkpoint_bpnn_train_out_err_0, "float", (void *)(&out_err), (size_t)4, 0, 0, 0); } ; ;
# 339 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int in; int hid; int out; ;
# 340 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    ;
# 341 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 342 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  in = net->input_n;
# 343 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  hid = net->hidden_n;
# 344 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  out = net->output_n;
# 345 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 346 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 347 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->input_units, net->hidden_units, net->input_weights, in, hid); });
# 349 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_layerforward", 0); bpnn_layerforward_npm(net->hidden_units, net->output_units, net->hidden_weights, hid, out); });
# 351 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 353 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: ({ calling_npm("bpnn_output_error", 0); bpnn_output_error_npm(net->output_delta, net->target, net->output_units, out, &out_err); });
# 355 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_3: ({ calling_npm("bpnn_hidden_error", 0); bpnn_hidden_error_npm(net->hidden_delta, hid, net->output_delta, out, net->hidden_weights, net->hidden_units, &hid_err); });
# 357 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *eo = out_err;
# 358 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *eh = hid_err;
# 359 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 360 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 361 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_4: ({ calling_npm("bpnn_adjust_weights", 0); bpnn_adjust_weights_npm(net->output_delta, out, net->hidden_units, hid, net->hidden_weights, net->hidden_prev_weights); });
# 363 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_5: ({ calling_npm("bpnn_adjust_weights", 0); bpnn_adjust_weights_npm(net->hidden_delta, hid, net->input_units, in, net->input_weights, net->input_prev_weights); });
# 365 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 366 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(false, 0UL, "bpnn_train", &____must_manage_bpnn_train, ____alias_loc_id_17, ____chimes_did_disable17, false); }

void bpnn_train(BPNN *net, float *eo, float *eh) { (____chimes_replaying ? bpnn_train_resumable(net, eo, eh) : bpnn_train_quick(net, eo, eh)); }
# 371 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_save_quick(BPNN *net, char *filename)
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable18 = new_stack((void *)(&bpnn_save), "bpnn_save", &____must_manage_bpnn_save, 2, 0, (size_t)(18030399740950322346UL), (size_t)(18030399740950322347UL)) ; float dvalue;
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 if (____must_checkpoint_bpnn_save_dvalue_0) { register_stack_vars(1, "bpnn_save|dvalue|0", &____must_checkpoint_bpnn_save_dvalue_0, "float", (void *)(&dvalue), (size_t)4, 0, 0, 0); } ; ;
# 373 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int n1; int n2; int n3; int i; int j; int memcnt; ;
# 374 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float **w; ;
# 375 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  char *mem; ;
# 376 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 377 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  FILE *pFile; ;
# 378 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  pFile = fopen( filename, "w+" );
# 387 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 387 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n1 = net->input_n; n2 = net->hidden_n; n3 = net->output_n;
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Saving %dx%dx%d network to '%s'\n", n1, n2, n3, filename);
# 389 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 390 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 391 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 392 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 393 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 394 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 395 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n1 , sizeof(char), sizeof(char), pFile);
# 396 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n2 , sizeof(char), sizeof(char), pFile);
# 397 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n3 , sizeof(char), sizeof(char), pFile);
# 398 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 399 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 400 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 401 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 402 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w = net->input_weights;
# 403 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n1 + 1) * (n2 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n1+1) * (n2+1) * sizeof(float)), 18030399740950322161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 404 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n1; i++) {
# 405 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n2; j++) {
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      dvalue = w[i][j];
# 407 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&mem[memcnt]); _from = (char *)(&dvalue); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 408 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 409 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 410 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 411 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 412 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( mem , (unsigned)(sizeof(float)), (unsigned) ((n1+1) * (n2+1) * sizeof(float)) , pFile);
# 413 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322161UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 414 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 415 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 416 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w = net->hidden_weights;
# 417 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n2 + 1) * (n3 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n2+1) * (n3+1) * sizeof(float)), 18030399740950322161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 418 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n2; i++) {
# 419 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n3; j++) {
# 420 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      dvalue = w[i][j];
# 421 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&mem[memcnt]); _from = (char *)(&dvalue); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 422 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 423 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 425 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 426 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( mem , sizeof(float), (unsigned) ((n2+1) * (n3+1) * sizeof(float)) , pFile);
# 427 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322161UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 428 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 429 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fclose(pFile);
# 430 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  rm_stack(false, 0UL, "bpnn_save", &____must_manage_bpnn_save, ____alias_loc_id_18, ____chimes_did_disable18, false); return;
# 431 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}

void bpnn_save(BPNN *net, char *filename) { (____chimes_replaying ? bpnn_save_resumable(net, filename) : bpnn_save_quick(net, filename)); }
# 434 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_read_quick(char *filename)
# 435 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{const int ____chimes_did_disable19 = new_stack((void *)(&bpnn_read), "bpnn_read", &____must_manage_bpnn_read, 1, 0, (size_t)(18030399740950322627UL)) ; ; ;
# 436 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  char *mem; ;
# 437 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *new_mem; ;
# 438 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int fd; int n1; int n2; int n3; int i; int j; int memcnt; ;
# 439 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 440 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if ((fd = open(filename, 0, 0644)) == -1) {
# 441 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     BPNN *____chimes_ret_var_10; ; ____chimes_ret_var_10 = ((__null)); rm_stack(true, 18030399740950322461UL, "bpnn_read", &____must_manage_bpnn_read, ____alias_loc_id_19, ____chimes_did_disable19, false); return ____chimes_ret_var_10; ;
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 443 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 444 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Reading '%s'\n", filename);
# 445 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 446 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n1, sizeof(int));
# 447 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n2, sizeof(int));
# 448 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n3, sizeof(int));
# 449 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_0: new_mem = ({ calling_npm("bpnn_internal_create", 0); bpnn_internal_create_npm(n1, n2, n3); });
# 450 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 451 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("'%s' contains a %dx%dx%d network\n", filename, n1, n2, n3);
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Reading input weights...");
# 453 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 454 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 455 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n1 + 1) * (n2 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n1+1) * (n2+1) * sizeof(float)), 18030399740950322471UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 456 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, mem, (n1+1) * (n2+1) * sizeof(float));
# 457 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n1; i++) {
# 458 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n2; j++) {
# 459 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&(new_mem->input_weights[i][j])); _from = (char *)(&mem[memcnt]); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 460 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 461 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 462 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 463 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322471UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 464 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 465 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Done\nReading hidden weights...");
# 466 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 467 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 468 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n2 + 1) * (n3 + 1) * sizeof(float))) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (unsigned) ((n2+1) * (n3+1) * sizeof(float)), 18030399740950322471UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 469 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, mem, (n2+1) * (n3+1) * sizeof(float));
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n2; i++) {
# 471 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n3; j++) {
# 472 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to; register char *_from; ; register int _i; register int _l; ; _to = (char *)(&(new_mem->hidden_weights[i][j])); _from = (char *)(&mem[memcnt]); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 473 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 474 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 475 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 476 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322471UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 477 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  close(fd);
# 478 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 479 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Done\n");
# 480 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 481 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_1: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(new_mem->input_prev_weights, n1, n2); });
# 482 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   call_lbl_2: ({ calling_npm("bpnn_zero_weights", 0); bpnn_zero_weights_npm(new_mem->hidden_prev_weights, n2, n3); });
# 483 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 484 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN *____chimes_ret_var_11; ; ____chimes_ret_var_11 = ((new_mem)); rm_stack(true, 18030399740950322461UL, "bpnn_read", &____must_manage_bpnn_read, ____alias_loc_id_19, ____chimes_did_disable19, false); return ____chimes_ret_var_11; ;
# 485 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
rm_stack(true, 18030399740950322461UL, "bpnn_read", &____must_manage_bpnn_read, ____alias_loc_id_19, ____chimes_did_disable19, false); }

BPNN *bpnn_read(char *filename) { return (____chimes_replaying ? bpnn_read_resumable(filename) : bpnn_read_quick(filename)); }
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float drnd_npm()
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_0; ____chimes_ret_var_0 = (((float) rand() / (float) 0x7fffffff)); return ____chimes_ret_var_0; ;
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float dpn1_npm()
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_1; ____chimes_ret_var_1 = (((drnd_npm() * 2.0) - 1.0)); return ____chimes_ret_var_1; ;
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float squash_npm(float x)
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float m;
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ____chimes_ret_var_2; ____chimes_ret_var_2 = ((1.0 / (1.0 + exp(-x)))); return ____chimes_ret_var_2; ;
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float *alloc_1d_dbl_npm(size_t n)
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float *new_mem;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = (float *) ({ void *____chimes_tmp_ptr = malloc(((n * sizeof(float))) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (n * sizeof (float)), 18030399740950320995UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (new_mem == __null) {
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("ALLOC_1D_DBL: Couldn't allocate array of floats\n");
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     float * ____chimes_ret_var_3; ____chimes_ret_var_3 = ((__null)); return ____chimes_ret_var_3; ;
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float * ____chimes_ret_var_4; ____chimes_ret_var_4 = ((new_mem)); return ____chimes_ret_var_4; ;
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 72 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
float **alloc_2d_dbl_npm(size_t m, size_t n)
# 73 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 74 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  size_t i;
# 75 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float **new_mem;
# 76 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 77 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = (float **) ({ void *____chimes_tmp_ptr = malloc(((m * sizeof(float *))) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (m * sizeof (float *)), 18030399740950321034UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 78 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (new_mem == __null) {
# 79 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("ALLOC_2D_DBL: Couldn't allocate array of dbl ptrs\n");
# 80 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     float ** ____chimes_ret_var_5; ____chimes_ret_var_5 = ((__null)); return ____chimes_ret_var_5; ;
# 81 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 82 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 83 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float *acc = alloc_1d_dbl_npm(m * n);
# 84 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i < m; i++) {
# 85 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    new_mem[i] = acc + (i * n);
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   float ** ____chimes_ret_var_6; ____chimes_ret_var_6 = ((new_mem)); return ____chimes_ret_var_6; ;
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 93 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_randomize_weights_npm(float **w, int m, int n)
# 94 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 95 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int i, j;
# 96 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 97 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= m; i++) {
# 98 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n; j++) {
# 99 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     w[i][j] = (float) rand()/2147483647;
# 100 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 101 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 102 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 103 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 105 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_randomize_row_npm(float *w, int m)
# 106 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 int i;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
 for (i = 0; i <= m; i++) {
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w[i] = 0.1;
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_zero_weights_npm(float **w, int m, int n)
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int i, j;
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= m; i++) {
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n; j++) {
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      w[i][j] = 0.0;
# 122 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_initialize_npm(int seed)
# 128 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Random number generator seed: %d\n", seed);
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  srand(seed);
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_internal_create_npm(int n_in, int n_hidden, int n_out)
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *newnet;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet = (BPNN *) ({ void *____chimes_tmp_ptr = malloc((sizeof(BPNN)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof (BPNN), 18030399740950322461UL, 0, 1, (int)sizeof(BPNN), 10, (int)__builtin_offsetof(BPNN, input_units), (int)__builtin_offsetof(BPNN, hidden_units), (int)__builtin_offsetof(BPNN, output_units), (int)__builtin_offsetof(BPNN, hidden_delta), (int)__builtin_offsetof(BPNN, output_delta), (int)__builtin_offsetof(BPNN, target), (int)__builtin_offsetof(BPNN, input_weights), (int)__builtin_offsetof(BPNN, hidden_weights), (int)__builtin_offsetof(BPNN, input_prev_weights), (int)__builtin_offsetof(BPNN, hidden_prev_weights)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if (newnet == __null) {
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    printf("BPNN_CREATE: Couldn't allocate neural network\n");
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     BPNN * ____chimes_ret_var_7; ____chimes_ret_var_7 = ((__null)); return ____chimes_ret_var_7; ;
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->input_n = n_in;
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_n = n_hidden;
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->output_n = n_out;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->input_units = alloc_1d_dbl_npm(n_in + 1);
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_units = alloc_1d_dbl_npm(n_hidden + 1);
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->output_units = alloc_1d_dbl_npm(n_out + 1);
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_delta = alloc_1d_dbl_npm(n_hidden + 1);
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->output_delta = alloc_1d_dbl_npm(n_out + 1);
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->target = alloc_1d_dbl_npm(n_out + 1);
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->input_weights = alloc_2d_dbl_npm(n_in + 1, n_hidden + 1);
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_weights = alloc_2d_dbl_npm(n_hidden + 1, n_out + 1);
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->input_prev_weights = alloc_2d_dbl_npm(n_in + 1, n_hidden + 1);
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet->hidden_prev_weights = alloc_2d_dbl_npm(n_hidden + 1, n_out + 1);
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN * ____chimes_ret_var_8; ____chimes_ret_var_8 = ((newnet)); return ____chimes_ret_var_8; ;
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_free_npm(BPNN *net)
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int n1, n2, i;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n1 = net->input_n;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n2 = net->hidden_n;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_units) - sizeof(void *))); }) ;
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_units) - sizeof(void *))); }) ;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->output_units) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->output_units) - sizeof(void *))); }) ;
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_delta) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_delta) - sizeof(void *))); }) ;
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->output_delta) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->output_delta) - sizeof(void *))); }) ;
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->target) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->target) - sizeof(void *))); }) ;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->input_weights[0]) - sizeof(void *))); }) ;
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_prev_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->input_prev_weights[0]) - sizeof(void *))); }) ;
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_weights) - sizeof(void *))); }) ;
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->input_prev_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->input_prev_weights) - sizeof(void *))); }) ;
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->hidden_weights[0]) - sizeof(void *))); }) ;
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_prev_weights[0]) - sizeof(void *)), 18030399740950321400UL);free((((unsigned char *)(char *)net->hidden_prev_weights[0]) - sizeof(void *))); }) ;
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 194 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 195 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_weights) - sizeof(void *))); }) ;
# 196 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net->hidden_prev_weights) - sizeof(void *)), 18030399740950321368UL);free((((unsigned char *)(char *)net->hidden_prev_weights) - sizeof(void *))); }) ;
# 197 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 198 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)(char *)net) - sizeof(void *)), 18030399740950321448UL);free((((unsigned char *)(char *)net) - sizeof(void *))); }) ;
# 199 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_create_npm(int n_in, int n_hidden, int n_out)
# 212 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 213 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 214 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *newnet;
# 215 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 216 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  newnet = bpnn_internal_create_npm(n_in, n_hidden, n_out);
# 217 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 218 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 219 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 220 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 221 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_randomize_weights_npm(newnet->input_weights, n_in, n_hidden);
# 222 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 223 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_randomize_weights_npm(newnet->hidden_weights, n_hidden, n_out);
# 224 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_zero_weights_npm(newnet->input_prev_weights, n_in, n_hidden);
# 225 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_zero_weights_npm(newnet->hidden_prev_weights, n_hidden, n_out);
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_randomize_row_npm(newnet->target, n_out);
# 227 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN * ____chimes_ret_var_9; ____chimes_ret_var_9 = ((newnet)); return ____chimes_ret_var_9; ;
# 228 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 231 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_layerforward_npm(float *l1, float *l2, float **conn, int n1, int n2)
# 232 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 233 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float sum;
# 234 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j, k;
# 235 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 236 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 237 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  l1[0] = 1.0;
# 238 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 239 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 240 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 241 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 242 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 243 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= n2; j++) {
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 245 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 246 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    sum = 0.0;
# 247 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 0; k <= n1; k++) {
# 248 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      sum += conn[k][j] * l1[k];
# 249 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 250 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    l2[j] = squash_npm(sum);
# 251 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 252 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 255 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_output_error_npm(float *delta, float *target, float *output, int nj, float *err)
# 256 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 257 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j;
# 258 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float o, t, errsum;
# 259 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  errsum = 0.0;
# 260 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= nj; j++) {
# 261 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    o = output[j];
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    t = target[j];
# 263 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    delta[j] = o * (1.0 - o) * (t - o);
# 264 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    errsum += (((delta[j]) > 0.0) ? (delta[j]) : (-(delta[j])));
# 265 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 266 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *err = errsum;
# 267 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 270 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_hidden_error_npm(float *delta_h,
# 271 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int nh,
# 272 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *delta_o,
# 273 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        int no,
# 274 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float **who,
# 275 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *hidden,
# 276 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
        float *err)
# 277 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 278 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int j, k;
# 279 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float h, sum, errsum;
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 281 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  errsum = 0.0;
# 282 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= nh; j++) {
# 283 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    h = hidden[j];
# 284 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    sum = 0.0;
# 285 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 1; k <= no; k++) {
# 286 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      sum += delta_o[k] * who[j][k];
# 287 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 288 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    delta_h[j] = h * (1.0 - h) * sum;
# 289 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    errsum += (((delta_h[j]) > 0.0) ? (delta_h[j]) : (-(delta_h[j])));
# 290 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 291 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *err = errsum;
# 292 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 295 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_adjust_weights_npm(float *delta, int ndelta, float *ly, int nly, float **w, float **oldw)
# 296 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 297 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float new_dw;
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int k, j;
# 299 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  ly[0] = 1.0;
# 300 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 301 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 302 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 303 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 304 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 305 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 306 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
#pragma omp parallel for shared(oldw, w, delta) private(j, k, new_dw) firstprivate(ndelta, nly)
# 307 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 308 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 309 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 310 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (j = 1; j <= ndelta; j++) {
# 311 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (k = 0; k <= nly; k++) {
# 312 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      new_dw = ((0.3 * delta[j] * ly[k]) + (0.3 * oldw[k][j]));
# 313 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   w[k][j] += new_dw;
# 314 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   oldw[k][j] = new_dw;
# 315 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 317 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 320 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_feedforward_npm(BPNN *net)
# 321 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 322 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int in, hid, out;
# 323 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 324 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  in = net->input_n;
# 325 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  hid = net->hidden_n;
# 326 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  out = net->output_n;
# 327 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 328 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 329 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_layerforward_npm(net->input_units, net->hidden_units, net->input_weights, in, hid);
# 331 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_layerforward_npm(net->hidden_units, net->output_units, net->hidden_weights, hid, out);
# 333 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 337 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_train_npm(BPNN *net, float *eo, float *eh)
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 339 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int in, hid, out;
# 340 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float out_err, hid_err;
# 341 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 342 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  in = net->input_n;
# 343 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  hid = net->hidden_n;
# 344 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  out = net->output_n;
# 345 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 346 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 347 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_layerforward_npm(net->input_units, net->hidden_units, net->input_weights, in, hid);
# 349 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_layerforward_npm(net->hidden_units, net->output_units, net->hidden_weights, hid, out);
# 351 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 353 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_output_error_npm(net->output_delta, net->target, net->output_units, out, &out_err);
# 355 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_hidden_error_npm(net->hidden_delta, hid, net->output_delta, out, net->hidden_weights, net->hidden_units, &hid_err);
# 357 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *eo = out_err;
# 358 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  *eh = hid_err;
# 359 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 360 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 361 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_adjust_weights_npm(net->output_delta, out, net->hidden_units, hid, net->hidden_weights, net->hidden_prev_weights);
# 363 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_adjust_weights_npm(net->hidden_delta, hid, net->input_units, in, net->input_weights, net->input_prev_weights);
# 365 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 366 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 371 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
void bpnn_save_npm(BPNN *net, char *filename)
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 373 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int n1, n2, n3, i, j, memcnt;
# 374 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  float dvalue, **w;
# 375 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  char *mem;
# 376 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 377 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  FILE *pFile;
# 378 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  pFile = fopen( filename, "w+" );
# 387 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 387 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  n1 = net->input_n; n2 = net->hidden_n; n3 = net->output_n;
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Saving %dx%dx%d network to '%s'\n", n1, n2, n3, filename);
# 389 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 390 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 391 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 392 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 393 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 394 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 395 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n1 , sizeof(char), sizeof(char), pFile);
# 396 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n2 , sizeof(char), sizeof(char), pFile);
# 397 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( (char *) &n3 , sizeof(char), sizeof(char), pFile);
# 398 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 399 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 400 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 401 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 402 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w = net->input_weights;
# 403 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n1 + 1) * (n2 + 1) * sizeof(float))) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (unsigned) ((n1+1) * (n2+1) * sizeof(float)), 18030399740950322161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 404 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n1; i++) {
# 405 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n2; j++) {
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      dvalue = w[i][j];
# 407 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to,*_from; register int _i,_l; _to = (char *)(&mem[memcnt]); _from = (char *)(&dvalue); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 408 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 409 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 410 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 411 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 412 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( mem , (unsigned)(sizeof(float)), (unsigned) ((n1+1) * (n2+1) * sizeof(float)) , pFile);
# 413 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322161UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 414 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 415 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 416 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  w = net->hidden_weights;
# 417 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n2 + 1) * (n3 + 1) * sizeof(float))) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (unsigned) ((n2+1) * (n3+1) * sizeof(float)), 18030399740950322161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 418 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n2; i++) {
# 419 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n3; j++) {
# 420 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      dvalue = w[i][j];
# 421 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to,*_from; register int _i,_l; _to = (char *)(&mem[memcnt]); _from = (char *)(&dvalue); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 422 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 423 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 425 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 426 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fwrite( mem , sizeof(float), (unsigned) ((n2+1) * (n3+1) * sizeof(float)) , pFile);
# 427 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322161UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 428 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 429 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  fclose(pFile);
# 430 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  return;
# 431 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}
# 434 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
BPNN *bpnn_read_npm(char *filename)
# 435 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
{
# 436 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  char *mem;
# 437 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  BPNN *new_mem;
# 438 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  int fd, n1, n2, n3, i, j, memcnt;
# 439 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 440 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  if ((fd = open(filename, 0, 0644)) == -1) {
# 441 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
     BPNN * ____chimes_ret_var_10; ____chimes_ret_var_10 = ((__null)); return ____chimes_ret_var_10; ;
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 443 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 444 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Reading '%s'\n", filename);
# 445 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 446 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n1, sizeof(int));
# 447 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n2, sizeof(int));
# 448 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, (char *) &n3, sizeof(int));
# 449 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  new_mem = bpnn_internal_create_npm(n1, n2, n3);
# 450 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 451 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("'%s' contains a %dx%dx%d network\n", filename, n1, n2, n3);
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Reading input weights...");
# 453 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 454 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 455 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n1 + 1) * (n2 + 1) * sizeof(float))) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (unsigned) ((n1+1) * (n2+1) * sizeof(float)), 18030399740950322471UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 456 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, mem, (n1+1) * (n2+1) * sizeof(float));
# 457 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n1; i++) {
# 458 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n2; j++) {
# 459 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to,*_from; register int _i,_l; _to = (char *)(&(new_mem->input_weights[i][j])); _from = (char *)(&mem[memcnt]); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 460 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 461 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 462 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 463 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322471UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 464 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 465 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Done\nReading hidden weights...");
# 466 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 467 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  memcnt = 0;
# 468 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  mem = (char *) ({ void *____chimes_tmp_ptr = malloc(((unsigned int)((n2 + 1) * (n3 + 1) * sizeof(float))) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (unsigned) ((n2+1) * (n3+1) * sizeof(float)), 18030399740950322471UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 469 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  read(fd, mem, (n2+1) * (n3+1) * sizeof(float));
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  for (i = 0; i <= n2; i++) {
# 471 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    for (j = 0; j <= n3; j++) {
# 472 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      { register char *_to,*_from; register int _i,_l; _to = (char *)(&(new_mem->hidden_weights[i][j])); _from = (char *)(&mem[memcnt]); _l = (sizeof(float)); for (_i = 0; _i < _l; _i++) { *_to++ = *_from++; };};
# 473 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
      memcnt += sizeof(float);
# 474 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
    }
# 475 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  }
# 476 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   ({ free_helper((((unsigned char *)mem) - sizeof(void *)), 18030399740950322471UL);free((((unsigned char *)mem) - sizeof(void *))); }) ;
# 477 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  close(fd);
# 478 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 479 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  printf("Done\n");
# 480 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 481 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_zero_weights_npm(new_mem->input_prev_weights, n1, n2);
# 482 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
  bpnn_zero_weights_npm(new_mem->hidden_prev_weights, n2, n3);
# 483 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
# 484 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
   BPNN * ____chimes_ret_var_11; ____chimes_ret_var_11 = ((new_mem)); return ____chimes_ret_var_11; ;
# 485 "/gpfs-biou/jmg3/rodinia_3.0/openmp/backprop/backprop.c"
}





static int module_init() {
    init_module(18030399740950320945UL, 74, 20, 3, 20, 20, 0, 20, 30, 0, 3,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)0, (18030399740950320945UL + 1UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)0, (18030399740950320945UL + 11UL),
                           &____alias_loc_id_2, (unsigned)2, (unsigned)0, (unsigned)0, (18030399740950320945UL + 21UL), (18030399740950320945UL + 23UL),
                           &____alias_loc_id_3, (unsigned)5, (unsigned)0, (unsigned)0, (18030399740950320945UL + 40UL), (18030399740950320945UL + 41UL), (18030399740950320945UL + 42UL), (18030399740950320945UL + 43UL), (18030399740950320945UL + 44UL),
                           &____alias_loc_id_4, (unsigned)9, (unsigned)0, (unsigned)0, (18030399740950320945UL + 73UL), (18030399740950320945UL + 74UL), (18030399740950320945UL + 75UL), (18030399740950320945UL + 76UL), (18030399740950320945UL + 77UL), (18030399740950320945UL + 78UL), (18030399740950320945UL + 79UL), (18030399740950320945UL + 80UL), (18030399740950320945UL + 89UL),
                           &____alias_loc_id_5, (unsigned)6, (unsigned)0, (unsigned)0, (18030399740950320945UL + 137UL), (18030399740950320945UL + 138UL), (18030399740950320945UL + 139UL), (18030399740950320945UL + 140UL), (18030399740950320945UL + 141UL), (18030399740950320945UL + 171UL),
                           &____alias_loc_id_6, (unsigned)4, (unsigned)0, (unsigned)0, (18030399740950320945UL + 188UL), (18030399740950320945UL + 189UL), (18030399740950320945UL + 190UL), (18030399740950320945UL + 213UL),
                           &____alias_loc_id_7, (unsigned)6, (unsigned)0, (unsigned)0, (18030399740950320945UL + 215UL), (18030399740950320945UL + 216UL), (18030399740950320945UL + 217UL), (18030399740950320945UL + 218UL), (18030399740950320945UL + 219UL), (18030399740950320945UL + 246UL),
                           &____alias_loc_id_8, (unsigned)1, (unsigned)0, (unsigned)0, (18030399740950320945UL + 263UL),
                           &____alias_loc_id_9, (unsigned)8, (unsigned)0, (unsigned)0, (18030399740950320945UL + 273UL), (18030399740950320945UL + 274UL), (18030399740950320945UL + 275UL), (18030399740950320945UL + 276UL), (18030399740950320945UL + 277UL), (18030399740950320945UL + 278UL), (18030399740950320945UL + 279UL), (18030399740950320945UL + 1516UL),
                            &____alias_loc_id_10, (unsigned)3, (unsigned)0, (unsigned)0, (18030399740950320945UL + 404UL), (18030399740950320945UL + 405UL), (18030399740950320945UL + 406UL),
                            &____alias_loc_id_11, (unsigned)5, (unsigned)0, (unsigned)0, (18030399740950320945UL + 505UL), (18030399740950320945UL + 506UL), (18030399740950320945UL + 507UL), (18030399740950320945UL + 508UL), (18030399740950320945UL + 509UL),
                            &____alias_loc_id_12, (unsigned)10, (unsigned)0, (unsigned)0, (18030399740950320945UL + 559UL), (18030399740950320945UL + 560UL), (18030399740950320945UL + 561UL), (18030399740950320945UL + 562UL), (18030399740950320945UL + 563UL), (18030399740950320945UL + 564UL), (18030399740950320945UL + 565UL), (18030399740950320945UL + 566UL), (18030399740950320945UL + 632UL), (18030399740950320945UL + 633UL),
                            &____alias_loc_id_13, (unsigned)11, (unsigned)0, (unsigned)0, (18030399740950320945UL + 637UL), (18030399740950320945UL + 638UL), (18030399740950320945UL + 639UL), (18030399740950320945UL + 640UL), (18030399740950320945UL + 641UL), (18030399740950320945UL + 642UL), (18030399740950320945UL + 643UL), (18030399740950320945UL + 644UL), (18030399740950320945UL + 645UL), (18030399740950320945UL + 712UL), (18030399740950320945UL + 734UL),
                            &____alias_loc_id_14, (unsigned)14, (unsigned)0, (unsigned)0, (18030399740950320945UL + 735UL), (18030399740950320945UL + 736UL), (18030399740950320945UL + 737UL), (18030399740950320945UL + 738UL), (18030399740950320945UL + 739UL), (18030399740950320945UL + 740UL), (18030399740950320945UL + 741UL), (18030399740950320945UL + 742UL), (18030399740950320945UL + 743UL), (18030399740950320945UL + 744UL), (18030399740950320945UL + 745UL), (18030399740950320945UL + 746UL), (18030399740950320945UL + 840UL), (18030399740950320945UL + 864UL),
                            &____alias_loc_id_15, (unsigned)12, (unsigned)0, (unsigned)0, (18030399740950320945UL + 865UL), (18030399740950320945UL + 866UL), (18030399740950320945UL + 867UL), (18030399740950320945UL + 868UL), (18030399740950320945UL + 869UL), (18030399740950320945UL + 870UL), (18030399740950320945UL + 871UL), (18030399740950320945UL + 872UL), (18030399740950320945UL + 873UL), (18030399740950320945UL + 924UL), (18030399740950320945UL + 939UL), (18030399740950320945UL + 967UL),
                            &____alias_loc_id_16, (unsigned)4, (unsigned)0, (unsigned)0, (18030399740950320945UL + 971UL), (18030399740950320945UL + 972UL), (18030399740950320945UL + 973UL), (18030399740950320945UL + 974UL),
                            &____alias_loc_id_17, (unsigned)8, (unsigned)0, (unsigned)0, (18030399740950320945UL + 1018UL), (18030399740950320945UL + 1019UL), (18030399740950320945UL + 1020UL), (18030399740950320945UL + 1021UL), (18030399740950320945UL + 1022UL), (18030399740950320945UL + 1023UL), (18030399740950320945UL + 1137UL), (18030399740950320945UL + 1138UL),
                            &____alias_loc_id_18, (unsigned)22, (unsigned)0, (unsigned)0, (18030399740950320945UL + 1139UL), (18030399740950320945UL + 1140UL), (18030399740950320945UL + 1141UL), (18030399740950320945UL + 1142UL), (18030399740950320945UL + 1143UL), (18030399740950320945UL + 1144UL), (18030399740950320945UL + 1145UL), (18030399740950320945UL + 1146UL), (18030399740950320945UL + 1147UL), (18030399740950320945UL + 1148UL), (18030399740950320945UL + 1149UL), (18030399740950320945UL + 1150UL), (18030399740950320945UL + 1151UL), (18030399740950320945UL + 1152UL), (18030399740950320945UL + 1153UL), (18030399740950320945UL + 1154UL), (18030399740950320945UL + 1155UL), (18030399740950320945UL + 1156UL), (18030399740950320945UL + 1157UL), (18030399740950320945UL + 1158UL), (18030399740950320945UL + 1174UL), (18030399740950320945UL + 1216UL),
                            &____alias_loc_id_19, (unsigned)23, (unsigned)0, (unsigned)0, (18030399740950320945UL + 1410UL), (18030399740950320945UL + 1411UL), (18030399740950320945UL + 1412UL), (18030399740950320945UL + 1413UL), (18030399740950320945UL + 1414UL), (18030399740950320945UL + 1415UL), (18030399740950320945UL + 1416UL), (18030399740950320945UL + 1417UL), (18030399740950320945UL + 1418UL), (18030399740950320945UL + 1419UL), (18030399740950320945UL + 1420UL), (18030399740950320945UL + 1421UL), (18030399740950320945UL + 1422UL), (18030399740950320945UL + 1423UL), (18030399740950320945UL + 1424UL), (18030399740950320945UL + 1425UL), (18030399740950320945UL + 1426UL), (18030399740950320945UL + 1427UL), (18030399740950320945UL + 1428UL), (18030399740950320945UL + 1429UL), (18030399740950320945UL + 1430UL), (18030399740950320945UL + 1520UL), (18030399740950320945UL + 1526UL),
                            "bpnn_internal_create", 0, "_Z20bpnn_internal_createiii", "_Z24bpnn_internal_create_npmiii", 0, 3, 0UL, 0UL, 0UL, (18030399740950320945UL + 1516UL), 12, "malloc", 1, 0UL, (18030399740950320945UL + 1516UL), "printf", 1, (18030399740950320945UL + 1692UL), 0UL, "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 1518UL), "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 1518UL), "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 1518UL), "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 1518UL), "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 1518UL), "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 1518UL), "alloc_2d_dbl", 2, 0UL, 0UL, (18030399740950320945UL + 1518UL), "alloc_2d_dbl", 2, 0UL, 0UL, (18030399740950320945UL + 1518UL), "alloc_2d_dbl", 2, 0UL, 0UL, (18030399740950320945UL + 1518UL), "alloc_2d_dbl", 2, 0UL, 0UL, (18030399740950320945UL + 1518UL),
                            "dpn1", 0, "_Z4dpn1v", "_Z8dpn1_npmv", 0, 0, 0UL, 1, "drnd", 0, 0UL,
                            "bpnn_zero_weights", 0, "_Z17bpnn_zero_weightsPPfii", "_Z21bpnn_zero_weights_npmPPfii", 0, 3, (18030399740950320945UL + 260UL), 0UL, 0UL, 0UL, 0,
                            "bpnn_hidden_error", 0, "_Z17bpnn_hidden_errorPfiS_iPS_S_S_", "_Z21bpnn_hidden_error_npmPfiS_iPS_S_S_", 0, 7, (18030399740950320945UL + 840UL), 0UL, (18030399740950320945UL + 860UL), 0UL, (18030399740950320945UL + 862UL), (18030399740950320945UL + 863UL), (18030399740950320945UL + 864UL), 0UL, 0,
                            "bpnn_layerforward", 0, "_Z17bpnn_layerforwardPfS_PS_ii", "_Z21bpnn_layerforward_npmPfS_PS_ii", 0, 5, (18030399740950320945UL + 632UL), (18030399740950320945UL + 633UL), (18030399740950320945UL + 634UL), 0UL, 0UL, 0UL, 1, "squash", 1, 0UL, 0UL,
                            "bpnn_initialize", 0, "_Z15bpnn_initializei", "_Z19bpnn_initialize_npmi", 0, 1, 0UL, 0UL, 2, "printf", 2, (18030399740950320945UL + 1691UL), 0UL, 0UL, "srand", 1, 0UL, 0UL,
                            "bpnn_read", 0, "_Z9bpnn_readPc", "_Z13bpnn_read_npmPc", 0, 1, (18030399740950320945UL + 1682UL), (18030399740950320945UL + 1516UL), 19, "open", 3, (18030399740950320945UL + 1682UL), 0UL, 0UL, 0UL, "printf", 2, (18030399740950320945UL + 1695UL), (18030399740950320945UL + 1682UL), 0UL, "read", 3, 0UL, (18030399740950320945UL + 1415UL), 0UL, 0UL, "read", 3, 0UL, (18030399740950320945UL + 1416UL), 0UL, 0UL, "read", 3, 0UL, (18030399740950320945UL + 1417UL), 0UL, 0UL, "bpnn_internal_create", 3, 0UL, 0UL, 0UL, (18030399740950320945UL + 1516UL), "printf", 5, (18030399740950320945UL + 1691UL), (18030399740950320945UL + 1682UL), 0UL, 0UL, 0UL, 0UL, "printf", 1, (18030399740950320945UL + 1697UL), 0UL, "malloc", 1, 0UL, (18030399740950320945UL + 1526UL), "read", 3, 0UL, (18030399740950320945UL + 1526UL), 0UL, 0UL, "free", 1, (18030399740950320945UL + 1526UL), 0UL, "printf", 1, (18030399740950320945UL + 1698UL), 0UL, "malloc", 1, 0UL, (18030399740950320945UL + 1526UL), "read", 3, 0UL, (18030399740950320945UL + 1526UL), 0UL, 0UL, "free", 1, (18030399740950320945UL + 1526UL), 0UL, "close", 1, 0UL, 0UL, "printf", 1, (18030399740950320945UL + 1699UL), 0UL, "bpnn_zero_weights", 3, (18030399740950320945UL + 1518UL), 0UL, 0UL, 0UL, "bpnn_zero_weights", 3, (18030399740950320945UL + 1518UL), 0UL, 0UL, 0UL,
                            "bpnn_train", 0, "_Z10bpnn_trainP4BPNNPfS1_", "_Z14bpnn_train_npmP4BPNNPfS1_", 0, 3, (18030399740950320945UL + 1136UL), (18030399740950320945UL + 1137UL), (18030399740950320945UL + 1138UL), 0UL, 6, "bpnn_layerforward", 5, (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), 0UL, 0UL, 0UL, "bpnn_layerforward", 5, (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), 0UL, 0UL, 0UL, "bpnn_output_error", 5, (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1024UL), 0UL, "bpnn_hidden_error", 7, (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1025UL), 0UL, "bpnn_adjust_weights", 6, (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), 0UL, "bpnn_adjust_weights", 6, (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1051UL), 0UL, (18030399740950320945UL + 1051UL), (18030399740950320945UL + 1051UL), 0UL,
                            "squash", 0, "_Z6squashf", "_Z10squash_npmf", 0, 1, 0UL, 0UL, 1, "exp", 1, 0UL, 0UL,
                            "alloc_1d_dbl", 0, "_Z12alloc_1d_dblm", "_Z16alloc_1d_dbl_npmm", 0, 1, 0UL, (18030399740950320945UL + 50UL), 2, "malloc", 1, 0UL, (18030399740950320945UL + 50UL), "printf", 1, (18030399740950320945UL + 1689UL), 0UL,
                            "bpnn_adjust_weights", 0, "_Z19bpnn_adjust_weightsPfiS_iPS_S0_", "_Z23bpnn_adjust_weights_npmPfiS_iPS_S0_", 0, 6, (18030399740950320945UL + 965UL), 0UL, (18030399740950320945UL + 967UL), 0UL, (18030399740950320945UL + 969UL), (18030399740950320945UL + 970UL), 0UL, 0,
                            "bpnn_randomize_weights", 0, "_Z22bpnn_randomize_weightsPPfii", "_Z26bpnn_randomize_weights_npmPPfii", 0, 3, (18030399740950320945UL + 185UL), 0UL, 0UL, 0UL, 1, "rand", 0, 0UL,
                            "bpnn_save", 0, "_Z9bpnn_saveP4BPNNPc", "_Z13bpnn_save_npmP4BPNNPc", 0, 2, (18030399740950320945UL + 1401UL), (18030399740950320945UL + 1402UL), 0UL, 12, "fopen", 2, (18030399740950320945UL + 1402UL), (18030399740950320945UL + 1693UL), (18030399740950320945UL + 1174UL), "printf", 5, (18030399740950320945UL + 1694UL), 0UL, 0UL, 0UL, (18030399740950320945UL + 1402UL), 0UL, "fwrite", 4, (18030399740950320945UL + 1141UL), 0UL, 0UL, (18030399740950320945UL + 1174UL), 0UL, "fwrite", 4, (18030399740950320945UL + 1142UL), 0UL, 0UL, (18030399740950320945UL + 1174UL), 0UL, "fwrite", 4, (18030399740950320945UL + 1143UL), 0UL, 0UL, (18030399740950320945UL + 1174UL), 0UL, "malloc", 1, 0UL, (18030399740950320945UL + 1216UL), "fwrite", 4, (18030399740950320945UL + 1216UL), 0UL, 0UL, (18030399740950320945UL + 1174UL), 0UL, "free", 1, (18030399740950320945UL + 1216UL), 0UL, "malloc", 1, 0UL, (18030399740950320945UL + 1216UL), "fwrite", 4, (18030399740950320945UL + 1216UL), 0UL, 0UL, (18030399740950320945UL + 1174UL), 0UL, "free", 1, (18030399740950320945UL + 1216UL), 0UL, "fclose", 1, (18030399740950320945UL + 1174UL), 0UL,
                            "bpnn_feedforward", 0, "_Z16bpnn_feedforwardP4BPNN", "_Z20bpnn_feedforward_npmP4BPNN", 0, 1, (18030399740950320945UL + 1017UL), 0UL, 2, "bpnn_layerforward", 5, (18030399740950320945UL + 994UL), (18030399740950320945UL + 994UL), (18030399740950320945UL + 994UL), 0UL, 0UL, 0UL, "bpnn_layerforward", 5, (18030399740950320945UL + 994UL), (18030399740950320945UL + 994UL), (18030399740950320945UL + 994UL), 0UL, 0UL, 0UL,
                            "bpnn_output_error", 0, "_Z17bpnn_output_errorPfS_S_iS_", "_Z21bpnn_output_error_npmPfS_S_iS_", 0, 5, (18030399740950320945UL + 712UL), (18030399740950320945UL + 731UL), (18030399740950320945UL + 732UL), 0UL, (18030399740950320945UL + 734UL), 0UL, 0,
                            "bpnn_randomize_row", 0, "_Z18bpnn_randomize_rowPfi", "_Z22bpnn_randomize_row_npmPfi", 0, 2, (18030399740950320945UL + 213UL), 0UL, 0UL, 0,
                            "bpnn_free", 0, "_Z9bpnn_freeP4BPNN", "_Z13bpnn_free_npmP4BPNN", 0, 1, (18030399740950320945UL + 503UL), 0UL, 15, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 455UL), 0UL, "free", 1, (18030399740950320945UL + 455UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 455UL), 0UL, "free", 1, (18030399740950320945UL + 455UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 423UL), 0UL, "free", 1, (18030399740950320945UL + 503UL), 0UL,
                            "alloc_2d_dbl", 0, "_Z12alloc_2d_dblmm", "_Z16alloc_2d_dbl_npmmm", 0, 2, 0UL, 0UL, (18030399740950320945UL + 89UL), 3, "malloc", 1, 0UL, (18030399740950320945UL + 89UL), "printf", 1, (18030399740950320945UL + 1690UL), 0UL, "alloc_1d_dbl", 1, 0UL, (18030399740950320945UL + 113UL),
                            "drnd", 0, "_Z4drndv", "_Z8drnd_npmv", 0, 0, 0UL, 1, "rand", 0, 0UL,
                            "bpnn_create", 0, "_Z11bpnn_createiii", "_Z15bpnn_create_npmiii", 0, 3, 0UL, 0UL, 0UL, (18030399740950320945UL + 520UL), 6, "bpnn_internal_create", 3, 0UL, 0UL, 0UL, (18030399740950320945UL + 520UL), "bpnn_randomize_weights", 3, (18030399740950320945UL + 524UL), 0UL, 0UL, 0UL, "bpnn_randomize_weights", 3, (18030399740950320945UL + 524UL), 0UL, 0UL, 0UL, "bpnn_zero_weights", 3, (18030399740950320945UL + 524UL), 0UL, 0UL, 0UL, "bpnn_zero_weights", 3, (18030399740950320945UL + 524UL), 0UL, 0UL, 0UL, "bpnn_randomize_row", 2, (18030399740950320945UL + 524UL), 0UL, 0UL,
                           "bpnn_internal_create", &(____chimes_does_checkpoint_bpnn_internal_create_npm),
                           "dpn1", &(____chimes_does_checkpoint_dpn1_npm),
                           "bpnn_zero_weights", &(____chimes_does_checkpoint_bpnn_zero_weights_npm),
                           "bpnn_hidden_error", &(____chimes_does_checkpoint_bpnn_hidden_error_npm),
                           "bpnn_layerforward", &(____chimes_does_checkpoint_bpnn_layerforward_npm),
                           "bpnn_initialize", &(____chimes_does_checkpoint_bpnn_initialize_npm),
                           "bpnn_read", &(____chimes_does_checkpoint_bpnn_read_npm),
                           "bpnn_train", &(____chimes_does_checkpoint_bpnn_train_npm),
                           "squash", &(____chimes_does_checkpoint_squash_npm),
                           "alloc_1d_dbl", &(____chimes_does_checkpoint_alloc_1d_dbl_npm),
                           "bpnn_adjust_weights", &(____chimes_does_checkpoint_bpnn_adjust_weights_npm),
                           "bpnn_randomize_weights", &(____chimes_does_checkpoint_bpnn_randomize_weights_npm),
                           "bpnn_save", &(____chimes_does_checkpoint_bpnn_save_npm),
                           "bpnn_feedforward", &(____chimes_does_checkpoint_bpnn_feedforward_npm),
                           "bpnn_output_error", &(____chimes_does_checkpoint_bpnn_output_error_npm),
                           "bpnn_randomize_row", &(____chimes_does_checkpoint_bpnn_randomize_row_npm),
                           "bpnn_free", &(____chimes_does_checkpoint_bpnn_free_npm),
                           "alloc_2d_dbl", &(____chimes_does_checkpoint_alloc_2d_dbl_npm),
                           "drnd", &(____chimes_does_checkpoint_drnd_npm),
                           "bpnn_create", &(____chimes_does_checkpoint_bpnn_create_npm),
                             (18030399740950320945UL + 740UL), (18030399740950320945UL + 863UL),
                             (18030399740950320945UL + 741UL), (18030399740950320945UL + 864UL),
                             (18030399740950320945UL + 1140UL), (18030399740950320945UL + 1402UL),
                             (18030399740950320945UL + 215UL), (18030399740950320945UL + 260UL),
                             (18030399740950320945UL + 559UL), (18030399740950320945UL + 632UL),
                             (18030399740950320945UL + 1205UL), (18030399740950320945UL + 1236UL),
                             (18030399740950320945UL + 1148UL), (18030399740950320945UL + 1205UL),
                             (18030399740950320945UL + 1149UL), (18030399740950320945UL + 1216UL),
                             (18030399740950320945UL + 273UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 137UL), (18030399740950320945UL + 185UL),
                             (18030399740950320945UL + 870UL), (18030399740950320945UL + 970UL),
                             (18030399740950320945UL + 277UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 278UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 279UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 80UL), (18030399740950320945UL + 89UL),
                             (18030399740950320945UL + 1516UL), (18030399740950320945UL + 1518UL),
                             (18030399740950320945UL + 1421UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 1423UL), (18030399740950320945UL + 1526UL),
                             (18030399740950320945UL + 1422UL), (18030399740950320945UL + 1520UL),
                             (18030399740950320945UL + 1401UL), (18030399740950320945UL + 1205UL),
                             (18030399740950320945UL + 971UL), (18030399740950320945UL + 1017UL),
                             (18030399740950320945UL + 970UL), (18030399740950320945UL + 924UL),
                             (18030399740950320945UL + 1155UL), (18030399740950320945UL + 1216UL),
                             (18030399740950320945UL + 44UL), (18030399740950320945UL + 50UL),
                             (18030399740950320945UL + 42UL), (18030399740950320945UL + 50UL),
                             (18030399740950320945UL + 43UL), (18030399740950320945UL + 50UL),
                             (18030399740950320945UL + 40UL), (18030399740950320945UL + 50UL),
                             (18030399740950320945UL + 638UL), (18030399740950320945UL + 731UL),
                             (18030399740950320945UL + 404UL), (18030399740950320945UL + 503UL),
                             (18030399740950320945UL + 520UL), (18030399740950320945UL + 524UL),
                             (18030399740950320945UL + 1019UL), (18030399740950320945UL + 1137UL),
                             (18030399740950320945UL + 508UL), (18030399740950320945UL + 520UL),
                             (18030399740950320945UL + 185UL), (18030399740950320945UL + 171UL),
                             (18030399740950320945UL + 739UL), (18030399740950320945UL + 862UL),
                             (18030399740950320945UL + 735UL), (18030399740950320945UL + 840UL),
                             (18030399740950320945UL + 423UL), (18030399740950320945UL + 455UL),
                             (18030399740950320945UL + 1017UL), (18030399740950320945UL + 994UL),
                             (18030399740950320945UL + 503UL), (18030399740950320945UL + 423UL),
                             (18030399740950320945UL + 1139UL), (18030399740950320945UL + 1401UL),
                             (18030399740950320945UL + 1156UL), (18030399740950320945UL + 1147UL),
                             (18030399740950320945UL + 634UL), (18030399740950320945UL + 602UL),
                             (18030399740950320945UL + 737UL), (18030399740950320945UL + 860UL),
                             (18030399740950320945UL + 637UL), (18030399740950320945UL + 712UL),
                             (18030399740950320945UL + 560UL), (18030399740950320945UL + 633UL),
                             (18030399740950320945UL + 561UL), (18030399740950320945UL + 634UL),
                             (18030399740950320945UL + 509UL), (18030399740950320945UL + 520UL),
                             (18030399740950320945UL + 1151UL), (18030399740950320945UL + 1216UL),
                             (18030399740950320945UL + 1136UL), (18030399740950320945UL + 1051UL),
                             (18030399740950320945UL + 1150UL), (18030399740950320945UL + 1174UL),
                             (18030399740950320945UL + 77UL), (18030399740950320945UL + 89UL),
                             (18030399740950320945UL + 260UL), (18030399740950320945UL + 246UL),
                             (18030399740950320945UL + 73UL), (18030399740950320945UL + 89UL),
                             (18030399740950320945UL + 1427UL), (18030399740950320945UL + 1526UL),
                             (18030399740950320945UL + 1152UL), (18030399740950320945UL + 1147UL),
                             (18030399740950320945UL + 188UL), (18030399740950320945UL + 213UL),
                             (18030399740950320945UL + 79UL), (18030399740950320945UL + 113UL),
                             (18030399740950320945UL + 78UL), (18030399740950320945UL + 89UL),
                             (18030399740950320945UL + 869UL), (18030399740950320945UL + 969UL),
                             (18030399740950320945UL + 1426UL), (18030399740950320945UL + 1520UL),
                             (18030399740950320945UL + 1018UL), (18030399740950320945UL + 1136UL),
                             (18030399740950320945UL + 1020UL), (18030399740950320945UL + 1138UL),
                             (18030399740950320945UL + 1430UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 862UL), (18030399740950320945UL + 797UL),
                             (18030399740950320945UL + 865UL), (18030399740950320945UL + 965UL),
                             (18030399740950320945UL + 969UL), (18030399740950320945UL + 939UL),
                             (18030399740950320945UL + 867UL), (18030399740950320945UL + 967UL),
                             (18030399740950320945UL + 641UL), (18030399740950320945UL + 734UL),
                             (18030399740950320945UL + 89UL), (18030399740950320945UL + 113UL),
                             (18030399740950320945UL + 1518UL), (18030399740950320945UL + 1520UL),
                             (18030399740950320945UL + 1410UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 1411UL), (18030399740950320945UL + 1682UL),
                             (18030399740950320945UL + 1412UL), (18030399740950320945UL + 1526UL),
                             (18030399740950320945UL + 1413UL), (18030399740950320945UL + 1516UL),
                             (18030399740950320945UL + 639UL), (18030399740950320945UL + 732UL),
                     "BPNN", 768UL, 13, "int", (int)__builtin_offsetof (BPNN, input_n), "int", (int)__builtin_offsetof (BPNN, hidden_n), "int", (int)__builtin_offsetof (BPNN, output_n), "float*", (int)__builtin_offsetof (BPNN, input_units), "float*", (int)__builtin_offsetof (BPNN, hidden_units), "float*", (int)__builtin_offsetof (BPNN, output_units), "float*", (int)__builtin_offsetof (BPNN, hidden_delta), "float*", (int)__builtin_offsetof (BPNN, output_delta), "float*", (int)__builtin_offsetof (BPNN, target), "float**", (int)__builtin_offsetof (BPNN, input_weights), "float**", (int)__builtin_offsetof (BPNN, hidden_weights), "float**", (int)__builtin_offsetof (BPNN, input_prev_weights), "float**", (int)__builtin_offsetof (BPNN, hidden_prev_weights),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                             "bpnn_internal_create", "_Z20bpnn_internal_createiii", 0, 10, "alloc_1d_dbl", "alloc_1d_dbl", "alloc_1d_dbl", "alloc_1d_dbl", "alloc_1d_dbl", "alloc_1d_dbl", "alloc_2d_dbl", "alloc_2d_dbl", "alloc_2d_dbl", "alloc_2d_dbl",
                             "dpn1", "_Z4dpn1v", 0, 1, "drnd",
                             "bpnn_zero_weights", "_Z17bpnn_zero_weightsPPfii", 0, 0,
                             "bpnn_hidden_error", "_Z17bpnn_hidden_errorPfiS_iPS_S_S_", 0, 0,
                             "bpnn_layerforward", "_Z17bpnn_layerforwardPfS_PS_ii", 0, 1, "squash",
                             "bpnn_initialize", "_Z15bpnn_initializei", 0, 0,
                             "bpnn_read", "_Z9bpnn_readPc", 0, 3, "bpnn_internal_create", "bpnn_zero_weights", "bpnn_zero_weights",
                             "bpnn_train", "_Z10bpnn_trainP4BPNNPfS1_", 0, 6, "bpnn_layerforward", "bpnn_layerforward", "bpnn_output_error", "bpnn_hidden_error", "bpnn_adjust_weights", "bpnn_adjust_weights",
                             "squash", "_Z6squashf", 0, 0,
                             "alloc_1d_dbl", "_Z12alloc_1d_dblm", 0, 0,
                             "bpnn_adjust_weights", "_Z19bpnn_adjust_weightsPfiS_iPS_S0_", 0, 0,
                             "bpnn_randomize_weights", "_Z22bpnn_randomize_weightsPPfii", 0, 0,
                             "bpnn_save", "_Z9bpnn_saveP4BPNNPc", 0, 0,
                             "bpnn_feedforward", "_Z16bpnn_feedforwardP4BPNN", 0, 2, "bpnn_layerforward", "bpnn_layerforward",
                             "bpnn_output_error", "_Z17bpnn_output_errorPfS_S_iS_", 0, 0,
                             "bpnn_randomize_row", "_Z18bpnn_randomize_rowPfi", 0, 0,
                             "bpnn_free", "_Z9bpnn_freeP4BPNN", 0, 0,
                             "alloc_2d_dbl", "_Z12alloc_2d_dblmm", 0, 1, "alloc_1d_dbl",
                             "drnd", "_Z4drndv", 0, 0,
                             "bpnn_create", "_Z11bpnn_createiii", 0, 6, "bpnn_internal_create", "bpnn_randomize_weights", "bpnn_randomize_weights", "bpnn_zero_weights", "bpnn_zero_weights", "bpnn_randomize_row",
                        "bpnn_train|out_err|0", 1, "bpnn_train",
                        "bpnn_train|hid_err|0", 1, "bpnn_train",
                        "bpnn_save|dvalue|0", 1, "bpnn_save",
        "drnd", 0UL, (int)0,
        "alloc_1d_dbl", 18030399740950321058UL, (int)1, 0UL,
        "alloc_1d_dbl", 18030399740950322463UL, (int)1, 0UL,
        "alloc_1d_dbl", 18030399740950322463UL, (int)1, 0UL,
        "alloc_1d_dbl", 18030399740950322463UL, (int)1, 0UL,
        "alloc_1d_dbl", 18030399740950322463UL, (int)1, 0UL,
        "alloc_1d_dbl", 18030399740950322463UL, (int)1, 0UL,
        "alloc_1d_dbl", 18030399740950322463UL, (int)1, 0UL,
        "alloc_2d_dbl", 18030399740950322463UL, (int)2, 0UL, 0UL,
        "alloc_2d_dbl", 18030399740950322463UL, (int)2, 0UL, 0UL,
        "alloc_2d_dbl", 18030399740950322463UL, (int)2, 0UL, 0UL,
        "alloc_2d_dbl", 18030399740950322463UL, (int)2, 0UL, 0UL,
        "bpnn_internal_create", 18030399740950321465UL, (int)3, 0UL, 0UL, 0UL,
        "bpnn_randomize_weights", 0UL, (int)3, 18030399740950321469UL, 0UL, 0UL,
        "bpnn_randomize_weights", 0UL, (int)3, 18030399740950321469UL, 0UL, 0UL,
        "bpnn_zero_weights", 0UL, (int)3, 18030399740950321469UL, 0UL, 0UL,
        "bpnn_zero_weights", 0UL, (int)3, 18030399740950321469UL, 0UL, 0UL,
        "bpnn_randomize_row", 0UL, (int)2, 18030399740950321469UL, 0UL,
        "squash", 0UL, (int)1, 0UL,
        "bpnn_layerforward", 0UL, (int)5, 18030399740950321939UL, 18030399740950321939UL, 18030399740950321939UL, 0UL, 0UL,
        "bpnn_layerforward", 0UL, (int)5, 18030399740950321939UL, 18030399740950321939UL, 18030399740950321939UL, 0UL, 0UL,
        "bpnn_layerforward", 0UL, (int)5, 18030399740950321996UL, 18030399740950321996UL, 18030399740950321996UL, 0UL, 0UL,
        "bpnn_layerforward", 0UL, (int)5, 18030399740950321996UL, 18030399740950321996UL, 18030399740950321996UL, 0UL, 0UL,
        "bpnn_output_error", 0UL, (int)5, 18030399740950321996UL, 18030399740950321996UL, 18030399740950321996UL, 0UL, 18030399740950321969UL,
        "bpnn_hidden_error", 0UL, (int)7, 18030399740950321996UL, 0UL, 18030399740950321996UL, 0UL, 18030399740950321996UL, 18030399740950321996UL, 18030399740950321970UL,
        "bpnn_adjust_weights", 0UL, (int)6, 18030399740950321996UL, 0UL, 18030399740950321996UL, 0UL, 18030399740950321996UL, 18030399740950321996UL,
        "bpnn_adjust_weights", 0UL, (int)6, 18030399740950321996UL, 0UL, 18030399740950321996UL, 0UL, 18030399740950321996UL, 18030399740950321996UL,
        "bpnn_internal_create", 18030399740950322461UL, (int)3, 0UL, 0UL, 0UL,
        "bpnn_zero_weights", 0UL, (int)3, 18030399740950322463UL, 0UL, 0UL,
        "bpnn_zero_weights", 0UL, (int)3, 18030399740950322463UL, 0UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
