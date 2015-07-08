# 1 "kdtree.cc.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "kdtree.cc.pre.transformed.cpp"
static int ____chimes_does_checkpoint_downheap_npm = 1;
static int ____chimes_does_checkpoint_heapsort_npm = 1;
static int ____chimes_does_checkpoint_sweepkdtree_npm = 1;
static int ____chimes_does_checkpoint_empty_kdnode_npm = 1;
static int ____chimes_does_checkpoint_searchkdtree_npm = 1;
static int ____chimes_does_checkpoint_buildkdtree_npm = 1;
static int ____chimes_does_checkpoint_coordkdtree_npm = 1;
static int ____chimes_does_checkpoint_init_kdnode_npm = 1;
static int ____chimes_does_checkpoint_atol_npm = 1;
static int ____chimes_does_checkpoint_clock_gettime_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_int32_npm = 1;
static int ____chimes_does_checkpoint_spec_init_genrand_npm = 1;

static int ____must_checkpoint_main_startTime_0 = 2;
static int ____must_checkpoint_main_endTime_0 = 2;

static int ____must_manage_downheap = 2;
static int ____must_manage_heapsort = 2;
static int ____must_manage_sweepkdtree = 2;
static int ____must_manage_empty_kdnode = 2;
static int ____must_manage_searchkdtree = 2;
static int ____must_manage_buildkdtree = 2;
static int ____must_manage_coordkdtree = 2;
static int ____must_manage_init_kdnode = 2;

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
static unsigned ____alias_loc_id_20;
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
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
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 11 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
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



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdarg.h" 1 3 4
# 40 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdarg.h" 3 4
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
# 12 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






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





# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
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
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 13 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const void *
memchr (__const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 104 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 128 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
# 165 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strchr (__const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strrchr (__const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strpbrk (char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strpbrk (__const char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strstr (char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strstr (__const char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 382 "/usr/include/string.h" 3 4
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
index (__const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
rindex (__const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 646 "/usr/include/string.h" 3 4
}
# 14 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 15 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 15 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"

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



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4




typedef float float_t;
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
# 25 "/usr/include/bits/mathinline.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/mathinline.h" 2 3 4
# 37 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{




  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return __m & 0x8;

}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{




  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return __m & 0x80;

}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4
}
# 17 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 18 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 18 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 19 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 21 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 21 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 22 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 23 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"

# 1 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.h" 1
# 50 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.h"
extern "C" {


void spec_srand(int seed);
double spec_rand(void);
long spec_lrand48(void);


void spec_init_genrand(unsigned long s);





void spec_init_by_array(unsigned long init_key[], int key_length);


unsigned long spec_genrand_int32(void);


long spec_genrand_int31(void);


double spec_genrand_real1(void);


double spec_genrand_real2(void);


double spec_genrand_real3(void);


double spec_genrand_res53(void);


}
# 25 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 25 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 26 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 27 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"

# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/omp.h" 1 3 4
# 34 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/omp.h" 3 4
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
# 29 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc" 2
# 52 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 52 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
struct kdnode {
# 53 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long n;
# 54 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  kdnode *lo, *hi;
# 55 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 56 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 57 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 58 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  int coord[(3)];
# 59 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 60 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
};
# 61 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 62 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 63 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *empty_kdnode_npm();
kdnode *empty_kdnode_quick(); kdnode *empty_kdnode();
kdnode *empty_kdnode_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&empty_kdnode), "empty_kdnode", &____must_manage_empty_kdnode, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 64 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     kdnode *empty; empty = ((kdnode *)malloc_wrapper(sizeof(kdnode), 339782406926629104UL, 0, 1, (int)sizeof(struct kdnode), 2, (int)__builtin_offsetof(struct kdnode, lo), (int)__builtin_offsetof(struct kdnode, hi))) ;
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    memset(empty, 0x00, sizeof(kdnode));
# 66 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     struct kdnode *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (empty); rm_stack(true, 339782406926629104UL, "empty_kdnode", &____must_manage_empty_kdnode, ____alias_loc_id_12, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(true, 339782406926629104UL, "empty_kdnode", &____must_manage_empty_kdnode, ____alias_loc_id_12, ____chimes_did_disable0, false); }
# 72 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *init_kdnode_npm(long long nn);
kdnode *init_kdnode_quick(long long nn); kdnode *init_kdnode(long long nn);
kdnode *init_kdnode_resumable(long long nn) {const int ____chimes_did_disable1 = new_stack((void *)(&init_kdnode), "init_kdnode", &____must_manage_init_kdnode, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     kdnode *empty; empty = ((kdnode *)malloc_wrapper(sizeof(kdnode), 339782406926629129UL, 0, 1, (int)sizeof(struct kdnode), 2, (int)__builtin_offsetof(struct kdnode, lo), (int)__builtin_offsetof(struct kdnode, hi))) ;
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    memset(empty, 0x00, sizeof(kdnode));
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    empty->n = nn;
# 81 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     struct kdnode *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (empty); rm_stack(true, 339782406926629129UL, "init_kdnode", &____must_manage_init_kdnode, ____alias_loc_id_13, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 82 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(true, 339782406926629129UL, "init_kdnode", &____must_manage_init_kdnode, ____alias_loc_id_13, ____chimes_did_disable1, false); }
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void downheap_npm(long long *a, long long n, long long k, int **x, int p);
void downheap_quick(long long *a, long long n, long long k, int **x, int p); void downheap(long long *a, long long n, long long k, int **x, int p);
void downheap_resumable(long long *a, long long n, long long k, int **x, int p)
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable2 = new_stack((void *)(&downheap), "downheap", &____must_manage_downheap, 5, 0, (size_t)(339782406926629256UL), (size_t)(0UL), (size_t)(0UL), (size_t)(339782406926629259UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long j; long long v; ;
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   v = a[k - 1];
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   while (k <= n / 2) {
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      j = k + k;
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((j < n) && (x[a[j - 1]][p] < x[a[j]][p])) {j++; };
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (x[v][p] >= x[a[j - 1]][p]) {break; };
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[k - 1] = a[j - 1];
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      k = j;
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   a[k - 1] = v;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "downheap", &____must_manage_downheap, ____alias_loc_id_14, ____chimes_did_disable2, false); }
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void heapsort_npm(long long *a, long long n, int **x, int p);
void heapsort_quick(long long *a, long long n, int **x, int p); void heapsort(long long *a, long long n, int **x, int p);
void heapsort_resumable(long long *a, long long n, int **x, int p)
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable3 = new_stack((void *)(&heapsort), "heapsort", &____must_manage_heapsort, 4, 0, (size_t)(339782406926629326UL), (size_t)(0UL), (size_t)(339782406926629328UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long k; long long v; ;
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (k = n / 2; k >= 1; k--) { ({ calling_npm("downheap", 0); downheap_npm(a, n, k, x, p); }); };
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   while (n > 1) {
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      v = a[0];
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[0] = a[n - 1];
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[n - 1] = v;
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      ({ calling_npm("downheap", 0); downheap_npm(a, --n, 1, x, p); });
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "heapsort", &____must_manage_heapsort, ____alias_loc_id_15, ____chimes_did_disable3, false); }
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void buildkdtree_npm(kdnode *curr, long long *xn, long long *yn, long long *zn, long long *wn, long long *tn, long long start, long long end, int **x, int p);
void buildkdtree_quick(kdnode *curr, long long *xn, long long *yn, long long *zn, long long *wn, long long *tn, long long start, long long end, int **x, int p); void buildkdtree(kdnode *curr, long long *xn, long long *yn, long long *zn, long long *wn, long long *tn, long long start, long long end, int **x, int p);
void buildkdtree_resumable(kdnode *curr, long long *xn, long long *yn,
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
             long long *zn, long long *wn,
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long *tn, long long start, long long end, int **x,
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    int p)
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable4 = new_stack((void *)(&buildkdtree), "buildkdtree", &____must_manage_buildkdtree, 10, 0, (size_t)(339782406926629725UL), (size_t)(339782406926629726UL), (size_t)(339782406926629727UL), (size_t)(339782406926629728UL), (size_t)(339782406926629729UL), (size_t)(339782406926629730UL), (size_t)(0UL), (size_t)(0UL), (size_t)(339782406926629733UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long i; long long middle; long long median; long long lower; long long upper; ;
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  p %= (3);
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (end == start) {{
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->n = xn[start];
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (end == start + 1) {
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (x[xn[start]][p] < x[xn[end]][p]) {{
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[end];
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = ({ calling_npm("init_kdnode", 0); init_kdnode_npm(xn[start]); });
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }; } else if (x[xn[start]][p] > x[xn[end]][p]) {
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[start];
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = ({ calling_npm("init_kdnode", 0); init_kdnode_npm(xn[end]); });
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    else {
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[start];
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->hi = ({ calling_npm("init_kdnode", 0); init_kdnode_npm(xn[end]); });
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  else {
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    middle = (start + end) / 2;
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    median = x[xn[middle]][p];
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = middle - 1; i >= start; i--) {
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (x[xn[i]][p] < median) {
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 break;
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 middle = i;
# 271 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 272 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 273 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 274 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 275 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 276 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->n = xn[middle];
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    lower = start - 1;
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    upper = middle;
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = start; i <= end; i++) {
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (yn[i] != xn[middle]) {
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (x[yn[i]][p] < median) {
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   tn[++lower] = yn[i];
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 } else {
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   tn[++upper] = yn[i];
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    lower = start - 1;
# 336 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    upper = middle;
# 337 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = start; i <= end; i++) {
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (zn[i] != xn[middle]) {
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (x[zn[i]][p] < median) {
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yn[++lower] = zn[i];
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 } else {
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yn[++upper] = zn[i];
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 344 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 345 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 346 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 347 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 348 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 349 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if ((3) == 4) {
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      lower = start - 1;
# 369 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      upper = middle;
# 370 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      for (i = start; i <= end; i++) {
# 371 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (wn[i] != xn[middle]) {
# 372 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (x[wn[i]][p] < median) {
# 373 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     zn[++lower] = wn[i];
# 374 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   } else {
# 375 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     zn[++upper] = wn[i];
# 376 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 377 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 378 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 379 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (lower >= start) {
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = ({ calling_npm("empty_kdnode", 0); empty_kdnode_npm(); });
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   buildkdtree(curr->lo, tn, yn, zn, xn, wn,
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   start, lower, x, p+1);
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       {
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 ({ calling_npm("buildkdtree", 0); buildkdtree_npm(curr->lo, tn, yn, xn, wn, zn, start, lower, x, p+1); });
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       }
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (upper > middle) {
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->hi = ({ calling_npm("empty_kdnode", 0); empty_kdnode_npm(); });
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 431 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 buildkdtree(curr->hi, tn, yn, zn, xn, wn,
# 432 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      middle + 1, end, x, p+1);
# 433 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 434 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 435 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 436 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 437 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 438 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 439 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 440 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 441 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       {
# 442 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 ({ calling_npm("buildkdtree", 0); buildkdtree_npm(curr->hi, tn, yn, xn, wn, zn, middle + 1, end, x, p+1); });
# 444 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       }
# 445 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 446 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 456 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "buildkdtree", &____must_manage_buildkdtree, ____alias_loc_id_16, ____chimes_did_disable4, false); }
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void coordkdtree_npm(kdnode *curr, int **x);
void coordkdtree_quick(kdnode *curr, int **x); void coordkdtree(kdnode *curr, int **x);
void coordkdtree_resumable(kdnode *curr, int **x)
# 473 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 474 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable5 = new_stack((void *)(&coordkdtree), "coordkdtree", &____must_manage_coordkdtree, 2, 0, (size_t)(339782406926629792UL), (size_t)(339782406926629793UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 475 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 476 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 477 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 478 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 479 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  { int i; for ( i = (0) ; i<(3); i++) {
# 480 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->coord[i] = x[curr->n][i];
# 481 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  } }
# 482 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 483 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 484 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->hi != __null) {
# 485 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    ({ calling_npm("coordkdtree", 0); coordkdtree_npm(curr->hi, x); });
# 486 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 487 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 488 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->lo != __null) {
# 489 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    ({ calling_npm("coordkdtree", 0); coordkdtree_npm(curr->lo, x); });
# 490 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 491 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "coordkdtree", &____must_manage_coordkdtree, ____alias_loc_id_17, ____chimes_did_disable5, false); }
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long searchkdtree_npm(kdnode *curr, kdnode *q, int p, long long cut, long long cut2, int depth, int depthmax);
long long searchkdtree_quick(kdnode *curr, kdnode *q, int p, long long cut, long long cut2, int depth, int depthmax); long long searchkdtree(kdnode *curr, kdnode *q, int p, long long cut, long long cut2, int depth, int depthmax);
long long searchkdtree_resumable(kdnode *curr, kdnode *q, int p,
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          long long cut, long long cut2,
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          int depth, int depthmax)
# 513 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable6 = new_stack((void *)(&searchkdtree), "searchkdtree", &____must_manage_searchkdtree, 7, 0, (size_t)(339782406926629983UL), (size_t)(339782406926629984UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 514 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long xij; long long yij; long long zij; long long wij; long long r2; long long count; long long countL; long long countH; ;
# 515 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 516 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 517 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 518 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   p %= (3);
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   countH = 0L;
# 532 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((curr->hi != __null) && (q->coord[p] + cut >= curr->coord[p])) {
# 533 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp task shared(countH) if(depth < depthmax) firstprivate(q, p, cut, cut2, depth, depthmax)
# 535 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 536 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 537 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread(); {
# 538 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       countH = ({ calling_npm("searchkdtree", 0); searchkdtree_npm(curr->hi, q, p+1, cut, cut2, depth+1, depthmax); });
# 539 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } reenable_current_thread(____chimes_disable0); }
# 540 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   countL = 0L;
# 554 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((curr->lo != __null) && (q->coord[p] - cut < curr->coord[p])) {
# 555 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp task shared(countL) if(depth < depthmax) firstprivate(q, p, cut, cut2, depth, depthmax)
# 557 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 558 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 559 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { bool ____chimes_disable1; ____chimes_disable1 = disable_current_thread(); {
# 560 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       countL = ({ calling_npm("searchkdtree", 0); searchkdtree_npm(curr->lo, q, p+1, cut, cut2, depth+1, depthmax); });
# 561 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } reenable_current_thread(____chimes_disable1); }
# 562 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 563 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 564 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   count = 0L;
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (q->n != curr->n) {
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      xij = q->coord[0] - curr->coord[0];
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      yij = q->coord[1] - curr->coord[1];
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      zij = q->coord[2] - curr->coord[2];
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      r2 = xij * xij + yij * yij + zij * zij;
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         wij = q->coord[3] - curr->coord[3];
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         r2 += wij * wij;
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 580 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (r2 < cut2) {
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 count++;
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp taskwait
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((count + countL + countH)); rm_stack(false, 0UL, "searchkdtree", &____must_manage_searchkdtree, ____alias_loc_id_18, ____chimes_did_disable6, false); return ____chimes_ret_var_2; ;
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "searchkdtree", &____must_manage_searchkdtree, ____alias_loc_id_18, ____chimes_did_disable6, false); }
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long sweepkdtree_npm(kdnode *curr, kdnode *r, long long cut, long long cut2, int depth, int depthmax);
long long sweepkdtree_quick(kdnode *curr, kdnode *r, long long cut, long long cut2, int depth, int depthmax); long long sweepkdtree(kdnode *curr, kdnode *r, long long cut, long long cut2, int depth, int depthmax);
long long sweepkdtree_resumable(kdnode *curr, kdnode *r, long long cut, long long cut2,
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         int depth, int depthmax)
# 613 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable7 = new_stack((void *)(&sweepkdtree), "sweepkdtree", &____must_manage_sweepkdtree, 6, 0, (size_t)(339782406926630066UL), (size_t)(339782406926630067UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 614 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long count; long long countL; long long countH; ;
# 615 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 616 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 617 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 618 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  count = ({ calling_npm("searchkdtree", 0); searchkdtree_npm(r, curr, 0, cut, cut2, depth, depthmax); });
# 619 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 620 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 621 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 622 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  countH = 0L;
# 623 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->hi != __null) {
# 624 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 625 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 626 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 627 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 628 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    {
# 629 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      countH = ({ calling_npm("sweepkdtree", 0); sweepkdtree_npm(curr->hi, r, cut, cut2, depth, depthmax); });
# 630 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 631 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 632 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 633 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 634 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 635 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  countL = 0L;
# 636 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->lo != __null) {
# 637 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 638 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 639 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 640 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 641 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    {
# 642 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      countL = ({ calling_npm("sweepkdtree", 0); sweepkdtree_npm(curr->lo, r, cut, cut2, depth, depthmax); });
# 643 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 644 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 645 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 646 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 647 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 648 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 649 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 650 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 651 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 652 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((count + countL + countH)); rm_stack(false, 0UL, "sweepkdtree", &____must_manage_sweepkdtree, ____alias_loc_id_19, ____chimes_did_disable7, false); return ____chimes_ret_var_3; ;
# 653 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "sweepkdtree", &____must_manage_sweepkdtree, ____alias_loc_id_19, ____chimes_did_disable7, false); }
# 664 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 664 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
static long (*____chimes_extern_func_atol)(const char *) = atol;static int (*____chimes_extern_func_clock_gettime)(int, struct timespec *) = clock_gettime;static unsigned long (*____chimes_extern_func_spec_genrand_int32)(void) = spec_genrand_int32;static void (*____chimes_extern_func_spec_init_genrand)(unsigned long) = spec_init_genrand;
int main_quick(int argc, char **argv); int main(int argc, char **argv);
int main_resumable(int argc, char **argv)
# 665 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable8 = new_stack((void *)(&main), "main", (int *)0, 2, 1, (size_t)(0UL), (size_t)(339782406926630474UL), "main|argv|0", (int *)0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; struct timespec endTime;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
struct timespec startTime;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *root;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *ti;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *wi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *zi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *yi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *xi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long count;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long cutoff2;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long cutoff;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long maxdepth;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long n;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long i;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
int **xyzw;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 register_stack_vars(15, "main|endTime|0", (int *)0x0, "%struct.timespec = type { i64, i64 }", (void *)(&endTime), (size_t)16, 0, 1, 0, "main|startTime|0", (int *)0x0, "%struct.timespec = type { i64, i64 }", (void *)(&startTime), (size_t)16, 0, 1, 0, "main|root|0", (int *)0x0, "%struct.kdnode*", (void *)(&root), (size_t)8, 1, 0, 0, "main|ti|0", (int *)0x0, "i64*", (void *)(&ti), (size_t)8, 1, 0, 0, "main|wi|0", (int *)0x0, "i64*", (void *)(&wi), (size_t)8, 1, 0, 0, "main|zi|0", (int *)0x0, "i64*", (void *)(&zi), (size_t)8, 1, 0, 0, "main|yi|0", (int *)0x0, "i64*", (void *)(&yi), (size_t)8, 1, 0, 0, "main|xi|0", (int *)0x0, "i64*", (void *)(&xi), (size_t)8, 1, 0, 0, "main|count|0", (int *)0x0, "i64", (void *)(&count), (size_t)8, 0, 0, 0, "main|cutoff2|0", (int *)0x0, "i64", (void *)(&cutoff2), (size_t)8, 0, 0, 0, "main|cutoff|0", (int *)0x0, "i64", (void *)(&cutoff), (size_t)8, 0, 0, 0, "main|maxdepth|0", (int *)0x0, "i64", (void *)(&maxdepth), (size_t)8, 0, 0, 0, "main|n|0", (int *)0x0, "i64", (void *)(&n), (size_t)8, 0, 0, 0, "main|i|0", (int *)0x0, "i64", (void *)(&i), (size_t)8, 0, 0, 0, "main|xyzw|0", (int *)0x0, "i32**", (void *)(&xyzw), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; } ; ;
# 667 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ;
# 668 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
        ;
# 669 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       ;
# 670 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   kdnode *query; ;
# 671 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      ;
# 672 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  double elapsedTime; ;
# 673 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 674 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 675 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 676 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (argc > 4) {
# 677 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    fprintf(stderr, "Usage: %s <n> <cutoffdivisor> <maxdepth>\n", argv[0]);
# 678 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    exit (1);
# 679 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 680 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 681 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 682 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 683 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 684 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 685 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 686 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 687 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (argc == 1) {{
# 688 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    n = (100000L);
# 689 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/(10);
# 690 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = (2);
# 691 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (argc == 2) {{
# 692 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_7); call_lbl_4: n = (____chimes_does_checkpoint_atol_npm ? ( ({ const char * ____chimes_arg0; if (!____chimes_replaying) { ____chimes_arg0 = (argv[1]); } calling((void*)atol, 4, ____alias_loc_id_7, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(____chimes_arg0); }) ) : (({ calling_npm("atol", ____alias_loc_id_7); (*____chimes_extern_func_atol)(argv[1]); })));
# 693 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (n < 0) {
# 694 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: n must be >= 0!\n");
# 695 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 696 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 697 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/(10);
# 698 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = (2);
# 699 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (argc == 3){
# 700 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_10); call_lbl_8: n = (____chimes_does_checkpoint_atol_npm ? ( ({ const char * ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = (argv[1]); } calling((void*)atol, 8, ____alias_loc_id_10, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(____chimes_arg1); }) ) : (({ calling_npm("atol", ____alias_loc_id_10); (*____chimes_extern_func_atol)(argv[1]); })));
# 701 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (n < 0) {
# 702 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: n must be >= 0!\n");
# 703 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 704 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 705 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_8); call_lbl_12: cutoff = (____chimes_does_checkpoint_atol_npm ? ( ({ const char * ____chimes_arg2; if (!____chimes_replaying) { ____chimes_arg2 = (argv[2]); } calling((void*)atol, 12, ____alias_loc_id_8, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(____chimes_arg2); }) ) : (({ calling_npm("atol", ____alias_loc_id_8); (*____chimes_extern_func_atol)(argv[2]); })));
# 706 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (cutoff <= 0) {
# 707 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: cutoff must be >0!\n");
# 708 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 709 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 710 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/cutoff;
# 711 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = (2);
# 712 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  } else {
# 713 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_11); call_lbl_16: n = (____chimes_does_checkpoint_atol_npm ? ( ({ const char * ____chimes_arg3; if (!____chimes_replaying) { ____chimes_arg3 = (argv[1]); } calling((void*)atol, 16, ____alias_loc_id_11, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(____chimes_arg3); }) ) : (({ calling_npm("atol", ____alias_loc_id_11); (*____chimes_extern_func_atol)(argv[1]); })));
# 714 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (n < 0) {
# 715 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: n must be >= 0!\n");
# 716 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 717 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 718 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_9); call_lbl_20: cutoff = (____chimes_does_checkpoint_atol_npm ? ( ({ const char * ____chimes_arg4; if (!____chimes_replaying) { ____chimes_arg4 = (argv[2]); } calling((void*)atol, 20, ____alias_loc_id_9, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(____chimes_arg4); }) ) : (({ calling_npm("atol", ____alias_loc_id_9); (*____chimes_extern_func_atol)(argv[2]); })));
# 719 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (cutoff <= 0) {
# 720 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: cutoff must be >0!\n");
# 721 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 722 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 723 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/cutoff;
# 724 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = atoi(argv[3]);
# 725 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (maxdepth < 0) {
# 726 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: maxdepth must be >= 0!\n");
# 727 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 728 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 729 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 730 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 731 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 732 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 733 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   cutoff2 = cutoff * cutoff;
# 748 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 748 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   xi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630307UL, 0, 0);
# 749 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (xi == __null) {
# 750 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating xi array!\n");
# 751 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 752 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 753 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 754 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630303UL, 0, 0);
# 755 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (yi == __null) {
# 756 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating yi array!\n");
# 757 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 758 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 759 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 760 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   zi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630299UL, 0, 0);
# 761 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (zi == __null) {
# 762 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating zi array!\n");
# 763 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 764 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 765 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 766 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ti = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630428UL, 0, 0);
# 767 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (ti == __null) {
# 768 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating ti array!\n");
# 769 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 770 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 771 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 772 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   wi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630427UL, 0, 0);
# 773 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (wi == __null) {
# 774 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating wi array!\n");
# 775 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 776 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 777 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 778 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{ call_lbl_58: bool ____chimes_disable2 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(58, &____chimes_region_id0, 1, &i); int ____chimes_first_iter0 = 1;
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp parallel for shared(xi,yi,zi,wi) private(i) firstprivate(____chimes_first_iter0)
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 780 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 781 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (i = 0L; i < n; i++) { { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &i); ____chimes_first_iter0 = 0; } {
# 782 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     xi[i] = yi[i] = zi[i] = i;
# 783 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     if ((3) == 4) {
# 784 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       wi[i] = i;
# 785 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     }
# 786 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    } } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable2); }
# 787 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 788 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 789 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 790 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 791 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 792 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 793 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 794 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   xyzw = (int **) malloc_wrapper(n * sizeof(int *), 339782406926630360UL, 1, 0);
# 795 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (xyzw == __null) {
# 796 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating xyzw array!\n");
# 797 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 798 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 799 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 800 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 801 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_44: (____chimes_does_checkpoint_spec_init_genrand_npm ? ( ({ unsigned long ____chimes_arg5; if (!____chimes_replaying) { ____chimes_arg5 = ((unsigned long)1830129); } calling((void*)spec_init_genrand, 44, ____alias_loc_id_5, 0UL, 1, (size_t)(0UL)); (spec_init_genrand)(____chimes_arg5); }) ) : (({ calling_npm("spec_init_genrand", ____alias_loc_id_5); (*____chimes_extern_func_spec_init_genrand)((unsigned long) 1830129); })));
# 802 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 803 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 804 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{ call_lbl_59: bool ____chimes_disable3 = disable_current_thread(); void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(59, &____chimes_region_id1, 1, &i); int ____chimes_first_iter1 = 1;
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp parallel for shared(xyzw) private (i) firstprivate(____chimes_first_iter1)
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 806 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 807 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (i=0L; i<n; i++) { { if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 1, &i); ____chimes_first_iter1 = 0; } {
# 808 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 809 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     xyzw[i] = (int *) malloc_wrapper((3)*sizeof(int), 339782406926630362UL, 0, 0);
# 810 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     if (xyzw[i] == __null) {
# 811 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       fprintf(stderr, "main: error allocating xyzw[%lld]\n", i);
# 812 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       exit(1);
# 813 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     }
# 814 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { int j; for ( j = (0) ; j<(3); j++) {
# 815 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 816 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       xyzw[i][j] = -1;
# 817 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 818 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 819 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 820 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     } }
# 821 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    } } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 1); reenable_current_thread(____chimes_disable3); }
# 822 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 823 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (i=0L; i<n; i++) {
# 824 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { lbl_0: int j; register_stack_var("main|j|1", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(60): { goto call_lbl_60; } case(4): { goto call_lbl_4; } case(8): { goto call_lbl_8; } case(12): { goto call_lbl_12; } case(16): { goto call_lbl_16; } case(20): { goto call_lbl_20; } case(44): { goto call_lbl_44; } case(49): { goto call_lbl_49; } case(50): { goto call_lbl_50; } case(51): { goto call_lbl_51; } case(52): { goto call_lbl_52; } case(53): { goto call_lbl_53; } case(54): { goto call_lbl_54; } default: { chimes_error(); } } } for ( j = (0) ; j<(3); j++) {
# 825 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 826 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       alias_group_changed(____alias_loc_id_6); call_lbl_49: xyzw[i][j] = (int) ((____chimes_does_checkpoint_spec_genrand_int32_npm ? ( ({ calling((void*)spec_genrand_int32, 49, ____alias_loc_id_6, 0UL, 0); (spec_genrand_int32)(); }) ) : (({ calling_npm("spec_genrand_int32", ____alias_loc_id_6); (*____chimes_extern_func_spec_genrand_int32)(); }))) >> 17);
# 827 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 828 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 829 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 830 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     } }
# 831 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 832 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 833 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 834 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 835 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 836 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("heapsort", 0); heapsort_npm(xi, n, xyzw, 0); });
# 837 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("heapsort", 0); heapsort_npm(yi, n, xyzw, 1); });
# 838 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("heapsort", 0); heapsort_npm(zi, n, xyzw, 2); });
# 839 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 840 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((3) == 4) {
# 841 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     heapsort(wi, n, xyzw, 3);
# 842 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 843 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 844 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 845 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_50: checkpoint_transformed(50, ____alias_loc_id_4);
# 846 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 847 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 848 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 850 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   root = ({ calling_npm("empty_kdnode", 0); empty_kdnode_npm(); });
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  {
# 865 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 866 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 867 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 868 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 869 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 870 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   {
# 871 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("buildkdtree", 0); buildkdtree_npm(root, xi, yi, zi, wi, ti, 0L, n-1, xyzw, 0); });
# 872 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 873 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 874 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 875 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 876 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_51: checkpoint_transformed(51, ____alias_loc_id_3);
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("coordkdtree", 0); coordkdtree_npm(root, xyzw); });
# 887 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 888 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 889 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 890 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 891 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 892 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 893 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 894 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   call_lbl_52: (____chimes_does_checkpoint_clock_gettime_npm ? ( ({ calling((void*)clock_gettime, 52, ____alias_loc_id_2, 0UL, 2, (size_t)(0UL), (size_t)(339782406926630089UL)); (clock_gettime)(0, &startTime); }) ) : (({ calling_npm("clock_gettime", ____alias_loc_id_2); (*____chimes_extern_func_clock_gettime)(0, &startTime); })));
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  count = 0L;
# 904 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{ call_lbl_60: void *____chimes_parent_ctx3 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth2 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth2 = get_thread_stack_depth(); size_t ____chimes_region_id2; unsigned ____chimes_parent_thread2 = entering_omp_parallel(60, &____chimes_region_id2, 4, &cutoff, &cutoff2, &maxdepth, &root);
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp parallel shared(count) firstprivate(root, cutoff, cutoff2, maxdepth)
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 906 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 907 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  { { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread2, ____chimes_parent_ctx3, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth2, ____chimes_region_id2, 4, &cutoff, &cutoff2, &maxdepth, &root); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } {
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp single
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 909 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    { bool ____chimes_disable5; ____chimes_disable5 = disable_current_thread(); {
# 910 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      count += ({ calling_npm("sweepkdtree", 0); sweepkdtree_npm(root, root, cutoff, cutoff2, 0, maxdepth); });
# 911 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     } reenable_current_thread(____chimes_disable5); }
# 912 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   } thread_leaving(); } } leaving_omp_parallel(____chimes_call_stack_depth2, ____chimes_region_id2, 0); }
# 913 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 914 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 915 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_53: checkpoint_transformed(53, ____alias_loc_id_1);
# 916 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 917 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 918 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 919 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 920 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_54: (____chimes_does_checkpoint_clock_gettime_npm ? ( ({ calling((void*)clock_gettime, 54, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(339782406926630090UL)); (clock_gettime)(0, &endTime); }) ) : (({ calling_npm("clock_gettime", ____alias_loc_id_0); (*____chimes_extern_func_clock_gettime)(0, &endTime); })));
# 921 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   elapsedTime = (double)(endTime.tv_sec - startTime.tv_sec) +
# 922 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     1.0e-9*((double)(endTime.tv_nsec - startTime.tv_nsec));
# 923 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 924 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 925 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 926 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 927 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 928 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 929 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 930 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   printf("Total time is %10.5f seconds to find %lld points\n",
# 931 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    elapsedTime, count);
# 947 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 947 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable8, false); return ____chimes_ret_var_4; ;
# 948 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable8, false); }
# 63 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *empty_kdnode_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&empty_kdnode), "empty_kdnode", &____must_manage_empty_kdnode, 0, 0) ; ; ;
# 64 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     kdnode *empty; empty = ((kdnode *)malloc_wrapper(sizeof(kdnode), 339782406926629104UL, 0, 1, (int)sizeof(struct kdnode), 2, (int)__builtin_offsetof(struct kdnode, lo), (int)__builtin_offsetof(struct kdnode, hi))) ;
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    memset(empty, 0x00, sizeof(kdnode));
# 66 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     struct kdnode *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (empty); rm_stack(true, 339782406926629104UL, "empty_kdnode", &____must_manage_empty_kdnode, ____alias_loc_id_12, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(true, 339782406926629104UL, "empty_kdnode", &____must_manage_empty_kdnode, ____alias_loc_id_12, ____chimes_did_disable0, false); }

kdnode *empty_kdnode() { return (____chimes_replaying ? empty_kdnode_resumable() : empty_kdnode_quick()); }
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *init_kdnode_quick(long long nn) {const int ____chimes_did_disable1 = new_stack((void *)(&init_kdnode), "init_kdnode", &____must_manage_init_kdnode, 1, 0, (size_t)(0UL)) ; ; ;
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     kdnode *empty; empty = ((kdnode *)malloc_wrapper(sizeof(kdnode), 339782406926629129UL, 0, 1, (int)sizeof(struct kdnode), 2, (int)__builtin_offsetof(struct kdnode, lo), (int)__builtin_offsetof(struct kdnode, hi))) ;
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    memset(empty, 0x00, sizeof(kdnode));
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    empty->n = nn;
# 81 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     struct kdnode *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (empty); rm_stack(true, 339782406926629129UL, "init_kdnode", &____must_manage_init_kdnode, ____alias_loc_id_13, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 82 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(true, 339782406926629129UL, "init_kdnode", &____must_manage_init_kdnode, ____alias_loc_id_13, ____chimes_did_disable1, false); }

kdnode *init_kdnode(long long nn) { return (____chimes_replaying ? init_kdnode_resumable(nn) : init_kdnode_quick(nn)); }
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void downheap_quick(long long *a, long long n, long long k, int **x, int p)
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable2 = new_stack((void *)(&downheap), "downheap", &____must_manage_downheap, 5, 0, (size_t)(339782406926629256UL), (size_t)(0UL), (size_t)(0UL), (size_t)(339782406926629259UL), (size_t)(0UL)) ; ; ;
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long j; long long v; ;
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   v = a[k - 1];
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   while (k <= n / 2) {
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      j = k + k;
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((j < n) && (x[a[j - 1]][p] < x[a[j]][p])) {j++; };
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (x[v][p] >= x[a[j - 1]][p]) {break; };
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[k - 1] = a[j - 1];
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      k = j;
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   a[k - 1] = v;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "downheap", &____must_manage_downheap, ____alias_loc_id_14, ____chimes_did_disable2, false); }

void downheap(long long *a, long long n, long long k, int **x, int p) { (____chimes_replaying ? downheap_resumable(a, n, k, x, p) : downheap_quick(a, n, k, x, p)); }
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void heapsort_quick(long long *a, long long n, int **x, int p)
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable3 = new_stack((void *)(&heapsort), "heapsort", &____must_manage_heapsort, 4, 0, (size_t)(339782406926629326UL), (size_t)(0UL), (size_t)(339782406926629328UL), (size_t)(0UL)) ; ; ;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long k; long long v; ;
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (k = n / 2; k >= 1; k--) { ({ calling_npm("downheap", 0); downheap_npm(a, n, k, x, p); }); };
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   while (n > 1) {
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      v = a[0];
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[0] = a[n - 1];
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[n - 1] = v;
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      ({ calling_npm("downheap", 0); downheap_npm(a, --n, 1, x, p); });
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "heapsort", &____must_manage_heapsort, ____alias_loc_id_15, ____chimes_did_disable3, false); }

void heapsort(long long *a, long long n, int **x, int p) { (____chimes_replaying ? heapsort_resumable(a, n, x, p) : heapsort_quick(a, n, x, p)); }
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void buildkdtree_quick(kdnode *curr, long long *xn, long long *yn,
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
             long long *zn, long long *wn,
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long *tn, long long start, long long end, int **x,
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    int p)
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable4 = new_stack((void *)(&buildkdtree), "buildkdtree", &____must_manage_buildkdtree, 10, 0, (size_t)(339782406926629725UL), (size_t)(339782406926629726UL), (size_t)(339782406926629727UL), (size_t)(339782406926629728UL), (size_t)(339782406926629729UL), (size_t)(339782406926629730UL), (size_t)(0UL), (size_t)(0UL), (size_t)(339782406926629733UL), (size_t)(0UL)) ; ; ;
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long i; long long middle; long long median; long long lower; long long upper; ;
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  p %= (3);
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (end == start) {{
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->n = xn[start];
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (end == start + 1) {
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (x[xn[start]][p] < x[xn[end]][p]) {{
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[end];
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = ({ calling_npm("init_kdnode", 0); init_kdnode_npm(xn[start]); });
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }; } else if (x[xn[start]][p] > x[xn[end]][p]) {
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[start];
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = ({ calling_npm("init_kdnode", 0); init_kdnode_npm(xn[end]); });
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    else {
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[start];
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->hi = ({ calling_npm("init_kdnode", 0); init_kdnode_npm(xn[end]); });
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  else {
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    middle = (start + end) / 2;
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    median = x[xn[middle]][p];
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = middle - 1; i >= start; i--) {
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (x[xn[i]][p] < median) {
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 break;
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 middle = i;
# 271 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 272 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 273 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 274 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 275 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 276 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->n = xn[middle];
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    lower = start - 1;
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    upper = middle;
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = start; i <= end; i++) {
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (yn[i] != xn[middle]) {
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (x[yn[i]][p] < median) {
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   tn[++lower] = yn[i];
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 } else {
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   tn[++upper] = yn[i];
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    lower = start - 1;
# 336 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    upper = middle;
# 337 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = start; i <= end; i++) {
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (zn[i] != xn[middle]) {
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (x[zn[i]][p] < median) {
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yn[++lower] = zn[i];
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 } else {
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yn[++upper] = zn[i];
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 344 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 345 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 346 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 347 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 348 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 349 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if ((3) == 4) {
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      lower = start - 1;
# 369 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      upper = middle;
# 370 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      for (i = start; i <= end; i++) {
# 371 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (wn[i] != xn[middle]) {
# 372 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (x[wn[i]][p] < median) {
# 373 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     zn[++lower] = wn[i];
# 374 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   } else {
# 375 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     zn[++upper] = wn[i];
# 376 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 377 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 378 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 379 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (lower >= start) {
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = ({ calling_npm("empty_kdnode", 0); empty_kdnode_npm(); });
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   buildkdtree_quick(curr->lo, tn, yn, zn, xn, wn, start, lower, x, p+1);
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       {
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 ({ calling_npm("buildkdtree", 0); buildkdtree_npm(curr->lo, tn, yn, xn, wn, zn, start, lower, x, p+1); });
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       }
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (upper > middle) {
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->hi = ({ calling_npm("empty_kdnode", 0); empty_kdnode_npm(); });
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 431 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 buildkdtree_quick(curr->hi, tn, yn, zn, xn, wn, middle + 1, end, x, p+1);
# 433 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 434 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 435 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 436 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 437 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 438 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 439 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 440 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 441 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       {
# 442 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 ({ calling_npm("buildkdtree", 0); buildkdtree_npm(curr->hi, tn, yn, xn, wn, zn, middle + 1, end, x, p+1); });
# 444 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       }
# 445 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 446 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 456 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "buildkdtree", &____must_manage_buildkdtree, ____alias_loc_id_16, ____chimes_did_disable4, false); }

void buildkdtree(kdnode *curr, long long *xn, long long *yn,
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
             long long *zn, long long *wn,
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long *tn, long long start, long long end, int **x,
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    int p) { (____chimes_replaying ? buildkdtree_resumable(curr, xn, yn, zn, wn, tn, start, end, x, p) : buildkdtree_quick(curr, xn, yn, zn, wn, tn, start, end, x, p)); }
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void coordkdtree_quick(kdnode *curr, int **x)
# 473 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 474 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable5 = new_stack((void *)(&coordkdtree), "coordkdtree", &____must_manage_coordkdtree, 2, 0, (size_t)(339782406926629792UL), (size_t)(339782406926629793UL)) ; ; ;
# 475 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 476 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 477 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 478 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 479 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  { int i; for ( i = (0) ; i<(3); i++) {
# 480 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->coord[i] = x[curr->n][i];
# 481 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  } }
# 482 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 483 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 484 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->hi != __null) {
# 485 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    ({ calling_npm("coordkdtree", 0); coordkdtree_npm(curr->hi, x); });
# 486 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 487 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 488 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->lo != __null) {
# 489 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    ({ calling_npm("coordkdtree", 0); coordkdtree_npm(curr->lo, x); });
# 490 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 491 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "coordkdtree", &____must_manage_coordkdtree, ____alias_loc_id_17, ____chimes_did_disable5, false); }

void coordkdtree(kdnode *curr, int **x) { (____chimes_replaying ? coordkdtree_resumable(curr, x) : coordkdtree_quick(curr, x)); }
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long searchkdtree_quick(kdnode *curr, kdnode *q, int p,
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          long long cut, long long cut2,
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          int depth, int depthmax)
# 513 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable6 = new_stack((void *)(&searchkdtree), "searchkdtree", &____must_manage_searchkdtree, 7, 0, (size_t)(339782406926629983UL), (size_t)(339782406926629984UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 514 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long xij; long long yij; long long zij; long long wij; long long r2; long long count; long long countL; long long countH; ;
# 515 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 516 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 517 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 518 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   p %= (3);
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   countH = 0L;
# 532 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((curr->hi != __null) && (q->coord[p] + cut >= curr->coord[p])) {
# 533 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp task shared(countH) if(depth < depthmax) firstprivate(q, p, cut, cut2, depth, depthmax)
# 535 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 536 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 537 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread(); {
# 538 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       countH = ({ calling_npm("searchkdtree", 0); searchkdtree_npm(curr->hi, q, p+1, cut, cut2, depth+1, depthmax); });
# 539 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } reenable_current_thread(____chimes_disable0); }
# 540 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   countL = 0L;
# 554 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((curr->lo != __null) && (q->coord[p] - cut < curr->coord[p])) {
# 555 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp task shared(countL) if(depth < depthmax) firstprivate(q, p, cut, cut2, depth, depthmax)
# 557 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 558 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 559 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { bool ____chimes_disable1; ____chimes_disable1 = disable_current_thread(); {
# 560 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       countL = ({ calling_npm("searchkdtree", 0); searchkdtree_npm(curr->lo, q, p+1, cut, cut2, depth+1, depthmax); });
# 561 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } reenable_current_thread(____chimes_disable1); }
# 562 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 563 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 564 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   count = 0L;
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (q->n != curr->n) {
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      xij = q->coord[0] - curr->coord[0];
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      yij = q->coord[1] - curr->coord[1];
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      zij = q->coord[2] - curr->coord[2];
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      r2 = xij * xij + yij * yij + zij * zij;
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         wij = q->coord[3] - curr->coord[3];
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         r2 += wij * wij;
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 580 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (r2 < cut2) {
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 count++;
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp taskwait
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((count + countL + countH)); rm_stack(false, 0UL, "searchkdtree", &____must_manage_searchkdtree, ____alias_loc_id_18, ____chimes_did_disable6, false); return ____chimes_ret_var_2; ;
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "searchkdtree", &____must_manage_searchkdtree, ____alias_loc_id_18, ____chimes_did_disable6, false); }

long long searchkdtree(kdnode *curr, kdnode *q, int p,
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          long long cut, long long cut2,
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          int depth, int depthmax) { return (____chimes_replaying ? searchkdtree_resumable(curr, q, p, cut, cut2, depth, depthmax) : searchkdtree_quick(curr, q, p, cut, cut2, depth, depthmax)); }
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long sweepkdtree_quick(kdnode *curr, kdnode *r, long long cut, long long cut2,
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         int depth, int depthmax)
# 613 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable7 = new_stack((void *)(&sweepkdtree), "sweepkdtree", &____must_manage_sweepkdtree, 6, 0, (size_t)(339782406926630066UL), (size_t)(339782406926630067UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 614 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long count; long long countL; long long countH; ;
# 615 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 616 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 617 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 618 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  count = ({ calling_npm("searchkdtree", 0); searchkdtree_npm(r, curr, 0, cut, cut2, depth, depthmax); });
# 619 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 620 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 621 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 622 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  countH = 0L;
# 623 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->hi != __null) {
# 624 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 625 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 626 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 627 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 628 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    {
# 629 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      countH = ({ calling_npm("sweepkdtree", 0); sweepkdtree_npm(curr->hi, r, cut, cut2, depth, depthmax); });
# 630 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 631 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 632 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 633 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 634 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 635 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  countL = 0L;
# 636 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->lo != __null) {
# 637 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 638 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 639 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 640 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 641 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    {
# 642 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      countL = ({ calling_npm("sweepkdtree", 0); sweepkdtree_npm(curr->lo, r, cut, cut2, depth, depthmax); });
# 643 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 644 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 645 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 646 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 647 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 648 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 649 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 650 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 651 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 652 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((count + countL + countH)); rm_stack(false, 0UL, "sweepkdtree", &____must_manage_sweepkdtree, ____alias_loc_id_19, ____chimes_did_disable7, false); return ____chimes_ret_var_3; ;
# 653 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "sweepkdtree", &____must_manage_sweepkdtree, ____alias_loc_id_19, ____chimes_did_disable7, false); }

long long sweepkdtree(kdnode *curr, kdnode *r, long long cut, long long cut2,
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         int depth, int depthmax) { return (____chimes_replaying ? sweepkdtree_resumable(curr, r, cut, cut2, depth, depthmax) : sweepkdtree_quick(curr, r, cut, cut2, depth, depthmax)); }
# 664 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
int main_quick(int argc, char **argv)
# 665 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{const int ____chimes_did_disable8 = new_stack((void *)(&main), "main", (int *)0, 2, 1, (size_t)(0UL), (size_t)(339782406926630474UL), "main|argv|0", (int *)0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; struct timespec endTime;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
struct timespec startTime;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *root;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *ti;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *wi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *zi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *yi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long *xi;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long count;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long cutoff2;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long cutoff;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long maxdepth;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long n;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long i;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
int **xyzw;
# 666 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 register_stack_vars(15, "main|endTime|0", (int *)0x0, "%struct.timespec = type { i64, i64 }", (void *)(&endTime), (size_t)16, 0, 1, 0, "main|startTime|0", (int *)0x0, "%struct.timespec = type { i64, i64 }", (void *)(&startTime), (size_t)16, 0, 1, 0, "main|root|0", (int *)0x0, "%struct.kdnode*", (void *)(&root), (size_t)8, 1, 0, 0, "main|ti|0", (int *)0x0, "i64*", (void *)(&ti), (size_t)8, 1, 0, 0, "main|wi|0", (int *)0x0, "i64*", (void *)(&wi), (size_t)8, 1, 0, 0, "main|zi|0", (int *)0x0, "i64*", (void *)(&zi), (size_t)8, 1, 0, 0, "main|yi|0", (int *)0x0, "i64*", (void *)(&yi), (size_t)8, 1, 0, 0, "main|xi|0", (int *)0x0, "i64*", (void *)(&xi), (size_t)8, 1, 0, 0, "main|count|0", (int *)0x0, "i64", (void *)(&count), (size_t)8, 0, 0, 0, "main|cutoff2|0", (int *)0x0, "i64", (void *)(&cutoff2), (size_t)8, 0, 0, 0, "main|cutoff|0", (int *)0x0, "i64", (void *)(&cutoff), (size_t)8, 0, 0, 0, "main|maxdepth|0", (int *)0x0, "i64", (void *)(&maxdepth), (size_t)8, 0, 0, 0, "main|n|0", (int *)0x0, "i64", (void *)(&n), (size_t)8, 0, 0, 0, "main|i|0", (int *)0x0, "i64", (void *)(&i), (size_t)8, 0, 0, 0, "main|xyzw|0", (int *)0x0, "i32**", (void *)(&xyzw), (size_t)8, 1, 0, 0); ; ;
# 667 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ;
# 668 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
        ;
# 669 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       ;
# 670 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   kdnode *query; ;
# 671 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      ;
# 672 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  double elapsedTime; ;
# 673 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 674 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 675 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 676 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (argc > 4) {
# 677 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    fprintf(stderr, "Usage: %s <n> <cutoffdivisor> <maxdepth>\n", argv[0]);
# 678 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    exit (1);
# 679 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 680 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 681 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 682 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 683 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 684 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 685 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 686 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 687 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (argc == 1) {{
# 688 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    n = (100000L);
# 689 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/(10);
# 690 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = (2);
# 691 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (argc == 2) {{
# 692 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_7); call_lbl_4: n = (____chimes_does_checkpoint_atol_npm ? ( ({ calling((void*)atol, 4, ____alias_loc_id_7, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(argv[1]); }) ) : (({ calling_npm("atol", ____alias_loc_id_7); (*____chimes_extern_func_atol)(argv[1]); })));
# 693 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (n < 0) {
# 694 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: n must be >= 0!\n");
# 695 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 696 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 697 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/(10);
# 698 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = (2);
# 699 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (argc == 3){
# 700 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_10); call_lbl_8: n = (____chimes_does_checkpoint_atol_npm ? ( ({ calling((void*)atol, 8, ____alias_loc_id_10, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(argv[1]); }) ) : (({ calling_npm("atol", ____alias_loc_id_10); (*____chimes_extern_func_atol)(argv[1]); })));
# 701 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (n < 0) {
# 702 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: n must be >= 0!\n");
# 703 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 704 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 705 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_8); call_lbl_12: cutoff = (____chimes_does_checkpoint_atol_npm ? ( ({ calling((void*)atol, 12, ____alias_loc_id_8, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(argv[2]); }) ) : (({ calling_npm("atol", ____alias_loc_id_8); (*____chimes_extern_func_atol)(argv[2]); })));
# 706 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (cutoff <= 0) {
# 707 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: cutoff must be >0!\n");
# 708 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 709 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 710 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/cutoff;
# 711 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = (2);
# 712 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  } else {
# 713 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_11); call_lbl_16: n = (____chimes_does_checkpoint_atol_npm ? ( ({ calling((void*)atol, 16, ____alias_loc_id_11, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(argv[1]); }) ) : (({ calling_npm("atol", ____alias_loc_id_11); (*____chimes_extern_func_atol)(argv[1]); })));
# 714 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (n < 0) {
# 715 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: n must be >= 0!\n");
# 716 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 717 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 718 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    alias_group_changed(____alias_loc_id_9); call_lbl_20: cutoff = (____chimes_does_checkpoint_atol_npm ? ( ({ calling((void*)atol, 20, ____alias_loc_id_9, 0UL, 1, (size_t)(339782406926630186UL)); (atol)(argv[2]); }) ) : (({ calling_npm("atol", ____alias_loc_id_9); (*____chimes_extern_func_atol)(argv[2]); })));
# 719 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (cutoff <= 0) {
# 720 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: cutoff must be >0!\n");
# 721 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 722 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 723 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    cutoff = (32767)/cutoff;
# 724 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    maxdepth = atoi(argv[3]);
# 725 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (maxdepth < 0) {
# 726 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      fprintf(stderr, "main: maxdepth must be >= 0!\n");
# 727 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      exit(1);
# 728 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 729 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 730 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 731 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 732 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 733 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   cutoff2 = cutoff * cutoff;
# 748 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 748 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   xi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630307UL, 0, 0);
# 749 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (xi == __null) {
# 750 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating xi array!\n");
# 751 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 752 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 753 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 754 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630303UL, 0, 0);
# 755 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (yi == __null) {
# 756 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating yi array!\n");
# 757 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 758 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 759 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 760 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   zi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630299UL, 0, 0);
# 761 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (zi == __null) {
# 762 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating zi array!\n");
# 763 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 764 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 765 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 766 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ti = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630428UL, 0, 0);
# 767 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (ti == __null) {
# 768 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating ti array!\n");
# 769 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 770 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 771 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 772 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   wi = (long long *) malloc_wrapper(n * sizeof(long long), 339782406926630427UL, 0, 0);
# 773 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (wi == __null) {
# 774 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating wi array!\n");
# 775 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 776 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 777 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 778 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{ call_lbl_58: bool ____chimes_disable2 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(58, &____chimes_region_id0, 1, &i); int ____chimes_first_iter0 = 1;
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp parallel for shared(xi,yi,zi,wi) private(i) firstprivate(____chimes_first_iter0)
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 779 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 780 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 781 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (i = 0L; i < n; i++) { { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &i); ____chimes_first_iter0 = 0; } {
# 782 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     xi[i] = yi[i] = zi[i] = i;
# 783 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     if ((3) == 4) {
# 784 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       wi[i] = i;
# 785 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     }
# 786 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    } } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable2); }
# 787 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 788 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 789 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 790 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 791 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 792 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 793 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 794 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   xyzw = (int **) malloc_wrapper(n * sizeof(int *), 339782406926630360UL, 1, 0);
# 795 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (xyzw == __null) {
# 796 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     fprintf(stderr, "main: error allocating xyzw array!\n");
# 797 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     exit(1);
# 798 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 799 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 800 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 801 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_44: (____chimes_does_checkpoint_spec_init_genrand_npm ? ( ({ calling((void*)spec_init_genrand, 44, ____alias_loc_id_5, 0UL, 1, (size_t)(0UL)); (spec_init_genrand)((unsigned long)1830129); }) ) : (({ calling_npm("spec_init_genrand", ____alias_loc_id_5); (*____chimes_extern_func_spec_init_genrand)((unsigned long) 1830129); })));
# 802 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 803 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 804 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{ call_lbl_59: bool ____chimes_disable3 = disable_current_thread(); void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(59, &____chimes_region_id1, 1, &i); int ____chimes_first_iter1 = 1;
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp parallel for shared(xyzw) private (i) firstprivate(____chimes_first_iter1)
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 805 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 806 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 807 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (i=0L; i<n; i++) { { if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 1, &i); ____chimes_first_iter1 = 0; } {
# 808 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 809 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     xyzw[i] = (int *) malloc_wrapper((3)*sizeof(int), 339782406926630362UL, 0, 0);
# 810 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     if (xyzw[i] == __null) {
# 811 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       fprintf(stderr, "main: error allocating xyzw[%lld]\n", i);
# 812 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       exit(1);
# 813 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     }
# 814 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { int j; for ( j = (0) ; j<(3); j++) {
# 815 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 816 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       xyzw[i][j] = -1;
# 817 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 818 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 819 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 820 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     } }
# 821 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    } } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 1); reenable_current_thread(____chimes_disable3); }
# 822 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 823 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (i=0L; i<n; i++) {
# 824 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     { lbl_0: int j; register_stack_var("main|j|1", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0); for ( j = (0) ; j<(3); j++) {
# 825 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 826 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       alias_group_changed(____alias_loc_id_6); call_lbl_49: xyzw[i][j] = (int) ((____chimes_does_checkpoint_spec_genrand_int32_npm ? ( ({ calling((void*)spec_genrand_int32, 49, ____alias_loc_id_6, 0UL, 0); (spec_genrand_int32)(); }) ) : (({ calling_npm("spec_genrand_int32", ____alias_loc_id_6); (*____chimes_extern_func_spec_genrand_int32)(); }))) >> 17);
# 827 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 828 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 829 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 830 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     } }
# 831 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 832 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 833 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 834 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 835 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 836 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("heapsort", 0); heapsort_npm(xi, n, xyzw, 0); });
# 837 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("heapsort", 0); heapsort_npm(yi, n, xyzw, 1); });
# 838 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("heapsort", 0); heapsort_npm(zi, n, xyzw, 2); });
# 839 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 840 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((3) == 4) {
# 841 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     heapsort_quick(wi, n, xyzw, 3);
# 842 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 843 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 844 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 845 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_50: checkpoint_transformed(50, ____alias_loc_id_4);
# 846 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 847 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 848 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 850 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   root = ({ calling_npm("empty_kdnode", 0); empty_kdnode_npm(); });
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  {
# 865 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 866 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 867 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 868 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 869 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 870 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   {
# 871 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("buildkdtree", 0); buildkdtree_npm(root, xi, yi, zi, wi, ti, 0L, n-1, xyzw, 0); });
# 872 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 873 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 874 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 875 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 876 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_51: checkpoint_transformed(51, ____alias_loc_id_3);
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   ({ calling_npm("coordkdtree", 0); coordkdtree_npm(root, xyzw); });
# 887 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 888 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 889 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 890 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 891 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 892 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 893 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 894 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   call_lbl_52: (____chimes_does_checkpoint_clock_gettime_npm ? ( ({ calling((void*)clock_gettime, 52, ____alias_loc_id_2, 0UL, 2, (size_t)(0UL), (size_t)(339782406926630089UL)); (clock_gettime)(0, &startTime); }) ) : (({ calling_npm("clock_gettime", ____alias_loc_id_2); (*____chimes_extern_func_clock_gettime)(0, &startTime); })));
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  count = 0L;
# 904 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{ call_lbl_60: void *____chimes_parent_ctx3 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth2 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth2 = get_thread_stack_depth(); size_t ____chimes_region_id2; unsigned ____chimes_parent_thread2 = entering_omp_parallel(60, &____chimes_region_id2, 4, &cutoff, &cutoff2, &maxdepth, &root);
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp parallel shared(count) firstprivate(root, cutoff, cutoff2, maxdepth)
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 906 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 907 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  { { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread2, ____chimes_parent_ctx3, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth2, ____chimes_region_id2, 4, &cutoff, &cutoff2, &maxdepth, &root); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } {
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp single
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 909 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    { bool ____chimes_disable5; ____chimes_disable5 = disable_current_thread(); {
# 910 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      count += ({ calling_npm("sweepkdtree", 0); sweepkdtree_npm(root, root, cutoff, cutoff2, 0, maxdepth); });
# 911 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     } reenable_current_thread(____chimes_disable5); }
# 912 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   } thread_leaving(); } } leaving_omp_parallel(____chimes_call_stack_depth2, ____chimes_region_id2, 0); }
# 913 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 914 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 915 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_53: checkpoint_transformed(53, ____alias_loc_id_1);
# 916 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 917 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 918 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 919 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 920 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    call_lbl_54: (____chimes_does_checkpoint_clock_gettime_npm ? ( ({ calling((void*)clock_gettime, 54, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(339782406926630090UL)); (clock_gettime)(0, &endTime); }) ) : (({ calling_npm("clock_gettime", ____alias_loc_id_0); (*____chimes_extern_func_clock_gettime)(0, &endTime); })));
# 921 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   elapsedTime = (double)(endTime.tv_sec - startTime.tv_sec) +
# 922 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     1.0e-9*((double)(endTime.tv_nsec - startTime.tv_nsec));
# 923 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 924 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 925 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 926 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 927 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 928 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 929 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 930 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   printf("Total time is %10.5f seconds to find %lld points\n",
# 931 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    elapsedTime, count);
# 947 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 947 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable8, false); return ____chimes_ret_var_4; ;
# 948 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable8, false); }

int main(int argc, char **argv) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 63 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *empty_kdnode_npm() {
# 64 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    kdnode *empty = (kdnode *)malloc_wrapper(sizeof(kdnode), 339782406926629104UL, 0, 1, (int)sizeof(struct kdnode), 2, (int)__builtin_offsetof(struct kdnode, lo), (int)__builtin_offsetof(struct kdnode, hi));
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    memset(empty, 0x00, sizeof(kdnode));
# 66 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     struct kdnode * ____chimes_ret_var_0; ____chimes_ret_var_0 = (empty); return ____chimes_ret_var_0; ;
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
kdnode *init_kdnode_npm(long long nn) {
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    kdnode *empty = (kdnode *)malloc_wrapper(sizeof(kdnode), 339782406926629129UL, 0, 1, (int)sizeof(struct kdnode), 2, (int)__builtin_offsetof(struct kdnode, lo), (int)__builtin_offsetof(struct kdnode, hi));
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    memset(empty, 0x00, sizeof(kdnode));
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    empty->n = nn;
# 81 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     struct kdnode * ____chimes_ret_var_1; ____chimes_ret_var_1 = (empty); return ____chimes_ret_var_1; ;
# 82 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void downheap_npm(long long *a, long long n, long long k, int **x, int p)
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long j, v;
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   v = a[k - 1];
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   while (k <= n / 2) {
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      j = k + k;
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((j < n) && (x[a[j - 1]][p] < x[a[j]][p])) {j++; };
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (x[v][p] >= x[a[j - 1]][p]) {break; };
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[k - 1] = a[j - 1];
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      k = j;
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   a[k - 1] = v;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void heapsort_npm(long long *a, long long n, int **x, int p)
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long k, v;
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   for (k = n / 2; k >= 1; k--) { downheap_npm(a, n, k, x, p); };
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   while (n > 1) {
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      v = a[0];
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[0] = a[n - 1];
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      a[n - 1] = v;
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      downheap_npm(a, --n, 1, x, p);
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void buildkdtree_npm(kdnode *curr, long long *xn, long long *yn,
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
             long long *zn, long long *wn,
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long *tn, long long start, long long end, int **x,
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    int p)
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long i, middle, median, lower, upper;
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  p %= (3);
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (end == start) {{
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->n = xn[start];
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }; } else if (end == start + 1) {
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (x[xn[start]][p] < x[xn[end]][p]) {{
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[end];
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = init_kdnode_npm(xn[start]);
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }; } else if (x[xn[start]][p] > x[xn[end]][p]) {
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[start];
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = init_kdnode_npm(xn[end]);
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    else {
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->n = xn[start];
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->hi = init_kdnode_npm(xn[end]);
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  else {
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    middle = (start + end) / 2;
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    median = x[xn[middle]][p];
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = middle - 1; i >= start; i--) {
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (x[xn[i]][p] < median) {
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 break;
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 middle = i;
# 271 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 272 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 273 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 274 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 275 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 276 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->n = xn[middle];
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    lower = start - 1;
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    upper = middle;
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = start; i <= end; i++) {
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (yn[i] != xn[middle]) {
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (x[yn[i]][p] < median) {
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   tn[++lower] = yn[i];
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 } else {
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   tn[++upper] = yn[i];
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    lower = start - 1;
# 336 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    upper = middle;
# 337 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    for (i = start; i <= end; i++) {
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (zn[i] != xn[middle]) {
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (x[zn[i]][p] < median) {
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yn[++lower] = zn[i];
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 } else {
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   yn[++upper] = zn[i];
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 344 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 345 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 346 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 347 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 348 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 349 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if ((3) == 4) {
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      lower = start - 1;
# 369 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      upper = middle;
# 370 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      for (i = start; i <= end; i++) {
# 371 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 if (wn[i] != xn[middle]) {
# 372 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (x[wn[i]][p] < median) {
# 373 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     zn[++lower] = wn[i];
# 374 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   } else {
# 375 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     zn[++upper] = wn[i];
# 376 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 377 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 }
# 378 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 379 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (lower >= start) {
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->lo = empty_kdnode_npm();
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   buildkdtree_npm(curr->lo, tn, yn, zn, xn, wn, start, lower, x, p+1);
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       {
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 buildkdtree_npm(curr->lo, tn, yn, xn, wn, zn, start, lower, x, p+1);
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       }
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    if (upper > middle) {
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      curr->hi = empty_kdnode_npm();
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 431 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 buildkdtree_npm(curr->hi, tn, yn, zn, xn, wn, middle + 1, end, x, p+1);
# 433 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      } else {
# 434 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 435 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 436 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 437 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 438 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 439 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 440 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 441 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       {
# 442 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 buildkdtree_npm(curr->hi, tn, yn, xn, wn, zn, middle + 1, end, x, p+1);
# 444 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       }
# 445 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 446 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 456 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
void coordkdtree_npm(kdnode *curr, int **x)
# 473 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 474 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{
# 475 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 476 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 477 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 478 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 479 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  for (int i=0; i<(3); i++) {
# 480 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    curr->coord[i] = x[curr->n][i];
# 481 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 482 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 483 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 484 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->hi != __null) {
# 485 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    coordkdtree_npm(curr->hi, x);
# 486 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 487 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 488 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->lo != __null) {
# 489 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    coordkdtree_npm(curr->lo, x);
# 490 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 491 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long searchkdtree_npm(kdnode *curr, kdnode *q, int p,
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          long long cut, long long cut2,
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
          int depth, int depthmax)
# 513 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{
# 514 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long xij, yij, zij, wij, r2, count, countL, countH;
# 515 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 516 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 517 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 518 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   p %= (3);
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   countH = 0L;
# 532 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((curr->hi != __null) && (q->coord[p] + cut >= curr->coord[p])) {
# 533 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 534 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp task shared(countH) if(depth < depthmax) firstprivate(q, p, cut, cut2, depth, depthmax)
# 535 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 536 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 537 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     {
# 538 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       countH = searchkdtree_npm(curr->hi, q, p+1, cut, cut2, depth+1, depthmax);
# 539 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     }
# 540 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   countL = 0L;
# 554 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if ((curr->lo != __null) && (q->coord[p] - cut < curr->coord[p])) {
# 555 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp task shared(countL) if(depth < depthmax) firstprivate(q, p, cut, cut2, depth, depthmax)
# 557 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 558 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 559 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     {
# 560 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
       countL = searchkdtree_npm(curr->lo, q, p+1, cut, cut2, depth+1, depthmax);
# 561 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
     }
# 562 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 563 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 564 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   count = 0L;
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   if (q->n != curr->n) {
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      xij = q->coord[0] - curr->coord[0];
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      yij = q->coord[1] - curr->coord[1];
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      zij = q->coord[2] - curr->coord[2];
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      r2 = xij * xij + yij * yij + zij * zij;
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if ((3) == 4) {
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         wij = q->coord[3] - curr->coord[3];
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         r2 += wij * wij;
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 580 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      if (r2 < cut2) {
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
 count++;
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      }
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   }
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
#pragma omp taskwait
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    long long ____chimes_ret_var_2; ____chimes_ret_var_2 = ((count + countL + countH)); return ____chimes_ret_var_2; ;
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
long long sweepkdtree_npm(kdnode *curr, kdnode *r, long long cut, long long cut2,
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
         int depth, int depthmax)
# 613 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
{
# 614 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  long long count, countL, countH;
# 615 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 616 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 617 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 618 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  count = searchkdtree_npm(r, curr, 0, cut, cut2, depth, depthmax);
# 619 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 620 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 621 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 622 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  countH = 0L;
# 623 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->hi != __null) {
# 624 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 625 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 626 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 627 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 628 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    {
# 629 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      countH = sweepkdtree_npm(curr->hi, r, cut, cut2, depth, depthmax);
# 630 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 631 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 632 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 633 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 634 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 635 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  countL = 0L;
# 636 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  if (curr->lo != __null) {
# 637 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 638 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 639 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 640 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 641 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    {
# 642 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
      countL = sweepkdtree_npm(curr->lo, r, cut, cut2, depth, depthmax);
# 643 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
    }
# 644 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
  }
# 645 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 646 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 647 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 648 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 649 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 650 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 651 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
# 652 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
   long long ____chimes_ret_var_3; ____chimes_ret_var_3 = ((count + countL + countH)); return ____chimes_ret_var_3; ;
# 653 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/kdtree.cc"
}





static int module_init() {
    init_module(339782406926629100UL, 39, 9, 2, 21, 8, 4, 12, 23, 9, 2,
                           &____alias_loc_id_0, (unsigned)0, (unsigned)0, (unsigned)1, "clock_gettime", (unsigned)1, (339782406926629100UL + 990UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)0, (339782406926629100UL + 981UL),
                           &____alias_loc_id_2, (unsigned)0, (unsigned)0, (unsigned)1, "clock_gettime", (unsigned)1, (339782406926629100UL + 989UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)0, (339782406926629100UL + 987UL),
                           &____alias_loc_id_4, (unsigned)5, (unsigned)0, (unsigned)0, (339782406926629100UL + 976UL), (339782406926629100UL + 992UL), (339782406926629100UL + 993UL), (339782406926629100UL + 1260UL), (339782406926629100UL + 1262UL),
                           &____alias_loc_id_5, (unsigned)17, (unsigned)0, (unsigned)0, (339782406926629100UL + 972UL), (339782406926629100UL + 973UL), (339782406926629100UL + 974UL), (339782406926629100UL + 975UL), (339782406926629100UL + 976UL), (339782406926629100UL + 977UL), (339782406926629100UL + 978UL), (339782406926629100UL + 979UL), (339782406926629100UL + 980UL), (339782406926629100UL + 982UL), (339782406926629100UL + 983UL), (339782406926629100UL + 984UL), (339782406926629100UL + 985UL), (339782406926629100UL + 986UL), (339782406926629100UL + 1199UL), (339782406926629100UL + 1203UL), (339782406926629100UL + 1207UL),
                           &____alias_loc_id_6, (unsigned)2, (unsigned)0, (unsigned)0, (339782406926629100UL + 993UL), (339782406926629100UL + 1262UL),
                           &____alias_loc_id_7, (unsigned)3, (unsigned)0, (unsigned)1, (339782406926629100UL + 972UL), (339782406926629100UL + 973UL), (339782406926629100UL + 974UL), "atol", (unsigned)1, (339782406926629100UL + 1086UL),
                           &____alias_loc_id_8, (unsigned)1, (unsigned)0, (unsigned)1, (339782406926629100UL + 977UL), "atol", (unsigned)1, (339782406926629100UL + 1086UL),
                           &____alias_loc_id_9, (unsigned)1, (unsigned)0, (unsigned)1, (339782406926629100UL + 977UL), "atol", (unsigned)1, (339782406926629100UL + 1086UL),
                            &____alias_loc_id_10, (unsigned)3, (unsigned)0, (unsigned)1, (339782406926629100UL + 972UL), (339782406926629100UL + 973UL), (339782406926629100UL + 974UL), "atol", (unsigned)1, (339782406926629100UL + 1086UL),
                            &____alias_loc_id_11, (unsigned)3, (unsigned)0, (unsigned)1, (339782406926629100UL + 972UL), (339782406926629100UL + 973UL), (339782406926629100UL + 974UL), "atol", (unsigned)1, (339782406926629100UL + 1086UL),
                            &____alias_loc_id_12, (unsigned)2, (unsigned)0, (unsigned)0, (339782406926629100UL + 1UL), (339782406926629100UL + 2UL),
                            &____alias_loc_id_13, (unsigned)4, (unsigned)0, (unsigned)0, (339782406926629100UL + 23UL), (339782406926629100UL + 24UL), (339782406926629100UL + 25UL), (339782406926629100UL + 29UL),
                            &____alias_loc_id_14, (unsigned)8, (unsigned)0, (unsigned)0, (339782406926629100UL + 45UL), (339782406926629100UL + 46UL), (339782406926629100UL + 47UL), (339782406926629100UL + 48UL), (339782406926629100UL + 49UL), (339782406926629100UL + 50UL), (339782406926629100UL + 51UL), (339782406926629100UL + 156UL),
                            &____alias_loc_id_15, (unsigned)7, (unsigned)0, (unsigned)0, (339782406926629100UL + 161UL), (339782406926629100UL + 162UL), (339782406926629100UL + 163UL), (339782406926629100UL + 164UL), (339782406926629100UL + 165UL), (339782406926629100UL + 166UL), (339782406926629100UL + 226UL),
                            &____alias_loc_id_16, (unsigned)18, (unsigned)0, (unsigned)0, (339782406926629100UL + 230UL), (339782406926629100UL + 231UL), (339782406926629100UL + 232UL), (339782406926629100UL + 233UL), (339782406926629100UL + 234UL), (339782406926629100UL + 235UL), (339782406926629100UL + 236UL), (339782406926629100UL + 237UL), (339782406926629100UL + 238UL), (339782406926629100UL + 239UL), (339782406926629100UL + 240UL), (339782406926629100UL + 241UL), (339782406926629100UL + 242UL), (339782406926629100UL + 243UL), (339782406926629100UL + 244UL), (339782406926629100UL + 625UL), (339782406926629100UL + 627UL), (339782406926629100UL + 630UL),
                            &____alias_loc_id_17, (unsigned)4, (unsigned)0, (unsigned)0, (339782406926629100UL + 635UL), (339782406926629100UL + 636UL), (339782406926629100UL + 637UL), (339782406926629100UL + 692UL),
                            &____alias_loc_id_18, (unsigned)15, (unsigned)0, (unsigned)0, (339782406926629100UL + 694UL), (339782406926629100UL + 695UL), (339782406926629100UL + 696UL), (339782406926629100UL + 697UL), (339782406926629100UL + 698UL), (339782406926629100UL + 699UL), (339782406926629100UL + 700UL), (339782406926629100UL + 701UL), (339782406926629100UL + 702UL), (339782406926629100UL + 703UL), (339782406926629100UL + 705UL), (339782406926629100UL + 706UL), (339782406926629100UL + 707UL), (339782406926629100UL + 708UL), (339782406926629100UL + 709UL),
                            &____alias_loc_id_19, (unsigned)10, (unsigned)0, (unsigned)0, (339782406926629100UL + 890UL), (339782406926629100UL + 891UL), (339782406926629100UL + 892UL), (339782406926629100UL + 893UL), (339782406926629100UL + 894UL), (339782406926629100UL + 895UL), (339782406926629100UL + 896UL), (339782406926629100UL + 897UL), (339782406926629100UL + 898UL), (339782406926629100UL + 899UL),
                            &____alias_loc_id_20, (unsigned)2, (unsigned)0, (unsigned)0, (339782406926629100UL + 991UL), (339782406926629100UL + 994UL),
                            "downheap", 0, "_Z8downheapPxxxPPii", "_Z12downheap_npmPxxxPPii", 0, 5, (339782406926629100UL + 156UL), 0UL, 0UL, (339782406926629100UL + 159UL), 0UL, 0UL, 0,
                            "heapsort", 0, "_Z8heapsortPxxPPii", "_Z12heapsort_npmPxxPPii", 0, 4, (339782406926629100UL + 226UL), 0UL, (339782406926629100UL + 228UL), 0UL, 0UL, 2, "downheap", 5, (339782406926629100UL + 226UL), 0UL, 0UL, (339782406926629100UL + 228UL), 0UL, 0UL, "downheap", 5, (339782406926629100UL + 226UL), 0UL, 0UL, (339782406926629100UL + 228UL), 0UL, 0UL,
                            "sweepkdtree", 0, "_Z11sweepkdtreeP6kdnodeS0_xxii", "_Z15sweepkdtree_npmP6kdnodeS0_xxii", 0, 6, (339782406926629100UL + 966UL), (339782406926629100UL + 967UL), 0UL, 0UL, 0UL, 0UL, 0UL, 3, "searchkdtree", 7, (339782406926629100UL + 967UL), (339782406926629100UL + 966UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "sweepkdtree", 6, (339782406926629100UL + 926UL), (339782406926629100UL + 967UL), 0UL, 0UL, 0UL, 0UL, 0UL, "sweepkdtree", 6, (339782406926629100UL + 926UL), (339782406926629100UL + 967UL), 0UL, 0UL, 0UL, 0UL, 0UL,
                            "empty_kdnode", 0, "_Z12empty_kdnodev", "_Z16empty_kdnode_npmv", 0, 0, (339782406926629100UL + 4UL), 2, "malloc", 1, 0UL, (339782406926629100UL + 4UL), "memset", 3, (339782406926629100UL + 4UL), 0UL, 0UL, 0UL,
                            "searchkdtree", 0, "_Z12searchkdtreeP6kdnodeS0_ixxii", "_Z16searchkdtree_npmP6kdnodeS0_ixxii", 0, 7, (339782406926629100UL + 883UL), (339782406926629100UL + 884UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2, "searchkdtree", 7, (339782406926629100UL + 738UL), (339782406926629100UL + 884UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "searchkdtree", 7, (339782406926629100UL + 738UL), (339782406926629100UL + 884UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
                            "buildkdtree", 0, "_Z11buildkdtreeP6kdnodePxS1_S1_S1_S1_xxPPii", "_Z15buildkdtree_npmP6kdnodePxS1_S1_S1_S1_xxPPii", 0, 10, (339782406926629100UL + 625UL), (339782406926629100UL + 626UL), (339782406926629100UL + 627UL), (339782406926629100UL + 628UL), (339782406926629100UL + 629UL), (339782406926629100UL + 630UL), 0UL, 0UL, (339782406926629100UL + 633UL), 0UL, 0UL, 7, "init_kdnode", 1, 0UL, (339782406926629100UL + 381UL), "init_kdnode", 1, 0UL, (339782406926629100UL + 381UL), "init_kdnode", 1, 0UL, (339782406926629100UL + 381UL), "empty_kdnode", 0, (339782406926629100UL + 381UL), "buildkdtree", 10, (339782406926629100UL + 381UL), (339782406926629100UL + 630UL), (339782406926629100UL + 627UL), (339782406926629100UL + 626UL), (339782406926629100UL + 629UL), (339782406926629100UL + 628UL), 0UL, 0UL, (339782406926629100UL + 633UL), 0UL, 0UL, "empty_kdnode", 0, (339782406926629100UL + 381UL), "buildkdtree", 10, (339782406926629100UL + 381UL), (339782406926629100UL + 630UL), (339782406926629100UL + 627UL), (339782406926629100UL + 626UL), (339782406926629100UL + 629UL), (339782406926629100UL + 628UL), 0UL, 0UL, (339782406926629100UL + 633UL), 0UL, 0UL,
                            "coordkdtree", 0, "_Z11coordkdtreeP6kdnodePPi", "_Z15coordkdtree_npmP6kdnodePPi", 0, 2, (339782406926629100UL + 692UL), (339782406926629100UL + 693UL), 0UL, 2, "coordkdtree", 2, (339782406926629100UL + 671UL), (339782406926629100UL + 693UL), 0UL, "coordkdtree", 2, (339782406926629100UL + 671UL), (339782406926629100UL + 693UL), 0UL,
                            "init_kdnode", 0, "_Z11init_kdnodex", "_Z15init_kdnode_npmx", 0, 1, 0UL, (339782406926629100UL + 29UL), 2, "malloc", 1, 0UL, (339782406926629100UL + 29UL), "memset", 3, (339782406926629100UL + 29UL), 0UL, 0UL, 0UL,
                               "atol", (void **)&(____chimes_extern_func_atol),
                               "clock_gettime", (void **)&(____chimes_extern_func_clock_gettime),
                               "spec_genrand_int32", (void **)&(____chimes_extern_func_spec_genrand_int32),
                               "spec_init_genrand", (void **)&(____chimes_extern_func_spec_init_genrand),
                           "downheap", &(____chimes_does_checkpoint_downheap_npm),
                           "heapsort", &(____chimes_does_checkpoint_heapsort_npm),
                           "sweepkdtree", &(____chimes_does_checkpoint_sweepkdtree_npm),
                           "empty_kdnode", &(____chimes_does_checkpoint_empty_kdnode_npm),
                           "searchkdtree", &(____chimes_does_checkpoint_searchkdtree_npm),
                           "buildkdtree", &(____chimes_does_checkpoint_buildkdtree_npm),
                           "coordkdtree", &(____chimes_does_checkpoint_coordkdtree_npm),
                           "init_kdnode", &(____chimes_does_checkpoint_init_kdnode_npm),
                           "atol", &(____chimes_does_checkpoint_atol_npm),
                           "clock_gettime", &(____chimes_does_checkpoint_clock_gettime_npm),
                           "spec_genrand_int32", &(____chimes_does_checkpoint_spec_genrand_int32_npm),
                           "spec_init_genrand", &(____chimes_does_checkpoint_spec_init_genrand_npm),
                             (339782406926629100UL + 883UL), (339782406926629100UL + 738UL),
                             (339782406926629100UL + 625UL), (339782406926629100UL + 381UL),
                             (339782406926629100UL + 891UL), (339782406926629100UL + 967UL),
                             (339782406926629100UL + 159UL), (339782406926629100UL + 118UL),
                             (339782406926629100UL + 983UL), (339782406926629100UL + 1203UL),
                             (339782406926629100UL + 1260UL), (339782406926629100UL + 1262UL),
                             (339782406926629100UL + 986UL), (339782406926629100UL + 1328UL),
                             (339782406926629100UL + 987UL), (339782406926629100UL + 1321UL),
                             (339782406926629100UL + 984UL), (339782406926629100UL + 1199UL),
                             (339782406926629100UL + 985UL), (339782406926629100UL + 1327UL),
                             (339782406926629100UL + 238UL), (339782406926629100UL + 633UL),
                             (339782406926629100UL + 234UL), (339782406926629100UL + 629UL),
                             (339782406926629100UL + 235UL), (339782406926629100UL + 630UL),
                             (339782406926629100UL + 230UL), (339782406926629100UL + 625UL),
                             (339782406926629100UL + 231UL), (339782406926629100UL + 626UL),
                             (339782406926629100UL + 232UL), (339782406926629100UL + 627UL),
                             (339782406926629100UL + 233UL), (339782406926629100UL + 628UL),
                             (339782406926629100UL + 24UL), (339782406926629100UL + 29UL),
                             (339782406926629100UL + 25UL), (339782406926629100UL + 29UL),
                             (339782406926629100UL + 975UL), (339782406926629100UL + 1260UL),
                             (339782406926629100UL + 974UL), (339782406926629100UL + 1374UL),
                             (339782406926629100UL + 48UL), (339782406926629100UL + 159UL),
                             (339782406926629100UL + 695UL), (339782406926629100UL + 884UL),
                             (339782406926629100UL + 45UL), (339782406926629100UL + 156UL),
                             (339782406926629100UL + 1UL), (339782406926629100UL + 4UL),
                             (339782406926629100UL + 982UL), (339782406926629100UL + 1207UL),
                             (339782406926629100UL + 2UL), (339782406926629100UL + 4UL),
                             (339782406926629100UL + 1374UL), (339782406926629100UL + 1086UL),
                             (339782406926629100UL + 890UL), (339782406926629100UL + 966UL),
                             (339782406926629100UL + 692UL), (339782406926629100UL + 671UL),
                             (339782406926629100UL + 633UL), (339782406926629100UL + 422UL),
                             (339782406926629100UL + 635UL), (339782406926629100UL + 692UL),
                             (339782406926629100UL + 636UL), (339782406926629100UL + 693UL),
                             (339782406926629100UL + 693UL), (339782406926629100UL + 655UL),
                             (339782406926629100UL + 161UL), (339782406926629100UL + 226UL),
                             (339782406926629100UL + 163UL), (339782406926629100UL + 228UL),
                             (339782406926629100UL + 966UL), (339782406926629100UL + 926UL),
                             (339782406926629100UL + 694UL), (339782406926629100UL + 883UL),
                             (339782406926629100UL + 1384UL), (339782406926629100UL + 1020UL),
                     "kdnode", 320UL, 4, "long long int", (int)__builtin_offsetof (struct kdnode, n), "%struct.kdnode*", (int)__builtin_offsetof (struct kdnode, lo), "%struct.kdnode*", (int)__builtin_offsetof (struct kdnode, hi), "[ 3 x int ]", (int)__builtin_offsetof (struct kdnode, coord),
                     "timespec", 128UL, 2, "long int", (int)__builtin_offsetof (struct timespec, tv_sec), "long int", (int)__builtin_offsetof (struct timespec, tv_nsec),
                             "downheap", "_Z8downheapPxxxPPii", 0,
                             "heapsort", "_Z8heapsortPxxPPii", 2, "downheap", "downheap",
                             "sweepkdtree", "_Z11sweepkdtreeP6kdnodeS0_xxii", 3, "searchkdtree", "sweepkdtree", "sweepkdtree",
                             "empty_kdnode", "_Z12empty_kdnodev", 0,
                             "searchkdtree", "_Z12searchkdtreeP6kdnodeS0_ixxii", 2, "searchkdtree", "searchkdtree",
                             "buildkdtree", "_Z11buildkdtreeP6kdnodePxS1_S1_S1_S1_xxPPii", 7, "init_kdnode", "init_kdnode", "init_kdnode", "empty_kdnode", "buildkdtree", "empty_kdnode", "buildkdtree",
                             "main", "main", 19, "atol", "atol", "atol", "atol", "atol", "spec_init_genrand", "spec_genrand_int32", "heapsort", "heapsort", "heapsort", "checkpoint", "empty_kdnode", "buildkdtree", "checkpoint", "coordkdtree", "clock_gettime", "sweepkdtree", "checkpoint", "clock_gettime",
                             "coordkdtree", "_Z11coordkdtreeP6kdnodePPi", 2, "coordkdtree", "coordkdtree",
                             "init_kdnode", "_Z11init_kdnodex", 0,
                        "main|startTime|0", 1, "main",
                        "main|endTime|0", 1, "main",
        "downheap", 0UL, (int)5, 339782406926629326UL, 0UL, 0UL, 339782406926629328UL, 0UL,
        "downheap", 0UL, (int)5, 339782406926629326UL, 0UL, 0UL, 339782406926629328UL, 0UL,
        "init_kdnode", 339782406926629481UL, (int)1, 0UL,
        "init_kdnode", 339782406926629481UL, (int)1, 0UL,
        "init_kdnode", 339782406926629481UL, (int)1, 0UL,
        "empty_kdnode", 339782406926629481UL, (int)0,
        "buildkdtree", 0UL, (int)10, 339782406926629481UL, 339782406926629730UL, 339782406926629727UL, 339782406926629726UL, 339782406926629729UL, 339782406926629728UL, 0UL, 0UL, 339782406926629733UL, 0UL,
        "empty_kdnode", 339782406926629481UL, (int)0,
        "buildkdtree", 0UL, (int)10, 339782406926629481UL, 339782406926629730UL, 339782406926629727UL, 339782406926629726UL, 339782406926629729UL, 339782406926629728UL, 0UL, 0UL, 339782406926629733UL, 0UL,
        "coordkdtree", 0UL, (int)2, 339782406926629771UL, 339782406926629793UL,
        "coordkdtree", 0UL, (int)2, 339782406926629771UL, 339782406926629793UL,
        "searchkdtree", 0UL, (int)7, 339782406926629838UL, 339782406926629984UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "searchkdtree", 0UL, (int)7, 339782406926629838UL, 339782406926629984UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "searchkdtree", 0UL, (int)7, 339782406926630067UL, 339782406926630066UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "sweepkdtree", 0UL, (int)6, 339782406926630026UL, 339782406926630067UL, 0UL, 0UL, 0UL, 0UL,
        "sweepkdtree", 0UL, (int)6, 339782406926630026UL, 339782406926630067UL, 0UL, 0UL, 0UL, 0UL,
        "heapsort", 0UL, (int)4, 339782406926630307UL, 0UL, 339782406926630360UL, 0UL,
        "heapsort", 0UL, (int)4, 339782406926630303UL, 0UL, 339782406926630360UL, 0UL,
        "heapsort", 0UL, (int)4, 339782406926630299UL, 0UL, 339782406926630360UL, 0UL,
        "empty_kdnode", 339782406926630421UL, (int)0,
        "buildkdtree", 0UL, (int)10, 339782406926630421UL, 339782406926630307UL, 339782406926630303UL, 339782406926630299UL, 339782406926630427UL, 339782406926630428UL, 0UL, 0UL, 339782406926630360UL, 0UL,
        "coordkdtree", 0UL, (int)2, 339782406926630421UL, 339782406926630360UL,
        "sweepkdtree", 0UL, (int)6, 339782406926630421UL, 339782406926630421UL, 0UL, 0UL, 0UL, 0UL,
        "atol", 0UL, (int)1, 339782406926630186UL,
        "atol", 0UL, (int)1, 339782406926630186UL,
        "atol", 0UL, (int)1, 339782406926630186UL,
        "atol", 0UL, (int)1, 339782406926630186UL,
        "atol", 0UL, (int)1, 339782406926630186UL,
        "spec_init_genrand", 0UL, (int)1, 0UL,
        "spec_genrand_int32", 0UL, (int)0,
        "clock_gettime", 0UL, (int)2, 0UL, 339782406926630089UL,
        "clock_gettime", 0UL, (int)2, 0UL, 339782406926630090UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
