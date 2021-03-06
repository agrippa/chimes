# 1 "smith_waterman.cpp.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "smith_waterman.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_kernel_npm = 1;
static int ____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm = 1;
static int ____chimes_does_checkpoint_char_mapping_npm = 1;
static int ____chimes_does_checkpoint_read_file_npm = 1;
static int ____chimes_does_checkpoint_random_init_npm = 1;
static int ____chimes_does_checkpoint_print_matrix_npm = 1;


static int ____must_manage_kernel = 2;
static int ____must_manage_clear_whitespaces_do_mapping = 2;
static int ____must_manage_char_mapping = 2;
static int ____must_manage_read_file = 2;
static int ____must_manage_random_init = 2;
static int ____must_manage_print_matrix = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
# 1 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
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
# 1 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
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
# 2 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
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
# 3 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
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
# 4 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
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
# 5 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
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
# 6 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
# 6 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"

# 1 "/home/jmg3/chimes/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 8 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
# 8 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 9 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 10 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 11 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 12 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 13 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 14 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 15 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* string_1;
# 16 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* string_2;
# 17 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 18 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};
# 19 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 20 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char char_mapping_npm ( char c );
signed char char_mapping_quick ( char c ); signed char char_mapping ( char c );
signed char char_mapping_resumable ( char c ) {const int ____chimes_did_disable0 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 21 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 22 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    switch(c) {
# 23 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case '_': to_be_returned = GAP; break;
# 24 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 25 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 26 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 27 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 28 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 29 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (to_be_returned); rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 30 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 31 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 32 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns );
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ); void print_matrix ( int** matrix, int n_rows, int n_columns );
void print_matrix_resumable ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable1 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(17130708580749872361UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 33 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 34 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 35 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 36 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 37 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 38 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stdout, "\n");
# 39 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 40 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stdout,"--------------------------------\n");
# 41 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_2, ____chimes_did_disable1, false); }
# 42 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 43 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
static char alignment_score_matrix[5][5] =
# 44 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
{
# 45 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-1,-1,-1,-1},
# 46 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,2,-4,-2,-4},
# 47 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-4, 2,-4,-2},
# 48 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-2,-4, 2,-4},
# 49 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-4,-2,-4, 2}
# 50 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
};
# 51 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 52 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ); size_t clear_whitespaces_do_mapping ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_resumable ( signed char* buffer, long size ) {const int ____chimes_did_disable2 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(17130708580749872412UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 53 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 54 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 55 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    while ( traverse_index < size ) {
# 56 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 57 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        switch ( curr_char ) {
# 58 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 59 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 60 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                 call_lbl_0: buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 61 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                break;
# 62 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 63 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ++traverse_index;
# 64 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 65 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (non_ws_index); rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 66 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_3, ____chimes_did_disable2, false); }
# 67 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 68 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars );
signed char* read_file_quick( FILE* file, size_t* n_chars ); signed char* read_file( FILE* file, size_t* n_chars );
signed char* read_file_resumable( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable3 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(17130708580749872458UL), (size_t)(17130708580749872459UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 69 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 2);
# 70 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     long file_size; file_size = (ftell (file)) ;
# 71 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 0);
# 72 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 73 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char *file_buffer; file_buffer = ((signed char *) ({ void *____chimes_tmp_ptr = malloc(((1 + file_size) * sizeof(signed char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (1+file_size)*sizeof(signed char), 17130708580749872436UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 74 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 75 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 76 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    file_buffer[file_size] = '\n';
# 77 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 78 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 79 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     call_lbl_0: *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 80 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char *____chimes_ret_var_2; ; ____chimes_ret_var_2 = (file_buffer); rm_stack(true, 17130708580749872436UL, "read_file", &____must_manage_read_file, ____alias_loc_id_4, ____chimes_did_disable3, false); return ____chimes_ret_var_2; ;
# 81 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(true, 17130708580749872436UL, "read_file", &____must_manage_read_file, ____alias_loc_id_4, ____chimes_did_disable3, false); }
# 82 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 83 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
static void random_init_npm(signed char *s, unsigned long long len);
static void random_init_quick(signed char *s, unsigned long long len); static void random_init(signed char *s, unsigned long long len);
static void random_init_resumable(signed char *s, unsigned long long len) {const int ____chimes_did_disable4 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(17130708580749872910UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 84 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 85 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int r; r = (rand() % 5) ;
# 86 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ((r >= 0 && r < 5) ? static_cast<void> (0) : __assert_fail ("r >= 0 && r < 5", "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 86, __PRETTY_FUNCTION__));
# 87 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        s[i] = r;
# 88 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 89 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_7, ____chimes_did_disable4, false); }
# 90 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 91 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void kernel_npm(const unsigned long long c, const unsigned long long chunking, int *current, int *prev, unsigned long long n_char_in_file_1, unsigned long long n_char_in_file_2);
void kernel_quick(const unsigned long long c, const unsigned long long chunking, int *current, int *prev, unsigned long long n_char_in_file_1, unsigned long long n_char_in_file_2); void kernel(const unsigned long long c, const unsigned long long chunking, int *current, int *prev, unsigned long long n_char_in_file_1, unsigned long long n_char_in_file_2);
void kernel_resumable(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) {const int ____chimes_did_disable5 = new_stack((void *)(&kernel), "kernel", &____must_manage_kernel, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(17130708580749872626UL), (size_t)(17130708580749872626UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 94 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    unsigned long long i; unsigned long long j; ;
# 95 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
# 96 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current[0] = -1*i;
# 97 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
# 98 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_1; char_from_1 = (string_1[j-1]) ;
# 99 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_2; char_from_2 = (string_2[i-1]) ;
# 100 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 101 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int diag_score; diag_score = (prev[j-1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 102 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int left_score; left_score = (current[j-1] + alignment_score_matrix[char_from_1][GAP]) ;
# 103 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int top_score; top_score = (prev[j ] + alignment_score_matrix[GAP][char_from_2]) ;
# 104 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 105 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 106 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 107 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 108 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 109 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int *temp; temp = (prev) ;
# 110 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        prev = current;
# 111 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current = temp;
# 112 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 113 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "kernel", &____must_manage_kernel, ____alias_loc_id_5, ____chimes_did_disable5, false); }
# 114 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int main_quick ( int argc, char* argv[] ); int main ( int argc, char* argv[] );
int main_resumable ( int argc, char* argv[] ) {const int ____chimes_did_disable6 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(17130708580749872867UL)) ; unsigned long long c;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
struct timeval intermediate;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
struct timeval end;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
struct timeval begin;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int current;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int prev;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long nchunks;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long chunking;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long n_char_in_file_2;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long n_char_in_file_1;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int *result_array[2];
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 register_stack_vars(11, "main|c|0", (int *)0x0, "i64", (void *)(&c), (size_t)8, 0, 0, 0, "main|intermediate|0", (int *)0x0, "%struct.timeval = type { i64, i64 }", (void *)(&intermediate), (size_t)16, 0, 1, 0, "main|end|0", (int *)0x0, "%struct.timeval = type { i64, i64 }", (void *)(&end), (size_t)16, 0, 1, 0, "main|begin|0", (int *)0x0, "%struct.timeval = type { i64, i64 }", (void *)(&begin), (size_t)16, 0, 1, 0, "main|current|0", (int *)0x0, "i32", (void *)(&current), (size_t)4, 0, 0, 0, "main|prev|0", (int *)0x0, "i32", (void *)(&prev), (size_t)4, 0, 0, 0, "main|nchunks|0", (int *)0x0, "i64", (void *)(&nchunks), (size_t)8, 0, 0, 0, "main|chunking|0", (int *)0x0, "i64", (void *)(&chunking), (size_t)8, 0, 0, 0, "main|n_char_in_file_2|0", (int *)0x0, "i64", (void *)(&n_char_in_file_2), (size_t)8, 0, 0, 0, "main|n_char_in_file_1|0", (int *)0x0, "i64", (void *)(&n_char_in_file_1), (size_t)8, 0, 0, 0, "main|result_array|0", (int *)0x0, "[2 x i32*]", (void *)(result_array), (size_t)16, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } } ; ;
# 116 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 117 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  ;
# 118 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 119 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 if ( argc != 4 ) {
# 120 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  fprintf(stderr, "Usage: %s length1 length2 chunking\n", argv[0]);
# 121 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  exit(1);
# 122 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 }
# 123 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 124 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_1 = (strtoull(argv[1], __null, 10)) ;
# 125 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_2 = (strtoull(argv[2], __null, 10)) ;
# 126 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       chunking = (strtoull(argv[3], __null, 10)) ;
# 127 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    ((chunking % 2 == 0) ? static_cast<void> (0) : __assert_fail ("chunking % 2 == 0", "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 127, __PRETTY_FUNCTION__));
# 128 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 129 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    if (n_char_in_file_2 % chunking != 0) {
# 130 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stderr, "length2 (%llu) must be evenly divisible by chunking "
# 131 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                "(%llu)\n", n_char_in_file_2, chunking);
# 132 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (1); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); return ____chimes_ret_var_3; ;
# 133 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 134 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    printf("Processing length1=%llu length2=%llu\n", n_char_in_file_1,
# 135 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            n_char_in_file_2);
# 136 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 137 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       nchunks = (n_char_in_file_2 / chunking) ;
# 138 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    srand(123);
# 139 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 140 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_1 = (signed char *) ({ void *____chimes_tmp_ptr = malloc((n_char_in_file_1) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, n_char_in_file_1, 17130708580749872528UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 141 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_2 = (signed char *) ({ void *____chimes_tmp_ptr = malloc((n_char_in_file_2) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, n_char_in_file_2, 17130708580749872528UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 142 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     call_lbl_0: ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 143 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     call_lbl_1: ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 144 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 145 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[0] = (int *) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * (n_char_in_file_1 + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(int)*(n_char_in_file_1+1), 17130708580749872767UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 146 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[1] = (int *) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * (n_char_in_file_1 + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(int)*(n_char_in_file_1+1), 17130708580749872767UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 147 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 148 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    prev = (0) ;
# 149 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    current = (1) ;
# 150 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 151 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stderr, "Starting...\n");
# 152 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
          ;
# 153 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&begin,0);
# 154 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 155 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_char_in_file_1+1; ++i ) {
# 156 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  result_array[prev][i] = -1*i;
# 157 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 158 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 159 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { for ( c = (0) ; c < nchunks; c++) {
# 160 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         call_lbl_2: ({ calling_npm("kernel", 0); kernel_npm(c, chunking, result_array[current], result_array[prev], n_char_in_file_1, n_char_in_file_2); });
# 162 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 163 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        gettimeofday(&intermediate, 0);
# 164 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         unsigned long long elapsed; elapsed = (((intermediate.tv_sec - begin.tv_sec) * 1000) +
# 165 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            ((intermediate.tv_usec - begin.tv_usec) / 1000)) ;
# 166 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         unsigned long long estimate; estimate = (elapsed / (c + 1)) ;
# 167 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stderr, "%llu / %llu: %llu ms elapsed, %llu estimated total\n",
# 168 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                c + 1, nchunks, elapsed, estimate * nchunks);
# 169 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 170 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 171 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         call_lbl_3: checkpoint_transformed(3, ____alias_loc_id_0);
# 172 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 173 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 174 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 175 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&end,0);
# 176 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stdout, "The computation took %f seconds\n",
# 177 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            ((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 178 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 fprintf(stdout, "score: %d\n", result_array[prev][n_char_in_file_1]);
# 179 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); return ____chimes_ret_var_4; ;
# 180 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); }
# 20 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char char_mapping_quick ( char c ) {const int ____chimes_did_disable0 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; ; ;
# 21 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 22 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    switch(c) {
# 23 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case '_': to_be_returned = GAP; break;
# 24 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 25 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 26 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 27 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 28 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 29 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (to_be_returned); rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 30 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_1, ____chimes_did_disable0, false); }

signed char char_mapping ( char c ) { return (____chimes_replaying ? char_mapping_resumable(c) : char_mapping_quick(c)); }
# 32 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable1 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(17130708580749872361UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 33 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 34 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 35 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 36 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 37 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 38 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stdout, "\n");
# 39 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 40 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stdout,"--------------------------------\n");
# 41 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_2, ____chimes_did_disable1, false); }

void print_matrix ( int** matrix, int n_rows, int n_columns ) { (____chimes_replaying ? print_matrix_resumable(matrix, n_rows, n_columns) : print_matrix_quick(matrix, n_rows, n_columns)); }
# 52 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ) {const int ____chimes_did_disable2 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(17130708580749872412UL), (size_t)(0UL)) ; ; ;
# 53 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 54 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 55 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    while ( traverse_index < size ) {
# 56 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 57 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        switch ( curr_char ) {
# 58 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 59 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 60 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                 call_lbl_0: buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 61 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                break;
# 62 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 63 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ++traverse_index;
# 64 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 65 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (non_ws_index); rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 66 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_3, ____chimes_did_disable2, false); }

size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) { return (____chimes_replaying ? clear_whitespaces_do_mapping_resumable(buffer, size) : clear_whitespaces_do_mapping_quick(buffer, size)); }
# 68 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* read_file_quick( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable3 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(17130708580749872458UL), (size_t)(17130708580749872459UL)) ; ; ;
# 69 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 2);
# 70 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     long file_size; file_size = (ftell (file)) ;
# 71 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 0);
# 72 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 73 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char *file_buffer; file_buffer = ((signed char *) ({ void *____chimes_tmp_ptr = malloc(((1 + file_size) * sizeof(signed char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (1+file_size)*sizeof(signed char), 17130708580749872436UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 74 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 75 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 76 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    file_buffer[file_size] = '\n';
# 77 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 78 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 79 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     call_lbl_0: *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 80 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char *____chimes_ret_var_2; ; ____chimes_ret_var_2 = (file_buffer); rm_stack(true, 17130708580749872436UL, "read_file", &____must_manage_read_file, ____alias_loc_id_4, ____chimes_did_disable3, false); return ____chimes_ret_var_2; ;
# 81 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(true, 17130708580749872436UL, "read_file", &____must_manage_read_file, ____alias_loc_id_4, ____chimes_did_disable3, false); }

signed char* read_file( FILE* file, size_t* n_chars ) { return (____chimes_replaying ? read_file_resumable(file, n_chars) : read_file_quick(file, n_chars)); }
# 83 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
static void random_init_quick(signed char *s, unsigned long long len) {const int ____chimes_did_disable4 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(17130708580749872910UL), (size_t)(0UL)) ; ; ;
# 84 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 85 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int r; r = (rand() % 5) ;
# 86 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ((r >= 0 && r < 5) ? static_cast<void> (0) : __assert_fail ("r >= 0 && r < 5", "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 86, __PRETTY_FUNCTION__));
# 87 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        s[i] = r;
# 88 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 89 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_7, ____chimes_did_disable4, false); }

static void random_init(signed char *s, unsigned long long len) { (____chimes_replaying ? random_init_resumable(s, len) : random_init_quick(s, len)); }
# 91 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void kernel_quick(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) {const int ____chimes_did_disable5 = new_stack((void *)(&kernel), "kernel", &____must_manage_kernel, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(17130708580749872626UL), (size_t)(17130708580749872626UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 94 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    unsigned long long i; unsigned long long j; ;
# 95 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
# 96 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current[0] = -1*i;
# 97 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
# 98 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_1; char_from_1 = (string_1[j-1]) ;
# 99 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_2; char_from_2 = (string_2[i-1]) ;
# 100 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 101 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int diag_score; diag_score = (prev[j-1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 102 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int left_score; left_score = (current[j-1] + alignment_score_matrix[char_from_1][GAP]) ;
# 103 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int top_score; top_score = (prev[j ] + alignment_score_matrix[GAP][char_from_2]) ;
# 104 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 105 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 106 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 107 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 108 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 109 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int *temp; temp = (prev) ;
# 110 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        prev = current;
# 111 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current = temp;
# 112 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 113 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "kernel", &____must_manage_kernel, ____alias_loc_id_5, ____chimes_did_disable5, false); }

void kernel(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) { (____chimes_replaying ? kernel_resumable(c, chunking, current, prev, n_char_in_file_1, n_char_in_file_2) : kernel_quick(c, chunking, current, prev, n_char_in_file_1, n_char_in_file_2)); }
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int main_quick ( int argc, char* argv[] ) {const int ____chimes_did_disable6 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(17130708580749872867UL)) ; unsigned long long c;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
struct timeval intermediate;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
struct timeval end;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
struct timeval begin;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int current;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int prev;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long nchunks;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long chunking;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long n_char_in_file_2;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
unsigned long long n_char_in_file_1;
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int *result_array[2];
# 115 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 register_stack_vars(11, "main|c|0", (int *)0x0, "i64", (void *)(&c), (size_t)8, 0, 0, 0, "main|intermediate|0", (int *)0x0, "%struct.timeval = type { i64, i64 }", (void *)(&intermediate), (size_t)16, 0, 1, 0, "main|end|0", (int *)0x0, "%struct.timeval = type { i64, i64 }", (void *)(&end), (size_t)16, 0, 1, 0, "main|begin|0", (int *)0x0, "%struct.timeval = type { i64, i64 }", (void *)(&begin), (size_t)16, 0, 1, 0, "main|current|0", (int *)0x0, "i32", (void *)(&current), (size_t)4, 0, 0, 0, "main|prev|0", (int *)0x0, "i32", (void *)(&prev), (size_t)4, 0, 0, 0, "main|nchunks|0", (int *)0x0, "i64", (void *)(&nchunks), (size_t)8, 0, 0, 0, "main|chunking|0", (int *)0x0, "i64", (void *)(&chunking), (size_t)8, 0, 0, 0, "main|n_char_in_file_2|0", (int *)0x0, "i64", (void *)(&n_char_in_file_2), (size_t)8, 0, 0, 0, "main|n_char_in_file_1|0", (int *)0x0, "i64", (void *)(&n_char_in_file_1), (size_t)8, 0, 0, 0, "main|result_array|0", (int *)0x0, "[2 x i32*]", (void *)(result_array), (size_t)16, 0, 0, 0); ; ;
# 116 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 117 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  ;
# 118 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 119 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 if ( argc != 4 ) {
# 120 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  fprintf(stderr, "Usage: %s length1 length2 chunking\n", argv[0]);
# 121 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  exit(1);
# 122 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 }
# 123 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 124 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_1 = (strtoull(argv[1], __null, 10)) ;
# 125 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_2 = (strtoull(argv[2], __null, 10)) ;
# 126 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       chunking = (strtoull(argv[3], __null, 10)) ;
# 127 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    ((chunking % 2 == 0) ? static_cast<void> (0) : __assert_fail ("chunking % 2 == 0", "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 127, __PRETTY_FUNCTION__));
# 128 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 129 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    if (n_char_in_file_2 % chunking != 0) {
# 130 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stderr, "length2 (%llu) must be evenly divisible by chunking "
# 131 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                "(%llu)\n", n_char_in_file_2, chunking);
# 132 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (1); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); return ____chimes_ret_var_3; ;
# 133 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 134 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    printf("Processing length1=%llu length2=%llu\n", n_char_in_file_1,
# 135 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            n_char_in_file_2);
# 136 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 137 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       nchunks = (n_char_in_file_2 / chunking) ;
# 138 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    srand(123);
# 139 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 140 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_1 = (signed char *) ({ void *____chimes_tmp_ptr = malloc((n_char_in_file_1) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, n_char_in_file_1, 17130708580749872528UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 141 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_2 = (signed char *) ({ void *____chimes_tmp_ptr = malloc((n_char_in_file_2) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, n_char_in_file_2, 17130708580749872528UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 142 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     call_lbl_0: ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 143 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     call_lbl_1: ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 144 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 145 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[0] = (int *) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * (n_char_in_file_1 + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(int)*(n_char_in_file_1+1), 17130708580749872767UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 146 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[1] = (int *) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * (n_char_in_file_1 + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(int)*(n_char_in_file_1+1), 17130708580749872767UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 147 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 148 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    prev = (0) ;
# 149 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    current = (1) ;
# 150 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 151 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stderr, "Starting...\n");
# 152 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
          ;
# 153 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&begin,0);
# 154 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 155 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_char_in_file_1+1; ++i ) {
# 156 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  result_array[prev][i] = -1*i;
# 157 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 158 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 159 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { for ( c = (0) ; c < nchunks; c++) {
# 160 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         call_lbl_2: ({ calling_npm("kernel", 0); kernel_npm(c, chunking, result_array[current], result_array[prev], n_char_in_file_1, n_char_in_file_2); });
# 162 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 163 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        gettimeofday(&intermediate, 0);
# 164 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         unsigned long long elapsed; elapsed = (((intermediate.tv_sec - begin.tv_sec) * 1000) +
# 165 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            ((intermediate.tv_usec - begin.tv_usec) / 1000)) ;
# 166 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         unsigned long long estimate; estimate = (elapsed / (c + 1)) ;
# 167 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stderr, "%llu / %llu: %llu ms elapsed, %llu estimated total\n",
# 168 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                c + 1, nchunks, elapsed, estimate * nchunks);
# 169 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 170 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 171 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         call_lbl_3: checkpoint_transformed(3, ____alias_loc_id_0);
# 172 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 173 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 174 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 175 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&end,0);
# 176 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stdout, "The computation took %f seconds\n",
# 177 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            ((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 178 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 fprintf(stdout, "score: %d\n", result_array[prev][n_char_in_file_1]);
# 179 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); return ____chimes_ret_var_4; ;
# 180 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6, false); }

int main ( int argc, char* argv[] ) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 20 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char char_mapping_npm ( char c ) {
# 21 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    signed char to_be_returned = -1;
# 22 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    switch(c) {
# 23 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case '_': to_be_returned = GAP; break;
# 24 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 25 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 26 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 27 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 28 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 29 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char ____chimes_ret_var_0; ____chimes_ret_var_0 = (to_be_returned); return ____chimes_ret_var_0; ;
# 30 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 32 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns ) {
# 33 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i, j;
# 34 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 35 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 36 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 37 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 38 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(stdout, "\n");
# 39 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 40 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(stdout,"--------------------------------\n");
# 41 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 52 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size ) {
# 53 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    size_t non_ws_index = 0, traverse_index = 0;
# 54 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 55 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    while ( traverse_index < size ) {
# 56 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        char curr_char = buffer[traverse_index];
# 57 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        switch ( curr_char ) {
# 58 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 59 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 60 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                buffer[non_ws_index++] = char_mapping_npm(curr_char);
# 61 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                break;
# 62 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 63 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ++traverse_index;
# 64 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 65 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t ____chimes_ret_var_1; ____chimes_ret_var_1 = (non_ws_index); return ____chimes_ret_var_1; ;
# 66 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 68 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars ) {
# 69 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 2);
# 70 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    long file_size = ftell (file);
# 71 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 0);
# 72 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 73 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    signed char *file_buffer = (signed char *) ({ void *____chimes_tmp_ptr = malloc(((1 + file_size) * sizeof(signed char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (1+file_size)*sizeof(signed char), 17130708580749872436UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 74 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 75 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    size_t n_read_from_file = fread(file_buffer, sizeof(signed char), file_size, file);
# 76 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    file_buffer[file_size] = '\n';
# 77 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 78 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 79 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    *n_chars = clear_whitespaces_do_mapping_npm(file_buffer, file_size);
# 80 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char * ____chimes_ret_var_2; ____chimes_ret_var_2 = (file_buffer); return ____chimes_ret_var_2; ;
# 81 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 83 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
static void random_init_npm(signed char *s, unsigned long long len) {
# 84 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (unsigned long long i = 0; i < len; i++) {
# 85 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int r = rand() % 5;
# 86 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ((r >= 0 && r < 5) ? static_cast<void> (0) : __assert_fail ("r >= 0 && r < 5", "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 86, __PRETTY_FUNCTION__));
# 87 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        s[i] = r;
# 88 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 89 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 91 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void kernel_npm(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) {
# 94 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    unsigned long long i, j;
# 95 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
# 96 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current[0] = -1*i;
# 97 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
# 98 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            signed char char_from_1 = string_1[j-1];
# 99 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            signed char char_from_2 = string_2[i-1];
# 100 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 101 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int diag_score = prev[j-1] + alignment_score_matrix[char_from_2][char_from_1];
# 102 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int left_score = current[j-1] + alignment_score_matrix[char_from_1][GAP];
# 103 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int top_score = prev[j ] + alignment_score_matrix[GAP][char_from_2];
# 104 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 105 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
# 106 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 107 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 108 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 109 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *temp = prev;
# 110 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        prev = current;
# 111 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current = temp;
# 112 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 113 "/home/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}





static int module_init() {
    init_module(17130708580749872281UL, 16, 7, 0, 8, 6, 0, 6, 5, 0, 4,
                           &____alias_loc_id_0, (unsigned)18, (unsigned)0, (unsigned)0, (17130708580749872281UL + 348UL), (17130708580749872281UL + 349UL), (17130708580749872281UL + 350UL), (17130708580749872281UL + 351UL), (17130708580749872281UL + 353UL), (17130708580749872281UL + 354UL), (17130708580749872281UL + 355UL), (17130708580749872281UL + 356UL), (17130708580749872281UL + 358UL), (17130708580749872281UL + 359UL), (17130708580749872281UL + 360UL), (17130708580749872281UL + 361UL), (17130708580749872281UL + 363UL), (17130708580749872281UL + 364UL), (17130708580749872281UL + 365UL), (17130708580749872281UL + 366UL), (17130708580749872281UL + 486UL), (17130708580749872281UL + 642UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (17130708580749872281UL + 1UL), (17130708580749872281UL + 2UL), (17130708580749872281UL + 3UL),
                           &____alias_loc_id_2, (unsigned)5, (unsigned)0, (unsigned)0, (17130708580749872281UL + 29UL), (17130708580749872281UL + 30UL), (17130708580749872281UL + 31UL), (17130708580749872281UL + 32UL), (17130708580749872281UL + 33UL),
                           &____alias_loc_id_3, (unsigned)7, (unsigned)0, (unsigned)0, (17130708580749872281UL + 85UL), (17130708580749872281UL + 86UL), (17130708580749872281UL + 87UL), (17130708580749872281UL + 88UL), (17130708580749872281UL + 89UL), (17130708580749872281UL + 90UL), (17130708580749872281UL + 131UL),
                           &____alias_loc_id_4, (unsigned)8, (unsigned)0, (unsigned)0, (17130708580749872281UL + 133UL), (17130708580749872281UL + 134UL), (17130708580749872281UL + 135UL), (17130708580749872281UL + 136UL), (17130708580749872281UL + 137UL), (17130708580749872281UL + 138UL), (17130708580749872281UL + 155UL), (17130708580749872281UL + 178UL),
                           &____alias_loc_id_5, (unsigned)16, (unsigned)0, (unsigned)0, (17130708580749872281UL + 188UL), (17130708580749872281UL + 189UL), (17130708580749872281UL + 190UL), (17130708580749872281UL + 191UL), (17130708580749872281UL + 192UL), (17130708580749872281UL + 193UL), (17130708580749872281UL + 194UL), (17130708580749872281UL + 195UL), (17130708580749872281UL + 196UL), (17130708580749872281UL + 197UL), (17130708580749872281UL + 198UL), (17130708580749872281UL + 199UL), (17130708580749872281UL + 200UL), (17130708580749872281UL + 201UL), (17130708580749872281UL + 202UL), (17130708580749872281UL + 345UL),
                           &____alias_loc_id_6, (unsigned)18, (unsigned)0, (unsigned)0, (17130708580749872281UL + 348UL), (17130708580749872281UL + 349UL), (17130708580749872281UL + 350UL), (17130708580749872281UL + 351UL), (17130708580749872281UL + 353UL), (17130708580749872281UL + 354UL), (17130708580749872281UL + 355UL), (17130708580749872281UL + 356UL), (17130708580749872281UL + 357UL), (17130708580749872281UL + 358UL), (17130708580749872281UL + 359UL), (17130708580749872281UL + 360UL), (17130708580749872281UL + 361UL), (17130708580749872281UL + 362UL), (17130708580749872281UL + 364UL), (17130708580749872281UL + 367UL), (17130708580749872281UL + 486UL), (17130708580749872281UL + 642UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (unsigned)0, (17130708580749872281UL + 597UL), (17130708580749872281UL + 598UL), (17130708580749872281UL + 599UL), (17130708580749872281UL + 600UL), (17130708580749872281UL + 629UL),
                            "kernel", 0, "_Z6kernelyyPiS_yy", "_Z10kernel_npmyyPiS_yy", 0, 6, 0UL, 0UL, (17130708580749872281UL + 345UL), (17130708580749872281UL + 345UL), 0UL, 0UL, 0UL, 0,
                            "clear_whitespaces_do_mapping", 0, "_Z28clear_whitespaces_do_mappingPal", "_Z32clear_whitespaces_do_mapping_npmPal", 0, 2, (17130708580749872281UL + 131UL), 0UL, 0UL, 1, "char_mapping", 1, 0UL, 0UL,
                            "char_mapping", 0, "_Z12char_mappingc", "_Z16char_mapping_npmc", 0, 1, 0UL, 0UL, 0,
                            "read_file", 0, "_Z9read_fileP8_IO_FILEPm", "_Z13read_file_npmP8_IO_FILEPm", 0, 2, (17130708580749872281UL + 177UL), (17130708580749872281UL + 178UL), (17130708580749872281UL + 155UL), 6, "fseek", 3, (17130708580749872281UL + 177UL), 0UL, 0UL, 0UL, "ftell", 1, (17130708580749872281UL + 177UL), 0UL, "fseek", 3, (17130708580749872281UL + 177UL), 0UL, 0UL, 0UL, "malloc", 1, 0UL, (17130708580749872281UL + 155UL), "fread", 4, (17130708580749872281UL + 155UL), 0UL, 0UL, (17130708580749872281UL + 177UL), 0UL, "clear_whitespaces_do_mapping", 2, (17130708580749872281UL + 155UL), 0UL, 0UL,
                            "random_init", 1, (void *)(&random_init_npm), (void *)__null, 0, 2, (17130708580749872281UL + 629UL), 0UL, 0UL, 2, "rand", 0, 0UL, "__assert_fail", 4, (17130708580749872281UL + 660UL), (17130708580749872281UL + 652UL), 0UL, (17130708580749872281UL + 657UL), 0UL,
                            "print_matrix", 0, "_Z12print_matrixPPiii", "_Z16print_matrix_npmPPiii", 0, 3, (17130708580749872281UL + 80UL), 0UL, 0UL, 0UL, 3, "fprintf", 3, (17130708580749872281UL + 54UL), (17130708580749872281UL + 645UL), 0UL, 0UL, "fprintf", 2, (17130708580749872281UL + 54UL), (17130708580749872281UL + 646UL), 0UL, "fprintf", 2, (17130708580749872281UL + 54UL), (17130708580749872281UL + 647UL), 0UL,
                           "kernel", &(____chimes_does_checkpoint_kernel_npm),
                           "clear_whitespaces_do_mapping", &(____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm),
                           "char_mapping", &(____chimes_does_checkpoint_char_mapping_npm),
                           "read_file", &(____chimes_does_checkpoint_read_file_npm),
                           "random_init", &(____chimes_does_checkpoint_random_init_npm),
                           "print_matrix", &(____chimes_does_checkpoint_print_matrix_npm),
                             (17130708580749872281UL + 586UL), (17130708580749872281UL + 389UL),
                             (17130708580749872281UL + 202UL), (17130708580749872281UL + 345UL),
                             (17130708580749872281UL + 597UL), (17130708580749872281UL + 629UL),
                             (17130708580749872281UL + 350UL), (17130708580749872281UL + 586UL),
                             (17130708580749872281UL + 191UL), (17130708580749872281UL + 345UL),
                             (17130708580749872281UL + 29UL), (17130708580749872281UL + 80UL),
                             (17130708580749872281UL + 190UL), (17130708580749872281UL + 345UL),
                             (17130708580749872281UL + 133UL), (17130708580749872281UL + 177UL),
                             (17130708580749872281UL + 642UL), (17130708580749872281UL + 247UL),
                             (17130708580749872281UL + 353UL), (17130708580749872281UL + 486UL),
                             (17130708580749872281UL + 136UL), (17130708580749872281UL + 155UL),
                             (17130708580749872281UL + 134UL), (17130708580749872281UL + 178UL),
                             (17130708580749872281UL + 80UL), (17130708580749872281UL + 61UL),
                             (17130708580749872281UL + 138UL), (17130708580749872281UL + 155UL),
                             (17130708580749872281UL + 644UL), (17130708580749872281UL + 54UL),
                             (17130708580749872281UL + 85UL), (17130708580749872281UL + 131UL),
                     "Nucleotide", 32UL, 0,
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "kernel", "_Z6kernelyyPiS_yy", 0, 0,
                             "clear_whitespaces_do_mapping", "_Z28clear_whitespaces_do_mappingPal", 0, 1, "char_mapping",
                             "char_mapping", "_Z12char_mappingc", 0, 0,
                             "read_file", "_Z9read_fileP8_IO_FILEPm", 0, 1, "clear_whitespaces_do_mapping",
                             "random_init", "_ZL11random_initPay", 0, 0,
                             "print_matrix", "_Z12print_matrixPPiii", 0, 0,
                             "main", "main", 0, 4, "random_init", "random_init", "kernel", "checkpoint",
        "char_mapping", 0UL, (int)1, 0UL,
        "clear_whitespaces_do_mapping", 0UL, (int)2, 17130708580749872436UL, 0UL,
        "random_init", 0UL, (int)2, 17130708580749872528UL, 0UL,
        "random_init", 0UL, (int)2, 17130708580749872528UL, 0UL,
        "kernel", 0UL, (int)6, 0UL, 0UL, 17130708580749872767UL, 17130708580749872767UL, 0UL, 0UL);
    register_global_var("global|string_1", "i8*", (void *)(&string_1), 8, 1, 0, (17130708580749872281UL + 642UL), 0);
    register_global_var("global|string_2", "i8*", (void *)(&string_2), 8, 1, 0, (17130708580749872281UL + 642UL), 0);
    register_global_var("global|alignment_score_matrix", "[5 x [5 x i8]]", (void *)(&alignment_score_matrix), 25, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
