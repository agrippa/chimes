# 1 "common3d.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "common3d.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_usage_npm = 1;
static int ____chimes_does_checkpoint_setup_config_npm = 1;
static int ____chimes_does_checkpoint_init_data_npm = 1;
static int ____chimes_does_checkpoint_default_config_npm = 1;
static int ____chimes_does_checkpoint_save_layer_text_npm = 1;
static int ____chimes_does_checkpoint_getNumCUDADevices_npm = 1;
static int ____chimes_does_checkpoint_parse_source_npm = 1;

static int ____must_checkpoint_setup_config_conf_0 = 2;
static int ____must_checkpoint_setup_config_argc_0 = 2;
static int ____must_checkpoint_setup_config_argv_0 = 2;

static int ____must_manage_usage = 2;
static int ____must_manage_setup_config = 2;
static int ____must_manage_init_data = 2;
static int ____must_manage_default_config = 2;
static int ____must_manage_save_layer_text = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/mg1/chimes/src/libchimes/libchimes.h" 2


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
# 69 "/home/mg1/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 1 "/home/mg1/chimes/src/examples/cpp/include/common3d.h" 1



# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4

extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
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
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
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
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
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
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
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
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 526 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 933 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
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
__attribute__ ((__leaf__)) feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 934 "/usr/include/stdio.h" 2 3 4
# 942 "/usr/include/stdio.h" 3 4
}
# 5 "/home/mg1/chimes/src/examples/cpp/include/common3d.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

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
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


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
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__leaf__)) atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__leaf__)) atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}

}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


}
# 315 "/usr/include/stdlib.h" 2 3 4






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
    __extension__ unsigned long long int __a;

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
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 716 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 760 "/usr/include/stdlib.h" 2 3 4




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
# 811 "/usr/include/stdlib.h" 3 4
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






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 887 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
}
# 6 "/home/mg1/chimes/src/examples/cpp/include/common3d.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const void *
memchr (const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 105 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 129 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strchr (const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strrchr (const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strpbrk (char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strpbrk (const char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strstr (char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strstr (const char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 381 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 437 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
index (const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
rindex (const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 643 "/usr/include/string.h" 3 4
}
# 7 "/home/mg1/chimes/src/examples/cpp/include/common3d.h" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4
extern "C" {
# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
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
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();


extern __pid_t getpgrp (void) throw ();


extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();






extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw () ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw () ;




extern int seteuid (__uid_t __uid) throw () ;






extern int setgid (__gid_t __gid) throw () ;




extern int setregid (__gid_t __rgid, __gid_t __egid) throw () ;




extern int setegid (__gid_t __gid) throw () ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw () ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw () ;






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 48 "/usr/include/getopt.h" 3 4
extern "C" {
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 185 "/usr/include/getopt.h" 3 4
}
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) throw ();






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     throw () __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
# 1151 "/usr/include/unistd.h" 3 4
}
# 8 "/home/mg1/chimes/src/examples/cpp/include/common3d.h" 2
# 1 "/home/mg1/chimes/src/examples/cpp/include/common.h" 1
# 29 "/home/mg1/chimes/src/examples/cpp/include/common.h"
# 1 "/home/mg1/chimes/src/examples/cpp/include/common_cuda.h" 1




extern "C" {


extern int getNumCUDADevices();


}
# 30 "/home/mg1/chimes/src/examples/cpp/include/common.h" 2

typedef struct _source {
    int x, y;
    float freq;
    int t;
} source;

extern double seconds();
extern void ricker_wavelet(float *source, int nsteps, float dt, float freq);
extern void parse_source(char *optarg, source *out);
extern void config_sources(source **srcs, int *nsrcs, int dimx, int dimy,
        int nsteps);
extern float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt);

extern void init_progress(int length, int goal, int disabled);
extern void update_progress(int progress);
extern void finish_progress();
# 9 "/home/mg1/chimes/src/examples/cpp/include/common3d.h" 2

typedef struct _config {
    int nx, ny, nz;
    int nsteps;
    int save_text;
    int verbose;
    int radius;
    int ngpus;

    source *srcs;
    int nsrcs;

    int progress_width;
    int progress_disabled;
} config;
# 39 "/home/mg1/chimes/src/examples/cpp/include/common3d.h"
extern void save_layer_text(float *field, int z, const int dimx, const int dimy,
        const int ny, const int nx, const char *filename, int radius);
extern void init_data(float *curr, float *next, float *vsq,
                float *h_coeff,
                const int dimx, const int dimy, const int dimz,
                const float dx, const float dt);
extern void usage(char **argv);
extern void default_config(config *conf);
extern void setup_config(config *conf, int argc, char **argv);
# 2 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp" 2
# 2 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 3 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 4 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 5 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 6 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 7 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void save_layer_text_npm(float *field, int z, const int dimx, const int dimy, const int ny, const int nx, const char *filename, int radius);
void save_layer_text_quick(float *field, int z, const int dimx, const int dimy, const int ny, const int nx, const char *filename, int radius); void save_layer_text(float *field, int z, const int dimx, const int dimy, const int ny, const int nx, const char *filename, int radius);
void save_layer_text_resumable(float *field, int z, const int dimx, const int dimy,
# 8 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        const int ny, const int nx, const char *filename, int radius) {const int ____chimes_did_disable0 = new_stack((void *)(&save_layer_text), "save_layer_text", &____must_manage_save_layer_text, 8, 0, (size_t)(14439300296825557233UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(14439300296825557239UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 9 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     FILE *fp; fp = (fopen(filename, "wb")) ;
# 10 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    if (fp == __null) {
# 11 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        fprintf(stderr, "Failed to open output file %s\n", filename);
# 12 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        exit(1);
# 13 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 14 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 15 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    { int y; for ( y = (0) ; y < ny; y++) {
# 16 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        { int x; for ( x = (0) ; x < nx; x++) {
# 17 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            fprintf(fp, "%d %d %.20f\n", y, x,
# 18 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                    field[(((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))]);
# 19 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        } }
# 20 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        fprintf(fp, "\n");
# 21 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    } }
# 22 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 23 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    fclose(fp);
# 24 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "save_layer_text", &____must_manage_save_layer_text, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 25 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 26 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void init_data_npm(float *curr, float *next, float *vsq, float *h_coeff, const int dimx, const int dimy, const int dimz, const float dx, const float dt);
void init_data_quick(float *curr, float *next, float *vsq, float *h_coeff, const int dimx, const int dimy, const int dimz, const float dx, const float dt); void init_data(float *curr, float *next, float *vsq, float *h_coeff, const int dimx, const int dimy, const int dimz, const float dx, const float dt);
void init_data_resumable(float *curr, float *next, float *vsq,
# 27 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                float *h_coeff,
# 28 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const int dimx, const int dimy, const int dimz,
# 29 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const float dx, const float dt) {const int ____chimes_did_disable1 = new_stack((void *)(&init_data), "init_data", &____must_manage_init_data, 9, 0, (size_t)(14439300296825557380UL), (size_t)(14439300296825557381UL), (size_t)(14439300296825557382UL), (size_t)(14439300296825557383UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 30 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 31 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     size_t len; len = ((size_t)dimx * (size_t)dimy * (size_t)dimz) ;
# 32 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    { size_t i; for ( i = (0) ; i < len; i++) {
# 33 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        vsq[i] = 2500. * 2500. * dt * dt;
# 34 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    } }
# 35 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 36 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 37 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    { size_t i; for ( i = (0) ; i < len; i++) {
# 38 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        curr[i] = next[i] = 0;
# 39 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    } }
# 40 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 41 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    memset(h_coeff, 0, 20 * sizeof(float));
# 42 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     float scale; scale = (1. / (dx * dx)) ;
# 43 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[0] = -8.541666 * scale;
# 44 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[1] = 1.600000 * scale;
# 45 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[2] = -0.200000 * scale;
# 46 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[3] = 0.025397 * scale;
# 47 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[4] = -0.001785 * scale;
# 48 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "init_data", &____must_manage_init_data, ____alias_loc_id_3, ____chimes_did_disable1, false); }
# 49 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 50 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void usage_npm(char **argv);
void usage_quick(char **argv); void usage(char **argv);
void usage_resumable(char **argv) {const int ____chimes_did_disable2 = new_stack((void *)(&usage), "usage", &____must_manage_usage, 1, 0, (size_t)(14439300296825557405UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 51 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    fprintf(stderr, "usage: %s [-v] [-s] [-x nx] [-y ny] [-z nz] [-i iters] "
# 52 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            "[-t text] [-p x,y,f] [-r radius] [-g ngpus] [-w progress_width]\n",
# 53 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            argv[0]);
# 54 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    exit(1);
# 55 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "usage", &____must_manage_usage, 0, ____chimes_did_disable2, false); }
# 56 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 57 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void default_config_npm(config *conf);
void default_config_quick(config *conf); void default_config(config *conf);
void default_config_resumable(config *conf) {const int ____chimes_did_disable3 = new_stack((void *)(&default_config), "default_config", &____must_manage_default_config, 1, 0, (size_t)(14439300296825557446UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 58 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nx = 2 * 256;
# 59 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->ny = 2 * 256;
# 60 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nz = 2 * 256;
# 61 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nsteps = 100;
# 62 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->save_text = -1;
# 63 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->verbose = 0;
# 64 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->radius = 4;
# 65 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->ngpus = -1;
# 66 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 67 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->srcs = __null;
# 68 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nsrcs = 0;
# 69 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 70 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->progress_width = 80;
# 71 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->progress_disabled = 0;
# 72 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "default_config", &____must_manage_default_config, ____alias_loc_id_4, ____chimes_did_disable3, false); }
# 73 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 74 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void setup_config_npm(config *conf, int argc, char **argv);static int (*____chimes_extern_func_getNumCUDADevices)(void) = getNumCUDADevices;static void (*____chimes_extern_func_parse_source)(char *, struct _source *) = parse_source;
void setup_config_quick(config *conf, int argc, char **argv); void setup_config(config *conf, int argc, char **argv);
void setup_config_resumable(config *conf, int argc, char **argv) {const int ____chimes_did_disable4 = new_stack((void *)(&setup_config), "setup_config", &____must_manage_setup_config, 3, 3, (size_t)(14439300296825557576UL), (size_t)(0UL), (size_t)(14439300296825557578UL), "setup_config|conf|0", &____must_checkpoint_setup_config_conf_0, "%struct._config*", (void *)(&conf), (size_t)8, 1, 0, 0, "setup_config|argc|0", &____must_checkpoint_setup_config_argc_0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "setup_config|argv|0", &____must_checkpoint_setup_config_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(3): { goto call_lbl_3; } default: { chimes_error(); } } } ; ;
# 75 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    int c; ;
# 76 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    opterr = 0;
# 77 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 78 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     call_lbl_0: ({ calling_npm("default_config", 0); default_config_npm(conf); });
# 79 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 80 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    while ((c = getopt(argc, argv, "x:y:z:i:svr:t:p:g:w:d")) != -1) {
# 81 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        switch (c) {
# 82 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'x':
# 83 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nx = atoi(optarg);
# 84 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 85 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'y':
# 86 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->ny = atoi(optarg);
# 87 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 88 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'z':
# 89 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nz = atoi(optarg);
# 90 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 91 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'i':
# 92 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nsteps = atoi(optarg);
# 93 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 94 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'v':
# 95 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->verbose = 1;
# 96 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 97 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 't':
# 98 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->save_text = atoi(optarg);
# 99 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 100 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'p':
# 101 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->srcs = (source *) ({ void *____chimes_tmp_header; ____chimes_tmp_header = (conf->srcs) ; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((conf->srcs ? (((unsigned char *)conf->srcs) - sizeof(void *)) : (unsigned char *)(conf->srcs)), (sizeof(source) * (conf->nsrcs + 1)) + sizeof(void *)); ; realloc_helper(____chimes_tmp_ptr, (conf->srcs ? (((unsigned char *)conf->srcs) - sizeof(void *)) : (unsigned char *)(conf->srcs)), ____chimes_tmp_header, sizeof(source) *
# 102 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                        (conf->nsrcs + 1), 14439300296825557506UL, 0, 1, (int)sizeof(struct _source), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 103 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                 call_lbl_1: ({ source * ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = (conf->srcs + conf->nsrcs); } calling((void*)parse_source, 1, ____alias_loc_id_0, 0UL, 2, (size_t)(14439300296825557470UL), (size_t)(14439300296825557506UL)); (parse_source)(optarg, ____chimes_arg1); }) ;
# 104 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nsrcs++;
# 105 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 106 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'r':
# 107 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->radius = atoi(optarg);
# 108 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 109 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'g':
# 110 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->ngpus = atoi(optarg);
# 111 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 112 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'w':
# 113 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->progress_width = atoi(optarg);
# 114 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 115 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'd':
# 116 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->progress_disabled = 1;
# 117 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 118 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case '?':
# 119 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                fprintf(stderr, "Missing argument to option %c\n", optopt);
# 120 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
             call_lbl_2: default:
# 121 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                ({ calling_npm("usage", 0); usage_npm(argv); });
# 122 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        }
# 123 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 124 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 125 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    if (conf->ngpus == -1) {
# 126 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
         call_lbl_3: conf->ngpus = ({ calling((void*)getNumCUDADevices, 3, ____alias_loc_id_1, 0UL, 0); (getNumCUDADevices)(); }) ;
# 127 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 128 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "setup_config", &____must_manage_setup_config, ____alias_loc_id_5, ____chimes_did_disable4, false); }
# 7 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void save_layer_text_quick(float *field, int z, const int dimx, const int dimy,
# 8 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        const int ny, const int nx, const char *filename, int radius) {const int ____chimes_did_disable0 = new_stack((void *)(&save_layer_text), "save_layer_text", &____must_manage_save_layer_text, 8, 0, (size_t)(14439300296825557233UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(14439300296825557239UL), (size_t)(0UL)) ; ; ;
# 9 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     FILE *fp; fp = (fopen(filename, "wb")) ;
# 10 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    if (fp == __null) {
# 11 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        fprintf(stderr, "Failed to open output file %s\n", filename);
# 12 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        exit(1);
# 13 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 14 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 15 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    { int y; for ( y = (0) ; y < ny; y++) {
# 16 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        { int x; for ( x = (0) ; x < nx; x++) {
# 17 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            fprintf(fp, "%d %d %.20f\n", y, x,
# 18 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                    field[(((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))]);
# 19 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        } }
# 20 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        fprintf(fp, "\n");
# 21 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    } }
# 22 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 23 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    fclose(fp);
# 24 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "save_layer_text", &____must_manage_save_layer_text, ____alias_loc_id_2, ____chimes_did_disable0, false); }

void save_layer_text(float *field, int z, const int dimx, const int dimy,
# 8 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        const int ny, const int nx, const char *filename, int radius) { (____chimes_replaying ? save_layer_text_resumable(field, z, dimx, dimy, ny, nx, filename, radius) : save_layer_text_quick(field, z, dimx, dimy, ny, nx, filename, radius)); }
# 26 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void init_data_quick(float *curr, float *next, float *vsq,
# 27 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                float *h_coeff,
# 28 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const int dimx, const int dimy, const int dimz,
# 29 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const float dx, const float dt) {const int ____chimes_did_disable1 = new_stack((void *)(&init_data), "init_data", &____must_manage_init_data, 9, 0, (size_t)(14439300296825557380UL), (size_t)(14439300296825557381UL), (size_t)(14439300296825557382UL), (size_t)(14439300296825557383UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 30 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 31 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     size_t len; len = ((size_t)dimx * (size_t)dimy * (size_t)dimz) ;
# 32 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    { size_t i; for ( i = (0) ; i < len; i++) {
# 33 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        vsq[i] = 2500. * 2500. * dt * dt;
# 34 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    } }
# 35 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 36 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 37 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    { size_t i; for ( i = (0) ; i < len; i++) {
# 38 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        curr[i] = next[i] = 0;
# 39 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    } }
# 40 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 41 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    memset(h_coeff, 0, 20 * sizeof(float));
# 42 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     float scale; scale = (1. / (dx * dx)) ;
# 43 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[0] = -8.541666 * scale;
# 44 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[1] = 1.600000 * scale;
# 45 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[2] = -0.200000 * scale;
# 46 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[3] = 0.025397 * scale;
# 47 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[4] = -0.001785 * scale;
# 48 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "init_data", &____must_manage_init_data, ____alias_loc_id_3, ____chimes_did_disable1, false); }

void init_data(float *curr, float *next, float *vsq,
# 27 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                float *h_coeff,
# 28 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const int dimx, const int dimy, const int dimz,
# 29 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const float dx, const float dt) { (____chimes_replaying ? init_data_resumable(curr, next, vsq, h_coeff, dimx, dimy, dimz, dx, dt) : init_data_quick(curr, next, vsq, h_coeff, dimx, dimy, dimz, dx, dt)); }
# 50 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void usage_quick(char **argv) {const int ____chimes_did_disable2 = new_stack((void *)(&usage), "usage", &____must_manage_usage, 1, 0, (size_t)(14439300296825557405UL)) ; ; ;
# 51 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    fprintf(stderr, "usage: %s [-v] [-s] [-x nx] [-y ny] [-z nz] [-i iters] "
# 52 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            "[-t text] [-p x,y,f] [-r radius] [-g ngpus] [-w progress_width]\n",
# 53 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            argv[0]);
# 54 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    exit(1);
# 55 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "usage", &____must_manage_usage, 0, ____chimes_did_disable2, false); }

void usage(char **argv) { (____chimes_replaying ? usage_resumable(argv) : usage_quick(argv)); }
# 57 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void default_config_quick(config *conf) {const int ____chimes_did_disable3 = new_stack((void *)(&default_config), "default_config", &____must_manage_default_config, 1, 0, (size_t)(14439300296825557446UL)) ; ; ;
# 58 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nx = 2 * 256;
# 59 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->ny = 2 * 256;
# 60 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nz = 2 * 256;
# 61 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nsteps = 100;
# 62 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->save_text = -1;
# 63 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->verbose = 0;
# 64 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->radius = 4;
# 65 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->ngpus = -1;
# 66 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 67 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->srcs = __null;
# 68 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nsrcs = 0;
# 69 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 70 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->progress_width = 80;
# 71 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->progress_disabled = 0;
# 72 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "default_config", &____must_manage_default_config, ____alias_loc_id_4, ____chimes_did_disable3, false); }

void default_config(config *conf) { (____chimes_replaying ? default_config_resumable(conf) : default_config_quick(conf)); }
# 74 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void setup_config_quick(config *conf, int argc, char **argv) {const int ____chimes_did_disable4 = new_stack((void *)(&setup_config), "setup_config", &____must_manage_setup_config, 3, 3, (size_t)(14439300296825557576UL), (size_t)(0UL), (size_t)(14439300296825557578UL), "setup_config|conf|0", &____must_checkpoint_setup_config_conf_0, "%struct._config*", (void *)(&conf), (size_t)8, 1, 0, 0, "setup_config|argc|0", &____must_checkpoint_setup_config_argc_0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "setup_config|argv|0", &____must_checkpoint_setup_config_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; ; ;
# 75 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    int c; ;
# 76 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    opterr = 0;
# 77 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 78 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
     call_lbl_0: ({ calling_npm("default_config", 0); default_config_npm(conf); });
# 79 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 80 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    while ((c = getopt(argc, argv, "x:y:z:i:svr:t:p:g:w:d")) != -1) {
# 81 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        switch (c) {
# 82 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'x':
# 83 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nx = atoi(optarg);
# 84 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 85 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'y':
# 86 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->ny = atoi(optarg);
# 87 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 88 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'z':
# 89 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nz = atoi(optarg);
# 90 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 91 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'i':
# 92 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nsteps = atoi(optarg);
# 93 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 94 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'v':
# 95 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->verbose = 1;
# 96 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 97 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 't':
# 98 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->save_text = atoi(optarg);
# 99 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 100 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'p':
# 101 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->srcs = (source *) ({ void *____chimes_tmp_header; ____chimes_tmp_header = (conf->srcs) ; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((conf->srcs ? (((unsigned char *)conf->srcs) - sizeof(void *)) : (unsigned char *)(conf->srcs)), (sizeof(source) * (conf->nsrcs + 1)) + sizeof(void *)); ; realloc_helper(____chimes_tmp_ptr, (conf->srcs ? (((unsigned char *)conf->srcs) - sizeof(void *)) : (unsigned char *)(conf->srcs)), ____chimes_tmp_header, sizeof(source) *
# 102 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                        (conf->nsrcs + 1), 14439300296825557506UL, 0, 1, (int)sizeof(struct _source), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 103 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                 call_lbl_1: ({ calling((void*)parse_source, 1, ____alias_loc_id_0, 0UL, 2, (size_t)(14439300296825557470UL), (size_t)(14439300296825557506UL)); (parse_source)(optarg, conf->srcs + conf->nsrcs); }) ;
# 104 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nsrcs++;
# 105 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 106 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'r':
# 107 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->radius = atoi(optarg);
# 108 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 109 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'g':
# 110 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->ngpus = atoi(optarg);
# 111 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 112 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'w':
# 113 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->progress_width = atoi(optarg);
# 114 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 115 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'd':
# 116 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->progress_disabled = 1;
# 117 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 118 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case '?':
# 119 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                fprintf(stderr, "Missing argument to option %c\n", optopt);
# 120 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
             call_lbl_2: default:
# 121 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                ({ calling_npm("usage", 0); usage_npm(argv); });
# 122 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        }
# 123 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 124 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 125 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    if (conf->ngpus == -1) {
# 126 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
         call_lbl_3: conf->ngpus = ({ calling((void*)getNumCUDADevices, 3, ____alias_loc_id_1, 0UL, 0); (getNumCUDADevices)(); }) ;
# 127 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 128 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
rm_stack(false, 0UL, "setup_config", &____must_manage_setup_config, ____alias_loc_id_5, ____chimes_did_disable4, false); }

void setup_config(config *conf, int argc, char **argv) { (____chimes_replaying ? setup_config_resumable(conf, argc, argv) : setup_config_quick(conf, argc, argv)); }
# 7 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void save_layer_text_npm(float *field, int z, const int dimx, const int dimy,
# 8 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        const int ny, const int nx, const char *filename, int radius) {
# 9 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    FILE *fp = fopen(filename, "wb");
# 10 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    if (fp == __null) {
# 11 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        fprintf(stderr, "Failed to open output file %s\n", filename);
# 12 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        exit(1);
# 13 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 14 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 15 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    for (int y = 0; y < ny; y++) {
# 16 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        for (int x = 0; x < nx; x++) {
# 17 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            fprintf(fp, "%d %d %.20f\n", y, x,
# 18 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                    field[(((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))]);
# 19 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        }
# 20 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        fprintf(fp, "\n");
# 21 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 22 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 23 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    fclose(fp);
# 24 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
}
# 26 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void init_data_npm(float *curr, float *next, float *vsq,
# 27 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                float *h_coeff,
# 28 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const int dimx, const int dimy, const int dimz,
# 29 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                const float dx, const float dt) {
# 30 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 31 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    size_t len = (size_t)dimx * (size_t)dimy * (size_t)dimz;
# 32 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    for (size_t i = 0; i < len; i++) {
# 33 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        vsq[i] = 2500. * 2500. * dt * dt;
# 34 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 35 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 36 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 37 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    for (size_t i = 0; i < len; i++) {
# 38 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        curr[i] = next[i] = 0;
# 39 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 40 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 41 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    memset(h_coeff, 0, 20 * sizeof(float));
# 42 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    float scale = 1. / (dx * dx);
# 43 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[0] = -8.541666 * scale;
# 44 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[1] = 1.600000 * scale;
# 45 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[2] = -0.200000 * scale;
# 46 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[3] = 0.025397 * scale;
# 47 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    h_coeff[4] = -0.001785 * scale;
# 48 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
}
# 50 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void usage_npm(char **argv) {
# 51 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    fprintf(stderr, "usage: %s [-v] [-s] [-x nx] [-y ny] [-z nz] [-i iters] "
# 52 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            "[-t text] [-p x,y,f] [-r radius] [-g ngpus] [-w progress_width]\n",
# 53 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            argv[0]);
# 54 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    exit(1);
# 55 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
}
# 57 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void default_config_npm(config *conf) {
# 58 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nx = 2 * 256;
# 59 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->ny = 2 * 256;
# 60 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nz = 2 * 256;
# 61 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nsteps = 100;
# 62 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->save_text = -1;
# 63 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->verbose = 0;
# 64 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->radius = 4;
# 65 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->ngpus = -1;
# 66 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 67 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->srcs = __null;
# 68 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->nsrcs = 0;
# 69 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 70 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->progress_width = 80;
# 71 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    conf->progress_disabled = 0;
# 72 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
}
# 74 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
void setup_config_npm(config *conf, int argc, char **argv) {
# 75 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    int c;
# 76 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    opterr = 0;
# 77 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 78 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    default_config_npm(conf);
# 79 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 80 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    while ((c = getopt(argc, argv, "x:y:z:i:svr:t:p:g:w:d")) != -1) {
# 81 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        switch (c) {
# 82 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'x':
# 83 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nx = atoi(optarg);
# 84 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 85 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'y':
# 86 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->ny = atoi(optarg);
# 87 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 88 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'z':
# 89 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nz = atoi(optarg);
# 90 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 91 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'i':
# 92 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nsteps = atoi(optarg);
# 93 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 94 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'v':
# 95 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->verbose = 1;
# 96 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 97 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 't':
# 98 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->save_text = atoi(optarg);
# 99 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 100 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'p':
# 101 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->srcs = (source *) ({ void *____chimes_tmp_header = conf->srcs; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((conf->srcs ? (((unsigned char *)conf->srcs) - sizeof(void *)) : (unsigned char *)(conf->srcs)), (sizeof(source) * (conf->nsrcs + 1)) + sizeof(void *)); realloc_helper(____chimes_tmp_ptr, (conf->srcs ? (((unsigned char *)conf->srcs) - sizeof(void *)) : (unsigned char *)(conf->srcs)), ____chimes_tmp_header, sizeof(source) *
# 102 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                        (conf->nsrcs + 1), 14439300296825557506UL, 0, 1, (int)sizeof(struct _source), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 103 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                (*____chimes_extern_func_parse_source)(optarg, conf->srcs + conf->nsrcs);
# 104 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->nsrcs++;
# 105 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 106 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'r':
# 107 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->radius = atoi(optarg);
# 108 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 109 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'g':
# 110 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->ngpus = atoi(optarg);
# 111 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 112 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'w':
# 113 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->progress_width = atoi(optarg);
# 114 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 115 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case 'd':
# 116 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                conf->progress_disabled = 1;
# 117 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                break;
# 118 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            case '?':
# 119 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                fprintf(stderr, "Missing argument to option %c\n", optopt);
# 120 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
            default:
# 121 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
                usage_npm(argv);
# 122 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        }
# 123 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 124 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
# 125 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    if (conf->ngpus == -1) {
# 126 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
        conf->ngpus = (*____chimes_extern_func_getNumCUDADevices)();
# 127 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
    }
# 128 "/home/mg1/chimes/src/examples/openmp/./lib/common3d.cpp"
}





static int module_init() {
    init_module(14439300296825557138UL, 16, 5, 3, 6, 5, 2, 7, 2, 0, 4,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)1, (14439300296825557138UL + 438UL), "parse_source", (unsigned)2, (14439300296825557138UL + 332UL), (14439300296825557138UL + 368UL),
                           &____alias_loc_id_1, (unsigned)6, (unsigned)0, (unsigned)0, (14439300296825557138UL + 309UL), (14439300296825557138UL + 310UL), (14439300296825557138UL + 311UL), (14439300296825557138UL + 312UL), (14439300296825557138UL + 438UL), (14439300296825557138UL + 455UL),
                           &____alias_loc_id_2, (unsigned)12, (unsigned)0, (unsigned)0, (14439300296825557138UL + 1UL), (14439300296825557138UL + 2UL), (14439300296825557138UL + 3UL), (14439300296825557138UL + 4UL), (14439300296825557138UL + 5UL), (14439300296825557138UL + 6UL), (14439300296825557138UL + 7UL), (14439300296825557138UL + 8UL), (14439300296825557138UL + 9UL), (14439300296825557138UL + 10UL), (14439300296825557138UL + 11UL), (14439300296825557138UL + 30UL),
                           &____alias_loc_id_3, (unsigned)17, (unsigned)0, (unsigned)0, (14439300296825557138UL + 111UL), (14439300296825557138UL + 112UL), (14439300296825557138UL + 113UL), (14439300296825557138UL + 114UL), (14439300296825557138UL + 115UL), (14439300296825557138UL + 116UL), (14439300296825557138UL + 117UL), (14439300296825557138UL + 118UL), (14439300296825557138UL + 119UL), (14439300296825557138UL + 120UL), (14439300296825557138UL + 121UL), (14439300296825557138UL + 122UL), (14439300296825557138UL + 123UL), (14439300296825557138UL + 242UL), (14439300296825557138UL + 243UL), (14439300296825557138UL + 244UL), (14439300296825557138UL + 245UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)0, (unsigned)0, (14439300296825557138UL + 268UL), (14439300296825557138UL + 308UL),
                           &____alias_loc_id_5, (unsigned)6, (unsigned)0, (unsigned)0, (14439300296825557138UL + 309UL), (14439300296825557138UL + 310UL), (14439300296825557138UL + 311UL), (14439300296825557138UL + 312UL), (14439300296825557138UL + 438UL), (14439300296825557138UL + 455UL),
                            "usage", 0, "_Z5usagePPc", "_Z9usage_npmPPc", 0, 1, (14439300296825557138UL + 267UL), 0UL, 2, "fprintf", 3, (14439300296825557138UL + 419UL), (14439300296825557138UL + 454UL), (14439300296825557138UL + 262UL), 0UL, "exit", 1, 0UL, 0UL,
                            "setup_config", 0, "_Z12setup_configP7_configiPPc", "_Z16setup_config_npmP7_configiPPc", 2, &____alias_loc_id_0, &____alias_loc_id_1, 3, (14439300296825557138UL + 438UL), 0UL, (14439300296825557138UL + 440UL), 0UL, 15, "default_config", 1, (14439300296825557138UL + 438UL), 0UL, "getopt", 3, 0UL, (14439300296825557138UL + 440UL), (14439300296825557138UL + 456UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "realloc", 2, (14439300296825557138UL + 368UL), 0UL, (14439300296825557138UL + 368UL), "parse_source", 2, (14439300296825557138UL + 332UL), (14439300296825557138UL + 368UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "atoi", 1, (14439300296825557138UL + 332UL), 0UL, "fprintf", 3, (14439300296825557138UL + 419UL), (14439300296825557138UL + 451UL), 0UL, 0UL, "usage", 1, (14439300296825557138UL + 440UL), 0UL, "getNumCUDADevices", 0, 0UL,
                            "init_data", 0, "_Z9init_dataPfS_S_S_iiiff", "_Z13init_data_npmPfS_S_S_iiiff", 0, 9, (14439300296825557138UL + 242UL), (14439300296825557138UL + 243UL), (14439300296825557138UL + 244UL), (14439300296825557138UL + 245UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 1, "memset", 3, (14439300296825557138UL + 245UL), 0UL, 0UL, 0UL,
                            "default_config", 0, "_Z14default_configP7_config", "_Z18default_config_npmP7_config", 0, 1, (14439300296825557138UL + 308UL), 0UL, 0,
                            "save_layer_text", 0, "_Z15save_layer_textPfiiiiiPKci", "_Z19save_layer_text_npmPfiiiiiPKci", 0, 8, (14439300296825557138UL + 95UL), 0UL, 0UL, 0UL, 0UL, 0UL, (14439300296825557138UL + 101UL), 0UL, 0UL, 6, "fopen", 2, (14439300296825557138UL + 101UL), (14439300296825557138UL + 449UL), (14439300296825557138UL + 30UL), "fprintf", 3, (14439300296825557138UL + 419UL), (14439300296825557138UL + 451UL), (14439300296825557138UL + 101UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 5, (14439300296825557138UL + 30UL), (14439300296825557138UL + 452UL), 0UL, 0UL, 0UL, 0UL, "fprintf", 2, (14439300296825557138UL + 30UL), (14439300296825557138UL + 453UL), 0UL, "fclose", 1, (14439300296825557138UL + 30UL), 0UL,
                               "getNumCUDADevices", (void **)&(____chimes_extern_func_getNumCUDADevices),
                               "parse_source", (void **)&(____chimes_extern_func_parse_source),
                           "usage", &(____chimes_does_checkpoint_usage_npm),
                           "setup_config", &(____chimes_does_checkpoint_setup_config_npm),
                           "init_data", &(____chimes_does_checkpoint_init_data_npm),
                           "default_config", &(____chimes_does_checkpoint_default_config_npm),
                           "save_layer_text", &(____chimes_does_checkpoint_save_layer_text_npm),
                           "getNumCUDADevices", &(____chimes_does_checkpoint_getNumCUDADevices_npm),
                           "parse_source", &(____chimes_does_checkpoint_parse_source_npm),
                             (14439300296825557138UL + 308UL), (14439300296825557138UL + 460UL),
                             (14439300296825557138UL + 309UL), (14439300296825557138UL + 438UL),
                             (14439300296825557138UL + 7UL), (14439300296825557138UL + 101UL),
                             (14439300296825557138UL + 457UL), (14439300296825557138UL + 332UL),
                             (14439300296825557138UL + 450UL), (14439300296825557138UL + 419UL),
                             (14439300296825557138UL + 311UL), (14439300296825557138UL + 440UL),
                             (14439300296825557138UL + 438UL), (14439300296825557138UL + 368UL),
                             (14439300296825557138UL + 1UL), (14439300296825557138UL + 95UL),
                             (14439300296825557138UL + 114UL), (14439300296825557138UL + 245UL),
                             (14439300296825557138UL + 111UL), (14439300296825557138UL + 242UL),
                             (14439300296825557138UL + 113UL), (14439300296825557138UL + 244UL),
                             (14439300296825557138UL + 112UL), (14439300296825557138UL + 243UL),
                             (14439300296825557138UL + 9UL), (14439300296825557138UL + 30UL),
                             (14439300296825557138UL + 267UL), (14439300296825557138UL + 262UL),
                             (14439300296825557138UL + 268UL), (14439300296825557138UL + 308UL),
                             (14439300296825557138UL + 256UL), (14439300296825557138UL + 267UL),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "_config", 448UL, 12, "int", (int)__builtin_offsetof (struct _config, nx), "int", (int)__builtin_offsetof (struct _config, ny), "int", (int)__builtin_offsetof (struct _config, nz), "int", (int)__builtin_offsetof (struct _config, nsteps), "int", (int)__builtin_offsetof (struct _config, save_text), "int", (int)__builtin_offsetof (struct _config, verbose), "int", (int)__builtin_offsetof (struct _config, radius), "int", (int)__builtin_offsetof (struct _config, ngpus), "%struct._source*", (int)__builtin_offsetof (struct _config, srcs), "int", (int)__builtin_offsetof (struct _config, nsrcs), "int", (int)__builtin_offsetof (struct _config, progress_width), "int", (int)__builtin_offsetof (struct _config, progress_disabled),
                     "_source", 128UL, 4, "int", (int)__builtin_offsetof (struct _source, x), "int", (int)__builtin_offsetof (struct _source, y), "float", (int)__builtin_offsetof (struct _source, freq), "int", (int)__builtin_offsetof (struct _source, t),
                             "usage", "_Z5usagePPc", 0, 0,
                             "setup_config", "_Z12setup_configP7_configiPPc", 0, 4, "default_config", "parse_source", "usage", "getNumCUDADevices",
                             "init_data", "_Z9init_dataPfS_S_S_iiiff", 0, 0,
                             "default_config", "_Z14default_configP7_config", 0, 0,
                             "save_layer_text", "_Z15save_layer_textPfiiiiiPKci", 0, 0,
                        "setup_config|conf|0", 2, "parse_source", "getNumCUDADevices",
                        "setup_config|argc|0", 1, "parse_source",
                        "setup_config|argv|0", 1, "parse_source",
        "default_config", 0UL, (int)1, 14439300296825557576UL,
        "usage", 0UL, (int)1, 14439300296825557578UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
