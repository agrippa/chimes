# 1 "bots_common.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "bots_common.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_bots_get_load_average_npm = 1;
static int ____chimes_does_checkpoint_bots_usecs_npm = 1;
static int ____chimes_does_checkpoint_bots_get_max_cpus_npm = 1;
static int ____chimes_does_checkpoint_bots_get_architecture_npm = 1;
static int ____chimes_does_checkpoint_bots_warning_npm = 1;
static int ____chimes_does_checkpoint_bots_print_results_npm = 1;
static int ____chimes_does_checkpoint_bots_get_date_npm = 1;
static int ____chimes_does_checkpoint_bots_error_npm = 1;
static int ____chimes_does_checkpoint_bots_print_usage_npm = 1;

static int ____must_checkpoint_bots_print_results_str_architecture_0 = 2;
static int ____must_checkpoint_bots_print_results_str_load_avg_0 = 2;

static int ____must_manage_bots_get_load_average = 2;
static int ____must_manage_bots_usecs = 2;
static int ____must_manage_bots_get_max_cpus = 2;
static int ____must_manage_bots_get_architecture = 2;
static int ____must_manage_bots_warning = 2;
static int ____must_manage_bots_print_results = 2;
static int ____must_manage_bots_get_date = 2;
static int ____must_manage_bots_error = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/scratch/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/scratch/jmg3/chimes/src/libchimes/libchimes.h" 2


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
# 76 "/scratch/jmg3/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 21 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
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
# 22 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
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
# 23 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1101 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
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
# 24 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
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
# 25 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
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
# 26 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
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
# 27 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
# 1 "/usr/include/sys/utsname.h" 1 3 4
# 28 "/usr/include/sys/utsname.h" 3 4
extern "C" {

# 1 "/usr/include/bits/utsname.h" 1 3 4
# 31 "/usr/include/sys/utsname.h" 2 3 4
# 49 "/usr/include/sys/utsname.h" 3 4
struct utsname
  {

    char sysname[65];


    char nodename[65];


    char release[65];

    char version[65];


    char machine[65];




    char domainname[65];




  };
# 82 "/usr/include/sys/utsname.h" 3 4
extern int uname (struct utsname *__name) throw ();


}
# 28 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
# 1 "/usr/include/sys/resource.h" 1 3 4
# 25 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/bits/resource.h" 1 3 4
# 33 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,


  __RLIMIT_NLIMITS = 15,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 127 "/usr/include/bits/resource.h" 3 4
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};


# 1 "/usr/include/bits/time.h" 1 3 4
# 176 "/usr/include/bits/resource.h" 2 3 4


struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    long int ru_maxrss;


    long int ru_ixrss;

    long int ru_idrss;

    long int ru_isrss;


    long int ru_minflt;

    long int ru_majflt;

    long int ru_nswap;


    long int ru_inblock;

    long int ru_oublock;

    long int ru_msgsnd;

    long int ru_msgrcv;

    long int ru_nsignals;



    long int ru_nvcsw;


    long int ru_nivcsw;
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};
# 26 "/usr/include/sys/resource.h" 2 3 4






extern "C" {
# 43 "/usr/include/sys/resource.h" 3 4
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;





extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) throw ();
# 62 "/usr/include/sys/resource.h" 3 4
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) throw ();






extern int setrlimit (__rlimit_resource_t __resource,
        __const struct rlimit *__rlimits) throw ();
# 82 "/usr/include/sys/resource.h" 3 4
extern int setrlimit64 (__rlimit_resource_t __resource,
   __const struct rlimit64 *__rlimits) throw ();




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) throw ();





extern int getpriority (__priority_which_t __which, id_t __who) throw ();



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     throw ();

}
# 29 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
# 29 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"

# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.h" 1
# 49 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.h"
void bots_get_date(char *str);
void bots_get_architecture(char *str);
void bots_get_load_average(char *str);
void bots_print_results(void);
# 31 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_main.h" 1
# 34 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_main.h"
void bots_print_usage(void);
void bots_print_usage_option(char opt, int type, char* description, char *val, int subc, char **subv);
# 32 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots.h" 1
# 27 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots.h"
extern int bots_sequential_flag;
extern int bots_benchmark_flag;
extern int bots_check_flag;
extern int bots_result;
extern int bots_output_format;
extern int bots_print_header;

extern char bots_name[];
extern char bots_parameters[];
extern char bots_model[];
extern char bots_resources[];

extern char bots_exec_date[];
extern char bots_exec_message[];
extern char bots_comp_date[];
extern char bots_comp_message[];
extern char bots_cc[];
extern char bots_cflags[];
extern char bots_ld[];
extern char bots_ldflags[];

extern double bots_time_program;
extern double bots_time_sequential;
extern int bots_number_of_tasks;

extern char bots_cutoff[];
extern int bots_cutoff_value;

extern int bots_app_cutoff_value;
extern int bots_app_cutoff_value_1;
extern int bots_app_cutoff_value_2;

extern int bots_arg_size;
extern int bots_arg_size_1;
extern int bots_arg_size_2;


long bots_usecs();
void bots_error(int error, char *message);
void bots_warning(int warning, char *message);







typedef enum { BOTS_VERBOSE_NONE=0,
               BOTS_VERBOSE_DEFAULT,
               BOTS_VERBOSE_DEBUG } bots_verbose_mode_t;

extern bots_verbose_mode_t bots_verbose_mode;
# 33 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c" 2
# 33 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 34 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_error_npm(int error, char *message);static void (*____chimes_extern_func_bots_print_usage)(void) = bots_print_usage;
void bots_error_quick(int error, char *message); void bots_error(int error, char *message);
void
# 35 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_error_resumable(int error, char *message)
# 36 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&bots_error), "bots_error", &____must_manage_bots_error, 2, 0, (size_t)(0UL), (size_t)(1536136952061705911UL)) ; if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 37 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (message == __null) {{
# 39 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(error)
# 40 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 41 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 42 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Unspecified error.");
# 43 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 44 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 1:
# 45 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Not enough memory.");
# 46 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 47 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 2:
# 48 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Unrecognized parameter.");
# 49 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
             call_lbl_0: ({ calling((void*)bots_print_usage, 0, 0, 0UL, 0); (bots_print_usage)(); }) ;
# 50 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 51 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 52 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Invalid error code.");
# 53 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 54 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 55 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }; } else {fprintf(stderr, "Error (%d): %s\n",error,message); } ;
# 57 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   exit(100+error);
# 58 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_error", &____must_manage_bots_error, 0, ____chimes_did_disable0, false); }
# 59 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 60 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_warning_npm(int warning, char *message);
void bots_warning_quick(int warning, char *message); void bots_warning(int warning, char *message);
void
# 61 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_warning_resumable(int warning, char *message)
# 62 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&bots_warning), "bots_warning", &____must_manage_bots_warning, 2, 0, (size_t)(0UL), (size_t)(1536136952061705944UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (message == __null) {{
# 65 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(warning)
# 66 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 67 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 68 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Warning (%d): %s\n",warning,"Unspecified warning.");
# 69 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 70 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 71 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Warning (%d): %s\n",warning,"Invalid warning code.");
# 72 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 73 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 74 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }; } else {fprintf(stderr, "Warning (%d): %s\n",warning,message); } ;
# 76 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_warning", &____must_manage_bots_warning, ____alias_loc_id_0, ____chimes_did_disable1, false); }
# 77 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 78 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
long bots_usecs_npm (void);
long bots_usecs_quick (void); long bots_usecs (void);
long bots_usecs_resumable (void)
# 79 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&bots_usecs), "bots_usecs", &____must_manage_bots_usecs, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 80 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    struct timeval t; ;
# 81 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   gettimeofday(&t,__null);
# 82 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    long ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (t.tv_sec*1000000+t.tv_usec); rm_stack(false, 0UL, "bots_usecs", &____must_manage_bots_usecs, ____alias_loc_id_1, ____chimes_did_disable2, false); return ____chimes_ret_var_0; ;
# 83 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_usecs", &____must_manage_bots_usecs, ____alias_loc_id_1, ____chimes_did_disable2, false); }
# 84 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 85 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_date_npm(char *str);
void bots_get_date_quick(char *str); void bots_get_date(char *str);
void
# 86 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_get_date_resumable(char *str)
# 87 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&bots_get_date), "bots_get_date", &____must_manage_bots_get_date, 1, 0, (size_t)(1536136952061705971UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 88 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   time_t now; ;
# 89 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   time(&now);
# 90 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   strftime(str, 32, "%Y/%m/%d;%H:%M", gmtime(&now));
# 91 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_get_date", &____must_manage_bots_get_date, ____alias_loc_id_2, ____chimes_did_disable3, false); }
# 120 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 120 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
int bots_get_max_cpus_npm(void);
int bots_get_max_cpus_quick(void); int bots_get_max_cpus(void);
void bots_get_architecture_npm(char *str);
int bots_get_max_cpus_resumable(void) {const int ____chimes_did_disable4 = new_stack((void *)(&bots_get_max_cpus), "bots_get_max_cpus", &____must_manage_bots_get_max_cpus, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "bots_get_max_cpus", &____must_manage_bots_get_max_cpus, ____alias_loc_id_3, ____chimes_did_disable4, false); return ____chimes_ret_var_1; ; rm_stack(false, 0UL, "bots_get_max_cpus", &____must_manage_bots_get_max_cpus, ____alias_loc_id_3, ____chimes_did_disable4, false); }
# 121 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_architecture_quick(char *str); void bots_get_architecture(char *str);
void bots_get_load_average_npm(char *str);
void bots_get_architecture_resumable(char *str) {const int ____chimes_did_disable5 = new_stack((void *)(&bots_get_architecture), "bots_get_architecture", &____must_manage_bots_get_architecture, 1, 0, (size_t)(1536136952061705989UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; sprintf(str,";"); rm_stack(false, 0UL, "bots_get_architecture", &____must_manage_bots_get_architecture, ____alias_loc_id_4, ____chimes_did_disable5, false); }
# 122 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_load_average_quick(char *str); void bots_get_load_average(char *str);
void bots_get_load_average_resumable(char *str) {const int ____chimes_did_disable6 = new_stack((void *)(&bots_get_load_average), "bots_get_load_average", &____must_manage_bots_get_load_average, 1, 0, (size_t)(1536136952061705998UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; sprintf(str,";;"); rm_stack(false, 0UL, "bots_get_load_average", &____must_manage_bots_get_load_average, ____alias_loc_id_5, ____chimes_did_disable6, false); }
# 123 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 124 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_print_results_npm();
void bots_print_results_quick(); void bots_print_results();
void bots_print_results_resumable()
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&bots_print_results), "bots_print_results", &____must_manage_bots_print_results, 0, 0) ; char str_cutoff[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_ldflags[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_ld[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_cflags[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_cc[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_comp_message[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_comp_date[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_load_avg[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_architecture[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_exec_message[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_exec_date[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_number_of_tasks_per_second[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_number_of_tasks[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_speed_up[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_time_sequential[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_time_program[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_result[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_resources[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_model[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_parameters[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_name[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
 if (____must_checkpoint_bots_print_results_str_load_avg_0 || ____must_checkpoint_bots_print_results_str_architecture_0) { register_stack_vars(2, "bots_print_results|str_load_avg|0", &____must_checkpoint_bots_print_results_str_load_avg_0, "[128 x i8]", (void *)(str_load_avg), (size_t)128, 0, 0, 0, "bots_print_results|str_architecture|0", &____must_checkpoint_bots_print_results_str_architecture_0, "[128 x i8]", (void *)(str_architecture), (size_t)128, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 126 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 127 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 128 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 129 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 130 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 131 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 132 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 133 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 134 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 135 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 136 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 137 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 138 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 139 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 140 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 141 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 142 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 143 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 144 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 145 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 146 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 147 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 148 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 149 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_name, "%s", bots_name);
# 150 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_parameters, "%s", bots_parameters);
# 151 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_model, "%s", bots_model);
# 152 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cutoff, "%s", bots_cutoff);
# 153 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_resources, "%s", bots_resources);
# 154 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   switch(bots_result)
# 155 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 156 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 0:
# 157 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "n/a");
# 158 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 159 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 1:
# 160 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "successful");
# 161 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 162 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 2:
# 163 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "UNSUCCESSFUL");
# 164 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 165 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 3:
# 166 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "Not requested");
# 167 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 168 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      default:
# 169 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "error");
# 170 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 171 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 172 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_time_program, "%f", bots_time_program);
# 173 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (bots_sequential_flag) {sprintf(str_time_sequential, "%f", bots_time_sequential); } else {sprintf(str_time_sequential, "n/a"); } ;
# 175 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (bots_sequential_flag) {sprintf(str_speed_up, "%3.2f", bots_time_sequential/bots_time_program); } else {sprintf(str_speed_up, "n/a"); } ;
# 178 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 179 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_number_of_tasks, "%3.2f", (float) bots_number_of_tasks);
# 180 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_number_of_tasks_per_second, "%3.2f", (float) bots_number_of_tasks/bots_time_program);
# 181 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 182 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_exec_date, "%s", bots_exec_date);
# 183 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_exec_message, "%s", bots_exec_message);
# 184 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    call_lbl_0: ({ calling_npm("bots_get_architecture", 0); bots_get_architecture_npm(str_architecture); });
# 185 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    call_lbl_1: ({ calling_npm("bots_get_load_average", 0); bots_get_load_average_npm(str_load_avg); });
# 186 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_comp_date, "%s", bots_comp_date);
# 187 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_comp_message, "%s", bots_comp_message);
# 188 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cc, "%s", bots_cc);
# 189 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cflags, "%s", bots_cflags);
# 190 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_ld, "%s", bots_ld);
# 191 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_ldflags, "%s", bots_ldflags);
# 192 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 193 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if(bots_print_header)
# 194 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 195 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(bots_output_format)
# 196 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 197 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 198 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 199 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 1:
# 200 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 201 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 2:
# 202 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
fprintf(stdout,
# 203 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
"Benchmark;Parameters;Model;Cutoff;Resources;Result;Time;Sequential;Speed-up;Nodes;Nodes/Sec;Exec Date;Exec Time;Exec Message;Architecture;Processors;Load Avg-1;Load Avg-5;Load Avg-15;Comp Date;Comp Time;Comp Message;CC;CFLAGS;LD;LDFLAGS\n");
# 204 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 205 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 206 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 207 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 208 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 209 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 210 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 3:
# 211 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 212 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 4:
# 213 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
fprintf(stdout,
# 214 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
"Benchmark;Parameters;Model;Cutoff;Resources;Result;Time;Sequential;Speed-up;Nodes;Nodes/Sec;\n");
# 215 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 216 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 217 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 218 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 219 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 220 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 221 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 222 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 223 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 224 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   switch(bots_output_format)
# 225 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 226 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 0:
# 227 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 228 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 1:
# 229 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fprintf(stdout, "\n");
# 230 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Program             = %s\n", str_name);
# 231 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Parameters          = %s\n", str_parameters);
# 232 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Model               = %s\n", str_model);
# 233 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Embedded cut-off    = %s\n", str_cutoff);
# 234 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 235 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 236 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 237 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Verification        = %s\n", str_result);
# 238 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 239 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 240 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 241 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 242 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  if (bots_sequential_flag) {
# 243 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Time Sequential     = %s seconds\n", str_time_sequential);
# 244 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Speed-up            = %s\n", str_speed_up);
# 245 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 246 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 247 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         if ( bots_number_of_tasks > 0 ) {
# 248 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes               = %s\n", str_number_of_tasks);
# 249 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes/Sec           = %s\n", str_number_of_tasks_per_second);
# 250 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 251 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 252 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 253 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 254 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 255 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Execution Message   = %s\n", str_exec_message);
# 256 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 257 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Architecture        = %s\n", str_architecture);
# 258 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Load Avg [1:5:15]   = %s\n", str_load_avg);
# 259 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 260 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compilation Date    = %s\n", str_comp_date);
# 261 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compilation Message = %s\n", str_comp_message);
# 262 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 263 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compiler            = %s\n", str_cc);
# 264 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compiler Flags      = %s\n", str_cflags);
# 265 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Linker              = %s\n", str_ld);
# 266 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Linker Flags        = %s\n", str_ldflags);
# 267 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fflush(stdout);
# 268 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 269 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 2:
# 270 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;%s;%s;",
# 271 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_name,
# 272 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_parameters,
# 273 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_model,
# 274 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cutoff,
# 275 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_resources,
# 276 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_result
# 277 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 278 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;",
# 279 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_program,
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_sequential,
# 281 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_speed_up
# 282 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 283 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 284 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks,
# 285 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks_per_second
# 286 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 287 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 288 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_exec_date,
# 289 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_exec_message
# 290 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 291 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 292 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_architecture,
# 293 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_load_avg
# 294 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 295 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 296 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_comp_date,
# 297 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_comp_message
# 298 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 299 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;",
# 300 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cc,
# 301 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cflags,
# 302 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_ld,
# 303 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_ldflags
# 304 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 305 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"\n");
# 306 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 307 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 3:
# 308 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fprintf(stdout, "\n");
# 309 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Program             = %s\n", str_name);
# 310 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Parameters          = %s\n", str_parameters);
# 311 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Model               = %s\n", str_model);
# 312 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Embedded cut-off    = %s\n", str_cutoff);
# 313 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "# of Threads        = %s\n", str_resources);
# 314 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Verification        = %s\n", str_result);
# 315 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 316 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Time Program        = %s seconds\n", str_time_program);
# 317 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  if (bots_sequential_flag) {
# 318 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Time Sequential     = %s seconds\n", str_time_sequential);
# 319 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Speed-up            = %s\n", str_speed_up);
# 320 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 321 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 322 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         if ( bots_number_of_tasks > 0 ) {
# 323 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes               = %s\n", str_number_of_tasks);
# 324 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes/Sec           = %s\n", str_number_of_tasks_per_second);
# 325 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 326 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 327 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 4:
# 328 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;%s;%s;",
# 329 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_name,
# 330 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_parameters,
# 331 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_model,
# 332 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cutoff,
# 333 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_resources,
# 334 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_result
# 335 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 336 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;",
# 337 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_program,
# 338 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_sequential,
# 339 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_speed_up
# 340 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 341 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 342 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks,
# 343 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks_per_second
# 344 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 345 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"\n");
# 346 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 347 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
       call_lbl_2: default:
# 348 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
          ({ char * ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = ("No valid output format\n"); } calling((void*)bots_error, 2, 0, 0UL, 2, (size_t)(0UL), (size_t)(1536136952061706321UL)); (bots_error)(0, ____chimes_arg1); }) ;
# 349 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 350 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 351 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_print_results", &____must_manage_bots_print_results, 0, ____chimes_did_disable7, false); }
# 34 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void
# 35 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_error_quick(int error, char *message)
# 36 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&bots_error), "bots_error", &____must_manage_bots_error, 2, 0, (size_t)(0UL), (size_t)(1536136952061705911UL)) ; ; ;
# 37 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (message == __null) {{
# 39 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(error)
# 40 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 41 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 42 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Unspecified error.");
# 43 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 44 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 1:
# 45 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Not enough memory.");
# 46 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 47 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 2:
# 48 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Unrecognized parameter.");
# 49 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
             call_lbl_0: ({ calling((void*)bots_print_usage, 0, 0, 0UL, 0); (bots_print_usage)(); }) ;
# 50 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 51 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 52 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Invalid error code.");
# 53 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 54 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 55 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }; } else {fprintf(stderr, "Error (%d): %s\n",error,message); } ;
# 57 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   exit(100+error);
# 58 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_error", &____must_manage_bots_error, 0, ____chimes_did_disable0, false); }

void
# 35 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_error(int error, char *message) { (____chimes_replaying ? bots_error_resumable(error, message) : bots_error_quick(error, message)); }
# 60 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void
# 61 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_warning_quick(int warning, char *message)
# 62 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&bots_warning), "bots_warning", &____must_manage_bots_warning, 2, 0, (size_t)(0UL), (size_t)(1536136952061705944UL)) ; ; ;
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (message == __null) {{
# 65 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(warning)
# 66 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 67 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 68 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Warning (%d): %s\n",warning,"Unspecified warning.");
# 69 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 70 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 71 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Warning (%d): %s\n",warning,"Invalid warning code.");
# 72 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 73 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 74 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }; } else {fprintf(stderr, "Warning (%d): %s\n",warning,message); } ;
# 76 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_warning", &____must_manage_bots_warning, ____alias_loc_id_0, ____chimes_did_disable1, false); }

void
# 61 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_warning(int warning, char *message) { (____chimes_replaying ? bots_warning_resumable(warning, message) : bots_warning_quick(warning, message)); }
# 78 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
long bots_usecs_quick (void)
# 79 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&bots_usecs), "bots_usecs", &____must_manage_bots_usecs, 0, 0) ; ; ;
# 80 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    struct timeval t; ;
# 81 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   gettimeofday(&t,__null);
# 82 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    long ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (t.tv_sec*1000000+t.tv_usec); rm_stack(false, 0UL, "bots_usecs", &____must_manage_bots_usecs, ____alias_loc_id_1, ____chimes_did_disable2, false); return ____chimes_ret_var_0; ;
# 83 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_usecs", &____must_manage_bots_usecs, ____alias_loc_id_1, ____chimes_did_disable2, false); }

long bots_usecs (void) { return (____chimes_replaying ? bots_usecs_resumable() : bots_usecs_quick()); }
# 85 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void
# 86 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_get_date_quick(char *str)
# 87 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&bots_get_date), "bots_get_date", &____must_manage_bots_get_date, 1, 0, (size_t)(1536136952061705971UL)) ; ; ;
# 88 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   time_t now; ;
# 89 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   time(&now);
# 90 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   strftime(str, 32, "%Y/%m/%d;%H:%M", gmtime(&now));
# 91 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_get_date", &____must_manage_bots_get_date, ____alias_loc_id_2, ____chimes_did_disable3, false); }

void
# 86 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_get_date(char *str) { (____chimes_replaying ? bots_get_date_resumable(str) : bots_get_date_quick(str)); }
# 120 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
int bots_get_max_cpus_quick(void) {const int ____chimes_did_disable4 = new_stack((void *)(&bots_get_max_cpus), "bots_get_max_cpus", &____must_manage_bots_get_max_cpus, 0, 0) ; ; ; int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "bots_get_max_cpus", &____must_manage_bots_get_max_cpus, ____alias_loc_id_3, ____chimes_did_disable4, false); return ____chimes_ret_var_1; ; rm_stack(false, 0UL, "bots_get_max_cpus", &____must_manage_bots_get_max_cpus, ____alias_loc_id_3, ____chimes_did_disable4, false); }

int bots_get_max_cpus(void) { return (____chimes_replaying ? bots_get_max_cpus_resumable() : bots_get_max_cpus_quick()); }
# 121 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_architecture_quick(char *str) {const int ____chimes_did_disable5 = new_stack((void *)(&bots_get_architecture), "bots_get_architecture", &____must_manage_bots_get_architecture, 1, 0, (size_t)(1536136952061705989UL)) ; ; ; sprintf(str,";"); rm_stack(false, 0UL, "bots_get_architecture", &____must_manage_bots_get_architecture, ____alias_loc_id_4, ____chimes_did_disable5, false); }

void bots_get_architecture(char *str) { (____chimes_replaying ? bots_get_architecture_resumable(str) : bots_get_architecture_quick(str)); }
# 122 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_load_average_quick(char *str) {const int ____chimes_did_disable6 = new_stack((void *)(&bots_get_load_average), "bots_get_load_average", &____must_manage_bots_get_load_average, 1, 0, (size_t)(1536136952061705998UL)) ; ; ; sprintf(str,";;"); rm_stack(false, 0UL, "bots_get_load_average", &____must_manage_bots_get_load_average, ____alias_loc_id_5, ____chimes_did_disable6, false); }

void bots_get_load_average(char *str) { (____chimes_replaying ? bots_get_load_average_resumable(str) : bots_get_load_average_quick(str)); }
# 124 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_print_results_quick()
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&bots_print_results), "bots_print_results", &____must_manage_bots_print_results, 0, 0) ; char str_cutoff[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_ldflags[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_ld[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_cflags[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_cc[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_comp_message[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_comp_date[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_load_avg[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_architecture[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_exec_message[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_exec_date[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_number_of_tasks_per_second[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_number_of_tasks[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_speed_up[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_time_sequential[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_time_program[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_result[15];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_resources[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_model[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_parameters[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
char str_name[128];
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
 if (____must_checkpoint_bots_print_results_str_load_avg_0 || ____must_checkpoint_bots_print_results_str_architecture_0) { register_stack_vars(2, "bots_print_results|str_load_avg|0", &____must_checkpoint_bots_print_results_str_load_avg_0, "[128 x i8]", (void *)(str_load_avg), (size_t)128, 0, 0, 0, "bots_print_results|str_architecture|0", &____must_checkpoint_bots_print_results_str_architecture_0, "[128 x i8]", (void *)(str_architecture), (size_t)128, 0, 0, 0); } ; ;
# 126 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 127 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 128 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 129 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 130 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 131 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 132 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 133 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 134 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 135 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 136 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 137 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 138 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 139 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 140 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 141 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 142 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 143 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 144 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 145 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 146 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    ;
# 147 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 148 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 149 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_name, "%s", bots_name);
# 150 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_parameters, "%s", bots_parameters);
# 151 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_model, "%s", bots_model);
# 152 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cutoff, "%s", bots_cutoff);
# 153 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_resources, "%s", bots_resources);
# 154 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   switch(bots_result)
# 155 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 156 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 0:
# 157 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "n/a");
# 158 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 159 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 1:
# 160 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "successful");
# 161 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 162 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 2:
# 163 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "UNSUCCESSFUL");
# 164 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 165 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 3:
# 166 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "Not requested");
# 167 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 168 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      default:
# 169 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "error");
# 170 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 171 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 172 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_time_program, "%f", bots_time_program);
# 173 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (bots_sequential_flag) {sprintf(str_time_sequential, "%f", bots_time_sequential); } else {sprintf(str_time_sequential, "n/a"); } ;
# 175 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (bots_sequential_flag) {sprintf(str_speed_up, "%3.2f", bots_time_sequential/bots_time_program); } else {sprintf(str_speed_up, "n/a"); } ;
# 178 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 179 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_number_of_tasks, "%3.2f", (float) bots_number_of_tasks);
# 180 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_number_of_tasks_per_second, "%3.2f", (float) bots_number_of_tasks/bots_time_program);
# 181 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 182 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_exec_date, "%s", bots_exec_date);
# 183 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_exec_message, "%s", bots_exec_message);
# 184 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    call_lbl_0: ({ calling_npm("bots_get_architecture", 0); bots_get_architecture_npm(str_architecture); });
# 185 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    call_lbl_1: ({ calling_npm("bots_get_load_average", 0); bots_get_load_average_npm(str_load_avg); });
# 186 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_comp_date, "%s", bots_comp_date);
# 187 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_comp_message, "%s", bots_comp_message);
# 188 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cc, "%s", bots_cc);
# 189 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cflags, "%s", bots_cflags);
# 190 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_ld, "%s", bots_ld);
# 191 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_ldflags, "%s", bots_ldflags);
# 192 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 193 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if(bots_print_header)
# 194 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 195 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(bots_output_format)
# 196 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 197 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 198 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 199 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 1:
# 200 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 201 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 2:
# 202 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
fprintf(stdout,
# 203 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
"Benchmark;Parameters;Model;Cutoff;Resources;Result;Time;Sequential;Speed-up;Nodes;Nodes/Sec;Exec Date;Exec Time;Exec Message;Architecture;Processors;Load Avg-1;Load Avg-5;Load Avg-15;Comp Date;Comp Time;Comp Message;CC;CFLAGS;LD;LDFLAGS\n");
# 204 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 205 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 206 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 207 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 208 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 209 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 210 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 3:
# 211 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 212 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 4:
# 213 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
fprintf(stdout,
# 214 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
"Benchmark;Parameters;Model;Cutoff;Resources;Result;Time;Sequential;Speed-up;Nodes;Nodes/Sec;\n");
# 215 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 216 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 217 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 218 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 219 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 220 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 221 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 222 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 223 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 224 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   switch(bots_output_format)
# 225 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 226 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 0:
# 227 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 228 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 1:
# 229 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fprintf(stdout, "\n");
# 230 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Program             = %s\n", str_name);
# 231 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Parameters          = %s\n", str_parameters);
# 232 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Model               = %s\n", str_model);
# 233 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Embedded cut-off    = %s\n", str_cutoff);
# 234 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 235 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 236 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 237 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Verification        = %s\n", str_result);
# 238 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 239 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 240 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 241 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 242 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  if (bots_sequential_flag) {
# 243 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Time Sequential     = %s seconds\n", str_time_sequential);
# 244 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Speed-up            = %s\n", str_speed_up);
# 245 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 246 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 247 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         if ( bots_number_of_tasks > 0 ) {
# 248 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes               = %s\n", str_number_of_tasks);
# 249 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes/Sec           = %s\n", str_number_of_tasks_per_second);
# 250 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 251 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 252 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 253 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 254 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 255 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Execution Message   = %s\n", str_exec_message);
# 256 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 257 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Architecture        = %s\n", str_architecture);
# 258 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Load Avg [1:5:15]   = %s\n", str_load_avg);
# 259 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 260 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compilation Date    = %s\n", str_comp_date);
# 261 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compilation Message = %s\n", str_comp_message);
# 262 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 263 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compiler            = %s\n", str_cc);
# 264 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compiler Flags      = %s\n", str_cflags);
# 265 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Linker              = %s\n", str_ld);
# 266 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Linker Flags        = %s\n", str_ldflags);
# 267 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fflush(stdout);
# 268 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 269 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 2:
# 270 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;%s;%s;",
# 271 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_name,
# 272 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_parameters,
# 273 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_model,
# 274 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cutoff,
# 275 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_resources,
# 276 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_result
# 277 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 278 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;",
# 279 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_program,
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_sequential,
# 281 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_speed_up
# 282 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 283 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 284 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks,
# 285 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks_per_second
# 286 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 287 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 288 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_exec_date,
# 289 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_exec_message
# 290 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 291 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 292 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_architecture,
# 293 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_load_avg
# 294 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 295 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 296 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_comp_date,
# 297 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_comp_message
# 298 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 299 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;",
# 300 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cc,
# 301 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cflags,
# 302 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_ld,
# 303 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_ldflags
# 304 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 305 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"\n");
# 306 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 307 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 3:
# 308 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fprintf(stdout, "\n");
# 309 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Program             = %s\n", str_name);
# 310 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Parameters          = %s\n", str_parameters);
# 311 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Model               = %s\n", str_model);
# 312 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Embedded cut-off    = %s\n", str_cutoff);
# 313 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "# of Threads        = %s\n", str_resources);
# 314 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Verification        = %s\n", str_result);
# 315 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 316 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Time Program        = %s seconds\n", str_time_program);
# 317 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  if (bots_sequential_flag) {
# 318 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Time Sequential     = %s seconds\n", str_time_sequential);
# 319 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Speed-up            = %s\n", str_speed_up);
# 320 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 321 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 322 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         if ( bots_number_of_tasks > 0 ) {
# 323 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes               = %s\n", str_number_of_tasks);
# 324 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes/Sec           = %s\n", str_number_of_tasks_per_second);
# 325 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 326 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 327 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 4:
# 328 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;%s;%s;",
# 329 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_name,
# 330 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_parameters,
# 331 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_model,
# 332 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cutoff,
# 333 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_resources,
# 334 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_result
# 335 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 336 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;",
# 337 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_program,
# 338 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_sequential,
# 339 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_speed_up
# 340 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 341 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 342 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks,
# 343 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks_per_second
# 344 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 345 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"\n");
# 346 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 347 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
       call_lbl_2: default:
# 348 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
          ({ calling((void*)bots_error, 2, 0, 0UL, 2, (size_t)(0UL), (size_t)(1536136952061706321UL)); bots_error_quick(0, "No valid output format\n"); }) ;
# 349 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 350 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 351 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
rm_stack(false, 0UL, "bots_print_results", &____must_manage_bots_print_results, 0, ____chimes_did_disable7, false); }

void bots_print_results() { (____chimes_replaying ? bots_print_results_resumable() : bots_print_results_quick()); }
# 34 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void
# 35 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_error_npm(int error, char *message)
# 36 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{
# 37 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (message == __null) {{
# 39 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(error)
# 40 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 41 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 42 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Unspecified error.");
# 43 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 44 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 1:
# 45 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Not enough memory.");
# 46 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 47 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 2:
# 48 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Unrecognized parameter.");
# 49 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            (*____chimes_extern_func_bots_print_usage)();
# 50 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 51 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 52 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Error (%d): %s\n",error,"Invalid error code.");
# 53 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 54 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 55 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }; } else {fprintf(stderr, "Error (%d): %s\n",error,message); } ;
# 57 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   exit(100+error);
# 58 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
}
# 60 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void
# 61 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_warning_npm(int warning, char *message)
# 62 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (message == __null) {{
# 65 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(warning)
# 66 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 67 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 68 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Warning (%d): %s\n",warning,"Unspecified warning.");
# 69 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 70 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 71 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            fprintf(stderr, "Warning (%d): %s\n",warning,"Invalid warning code.");
# 72 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 73 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 74 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }; } else {fprintf(stderr, "Warning (%d): %s\n",warning,message); } ;
# 76 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
}
# 78 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
long bots_usecs_npm (void)
# 79 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{
# 80 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   struct timeval t;
# 81 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   gettimeofday(&t,__null);
# 82 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
    long ____chimes_ret_var_0; ____chimes_ret_var_0 = (t.tv_sec*1000000+t.tv_usec); return ____chimes_ret_var_0; ;
# 83 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
}
# 85 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void
# 86 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
bots_get_date_npm(char *str)
# 87 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{
# 88 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   time_t now;
# 89 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   time(&now);
# 90 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   strftime(str, 32, "%Y/%m/%d;%H:%M", gmtime(&now));
# 91 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
}
# 120 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
int bots_get_max_cpus_npm(void) { int ____chimes_ret_var_1; ____chimes_ret_var_1 = (0); return ____chimes_ret_var_1; ; }
# 121 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_architecture_npm(char *str) { sprintf(str,";"); }
# 122 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_get_load_average_npm(char *str) { sprintf(str,";;"); }
# 124 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
void bots_print_results_npm()
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
{
# 126 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_name[128];
# 127 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_parameters[128];
# 128 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_model[128];
# 129 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_resources[128];
# 130 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_result[15];
# 131 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_time_program[15];
# 132 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_time_sequential[15];
# 133 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_speed_up[15];
# 134 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_number_of_tasks[15];
# 135 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_number_of_tasks_per_second[15];
# 136 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_exec_date[128];
# 137 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_exec_message[128];
# 138 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_architecture[128];
# 139 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_load_avg[128];
# 140 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_comp_date[128];
# 141 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_comp_message[128];
# 142 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_cc[128];
# 143 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_cflags[128];
# 144 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_ld[128];
# 145 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_ldflags[128];
# 146 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   char str_cutoff[128];
# 147 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 148 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 149 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_name, "%s", bots_name);
# 150 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_parameters, "%s", bots_parameters);
# 151 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_model, "%s", bots_model);
# 152 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cutoff, "%s", bots_cutoff);
# 153 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_resources, "%s", bots_resources);
# 154 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   switch(bots_result)
# 155 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 156 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 0:
# 157 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "n/a");
# 158 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 159 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 1:
# 160 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "successful");
# 161 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 162 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 2:
# 163 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "UNSUCCESSFUL");
# 164 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 165 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 3:
# 166 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "Not requested");
# 167 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 168 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      default:
# 169 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         sprintf(str_result, "error");
# 170 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 171 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 172 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_time_program, "%f", bots_time_program);
# 173 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (bots_sequential_flag) {sprintf(str_time_sequential, "%f", bots_time_sequential); } else {sprintf(str_time_sequential, "n/a"); } ;
# 175 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if (bots_sequential_flag) {sprintf(str_speed_up, "%3.2f", bots_time_sequential/bots_time_program); } else {sprintf(str_speed_up, "n/a"); } ;
# 178 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 179 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_number_of_tasks, "%3.2f", (float) bots_number_of_tasks);
# 180 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_number_of_tasks_per_second, "%3.2f", (float) bots_number_of_tasks/bots_time_program);
# 181 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 182 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_exec_date, "%s", bots_exec_date);
# 183 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_exec_message, "%s", bots_exec_message);
# 184 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   bots_get_architecture_npm(str_architecture);
# 185 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   bots_get_load_average_npm(str_load_avg);
# 186 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_comp_date, "%s", bots_comp_date);
# 187 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_comp_message, "%s", bots_comp_message);
# 188 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cc, "%s", bots_cc);
# 189 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_cflags, "%s", bots_cflags);
# 190 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_ld, "%s", bots_ld);
# 191 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   sprintf(str_ldflags, "%s", bots_ldflags);
# 192 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 193 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   if(bots_print_header)
# 194 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 195 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      switch(bots_output_format)
# 196 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      {
# 197 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 0:
# 198 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 199 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 1:
# 200 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 201 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 2:
# 202 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
fprintf(stdout,
# 203 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
"Benchmark;Parameters;Model;Cutoff;Resources;Result;Time;Sequential;Speed-up;Nodes;Nodes/Sec;Exec Date;Exec Time;Exec Message;Architecture;Processors;Load Avg-1;Load Avg-5;Load Avg-15;Comp Date;Comp Time;Comp Message;CC;CFLAGS;LD;LDFLAGS\n");
# 204 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 205 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 206 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 207 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 208 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 209 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 210 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 3:
# 211 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 212 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         case 4:
# 213 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
fprintf(stdout,
# 214 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
"Benchmark;Parameters;Model;Cutoff;Resources;Result;Time;Sequential;Speed-up;Nodes;Nodes/Sec;\n");
# 215 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 216 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 217 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 218 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         default:
# 219 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
            break;
# 220 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      }
# 221 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 222 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 223 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 224 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   switch(bots_output_format)
# 225 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   {
# 226 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 0:
# 227 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 228 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 1:
# 229 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fprintf(stdout, "\n");
# 230 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Program             = %s\n", str_name);
# 231 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Parameters          = %s\n", str_parameters);
# 232 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Model               = %s\n", str_model);
# 233 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Embedded cut-off    = %s\n", str_cutoff);
# 234 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 235 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 236 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 237 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Verification        = %s\n", str_result);
# 238 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 239 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 240 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 241 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 242 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  if (bots_sequential_flag) {
# 243 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Time Sequential     = %s seconds\n", str_time_sequential);
# 244 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Speed-up            = %s\n", str_speed_up);
# 245 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 246 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 247 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         if ( bots_number_of_tasks > 0 ) {
# 248 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes               = %s\n", str_number_of_tasks);
# 249 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes/Sec           = %s\n", str_number_of_tasks_per_second);
# 250 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 251 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 252 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 253 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 254 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 255 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Execution Message   = %s\n", str_exec_message);
# 256 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 257 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Architecture        = %s\n", str_architecture);
# 258 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Load Avg [1:5:15]   = %s\n", str_load_avg);
# 259 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 260 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compilation Date    = %s\n", str_comp_date);
# 261 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compilation Message = %s\n", str_comp_message);
# 262 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 263 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compiler            = %s\n", str_cc);
# 264 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Compiler Flags      = %s\n", str_cflags);
# 265 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Linker              = %s\n", str_ld);
# 266 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Linker Flags        = %s\n", str_ldflags);
# 267 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fflush(stdout);
# 268 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 269 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 2:
# 270 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;%s;%s;",
# 271 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_name,
# 272 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_parameters,
# 273 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_model,
# 274 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cutoff,
# 275 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_resources,
# 276 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_result
# 277 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 278 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;",
# 279 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_program,
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_sequential,
# 281 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_speed_up
# 282 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 283 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 284 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks,
# 285 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks_per_second
# 286 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 287 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 288 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_exec_date,
# 289 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_exec_message
# 290 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 291 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 292 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_architecture,
# 293 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_load_avg
# 294 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 295 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 296 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_comp_date,
# 297 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_comp_message
# 298 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 299 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;",
# 300 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cc,
# 301 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cflags,
# 302 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_ld,
# 303 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_ldflags
# 304 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 305 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"\n");
# 306 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 307 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 3:
# 308 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  fprintf(stdout, "\n");
# 309 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Program             = %s\n", str_name);
# 310 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Parameters          = %s\n", str_parameters);
# 311 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Model               = %s\n", str_model);
# 312 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Embedded cut-off    = %s\n", str_cutoff);
# 313 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "# of Threads        = %s\n", str_resources);
# 314 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Verification        = %s\n", str_result);
# 315 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 316 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout, "Time Program        = %s seconds\n", str_time_program);
# 317 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  if (bots_sequential_flag) {
# 318 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Time Sequential     = %s seconds\n", str_time_sequential);
# 319 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Speed-up            = %s\n", str_speed_up);
# 320 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 321 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
# 322 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         if ( bots_number_of_tasks > 0 ) {
# 323 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes               = %s\n", str_number_of_tasks);
# 324 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
           fprintf(stdout, "Nodes/Sec           = %s\n", str_number_of_tasks_per_second);
# 325 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
  }
# 326 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 327 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      case 4:
# 328 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;%s;%s;%s;",
# 329 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_name,
# 330 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_parameters,
# 331 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_model,
# 332 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_cutoff,
# 333 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_resources,
# 334 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_result
# 335 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 336 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;%s;",
# 337 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_program,
# 338 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_time_sequential,
# 339 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_speed_up
# 340 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 341 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"%s;%s;",
# 342 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks,
# 343 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
              str_number_of_tasks_per_second
# 344 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         );
# 345 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         fprintf(stdout,"\n");
# 346 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 347 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
      default:
# 348 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         bots_error_npm(0, "No valid output format\n");
# 349 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
         break;
# 350 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
   }
# 351 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/358.botsalgn/src/common/bots_common.c"
}





static int module_init() {
    init_module(1536136952061705870UL, 6, 8, 2, 6, 8, 1, 9, 2, 0, 1,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (unsigned)0, (1536136952061705870UL + 47UL), (1536136952061705870UL + 48UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (unsigned)0, (1536136952061705870UL + 75UL), (1536136952061705870UL + 76UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (1536136952061705870UL + 91UL), (1536136952061705870UL + 92UL), (1536136952061705870UL + 101UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)0, (1536136952061705870UL + 108UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)0, (unsigned)0, (1536136952061705870UL + 113UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (unsigned)0, (1536136952061705870UL + 122UL),
                            "bots_get_load_average", 0, "_Z21bots_get_load_averagePc", "_Z25bots_get_load_average_npmPc", 0, 1, (1536136952061705870UL + 128UL), 0UL, 1, "sprintf", 2, (1536136952061705870UL + 128UL), (1536136952061705870UL + 458UL), 0UL,
                            "bots_usecs", 0, "_Z10bots_usecsv", "_Z14bots_usecs_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (1536136952061705870UL + 75UL), (1536136952061705870UL + 516UL), 0UL,
                            "bots_get_max_cpus", 0, "_Z17bots_get_max_cpusv", "_Z21bots_get_max_cpus_npmv", 0, 0, 0UL, 0,
                            "bots_get_architecture", 0, "_Z21bots_get_architecturePc", "_Z25bots_get_architecture_npmPc", 0, 1, (1536136952061705870UL + 119UL), 0UL, 1, "sprintf", 2, (1536136952061705870UL + 119UL), (1536136952061705870UL + 457UL), 0UL,
                            "bots_warning", 0, "_Z12bots_warningiPc", "_Z16bots_warning_npmiPc", 0, 2, 0UL, (1536136952061705870UL + 74UL), 0UL, 3, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 453UL), 0UL, (1536136952061705870UL + 454UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 453UL), 0UL, (1536136952061705870UL + 455UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 453UL), 0UL, (1536136952061705870UL + 74UL), 0UL,
                            "bots_print_results", 0, "_Z18bots_print_resultsv", "_Z22bots_print_results_npmv", 0, 0, 0UL, 74, "sprintf", 3, (1536136952061705870UL + 129UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 130UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 131UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 149UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 132UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 2, (1536136952061705870UL + 133UL), (1536136952061705870UL + 466UL), 0UL, "sprintf", 2, (1536136952061705870UL + 133UL), (1536136952061705870UL + 467UL), 0UL, "sprintf", 2, (1536136952061705870UL + 133UL), (1536136952061705870UL + 468UL), 0UL, "sprintf", 2, (1536136952061705870UL + 133UL), (1536136952061705870UL + 469UL), 0UL, "sprintf", 2, (1536136952061705870UL + 133UL), (1536136952061705870UL + 470UL), 0UL, "sprintf", 3, (1536136952061705870UL + 134UL), (1536136952061705870UL + 458UL), 0UL, 0UL, "sprintf", 3, (1536136952061705870UL + 135UL), (1536136952061705870UL + 458UL), 0UL, 0UL, "sprintf", 2, (1536136952061705870UL + 135UL), (1536136952061705870UL + 466UL), 0UL, "sprintf", 3, (1536136952061705870UL + 136UL), (1536136952061705870UL + 470UL), 0UL, 0UL, "sprintf", 2, (1536136952061705870UL + 136UL), (1536136952061705870UL + 466UL), 0UL, "sprintf", 3, (1536136952061705870UL + 137UL), (1536136952061705870UL + 470UL), 0UL, 0UL, "sprintf", 3, (1536136952061705870UL + 138UL), (1536136952061705870UL + 470UL), 0UL, 0UL, "sprintf", 3, (1536136952061705870UL + 139UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 140UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "bots_get_architecture", 1, (1536136952061705870UL + 141UL), 0UL, "bots_get_load_average", 1, (1536136952061705870UL + 142UL), 0UL, "sprintf", 3, (1536136952061705870UL + 143UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 144UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 145UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 146UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 147UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "sprintf", 3, (1536136952061705870UL + 148UL), (1536136952061705870UL + 458UL), (1536136952061705870UL + 460UL), 0UL, "fprintf", 2, (1536136952061705870UL + 30UL), (1536136952061705870UL + 488UL), 0UL, "fprintf", 2, (1536136952061705870UL + 30UL), (1536136952061705870UL + 489UL), 0UL, "fprintf", 2, (1536136952061705870UL + 30UL), (1536136952061705870UL + 457UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 129UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 130UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 131UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 149UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 133UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 496UL), (1536136952061705870UL + 135UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 136UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 137UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 138UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 140UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 141UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 142UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 143UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 144UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 145UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 146UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 147UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 148UL), 0UL, "fflush", 1, (1536136952061705870UL + 30UL), 0UL, "fprintf", 8, (1536136952061705870UL + 30UL), (1536136952061705870UL + 449UL), (1536136952061705870UL + 129UL), (1536136952061705870UL + 130UL), (1536136952061705870UL + 131UL), (1536136952061705870UL + 149UL), (1536136952061705870UL + 132UL), (1536136952061705870UL + 133UL), 0UL, "fprintf", 5, (1536136952061705870UL + 30UL), (1536136952061705870UL + 510UL), (1536136952061705870UL + 134UL), (1536136952061705870UL + 135UL), (1536136952061705870UL + 136UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 511UL), (1536136952061705870UL + 137UL), (1536136952061705870UL + 138UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 511UL), (1536136952061705870UL + 139UL), (1536136952061705870UL + 140UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 511UL), (1536136952061705870UL + 141UL), (1536136952061705870UL + 142UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 511UL), (1536136952061705870UL + 143UL), (1536136952061705870UL + 144UL), 0UL, "fprintf", 6, (1536136952061705870UL + 30UL), (1536136952061705870UL + 468UL), (1536136952061705870UL + 145UL), (1536136952061705870UL + 146UL), (1536136952061705870UL + 147UL), (1536136952061705870UL + 148UL), 0UL, "fprintf", 2, (1536136952061705870UL + 30UL), (1536136952061705870UL + 457UL), 0UL, "fprintf", 2, (1536136952061705870UL + 30UL), (1536136952061705870UL + 457UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 129UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 130UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 131UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 149UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 132UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 133UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 496UL), (1536136952061705870UL + 134UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 496UL), (1536136952061705870UL + 135UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 136UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 137UL), 0UL, "fprintf", 3, (1536136952061705870UL + 30UL), (1536136952061705870UL + 491UL), (1536136952061705870UL + 138UL), 0UL, "fprintf", 8, (1536136952061705870UL + 30UL), (1536136952061705870UL + 449UL), (1536136952061705870UL + 129UL), (1536136952061705870UL + 130UL), (1536136952061705870UL + 131UL), (1536136952061705870UL + 149UL), (1536136952061705870UL + 132UL), (1536136952061705870UL + 133UL), 0UL, "fprintf", 5, (1536136952061705870UL + 30UL), (1536136952061705870UL + 510UL), (1536136952061705870UL + 134UL), (1536136952061705870UL + 135UL), (1536136952061705870UL + 136UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 511UL), (1536136952061705870UL + 137UL), (1536136952061705870UL + 138UL), 0UL, "fprintf", 2, (1536136952061705870UL + 30UL), (1536136952061705870UL + 457UL), 0UL, "bots_error", 2, 0UL, (1536136952061705870UL + 451UL), 0UL,
                            "bots_get_date", 0, "_Z13bots_get_datePc", "_Z17bots_get_date_npmPc", 0, 1, (1536136952061705870UL + 101UL), 0UL, 3, "time", 1, (1536136952061705870UL + 92UL), 0UL, "gmtime", 1, (1536136952061705870UL + 92UL), (1536136952061705870UL + 98UL), "strftime", 4, (1536136952061705870UL + 101UL), 0UL, (1536136952061705870UL + 456UL), (1536136952061705870UL + 98UL), 0UL,
                            "bots_error", 0, "_Z10bots_erroriPc", "_Z14bots_error_npmiPc", 0, 2, 0UL, (1536136952061705870UL + 41UL), 0UL, 7, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 448UL), 0UL, (1536136952061705870UL + 449UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 448UL), 0UL, (1536136952061705870UL + 449UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 448UL), 0UL, (1536136952061705870UL + 451UL), 0UL, "bots_print_usage", 0, 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 448UL), 0UL, (1536136952061705870UL + 452UL), 0UL, "fprintf", 4, (1536136952061705870UL + 30UL), (1536136952061705870UL + 448UL), 0UL, (1536136952061705870UL + 41UL), 0UL, "exit", 1, 0UL, 0UL,
                               "bots_print_usage", (void **)&(____chimes_extern_func_bots_print_usage),
                           "bots_get_load_average", &(____chimes_does_checkpoint_bots_get_load_average_npm),
                           "bots_usecs", &(____chimes_does_checkpoint_bots_usecs_npm),
                           "bots_get_max_cpus", &(____chimes_does_checkpoint_bots_get_max_cpus_npm),
                           "bots_get_architecture", &(____chimes_does_checkpoint_bots_get_architecture_npm),
                           "bots_warning", &(____chimes_does_checkpoint_bots_warning_npm),
                           "bots_print_results", &(____chimes_does_checkpoint_bots_print_results_npm),
                           "bots_get_date", &(____chimes_does_checkpoint_bots_get_date_npm),
                           "bots_error", &(____chimes_does_checkpoint_bots_error_npm),
                           "bots_print_usage", &(____chimes_does_checkpoint_bots_print_usage_npm),
                             (1536136952061705870UL + 48UL), (1536136952061705870UL + 74UL),
                             (1536136952061705870UL + 447UL), (1536136952061705870UL + 30UL),
                             (1536136952061705870UL + 122UL), (1536136952061705870UL + 128UL),
                             (1536136952061705870UL + 2UL), (1536136952061705870UL + 41UL),
                             (1536136952061705870UL + 113UL), (1536136952061705870UL + 119UL),
                             (1536136952061705870UL + 91UL), (1536136952061705870UL + 101UL),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "bots_get_load_average", "_Z21bots_get_load_averagePc", 0, 0,
                             "bots_usecs", "_Z10bots_usecsv", 0, 0,
                             "bots_get_max_cpus", "_Z17bots_get_max_cpusv", 0, 0,
                             "bots_get_architecture", "_Z21bots_get_architecturePc", 0, 0,
                             "bots_warning", "_Z12bots_warningiPc", 0, 0,
                             "bots_print_results", "_Z18bots_print_resultsv", 0, 3, "bots_get_architecture", "bots_get_load_average", "bots_error",
                             "bots_get_date", "_Z13bots_get_datePc", 0, 0,
                             "bots_error", "_Z10bots_erroriPc", 0, 1, "bots_print_usage",
                        "bots_print_results|str_architecture|0", 1, "bots_print_results",
                        "bots_print_results|str_load_avg|0", 1, "bots_print_results",
        "bots_get_architecture", 0UL, (int)1, 1536136952061706011UL,
        "bots_get_load_average", 0UL, (int)1, 1536136952061706012UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
