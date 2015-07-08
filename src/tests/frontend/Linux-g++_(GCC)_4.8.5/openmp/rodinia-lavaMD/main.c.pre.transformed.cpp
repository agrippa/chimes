# 1 "main.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "main.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_get_time_npm = 1;
static int ____chimes_does_checkpoint_isInteger_npm = 1;
static int ____chimes_does_checkpoint_kernel_cpu_npm = 1;

static int ____must_checkpoint_seconds_tp_0 = 2;
static int ____must_checkpoint_main_par_cpu_0 = 2;
static int ____must_checkpoint_main_dim_cpu_0 = 2;
static int ____must_checkpoint_main_end_time_0 = 2;

static int ____must_manage_seconds = 2;

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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 1 "/tmp/chimes-frontend.1436373279442//"
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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 20 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
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
# 21 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
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
# 22 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdbool.h" 1 3 4
# 23 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
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
# 24 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
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
# 25 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 3 4
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
# 26 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 26 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 28 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 28 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 29 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 32 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 33 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./util/timer/timer.h" 1

extern "C" {
# 13 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./util/timer/timer.h"
long long get_time();






}
# 35 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./util/num/num.h" 1

extern "C" {
# 13 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./util/num/num.h"
int isInteger(char *str);






}
# 36 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 36 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 38 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./main.h" 1
# 17 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./main.h"
typedef struct
{
 double x, y, z;

} THREE_VECTOR;

typedef struct
{
 double v, x, y, z;

} FOUR_VECTOR;

typedef struct nei_str
{


 int x, y, z;
 int number;
 long offset;

} nei_str;

typedef struct box_str
{


 int x, y, z;
 int number;
 long offset;


 int nn;
 nei_str nei[26];

} box_str;

typedef struct par_str
{

 double alpha;

} par_str;

typedef struct dim_str
{


 int cur_arg;
 int arch_arg;
 int cores_arg;
 int boxes1d_arg;


 long number_boxes;
 long box_mem;
 long space_elem;
 long space_mem;
 long space_mem2;

} dim_str;





int
main( int argc,
  char *argv []);
# 42 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 42 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 43 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 44 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 46 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/./kernel/kernel_cpu.h" 1

extern "C" {






void kernel_cpu( par_str par,
     dim_str dim,
     box_str* box,
     FOUR_VECTOR* rv,
     double* qv,
     FOUR_VECTOR* fv);


}
# 48 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c" 2
# 48 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; struct timeval tp;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 if (____must_checkpoint_seconds_tp_0) { register_stack_vars(1, "seconds|tp|0", &____must_checkpoint_seconds_tp_0, "%struct.timeval = type { i64, i64 }", (void *)(&tp), (size_t)16, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     struct timezone tzp; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_11, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_11, ____chimes_did_disable0, false); }
# 59 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
static long long (*____chimes_extern_func_get_time)(void) = get_time;static int (*____chimes_extern_func_isInteger)(char *) = isInteger;static void (*____chimes_extern_func_kernel_cpu)(struct par_str, struct dim_str, struct box_str *, FOUR_VECTOR *, double *, FOUR_VECTOR *) = kernel_cpu;
int main_quick( int argc, char *argv []); int main( int argc, char *argv []);
int
# 62 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
main_resumable( int argc,
# 63 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  char *argv [])
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&main), "main", (int *)0, 2, 2, (size_t)(0UL), (size_t)(1242561836700799382UL), "main|argc|0", (int *)0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", (int *)0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; double end_time;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double start_time;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int nh;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
FOUR_VECTOR *fv_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double *qv_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
FOUR_VECTOR *rv_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
box_str *box_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
dim_str dim_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
par_str par_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int n;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int m;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int l;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int k;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int j;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int i;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 register_stack_vars(15, "main|end_time|0", &____must_checkpoint_main_end_time_0, "double", (void *)(&end_time), (size_t)8, 0, 0, 0, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|nh|0", (int *)0x0, "i32", (void *)(&nh), (size_t)4, 0, 0, 0, "main|fv_cpu|0", (int *)0x0, "%struct.FOUR_VECTOR*", (void *)(&fv_cpu), (size_t)8, 1, 0, 0, "main|qv_cpu|0", (int *)0x0, "double*", (void *)(&qv_cpu), (size_t)8, 1, 0, 0, "main|rv_cpu|0", (int *)0x0, "%struct.FOUR_VECTOR*", (void *)(&rv_cpu), (size_t)8, 1, 0, 0, "main|box_cpu|0", (int *)0x0, "%struct.box_str*", (void *)(&box_cpu), (size_t)8, 1, 0, 0, "main|dim_cpu|0", (int *)0x0, "%struct.dim_str = type { i32, i32, i32, i32, i64, i64, i64, i64, i64 }", (void *)(&dim_cpu), (size_t)56, 0, 1, 0, "main|par_cpu|0", (int *)0x0, "%struct.par_str = type { double }", (void *)(&par_cpu), (size_t)8, 0, 1, 0, "main|n|0", (int *)0x0, "i32", (void *)(&n), (size_t)4, 0, 0, 0, "main|m|0", (int *)0x0, "i32", (void *)(&m), (size_t)4, 0, 0, 0, "main|l|0", (int *)0x0, "i32", (void *)(&l), (size_t)4, 0, 0, 0, "main|k|0", (int *)0x0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(15): { goto call_lbl_15; } case(26): { goto call_lbl_26; } case(27): { goto call_lbl_27; } case(28): { goto call_lbl_28; } case(40): { goto call_lbl_40; } case(41): { goto call_lbl_41; } case(42): { goto call_lbl_42; } case(43): { goto call_lbl_43; } case(44): { goto call_lbl_44; } case(50): { goto call_lbl_50; } default: { chimes_error(); } } } ; ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 66 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 67 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time0; ;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_1: time0 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 1, ____alias_loc_id_4, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_4); (*____chimes_extern_func_get_time)(); })));
# 74 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time1; ;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time2; ;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time3; ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time4; ;
# 80 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time5; ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time6; ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time7; ;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 85 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       ;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   ;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   ;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 96 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_2: time1 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 2, ____alias_loc_id_0, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_0); (*____chimes_extern_func_get_time)(); })));
# 97 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 99 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.cores_arg = 1;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.boxes1d_arg = 1;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(dim_cpu.cur_arg=1; dim_cpu.cur_arg<argc; dim_cpu.cur_arg++){
# 108 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  if (strcmp(argv[dim_cpu.cur_arg], "-cores")==0) {{
# 110 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   if(argc>=dim_cpu.cur_arg+1){
# 112 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 113 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_5: if(alias_group_changed(____alias_loc_id_1) || (____chimes_does_checkpoint_isInteger_npm ? ( ({ char * ____chimes_arg0; if (!____chimes_replaying) { ____chimes_arg0 = (argv[dim_cpu.cur_arg + 1]); } calling((void*)isInteger, 5, ____alias_loc_id_1, 0UL, 1, (size_t)(1242561836700798668UL)); (isInteger)(____chimes_arg0); }) ) : (({ calling_npm("isInteger", ____alias_loc_id_1); (*____chimes_extern_func_isInteger)(argv[dim_cpu.cur_arg+1]); })))==1){
# 114 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.cores_arg = atoi(argv[dim_cpu.cur_arg+1]);
# 115 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     if(dim_cpu.cores_arg<0){
# 116 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      printf("ERROR: Wrong value to -cores parameter, cannot be <=0\n");
# 117 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 118 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.cur_arg = dim_cpu.cur_arg+1;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    else{
# 123 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     printf("ERROR: Value to -cores parameter in not a number\n");
# 124 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_2; ;
# 125 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 126 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 127 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 128 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   else{
# 129 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    printf("ERROR: Missing value to -cores parameter\n");
# 130 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_3; ;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 132 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }; } else if(strcmp(argv[dim_cpu.cur_arg], "-boxes1d")==0){
# 135 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   if(argc>=dim_cpu.cur_arg+1){
# 137 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_15: if(alias_group_changed(____alias_loc_id_2) || (____chimes_does_checkpoint_isInteger_npm ? ( ({ char * ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = (argv[dim_cpu.cur_arg + 1]); } calling((void*)isInteger, 15, ____alias_loc_id_2, 0UL, 1, (size_t)(1242561836700798668UL)); (isInteger)(____chimes_arg1); }) ) : (({ calling_npm("isInteger", ____alias_loc_id_2); (*____chimes_extern_func_isInteger)(argv[dim_cpu.cur_arg+1]); })))==1){
# 139 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.boxes1d_arg = atoi(argv[dim_cpu.cur_arg+1]);
# 140 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     if(dim_cpu.boxes1d_arg<0){
# 141 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      printf("ERROR: Wrong value to -boxes1d parameter, cannot be <=0\n");
# 142 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_4; ;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     }
# 144 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.cur_arg = dim_cpu.cur_arg+1;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 146 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 147 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    else{
# 148 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     printf("ERROR: Value to -boxes1d parameter in not a number\n");
# 149 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_5; ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 151 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 152 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   else{
# 154 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    printf("ERROR: Missing value to -boxes1d parameter\n");
# 155 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     int ____chimes_ret_var_6; ; ____chimes_ret_var_6 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_6; ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 157 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }
# 158 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  else{
# 160 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   printf("ERROR: Unknown parameter\n");
# 161 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_7; ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }
# 163 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 164 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 printf("Configuration used: cores = %d, boxes1d = %d\n", dim_cpu.cores_arg, dim_cpu.boxes1d_arg);
# 167 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_26: time2 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 26, ____alias_loc_id_10, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_10); (*____chimes_extern_func_get_time)(); })));
# 169 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 170 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 174 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 par_cpu.alpha = 0.5;
# 175 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_27: time3 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 27, ____alias_loc_id_9, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_9); (*____chimes_extern_func_get_time)(); })));
# 177 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 178 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 179 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 180 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 181 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 182 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 183 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.number_boxes = dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.space_elem = dim_cpu.number_boxes * 100;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.space_mem = dim_cpu.space_elem * sizeof(FOUR_VECTOR);
# 188 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.space_mem2 = dim_cpu.space_elem * sizeof(double);
# 189 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.box_mem = dim_cpu.number_boxes * sizeof(box_str);
# 192 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 193 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_28: time4 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 28, ____alias_loc_id_8, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_8); (*____chimes_extern_func_get_time)(); })));
# 194 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 202 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 203 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 204 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 205 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 206 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 box_cpu = (box_str*)malloc_wrapper(dim_cpu.box_mem, 1242561836700798883UL, 0, 1, (int)sizeof(struct box_str), 0);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 208 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 209 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 nh = 0;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 211 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 212 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.boxes1d_arg; i++){
# 213 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 214 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  for(j=0; j<dim_cpu.boxes1d_arg; j++){
# 215 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 216 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   for(k=0; k<dim_cpu.boxes1d_arg; k++){
# 217 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 219 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].x = k;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].y = j;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].z = i;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].number = nh;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].offset = nh * 100;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 225 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 226 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].nn = 0;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 228 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 229 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    for(l=-1; l<2; l++){
# 230 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     for(m=-1; m<2; m++){
# 232 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      for(n=-1; n<2; n++){
# 234 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       if( (((i+l)>=0 && (j+m)>=0 && (k+n)>=0)==true && ((i+l)<dim_cpu.boxes1d_arg && (j+m)<dim_cpu.boxes1d_arg && (k+n)<dim_cpu.boxes1d_arg)==true) &&
# 237 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
         (l==0 && m==0 && n==0)==false ){
# 238 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 239 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].x = (k+n);
# 241 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].y = (j+m);
# 242 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].z = (i+l);
# 243 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].number = (box_cpu[nh].nei[box_cpu[nh].nn].z * dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg) +
# 244 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
                   (box_cpu[nh].nei[box_cpu[nh].nn].y * dim_cpu.boxes1d_arg) +
# 245 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
                    box_cpu[nh].nei[box_cpu[nh].nn].x;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].offset = box_cpu[nh].nei[box_cpu[nh].nn].number * 100;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 248 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 249 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nn = box_cpu[nh].nn + 1;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 251 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       }
# 252 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      }
# 254 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     }
# 255 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 256 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 257 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    nh = nh + 1;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 261 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }
# 262 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 263 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 264 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 265 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 268 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 269 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 srand(time(__null));
# 270 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 271 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 272 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 rv_cpu = (FOUR_VECTOR*)malloc_wrapper(dim_cpu.space_mem, 1242561836700799222UL, 0, 1, (int)sizeof(FOUR_VECTOR), 0);
# 273 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.space_elem; i=i+1){
# 274 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].v = (rand()%10 + 1) / 10.0;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].x = (rand()%10 + 1) / 10.0;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].y = (rand()%10 + 1) / 10.0;
# 277 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].z = (rand()%10 + 1) / 10.0;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 279 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 281 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 qv_cpu = (double*)malloc_wrapper(dim_cpu.space_mem2, 1242561836700799284UL, 0, 0);
# 282 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.space_elem; i=i+1){
# 283 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  qv_cpu[i] = (rand()%10 + 1) / 10.0;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 285 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 286 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 287 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 fv_cpu = (FOUR_VECTOR*)malloc_wrapper(dim_cpu.space_mem, 1242561836700799307UL, 0, 1, (int)sizeof(FOUR_VECTOR), 0);
# 288 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.space_elem; i=i+1){
# 289 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].v = 0;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].x = 0;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].y = 0;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].z = 0;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 294 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 295 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 296 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_40: checkpoint_transformed(40, ____alias_loc_id_7);
# 297 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 298 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 299 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_41: time5 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 41, 0, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", 0); (*____chimes_extern_func_get_time)(); })));
# 309 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_42: (____chimes_does_checkpoint_kernel_cpu_npm ? ( ({ par_str ____chimes_arg2; dim_str ____chimes_arg3; if (!____chimes_replaying) { ____chimes_arg2 = (par_cpu); ____chimes_arg3 = (dim_cpu); } calling((void*)kernel_cpu, 42, ____alias_loc_id_6, 0UL, 6, (size_t)(0UL), (size_t)(1242561836700798618UL), (size_t)(1242561836700798883UL), (size_t)(1242561836700799222UL), (size_t)(1242561836700799284UL), (size_t)(1242561836700799307UL)); (kernel_cpu)(____chimes_arg2, ____chimes_arg3, box_cpu, rv_cpu, qv_cpu, fv_cpu); }) ) : (({ calling_npm("kernel_cpu", ____alias_loc_id_6); (*____chimes_extern_func_kernel_cpu)(par_cpu, dim_cpu, box_cpu, rv_cpu, qv_cpu, fv_cpu); })));
# 315 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_43: time6 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 43, 0, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", 0); (*____chimes_extern_func_get_time)(); })));
# 317 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 318 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_44: checkpoint_transformed(44, ____alias_loc_id_5);
# 320 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 321 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 322 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 323 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    printf("execution took %f s\n", end_time - start_time);
# 341 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 341 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(rv_cpu, 1242561836700799222UL);
# 342 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(qv_cpu, 1242561836700799284UL);
# 343 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(fv_cpu, 1242561836700799307UL);
# 344 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(box_cpu, 1242561836700798883UL);
# 345 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 346 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_50: time7 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 50, ____alias_loc_id_3, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_3); (*____chimes_extern_func_get_time)(); })));
# 371 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 371 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (0.0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_8; ;
# 372 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); }
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; struct timeval tp;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 if (____must_checkpoint_seconds_tp_0) { register_stack_vars(1, "seconds|tp|0", &____must_checkpoint_seconds_tp_0, "%struct.timeval = type { i64, i64 }", (void *)(&tp), (size_t)16, 0, 1, 0); } ; ;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     struct timezone tzp; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_11, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_11, ____chimes_did_disable0, false); }

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }
# 61 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int
# 62 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
main_quick( int argc,
# 63 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  char *argv [])
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&main), "main", (int *)0, 2, 2, (size_t)(0UL), (size_t)(1242561836700799382UL), "main|argc|0", (int *)0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", (int *)0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; double end_time;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double start_time;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int nh;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
FOUR_VECTOR *fv_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double *qv_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
FOUR_VECTOR *rv_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
box_str *box_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
dim_str dim_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
par_str par_cpu;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int n;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int m;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int l;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int k;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int j;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
int i;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 register_stack_vars(15, "main|end_time|0", &____must_checkpoint_main_end_time_0, "double", (void *)(&end_time), (size_t)8, 0, 0, 0, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|nh|0", (int *)0x0, "i32", (void *)(&nh), (size_t)4, 0, 0, 0, "main|fv_cpu|0", (int *)0x0, "%struct.FOUR_VECTOR*", (void *)(&fv_cpu), (size_t)8, 1, 0, 0, "main|qv_cpu|0", (int *)0x0, "double*", (void *)(&qv_cpu), (size_t)8, 1, 0, 0, "main|rv_cpu|0", (int *)0x0, "%struct.FOUR_VECTOR*", (void *)(&rv_cpu), (size_t)8, 1, 0, 0, "main|box_cpu|0", (int *)0x0, "%struct.box_str*", (void *)(&box_cpu), (size_t)8, 1, 0, 0, "main|dim_cpu|0", (int *)0x0, "%struct.dim_str = type { i32, i32, i32, i32, i64, i64, i64, i64, i64 }", (void *)(&dim_cpu), (size_t)56, 0, 1, 0, "main|par_cpu|0", (int *)0x0, "%struct.par_str = type { double }", (void *)(&par_cpu), (size_t)8, 0, 1, 0, "main|n|0", (int *)0x0, "i32", (void *)(&n), (size_t)4, 0, 0, 0, "main|m|0", (int *)0x0, "i32", (void *)(&m), (size_t)4, 0, 0, 0, "main|l|0", (int *)0x0, "i32", (void *)(&l), (size_t)4, 0, 0, 0, "main|k|0", (int *)0x0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); ; ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 66 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 67 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time0; ;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_1: time0 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 1, ____alias_loc_id_4, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_4); (*____chimes_extern_func_get_time)(); })));
# 74 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time1; ;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time2; ;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time3; ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time4; ;
# 80 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time5; ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time6; ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 long long time7; ;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 85 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       ;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   ;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   ;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  ;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 96 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_2: time1 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 2, ____alias_loc_id_0, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_0); (*____chimes_extern_func_get_time)(); })));
# 97 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 99 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.cores_arg = 1;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.boxes1d_arg = 1;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(dim_cpu.cur_arg=1; dim_cpu.cur_arg<argc; dim_cpu.cur_arg++){
# 108 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  if (strcmp(argv[dim_cpu.cur_arg], "-cores")==0) {{
# 110 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   if(argc>=dim_cpu.cur_arg+1){
# 112 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 113 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_5: if(alias_group_changed(____alias_loc_id_1) || (____chimes_does_checkpoint_isInteger_npm ? ( ({ calling((void*)isInteger, 5, ____alias_loc_id_1, 0UL, 1, (size_t)(1242561836700798668UL)); (isInteger)(argv[dim_cpu.cur_arg + 1]); }) ) : (({ calling_npm("isInteger", ____alias_loc_id_1); (*____chimes_extern_func_isInteger)(argv[dim_cpu.cur_arg+1]); })))==1){
# 114 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.cores_arg = atoi(argv[dim_cpu.cur_arg+1]);
# 115 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     if(dim_cpu.cores_arg<0){
# 116 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      printf("ERROR: Wrong value to -cores parameter, cannot be <=0\n");
# 117 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 118 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.cur_arg = dim_cpu.cur_arg+1;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    else{
# 123 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     printf("ERROR: Value to -cores parameter in not a number\n");
# 124 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_2; ;
# 125 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 126 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 127 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 128 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   else{
# 129 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    printf("ERROR: Missing value to -cores parameter\n");
# 130 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_3; ;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 132 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }; } else if(strcmp(argv[dim_cpu.cur_arg], "-boxes1d")==0){
# 135 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   if(argc>=dim_cpu.cur_arg+1){
# 137 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_15: if(alias_group_changed(____alias_loc_id_2) || (____chimes_does_checkpoint_isInteger_npm ? ( ({ calling((void*)isInteger, 15, ____alias_loc_id_2, 0UL, 1, (size_t)(1242561836700798668UL)); (isInteger)(argv[dim_cpu.cur_arg + 1]); }) ) : (({ calling_npm("isInteger", ____alias_loc_id_2); (*____chimes_extern_func_isInteger)(argv[dim_cpu.cur_arg+1]); })))==1){
# 139 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.boxes1d_arg = atoi(argv[dim_cpu.cur_arg+1]);
# 140 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     if(dim_cpu.boxes1d_arg<0){
# 141 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      printf("ERROR: Wrong value to -boxes1d parameter, cannot be <=0\n");
# 142 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_4; ;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     }
# 144 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     dim_cpu.cur_arg = dim_cpu.cur_arg+1;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 146 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 147 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    else{
# 148 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     printf("ERROR: Value to -boxes1d parameter in not a number\n");
# 149 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_5; ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 151 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 152 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   else{
# 154 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    printf("ERROR: Missing value to -boxes1d parameter\n");
# 155 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     int ____chimes_ret_var_6; ; ____chimes_ret_var_6 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_6; ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 157 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }
# 158 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  else{
# 160 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   printf("ERROR: Unknown parameter\n");
# 161 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_7; ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }
# 163 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 164 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 printf("Configuration used: cores = %d, boxes1d = %d\n", dim_cpu.cores_arg, dim_cpu.boxes1d_arg);
# 167 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_26: time2 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 26, ____alias_loc_id_10, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_10); (*____chimes_extern_func_get_time)(); })));
# 169 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 170 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 174 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 par_cpu.alpha = 0.5;
# 175 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_27: time3 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 27, ____alias_loc_id_9, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_9); (*____chimes_extern_func_get_time)(); })));
# 177 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 178 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 179 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 180 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 181 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 182 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 183 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.number_boxes = dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.space_elem = dim_cpu.number_boxes * 100;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.space_mem = dim_cpu.space_elem * sizeof(FOUR_VECTOR);
# 188 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.space_mem2 = dim_cpu.space_elem * sizeof(double);
# 189 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 dim_cpu.box_mem = dim_cpu.number_boxes * sizeof(box_str);
# 192 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 193 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_28: time4 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 28, ____alias_loc_id_8, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_8); (*____chimes_extern_func_get_time)(); })));
# 194 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 202 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 203 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 204 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 205 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 206 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 box_cpu = (box_str*)malloc_wrapper(dim_cpu.box_mem, 1242561836700798883UL, 0, 1, (int)sizeof(struct box_str), 0);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 208 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 209 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 nh = 0;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 211 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 212 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.boxes1d_arg; i++){
# 213 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 214 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  for(j=0; j<dim_cpu.boxes1d_arg; j++){
# 215 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 216 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   for(k=0; k<dim_cpu.boxes1d_arg; k++){
# 217 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 219 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].x = k;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].y = j;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].z = i;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].number = nh;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].offset = nh * 100;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 225 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 226 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    box_cpu[nh].nn = 0;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 228 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 229 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    for(l=-1; l<2; l++){
# 230 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     for(m=-1; m<2; m++){
# 232 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      for(n=-1; n<2; n++){
# 234 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       if( (((i+l)>=0 && (j+m)>=0 && (k+n)>=0)==true && ((i+l)<dim_cpu.boxes1d_arg && (j+m)<dim_cpu.boxes1d_arg && (k+n)<dim_cpu.boxes1d_arg)==true) &&
# 237 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
         (l==0 && m==0 && n==0)==false ){
# 238 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 239 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].x = (k+n);
# 241 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].y = (j+m);
# 242 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].z = (i+l);
# 243 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].number = (box_cpu[nh].nei[box_cpu[nh].nn].z * dim_cpu.boxes1d_arg * dim_cpu.boxes1d_arg) +
# 244 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
                   (box_cpu[nh].nei[box_cpu[nh].nn].y * dim_cpu.boxes1d_arg) +
# 245 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
                    box_cpu[nh].nei[box_cpu[nh].nn].x;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nei[box_cpu[nh].nn].offset = box_cpu[nh].nei[box_cpu[nh].nn].number * 100;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 248 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 249 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
        box_cpu[nh].nn = box_cpu[nh].nn + 1;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 251 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       }
# 252 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
      }
# 254 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     }
# 255 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    }
# 256 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 257 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    nh = nh + 1;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
   }
# 261 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  }
# 262 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 263 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 264 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 265 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 268 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 269 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 srand(time(__null));
# 270 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 271 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 272 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 rv_cpu = (FOUR_VECTOR*)malloc_wrapper(dim_cpu.space_mem, 1242561836700799222UL, 0, 1, (int)sizeof(FOUR_VECTOR), 0);
# 273 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.space_elem; i=i+1){
# 274 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].v = (rand()%10 + 1) / 10.0;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].x = (rand()%10 + 1) / 10.0;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].y = (rand()%10 + 1) / 10.0;
# 277 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  rv_cpu[i].z = (rand()%10 + 1) / 10.0;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 279 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 281 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 qv_cpu = (double*)malloc_wrapper(dim_cpu.space_mem2, 1242561836700799284UL, 0, 0);
# 282 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.space_elem; i=i+1){
# 283 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  qv_cpu[i] = (rand()%10 + 1) / 10.0;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 285 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 286 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 287 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 fv_cpu = (FOUR_VECTOR*)malloc_wrapper(dim_cpu.space_mem, 1242561836700799307UL, 0, 1, (int)sizeof(FOUR_VECTOR), 0);
# 288 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 for(i=0; i<dim_cpu.space_elem; i=i+1){
# 289 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].v = 0;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].x = 0;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].y = 0;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  fv_cpu[i].z = 0;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 }
# 294 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 295 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 296 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_40: checkpoint_transformed(40, ____alias_loc_id_7);
# 297 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 298 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 299 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_41: time5 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 41, 0, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", 0); (*____chimes_extern_func_get_time)(); })));
# 309 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_42: (____chimes_does_checkpoint_kernel_cpu_npm ? ( ({ calling((void*)kernel_cpu, 42, ____alias_loc_id_6, 0UL, 6, (size_t)(0UL), (size_t)(1242561836700798618UL), (size_t)(1242561836700798883UL), (size_t)(1242561836700799222UL), (size_t)(1242561836700799284UL), (size_t)(1242561836700799307UL)); (kernel_cpu)(par_cpu, dim_cpu, box_cpu, rv_cpu, qv_cpu, fv_cpu); }) ) : (({ calling_npm("kernel_cpu", ____alias_loc_id_6); (*____chimes_extern_func_kernel_cpu)(par_cpu, dim_cpu, box_cpu, rv_cpu, qv_cpu, fv_cpu); })));
# 315 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_43: time6 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 43, 0, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", 0); (*____chimes_extern_func_get_time)(); })));
# 317 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 318 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     call_lbl_44: checkpoint_transformed(44, ____alias_loc_id_5);
# 320 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 321 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 322 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
       end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 323 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    printf("execution took %f s\n", end_time - start_time);
# 341 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 341 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(rv_cpu, 1242561836700799222UL);
# 342 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(qv_cpu, 1242561836700799284UL);
# 343 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(fv_cpu, 1242561836700799307UL);
# 344 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
 free_wrapper(box_cpu, 1242561836700798883UL);
# 345 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 346 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  call_lbl_50: time7 = (____chimes_does_checkpoint_get_time_npm ? ( ({ calling((void*)get_time, 50, ____alias_loc_id_3, 0UL, 0); (get_time)(); }) ) : (({ calling_npm("get_time", ____alias_loc_id_3); (*____chimes_extern_func_get_time)(); })));
# 371 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 371 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (0.0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); return ____chimes_ret_var_8; ;
# 372 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable1, false); }

int
# 62 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
main( int argc,
# 63 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
  char *argv []) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
double seconds_npm() {
# 54 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    struct timeval tp;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    struct timezone tzp;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
    int i = gettimeofday(&tp, &tzp);
# 57 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); return ____chimes_ret_var_0; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/lavaMD/main.c"
}





static int module_init() {
    init_module(1242561836700798559UL, 6, 2, 4, 13, 1, 3, 4, 2, 11, 7,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)0, (1242561836700798559UL + 29UL),
                           &____alias_loc_id_1, (unsigned)0, (unsigned)0, (unsigned)1, "isInteger", (unsigned)1, (1242561836700798559UL + 109UL),
                           &____alias_loc_id_2, (unsigned)2, (unsigned)0, (unsigned)1, (1242561836700798559UL + 30UL), (1242561836700798559UL + 44UL), "isInteger", (unsigned)1, (1242561836700798559UL + 109UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)0, (1242561836700798559UL + 60UL),
                           &____alias_loc_id_4, (unsigned)3, (unsigned)0, (unsigned)0, (1242561836700798559UL + 26UL), (1242561836700798559UL + 27UL), (1242561836700798559UL + 28UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (unsigned)0, (1242561836700798559UL + 35UL),
                           &____alias_loc_id_6, (unsigned)1, (unsigned)0, (unsigned)1, (1242561836700798559UL + 34UL), "kernel_cpu", (unsigned)5, (1242561836700798559UL + 59UL), (1242561836700798559UL + 324UL), (1242561836700798559UL + 663UL), (1242561836700798559UL + 725UL), (1242561836700798559UL + 748UL),
                           &____alias_loc_id_7, (unsigned)18, (unsigned)0, (unsigned)0, (1242561836700798559UL + 33UL), (1242561836700798559UL + 37UL), (1242561836700798559UL + 38UL), (1242561836700798559UL + 39UL), (1242561836700798559UL + 40UL), (1242561836700798559UL + 41UL), (1242561836700798559UL + 42UL), (1242561836700798559UL + 45UL), (1242561836700798559UL + 46UL), (1242561836700798559UL + 47UL), (1242561836700798559UL + 48UL), (1242561836700798559UL + 49UL), (1242561836700798559UL + 57UL), (1242561836700798559UL + 324UL), (1242561836700798559UL + 663UL), (1242561836700798559UL + 725UL), (1242561836700798559UL + 748UL), (1242561836700798559UL + 855UL),
                           &____alias_loc_id_8, (unsigned)2, (unsigned)0, (unsigned)0, (1242561836700798559UL + 32UL), (1242561836700798559UL + 44UL),
                           &____alias_loc_id_9, (unsigned)2, (unsigned)0, (unsigned)0, (1242561836700798559UL + 31UL), (1242561836700798559UL + 43UL),
                            &____alias_loc_id_10, (unsigned)2, (unsigned)0, (unsigned)0, (1242561836700798559UL + 30UL), (1242561836700798559UL + 44UL),
                            &____alias_loc_id_11, (unsigned)3, (unsigned)0, (unsigned)0, (1242561836700798559UL + 1UL), (1242561836700798559UL + 3UL), (1242561836700798559UL + 4UL),
                            &____alias_loc_id_12, (unsigned)12, (unsigned)0, (unsigned)0, (1242561836700798559UL + 26UL), (1242561836700798559UL + 30UL), (1242561836700798559UL + 36UL), (1242561836700798559UL + 44UL), (1242561836700798559UL + 50UL), (1242561836700798559UL + 51UL), (1242561836700798559UL + 52UL), (1242561836700798559UL + 53UL), (1242561836700798559UL + 54UL), (1242561836700798559UL + 55UL), (1242561836700798559UL + 56UL), (1242561836700798559UL + 61UL),
                            "seconds", 0, "_Z7secondsv", "_Z11seconds_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (1242561836700798559UL + 1UL), (1242561836700798559UL + 2UL), 0UL,
                               "get_time", (void **)&(____chimes_extern_func_get_time),
                               "isInteger", (void **)&(____chimes_extern_func_isInteger),
                               "kernel_cpu", (void **)&(____chimes_extern_func_kernel_cpu),
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "get_time", &(____chimes_does_checkpoint_get_time_npm),
                           "isInteger", &(____chimes_does_checkpoint_isInteger_npm),
                           "kernel_cpu", &(____chimes_does_checkpoint_kernel_cpu_npm),
                             (1242561836700798559UL + 48UL), (1242561836700798559UL + 748UL),
                             (1242561836700798559UL + 46UL), (1242561836700798559UL + 663UL),
                             (1242561836700798559UL + 47UL), (1242561836700798559UL + 725UL),
                             (1242561836700798559UL + 45UL), (1242561836700798559UL + 324UL),
                             (1242561836700798559UL + 28UL), (1242561836700798559UL + 823UL),
                             (1242561836700798559UL + 823UL), (1242561836700798559UL + 109UL),
                     "FOUR_VECTOR", 256UL, 4, "double", (int)__builtin_offsetof (FOUR_VECTOR, v), "double", (int)__builtin_offsetof (FOUR_VECTOR, x), "double", (int)__builtin_offsetof (FOUR_VECTOR, y), "double", (int)__builtin_offsetof (FOUR_VECTOR, z),
                     "box_str", 5248UL, 7, "int", (int)__builtin_offsetof (struct box_str, x), "int", (int)__builtin_offsetof (struct box_str, y), "int", (int)__builtin_offsetof (struct box_str, z), "int", (int)__builtin_offsetof (struct box_str, number), "long int", (int)__builtin_offsetof (struct box_str, offset), "int", (int)__builtin_offsetof (struct box_str, nn), "[ 26 x %struct.nei_str ]", (int)__builtin_offsetof (struct box_str, nei),
                     "dim_str", 448UL, 9, "int", (int)__builtin_offsetof (struct dim_str, cur_arg), "int", (int)__builtin_offsetof (struct dim_str, arch_arg), "int", (int)__builtin_offsetof (struct dim_str, cores_arg), "int", (int)__builtin_offsetof (struct dim_str, boxes1d_arg), "long int", (int)__builtin_offsetof (struct dim_str, number_boxes), "long int", (int)__builtin_offsetof (struct dim_str, box_mem), "long int", (int)__builtin_offsetof (struct dim_str, space_elem), "long int", (int)__builtin_offsetof (struct dim_str, space_mem), "long int", (int)__builtin_offsetof (struct dim_str, space_mem2),
                     "nei_str", 192UL, 5, "int", (int)__builtin_offsetof (struct nei_str, x), "int", (int)__builtin_offsetof (struct nei_str, y), "int", (int)__builtin_offsetof (struct nei_str, z), "int", (int)__builtin_offsetof (struct nei_str, number), "long int", (int)__builtin_offsetof (struct nei_str, offset),
                     "par_str", 64UL, 1, "double", (int)__builtin_offsetof (struct par_str, alpha),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 64UL, 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                             "seconds", "_Z7secondsv", 0,
                             "main", "main", 15, "get_time", "get_time", "isInteger", "isInteger", "get_time", "get_time", "get_time", "seconds", "checkpoint", "get_time", "kernel_cpu", "get_time", "checkpoint", "seconds", "get_time",
                        "seconds|tp|0", 1, "seconds",
                        "main|par_cpu|0", 1, "main",
                        "main|dim_cpu|0", 1, "main",
                        "main|end_time|0", 1, "get_time",
        "seconds", 0UL, (int)0,
        "seconds", 0UL, (int)0,
        "get_time", 0UL, (int)0,
        "get_time", 0UL, (int)0,
        "isInteger", 0UL, (int)1, 1242561836700798668UL,
        "isInteger", 0UL, (int)1, 1242561836700798668UL,
        "get_time", 0UL, (int)0,
        "get_time", 0UL, (int)0,
        "get_time", 0UL, (int)0,
        "get_time", 0UL, (int)0,
        "kernel_cpu", 0UL, (int)6, 0UL, 1242561836700798618UL, 1242561836700798883UL, 1242561836700799222UL, 1242561836700799284UL, 1242561836700799307UL,
        "get_time", 0UL, (int)0,
        "get_time", 0UL, (int)0);
    return 0;
}

static const int __libchimes_module_init = module_init();
