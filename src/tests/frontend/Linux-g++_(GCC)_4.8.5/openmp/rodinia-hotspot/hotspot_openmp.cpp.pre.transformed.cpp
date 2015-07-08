# 1 "hotspot_openmp.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "hotspot_openmp.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_single_iteration_npm = 1;
static int ____chimes_does_checkpoint_fatal_npm = 1;
static int ____chimes_does_checkpoint_usage_npm = 1;
static int ____chimes_does_checkpoint_read_input_npm = 1;

static int ____must_checkpoint_seconds_tp_0 = 2;
static int ____must_checkpoint_read_input_str_0 = 2;
static int ____must_checkpoint_main_temp_0 = 2;
static int ____must_checkpoint_main_power_0 = 2;
static int ____must_checkpoint_main_start_time_0 = 2;

static int ____must_manage_single_iteration = 2;
static int ____must_manage_read_input = 2;
static int ____must_manage_seconds = 2;
static int ____must_manage_usage = 2;
static int ____must_manage_fatal = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
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
# 2 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp" 2
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
# 3 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp" 2
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
# 4 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp" 2
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
# 5 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp" 2
# 5 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 7 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp" 2
# 7 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 8 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
using namespace std;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 22 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; struct timeval tp;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (____must_checkpoint_seconds_tp_0) { register_stack_vars(1, "seconds|tp|0", &____must_checkpoint_seconds_tp_0, "%struct.timeval = type { i64, i64 }", (void *)(&tp), (size_t)16, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      ;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     struct timezone tzp; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 28 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 29 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double t_chip = 0.0005;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double chip_height = 0.016;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double chip_width = 0.016;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 35 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double amb_temp = 80.0;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
int num_omp_threads;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 43 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void single_iteration_npm(double *result, double *temp, double *power, int row, int col, double Cap, double Rx, double Ry, double Rz, double step);
void single_iteration_quick(double *result, double *temp, double *power, int row, int col, double Cap, double Rx, double Ry, double Rz, double step); void single_iteration(double *result, double *temp, double *power, int row, int col, double Cap, double Rx, double Ry, double Rz, double step);
void single_iteration_resumable(double *result, double *temp, double *power, int row, int col,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double Cap, double Rx, double Ry, double Rz,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double step)
# 46 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable1 = new_stack((void *)(&single_iteration), "single_iteration", &____must_manage_single_iteration, 10, 0, (size_t)(10021604361511766924UL), (size_t)(10021604361511766925UL), (size_t)(10021604361511766926UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double delta; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 int r; int c; ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 omp_set_num_threads(num_omp_threads);
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{ call_lbl_4: bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(4, &____chimes_region_id0, 5, &c, &col, &delta, &r, &row); int ____chimes_first_iter0 = 1;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
#pragma omp parallel for shared(power, temp,result) private(r, c, delta) firstprivate(row, col) schedule(static) firstprivate(____chimes_first_iter0)
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 54 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (r = 0; r < row; r++) { { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 5, &c, &col, &delta, &r, &row); ____chimes_first_iter0 = 0; } {
# 56 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  for (c = 0; c < col; c++) {
# 57 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 58 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   if ((r == 0) && (c == 0)) {{
# 59 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[0] +
# 60 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[1] - temp[0]) / Rx +
# 61 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[col] - temp[0]) / Ry +
# 62 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[0]) / Rz);
# 63 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == 0) && (c == col-1)) {{
# 65 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[c] +
# 66 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c-1] - temp[c]) / Rx +
# 67 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c+col] - temp[c]) / Ry +
# 68 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[c]) / Rz);
# 69 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == row-1) && (c == col-1)) {{
# 71 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 72 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c-1] - temp[r*col+c]) / Rx +
# 73 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col+c] - temp[r*col+c]) / Ry +
# 74 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 75 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == row-1) && (c == 0)) {{
# 77 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col] +
# 78 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+1] - temp[r*col]) / Rx +
# 79 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col] - temp[r*col]) / Ry +
# 80 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col]) / Rz);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (r == 0) {{
# 83 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[c] +
# 84 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c+1] + temp[c-1] - 2.0*temp[c]) / Rx +
# 85 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[col+c] - temp[c]) / Ry +
# 86 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[c]) / Rz);
# 87 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (c == col-1) {{
# 89 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 90 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col+c] + temp[(r-1)*col+c] - 2.0*temp[r*col+c]) / Ry +
# 91 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c-1] - temp[r*col+c]) / Rx +
# 92 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (r == row-1) {{
# 95 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 96 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c+1] + temp[r*col+c-1] - 2.0*temp[r*col+c]) / Rx +
# 97 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col+c] - temp[r*col+c]) / Ry +
# 98 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 99 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (c == 0) {
# 101 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col] +
# 102 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col] + temp[(r-1)*col] - 2.0*temp[r*col]) / Ry +
# 103 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+1] - temp[r*col]) / Rx +
# 104 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col]) / Rz);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }
# 106 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   else {
# 107 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 108 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col+c] + temp[(r-1)*col+c] - 2.0*temp[r*col+c]) / Ry +
# 109 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c+1] + temp[r*col+c-1] - 2.0*temp[r*col+c]) / Rx +
# 110 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 111 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }
# 112 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 113 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   result[r*col+c] =temp[r*col+c]+ delta;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  }
# 118 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  } } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 omp_set_num_threads(num_omp_threads);
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{ call_lbl_5: bool ____chimes_disable1 = disable_current_thread(); void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(5, &____chimes_region_id1, 2, &c, &r); int ____chimes_first_iter1 = 1;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
#pragma omp parallel for shared(result, temp) private(r, c) schedule(static) firstprivate(____chimes_first_iter1)
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (r = 0; r < row; r++) { { if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &c, &r); ____chimes_first_iter1 = 0; } {
# 125 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  for (c = 0; c < col; c++) {
# 126 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   temp[r*col+c]=result[r*col+c];
# 127 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  }
# 128 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  } } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 1); reenable_current_thread(____chimes_disable1); }
# 129 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "single_iteration", &____must_manage_single_iteration, ____alias_loc_id_3, ____chimes_did_disable1, false); }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 133 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void compute_tran_temp_quick(double *result, int num_iterations, double *temp, double *power, int row, int col); void compute_tran_temp(double *result, int num_iterations, double *temp, double *power, int row, int col);
void compute_tran_temp_resumable(double *result, int num_iterations, double *temp, double *power, int row, int col)
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable2 = new_stack((void *)(&compute_tran_temp), "compute_tran_temp", (int *)0, 6, 6, (size_t)(10021604361511767043UL), (size_t)(0UL), (size_t)(10021604361511767045UL), (size_t)(10021604361511767046UL), (size_t)(0UL), (size_t)(0UL), "compute_tran_temp|result|0", (int *)0, "double*", (void *)(&result), (size_t)8, 1, 0, 0, "compute_tran_temp|num_iterations|0", (int *)0, "i32", (void *)(&num_iterations), (size_t)4, 0, 0, 0, "compute_tran_temp|temp|0", (int *)0, "double*", (void *)(&temp), (size_t)8, 1, 0, 0, "compute_tran_temp|power|0", (int *)0, "double*", (void *)(&power), (size_t)8, 1, 0, 0, "compute_tran_temp|row|0", (int *)0, "i32", (void *)(&row), (size_t)4, 0, 0, 0, "compute_tran_temp|col|0", (int *)0, "i32", (void *)(&col), (size_t)4, 0, 0, 0) ; int i;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double step;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Rz;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Ry;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Rx;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Cap;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 register_stack_vars(6, "compute_tran_temp|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "compute_tran_temp|step|0", (int *)0x0, "double", (void *)(&step), (size_t)8, 0, 0, 0, "compute_tran_temp|Rz|0", (int *)0x0, "double", (void *)(&Rz), (size_t)8, 0, 0, 0, "compute_tran_temp|Ry|0", (int *)0x0, "double", (void *)(&Ry), (size_t)8, 0, 0, 0, "compute_tran_temp|Rx|0", (int *)0x0, "double", (void *)(&Rx), (size_t)8, 0, 0, 0, "compute_tran_temp|Cap|0", (int *)0x0, "double", (void *)(&Cap), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ; ;
# 137 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 139 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 140 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  double grid_height; grid_height = (chip_height / row) ;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  double grid_width; grid_width = (chip_width / col) ;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Cap = (0.5 * 1.75E+6 * t_chip * grid_width * grid_height) ;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Rx = (grid_width / (2. * 100 * t_chip * grid_height)) ;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Ry = (grid_height / (2. * 100 * t_chip * grid_width)) ;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Rz = (t_chip / (100 * grid_height * grid_width)) ;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  double max_slope; max_slope = ((3.0E+6) / (0.5 * t_chip * 1.75E+6)) ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    step = (0.001 / max_slope) ;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double t; ;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     { for ( i = (0) ; i < num_iterations ; i++)
# 159 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 {
# 160 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  ({ calling_npm("single_iteration", 0); single_iteration_npm(result, temp, power, row, col, Cap, Rx, Ry, Rz, step); });
# 164 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
         call_lbl_1: checkpoint_transformed(1, ____alias_loc_id_0);
# 167 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 } }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 170 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "compute_tran_temp", (int *)0x0, ____alias_loc_id_4, ____chimes_did_disable2, false); }
# 174 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void fatal_npm(char *s);
void fatal_quick(char *s); void fatal(char *s);
void fatal_resumable(char *s)
# 176 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable3 = new_stack((void *)(&fatal), "fatal", &____must_manage_fatal, 1, 0, (size_t)(10021604361511767058UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 177 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "error: %s\n", s);
# 178 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 exit(1);
# 179 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "fatal", &____must_manage_fatal, 0, ____chimes_did_disable3, false); }
# 180 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 181 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void read_input_npm(double *vect, int grid_rows, int grid_cols, char *file);
void read_input_quick(double *vect, int grid_rows, int grid_cols, char *file); void read_input(double *vect, int grid_rows, int grid_cols, char *file);
void read_input_resumable(double *vect, int grid_rows, int grid_cols, char *file)
# 182 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable4 = new_stack((void *)(&read_input), "read_input", &____must_manage_read_input, 4, 0, (size_t)(10021604361511767129UL), (size_t)(0UL), (size_t)(0UL), (size_t)(10021604361511767132UL)) ; char str[256];
# 182 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (____must_checkpoint_read_input_str_0) { register_stack_vars(1, "read_input|str|0", &____must_checkpoint_read_input_str_0, "[256 x i8]", (void *)(str), (size_t)256, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   int i; int index; ;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 FILE *fp; ;
# 185 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  ;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double val; ;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 188 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fp = fopen (file, "r");
# 189 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (!fp) {({ calling_npm("fatal", 0); fatal_npm("file could not be opened for reading"); }); };
# 191 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 192 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (i=0; i < grid_rows * grid_cols; i++) {
# 193 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  fgets(str, 256, fp);
# 194 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  if (feof(fp)) {({ calling_npm("fatal", 0); fatal_npm("not enough lines in file"); }); };
# 196 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  if ((sscanf(str, "%lf", &val) != 1)) {({ calling_npm("fatal", 0); fatal_npm("invalid file format"); }); };
# 198 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  vect[i] = val;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 }
# 200 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fclose(fp);
# 202 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "read_input", &____must_manage_read_input, ____alias_loc_id_5, ____chimes_did_disable4, false); }
# 203 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 204 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void usage_npm(int argc, char **argv);
void usage_quick(int argc, char **argv); void usage(int argc, char **argv);
void usage_resumable(int argc, char **argv)
# 205 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable5 = new_stack((void *)(&usage), "usage", &____must_manage_usage, 2, 0, (size_t)(0UL), (size_t)(10021604361511767169UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "Usage: %s <grid_rows> <grid_cols> <sim_time> <no. of threads><temp_file> <power_file>\n", argv[0]);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<grid_rows>  - number of rows in the grid (positive integer)\n");
# 208 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<grid_cols>  - number of columns in the grid (positive integer)\n");
# 209 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<sim_time>   - number of iterations\n");
# 210 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<no. of threads>   - number of threads\n");
# 211 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<temp_file>  - name of the file containing the initial temperature values of each cell\n");
# 212 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<power_file> - name of the file containing the dissipated power values of each cell\n");
# 213 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 exit(1);
# 214 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "usage", &____must_manage_usage, 0, ____chimes_did_disable5, false); }
# 215 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 216 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
int main_quick(int argc, char **argv); int main(int argc, char **argv);
int main_resumable(int argc, char **argv)
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable6 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(10021604361511767315UL)) ; double start_time;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double *power;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double *temp;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 register_stack_vars(3, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|power|0", (int *)0x0, "double*", (void *)(&power), (size_t)8, 1, 0, 0, "main|temp|0", (int *)0x0, "double*", (void *)(&temp), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(9): { goto call_lbl_9; } default: { chimes_error(); } } } ; ;
# 218 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 int grid_rows; int grid_cols; int sim_time; int i; ;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   double *result; ;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 char *tfile; char *pfile; ;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 222 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 223 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (argc != 7) {({ calling_npm("usage", 0); usage_npm(argc, argv); }); };
# 225 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if ((grid_rows = atoi(argv[1])) <= 0 ||
# 226 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  (grid_cols = atoi(argv[2])) <= 0 ||
# 227 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  (sim_time = atoi(argv[3])) <= 0 ||
# 228 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  (num_omp_threads = atoi(argv[4])) <= 0) {({ calling_npm("usage", 0); usage_npm(argc, argv); }); };
# 231 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 temp = (double *) calloc_wrapper (grid_rows * grid_cols, sizeof(double), 10021604361511767242UL, 0, 0);
# 234 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 power = (double *) calloc_wrapper (grid_rows * grid_cols, sizeof(double), 10021604361511767249UL, 0, 0);
# 235 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 result = (double *) calloc_wrapper (grid_rows * grid_cols, sizeof(double), 10021604361511767256UL, 0, 0);
# 236 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (!temp || !power) {({ calling_npm("fatal", 0); fatal_npm("unable to allocate memory"); }); };
# 238 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 239 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 tfile = argv[5];
# 241 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 pfile = argv[6];
# 242 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 ({ calling_npm("read_input", 0); read_input_npm(temp, grid_rows, grid_cols, tfile); });
# 243 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 ({ calling_npm("read_input", 0); read_input_npm(power, grid_rows, grid_cols, pfile); });
# 244 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 245 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 247 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 printf("Start computing the transient temperature\n");
# 248 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  call_lbl_9: ({ calling((void*)compute_tran_temp, 9, ____alias_loc_id_1, 0UL, 6, (size_t)(10021604361511767256UL), (size_t)(0UL), (size_t)(10021604361511767242UL), (size_t)(10021604361511767249UL), (size_t)(0UL), (size_t)(0UL)); (compute_tran_temp)(result, sim_time, temp, power, grid_rows, grid_cols); }) ;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 printf("Ending simulation\n");
# 250 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 251 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     double end_time; end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    printf("execution took %f s\n", end_time - start_time);
# 264 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 264 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 free_wrapper(temp, 10021604361511767242UL);
# 265 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 free_wrapper(power, 10021604361511767249UL);
# 266 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); return ____chimes_ret_var_1; ;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); }
# 22 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; struct timeval tp;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (____must_checkpoint_seconds_tp_0) { register_stack_vars(1, "seconds|tp|0", &____must_checkpoint_seconds_tp_0, "%struct.timeval = type { i64, i64 }", (void *)(&tp), (size_t)16, 0, 1, 0); } ; ;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      ;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     struct timezone tzp; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); }

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }
# 43 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void single_iteration_quick(double *result, double *temp, double *power, int row, int col,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double Cap, double Rx, double Ry, double Rz,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double step)
# 46 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable1 = new_stack((void *)(&single_iteration), "single_iteration", &____must_manage_single_iteration, 10, 0, (size_t)(10021604361511766924UL), (size_t)(10021604361511766925UL), (size_t)(10021604361511766926UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double delta; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 int r; int c; ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 omp_set_num_threads(num_omp_threads);
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{ call_lbl_4: bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(4, &____chimes_region_id0, 5, &c, &col, &delta, &r, &row); int ____chimes_first_iter0 = 1;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
#pragma omp parallel for shared(power, temp,result) private(r, c, delta) firstprivate(row, col) schedule(static) firstprivate(____chimes_first_iter0)
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 54 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (r = 0; r < row; r++) { { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 5, &c, &col, &delta, &r, &row); ____chimes_first_iter0 = 0; } {
# 56 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  for (c = 0; c < col; c++) {
# 57 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 58 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   if ((r == 0) && (c == 0)) {{
# 59 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[0] +
# 60 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[1] - temp[0]) / Rx +
# 61 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[col] - temp[0]) / Ry +
# 62 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[0]) / Rz);
# 63 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == 0) && (c == col-1)) {{
# 65 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[c] +
# 66 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c-1] - temp[c]) / Rx +
# 67 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c+col] - temp[c]) / Ry +
# 68 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[c]) / Rz);
# 69 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == row-1) && (c == col-1)) {{
# 71 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 72 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c-1] - temp[r*col+c]) / Rx +
# 73 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col+c] - temp[r*col+c]) / Ry +
# 74 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 75 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == row-1) && (c == 0)) {{
# 77 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col] +
# 78 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+1] - temp[r*col]) / Rx +
# 79 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col] - temp[r*col]) / Ry +
# 80 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col]) / Rz);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (r == 0) {{
# 83 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[c] +
# 84 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c+1] + temp[c-1] - 2.0*temp[c]) / Rx +
# 85 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[col+c] - temp[c]) / Ry +
# 86 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[c]) / Rz);
# 87 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (c == col-1) {{
# 89 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 90 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col+c] + temp[(r-1)*col+c] - 2.0*temp[r*col+c]) / Ry +
# 91 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c-1] - temp[r*col+c]) / Rx +
# 92 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (r == row-1) {{
# 95 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 96 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c+1] + temp[r*col+c-1] - 2.0*temp[r*col+c]) / Rx +
# 97 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col+c] - temp[r*col+c]) / Ry +
# 98 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 99 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (c == 0) {
# 101 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col] +
# 102 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col] + temp[(r-1)*col] - 2.0*temp[r*col]) / Ry +
# 103 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+1] - temp[r*col]) / Rx +
# 104 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col]) / Rz);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }
# 106 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   else {
# 107 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 108 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col+c] + temp[(r-1)*col+c] - 2.0*temp[r*col+c]) / Ry +
# 109 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c+1] + temp[r*col+c-1] - 2.0*temp[r*col+c]) / Rx +
# 110 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 111 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }
# 112 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 113 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   result[r*col+c] =temp[r*col+c]+ delta;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  }
# 118 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  } } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 omp_set_num_threads(num_omp_threads);
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{ call_lbl_5: bool ____chimes_disable1 = disable_current_thread(); void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(5, &____chimes_region_id1, 2, &c, &r); int ____chimes_first_iter1 = 1;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
#pragma omp parallel for shared(result, temp) private(r, c) schedule(static) firstprivate(____chimes_first_iter1)
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (r = 0; r < row; r++) { { if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &c, &r); ____chimes_first_iter1 = 0; } {
# 125 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  for (c = 0; c < col; c++) {
# 126 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   temp[r*col+c]=result[r*col+c];
# 127 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  }
# 128 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  } } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 1); reenable_current_thread(____chimes_disable1); }
# 129 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "single_iteration", &____must_manage_single_iteration, ____alias_loc_id_3, ____chimes_did_disable1, false); }

void single_iteration(double *result, double *temp, double *power, int row, int col,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double Cap, double Rx, double Ry, double Rz,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double step) { (____chimes_replaying ? single_iteration_resumable(result, temp, power, row, col, Cap, Rx, Ry, Rz, step) : single_iteration_quick(result, temp, power, row, col, Cap, Rx, Ry, Rz, step)); }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void compute_tran_temp_quick(double *result, int num_iterations, double *temp, double *power, int row, int col)
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable2 = new_stack((void *)(&compute_tran_temp), "compute_tran_temp", (int *)0, 6, 6, (size_t)(10021604361511767043UL), (size_t)(0UL), (size_t)(10021604361511767045UL), (size_t)(10021604361511767046UL), (size_t)(0UL), (size_t)(0UL), "compute_tran_temp|result|0", (int *)0, "double*", (void *)(&result), (size_t)8, 1, 0, 0, "compute_tran_temp|num_iterations|0", (int *)0, "i32", (void *)(&num_iterations), (size_t)4, 0, 0, 0, "compute_tran_temp|temp|0", (int *)0, "double*", (void *)(&temp), (size_t)8, 1, 0, 0, "compute_tran_temp|power|0", (int *)0, "double*", (void *)(&power), (size_t)8, 1, 0, 0, "compute_tran_temp|row|0", (int *)0, "i32", (void *)(&row), (size_t)4, 0, 0, 0, "compute_tran_temp|col|0", (int *)0, "i32", (void *)(&col), (size_t)4, 0, 0, 0) ; int i;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double step;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Rz;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Ry;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Rx;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double Cap;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 register_stack_vars(6, "compute_tran_temp|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "compute_tran_temp|step|0", (int *)0x0, "double", (void *)(&step), (size_t)8, 0, 0, 0, "compute_tran_temp|Rz|0", (int *)0x0, "double", (void *)(&Rz), (size_t)8, 0, 0, 0, "compute_tran_temp|Ry|0", (int *)0x0, "double", (void *)(&Ry), (size_t)8, 0, 0, 0, "compute_tran_temp|Rx|0", (int *)0x0, "double", (void *)(&Rx), (size_t)8, 0, 0, 0, "compute_tran_temp|Cap|0", (int *)0x0, "double", (void *)(&Cap), (size_t)8, 0, 0, 0); ; ;
# 137 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 139 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 140 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  double grid_height; grid_height = (chip_height / row) ;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  double grid_width; grid_width = (chip_width / col) ;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Cap = (0.5 * 1.75E+6 * t_chip * grid_width * grid_height) ;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Rx = (grid_width / (2. * 100 * t_chip * grid_height)) ;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Ry = (grid_height / (2. * 100 * t_chip * grid_width)) ;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    Rz = (t_chip / (100 * grid_height * grid_width)) ;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  double max_slope; max_slope = ((3.0E+6) / (0.5 * t_chip * 1.75E+6)) ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    step = (0.001 / max_slope) ;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double t; ;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     { for ( i = (0) ; i < num_iterations ; i++)
# 159 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 {
# 160 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  ({ calling_npm("single_iteration", 0); single_iteration_npm(result, temp, power, row, col, Cap, Rx, Ry, Rz, step); });
# 164 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
         call_lbl_1: checkpoint_transformed(1, ____alias_loc_id_0);
# 167 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 } }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 170 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "compute_tran_temp", (int *)0x0, ____alias_loc_id_4, ____chimes_did_disable2, false); }

void compute_tran_temp(double *result, int num_iterations, double *temp, double *power, int row, int col) { (____chimes_replaying ? compute_tran_temp_resumable(result, num_iterations, temp, power, row, col) : compute_tran_temp_quick(result, num_iterations, temp, power, row, col)); }
# 175 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void fatal_quick(char *s)
# 176 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable3 = new_stack((void *)(&fatal), "fatal", &____must_manage_fatal, 1, 0, (size_t)(10021604361511767058UL)) ; ; ;
# 177 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "error: %s\n", s);
# 178 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 exit(1);
# 179 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "fatal", &____must_manage_fatal, 0, ____chimes_did_disable3, false); }

void fatal(char *s) { (____chimes_replaying ? fatal_resumable(s) : fatal_quick(s)); }
# 181 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void read_input_quick(double *vect, int grid_rows, int grid_cols, char *file)
# 182 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable4 = new_stack((void *)(&read_input), "read_input", &____must_manage_read_input, 4, 0, (size_t)(10021604361511767129UL), (size_t)(0UL), (size_t)(0UL), (size_t)(10021604361511767132UL)) ; char str[256];
# 182 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (____must_checkpoint_read_input_str_0) { register_stack_vars(1, "read_input|str|0", &____must_checkpoint_read_input_str_0, "[256 x i8]", (void *)(str), (size_t)256, 0, 0, 0); } ; ;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   int i; int index; ;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 FILE *fp; ;
# 185 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  ;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double val; ;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 188 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fp = fopen (file, "r");
# 189 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (!fp) {({ calling_npm("fatal", 0); fatal_npm("file could not be opened for reading"); }); };
# 191 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 192 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (i=0; i < grid_rows * grid_cols; i++) {
# 193 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  fgets(str, 256, fp);
# 194 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  if (feof(fp)) {({ calling_npm("fatal", 0); fatal_npm("not enough lines in file"); }); };
# 196 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  if ((sscanf(str, "%lf", &val) != 1)) {({ calling_npm("fatal", 0); fatal_npm("invalid file format"); }); };
# 198 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  vect[i] = val;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 }
# 200 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fclose(fp);
# 202 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "read_input", &____must_manage_read_input, ____alias_loc_id_5, ____chimes_did_disable4, false); }

void read_input(double *vect, int grid_rows, int grid_cols, char *file) { (____chimes_replaying ? read_input_resumable(vect, grid_rows, grid_cols, file) : read_input_quick(vect, grid_rows, grid_cols, file)); }
# 204 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void usage_quick(int argc, char **argv)
# 205 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable5 = new_stack((void *)(&usage), "usage", &____must_manage_usage, 2, 0, (size_t)(0UL), (size_t)(10021604361511767169UL)) ; ; ;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "Usage: %s <grid_rows> <grid_cols> <sim_time> <no. of threads><temp_file> <power_file>\n", argv[0]);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<grid_rows>  - number of rows in the grid (positive integer)\n");
# 208 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<grid_cols>  - number of columns in the grid (positive integer)\n");
# 209 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<sim_time>   - number of iterations\n");
# 210 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<no. of threads>   - number of threads\n");
# 211 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<temp_file>  - name of the file containing the initial temperature values of each cell\n");
# 212 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<power_file> - name of the file containing the dissipated power values of each cell\n");
# 213 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 exit(1);
# 214 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "usage", &____must_manage_usage, 0, ____chimes_did_disable5, false); }

void usage(int argc, char **argv) { (____chimes_replaying ? usage_resumable(argc, argv) : usage_quick(argc, argv)); }
# 216 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
int main_quick(int argc, char **argv)
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{const int ____chimes_did_disable6 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(10021604361511767315UL)) ; double start_time;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double *power;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double *temp;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 register_stack_vars(3, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|power|0", (int *)0x0, "double*", (void *)(&power), (size_t)8, 1, 0, 0, "main|temp|0", (int *)0x0, "double*", (void *)(&temp), (size_t)8, 1, 0, 0); ; ;
# 218 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 int grid_rows; int grid_cols; int sim_time; int i; ;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   double *result; ;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 char *tfile; char *pfile; ;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 222 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 223 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (argc != 7) {({ calling_npm("usage", 0); usage_npm(argc, argv); }); };
# 225 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if ((grid_rows = atoi(argv[1])) <= 0 ||
# 226 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  (grid_cols = atoi(argv[2])) <= 0 ||
# 227 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  (sim_time = atoi(argv[3])) <= 0 ||
# 228 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  (num_omp_threads = atoi(argv[4])) <= 0) {({ calling_npm("usage", 0); usage_npm(argc, argv); }); };
# 231 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 temp = (double *) calloc_wrapper (grid_rows * grid_cols, sizeof(double), 10021604361511767242UL, 0, 0);
# 234 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 power = (double *) calloc_wrapper (grid_rows * grid_cols, sizeof(double), 10021604361511767249UL, 0, 0);
# 235 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 result = (double *) calloc_wrapper (grid_rows * grid_cols, sizeof(double), 10021604361511767256UL, 0, 0);
# 236 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (!temp || !power) {({ calling_npm("fatal", 0); fatal_npm("unable to allocate memory"); }); };
# 238 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 239 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 tfile = argv[5];
# 241 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 pfile = argv[6];
# 242 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 ({ calling_npm("read_input", 0); read_input_npm(temp, grid_rows, grid_cols, tfile); });
# 243 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 ({ calling_npm("read_input", 0); read_input_npm(power, grid_rows, grid_cols, pfile); });
# 244 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 245 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 247 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 printf("Start computing the transient temperature\n");
# 248 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  call_lbl_9: ({ calling((void*)compute_tran_temp, 9, ____alias_loc_id_1, 0UL, 6, (size_t)(10021604361511767256UL), (size_t)(0UL), (size_t)(10021604361511767242UL), (size_t)(10021604361511767249UL), (size_t)(0UL), (size_t)(0UL)); compute_tran_temp_quick(result, sim_time, temp, power, grid_rows, grid_cols); }) ;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 printf("Ending simulation\n");
# 250 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 251 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     double end_time; end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    printf("execution took %f s\n", end_time - start_time);
# 264 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 264 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 free_wrapper(temp, 10021604361511767242UL);
# 265 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 free_wrapper(power, 10021604361511767249UL);
# 266 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); return ____chimes_ret_var_1; ;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); }

int main(int argc, char **argv) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 22 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
double seconds_npm() {
# 23 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    struct timeval tp;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    struct timezone tzp;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    int i = gettimeofday(&tp, &tzp);
# 26 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); return ____chimes_ret_var_0; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
}
# 43 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void single_iteration_npm(double *result, double *temp, double *power, int row, int col,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double Cap, double Rx, double Ry, double Rz,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
       double step)
# 46 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{
# 47 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double delta;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 int r, c;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 omp_set_num_threads(num_omp_threads);
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
#pragma omp parallel for shared(power, temp,result) private(r, c, delta) firstprivate(row, col) schedule(static)
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 54 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (r = 0; r < row; r++) {
# 56 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  for (c = 0; c < col; c++) {
# 57 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 58 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   if ((r == 0) && (c == 0)) {{
# 59 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[0] +
# 60 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[1] - temp[0]) / Rx +
# 61 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[col] - temp[0]) / Ry +
# 62 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[0]) / Rz);
# 63 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == 0) && (c == col-1)) {{
# 65 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[c] +
# 66 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c-1] - temp[c]) / Rx +
# 67 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c+col] - temp[c]) / Ry +
# 68 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[c]) / Rz);
# 69 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == row-1) && (c == col-1)) {{
# 71 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 72 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c-1] - temp[r*col+c]) / Rx +
# 73 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col+c] - temp[r*col+c]) / Ry +
# 74 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 75 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if ((r == row-1) && (c == 0)) {{
# 77 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col] +
# 78 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+1] - temp[r*col]) / Rx +
# 79 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col] - temp[r*col]) / Ry +
# 80 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col]) / Rz);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (r == 0) {{
# 83 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[c] +
# 84 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[c+1] + temp[c-1] - 2.0*temp[c]) / Rx +
# 85 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[col+c] - temp[c]) / Ry +
# 86 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[c]) / Rz);
# 87 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (c == col-1) {{
# 89 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 90 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col+c] + temp[(r-1)*col+c] - 2.0*temp[r*col+c]) / Ry +
# 91 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c-1] - temp[r*col+c]) / Rx +
# 92 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (r == row-1) {{
# 95 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 96 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c+1] + temp[r*col+c-1] - 2.0*temp[r*col+c]) / Rx +
# 97 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r-1)*col+c] - temp[r*col+c]) / Ry +
# 98 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 99 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }; } else if (c == 0) {
# 101 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col] +
# 102 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col] + temp[(r-1)*col] - 2.0*temp[r*col]) / Ry +
# 103 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+1] - temp[r*col]) / Rx +
# 104 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col]) / Rz);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }
# 106 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   else {
# 107 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
    delta = (step / Cap) * (power[r*col+c] +
# 108 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[(r+1)*col+c] + temp[(r-1)*col+c] - 2.0*temp[r*col+c]) / Ry +
# 109 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (temp[r*col+c+1] + temp[r*col+c-1] - 2.0*temp[r*col+c]) / Rx +
# 110 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
      (amb_temp - temp[r*col+c]) / Rz);
# 111 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   }
# 112 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 113 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   result[r*col+c] =temp[r*col+c]+ delta;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  }
# 118 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 omp_set_num_threads(num_omp_threads);
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
#pragma omp parallel for shared(result, temp) private(r, c) schedule(static)
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (r = 0; r < row; r++) {
# 125 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  for (c = 0; c < col; c++) {
# 126 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   temp[r*col+c]=result[r*col+c];
# 127 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  }
# 128 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 }
# 129 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
}
# 175 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void fatal_npm(char *s)
# 176 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{
# 177 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "error: %s\n", s);
# 178 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 exit(1);
# 179 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
}
# 181 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void read_input_npm(double *vect, int grid_rows, int grid_cols, char *file)
# 182 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{
# 183 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
   int i, index;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 FILE *fp;
# 185 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 char str[256];
# 186 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 double val;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 188 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fp = fopen (file, "r");
# 189 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 if (!fp) {fatal_npm("file could not be opened for reading"); };
# 191 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 192 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 for (i=0; i < grid_rows * grid_cols; i++) {
# 193 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  fgets(str, 256, fp);
# 194 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  if (feof(fp)) {fatal_npm("not enough lines in file"); };
# 196 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  if ((sscanf(str, "%lf", &val) != 1)) {fatal_npm("invalid file format"); };
# 198 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
  vect[i] = val;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 }
# 200 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fclose(fp);
# 202 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
}
# 204 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
void usage_npm(int argc, char **argv)
# 205 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
{
# 206 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "Usage: %s <grid_rows> <grid_cols> <sim_time> <no. of threads><temp_file> <power_file>\n", argv[0]);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<grid_rows>  - number of rows in the grid (positive integer)\n");
# 208 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<grid_cols>  - number of columns in the grid (positive integer)\n");
# 209 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<sim_time>   - number of iterations\n");
# 210 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<no. of threads>   - number of threads\n");
# 211 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<temp_file>  - name of the file containing the initial temperature values of each cell\n");
# 212 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 fprintf(stderr, "\t<power_file> - name of the file containing the dissipated power values of each cell\n");
# 213 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
 exit(1);
# 214 "/scratch/jmg3/rodinia_3.0/openmp/hotspot/hotspot_openmp.cpp"
}





static int module_init() {
    init_module(10021604361511766085UL, 20, 7, 5, 7, 5, 0, 5, 11, 0, 4,
                           &____alias_loc_id_0, (unsigned)15, (unsigned)0, (unsigned)0, (10021604361511766085UL + 850UL), (10021604361511766085UL + 851UL), (10021604361511766085UL + 852UL), (10021604361511766085UL + 853UL), (10021604361511766085UL + 854UL), (10021604361511766085UL + 855UL), (10021604361511766085UL + 856UL), (10021604361511766085UL + 857UL), (10021604361511766085UL + 858UL), (10021604361511766085UL + 859UL), (10021604361511766085UL + 860UL), (10021604361511766085UL + 861UL), (10021604361511766085UL + 862UL), (10021604361511766085UL + 863UL), (10021604361511766085UL + 865UL),
                           &____alias_loc_id_1, (unsigned)16, (unsigned)0, (unsigned)0, (10021604361511766085UL + 1085UL), (10021604361511766085UL + 1086UL), (10021604361511766085UL + 1087UL), (10021604361511766085UL + 1088UL), (10021604361511766085UL + 1089UL), (10021604361511766085UL + 1090UL), (10021604361511766085UL + 1092UL), (10021604361511766085UL + 1093UL), (10021604361511766085UL + 1094UL), (10021604361511766085UL + 1095UL), (10021604361511766085UL + 1096UL), (10021604361511766085UL + 1097UL), (10021604361511766085UL + 1157UL), (10021604361511766085UL + 1164UL), (10021604361511766085UL + 1171UL), (10021604361511766085UL + 1240UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (10021604361511766085UL + 1UL), (10021604361511766085UL + 3UL), (10021604361511766085UL + 4UL),
                           &____alias_loc_id_3, (unsigned)15, (unsigned)0, (unsigned)0, (10021604361511766085UL + 26UL), (10021604361511766085UL + 27UL), (10021604361511766085UL + 28UL), (10021604361511766085UL + 29UL), (10021604361511766085UL + 30UL), (10021604361511766085UL + 31UL), (10021604361511766085UL + 32UL), (10021604361511766085UL + 33UL), (10021604361511766085UL + 34UL), (10021604361511766085UL + 35UL), (10021604361511766085UL + 36UL), (10021604361511766085UL + 37UL), (10021604361511766085UL + 38UL), (10021604361511766085UL + 839UL), (10021604361511766085UL + 840UL),
                           &____alias_loc_id_4, (unsigned)15, (unsigned)0, (unsigned)0, (10021604361511766085UL + 850UL), (10021604361511766085UL + 851UL), (10021604361511766085UL + 852UL), (10021604361511766085UL + 853UL), (10021604361511766085UL + 854UL), (10021604361511766085UL + 855UL), (10021604361511766085UL + 856UL), (10021604361511766085UL + 857UL), (10021604361511766085UL + 858UL), (10021604361511766085UL + 859UL), (10021604361511766085UL + 860UL), (10021604361511766085UL + 861UL), (10021604361511766085UL + 862UL), (10021604361511766085UL + 863UL), (10021604361511766085UL + 865UL),
                           &____alias_loc_id_5, (unsigned)9, (unsigned)0, (unsigned)0, (10021604361511766085UL + 977UL), (10021604361511766085UL + 978UL), (10021604361511766085UL + 979UL), (10021604361511766085UL + 980UL), (10021604361511766085UL + 981UL), (10021604361511766085UL + 983UL), (10021604361511766085UL + 984UL), (10021604361511766085UL + 1000UL), (10021604361511766085UL + 1044UL),
                           &____alias_loc_id_6, (unsigned)2, (unsigned)0, (unsigned)0, (10021604361511766085UL + 1098UL), (10021604361511766085UL + 1099UL),
                            "seconds", 0, "_Z7secondsv", "_Z11seconds_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (10021604361511766085UL + 1UL), (10021604361511766085UL + 2UL), 0UL,
                            "single_iteration", 0, "_Z16single_iterationPdS_S_iiddddd", "_Z20single_iteration_npmPdS_S_iiddddd", 0, 10, (10021604361511766085UL + 839UL), (10021604361511766085UL + 840UL), (10021604361511766085UL + 841UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2, "omp_set_num_threads", 1, 0UL, 0UL, "omp_set_num_threads", 1, 0UL, 0UL,
                            "fatal", 0, "_Z5fatalPc", "_Z9fatal_npmPc", 0, 1, (10021604361511766085UL + 973UL), 0UL, 2, "fprintf", 3, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1242UL), (10021604361511766085UL + 973UL), 0UL, "exit", 1, 0UL, 0UL,
                            "usage", 0, "_Z5usageiPPc", "_Z9usage_npmiPPc", 0, 2, 0UL, (10021604361511766085UL + 1084UL), 0UL, 8, "fprintf", 3, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1248UL), (10021604361511766085UL + 1066UL), 0UL, "fprintf", 2, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1249UL), 0UL, "fprintf", 2, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1250UL), 0UL, "fprintf", 2, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1251UL), 0UL, "fprintf", 2, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1252UL), 0UL, "fprintf", 2, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1253UL), 0UL, "fprintf", 2, (10021604361511766085UL + 967UL), (10021604361511766085UL + 1254UL), 0UL, "exit", 1, 0UL, 0UL,
                            "read_input", 0, "_Z10read_inputPdiiPc", "_Z14read_input_npmPdiiPc", 0, 4, (10021604361511766085UL + 1044UL), 0UL, 0UL, (10021604361511766085UL + 1047UL), 0UL, 8, "fopen", 2, (10021604361511766085UL + 1047UL), (10021604361511766085UL + 1243UL), (10021604361511766085UL + 1000UL), "fatal", 1, (10021604361511766085UL + 1244UL), 0UL, "fgets", 3, (10021604361511766085UL + 984UL), 0UL, (10021604361511766085UL + 1000UL), (10021604361511766085UL + 1017UL), "feof", 1, (10021604361511766085UL + 1000UL), 0UL, "fatal", 1, (10021604361511766085UL + 1245UL), 0UL, "sscanf", 3, (10021604361511766085UL + 984UL), (10021604361511766085UL + 1246UL), (10021604361511766085UL + 985UL), 0UL, "fatal", 1, (10021604361511766085UL + 1247UL), 0UL, "fclose", 1, (10021604361511766085UL + 1000UL), 0UL,
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "single_iteration", &(____chimes_does_checkpoint_single_iteration_npm),
                           "fatal", &(____chimes_does_checkpoint_fatal_npm),
                           "usage", &(____chimes_does_checkpoint_usage_npm),
                           "read_input", &(____chimes_does_checkpoint_read_input_npm),
                             (10021604361511766085UL + 964UL), (10021604361511766085UL + 973UL),
                             (10021604361511766085UL + 977UL), (10021604361511766085UL + 1044UL),
                             (10021604361511766085UL + 26UL), (10021604361511766085UL + 839UL),
                             (10021604361511766085UL + 27UL), (10021604361511766085UL + 840UL),
                             (10021604361511766085UL + 850UL), (10021604361511766085UL + 958UL),
                             (10021604361511766085UL + 1092UL), (10021604361511766085UL + 1157UL),
                             (10021604361511766085UL + 852UL), (10021604361511766085UL + 960UL),
                             (10021604361511766085UL + 853UL), (10021604361511766085UL + 961UL),
                             (10021604361511766085UL + 1058UL), (10021604361511766085UL + 1084UL),
                             (10021604361511766085UL + 983UL), (10021604361511766085UL + 1000UL),
                             (10021604361511766085UL + 980UL), (10021604361511766085UL + 1047UL),
                             (10021604361511766085UL + 1093UL), (10021604361511766085UL + 1164UL),
                             (10021604361511766085UL + 28UL), (10021604361511766085UL + 841UL),
                             (10021604361511766085UL + 1096UL), (10021604361511766085UL + 1123UL),
                             (10021604361511766085UL + 1241UL), (10021604361511766085UL + 967UL),
                             (10021604361511766085UL + 1084UL), (10021604361511766085UL + 1066UL),
                             (10021604361511766085UL + 1095UL), (10021604361511766085UL + 1123UL),
                             (10021604361511766085UL + 1094UL), (10021604361511766085UL + 1171UL),
                             (10021604361511766085UL + 1230UL), (10021604361511766085UL + 1123UL),
                             (10021604361511766085UL + 1087UL), (10021604361511766085UL + 1230UL),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 64UL, 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                             "single_iteration", "_Z16single_iterationPdS_S_iiddddd", 0,
                             "main", "main", 8, "usage", "usage", "fatal", "read_input", "read_input", "seconds", "compute_tran_temp", "seconds",
                             "read_input", "_Z10read_inputPdiiPc", 3, "fatal", "fatal", "fatal",
                             "seconds", "_Z7secondsv", 0,
                             "compute_tran_temp", "_Z17compute_tran_tempPdiS_S_ii", 2, "single_iteration", "checkpoint",
                             "usage", "_Z5usageiPPc", 0,
                             "fatal", "_Z5fatalPc", 0,
                        "seconds|tp|0", 1, "seconds",
                        "read_input|str|0", 1, "read_input",
                        "main|temp|0", 1, "compute_tran_temp",
                        "main|power|0", 1, "compute_tran_temp",
                        "main|start_time|0", 1, "compute_tran_temp",
        "single_iteration", 0UL, (int)10, 10021604361511767043UL, 10021604361511767045UL, 10021604361511767046UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "fatal", 0UL, (int)1, 10021604361511767329UL,
        "fatal", 0UL, (int)1, 10021604361511767330UL,
        "fatal", 0UL, (int)1, 10021604361511767332UL,
        "usage", 0UL, (int)2, 0UL, 10021604361511767315UL,
        "usage", 0UL, (int)2, 0UL, 10021604361511767315UL,
        "fatal", 0UL, (int)1, 10021604361511767340UL,
        "read_input", 0UL, (int)4, 10021604361511767242UL, 0UL, 0UL, 10021604361511767208UL,
        "read_input", 0UL, (int)4, 10021604361511767249UL, 0UL, 0UL, 10021604361511767208UL,
        "seconds", 0UL, (int)0,
        "seconds", 0UL, (int)0);
    register_global_var("global|t_chip", "double", (void *)(&t_chip), 8, 0, 0, 0UL, 0);
    register_global_var("global|chip_height", "double", (void *)(&chip_height), 8, 0, 0, 0UL, 0);
    register_global_var("global|chip_width", "double", (void *)(&chip_width), 8, 0, 0, 0UL, 0);
    register_global_var("global|amb_temp", "double", (void *)(&amb_temp), 8, 0, 0, 0UL, 0);
    register_global_var("global|num_omp_threads", "i32", (void *)(&num_omp_threads), 4, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
