# 1 "specrand.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "specrand.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_spec_srand_npm = 1;
static int ____chimes_does_checkpoint_spec_rand_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_res53_npm = 1;
static int ____chimes_does_checkpoint_spec_init_by_array_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_int32_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_int31_npm = 1;
static int ____chimes_does_checkpoint_spec_init_genrand_npm = 1;
static int ____chimes_does_checkpoint_spec_lrand48_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_real2_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_real3_npm = 1;
static int ____chimes_does_checkpoint_spec_genrand_real1_npm = 1;


static int ____must_manage_spec_srand = 2;
static int ____must_manage_spec_rand = 2;
static int ____must_manage_spec_genrand_res53 = 2;
static int ____must_manage_spec_init_by_array = 2;
static int ____must_manage_spec_genrand_int32 = 2;
static int ____must_manage_spec_genrand_int31 = 2;
static int ____must_manage_spec_init_genrand = 2;
static int ____must_manage_spec_lrand48 = 2;
static int ____must_manage_spec_genrand_real2 = 2;
static int ____must_manage_spec_genrand_real3 = 2;
static int ____must_manage_spec_genrand_real1 = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
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
# 75 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 49 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
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
# 50 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c" 2
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
# 51 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c" 2
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
static unsigned long mt[624];
# 66 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
static int mti=624 +1;
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_srand_npm(int seed);void spec_init_genrand_npm(unsigned long s);
void spec_srand_quick(int seed); void spec_srand(int seed);void spec_init_genrand_quick(unsigned long s); void spec_init_genrand(unsigned long s);
extern "C" void spec_srand_resumable(int seed) {const int ____chimes_did_disable0 = new_stack((void *)(&spec_srand), "spec_srand", &____must_manage_spec_srand, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
  ({ calling_npm("spec_init_genrand", 0); spec_init_genrand_npm((unsigned long) seed); });
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
rm_stack(false, 0UL, "spec_srand", &____must_manage_spec_srand, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 72 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_rand_npm(void);unsigned long spec_genrand_int32_npm(void);
double spec_rand_quick(void); double spec_rand(void);unsigned long spec_genrand_int32_quick(void); unsigned long spec_genrand_int32(void);
extern "C" double spec_rand_resumable(void) {const int ____chimes_did_disable1 = new_stack((void *)(&spec_rand), "spec_rand", &____must_manage_spec_rand, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_rand", &____must_manage_spec_rand, 0, ____chimes_did_disable1, false); return ({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })*(1.0/4294967296.0);
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
long spec_lrand48_npm(void);
long spec_lrand48_quick(void); long spec_lrand48(void);
extern "C" long spec_lrand48_resumable(void) {const int ____chimes_did_disable2 = new_stack((void *)(&spec_lrand48), "spec_lrand48", &____must_manage_spec_lrand48, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_lrand48", &____must_manage_spec_lrand48, 0, ____chimes_did_disable2, false); return (long)(({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })>>1);
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 81 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 82 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 83 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
extern "C" void spec_init_genrand_resumable(unsigned long s)
# 84 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&spec_init_genrand), "spec_init_genrand", &____must_manage_spec_init_genrand, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 85 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    mt[0]= s & 0xffffffffUL;
# 86 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (mti=1; mti<624; mti++) {
# 87 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[mti] =
# 88 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
     (1812433253UL * (mt[mti-1] ^ (mt[mti-1] >> 30)) + mti);
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[mti] &= 0xffffffffUL;
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
rm_stack(false, 0UL, "spec_init_genrand", &____must_manage_spec_init_genrand, ____alias_loc_id_1, ____chimes_did_disable3, false); }
# 97 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 98 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 99 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 100 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_init_by_array_npm(unsigned long init_key[], int key_length);
void spec_init_by_array_quick(unsigned long init_key[], int key_length); void spec_init_by_array(unsigned long init_key[], int key_length);
extern "C" void spec_init_by_array_resumable(unsigned long init_key[], int key_length)
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&spec_init_by_array), "spec_init_by_array", &____must_manage_spec_init_by_array, 2, 0, (size_t)(6302335948771282621UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    int i; int j; int k; ;
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    ({ calling_npm("spec_init_genrand", 0); spec_init_genrand_npm(19650218UL); });
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    i=1; j=0;
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    k = (624>key_length ? 624 : key_length);
# 108 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (; k; k--) {
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1664525UL))
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
          + init_key[j] + j;
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] &= 0xffffffffUL;
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        i++; j++;
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (i>=624) { mt[0] = mt[624 -1]; i=1; }
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (j>=key_length) j=0;
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (k=624 -1; k; k--) {
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1566083941UL))
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
          - i;
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] &= 0xffffffffUL;
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        i++;
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (i>=624) { mt[0] = mt[624 -1]; i=1; }
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    mt[0] = 0x80000000UL;
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
rm_stack(false, 0UL, "spec_init_by_array", &____must_manage_spec_init_by_array, ____alias_loc_id_3, ____chimes_did_disable4, false); }
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
extern "C" unsigned long spec_genrand_int32_resumable(void)
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&spec_genrand_int32), "spec_genrand_int32", &____must_manage_spec_genrand_int32, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    unsigned long y; ;
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    static unsigned long mag01[2] = { 0UL, 2567483615UL }; ;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    if (mti >= 624) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        int kk; ;
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (mti == 624 +1)
# 138 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            ({ calling_npm("spec_init_genrand", 0); spec_init_genrand_npm(5489UL); });
# 139 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 140 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        for (kk=0;kk<624 -397;kk++) {
# 141 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            y = (mt[kk]&0x80000000UL)|(mt[kk+1]&0x7fffffffUL);
# 142 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            mt[kk] = mt[kk+397] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 143 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        }
# 144 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        for (;kk<624 -1;kk++) {
# 145 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            y = (mt[kk]&0x80000000UL)|(mt[kk+1]&0x7fffffffUL);
# 146 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            mt[kk] = mt[kk+(397 -624)] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 147 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        }
# 148 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        y = (mt[624 -1]&0x80000000UL)|(mt[0]&0x7fffffffUL);
# 149 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[624 -1] = mt[397 -1] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 150 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 151 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mti = 0;
# 152 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 153 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 154 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y = mt[mti++];
# 155 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 156 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 157 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y >> 11);
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y << 7) & 0x9d2c5680UL;
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y << 15) & 0xefc60000UL;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y >> 18);
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_int32", &____must_manage_spec_genrand_int32, ____alias_loc_id_2, ____chimes_did_disable5, false); return y;
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 164 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
long spec_genrand_int31_npm(void);
long spec_genrand_int31_quick(void); long spec_genrand_int31(void);
extern "C" long spec_genrand_int31_resumable(void)
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&spec_genrand_int31), "spec_genrand_int31", &____must_manage_spec_genrand_int31, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_int31", &____must_manage_spec_genrand_int31, 0, ____chimes_did_disable6, false); return (long)(({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })>>1);
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real1_npm(void);
double spec_genrand_real1_quick(void); double spec_genrand_real1(void);
extern "C" double spec_genrand_real1_resumable(void)
# 173 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&spec_genrand_real1), "spec_genrand_real1", &____must_manage_spec_genrand_real1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 174 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_real1", &____must_manage_spec_genrand_real1, 0, ____chimes_did_disable7, false); return ({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })*(1.0/4294967295.0);
# 175 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 176 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 177 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 178 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 179 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real2_npm(void);
double spec_genrand_real2_quick(void); double spec_genrand_real2(void);
extern "C" double spec_genrand_real2_resumable(void)
# 180 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&spec_genrand_real2), "spec_genrand_real2", &____must_manage_spec_genrand_real2, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 181 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_real2", &____must_manage_spec_genrand_real2, 0, ____chimes_did_disable8, false); return ({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })*(1.0/4294967296.0);
# 182 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 183 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 184 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 186 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real3_npm(void);
double spec_genrand_real3_quick(void); double spec_genrand_real3(void);
extern "C" double spec_genrand_real3_resumable(void)
# 187 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&spec_genrand_real3), "spec_genrand_real3", &____must_manage_spec_genrand_real3, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 188 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_real3", &____must_manage_spec_genrand_real3, 0, ____chimes_did_disable9, false); return (((double)({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })) + 0.5)*(1.0/4294967296.0);
# 189 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 190 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 191 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 192 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 193 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_res53_npm(void);
double spec_genrand_res53_quick(void); double spec_genrand_res53(void);
extern "C" double spec_genrand_res53_resumable(void)
# 194 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&spec_genrand_res53), "spec_genrand_res53", &____must_manage_spec_genrand_res53, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
     unsigned long a; unsigned long b; a = (({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); }) >> 5) ; b = (({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); }) >> 6) ;
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_res53", &____must_manage_spec_genrand_res53, ____alias_loc_id_4, ____chimes_did_disable10, false); return(a*67108864.0+b)*(1.0/9007199254740992.0);
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_srand_quick(int seed) {const int ____chimes_did_disable0 = new_stack((void *)(&spec_srand), "spec_srand", &____must_manage_spec_srand, 1, 0, (size_t)(0UL)) ; ; ;
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
  ({ calling_npm("spec_init_genrand", 0); spec_init_genrand_npm((unsigned long) seed); });
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
rm_stack(false, 0UL, "spec_srand", &____must_manage_spec_srand, ____alias_loc_id_0, ____chimes_did_disable0, false); }

void spec_srand(int seed) { (____chimes_replaying ? spec_srand_resumable(seed) : spec_srand_quick(seed)); }
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_rand_quick(void) {const int ____chimes_did_disable1 = new_stack((void *)(&spec_rand), "spec_rand", &____must_manage_spec_rand, 0, 0) ; ; ;
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_rand", &____must_manage_spec_rand, 0, ____chimes_did_disable1, false); return ({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })*(1.0/4294967296.0);
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

double spec_rand(void) { return (____chimes_replaying ? spec_rand_resumable() : spec_rand_quick()); }
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
long spec_lrand48_quick(void) {const int ____chimes_did_disable2 = new_stack((void *)(&spec_lrand48), "spec_lrand48", &____must_manage_spec_lrand48, 0, 0) ; ; ;
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_lrand48", &____must_manage_spec_lrand48, 0, ____chimes_did_disable2, false); return (long)(({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })>>1);
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

long spec_lrand48(void) { return (____chimes_replaying ? spec_lrand48_resumable() : spec_lrand48_quick()); }
# 83 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_init_genrand_quick(unsigned long s)
# 84 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&spec_init_genrand), "spec_init_genrand", &____must_manage_spec_init_genrand, 1, 0, (size_t)(0UL)) ; ; ;
# 85 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    mt[0]= s & 0xffffffffUL;
# 86 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (mti=1; mti<624; mti++) {
# 87 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[mti] =
# 88 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
     (1812433253UL * (mt[mti-1] ^ (mt[mti-1] >> 30)) + mti);
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[mti] &= 0xffffffffUL;
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
rm_stack(false, 0UL, "spec_init_genrand", &____must_manage_spec_init_genrand, ____alias_loc_id_1, ____chimes_did_disable3, false); }

void spec_init_genrand(unsigned long s) { (____chimes_replaying ? spec_init_genrand_resumable(s) : spec_init_genrand_quick(s)); }
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_init_by_array_quick(unsigned long init_key[], int key_length)
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&spec_init_by_array), "spec_init_by_array", &____must_manage_spec_init_by_array, 2, 0, (size_t)(6302335948771282621UL), (size_t)(0UL)) ; ; ;
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    int i; int j; int k; ;
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    ({ calling_npm("spec_init_genrand", 0); spec_init_genrand_npm(19650218UL); });
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    i=1; j=0;
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    k = (624>key_length ? 624 : key_length);
# 108 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (; k; k--) {
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1664525UL))
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
          + init_key[j] + j;
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] &= 0xffffffffUL;
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        i++; j++;
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (i>=624) { mt[0] = mt[624 -1]; i=1; }
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (j>=key_length) j=0;
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (k=624 -1; k; k--) {
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1566083941UL))
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
          - i;
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] &= 0xffffffffUL;
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        i++;
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (i>=624) { mt[0] = mt[624 -1]; i=1; }
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    mt[0] = 0x80000000UL;
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
rm_stack(false, 0UL, "spec_init_by_array", &____must_manage_spec_init_by_array, ____alias_loc_id_3, ____chimes_did_disable4, false); }

void spec_init_by_array(unsigned long init_key[], int key_length) { (____chimes_replaying ? spec_init_by_array_resumable(init_key, key_length) : spec_init_by_array_quick(init_key, key_length)); }
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
unsigned long spec_genrand_int32_quick(void)
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&spec_genrand_int32), "spec_genrand_int32", &____must_manage_spec_genrand_int32, 0, 0) ; ; ;
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    unsigned long y; ;
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    static unsigned long mag01[2] = { 0UL, 2567483615UL }; ;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    if (mti >= 624) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        int kk; ;
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (mti == 624 +1)
# 138 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            ({ calling_npm("spec_init_genrand", 0); spec_init_genrand_npm(5489UL); });
# 139 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 140 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        for (kk=0;kk<624 -397;kk++) {
# 141 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            y = (mt[kk]&0x80000000UL)|(mt[kk+1]&0x7fffffffUL);
# 142 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            mt[kk] = mt[kk+397] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 143 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        }
# 144 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        for (;kk<624 -1;kk++) {
# 145 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            y = (mt[kk]&0x80000000UL)|(mt[kk+1]&0x7fffffffUL);
# 146 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            mt[kk] = mt[kk+(397 -624)] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 147 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        }
# 148 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        y = (mt[624 -1]&0x80000000UL)|(mt[0]&0x7fffffffUL);
# 149 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[624 -1] = mt[397 -1] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 150 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 151 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mti = 0;
# 152 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 153 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 154 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y = mt[mti++];
# 155 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 156 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 157 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y >> 11);
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y << 7) & 0x9d2c5680UL;
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y << 15) & 0xefc60000UL;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y >> 18);
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_int32", &____must_manage_spec_genrand_int32, ____alias_loc_id_2, ____chimes_did_disable5, false); return y;
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

unsigned long spec_genrand_int32(void) { return (____chimes_replaying ? spec_genrand_int32_resumable() : spec_genrand_int32_quick()); }
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
long spec_genrand_int31_quick(void)
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&spec_genrand_int31), "spec_genrand_int31", &____must_manage_spec_genrand_int31, 0, 0) ; ; ;
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_int31", &____must_manage_spec_genrand_int31, 0, ____chimes_did_disable6, false); return (long)(({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })>>1);
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

long spec_genrand_int31(void) { return (____chimes_replaying ? spec_genrand_int31_resumable() : spec_genrand_int31_quick()); }
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real1_quick(void)
# 173 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&spec_genrand_real1), "spec_genrand_real1", &____must_manage_spec_genrand_real1, 0, 0) ; ; ;
# 174 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_real1", &____must_manage_spec_genrand_real1, 0, ____chimes_did_disable7, false); return ({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })*(1.0/4294967295.0);
# 175 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 176 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

double spec_genrand_real1(void) { return (____chimes_replaying ? spec_genrand_real1_resumable() : spec_genrand_real1_quick()); }
# 179 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real2_quick(void)
# 180 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&spec_genrand_real2), "spec_genrand_real2", &____must_manage_spec_genrand_real2, 0, 0) ; ; ;
# 181 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_real2", &____must_manage_spec_genrand_real2, 0, ____chimes_did_disable8, false); return ({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })*(1.0/4294967296.0);
# 182 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 183 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

double spec_genrand_real2(void) { return (____chimes_replaying ? spec_genrand_real2_resumable() : spec_genrand_real2_quick()); }
# 186 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real3_quick(void)
# 187 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&spec_genrand_real3), "spec_genrand_real3", &____must_manage_spec_genrand_real3, 0, 0) ; ; ;
# 188 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_real3", &____must_manage_spec_genrand_real3, 0, ____chimes_did_disable9, false); return (((double)({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); })) + 0.5)*(1.0/4294967296.0);
# 189 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 190 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

double spec_genrand_real3(void) { return (____chimes_replaying ? spec_genrand_real3_resumable() : spec_genrand_real3_quick()); }
# 193 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_res53_quick(void)
# 194 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&spec_genrand_res53), "spec_genrand_res53", &____must_manage_spec_genrand_res53, 0, 0) ; ; ;
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
     unsigned long a; unsigned long b; a = (({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); }) >> 5) ; b = (({ calling_npm("spec_genrand_int32", 0); spec_genrand_int32_npm(); }) >> 6) ;
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    rm_stack(false, 0UL, "spec_genrand_res53", &____must_manage_spec_genrand_res53, ____alias_loc_id_4, ____chimes_did_disable10, false); return(a*67108864.0+b)*(1.0/9007199254740992.0);
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}

double spec_genrand_res53(void) { return (____chimes_replaying ? spec_genrand_res53_resumable() : spec_genrand_res53_quick()); }
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_srand_npm(int seed) {
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
  spec_init_genrand_npm((unsigned long) seed);
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_rand_npm(void) {
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return spec_genrand_int32_npm()*(1.0/4294967296.0);
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
long spec_lrand48_npm(void) {
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return (long)(spec_genrand_int32_npm()>>1);
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 83 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_init_genrand_npm(unsigned long s)
# 84 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 85 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    mt[0]= s & 0xffffffffUL;
# 86 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (mti=1; mti<624; mti++) {
# 87 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[mti] =
# 88 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
     (1812433253UL * (mt[mti-1] ^ (mt[mti-1] >> 30)) + mti);
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[mti] &= 0xffffffffUL;
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
void spec_init_by_array_npm(unsigned long init_key[], int key_length)
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    int i, j, k;
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    spec_init_genrand_npm(19650218UL);
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    i=1; j=0;
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    k = (624>key_length ? 624 : key_length);
# 108 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (; k; k--) {
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1664525UL))
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
          + init_key[j] + j;
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] &= 0xffffffffUL;
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        i++; j++;
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (i>=624) { mt[0] = mt[624 -1]; i=1; }
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (j>=key_length) j=0;
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    for (k=624 -1; k; k--) {
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1566083941UL))
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
          - i;
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[i] &= 0xffffffffUL;
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        i++;
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (i>=624) { mt[0] = mt[624 -1]; i=1; }
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    mt[0] = 0x80000000UL;
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
unsigned long spec_genrand_int32_npm(void)
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    unsigned long y;
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    static unsigned long mag01[2]={0x0UL, 0x9908b0dfUL};
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    if (mti >= 624) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        int kk;
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        if (mti == 624 +1)
# 138 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            spec_init_genrand_npm(5489UL);
# 139 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 140 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        for (kk=0;kk<624 -397;kk++) {
# 141 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            y = (mt[kk]&0x80000000UL)|(mt[kk+1]&0x7fffffffUL);
# 142 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            mt[kk] = mt[kk+397] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 143 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        }
# 144 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        for (;kk<624 -1;kk++) {
# 145 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            y = (mt[kk]&0x80000000UL)|(mt[kk+1]&0x7fffffffUL);
# 146 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
            mt[kk] = mt[kk+(397 -624)] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 147 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        }
# 148 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        y = (mt[624 -1]&0x80000000UL)|(mt[0]&0x7fffffffUL);
# 149 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mt[624 -1] = mt[397 -1] ^ (y >> 1) ^ mag01[y & 0x1UL];
# 150 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 151 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
        mti = 0;
# 152 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    }
# 153 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 154 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y = mt[mti++];
# 155 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 156 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 157 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y >> 11);
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y << 7) & 0x9d2c5680UL;
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y << 15) & 0xefc60000UL;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    y ^= (y >> 18);
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return y;
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
long spec_genrand_int31_npm(void)
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return (long)(spec_genrand_int32_npm()>>1);
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real1_npm(void)
# 173 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 174 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return spec_genrand_int32_npm()*(1.0/4294967295.0);
# 175 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 176 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 179 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real2_npm(void)
# 180 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 181 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return spec_genrand_int32_npm()*(1.0/4294967296.0);
# 182 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 183 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 186 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_real3_npm(void)
# 187 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 188 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return (((double)spec_genrand_int32_npm()) + 0.5)*(1.0/4294967296.0);
# 189 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
# 190 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}
# 193 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
double spec_genrand_res53_npm(void)
# 194 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
{
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    unsigned long a=spec_genrand_int32_npm()>>5, b=spec_genrand_int32_npm()>>6;
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
    return(a*67108864.0+b)*(1.0/9007199254740992.0);
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/376.kdtree/src/specrand.c"
}





static int module_init() {
    init_module(6302335948771282278UL, 1, 11, 0, 5, 11, 0, 11, 11, 0, 0,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)0, (6302335948771282278UL + 1UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (6302335948771282278UL + 11UL), (6302335948771282278UL + 379UL), (6302335948771282278UL + 380UL),
                           &____alias_loc_id_2, (unsigned)4, (unsigned)0, (unsigned)0, (6302335948771282278UL + 59UL), (6302335948771282278UL + 60UL), (6302335948771282278UL + 379UL), (6302335948771282278UL + 380UL),
                           &____alias_loc_id_3, (unsigned)6, (unsigned)0, (unsigned)0, (6302335948771282278UL + 202UL), (6302335948771282278UL + 203UL), (6302335948771282278UL + 204UL), (6302335948771282278UL + 205UL), (6302335948771282278UL + 206UL), (6302335948771282278UL + 379UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)0, (unsigned)0, (6302335948771282278UL + 361UL), (6302335948771282278UL + 362UL),
                            "spec_srand", 0, "spec_srand", "_Z14spec_srand_npmi", 0, 1, 0UL, 0UL, 1, "spec_init_genrand", 1, 0UL, 0UL,
                            "spec_rand", 0, "spec_rand", "_Z13spec_rand_npmv", 0, 0, 0UL, 1, "spec_genrand_int32", 0, 0UL,
                            "spec_genrand_res53", 0, "spec_genrand_res53", "_Z22spec_genrand_res53_npmv", 0, 0, 0UL, 2, "spec_genrand_int32", 0, 0UL, "spec_genrand_int32", 0, 0UL,
                            "spec_init_by_array", 0, "spec_init_by_array", "_Z22spec_init_by_array_npmPmi", 0, 2, (6302335948771282278UL + 343UL), 0UL, 0UL, 1, "spec_init_genrand", 1, 0UL, 0UL,
                            "spec_genrand_int32", 0, "spec_genrand_int32", "_Z22spec_genrand_int32_npmv", 0, 0, 0UL, 1, "spec_init_genrand", 1, 0UL, 0UL,
                            "spec_genrand_int31", 0, "spec_genrand_int31", "_Z22spec_genrand_int31_npmv", 0, 0, 0UL, 1, "spec_genrand_int32", 0, 0UL,
                            "spec_init_genrand", 0, "spec_init_genrand", "_Z21spec_init_genrand_npmm", 0, 1, 0UL, 0UL, 0,
                            "spec_lrand48", 0, "spec_lrand48", "_Z16spec_lrand48_npmv", 0, 0, 0UL, 1, "spec_genrand_int32", 0, 0UL,
                            "spec_genrand_real2", 0, "spec_genrand_real2", "_Z22spec_genrand_real2_npmv", 0, 0, 0UL, 1, "spec_genrand_int32", 0, 0UL,
                            "spec_genrand_real3", 0, "spec_genrand_real3", "_Z22spec_genrand_real3_npmv", 0, 0, 0UL, 1, "spec_genrand_int32", 0, 0UL,
                            "spec_genrand_real1", 0, "spec_genrand_real1", "_Z22spec_genrand_real1_npmv", 0, 0, 0UL, 1, "spec_genrand_int32", 0, 0UL,
                           "spec_srand", &(____chimes_does_checkpoint_spec_srand_npm),
                           "spec_rand", &(____chimes_does_checkpoint_spec_rand_npm),
                           "spec_genrand_res53", &(____chimes_does_checkpoint_spec_genrand_res53_npm),
                           "spec_init_by_array", &(____chimes_does_checkpoint_spec_init_by_array_npm),
                           "spec_genrand_int32", &(____chimes_does_checkpoint_spec_genrand_int32_npm),
                           "spec_genrand_int31", &(____chimes_does_checkpoint_spec_genrand_int31_npm),
                           "spec_init_genrand", &(____chimes_does_checkpoint_spec_init_genrand_npm),
                           "spec_lrand48", &(____chimes_does_checkpoint_spec_lrand48_npm),
                           "spec_genrand_real2", &(____chimes_does_checkpoint_spec_genrand_real2_npm),
                           "spec_genrand_real3", &(____chimes_does_checkpoint_spec_genrand_real3_npm),
                           "spec_genrand_real1", &(____chimes_does_checkpoint_spec_genrand_real1_npm),
                             (6302335948771282278UL + 202UL), (6302335948771282278UL + 343UL),
                             "spec_srand", "spec_srand", 1, "spec_init_genrand",
                             "spec_rand", "spec_rand", 1, "spec_genrand_int32",
                             "spec_genrand_res53", "spec_genrand_res53", 2, "spec_genrand_int32", "spec_genrand_int32",
                             "spec_init_by_array", "spec_init_by_array", 1, "spec_init_genrand",
                             "spec_genrand_int32", "spec_genrand_int32", 1, "spec_init_genrand",
                             "spec_genrand_int31", "spec_genrand_int31", 1, "spec_genrand_int32",
                             "spec_init_genrand", "spec_init_genrand", 0,
                             "spec_lrand48", "spec_lrand48", 1, "spec_genrand_int32",
                             "spec_genrand_real2", "spec_genrand_real2", 1, "spec_genrand_int32",
                             "spec_genrand_real3", "spec_genrand_real3", 1, "spec_genrand_int32",
                             "spec_genrand_real1", "spec_genrand_real1", 1, "spec_genrand_int32",
        "spec_init_genrand", 0UL, (int)1, 0UL,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_init_genrand", 0UL, (int)1, 0UL,
        "spec_init_genrand", 0UL, (int)1, 0UL,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_genrand_int32", 0UL, (int)0,
        "spec_genrand_int32", 0UL, (int)0);
    register_global_var("global|mt", "[624 x i64]", (void *)(&mt), 4992, 0, 0, 0UL, 0);
    register_global_var("global|mti", "i32", (void *)(&mti), 4, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
