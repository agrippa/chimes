# 1 "graphics.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "graphics.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_write_graphics_npm = 1;
static int ____chimes_does_checkpoint_read_graphics_npm = 1;
static int ____chimes_does_checkpoint_fgetc_npm = 1;

static int ____must_checkpoint_read_graphics_input_0 = 2;
static int ____must_checkpoint_read_graphics_data_rows_0 = 2;
static int ____must_checkpoint_read_graphics_data_cols_0 = 2;
static int ____must_checkpoint_read_graphics_major_0 = 2;
static int ____must_checkpoint_read_graphics_fid_0 = 2;
static int ____must_checkpoint_read_graphics_i_0 = 2;
static int ____must_checkpoint_read_graphics_c_0 = 2;
static int ____must_checkpoint_read_graphics_temp_0 = 2;

static int ____must_manage_write_graphics = 2;
static int ____must_manage_read_graphics = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 2 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 3 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 4 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 5 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/define.h" 1
# 13 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/define.h"
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
# 8 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c" 2
# 8 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 9 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"

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
# 11 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c" 2
# 23 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 23 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
void write_graphics_npm( char* filename, float* input, int data_rows, int data_cols, int major, int data_range);
void write_graphics_quick( char* filename, float* input, int data_rows, int data_cols, int major, int data_range); void write_graphics( char* filename, float* input, int data_rows, int data_cols, int major, int data_range);
void write_graphics_resumable( char* filename,
# 24 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 25 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 26 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 27 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major,
# 28 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_range){const int ____chimes_did_disable0 = new_stack((void *)(&write_graphics), "write_graphics", &____must_manage_write_graphics, 6, 0, (size_t)(9161344876833312862UL), (size_t)(9161344876833312863UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 32 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 33 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 34 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 FILE *fid; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 int i; int j; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 38 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fid = fopen(filename, "w");
# 42 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if( fid == __null ){
# 43 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  printf( "The file was not created/opened for writing\n" );
# 44 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  rm_stack(false, 0UL, "write_graphics", &____must_manage_write_graphics, ____alias_loc_id_1, ____chimes_did_disable0, false); return;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 46 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 47 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 48 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "P2\n");
# 52 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "%d %d\n", data_cols, data_rows);
# 53 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "%d\n", data_range);
# 54 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 56 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 57 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 58 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if(major==0){
# 61 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 62 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 63 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fprintf(fid, "%d ", (int)input[i*data_cols+j]);
# 64 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 65 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   fprintf(fid, "\n");
# 66 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 67 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 else{
# 70 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 71 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 72 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fprintf(fid, "%d ", (int)input[j*data_rows+i]);
# 73 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 74 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   fprintf(fid, "\n");
# 75 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 77 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 78 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 79 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fclose(fid);
# 83 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
rm_stack(false, 0UL, "write_graphics", &____must_manage_write_graphics, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 85 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 86 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 89 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 90 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 91 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
void read_graphics_npm( char* filename, float* input, int data_rows, int data_cols, int major);static int (*____chimes_extern_func_fgetc)(struct _IO_FILE *) = fgetc;
void read_graphics_quick( char* filename, float* input, int data_rows, int data_cols, int major); void read_graphics( char* filename, float* input, int data_rows, int data_cols, int major);
void read_graphics_resumable( char* filename,
# 93 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 94 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 95 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major){const int ____chimes_did_disable1 = new_stack((void *)(&read_graphics), "read_graphics", &____must_manage_read_graphics, 5, 4, (size_t)(9161344876833313006UL), (size_t)(9161344876833313007UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "read_graphics|input|0", &____must_checkpoint_read_graphics_input_0, "float*", (void *)(&input), (size_t)8, 1, 0, 0, "read_graphics|data_rows|0", &____must_checkpoint_read_graphics_data_rows_0, "i32", (void *)(&data_rows), (size_t)4, 0, 0, 0, "read_graphics|data_cols|0", &____must_checkpoint_read_graphics_data_cols_0, "i32", (void *)(&data_cols), (size_t)4, 0, 0, 0, "read_graphics|major|0", &____must_checkpoint_read_graphics_major_0, "i32", (void *)(&major), (size_t)4, 0, 0, 0) ; int temp;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
char c;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
int i;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
FILE *fid;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if (____must_checkpoint_read_graphics_temp_0 || ____must_checkpoint_read_graphics_c_0 || ____must_checkpoint_read_graphics_i_0 || ____must_checkpoint_read_graphics_fid_0) { register_stack_vars(4, "read_graphics|temp|0", &____must_checkpoint_read_graphics_temp_0, "i32", (void *)(&temp), (size_t)4, 0, 0, 0, "read_graphics|c|0", &____must_checkpoint_read_graphics_c_0, "i8", (void *)(&c), (size_t)1, 0, 0, 0, "read_graphics|i|0", &____must_checkpoint_read_graphics_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "read_graphics|fid|0", &____must_checkpoint_read_graphics_fid_0, "%struct._IO_FILE*", (void *)(&fid), (size_t)8, 1, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 99 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  int j; ;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  ;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  ;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fid = fopen(filename, "r");
# 112 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if( fid == __null ){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  printf( "The file was not opened for reading\n" );
# 114 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  rm_stack(false, 0UL, "read_graphics", &____must_manage_read_graphics, ____alias_loc_id_2, ____chimes_did_disable1, false); return;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 116 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 i = 0;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 while(i<3){
# 123 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  alias_group_changed(____alias_loc_id_0); call_lbl_5: c = ({ calling((void*)fgetc, 5, ____alias_loc_id_0, 0UL, 1, (size_t)(9161344876833312902UL)); (fgetc)(fid); }) ;
# 124 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  if(c == '\n'){
# 125 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   i = i+1;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 127 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 };
# 128 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 133 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if(major==0){
# 134 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 135 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 136 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fscanf(fid, "%d", &temp);
# 137 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    input[i*data_cols+j] = (float)temp;
# 138 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 139 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 141 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 else{
# 142 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 143 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 144 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fscanf(fid, "%d", &temp);
# 145 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    input[j*data_rows+i] = (float)temp;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 147 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 148 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 149 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 150 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 152 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fclose(fid);
# 155 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
rm_stack(false, 0UL, "read_graphics", &____must_manage_read_graphics, ____alias_loc_id_2, ____chimes_did_disable1, false); }
# 23 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
void write_graphics_quick( char* filename,
# 24 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 25 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 26 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 27 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major,
# 28 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_range){const int ____chimes_did_disable0 = new_stack((void *)(&write_graphics), "write_graphics", &____must_manage_write_graphics, 6, 0, (size_t)(9161344876833312862UL), (size_t)(9161344876833312863UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 32 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 33 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 34 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 FILE *fid; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 int i; int j; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 38 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fid = fopen(filename, "w");
# 42 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if( fid == __null ){
# 43 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  printf( "The file was not created/opened for writing\n" );
# 44 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  rm_stack(false, 0UL, "write_graphics", &____must_manage_write_graphics, ____alias_loc_id_1, ____chimes_did_disable0, false); return;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 46 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 47 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 48 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "P2\n");
# 52 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "%d %d\n", data_cols, data_rows);
# 53 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "%d\n", data_range);
# 54 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 56 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 57 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 58 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if(major==0){
# 61 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 62 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 63 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fprintf(fid, "%d ", (int)input[i*data_cols+j]);
# 64 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 65 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   fprintf(fid, "\n");
# 66 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 67 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 else{
# 70 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 71 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 72 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fprintf(fid, "%d ", (int)input[j*data_rows+i]);
# 73 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 74 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   fprintf(fid, "\n");
# 75 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 77 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 78 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 79 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fclose(fid);
# 83 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
rm_stack(false, 0UL, "write_graphics", &____must_manage_write_graphics, ____alias_loc_id_1, ____chimes_did_disable0, false); }

void write_graphics( char* filename,
# 24 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 25 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 26 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 27 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major,
# 28 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_range) { (____chimes_replaying ? write_graphics_resumable(filename, input, data_rows, data_cols, major, data_range) : write_graphics_quick(filename, input, data_rows, data_cols, major, data_range)); }
# 92 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
void read_graphics_quick( char* filename,
# 93 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 94 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 95 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major){const int ____chimes_did_disable1 = new_stack((void *)(&read_graphics), "read_graphics", &____must_manage_read_graphics, 5, 4, (size_t)(9161344876833313006UL), (size_t)(9161344876833313007UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "read_graphics|input|0", &____must_checkpoint_read_graphics_input_0, "float*", (void *)(&input), (size_t)8, 1, 0, 0, "read_graphics|data_rows|0", &____must_checkpoint_read_graphics_data_rows_0, "i32", (void *)(&data_rows), (size_t)4, 0, 0, 0, "read_graphics|data_cols|0", &____must_checkpoint_read_graphics_data_cols_0, "i32", (void *)(&data_cols), (size_t)4, 0, 0, 0, "read_graphics|major|0", &____must_checkpoint_read_graphics_major_0, "i32", (void *)(&major), (size_t)4, 0, 0, 0) ; int temp;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
char c;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
int i;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
FILE *fid;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if (____must_checkpoint_read_graphics_temp_0 || ____must_checkpoint_read_graphics_c_0 || ____must_checkpoint_read_graphics_i_0 || ____must_checkpoint_read_graphics_fid_0) { register_stack_vars(4, "read_graphics|temp|0", &____must_checkpoint_read_graphics_temp_0, "i32", (void *)(&temp), (size_t)4, 0, 0, 0, "read_graphics|c|0", &____must_checkpoint_read_graphics_c_0, "i8", (void *)(&c), (size_t)1, 0, 0, 0, "read_graphics|i|0", &____must_checkpoint_read_graphics_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "read_graphics|fid|0", &____must_checkpoint_read_graphics_fid_0, "%struct._IO_FILE*", (void *)(&fid), (size_t)8, 1, 0, 0); } ; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 99 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  int j; ;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  ;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  ;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fid = fopen(filename, "r");
# 112 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if( fid == __null ){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  printf( "The file was not opened for reading\n" );
# 114 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  rm_stack(false, 0UL, "read_graphics", &____must_manage_read_graphics, ____alias_loc_id_2, ____chimes_did_disable1, false); return;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 116 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 i = 0;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 while(i<3){
# 123 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  alias_group_changed(____alias_loc_id_0); call_lbl_5: c = ({ calling((void*)fgetc, 5, ____alias_loc_id_0, 0UL, 1, (size_t)(9161344876833312902UL)); (fgetc)(fid); }) ;
# 124 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  if(c == '\n'){
# 125 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   i = i+1;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 127 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 };
# 128 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 133 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if(major==0){
# 134 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 135 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 136 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fscanf(fid, "%d", &temp);
# 137 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    input[i*data_cols+j] = (float)temp;
# 138 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 139 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 141 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 else{
# 142 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 143 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 144 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fscanf(fid, "%d", &temp);
# 145 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    input[j*data_rows+i] = (float)temp;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 147 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 148 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 149 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 150 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 152 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fclose(fid);
# 155 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
rm_stack(false, 0UL, "read_graphics", &____must_manage_read_graphics, ____alias_loc_id_2, ____chimes_did_disable1, false); }

void read_graphics( char* filename,
# 93 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 94 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 95 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major) { (____chimes_replaying ? read_graphics_resumable(filename, input, data_rows, data_cols, major) : read_graphics_quick(filename, input, data_rows, data_cols, major)); }
# 23 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
void write_graphics_npm( char* filename,
# 24 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 25 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 26 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 27 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major,
# 28 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_range){
# 29 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 32 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 33 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 34 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 FILE* fid;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 int i, j;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 38 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fid = fopen(filename, "w");
# 42 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if( fid == __null ){
# 43 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  printf( "The file was not created/opened for writing\n" );
# 44 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  return;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 46 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 47 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 48 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "P2\n");
# 52 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "%d %d\n", data_cols, data_rows);
# 53 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fprintf(fid, "%d\n", data_range);
# 54 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 56 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 57 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 58 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if(major==0){
# 61 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 62 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 63 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fprintf(fid, "%d ", (int)input[i*data_cols+j]);
# 64 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 65 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   fprintf(fid, "\n");
# 66 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 67 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 else{
# 70 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 71 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 72 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fprintf(fid, "%d ", (int)input[j*data_rows+i]);
# 73 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 74 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   fprintf(fid, "\n");
# 75 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 77 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 78 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 79 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fclose(fid);
# 83 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
}
# 92 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
void read_graphics_npm( char* filename,
# 93 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         float* input,
# 94 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_rows,
# 95 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int data_cols,
# 96 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
         int major){
# 97 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 99 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 FILE* fid;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 int i, j;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 char c;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 int temp;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fid = fopen(filename, "r");
# 112 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if( fid == __null ){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  printf( "The file was not opened for reading\n" );
# 114 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  return;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 116 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 i = 0;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 while(i<3){
# 123 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  c = (*____chimes_extern_func_fgetc)(fid);
# 124 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  if(c == '\n'){
# 125 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   i = i+1;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 127 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 };
# 128 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 133 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 if(major==0){
# 134 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 135 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 136 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fscanf(fid, "%d", &temp);
# 137 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    input[i*data_cols+j] = (float)temp;
# 138 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 139 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 141 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 else{
# 142 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  for(i=0; i<data_rows; i++){
# 143 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   for(j=0; j<data_cols; j++){
# 144 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    fscanf(fid, "%d", &temp);
# 145 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
    input[j*data_rows+i] = (float)temp;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
   }
# 147 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
  }
# 148 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 }
# 149 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 150 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 152 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
 fclose(fid);
# 155 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/srad/srad_v1/graphics.c"
}





static int module_init() {
    init_module(9161344876833312739UL, 6, 2, 8, 3, 2, 1, 3, 0, 0, 2,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (unsigned)1, (9161344876833312739UL + 143UL), (9161344876833312739UL + 145UL), "fgetc", (unsigned)1, (9161344876833312739UL + 163UL),
                           &____alias_loc_id_1, (unsigned)10, (unsigned)0, (unsigned)0, (9161344876833312739UL + 1UL), (9161344876833312739UL + 2UL), (9161344876833312739UL + 3UL), (9161344876833312739UL + 4UL), (9161344876833312739UL + 5UL), (9161344876833312739UL + 6UL), (9161344876833312739UL + 7UL), (9161344876833312739UL + 8UL), (9161344876833312739UL + 9UL), (9161344876833312739UL + 26UL),
                           &____alias_loc_id_2, (unsigned)11, (unsigned)0, (unsigned)0, (9161344876833312739UL + 137UL), (9161344876833312739UL + 138UL), (9161344876833312739UL + 139UL), (9161344876833312739UL + 140UL), (9161344876833312739UL + 141UL), (9161344876833312739UL + 142UL), (9161344876833312739UL + 143UL), (9161344876833312739UL + 144UL), (9161344876833312739UL + 145UL), (9161344876833312739UL + 163UL), (9161344876833312739UL + 268UL),
                            "write_graphics", 0, "_Z14write_graphicsPcPfiiii", "_Z18write_graphics_npmPcPfiiii", 0, 6, (9161344876833312739UL + 123UL), (9161344876833312739UL + 124UL), 0UL, 0UL, 0UL, 0UL, 0UL, 10, "fopen", 2, (9161344876833312739UL + 123UL), (9161344876833312739UL + 275UL), (9161344876833312739UL + 26UL), "printf", 1, (9161344876833312739UL + 276UL), 0UL, "fprintf", 2, (9161344876833312739UL + 26UL), (9161344876833312739UL + 277UL), 0UL, "fprintf", 4, (9161344876833312739UL + 26UL), (9161344876833312739UL + 278UL), 0UL, 0UL, 0UL, "fprintf", 3, (9161344876833312739UL + 26UL), (9161344876833312739UL + 277UL), 0UL, 0UL, "fprintf", 3, (9161344876833312739UL + 26UL), (9161344876833312739UL + 277UL), 0UL, 0UL, "fprintf", 2, (9161344876833312739UL + 26UL), (9161344876833312739UL + 275UL), 0UL, "fprintf", 3, (9161344876833312739UL + 26UL), (9161344876833312739UL + 277UL), 0UL, 0UL, "fprintf", 2, (9161344876833312739UL + 26UL), (9161344876833312739UL + 275UL), 0UL, "fclose", 1, (9161344876833312739UL + 26UL), 0UL,
                            "read_graphics", 0, "_Z13read_graphicsPcPfiii", "_Z17read_graphics_npmPcPfiii", 1, &____alias_loc_id_0, 5, (9161344876833312739UL + 267UL), (9161344876833312739UL + 268UL), 0UL, 0UL, 0UL, 0UL, 6, "fopen", 2, (9161344876833312739UL + 267UL), (9161344876833312739UL + 275UL), (9161344876833312739UL + 163UL), "printf", 1, (9161344876833312739UL + 283UL), 0UL, "fgetc", 1, (9161344876833312739UL + 163UL), 0UL, "fscanf", 3, (9161344876833312739UL + 163UL), (9161344876833312739UL + 284UL), (9161344876833312739UL + 146UL), 0UL, "fscanf", 3, (9161344876833312739UL + 163UL), (9161344876833312739UL + 284UL), (9161344876833312739UL + 146UL), 0UL, "fclose", 1, (9161344876833312739UL + 163UL), 0UL,
                               "fgetc", (void **)&(____chimes_extern_func_fgetc),
                           "write_graphics", &(____chimes_does_checkpoint_write_graphics_npm),
                           "read_graphics", &(____chimes_does_checkpoint_read_graphics_npm),
                           "fgetc", &(____chimes_does_checkpoint_fgetc_npm),
                             (9161344876833312739UL + 142UL), (9161344876833312739UL + 163UL),
                             (9161344876833312739UL + 1UL), (9161344876833312739UL + 123UL),
                             (9161344876833312739UL + 2UL), (9161344876833312739UL + 124UL),
                             (9161344876833312739UL + 137UL), (9161344876833312739UL + 267UL),
                             (9161344876833312739UL + 7UL), (9161344876833312739UL + 26UL),
                             (9161344876833312739UL + 138UL), (9161344876833312739UL + 268UL),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                             "write_graphics", "_Z14write_graphicsPcPfiiii", 0,
                             "read_graphics", "_Z13read_graphicsPcPfiii", 1, "fgetc",
                        "read_graphics|input|0", 1, "fgetc",
                        "read_graphics|data_rows|0", 1, "fgetc",
                        "read_graphics|data_cols|0", 1, "fgetc",
                        "read_graphics|major|0", 1, "fgetc",
                        "read_graphics|fid|0", 1, "fgetc",
                        "read_graphics|i|0", 1, "fgetc",
                        "read_graphics|c|0", 1, "fgetc",
                        "read_graphics|temp|0", 1, "read_graphics");
    return 0;
}

static const int __libchimes_module_init = module_init();
