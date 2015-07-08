# 1 "smith_waterman_omp.cpp.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "smith_waterman_omp.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_GUID_BROW_npm = 1;
static int ____chimes_does_checkpoint_task_func_npm = 1;
static int ____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm = 1;
static int ____chimes_does_checkpoint_GUID_KIND_npm = 1;
static int ____chimes_does_checkpoint_GUID_DIAG_npm = 1;
static int ____chimes_does_checkpoint_print_matrix_npm = 1;
static int ____chimes_does_checkpoint_PUT_BROW_npm = 1;
static int ____chimes_does_checkpoint_pop_next_tile_npm = 1;
static int ____chimes_does_checkpoint_PUT_RCOL_npm = 1;
static int ____chimes_does_checkpoint_char_mapping_npm = 1;
static int ____chimes_does_checkpoint_GUID_RCOL_npm = 1;
static int ____chimes_does_checkpoint_read_file_npm = 1;
static int ____chimes_does_checkpoint_random_init_npm = 1;
static int ____chimes_does_checkpoint_PUT_DIAG_npm = 1;
static int ____chimes_does_checkpoint_PUT_npm = 1;
static int ____chimes_does_checkpoint_add_tile_to_run_npm = 1;
static int ____chimes_does_checkpoint_TILE_ROW_npm = 1;
static int ____chimes_does_checkpoint_TILE_COL_npm = 1;


static int ____must_manage_GUID_BROW = 2;
static int ____must_manage_task_func = 2;
static int ____must_manage_clear_whitespaces_do_mapping = 2;
static int ____must_manage_GUID_KIND = 2;
static int ____must_manage_GUID_DIAG = 2;
static int ____must_manage_print_matrix = 2;
static int ____must_manage_PUT_BROW = 2;
static int ____must_manage_pop_next_tile = 2;
static int ____must_manage_PUT_RCOL = 2;
static int ____must_manage_char_mapping = 2;
static int ____must_manage_GUID_RCOL = 2;
static int ____must_manage_read_file = 2;
static int ____must_manage_random_init = 2;
static int ____must_manage_PUT_DIAG = 2;
static int ____must_manage_PUT = 2;
static int ____must_manage_add_tile_to_run = 2;
static int ____must_manage_TILE_ROW = 2;
static int ____must_manage_TILE_COL = 2;

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
# 1 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 1 "/tmp/chimes-frontend.1436367110171//"
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
# 68 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
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
# 2 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
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
# 3 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4
extern "C" {
# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) throw () __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     throw () __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) throw ();




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) throw ();




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) throw ();




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     throw () __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     throw () __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) throw ();






extern int futimesat (int __fd, __const char *__file,
        __const struct timeval __tvp[2]) throw ();
# 191 "/usr/include/sys/time.h" 3 4
}
# 4 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};
# 161 "/usr/include/time.h" 3 4
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) throw ();





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (__const time_t *__timer) throw ();



extern struct tm *localtime (__const time_t *__timer) throw ();





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (__const struct tm *__tp) throw ();


extern char *ctime (__const time_t *__timer) throw ();







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) throw ();
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();
# 390 "/usr/include/time.h" 3 4
extern int getdate_err;
# 399 "/usr/include/time.h" 3 4
extern struct tm *getdate (__const char *__string);
# 413 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 5 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 6 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
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
# 7 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 7 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 8 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 10 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 25 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 25 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
typedef struct _tile {
# 26 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int row;
# 27 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int col;
# 28 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
} tile;
# 29 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 30 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
typedef struct _tiles_to_run {
# 31 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile *q;
# 32 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile *base;
# 33 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int capacity;
# 34 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int length;
# 35 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
} tiles_to_run;
# 36 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 37 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
typedef enum {
# 38 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 DIAG_KIND,
# 39 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 RCOL_KIND,
# 40 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 BROW_KIND,
# 41 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 NUM_DEPS
# 42 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
} TILE_DEPS;
# 43 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 44 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* string_1;
# 45 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* string_2;
# 46 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 47 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int strlen_1;
# 48 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int strlen_2;
# 49 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 50 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int tile_width;
# 51 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int tile_height;
# 52 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 53 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int n_tiles_x;
# 54 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int n_tiles_y;
# 55 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 56 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int ** tile_edges_x;
# 57 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int ** tile_edges_y;
# 58 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * tile_diag;
# 59 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * put_counts;
# 60 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int *** worker_tiles;
# 61 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * max_buffer;
# 62 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * temp_buffer;
# 63 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int max_size;
# 64 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
volatile int done;
# 65 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 66 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int nthreads;
# 67 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
struct timeval begin,end;
# 68 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 69 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int dsizes[NUM_DEPS];
# 70 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 71 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_DIAG_npm(int r, int c);
int GUID_DIAG_quick(int r, int c); int GUID_DIAG(int r, int c);
int GUID_RCOL_npm(int r, int c);
int GUID_DIAG_resumable(int r, int c) {const int ____chimes_did_disable0 = new_stack((void *)(&GUID_DIAG), "GUID_DIAG", &____must_manage_GUID_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ; rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 72 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_RCOL_quick(int r, int c); int GUID_RCOL(int r, int c);
int GUID_BROW_npm(int r, int c);
int GUID_RCOL_resumable(int r, int c) {const int ____chimes_did_disable1 = new_stack((void *)(&GUID_RCOL), "GUID_RCOL", &____must_manage_GUID_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ; rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1, false); }
# 73 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_BROW_quick(int r, int c); int GUID_BROW(int r, int c);
int GUID_BROW_resumable(int r, int c) {const int ____chimes_did_disable2 = new_stack((void *)(&GUID_BROW), "GUID_BROW", &____must_manage_GUID_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2, false); }
# 74 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 75 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_ROW_npm(int guid);
int TILE_ROW_quick(int guid); int TILE_ROW(int guid);
int TILE_COL_npm(int guid);
int TILE_ROW_resumable(int guid) {const int ____chimes_did_disable3 = new_stack((void *)(&TILE_ROW), "TILE_ROW", &____must_manage_TILE_ROW, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((guid % (n_tiles_x * n_tiles_y)) / n_tiles_x); rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3, false); return ____chimes_ret_var_3; ; rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3, false); }
# 76 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_COL_quick(int guid); int TILE_COL(int guid);
int TILE_COL_resumable(int guid) {const int ____chimes_did_disable4 = new_stack((void *)(&TILE_COL), "TILE_COL", &____must_manage_TILE_COL, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((guid % (n_tiles_x * n_tiles_y)) % n_tiles_x); rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4, false); return ____chimes_ret_var_4; ; rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4, false); }
# 77 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 78 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_KIND_npm(int guid);
int GUID_KIND_quick(int guid); int GUID_KIND(int guid);
int GUID_KIND_resumable(int guid) {const int ____chimes_did_disable5 = new_stack((void *)(&GUID_KIND), "GUID_KIND", &____must_manage_GUID_KIND, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (guid / (n_tiles_x * n_tiles_y)); rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5, false); return ____chimes_ret_var_5; ; rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5, false); }
# 225 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 225 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_npm(int row, int col);
int PUT_quick(int row, int col); int PUT(int row, int col);
int PUT_resumable(int row, int col) {const int ____chimes_did_disable6 = new_stack((void *)(&PUT), "PUT", &____must_manage_PUT, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 226 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y-1)) { int ____chimes_ret_var_6; ; ____chimes_ret_var_6 = (0); rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); return ____chimes_ret_var_6; ; };
# 227 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x-1)) { int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = (0); rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); return ____chimes_ret_var_7; ; };
# 228 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 229 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int success; success = (0) ;
# 230 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int await_tile; await_tile = (({ calling_npm("GUID_DIAG", 0); GUID_DIAG_npm(row, col); })) ;
# 231 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 232 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ((put_counts[await_tile] < NUM_DEPS) ? static_cast<void> (0) : __assert_fail ("put_counts[await_tile] < NUM_DEPS", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 233, __PRETTY_FUNCTION__));
# 234 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (success); rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); return ____chimes_ret_var_8; ;
# 240 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); }
# 241 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 242 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_DIAG_npm(int row, int col);
int PUT_DIAG_quick(int row, int col); int PUT_DIAG(int row, int col);
int PUT_RCOL_npm(int row, int col);
int PUT_DIAG_resumable(int row, int col) {const int ____chimes_did_disable7 = new_stack((void *)(&PUT_DIAG), "PUT_DIAG", &____must_manage_PUT_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = (({ calling_npm("PUT", 0); PUT_npm(row+1, col+1); })); rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7, false); return ____chimes_ret_var_9; ; rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7, false); }
# 243 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_RCOL_quick(int row, int col); int PUT_RCOL(int row, int col);
int PUT_BROW_npm(int row, int col);
int PUT_RCOL_resumable(int row, int col) {const int ____chimes_did_disable8 = new_stack((void *)(&PUT_RCOL), "PUT_RCOL", &____must_manage_PUT_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_10; ; ____chimes_ret_var_10 = (({ calling_npm("PUT", 0); PUT_npm(row, col+1); })); rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8, false); return ____chimes_ret_var_10; ; rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8, false); }
# 244 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_BROW_quick(int row, int col); int PUT_BROW(int row, int col);
int PUT_BROW_resumable(int row, int col) {const int ____chimes_did_disable9 = new_stack((void *)(&PUT_BROW), "PUT_BROW", &____must_manage_PUT_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_11; ; ____chimes_ret_var_11 = (({ calling_npm("PUT", 0); PUT_npm(row+1, col); })); rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9, false); return ____chimes_ret_var_11; ; rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9, false); }
# 245 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 246 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};
# 247 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 248 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char char_mapping_npm ( char c );
signed char char_mapping_quick ( char c ); signed char char_mapping ( char c );
signed char char_mapping_resumable ( char c ) {const int ____chimes_did_disable10 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 249 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 250 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char ____chimes_ret_var_12; ; ____chimes_ret_var_12 = (to_be_returned); rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10, false); return ____chimes_ret_var_12; ;
# 258 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10, false); }
# 259 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 260 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns );
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ); void print_matrix ( int** matrix, int n_rows, int n_columns );
void print_matrix_resumable ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable11 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(17943224531889795055UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 261 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int i; int j; ;
# 262 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 265 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(stdout, "\n");
# 267 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout,"--------------------------------\n");
# 269 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_12, ____chimes_did_disable11, false); }
# 270 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 271 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
static char alignment_score_matrix[5][5] =
# 272 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
{
# 273 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-1,-1,-1,-1},
# 274 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,2,-4,-2,-4},
# 275 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-4, 2,-4,-2},
# 276 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-2,-4, 2,-4},
# 277 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-4,-2,-4, 2}
# 278 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
};
# 279 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 280 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
static void random_init_npm(signed char *s, unsigned long long len);
static void random_init_quick(signed char *s, unsigned long long len); static void random_init(signed char *s, unsigned long long len);
static void random_init_resumable(signed char *s, unsigned long long len) {const int ____chimes_did_disable12 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(17943224531889796448UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 281 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 282 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         int r; r = (rand() % 5) ;
# 283 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ((r >= 0 && r < 5) ? static_cast<void> (0) : __assert_fail ("r >= 0 && r < 5", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 283, __PRETTY_FUNCTION__));
# 284 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        s[i] = r;
# 285 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } }
# 286 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_19, ____chimes_did_disable12, false); }
# 287 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 288 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ); size_t clear_whitespaces_do_mapping ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_resumable ( signed char* buffer, long size ) {const int ____chimes_did_disable13 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(17943224531889795106UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 289 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 290 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 291 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 292 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 293 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 294 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 295 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 296 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 297 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                break;
# 298 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 299 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 300 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 301 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t ____chimes_ret_var_13; ; ____chimes_ret_var_13 = (non_ws_index); rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13, false); return ____chimes_ret_var_13; ;
# 302 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13, false); }
# 303 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 304 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars );
signed char* read_file_quick( FILE* file, size_t* n_chars ); signed char* read_file( FILE* file, size_t* n_chars );
signed char* read_file_resumable( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable14 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(17943224531889795152UL), (size_t)(17943224531889795153UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 305 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 306 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     long file_size; file_size = (ftell(file)) ;
# 307 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 308 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 309 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 17943224531889795130UL, 0, 0)) ;
# 310 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 311 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 312 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 313 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 314 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 315 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 316 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char *____chimes_ret_var_14; ; ____chimes_ret_var_14 = (file_buffer); rm_stack(true, 17943224531889795130UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14, false); return ____chimes_ret_var_14; ;
# 317 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 17943224531889795130UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14, false); }
# 318 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 319 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void add_tile_to_run_npm(int row, int col, tiles_to_run *q);
void add_tile_to_run_quick(int row, int col, tiles_to_run *q); void add_tile_to_run(int row, int col, tiles_to_run *q);
void add_tile_to_run_resumable(int row, int col, tiles_to_run *q) {const int ____chimes_did_disable15 = new_stack((void *)(&add_tile_to_run), "add_tile_to_run", &____must_manage_add_tile_to_run, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(17943224531889795185UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 320 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ((q->length < q->capacity) ? static_cast<void> (0) : __assert_fail ("q->length < q->capacity", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 320, __PRETTY_FUNCTION__));
# 321 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 322 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 323 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 324 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "add_tile_to_run", &____must_manage_add_tile_to_run, ____alias_loc_id_15, ____chimes_did_disable15, false); }
# 325 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 326 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tile* pop_next_tile_npm(tiles_to_run *q);
tile* pop_next_tile_quick(tiles_to_run *q); tile* pop_next_tile(tiles_to_run *q);
tile* pop_next_tile_resumable(tiles_to_run *q) {const int ____chimes_did_disable16 = new_stack((void *)(&pop_next_tile), "pop_next_tile", &____must_manage_pop_next_tile, 1, 0, (size_t)(17943224531889795233UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 327 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ((q->length >= 0) ? static_cast<void> (0) : __assert_fail ("q->length >= 0", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 327, __PRETTY_FUNCTION__));
# 328 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 329 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *____chimes_ret_var_15; ; ____chimes_ret_var_15 = (__null); rm_stack(true, 17943224531889796255UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16, false); return ____chimes_ret_var_15; ;
# 330 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } else {
# 331 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *next; next = (q->q) ;
# 332 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 333 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 334 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *____chimes_ret_var_16; ; ____chimes_ret_var_16 = (next); rm_stack(true, 17943224531889796255UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16, false); return ____chimes_ret_var_16; ;
# 335 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 336 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 17943224531889796255UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16, false); }
# 337 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 338 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void task_func_npm(int i, int j, tiles_to_run *next);
void task_func_quick(int i, int j, tiles_to_run *next); void task_func(int i, int j, tiles_to_run *next);
void task_func_resumable(int i, int j, tiles_to_run *next) {const int ____chimes_did_disable17 = new_stack((void *)(&task_func), "task_func", &____must_manage_task_func, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(17943224531889795701UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 339 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ii; int jj; ;
# 340 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int threadId; threadId = (omp_get_thread_num()) ;
# 341 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int **local_matrix; local_matrix = (worker_tiles[threadId]) ;
# 342 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 343 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int diag_index; diag_index = (((n_tiles_y - 1) + (j - i))) ;
# 344 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *diag; diag = (&tile_diag[diag_index]) ;
# 345 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_y; tile_edge_y = (tile_edges_y[i]) ;
# 346 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_x; tile_edge_x = (tile_edges_x[j]) ;
# 347 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 348 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 349 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 350 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii-1]; };
# 352 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 353 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii-1]; };
# 355 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 356 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 357 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 358 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_1; char_from_1 = (string_1[(j - 1) * tile_width + jj - 1]) ;
# 359 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_2; char_from_2 = (string_2[(i - 1) * tile_height + ii - 1]) ;
# 360 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 361 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int diag_score; diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 362 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int left_score; left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 363 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int top_score; top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 364 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 365 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 366 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 367 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  }
# 368 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 369 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 370 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 371 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { tile_edge_y[ii-1] = local_matrix[ii][tile_width]; };
# 373 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { tile_edge_x[ii-1] = local_matrix[tile_height][ii]; };
# 375 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 376 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread();
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 378 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        { {
# 379 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 380 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, j); })) ;
# 381 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 382 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 383 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 384 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 385 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 386 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 387 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 388 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 389 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, j); })) ;
# 390 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 391 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i) ;
# 392 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 393 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 394 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 395 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 396 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 397 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 398 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(i, j); })) ;
# 399 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 400 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 401 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j) ;
# 402 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 403 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 404 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 405 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         } } reenable_current_thread(____chimes_disable0);
# 406 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 407 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 408 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 409 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 410 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 411 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "task_func", &____must_manage_task_func, ____alias_loc_id_17, ____chimes_did_disable17, false); }
# 412 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int main_quick ( int argc, char* argv[] ); int main ( int argc, char* argv[] );
int main_resumable ( int argc, char* argv[] ) {const int ____chimes_did_disable18 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(17943224531889796410UL)) ; tiles_to_run *tmp;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
bool done;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tile *mine;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tiles_to_run *next;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tiles_to_run *curr;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int result_col;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int result_row;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int j;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int i;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 register_stack_vars(9, "main|tmp|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|done|0", (int *)0x0, "i8", (void *)(&done), (size_t)1, 0, 0, 0, "main|mine|0", (int *)0x0, "%struct._tile*", (void *)(&mine), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|result_col|0", (int *)0x0, "i32", (void *)(&result_col), (size_t)4, 0, 0, 0, "main|result_row|0", (int *)0x0, "i32", (void *)(&result_row), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(50): { goto call_lbl_50; } case(51): { goto call_lbl_51; } case(34): { goto call_lbl_34; } default: { chimes_error(); } } } ; ;
# 414 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
      int level; ;
# 415 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
{ call_lbl_50: void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(50, &____chimes_region_id0, 1, &done);
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 417 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 { { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &done); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } {
# 418 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  nthreads = omp_get_num_threads();
# 419 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  } thread_leaving(); } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 0); }
# 420 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 421 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if ( argc != 5 ) {
# 422 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(stderr, "Usage: %s length1 length2 tileWidth tileHeight\n", argv[0]);
# 423 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        exit(1);
# 424 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 425 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 426 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);
# 427 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length1; length1 = (strtoull(argv[1], __null, 10)) ;
# 429 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length2; length2 = (strtoull(argv[2], __null, 10)) ;
# 430 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 431 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_width = (int) atoi (argv[3]);
# 432 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_height = (int) atoi (argv[4]);
# 433 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 434 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_1; n_char_in_file_1 = (length1) ;
# 435 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_2; n_char_in_file_2 = (length2) ;
# 436 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 437 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 17943224531889795423UL, 0, 0);
# 438 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 17943224531889795423UL, 0, 0);
# 439 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 440 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 441 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 442 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 443 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile width  %d\n", tile_width);
# 444 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile height %d\n", tile_height);
# 445 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 446 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_1 % tile_width) { fprintf(stderr, "String1 length should be multiple of tile width\n"); exit(1); }
# 447 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_2 % tile_height) { fprintf(stderr, "String2 length should be multiple of tile height\n"); exit(1); }
# 448 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 449 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_x = n_char_in_file_1/tile_width;
# 450 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_y = n_char_in_file_2/tile_height;
# 451 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 452 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);
# 453 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 454 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_1 = n_char_in_file_1;
# 455 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_2 = n_char_in_file_2;
# 456 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 457 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 458 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 459 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 460 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_x++;
# 461 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_y++;
# 462 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 463 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_tiles; num_tiles = (n_tiles_x * n_tiles_y) ;
# 464 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 put_counts = (int*)malloc_wrapper(sizeof(int)*num_tiles, 17943224531889794898UL, 0, 0);
# 465 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i=0; i<num_tiles; i++) {
# 466 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[i] = 0;
# 467 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 468 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 469 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 470 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_diags; num_diags = (n_tiles_x + n_tiles_y - 1) ;
# 471 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*num_diags, 17943224531889794898UL, 0, 0);
# 472 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag[((n_tiles_y - 1) + (0 - 0))] = 0;
# 473 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, 0); });
# 474 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 475 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 476 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (i - 0))] = -1*(i*tile_width);
# 477 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, i); });
# 478 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 479 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 480 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (0 - i))] = -1*(i*tile_height);
# 481 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, 0); });
# 482 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 483 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 484 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 485 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 17943224531889795332UL, 1, 0);
# 486 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 487 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 17943224531889795334UL, 0, 0);
# 488 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1*((i-1)*tile_height+j); };
# 490 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, 0); });
# 491 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 492 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 493 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 494 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 17943224531889795332UL, 1, 0);
# 495 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 496 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 17943224531889795334UL, 0, 0);
# 497 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1*((i-1)*tile_width+j); };
# 499 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(0, i); });
# 500 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 501 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 502 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 503 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 17943224531889795311UL, 1, 0);
# 504 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 505 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 17943224531889795523UL, 1, 0);
# 506 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { worker_tiles[i][j] = (int*)malloc_wrapper(sizeof(int)*(tile_width+1), 17943224531889795525UL, 0, 0); };
# 508 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 509 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 510 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 511 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[DIAG_KIND] = 1;
# 512 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[RCOL_KIND] = tile_height;
# 513 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[BROW_KIND] = tile_width;
# 514 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 515 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_size = dsizes[0];
# 516 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < NUM_DEPS; i++) { if (max_size < dsizes[i]) {max_size = dsizes[i]; }; };
# 518 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 17943224531889794898UL, 0, 0);
# 519 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 temp_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 17943224531889794898UL, 0, 0);
# 549 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 549 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_row = (n_tiles_y - 1) ;
# 550 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_col = (n_tiles_x - 1) ;
# 551 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 done = 0;
# 552 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 553 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&begin,0);
# 554 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 555 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       curr = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 17943224531889796159UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 556 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 17943224531889796168UL, 0, 1, (int)sizeof(struct _tile), 0);
# 557 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->q = curr->base;
# 558 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->capacity = n_tiles_y * n_tiles_x;
# 559 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->length = 1;
# 560 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].row = 1;
# 561 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].col = 1;
# 562 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 563 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       next = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 17943224531889796159UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 564 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 17943224531889796168UL, 0, 1, (int)sizeof(struct _tile), 0);
# 565 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->q = next->base;
# 566 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->capacity = n_tiles_y * n_tiles_x;
# 567 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->length = 0;
# 568 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 569 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while (curr->length > 0) {
# 570 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           mine = (__null) ;
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
{ call_lbl_51: void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(51, &____chimes_region_id1, 2, &done, &mine);
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel firstprivate(mine) firstprivate(done)
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 572 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        { { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &done, &mine); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } {
# 573 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
               done = (false) ;
# 574 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 575 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            while (!done) {
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
bool ____chimes_disable3; ____chimes_disable3 = disable_current_thread();
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 577 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                { {
# 578 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    mine = ({ calling_npm("pop_next_tile", 0); pop_next_tile_npm(curr); });
# 579 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 } } reenable_current_thread(____chimes_disable3);
# 580 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                done = (mine == __null);
# 581 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 582 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (!done) {
# 583 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("task_func", 0); task_func_npm(mine->row, mine->col, next); });
# 584 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 585 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 586 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         } thread_leaving(); } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 0); }
# 587 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           tmp = (curr) ;
# 589 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr = next;
# 590 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next = tmp;
# 591 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 592 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr->q = curr->base;
# 593 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 594 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next->length = 0;
# 595 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 596 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 597 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         call_lbl_34: checkpoint_transformed(34, ____alias_loc_id_0);
# 598 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 599 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 600 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 601 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&end,0);
# 602 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     int score; score = (tile_diag[((n_tiles_y - 1) + (result_col - result_row))]) ;
# 603 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "score: %d\n", score);
# 604 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 605 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 606 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 607 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { free_wrapper(worker_tiles[i][j], 17943224531889795525UL); };
# 609 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  free_wrapper(worker_tiles[i], 17943224531889795523UL);
# 610 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 611 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(worker_tiles, 17943224531889795311UL);
# 612 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 613 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 17943224531889795334UL); };
# 615 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_y, 17943224531889795332UL);
# 616 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 617 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 17943224531889795334UL); };
# 619 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_x, 17943224531889795332UL);
# 620 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 621 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_diag, 17943224531889794898UL);
# 622 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 623 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_1, 17943224531889795423UL);
# 624 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_2, 17943224531889795423UL);
# 625 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 626 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     int ____chimes_ret_var_17; ; ____chimes_ret_var_17 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18, false); return ____chimes_ret_var_17; ;
# 627 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18, false); }
# 71 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_DIAG_quick(int r, int c) {const int ____chimes_did_disable0 = new_stack((void *)(&GUID_DIAG), "GUID_DIAG", &____must_manage_GUID_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ; rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0, false); }

int GUID_DIAG(int r, int c) { return (____chimes_replaying ? GUID_DIAG_resumable(r, c) : GUID_DIAG_quick(r, c)); }
# 72 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_RCOL_quick(int r, int c) {const int ____chimes_did_disable1 = new_stack((void *)(&GUID_RCOL), "GUID_RCOL", &____must_manage_GUID_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ; rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1, false); }

int GUID_RCOL(int r, int c) { return (____chimes_replaying ? GUID_RCOL_resumable(r, c) : GUID_RCOL_quick(r, c)); }
# 73 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_BROW_quick(int r, int c) {const int ____chimes_did_disable2 = new_stack((void *)(&GUID_BROW), "GUID_BROW", &____must_manage_GUID_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2, false); }

int GUID_BROW(int r, int c) { return (____chimes_replaying ? GUID_BROW_resumable(r, c) : GUID_BROW_quick(r, c)); }
# 75 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_ROW_quick(int guid) {const int ____chimes_did_disable3 = new_stack((void *)(&TILE_ROW), "TILE_ROW", &____must_manage_TILE_ROW, 1, 0, (size_t)(0UL)) ; ; ; int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((guid % (n_tiles_x * n_tiles_y)) / n_tiles_x); rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3, false); return ____chimes_ret_var_3; ; rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3, false); }

int TILE_ROW(int guid) { return (____chimes_replaying ? TILE_ROW_resumable(guid) : TILE_ROW_quick(guid)); }
# 76 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_COL_quick(int guid) {const int ____chimes_did_disable4 = new_stack((void *)(&TILE_COL), "TILE_COL", &____must_manage_TILE_COL, 1, 0, (size_t)(0UL)) ; ; ; int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((guid % (n_tiles_x * n_tiles_y)) % n_tiles_x); rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4, false); return ____chimes_ret_var_4; ; rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4, false); }

int TILE_COL(int guid) { return (____chimes_replaying ? TILE_COL_resumable(guid) : TILE_COL_quick(guid)); }
# 78 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_KIND_quick(int guid) {const int ____chimes_did_disable5 = new_stack((void *)(&GUID_KIND), "GUID_KIND", &____must_manage_GUID_KIND, 1, 0, (size_t)(0UL)) ; ; ; int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (guid / (n_tiles_x * n_tiles_y)); rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5, false); return ____chimes_ret_var_5; ; rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5, false); }

int GUID_KIND(int guid) { return (____chimes_replaying ? GUID_KIND_resumable(guid) : GUID_KIND_quick(guid)); }
# 225 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_quick(int row, int col) {const int ____chimes_did_disable6 = new_stack((void *)(&PUT), "PUT", &____must_manage_PUT, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 226 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y-1)) { int ____chimes_ret_var_6; ; ____chimes_ret_var_6 = (0); rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); return ____chimes_ret_var_6; ; };
# 227 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x-1)) { int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = (0); rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); return ____chimes_ret_var_7; ; };
# 228 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 229 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int success; success = (0) ;
# 230 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int await_tile; await_tile = (({ calling_npm("GUID_DIAG", 0); GUID_DIAG_npm(row, col); })) ;
# 231 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 232 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ((put_counts[await_tile] < NUM_DEPS) ? static_cast<void> (0) : __assert_fail ("put_counts[await_tile] < NUM_DEPS", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 233, __PRETTY_FUNCTION__));
# 234 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (success); rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); return ____chimes_ret_var_8; ;
# 240 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6, false); }

int PUT(int row, int col) { return (____chimes_replaying ? PUT_resumable(row, col) : PUT_quick(row, col)); }
# 242 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_DIAG_quick(int row, int col) {const int ____chimes_did_disable7 = new_stack((void *)(&PUT_DIAG), "PUT_DIAG", &____must_manage_PUT_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = (({ calling_npm("PUT", 0); PUT_npm(row+1, col+1); })); rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7, false); return ____chimes_ret_var_9; ; rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7, false); }

int PUT_DIAG(int row, int col) { return (____chimes_replaying ? PUT_DIAG_resumable(row, col) : PUT_DIAG_quick(row, col)); }
# 243 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_RCOL_quick(int row, int col) {const int ____chimes_did_disable8 = new_stack((void *)(&PUT_RCOL), "PUT_RCOL", &____must_manage_PUT_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; int ____chimes_ret_var_10; ; ____chimes_ret_var_10 = (({ calling_npm("PUT", 0); PUT_npm(row, col+1); })); rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8, false); return ____chimes_ret_var_10; ; rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8, false); }

int PUT_RCOL(int row, int col) { return (____chimes_replaying ? PUT_RCOL_resumable(row, col) : PUT_RCOL_quick(row, col)); }
# 244 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_BROW_quick(int row, int col) {const int ____chimes_did_disable9 = new_stack((void *)(&PUT_BROW), "PUT_BROW", &____must_manage_PUT_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; int ____chimes_ret_var_11; ; ____chimes_ret_var_11 = (({ calling_npm("PUT", 0); PUT_npm(row+1, col); })); rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9, false); return ____chimes_ret_var_11; ; rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9, false); }

int PUT_BROW(int row, int col) { return (____chimes_replaying ? PUT_BROW_resumable(row, col) : PUT_BROW_quick(row, col)); }
# 248 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char char_mapping_quick ( char c ) {const int ____chimes_did_disable10 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; ; ;
# 249 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 250 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char ____chimes_ret_var_12; ; ____chimes_ret_var_12 = (to_be_returned); rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10, false); return ____chimes_ret_var_12; ;
# 258 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10, false); }

signed char char_mapping ( char c ) { return (____chimes_replaying ? char_mapping_resumable(c) : char_mapping_quick(c)); }
# 260 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable11 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(17943224531889795055UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 261 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int i; int j; ;
# 262 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 265 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(stdout, "\n");
# 267 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout,"--------------------------------\n");
# 269 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_12, ____chimes_did_disable11, false); }

void print_matrix ( int** matrix, int n_rows, int n_columns ) { (____chimes_replaying ? print_matrix_resumable(matrix, n_rows, n_columns) : print_matrix_quick(matrix, n_rows, n_columns)); }
# 280 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
static void random_init_quick(signed char *s, unsigned long long len) {const int ____chimes_did_disable12 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(17943224531889796448UL), (size_t)(0UL)) ; ; ;
# 281 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 282 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         int r; r = (rand() % 5) ;
# 283 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ((r >= 0 && r < 5) ? static_cast<void> (0) : __assert_fail ("r >= 0 && r < 5", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 283, __PRETTY_FUNCTION__));
# 284 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        s[i] = r;
# 285 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } }
# 286 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_19, ____chimes_did_disable12, false); }

static void random_init(signed char *s, unsigned long long len) { (____chimes_replaying ? random_init_resumable(s, len) : random_init_quick(s, len)); }
# 288 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ) {const int ____chimes_did_disable13 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(17943224531889795106UL), (size_t)(0UL)) ; ; ;
# 289 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 290 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 291 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 292 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 293 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 294 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 295 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 296 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 297 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                break;
# 298 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 299 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 300 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 301 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t ____chimes_ret_var_13; ; ____chimes_ret_var_13 = (non_ws_index); rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13, false); return ____chimes_ret_var_13; ;
# 302 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13, false); }

size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) { return (____chimes_replaying ? clear_whitespaces_do_mapping_resumable(buffer, size) : clear_whitespaces_do_mapping_quick(buffer, size)); }
# 304 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* read_file_quick( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable14 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(17943224531889795152UL), (size_t)(17943224531889795153UL)) ; ; ;
# 305 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 306 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     long file_size; file_size = (ftell(file)) ;
# 307 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 308 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 309 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 17943224531889795130UL, 0, 0)) ;
# 310 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 311 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 312 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 313 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 314 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 315 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 316 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char *____chimes_ret_var_14; ; ____chimes_ret_var_14 = (file_buffer); rm_stack(true, 17943224531889795130UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14, false); return ____chimes_ret_var_14; ;
# 317 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 17943224531889795130UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14, false); }

signed char* read_file( FILE* file, size_t* n_chars ) { return (____chimes_replaying ? read_file_resumable(file, n_chars) : read_file_quick(file, n_chars)); }
# 319 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void add_tile_to_run_quick(int row, int col, tiles_to_run *q) {const int ____chimes_did_disable15 = new_stack((void *)(&add_tile_to_run), "add_tile_to_run", &____must_manage_add_tile_to_run, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(17943224531889795185UL)) ; ; ;
# 320 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ((q->length < q->capacity) ? static_cast<void> (0) : __assert_fail ("q->length < q->capacity", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 320, __PRETTY_FUNCTION__));
# 321 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 322 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 323 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 324 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "add_tile_to_run", &____must_manage_add_tile_to_run, ____alias_loc_id_15, ____chimes_did_disable15, false); }

void add_tile_to_run(int row, int col, tiles_to_run *q) { (____chimes_replaying ? add_tile_to_run_resumable(row, col, q) : add_tile_to_run_quick(row, col, q)); }
# 326 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tile* pop_next_tile_quick(tiles_to_run *q) {const int ____chimes_did_disable16 = new_stack((void *)(&pop_next_tile), "pop_next_tile", &____must_manage_pop_next_tile, 1, 0, (size_t)(17943224531889795233UL)) ; ; ;
# 327 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ((q->length >= 0) ? static_cast<void> (0) : __assert_fail ("q->length >= 0", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 327, __PRETTY_FUNCTION__));
# 328 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 329 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *____chimes_ret_var_15; ; ____chimes_ret_var_15 = (__null); rm_stack(true, 17943224531889796255UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16, false); return ____chimes_ret_var_15; ;
# 330 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } else {
# 331 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *next; next = (q->q) ;
# 332 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 333 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 334 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *____chimes_ret_var_16; ; ____chimes_ret_var_16 = (next); rm_stack(true, 17943224531889796255UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16, false); return ____chimes_ret_var_16; ;
# 335 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 336 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 17943224531889796255UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16, false); }

tile* pop_next_tile(tiles_to_run *q) { return (____chimes_replaying ? pop_next_tile_resumable(q) : pop_next_tile_quick(q)); }
# 338 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void task_func_quick(int i, int j, tiles_to_run *next) {const int ____chimes_did_disable17 = new_stack((void *)(&task_func), "task_func", &____must_manage_task_func, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(17943224531889795701UL)) ; ; ;
# 339 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ii; int jj; ;
# 340 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int threadId; threadId = (omp_get_thread_num()) ;
# 341 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int **local_matrix; local_matrix = (worker_tiles[threadId]) ;
# 342 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 343 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int diag_index; diag_index = (((n_tiles_y - 1) + (j - i))) ;
# 344 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *diag; diag = (&tile_diag[diag_index]) ;
# 345 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_y; tile_edge_y = (tile_edges_y[i]) ;
# 346 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_x; tile_edge_x = (tile_edges_x[j]) ;
# 347 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 348 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 349 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 350 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii-1]; };
# 352 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 353 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii-1]; };
# 355 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 356 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 357 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 358 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_1; char_from_1 = (string_1[(j - 1) * tile_width + jj - 1]) ;
# 359 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_2; char_from_2 = (string_2[(i - 1) * tile_height + ii - 1]) ;
# 360 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 361 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int diag_score; diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 362 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int left_score; left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 363 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int top_score; top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 364 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 365 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 366 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 367 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  }
# 368 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 369 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 370 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 371 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { tile_edge_y[ii-1] = local_matrix[ii][tile_width]; };
# 373 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { tile_edge_x[ii-1] = local_matrix[tile_height][ii]; };
# 375 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 376 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread();
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 378 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        { {
# 379 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 380 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, j); })) ;
# 381 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 382 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 383 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 384 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 385 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 386 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 387 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 388 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 389 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, j); })) ;
# 390 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 391 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i) ;
# 392 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 393 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 394 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 395 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 396 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 397 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 398 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(i, j); })) ;
# 399 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 400 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 401 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j) ;
# 402 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 403 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 404 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 405 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         } } reenable_current_thread(____chimes_disable0);
# 406 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 407 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 408 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 409 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 410 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 411 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "task_func", &____must_manage_task_func, ____alias_loc_id_17, ____chimes_did_disable17, false); }

void task_func(int i, int j, tiles_to_run *next) { (____chimes_replaying ? task_func_resumable(i, j, next) : task_func_quick(i, j, next)); }
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int main_quick ( int argc, char* argv[] ) {const int ____chimes_did_disable18 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(17943224531889796410UL)) ; tiles_to_run *tmp;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
bool done;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tile *mine;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tiles_to_run *next;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tiles_to_run *curr;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int result_col;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int result_row;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int j;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int i;
# 413 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 register_stack_vars(9, "main|tmp|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|done|0", (int *)0x0, "i8", (void *)(&done), (size_t)1, 0, 0, 0, "main|mine|0", (int *)0x0, "%struct._tile*", (void *)(&mine), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|result_col|0", (int *)0x0, "i32", (void *)(&result_col), (size_t)4, 0, 0, 0, "main|result_row|0", (int *)0x0, "i32", (void *)(&result_row), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); ; ;
# 414 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
      int level; ;
# 415 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
{ call_lbl_50: void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(50, &____chimes_region_id0, 1, &done);
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 417 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 { { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &done); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } {
# 418 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  nthreads = omp_get_num_threads();
# 419 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  } thread_leaving(); } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 0); }
# 420 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 421 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if ( argc != 5 ) {
# 422 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(stderr, "Usage: %s length1 length2 tileWidth tileHeight\n", argv[0]);
# 423 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        exit(1);
# 424 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 425 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 426 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);
# 427 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length1; length1 = (strtoull(argv[1], __null, 10)) ;
# 429 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length2; length2 = (strtoull(argv[2], __null, 10)) ;
# 430 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 431 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_width = (int) atoi (argv[3]);
# 432 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_height = (int) atoi (argv[4]);
# 433 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 434 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_1; n_char_in_file_1 = (length1) ;
# 435 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_2; n_char_in_file_2 = (length2) ;
# 436 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 437 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 17943224531889795423UL, 0, 0);
# 438 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 17943224531889795423UL, 0, 0);
# 439 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 440 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 441 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 442 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 443 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile width  %d\n", tile_width);
# 444 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile height %d\n", tile_height);
# 445 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 446 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_1 % tile_width) { fprintf(stderr, "String1 length should be multiple of tile width\n"); exit(1); }
# 447 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_2 % tile_height) { fprintf(stderr, "String2 length should be multiple of tile height\n"); exit(1); }
# 448 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 449 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_x = n_char_in_file_1/tile_width;
# 450 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_y = n_char_in_file_2/tile_height;
# 451 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 452 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);
# 453 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 454 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_1 = n_char_in_file_1;
# 455 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_2 = n_char_in_file_2;
# 456 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 457 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 458 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 459 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 460 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_x++;
# 461 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_y++;
# 462 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 463 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_tiles; num_tiles = (n_tiles_x * n_tiles_y) ;
# 464 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 put_counts = (int*)malloc_wrapper(sizeof(int)*num_tiles, 17943224531889794898UL, 0, 0);
# 465 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i=0; i<num_tiles; i++) {
# 466 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[i] = 0;
# 467 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 468 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 469 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 470 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_diags; num_diags = (n_tiles_x + n_tiles_y - 1) ;
# 471 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*num_diags, 17943224531889794898UL, 0, 0);
# 472 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag[((n_tiles_y - 1) + (0 - 0))] = 0;
# 473 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, 0); });
# 474 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 475 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 476 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (i - 0))] = -1*(i*tile_width);
# 477 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, i); });
# 478 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 479 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 480 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (0 - i))] = -1*(i*tile_height);
# 481 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, 0); });
# 482 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 483 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 484 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 485 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 17943224531889795332UL, 1, 0);
# 486 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 487 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 17943224531889795334UL, 0, 0);
# 488 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1*((i-1)*tile_height+j); };
# 490 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, 0); });
# 491 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 492 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 493 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 494 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 17943224531889795332UL, 1, 0);
# 495 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 496 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 17943224531889795334UL, 0, 0);
# 497 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1*((i-1)*tile_width+j); };
# 499 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(0, i); });
# 500 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 501 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 502 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 503 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 17943224531889795311UL, 1, 0);
# 504 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 505 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 17943224531889795523UL, 1, 0);
# 506 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { worker_tiles[i][j] = (int*)malloc_wrapper(sizeof(int)*(tile_width+1), 17943224531889795525UL, 0, 0); };
# 508 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 509 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 510 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 511 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[DIAG_KIND] = 1;
# 512 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[RCOL_KIND] = tile_height;
# 513 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[BROW_KIND] = tile_width;
# 514 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 515 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_size = dsizes[0];
# 516 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < NUM_DEPS; i++) { if (max_size < dsizes[i]) {max_size = dsizes[i]; }; };
# 518 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 17943224531889794898UL, 0, 0);
# 519 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 temp_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 17943224531889794898UL, 0, 0);
# 549 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 549 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_row = (n_tiles_y - 1) ;
# 550 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_col = (n_tiles_x - 1) ;
# 551 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 done = 0;
# 552 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 553 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&begin,0);
# 554 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 555 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       curr = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 17943224531889796159UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 556 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 17943224531889796168UL, 0, 1, (int)sizeof(struct _tile), 0);
# 557 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->q = curr->base;
# 558 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->capacity = n_tiles_y * n_tiles_x;
# 559 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->length = 1;
# 560 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].row = 1;
# 561 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].col = 1;
# 562 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 563 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       next = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 17943224531889796159UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 564 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 17943224531889796168UL, 0, 1, (int)sizeof(struct _tile), 0);
# 565 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->q = next->base;
# 566 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->capacity = n_tiles_y * n_tiles_x;
# 567 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->length = 0;
# 568 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 569 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while (curr->length > 0) {
# 570 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           mine = (__null) ;
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
{ call_lbl_51: void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(51, &____chimes_region_id1, 2, &done, &mine);
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel firstprivate(mine) firstprivate(done)
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 572 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        { { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &done, &mine); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } {
# 573 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
               done = (false) ;
# 574 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 575 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            while (!done) {
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
bool ____chimes_disable3; ____chimes_disable3 = disable_current_thread();
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 577 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                { {
# 578 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    mine = ({ calling_npm("pop_next_tile", 0); pop_next_tile_npm(curr); });
# 579 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 } } reenable_current_thread(____chimes_disable3);
# 580 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                done = (mine == __null);
# 581 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 582 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (!done) {
# 583 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("task_func", 0); task_func_npm(mine->row, mine->col, next); });
# 584 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 585 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 586 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         } thread_leaving(); } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 0); }
# 587 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           tmp = (curr) ;
# 589 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr = next;
# 590 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next = tmp;
# 591 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 592 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr->q = curr->base;
# 593 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 594 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next->length = 0;
# 595 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 596 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 597 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         call_lbl_34: checkpoint_transformed(34, ____alias_loc_id_0);
# 598 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 599 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 600 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 601 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&end,0);
# 602 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     int score; score = (tile_diag[((n_tiles_y - 1) + (result_col - result_row))]) ;
# 603 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "score: %d\n", score);
# 604 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 605 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 606 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 607 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { free_wrapper(worker_tiles[i][j], 17943224531889795525UL); };
# 609 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  free_wrapper(worker_tiles[i], 17943224531889795523UL);
# 610 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 611 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(worker_tiles, 17943224531889795311UL);
# 612 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 613 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 17943224531889795334UL); };
# 615 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_y, 17943224531889795332UL);
# 616 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 617 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 17943224531889795334UL); };
# 619 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_x, 17943224531889795332UL);
# 620 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 621 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_diag, 17943224531889794898UL);
# 622 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 623 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_1, 17943224531889795423UL);
# 624 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_2, 17943224531889795423UL);
# 625 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 626 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     int ____chimes_ret_var_17; ; ____chimes_ret_var_17 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18, false); return ____chimes_ret_var_17; ;
# 627 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18, false); }

int main ( int argc, char* argv[] ) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 71 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_DIAG_npm(int r, int c) { int ____chimes_ret_var_0; ____chimes_ret_var_0 = ((0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); return ____chimes_ret_var_0; ; }
# 72 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_RCOL_npm(int r, int c) { int ____chimes_ret_var_1; ____chimes_ret_var_1 = ((1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); return ____chimes_ret_var_1; ; }
# 73 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_BROW_npm(int r, int c) { int ____chimes_ret_var_2; ____chimes_ret_var_2 = ((2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c))); return ____chimes_ret_var_2; ; }
# 75 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_ROW_npm(int guid) { int ____chimes_ret_var_3; ____chimes_ret_var_3 = ((guid % (n_tiles_x * n_tiles_y)) / n_tiles_x); return ____chimes_ret_var_3; ; }
# 76 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_COL_npm(int guid) { int ____chimes_ret_var_4; ____chimes_ret_var_4 = ((guid % (n_tiles_x * n_tiles_y)) % n_tiles_x); return ____chimes_ret_var_4; ; }
# 78 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_KIND_npm(int guid) { int ____chimes_ret_var_5; ____chimes_ret_var_5 = (guid / (n_tiles_x * n_tiles_y)); return ____chimes_ret_var_5; ; }
# 225 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_npm(int row, int col) {
# 226 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y-1)) { int ____chimes_ret_var_6; ____chimes_ret_var_6 = (0); return ____chimes_ret_var_6; ; };
# 227 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x-1)) { int ____chimes_ret_var_7; ____chimes_ret_var_7 = (0); return ____chimes_ret_var_7; ; };
# 228 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 229 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int success = 0;
# 230 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int await_tile = GUID_DIAG_npm(row, col);
# 231 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 232 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ((put_counts[await_tile] < NUM_DEPS) ? static_cast<void> (0) : __assert_fail ("put_counts[await_tile] < NUM_DEPS", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 233, __PRETTY_FUNCTION__));
# 234 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int ____chimes_ret_var_8; ____chimes_ret_var_8 = (success); return ____chimes_ret_var_8; ;
# 240 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 242 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_DIAG_npm(int row, int col) { int ____chimes_ret_var_9; ____chimes_ret_var_9 = (PUT_npm(row+1, col+1)); return ____chimes_ret_var_9; ; }
# 243 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_RCOL_npm(int row, int col) { int ____chimes_ret_var_10; ____chimes_ret_var_10 = (PUT_npm(row, col+1)); return ____chimes_ret_var_10; ; }
# 244 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_BROW_npm(int row, int col) { int ____chimes_ret_var_11; ____chimes_ret_var_11 = (PUT_npm(row+1, col)); return ____chimes_ret_var_11; ; }
# 248 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char char_mapping_npm ( char c ) {
# 249 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char to_be_returned = -1;
# 250 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char ____chimes_ret_var_12; ____chimes_ret_var_12 = (to_be_returned); return ____chimes_ret_var_12; ;
# 258 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 260 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns ) {
# 261 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int i, j;
# 262 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 265 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(stdout, "\n");
# 267 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout,"--------------------------------\n");
# 269 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 280 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
static void random_init_npm(signed char *s, unsigned long long len) {
# 281 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for (unsigned long long i = 0; i < len; i++) {
# 282 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        int r = rand() % 5;
# 283 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ((r >= 0 && r < 5) ? static_cast<void> (0) : __assert_fail ("r >= 0 && r < 5", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 283, __PRETTY_FUNCTION__));
# 284 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        s[i] = r;
# 285 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 286 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 288 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size ) {
# 289 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    size_t non_ws_index = 0, traverse_index = 0;
# 290 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 291 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 292 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        char curr_char = buffer[traverse_index];
# 293 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 294 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 295 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 296 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = char_mapping_npm(curr_char);
# 297 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                break;
# 298 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 299 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 300 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 301 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t ____chimes_ret_var_13; ____chimes_ret_var_13 = (non_ws_index); return ____chimes_ret_var_13; ;
# 302 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 304 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars ) {
# 305 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 306 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    long file_size = ftell (file);
# 307 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 308 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 309 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char *file_buffer = (signed char *)malloc_wrapper((1+file_size)*sizeof(signed char), 17943224531889795130UL, 0, 0);
# 310 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 311 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    size_t n_read_from_file = fread(file_buffer, sizeof(signed char), file_size, file);
# 312 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 313 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 314 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 315 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    *n_chars = clear_whitespaces_do_mapping_npm(file_buffer, file_size);
# 316 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char * ____chimes_ret_var_14; ____chimes_ret_var_14 = (file_buffer); return ____chimes_ret_var_14; ;
# 317 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 319 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void add_tile_to_run_npm(int row, int col, tiles_to_run *q) {
# 320 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ((q->length < q->capacity) ? static_cast<void> (0) : __assert_fail ("q->length < q->capacity", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 320, __PRETTY_FUNCTION__));
# 321 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 322 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 323 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 324 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 326 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tile* pop_next_tile_npm(tiles_to_run *q) {
# 327 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ((q->length >= 0) ? static_cast<void> (0) : __assert_fail ("q->length >= 0", "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 327, __PRETTY_FUNCTION__));
# 328 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 329 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile * ____chimes_ret_var_15; ____chimes_ret_var_15 = (__null); return ____chimes_ret_var_15; ;
# 330 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } else {
# 331 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        tile *next = q->q;
# 332 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 333 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 334 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile * ____chimes_ret_var_16; ____chimes_ret_var_16 = (next); return ____chimes_ret_var_16; ;
# 335 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 336 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 338 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void task_func_npm(int i, int j, tiles_to_run *next) {
# 339 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ii, jj;
# 340 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int threadId = omp_get_thread_num();
# 341 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ** local_matrix = worker_tiles[threadId];
# 342 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 343 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int diag_index = ((n_tiles_y - 1) + (j - i));
# 344 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int * diag = &tile_diag[diag_index];
# 345 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int * tile_edge_y = tile_edges_y[i];
# 346 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int * tile_edge_x = tile_edges_x[j];
# 347 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 348 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 349 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 350 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii-1]; };
# 352 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 353 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii-1]; };
# 355 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 356 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 357 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 358 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   signed char char_from_1 = string_1[(j-1)*tile_width+jj-1];
# 359 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   signed char char_from_2 = string_2[(i-1)*tile_height+ii-1];
# 360 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 361 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int diag_score = local_matrix[ii-1][jj-1] + alignment_score_matrix[char_from_2][char_from_1];
# 362 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int left_score = local_matrix[ii ][jj-1] + alignment_score_matrix[char_from_1][GAP];
# 363 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int top_score = local_matrix[ii-1][jj ] + alignment_score_matrix[GAP][char_from_2];
# 364 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 365 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
# 366 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 367 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  }
# 368 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 369 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 370 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 371 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { tile_edge_y[ii-1] = local_matrix[ii][tile_width]; };
# 373 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { tile_edge_x[ii-1] = local_matrix[tile_height][ii]; };
# 375 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 376 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 378 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        {
# 379 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 380 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_DIAG_npm(i, j);
# 381 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 382 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int row = i + 1;
# 383 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int col = j + 1;
# 384 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 385 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 386 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 387 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 388 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 389 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_RCOL_npm(i, j);
# 390 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 391 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int row = i;
# 392 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int col = j + 1;
# 393 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 394 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 395 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 396 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 397 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 398 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_BROW_npm(i, j);
# 399 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 400 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int row = i + 1;
# 401 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int col = j;
# 402 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 403 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 404 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 405 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 406 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 407 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 408 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 409 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 410 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 411 "/home/jmg3/num-debug/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}





static int module_init() {
    init_module(17943224531889794728UL, 36, 19, 0, 20, 18, 0, 18, 21, 0, 7,
                           &____alias_loc_id_0, (unsigned)32, (unsigned)0, (unsigned)0, (17943224531889794728UL + 170UL), (17943224531889794728UL + 583UL), (17943224531889794728UL + 604UL), (17943224531889794728UL + 606UL), (17943224531889794728UL + 795UL), (17943224531889794728UL + 974UL), (17943224531889794728UL + 975UL), (17943224531889794728UL + 976UL), (17943224531889794728UL + 977UL), (17943224531889794728UL + 978UL), (17943224531889794728UL + 980UL), (17943224531889794728UL + 981UL), (17943224531889794728UL + 982UL), (17943224531889794728UL + 983UL), (17943224531889794728UL + 984UL), (17943224531889794728UL + 985UL), (17943224531889794728UL + 986UL), (17943224531889794728UL + 987UL), (17943224531889794728UL + 988UL), (17943224531889794728UL + 989UL), (17943224531889794728UL + 990UL), (17943224531889794728UL + 991UL), (17943224531889794728UL + 992UL), (17943224531889794728UL + 1431UL), (17943224531889794728UL + 1440UL), (17943224531889794728UL + 1734UL), (17943224531889794728UL + 1736UL), (17943224531889794728UL + 1742UL), (17943224531889794728UL + 1744UL), (17943224531889794728UL + 1746UL), (17943224531889794728UL + 1752UL), (17943224531889794728UL + 1754UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 1UL), (17943224531889794728UL + 2UL), (17943224531889794728UL + 3UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 26UL), (17943224531889794728UL + 27UL), (17943224531889794728UL + 28UL),
                           &____alias_loc_id_3, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 49UL), (17943224531889794728UL + 50UL), (17943224531889794728UL + 51UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)0, (unsigned)0, (17943224531889794728UL + 72UL), (17943224531889794728UL + 73UL),
                           &____alias_loc_id_5, (unsigned)2, (unsigned)0, (unsigned)0, (17943224531889794728UL + 88UL), (17943224531889794728UL + 89UL),
                           &____alias_loc_id_6, (unsigned)2, (unsigned)0, (unsigned)0, (17943224531889794728UL + 104UL), (17943224531889794728UL + 105UL),
                           &____alias_loc_id_7, (unsigned)9, (unsigned)0, (unsigned)0, (17943224531889794728UL + 118UL), (17943224531889794728UL + 119UL), (17943224531889794728UL + 120UL), (17943224531889794728UL + 121UL), (17943224531889794728UL + 122UL), (17943224531889794728UL + 123UL), (17943224531889794728UL + 124UL), (17943224531889794728UL + 125UL), (17943224531889794728UL + 170UL),
                           &____alias_loc_id_8, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 198UL), (17943224531889794728UL + 199UL), (17943224531889794728UL + 200UL),
                           &____alias_loc_id_9, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 216UL), (17943224531889794728UL + 217UL), (17943224531889794728UL + 218UL),
                            &____alias_loc_id_10, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 233UL), (17943224531889794728UL + 234UL), (17943224531889794728UL + 235UL),
                            &____alias_loc_id_11, (unsigned)3, (unsigned)0, (unsigned)0, (17943224531889794728UL + 250UL), (17943224531889794728UL + 251UL), (17943224531889794728UL + 252UL),
                            &____alias_loc_id_12, (unsigned)5, (unsigned)0, (unsigned)0, (17943224531889794728UL + 276UL), (17943224531889794728UL + 277UL), (17943224531889794728UL + 278UL), (17943224531889794728UL + 279UL), (17943224531889794728UL + 280UL),
                            &____alias_loc_id_13, (unsigned)7, (unsigned)0, (unsigned)0, (17943224531889794728UL + 332UL), (17943224531889794728UL + 333UL), (17943224531889794728UL + 334UL), (17943224531889794728UL + 335UL), (17943224531889794728UL + 336UL), (17943224531889794728UL + 337UL), (17943224531889794728UL + 378UL),
                            &____alias_loc_id_14, (unsigned)8, (unsigned)0, (unsigned)0, (17943224531889794728UL + 380UL), (17943224531889794728UL + 381UL), (17943224531889794728UL + 382UL), (17943224531889794728UL + 383UL), (17943224531889794728UL + 384UL), (17943224531889794728UL + 385UL), (17943224531889794728UL + 402UL), (17943224531889794728UL + 425UL),
                            &____alias_loc_id_15, (unsigned)5, (unsigned)0, (unsigned)0, (17943224531889794728UL + 435UL), (17943224531889794728UL + 436UL), (17943224531889794728UL + 437UL), (17943224531889794728UL + 457UL), (17943224531889794728UL + 463UL),
                            &____alias_loc_id_16, (unsigned)6, (unsigned)0, (unsigned)0, (17943224531889794728UL + 489UL), (17943224531889794728UL + 490UL), (17943224531889794728UL + 491UL), (17943224531889794728UL + 492UL), (17943224531889794728UL + 493UL), (17943224531889794728UL + 505UL),
                            &____alias_loc_id_17, (unsigned)29, (unsigned)0, (unsigned)0, (17943224531889794728UL + 170UL), (17943224531889794728UL + 543UL), (17943224531889794728UL + 544UL), (17943224531889794728UL + 545UL), (17943224531889794728UL + 546UL), (17943224531889794728UL + 547UL), (17943224531889794728UL + 548UL), (17943224531889794728UL + 549UL), (17943224531889794728UL + 550UL), (17943224531889794728UL + 551UL), (17943224531889794728UL + 552UL), (17943224531889794728UL + 553UL), (17943224531889794728UL + 554UL), (17943224531889794728UL + 555UL), (17943224531889794728UL + 556UL), (17943224531889794728UL + 557UL), (17943224531889794728UL + 558UL), (17943224531889794728UL + 559UL), (17943224531889794728UL + 560UL), (17943224531889794728UL + 561UL), (17943224531889794728UL + 562UL), (17943224531889794728UL + 563UL), (17943224531889794728UL + 564UL), (17943224531889794728UL + 565UL), (17943224531889794728UL + 566UL), (17943224531889794728UL + 567UL), (17943224531889794728UL + 568UL), (17943224531889794728UL + 606UL), (17943224531889794728UL + 797UL),
                            &____alias_loc_id_18, (unsigned)31, (unsigned)0, (unsigned)0, (17943224531889794728UL + 170UL), (17943224531889794728UL + 583UL), (17943224531889794728UL + 604UL), (17943224531889794728UL + 606UL), (17943224531889794728UL + 795UL), (17943224531889794728UL + 974UL), (17943224531889794728UL + 975UL), (17943224531889794728UL + 976UL), (17943224531889794728UL + 977UL), (17943224531889794728UL + 978UL), (17943224531889794728UL + 980UL), (17943224531889794728UL + 981UL), (17943224531889794728UL + 982UL), (17943224531889794728UL + 983UL), (17943224531889794728UL + 984UL), (17943224531889794728UL + 985UL), (17943224531889794728UL + 986UL), (17943224531889794728UL + 987UL), (17943224531889794728UL + 988UL), (17943224531889794728UL + 989UL), (17943224531889794728UL + 993UL), (17943224531889794728UL + 994UL), (17943224531889794728UL + 1431UL), (17943224531889794728UL + 1440UL), (17943224531889794728UL + 1734UL), (17943224531889794728UL + 1736UL), (17943224531889794728UL + 1742UL), (17943224531889794728UL + 1744UL), (17943224531889794728UL + 1746UL), (17943224531889794728UL + 1752UL), (17943224531889794728UL + 1754UL),
                            &____alias_loc_id_19, (unsigned)5, (unsigned)0, (unsigned)0, (17943224531889794728UL + 1688UL), (17943224531889794728UL + 1689UL), (17943224531889794728UL + 1690UL), (17943224531889794728UL + 1691UL), (17943224531889794728UL + 1720UL),
                            "GUID_BROW", 0, "_Z9GUID_BROWii", "_Z13GUID_BROW_npmii", 0, 2, 0UL, 0UL, 0UL, 0,
                            "task_func", 0, "_Z9task_funciiP13_tiles_to_run", "_Z13task_func_npmiiP13_tiles_to_run", 0, 3, 0UL, 0UL, (17943224531889794728UL + 973UL), 0UL, 7, "omp_get_thread_num", 0, 0UL, "PUT_DIAG", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (17943224531889794728UL + 973UL), 0UL, "PUT_RCOL", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (17943224531889794728UL + 973UL), 0UL, "PUT_BROW", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (17943224531889794728UL + 973UL), 0UL,
                            "clear_whitespaces_do_mapping", 0, "_Z28clear_whitespaces_do_mappingPal", "_Z32clear_whitespaces_do_mapping_npmPal", 0, 2, (17943224531889794728UL + 378UL), 0UL, 0UL, 1, "char_mapping", 1, 0UL, 0UL,
                            "GUID_KIND", 0, "_Z9GUID_KINDi", "_Z13GUID_KIND_npmi", 0, 1, 0UL, 0UL, 0,
                            "GUID_DIAG", 0, "_Z9GUID_DIAGii", "_Z13GUID_DIAG_npmii", 0, 2, 0UL, 0UL, 0UL, 0,
                            "print_matrix", 0, "_Z12print_matrixPPiii", "_Z16print_matrix_npmPPiii", 0, 3, (17943224531889794728UL + 327UL), 0UL, 0UL, 0UL, 3, "fprintf", 3, (17943224531889794728UL + 301UL), (17943224531889794728UL + 1759UL), 0UL, 0UL, "fprintf", 2, (17943224531889794728UL + 301UL), (17943224531889794728UL + 1760UL), 0UL, "fprintf", 2, (17943224531889794728UL + 301UL), (17943224531889794728UL + 1755UL), 0UL,
                            "PUT_BROW", 0, "_Z8PUT_BROWii", "_Z12PUT_BROW_npmii", 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "pop_next_tile", 0, "_Z13pop_next_tileP13_tiles_to_run", "_Z17pop_next_tile_npmP13_tiles_to_run", 0, 1, (17943224531889794728UL + 505UL), (17943224531889794728UL + 1527UL), 1, "__assert_fail", 4, (17943224531889794728UL + 1764UL), (17943224531889794728UL + 1756UL), 0UL, (17943224531889794728UL + 1765UL), 0UL,
                            "PUT_RCOL", 0, "_Z8PUT_RCOLii", "_Z12PUT_RCOL_npmii", 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "char_mapping", 0, "_Z12char_mappingc", "_Z16char_mapping_npmc", 0, 1, 0UL, 0UL, 0,
                            "GUID_RCOL", 0, "_Z9GUID_RCOLii", "_Z13GUID_RCOL_npmii", 0, 2, 0UL, 0UL, 0UL, 0,
                            "read_file", 0, "_Z9read_fileP8_IO_FILEPm", "_Z13read_file_npmP8_IO_FILEPm", 0, 2, (17943224531889794728UL + 424UL), (17943224531889794728UL + 425UL), (17943224531889794728UL + 402UL), 6, "fseek", 3, (17943224531889794728UL + 424UL), 0UL, 0UL, 0UL, "ftell", 1, (17943224531889794728UL + 424UL), 0UL, "fseek", 3, (17943224531889794728UL + 424UL), 0UL, 0UL, 0UL, "malloc", 1, 0UL, (17943224531889794728UL + 402UL), "fread", 4, (17943224531889794728UL + 402UL), 0UL, 0UL, (17943224531889794728UL + 424UL), 0UL, "clear_whitespaces_do_mapping", 2, (17943224531889794728UL + 402UL), 0UL, 0UL,
                            "random_init", 1, (void *)(&random_init_npm), (void *)__null, 0, 2, (17943224531889794728UL + 1720UL), 0UL, 0UL, 2, "rand", 0, 0UL, "__assert_fail", 4, (17943224531889794728UL + 1770UL), (17943224531889794728UL + 1756UL), 0UL, (17943224531889794728UL + 1778UL), 0UL,
                            "PUT_DIAG", 0, "_Z8PUT_DIAGii", "_Z12PUT_DIAG_npmii", 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "PUT", 0, "_Z3PUTii", "_Z7PUT_npmii", 0, 2, 0UL, 0UL, 0UL, 2, "GUID_DIAG", 2, 0UL, 0UL, 0UL, "__assert_fail", 4, (17943224531889794728UL + 1755UL), (17943224531889794728UL + 1756UL), 0UL, (17943224531889794728UL + 1757UL), 0UL,
                            "add_tile_to_run", 0, "_Z15add_tile_to_runiiP13_tiles_to_run", "_Z19add_tile_to_run_npmiiP13_tiles_to_run", 0, 3, 0UL, 0UL, (17943224531889794728UL + 457UL), 0UL, 1, "__assert_fail", 4, (17943224531889794728UL + 1762UL), (17943224531889794728UL + 1756UL), 0UL, (17943224531889794728UL + 1763UL), 0UL,
                            "TILE_ROW", 0, "_Z8TILE_ROWi", "_Z12TILE_ROW_npmi", 0, 1, 0UL, 0UL, 0,
                            "TILE_COL", 0, "_Z8TILE_COLi", "_Z12TILE_COL_npmi", 0, 1, 0UL, 0UL, 0,
                           "GUID_BROW", &(____chimes_does_checkpoint_GUID_BROW_npm),
                           "task_func", &(____chimes_does_checkpoint_task_func_npm),
                           "clear_whitespaces_do_mapping", &(____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm),
                           "GUID_KIND", &(____chimes_does_checkpoint_GUID_KIND_npm),
                           "GUID_DIAG", &(____chimes_does_checkpoint_GUID_DIAG_npm),
                           "print_matrix", &(____chimes_does_checkpoint_print_matrix_npm),
                           "PUT_BROW", &(____chimes_does_checkpoint_PUT_BROW_npm),
                           "pop_next_tile", &(____chimes_does_checkpoint_pop_next_tile_npm),
                           "PUT_RCOL", &(____chimes_does_checkpoint_PUT_RCOL_npm),
                           "char_mapping", &(____chimes_does_checkpoint_char_mapping_npm),
                           "GUID_RCOL", &(____chimes_does_checkpoint_GUID_RCOL_npm),
                           "read_file", &(____chimes_does_checkpoint_read_file_npm),
                           "random_init", &(____chimes_does_checkpoint_random_init_npm),
                           "PUT_DIAG", &(____chimes_does_checkpoint_PUT_DIAG_npm),
                           "PUT", &(____chimes_does_checkpoint_PUT_npm),
                           "add_tile_to_run", &(____chimes_does_checkpoint_add_tile_to_run_npm),
                           "TILE_ROW", &(____chimes_does_checkpoint_TILE_ROW_npm),
                           "TILE_COL", &(____chimes_does_checkpoint_TILE_COL_npm),
                             (17943224531889794728UL + 604UL), (17943224531889794728UL + 606UL),
                             (17943224531889794728UL + 988UL), (17943224531889794728UL + 1431UL),
                             (17943224531889794728UL + 989UL), (17943224531889794728UL + 1431UL),
                             (17943224531889794728UL + 551UL), (17943224531889794728UL + 170UL),
                             (17943224531889794728UL + 553UL), (17943224531889794728UL + 606UL),
                             (17943224531889794728UL + 332UL), (17943224531889794728UL + 378UL),
                             (17943224531889794728UL + 276UL), (17943224531889794728UL + 327UL),
                             (17943224531889794728UL + 490UL), (17943224531889794728UL + 505UL),
                             (17943224531889794728UL + 491UL), (17943224531889794728UL + 1527UL),
                             (17943224531889794728UL + 492UL), (17943224531889794728UL + 1527UL),
                             (17943224531889794728UL + 493UL), (17943224531889794728UL + 1527UL),
                             (17943224531889794728UL + 457UL), (17943224531889794728UL + 463UL),
                             (17943224531889794728UL + 976UL), (17943224531889794728UL + 1682UL),
                             (17943224531889794728UL + 795UL), (17943224531889794728UL + 797UL),
                             (17943224531889794728UL + 1734UL), (17943224531889794728UL + 695UL),
                             (17943224531889794728UL + 327UL), (17943224531889794728UL + 308UL),
                             (17943224531889794728UL + 545UL), (17943224531889794728UL + 973UL),
                             (17943224531889794728UL + 505UL), (17943224531889794728UL + 1527UL),
                             (17943224531889794728UL + 583UL), (17943224531889794728UL + 795UL),
                             (17943224531889794728UL + 992UL), (17943224531889794728UL + 1431UL),
                             (17943224531889794728UL + 1758UL), (17943224531889794728UL + 301UL),
                             (17943224531889794728UL + 380UL), (17943224531889794728UL + 424UL),
                             (17943224531889794728UL + 381UL), (17943224531889794728UL + 425UL),
                             (17943224531889794728UL + 383UL), (17943224531889794728UL + 402UL),
                             (17943224531889794728UL + 385UL), (17943224531889794728UL + 402UL),
                             (17943224531889794728UL + 489UL), (17943224531889794728UL + 1527UL),
                             (17943224531889794728UL + 1688UL), (17943224531889794728UL + 1720UL),
                             (17943224531889794728UL + 552UL), (17943224531889794728UL + 606UL),
                             (17943224531889794728UL + 549UL), (17943224531889794728UL + 795UL),
                             (17943224531889794728UL + 1431UL), (17943224531889794728UL + 1440UL),
                             (17943224531889794728UL + 1682UL), (17943224531889794728UL + 1021UL),
                             (17943224531889794728UL + 1742UL), (17943224531889794728UL + 604UL),
                             (17943224531889794728UL + 1744UL), (17943224531889794728UL + 170UL),
                             (17943224531889794728UL + 437UL), (17943224531889794728UL + 457UL),
                             (17943224531889794728UL + 1746UL), (17943224531889794728UL + 583UL),
                             (17943224531889794728UL + 990UL), (17943224531889794728UL + 1527UL),
                     "Nucleotide", 32UL, 0,
                     "TILE_DEPS", 32UL, 0,
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "_tile", 64UL, 2, "int", (int)__builtin_offsetof (struct _tile, row), "int", (int)__builtin_offsetof (struct _tile, col),
                     "_tiles_to_run", 192UL, 4, "%struct._tile*", (int)__builtin_offsetof (struct _tiles_to_run, q), "%struct._tile*", (int)__builtin_offsetof (struct _tiles_to_run, base), "int", (int)__builtin_offsetof (struct _tiles_to_run, capacity), "int", (int)__builtin_offsetof (struct _tiles_to_run, length),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "GUID_BROW", "_Z9GUID_BROWii", 0,
                             "task_func", "_Z9task_funciiP13_tiles_to_run", 6, "PUT_DIAG", "add_tile_to_run", "PUT_RCOL", "add_tile_to_run", "PUT_BROW", "add_tile_to_run",
                             "clear_whitespaces_do_mapping", "_Z28clear_whitespaces_do_mappingPal", 1, "char_mapping",
                             "GUID_KIND", "_Z9GUID_KINDi", 0,
                             "main", "main", 10, "random_init", "random_init", "PUT_DIAG", "PUT_DIAG", "PUT_DIAG", "PUT_RCOL", "PUT_BROW", "pop_next_tile", "task_func", "checkpoint",
                             "GUID_DIAG", "_Z9GUID_DIAGii", 0,
                             "print_matrix", "_Z12print_matrixPPiii", 0,
                             "PUT_BROW", "_Z8PUT_BROWii", 1, "PUT",
                             "pop_next_tile", "_Z13pop_next_tileP13_tiles_to_run", 0,
                             "PUT_RCOL", "_Z8PUT_RCOLii", 1, "PUT",
                             "char_mapping", "_Z12char_mappingc", 0,
                             "GUID_RCOL", "_Z9GUID_RCOLii", 0,
                             "read_file", "_Z9read_fileP8_IO_FILEPm", 1, "clear_whitespaces_do_mapping",
                             "random_init", "_ZL11random_initPay", 0,
                             "PUT_DIAG", "_Z8PUT_DIAGii", 1, "PUT",
                             "PUT", "_Z3PUTii", 1, "GUID_DIAG",
                             "add_tile_to_run", "_Z15add_tile_to_runiiP13_tiles_to_run", 0,
                             "TILE_ROW", "_Z8TILE_ROWi", 0,
                             "TILE_COL", "_Z8TILE_COLi", 0,
        "GUID_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT", 0UL, (int)2, 0UL, 0UL,
        "PUT", 0UL, (int)2, 0UL, 0UL,
        "PUT", 0UL, (int)2, 0UL, 0UL,
        "char_mapping", 0UL, (int)1, 0UL,
        "clear_whitespaces_do_mapping", 0UL, (int)2, 17943224531889795130UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "add_tile_to_run", 0UL, (int)3, 0UL, 0UL, 17943224531889795701UL,
        "PUT_RCOL", 0UL, (int)2, 0UL, 0UL,
        "add_tile_to_run", 0UL, (int)3, 0UL, 0UL, 17943224531889795701UL,
        "PUT_BROW", 0UL, (int)2, 0UL, 0UL,
        "add_tile_to_run", 0UL, (int)3, 0UL, 0UL, 17943224531889795701UL,
        "random_init", 0UL, (int)2, 17943224531889795423UL, 0UL,
        "random_init", 0UL, (int)2, 17943224531889795423UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT_RCOL", 0UL, (int)2, 0UL, 0UL,
        "PUT_BROW", 0UL, (int)2, 0UL, 0UL,
        "pop_next_tile", 17943224531889796255UL, (int)1, 17943224531889796159UL,
        "task_func", 0UL, (int)3, 0UL, 0UL, 17943224531889796159UL);
    register_global_var("global|string_1", "i8*", (void *)(&string_1), 8, 1, 0, (17943224531889794728UL + 1734UL), 0);
    register_global_var("global|string_2", "i8*", (void *)(&string_2), 8, 1, 0, (17943224531889794728UL + 1734UL), 0);
    register_global_var("global|strlen_1", "i32", (void *)(&strlen_1), 4, 0, 0, 0UL, 0);
    register_global_var("global|strlen_2", "i32", (void *)(&strlen_2), 4, 0, 0, 0UL, 0);
    register_global_var("global|tile_width", "i32", (void *)(&tile_width), 4, 0, 0, 0UL, 0);
    register_global_var("global|tile_height", "i32", (void *)(&tile_height), 4, 0, 0, 0UL, 0);
    register_global_var("global|n_tiles_x", "i32", (void *)(&n_tiles_x), 4, 0, 0, 0UL, 0);
    register_global_var("global|n_tiles_y", "i32", (void *)(&n_tiles_y), 4, 0, 0, 0UL, 0);
    register_global_var("global|tile_edges_x", "i32**", (void *)(&tile_edges_x), 8, 1, 0, (17943224531889794728UL + 1742UL), 0);
    register_global_var("global|tile_edges_y", "i32**", (void *)(&tile_edges_y), 8, 1, 0, (17943224531889794728UL + 1742UL), 0);
    register_global_var("global|tile_diag", "i32*", (void *)(&tile_diag), 8, 1, 0, (17943224531889794728UL + 1744UL), 0);
    register_global_var("global|put_counts", "i32*", (void *)(&put_counts), 8, 1, 0, (17943224531889794728UL + 1744UL), 0);
    register_global_var("global|worker_tiles", "i32***", (void *)(&worker_tiles), 8, 1, 0, (17943224531889794728UL + 1746UL), 0);
    register_global_var("global|max_buffer", "i32*", (void *)(&max_buffer), 8, 1, 0, (17943224531889794728UL + 1744UL), 0);
    register_global_var("global|temp_buffer", "i32*", (void *)(&temp_buffer), 8, 1, 0, (17943224531889794728UL + 1744UL), 0);
    register_global_var("global|max_size", "i32", (void *)(&max_size), 4, 0, 0, 0UL, 0);
    register_global_var("global|done", "i32", (void *)(&done), 4, 0, 0, 0UL, 0);
    register_global_var("global|nthreads", "i32", (void *)(&nthreads), 4, 0, 0, 0UL, 0);
    register_global_var("global|begin", "%struct.timeval = type { i64, i64 }", (void *)(&begin), 16, 0, 1, 0UL, 0);
    register_global_var("global|end", "%struct.timeval = type { i64, i64 }", (void *)(&end), 16, 0, 1, 0UL, 0);
    register_global_var("global|dsizes", "[3 x i32]", (void *)(&dsizes), 12, 0, 0, 0UL, 0);
    register_global_var("global|alignment_score_matrix", "[5 x [5 x i8]]", (void *)(&alignment_score_matrix), 25, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
