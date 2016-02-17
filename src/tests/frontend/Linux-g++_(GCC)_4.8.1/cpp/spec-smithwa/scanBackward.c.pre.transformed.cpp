# 1 "scanBackward.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "scanBackward.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_copyStringR_npm = 1;
static int ____chimes_does_checkpoint_tracePathR_npm = 1;
static int ____chimes_does_checkpoint_scanBackward_npm = 1;
static int ____chimes_does_checkpoint_doScan_npm = 1;
static int ____chimes_does_checkpoint_freeB_npm = 1;
static int ____chimes_does_checkpoint_gridInfo_npm = 1;

static int ____must_checkpoint_scanBackward_A_0 = 2;
static int ____must_checkpoint_scanBackward_maxReports_0 = 2;
static int ____must_checkpoint_scanBackward_minSeparation_0 = 2;
static int ____must_checkpoint_scanBackward_maxDoublings_0 = 2;
static int ____must_checkpoint_scanBackward_bestR_0 = 2;
static int ____must_checkpoint_scanBackward_matchLimit_0 = 2;
static int ____must_checkpoint_scanBackward_npRow_0 = 2;
static int ____must_checkpoint_scanBackward_npCol_0 = 2;
static int ____must_checkpoint_scanBackward_myRow_0 = 2;
static int ____must_checkpoint_scanBackward_myCol_0 = 2;
static int ____must_checkpoint_scanBackward_B_0 = 2;
static int ____must_checkpoint_doScan_rsi_0 = 2;

static int ____must_manage_copyStringR = 2;
static int ____must_manage_doScan = 2;
static int ____must_manage_scanBackward = 2;
static int ____must_manage_tracePathR = 2;
static int ____must_manage_freeB = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
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
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 11 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
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
# 12 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c" 2
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
# 13 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c" 2
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
# 14 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
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
# 15 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c" 2
# 15 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"

# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h" 1
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
typedef struct simmat {
  char similarity[((64) + 1)][((64) + 1)];
  char aminoAcid[(((64) + 1) + 1)];
  char *bases;
  char *codon[(((64) + 1) + 1)];
  unsigned char encode[((64) + ((64) + 1))];
  unsigned char encode_first[((64) + ((64) + 1))];
  char hyphen, star;
  int exact, similar, dissimilar, gapStart, gapExtend, matchLimit;
} SIMMATRIX_T;







typedef struct seqdat {
  unsigned char *main, *match;
  int mainLen, matchLen, maxValidation;
} SEQDATA_T;







typedef struct astr {
  SEQDATA_T *seqData;
  SIMMATRIX_T *simMatrix;
  long long **goodScores;
  int numThreads, *numReports, **goodEndsI, **goodEndsJ;
} ASTR_T;







typedef struct bstr {
  long long **bestScores;
  int numThreads, *numReports;
  int **bestStartsI, **bestStartsJ, **bestEndsI, **bestEndsJ;
  unsigned char ***bestSeqsI, ***bestSeqsJ;
} BSTR_T;







typedef struct cstr {
  long long *finalScores;
  int numReports;
  int *finalStartsI, *finalStartsJ, *finalEndsI, *finalEndsJ;
  unsigned char **finalSeqsI, **finalSeqsJ;
} CSTR_T;
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
void getUserParameters(void);

SEQDATA_T *genScalData(unsigned int, SIMMATRIX_T*, int, int, int);

SEQDATA_T *freeSeqData(SEQDATA_T*);

SIMMATRIX_T *genSimMatrix(int, int, int, int, int, int, int);

SIMMATRIX_T *freeSimMatrix(SIMMATRIX_T*);

void verifyData(SIMMATRIX_T*, SEQDATA_T*, int, int);

int gridInfo(int*, int*, int*, int*);

void qSort(int*, const int*, const int, const int);

void qSort_both(long long*, int*, const long long*, const int);

ASTR_T *pairwiseAlign(SEQDATA_T*, SIMMATRIX_T*, int, int, int);

ASTR_T *freeA(ASTR_T*);

BSTR_T *scanBackward(ASTR_T*, int, int, int);

BSTR_T *freeB(BSTR_T*);

void verifyAlignment(SIMMATRIX_T*, BSTR_T*, int);

CSTR_T *mergeAlignment(BSTR_T*, int, int);

CSTR_T *freeC(CSTR_T*);

void verifyMergeAlignment(SIMMATRIX_T*, CSTR_T*, int);

double getSeconds(void);

void dispElapsedTime(double);
# 17 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c" 2
# 17 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 18 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 19 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 20 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
unsigned char *copyStringR_npm(const unsigned char *inpString);
unsigned char *copyStringR_quick(const unsigned char *inpString); unsigned char *copyStringR(const unsigned char *inpString);
unsigned char *copyStringR_resumable(const unsigned char *inpString) {const int ____chimes_did_disable0 = new_stack((void *)(&copyStringR), "copyStringR", &____must_manage_copyStringR, 1, 0, (size_t)(5254463157148589701UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 21 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 22 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int c; ;
# 23 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char *outString; ;
# 24 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 25 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ( c = strlen( (char*)inpString ) ) <= 0 ) {
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("copyStringR: input string length = %d\n", c);
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 30 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 31 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 32 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 33 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ( outString = (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((c + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (c+1)*sizeof(unsigned char), 5254463157148589683UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 34 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 35 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("copyStringR: cannot allocate outString of length %d\n", c+1);
# 36 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 37 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 38 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 39 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 40 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 41 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 42 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  outString = (unsigned char*)strcpy( (char*)outString, (char*)inpString );
# 43 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   unsigned char *____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((outString)); rm_stack(true, 5254463157148589683UL, "copyStringR", &____must_manage_copyStringR, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 44 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(true, 5254463157148589683UL, "copyStringR", &____must_manage_copyStringR, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
static int tracePathR_npm(const ASTR_T *A, unsigned char **T, const int ei, const int ej, const int iBeg, const int jBeg, const int iEnd, const int jEnd, const unsigned char *mainSeq, const unsigned char *matchSeq, const int i, const int j, int dir, int threadNum, int *rsi, int *rsj, unsigned char *ri, unsigned char *rj);
static int tracePathR_quick(const ASTR_T *A, unsigned char **T, const int ei, const int ej, const int iBeg, const int jBeg, const int iEnd, const int jEnd, const unsigned char *mainSeq, const unsigned char *matchSeq, const int i, const int j, int dir, int threadNum, int *rsi, int *rsj, unsigned char *ri, unsigned char *rj); static int tracePathR(const ASTR_T *A, unsigned char **T, const int ei, const int ej, const int iBeg, const int jBeg, const int iEnd, const int jEnd, const unsigned char *mainSeq, const unsigned char *matchSeq, const int i, const int j, int dir, int threadNum, int *rsi, int *rsj, unsigned char *ri, unsigned char *rj);
static
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int tracePathR_resumable(const ASTR_T *A, unsigned char **T,
# 87 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int ei, const int ej,
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iBeg, const int jBeg,
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iEnd, const int jEnd,
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const unsigned char *mainSeq, const unsigned char *matchSeq,
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int i, const int j, int dir, int threadNum,
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        int *rsi, int *rsj,
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        unsigned char *ri, unsigned char *rj) {const int ____chimes_did_disable1 = new_stack((void *)(&tracePathR), "tracePathR", &____must_manage_tracePathR, 18, 0, (size_t)(5254463157148593345UL), (size_t)(5254463157148593346UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148593353UL), (size_t)(5254463157148593354UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148593359UL), (size_t)(5254463157148593360UL), (size_t)(5254463157148593361UL), (size_t)(5254463157148593362UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *ri = '\0';
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rj = '\0';
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (i == 0) || (j == 0) ) {
# 115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsi = i + 1;
# 116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsj = j + 1;
# 117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir == 0) || ( (dir & T[i][j]) != 0 ) ) {
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    dir = T[i][j] >> 2;
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (dir == 0) {
# 133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsi = 0;
# 134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsj = 0;
# 135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((-1)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_2; ;
# 141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ei - i + 1 < iBeg ) {
# 168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR i-underflow: ei-i+1 = %d  iBeg = %d\n", ei-i+1, iBeg);
# 169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((-2)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_3; ;
# 170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ei - i + 1 > iEnd ) {
# 172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR i-overflow: ei-i+1 = %d  iEnd = %d\n", ei-i+1, iEnd);
# 173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((-3)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_4; ;
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ej - j + 1 < jBeg ) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR j-underflow: ej-j+1 = %d  jBeg = %d\n", ej-j+1, jBeg);
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = ((-4)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_5; ;
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ej - j + 1 > jEnd ) {
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR j-overflow: ej-j+1 = %d  jEnd = %d\n", ej-j+1, jEnd);
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_6; ; ____chimes_ret_var_6 = ((-5)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_6; ;
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 193 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 193 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 4) != 0) {
# 194 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_0: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i-1, j-1, 0, threadNum, rsi, rsj, ++ri, ++rj); });
# 198 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 199 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 200 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = mainSeq[ei - iBeg - i + 2];
# 201 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = matchSeq[ej - jBeg - j + 2];
# 202 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_7; ;
# 203 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 204 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 2) != 0) {
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_1: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i-1, j, 2, threadNum, rsi, rsj, ++ri, ++rj); });
# 211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = mainSeq[ei - iBeg - i + 2];
# 214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = A->simMatrix->hyphen;
# 215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_8; ;
# 216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 1) != 0) {
# 220 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_2: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i, j-1, 1, threadNum, rsi, rsj, ++ri, ++rj); });
# 224 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 225 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 226 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = A->simMatrix->hyphen;
# 227 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = matchSeq[ej - jBeg - j + 2];
# 228 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_9; ;
# 229 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 230 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 231 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 232 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 233 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 234 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 235 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 236 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 237 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rsi = 0;
# 238 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rsj = 0;
# 239 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 240 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 241 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 242 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 243 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 244 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   int ____chimes_ret_var_10; ; ____chimes_ret_var_10 = ((-1)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_10; ;
# 245 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); }
# 319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
static int doScan_npm(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej, const unsigned char *mainSeq, const unsigned char *matchSeq, char **weights, const int gapFirst, const int gapExtend, const int minSeparation, const int report, const long long goal, const int iBeg, const int jBeg, const int iFin, const int jFin, const int iEnd, const int jEnd, const int threadNum, int *bestR, int *bestStartsI, int *bestStartsJ, int *bestEndsI, int *bestEndsJ, unsigned char **bestSeqsI, unsigned char **bestSeqsJ, long long *bestScores);
static int doScan_quick(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej, const unsigned char *mainSeq, const unsigned char *matchSeq, char **weights, const int gapFirst, const int gapExtend, const int minSeparation, const int report, const long long goal, const int iBeg, const int jBeg, const int iFin, const int jFin, const int iEnd, const int jEnd, const int threadNum, int *bestR, int *bestStartsI, int *bestStartsJ, int *bestEndsI, int *bestEndsJ, unsigned char **bestSeqsI, unsigned char **bestSeqsJ, long long *bestScores); static int doScan(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej, const unsigned char *mainSeq, const unsigned char *matchSeq, char **weights, const int gapFirst, const int gapExtend, const int minSeparation, const int report, const long long goal, const int iBeg, const int jBeg, const int iFin, const int jFin, const int iEnd, const int jEnd, const int threadNum, int *bestR, int *bestStartsI, int *bestStartsJ, int *bestEndsI, int *bestEndsJ, unsigned char **bestSeqsI, unsigned char **bestSeqsJ, long long *bestScores);
static
# 320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int doScan_resumable(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej,
# 321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const unsigned char *mainSeq, const unsigned char *matchSeq,
# 322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    char **weights, const int gapFirst, const int gapExtend,
# 323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int minSeparation, const int report, const long long goal,
# 324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iBeg, const int jBeg,
# 325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iFin, const int jFin,
# 326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iEnd, const int jEnd,
# 327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int threadNum,
# 328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestR, int *bestStartsI, int *bestStartsJ,
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestEndsI, int *bestEndsJ,
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    unsigned char **bestSeqsI, unsigned char **bestSeqsJ,
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    long long *bestScores) {const int ____chimes_did_disable2 = new_stack((void *)(&doScan), "doScan", &____must_manage_doScan, 28, 0, (size_t)(5254463157148592391UL), (size_t)(5254463157148592392UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148592396UL), (size_t)(5254463157148592397UL), (size_t)(5254463157148592398UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148592411UL), (size_t)(5254463157148591930UL), (size_t)(5254463157148591939UL), (size_t)(5254463157148592414UL), (size_t)(5254463157148592415UL), (size_t)(5254463157148592416UL), (size_t)(5254463157148592417UL), (size_t)(5254463157148592418UL)) ; int rsi;
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (____must_checkpoint_doScan_rsi_0) { register_stack_vars(1, "doScan|rsi|0", &____must_checkpoint_doScan_rsi_0, "i32", (void *)(&rsi), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i; int j; int r; int v; int m; int e; int f; int di; int dj; int fi; int fj; int li; int lj; int rsj; ;
# 334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  long long **V; long long *E; long long *F; long long G; long long s; ;
# 335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ei < iBeg) {
# 339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_11; ; ____chimes_ret_var_11 = ((-16)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_11; ;
# 344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ei > iEnd) {
# 347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_12; ; ____chimes_ret_var_12 = ((-17)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_12; ;
# 352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ej < jBeg) {
# 355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_13; ; ____chimes_ret_var_13 = ((-18)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_13; ;
# 360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ej > jEnd) {
# 363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_14; ; ____chimes_ret_var_14 = ((-19)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_14; ;
# 368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  m = ( (ei - iBeg + 1 > ej - jBeg + 1) ? ei - iBeg + 1 : ej - jBeg + 1 );
# 373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 377 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 378 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 379 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (V = (long long**) ({ void *____chimes_tmp_ptr = malloc((3 * sizeof(long long *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, 3 * sizeof(long long*), 5254463157148591405UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 380 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate V for thread %d\n", threadNum);
# 381 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 382 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 383 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 384 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 385 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 386 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 1; i <= 2; i++) {
# 387 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    V[i] = (long long *) ({ void *____chimes_tmp_ptr = malloc(((m + 2) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m+2) * sizeof(long long), 5254463157148591734UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 388 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    for (j = 1; j <= m+1; j++) {
# 389 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      V[i][j] = (0XB000000000000000L);
# 390 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 391 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 392 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 393 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 394 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 395 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 396 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 397 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 398 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (E = (long long*) ({ void *____chimes_tmp_ptr = malloc(((m + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m+1) * sizeof(long long), 5254463157148592217UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 399 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate E for thread %d\n", threadNum);
# 400 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 406 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (F = (long long *) ({ void *____chimes_tmp_ptr = malloc(((m + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m+1) * sizeof(long long), 5254463157148592222UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 407 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate F for thread %d\n", threadNum);
# 408 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 409 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 410 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 411 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 412 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 413 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 414 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 1; i <= m; i++) {
# 415 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    E[i] = F[i] = (0XB000000000000000L);
# 416 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 418 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 419 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 420 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  s = (long long)weights[ mainSeq[ei-iBeg+1] ] [ matchSeq[ej-jBeg+1] ];
# 421 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 422 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (s == goal) {
# 423 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 424 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 425 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 426 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_15; ; ____chimes_ret_var_15 = ((-2)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_15; ;
# 433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  V[1][2] = s;
# 438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  E[1] = F[1] = s - gapFirst;
# 439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  T[1][1] = 16+3;
# 440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  fj = ej - 1;
# 442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  fi = ei;
# 443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  lj = ej;
# 444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  v = 2;
# 445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  while (fi > 0) {
# 446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    dj = fj;
# 447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    di = fi;
# 448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    e = ei - di + 1;
# 449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    f = ej - dj + 1;
# 450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    while ( (dj < lj+1) &&
# 452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (di >= iBeg) && (di <= iEnd) &&
# 453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (dj >= jBeg) && (dj <= jEnd) &&
# 454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (e >= 1) && (e <= m) && (f >= 1) && (f <= m) ) {
# 455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      G =
# 462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (long long)weights[mainSeq[di-iBeg+1]][matchSeq[dj-jBeg+1]] + V[v][f];
# 463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      s = ( (E[e] > ( (F[f] > G) ? F[f] : G )) ? E[e] : ( (F[f] > G) ? F[f] : G ) );
# 467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      V[v][f+1] = s;
# 468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (s > 0) {
# 472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_16; ; ____chimes_ret_var_16 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_16; ;
# 486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_17; ; ____chimes_ret_var_17 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_17; ;
# 499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 T[e][f] = (unsigned char)( 4*(s == E[e]) + 8*(s == F[f]) + 16*(s == G) );
# 502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      } else {
# 521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 522 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 523 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_18; ; ____chimes_ret_var_18 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_18; ;
# 532 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 533 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 534 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 535 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 536 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 537 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 538 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 539 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 540 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 541 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 542 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 543 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 544 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_19; ; ____chimes_ret_var_19 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_19; ;
# 545 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 546 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 T[e][f] = 0;
# 548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (s == goal) {
# 559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (r = 1; r <= *bestR; r++) {
# 560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( ( (abs(di - bestStartsI[r]) > abs(dj - bestStartsJ[r])) ? abs(di - bestStartsI[r]) : abs(dj - bestStartsJ[r]) )
# 561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
                                 < minSeparation ) {
# 562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      int ____chimes_ret_var_20; ; ____chimes_ret_var_20 = ((-10)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_20; ;
# 572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (di > iFin) || (dj > jFin) ) {
# 576 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 577 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 578 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 579 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 580 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 581 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 582 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 583 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 585 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_21; ; ____chimes_ret_var_21 = ((-11)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_21; ;
# 586 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 597 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 598 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 599 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 600 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 601 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 602 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 603 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 604 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 605 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 606 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_22; ; ____chimes_ret_var_22 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_22; ;
# 607 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 608 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 609 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 610 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 611 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 612 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 613 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 614 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 615 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 616 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 617 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 618 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 619 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_23; ; ____chimes_ret_var_23 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_23; ;
# 620 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 621 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  call_lbl_0: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, e, f, 0, threadNum, &rsi, &rsj, bestSeqsI[*bestR+1], bestSeqsJ[*bestR+1]); });
# 625 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (rsi <= 0) && (rsj <= 0) ) {
# 626 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 627 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 628 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 629 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 630 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 631 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 632 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 633 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 634 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 635 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 636 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 637 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 638 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_24; ; ____chimes_ret_var_24 = ((-14)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_24; ;
# 639 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (*bestR)++;
# 650 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsI[*bestR] = di;
# 651 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsJ[*bestR] = dj;
# 652 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestEndsI[*bestR] = ei;
# 653 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestEndsJ[*bestR] = ej;
# 654 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestScores[*bestR] = goal;
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 668 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 669 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 670 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 671 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 672 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int ____chimes_ret_var_25; ; ____chimes_ret_var_25 = ((0)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_25; ;
# 673 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 674 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 675 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 676 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 677 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      s -= gapFirst;
# 678 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 679 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 680 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      E[e] = ( (E[e] - gapExtend > s) ? E[e] - gapExtend : s );
# 682 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 683 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 684 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 685 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      F[f] = ( (F[f] - gapExtend > s) ? F[f] - gapExtend : s );
# 686 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 687 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 688 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 689 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 690 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 691 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 692 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 693 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 694 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 695 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 696 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 697 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 698 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 699 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_26; ; ____chimes_ret_var_26 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_26; ;
# 700 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 701 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 702 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 703 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 704 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 706 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 707 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 708 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 709 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 710 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 711 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 712 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_27; ; ____chimes_ret_var_27 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_27; ;
# 713 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 714 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 715 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      T[e][f] += (unsigned char)( (E[e] == s) + 2 * (F[f] == s) );
# 716 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 717 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      dj += 1;
# 718 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      di -= 1;
# 719 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      e += 1;
# 720 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      f -= 1;
# 721 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 722 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 723 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 724 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 725 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    v = 3 - v;
# 726 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 727 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (fj != 1) {
# 728 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      fj -= 1;
# 729 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    } else {
# 730 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      fi -= 1;
# 731 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 732 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 733 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 734 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 735 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 736 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 737 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 739 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 740 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 741 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 742 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 743 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 744 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 745 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   int ____chimes_ret_var_28; ; ____chimes_ret_var_28 = ((-15)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_28; ;
# 746 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); }
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
BSTR_T *scanBackward_npm(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings);static int (*____chimes_extern_func_gridInfo)(int *, int *, int *, int *) = gridInfo;
BSTR_T *scanBackward_quick(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings); BSTR_T *scanBackward(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings);
BSTR_T *scanBackward_resumable(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings) {const int ____chimes_did_disable3 = new_stack((void *)(&scanBackward), "scanBackward", &____must_manage_scanBackward, 4, 4, (size_t)(5254463157148590460UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "scanBackward|A|0", &____must_checkpoint_scanBackward_A_0, "%struct.astr*", (void *)(&A), (size_t)8, 1, 0, 0, "scanBackward|maxReports|0", &____must_checkpoint_scanBackward_maxReports_0, "i32", (void *)(&maxReports), (size_t)4, 0, 0, 0, "scanBackward|minSeparation|0", &____must_checkpoint_scanBackward_minSeparation_0, "i32", (void *)(&minSeparation), (size_t)4, 0, 0, 0, "scanBackward|maxDoublings|0", &____must_checkpoint_scanBackward_maxDoublings_0, "i32", (void *)(&maxDoublings), (size_t)4, 0, 0, 0) ; BSTR_T *B;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int myCol;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int myRow;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int npCol;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int npRow;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int matchLimit;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int bestR;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (____must_checkpoint_scanBackward_B_0 || ____must_checkpoint_scanBackward_myCol_0 || ____must_checkpoint_scanBackward_myRow_0 || ____must_checkpoint_scanBackward_npCol_0 || ____must_checkpoint_scanBackward_npRow_0 || ____must_checkpoint_scanBackward_matchLimit_0 || ____must_checkpoint_scanBackward_bestR_0) { register_stack_vars(7, "scanBackward|B|0", &____must_checkpoint_scanBackward_B_0, "%struct.bstr*", (void *)(&B), (size_t)8, 1, 0, 0, "scanBackward|myCol|0", &____must_checkpoint_scanBackward_myCol_0, "i32", (void *)(&myCol), (size_t)4, 0, 0, 0, "scanBackward|myRow|0", &____must_checkpoint_scanBackward_myRow_0, "i32", (void *)(&myRow), (size_t)4, 0, 0, 0, "scanBackward|npCol|0", &____must_checkpoint_scanBackward_npCol_0, "i32", (void *)(&npCol), (size_t)4, 0, 0, 0, "scanBackward|npRow|0", &____must_checkpoint_scanBackward_npRow_0, "i32", (void *)(&npRow), (size_t)4, 0, 0, 0, "scanBackward|matchLimit|0", &____must_checkpoint_scanBackward_matchLimit_0, "i32", (void *)(&matchLimit), (size_t)4, 0, 0, 0, "scanBackward|bestR|0", &____must_checkpoint_scanBackward_bestR_0, "i32", (void *)(&bestR), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 816 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 817 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i; int j; int m; int n; int r; int c; int sizeT; int ei; int ej; int doublings; ;
# 818 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int gapStart; int gapExtend; int gapFirst; int maxThreads; int threadNum; int myTaskID; ;
# 819 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      int iBeg; int jBeg; int iFin; int jFin; int iEnd; int jEnd; ;
# 820 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int *bestStartsI; int *bestStartsJ; int *bestEndsI; int *bestEndsJ; ;
# 821 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char *mainSeq; unsigned char *matchSeq; unsigned char **T; ;
# 822 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char **bestSeqsI; unsigned char **bestSeqsJ; ;
# 823 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  long long *bestScores; long long goal; ;
# 824 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  char **weights; char hyphen; ;
# 825 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     B = (__null) ;
# 834 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 834 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  maxThreads = A->numThreads;
# 835 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 836 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 837 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 838 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 839 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 840 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 841 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  matchLimit = A->simMatrix->matchLimit;
# 842 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 843 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 845 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B = (BSTR_T*) ({ void *____chimes_tmp_ptr = malloc((sizeof(BSTR_T)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(BSTR_T), 5254463157148593410UL, 0, 1, (int)sizeof(struct bstr), 8, (int)__builtin_offsetof(struct bstr, bestScores), (int)__builtin_offsetof(struct bstr, numReports), (int)__builtin_offsetof(struct bstr, bestStartsI), (int)__builtin_offsetof(struct bstr, bestStartsJ), (int)__builtin_offsetof(struct bstr, bestEndsI), (int)__builtin_offsetof(struct bstr, bestEndsJ), (int)__builtin_offsetof(struct bstr, bestSeqsI), (int)__builtin_offsetof(struct bstr, bestSeqsJ)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 846 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B\n");
# 847 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 848 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 849 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 850 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 851 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 852 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numThreads = 0;
# 853 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numReports = __null;
# 854 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestScores = __null;
# 855 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestStartsI = B->bestStartsJ = __null;
# 856 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestEndsI = B->bestEndsJ = __null;
# 857 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestSeqsI = B->bestSeqsJ = __null;
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numThreads = A->numThreads;
# 867 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->numReports = (int*) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 868 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->numReports\n");
# 869 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 870 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 871 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 872 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 873 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 874 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 875 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestScores =
# 876 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (long long**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(long long *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(long long*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 877 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestScores\n");
# 878 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 879 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 880 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 881 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 882 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 883 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 884 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestStartsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 885 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestStartsI\n");
# 886 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 887 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 888 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 889 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 890 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 891 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 892 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestStartsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 893 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestStartsJ\n");
# 894 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 895 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 896 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 897 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 898 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 899 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 900 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestEndsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 901 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestEndsI\n");
# 902 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 903 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 904 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 905 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 906 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 907 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 908 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestEndsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 909 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestEndsJ\n");
# 910 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 912 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 913 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 914 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 915 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 916 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestSeqsI =
# 917 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (unsigned char***) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(unsigned char **)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(unsigned char**), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 918 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 919 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestSeqsI\n");
# 920 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 921 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 922 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 923 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 924 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 925 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 926 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestSeqsJ =
# 927 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (unsigned char***) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(unsigned char **)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(unsigned char**), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 928 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 929 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestSeqsJ\n");
# 930 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 931 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 932 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 933 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 934 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 935 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 936 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 0; i < maxThreads; i++) {
# 937 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->numReports[i] = 0;
# 938 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestScores[i] = __null;
# 939 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestStartsI[i] = B->bestStartsJ[i] = __null;
# 940 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestEndsI[i] = B->bestEndsJ[i] = __null;
# 941 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestSeqsI[i] = B->bestSeqsJ[i] = __null;
# 942 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
#pragma omp parallel firstprivate(maxReports, matchLimit, minSeparation) private (i, j, m, n, r, c, npRow, npCol, myRow, myCol, weights, iBeg, jBeg, iFin, jFin, iEnd, jEnd, doublings, hyphen, gapStart, gapExtend, gapFirst, sizeT, bestR, goal, ei, ej, T, bestScores, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, mainSeq, matchSeq, threadNum, myTaskID)
# 958 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 959 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 960 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 961 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 962 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 963 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 964 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  {
# 965 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 966 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 967 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 968 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_0: ({ calling((void*)gridInfo, 0, ____alias_loc_id_0, 0UL, 4, (size_t)(5254463157148589732UL), (size_t)(5254463157148589733UL), (size_t)(5254463157148589734UL), (size_t)(5254463157148589735UL)); (gridInfo)(&npRow, &npCol, &myRow, &myCol); }) ;
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    threadNum = 0;
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    myTaskID = threadNum;
# 991 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 992 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 993 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 994 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 995 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (myRow >= 0 && myCol >= 0) {
# 996 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 997 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 998 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 999 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      hyphen = A->simMatrix->hyphen;
# 1000 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapStart = A->simMatrix->gapStart;
# 1001 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapExtend = A->simMatrix->gapExtend;
# 1002 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapFirst = gapStart + gapExtend;
# 1014 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1014 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestScores = (long long*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(long long), 5254463157148590161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1015 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1016 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestScores for thread %d\n",
# 1017 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1018 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1019 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1020 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1021 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1022 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1023 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestStartsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590181UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1025 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestStartsI for thread %d\n",
# 1026 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1027 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1028 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1029 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1030 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1031 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1032 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1033 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestStartsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590176UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1034 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestStartsJ for thread %d\n",
# 1035 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1036 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1037 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1038 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1039 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1040 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1041 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1042 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestEndsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590171UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1043 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestEndsI for thread %d\n",
# 1044 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1045 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1046 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1047 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1048 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1049 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1050 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1051 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestEndsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590166UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1052 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestEndsJ for thread %d\n",
# 1053 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1054 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1055 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1056 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1057 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1058 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1059 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1060 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestSeqsI =
# 1061 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(unsigned char*), 5254463157148590191UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1062 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1063 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestSeqsI for thread %d\n",
# 1064 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1065 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1066 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1067 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1068 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1069 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1070 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1071 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       if ( (bestSeqsJ =
# 1072 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(unsigned char*), 5254463157148590936UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1073 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1074 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestSeqsJ for thread %d\n",
# 1075 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1076 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1077 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1078 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1079 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1080 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1081 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1082 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= maxReports; i++) {
# 1083 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestScores[i] = 0L;
# 1084 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsI[i] = bestStartsJ[i] = bestEndsI[i] = bestEndsJ[i] = 0;
# 1085 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1086 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (bestSeqsI[i] =
# 1087 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((matchLimit + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (matchLimit+1)*sizeof(unsigned char), 5254463157148590188UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1088 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate bestSeqsI[%d] for thread %d\n",
# 1090 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1091 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1092 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1093 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1094 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1095 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1096 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1097 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (bestSeqsJ[i] =
# 1098 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((matchLimit + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (matchLimit+1)*sizeof(unsigned char), 5254463157148590938UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1099 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate bestSeqsJ[%d] for thread %d\n",
# 1101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      n = A->seqData->mainLen;
# 1127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      m = A->seqData->matchLen;
# 1128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iBeg = 1 + (n*myRow)/npRow;
# 1130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jBeg = 1 + (m*myCol)/npCol;
# 1131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iFin = (n*(myRow+1))/npRow;
# 1133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jFin = (m*(myCol+1))/npCol;
# 1134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iEnd = ( (n < iFin + matchLimit - 1) ? n : iFin + matchLimit - 1 );
# 1136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jEnd = ( (m < jFin + matchLimit - 1) ? m : jFin + matchLimit - 1 );
# 1137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (mainSeq =
# 1144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((iEnd - iBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (iEnd - iBeg + 2) * sizeof(unsigned char), 5254463157148590301UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 == __null ) {
# 1146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate mainSeq for thread %d\n",
# 1147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = iBeg; i <= iEnd; i++) {
# 1152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 mainSeq[i - iBeg + 1] = A->seqData->main[i];
# 1153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (matchSeq =
# 1156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(unsigned char), 5254463157148590373UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null) {
# 1158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate matchSeq for thread %d\n",
# 1159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (j = jBeg; j <= jEnd; j++) {
# 1164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 matchSeq[j - jBeg + 1] = A->seqData->match[j];
# 1165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (weights = (char**) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1) * sizeof(char*), 5254463157148590398UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate weights for thread %d\n",
# 1175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (weights[i] = (char*) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1) * sizeof(char), 5254463157148590395UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("locateSimilar: cannot allocates weights[%d] for thread %d\n",
# 1186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1188 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j < ((64) + 1); j++) {
# 1189 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   weights[i][j] = A->simMatrix->similarity[i][j];
# 1190 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1191 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      sizeT = ( (A->simMatrix->matchLimit > A->seqData->maxValidation) ? A->simMatrix->matchLimit : A->seqData->maxValidation );
# 1206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      doublings = 0;
# 1207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1208 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    retry:
# 1209 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (T = (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((sizeT + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sizeT+1) * sizeof(unsigned char*), 5254463157148590496UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1210 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate T for thread %d\n", myTaskID);
# 1212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= sizeT; i++) {
# 1219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (T[i] = (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((sizeT + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sizeT+1)*sizeof(unsigned char), 5254463157148590493UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1220 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1221 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate T[%d] for thread %d\n",
# 1222 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1223 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1224 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1225 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1226 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1227 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1228 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1229 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j <= sizeT; j++) {
# 1230 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   T[i][j] = 0;
# 1231 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1232 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1233 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1234 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1235 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1236 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      bestR = 0;
# 1237 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (r = 1; r <= A->numReports[threadNum]; r++) {
# 1238 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 goal = A->goodScores[threadNum][r];
# 1239 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 ei = A->goodEndsI[threadNum][r];
# 1240 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 ej = A->goodEndsJ[threadNum][r];
# 1241 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i <= sizeT; i++) {
# 1242 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= sizeT; j++) {
# 1243 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     T[i][j] = 0;
# 1244 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1245 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1246 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1247 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1248 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1249 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  call_lbl_1: if ( ({ calling_npm("doScan", 0); doScan_npm(A, T, sizeT, ei, ej, mainSeq, matchSeq, weights, gapFirst, gapExtend, minSeparation, r, goal, iBeg, jBeg, iFin, jFin, iEnd, jEnd, myTaskID, &bestR, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, bestScores); }) == -1 ) {
# 1254 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1255 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1256 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1257 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if (doublings >= maxDoublings) {
# 1258 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     printf("\tscanBackward: sequence %d dropped for thread %d\n",
# 1259 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     r, myTaskID);
# 1260 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   } else {
# 1261 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1262 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1263 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1264 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     for (i = 1; i <= sizeT; i++) {
# 1265 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)T[i]) - sizeof(void *)), 5254463157148590493UL);free((((unsigned char *)T[i]) - sizeof(void *))); }) ;
# 1266 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1267 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)T) - sizeof(void *)), 5254463157148590496UL);free((((unsigned char *)T) - sizeof(void *))); }) ;
# 1268 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     sizeT *= 2;
# 1269 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1270 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1271 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1272 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1273 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     doublings++;
# 1274 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     goto retry;
# 1275 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1276 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1279 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1280 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (bestR == maxReports) {
# 1281 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   break;
# 1282 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1283 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->numReports[threadNum] = bestR;
# 1293 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1294 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1295 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1296 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (bestR != 0) {
# 1297 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestScores[threadNum] =
# 1298 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (long long*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR +1) * sizeof(long long), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1299 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestScores for thread %d\n",
# 1300 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1301 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1302 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1303 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1304 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1305 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1306 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1307 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestStartsI[threadNum] =
# 1308 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1309 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestStartsI for thread %d\n",
# 1310 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1311 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1312 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1313 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1314 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1315 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1316 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1317 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1318 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestStartsJ[threadNum] =
# 1319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestStartsJ for thread %d\n",
# 1321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestEndsI[threadNum] =
# 1330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestEndsI for thread %d\n",
# 1332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestEndsJ[threadNum] =
# 1341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestEndsJ for thread %d\n",
# 1343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestSeqsI[threadNum] =
# 1352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR + 1) * sizeof(unsigned char*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestSeqsI for thread %d\n",
# 1355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestSeqsJ[threadNum] =
# 1364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR + 1) * sizeof(unsigned char*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestSeqsJ for thread %d\n",
# 1367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1377 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j <= bestR; j++) {
# 1378 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestScores[threadNum][j] = bestScores[j];
# 1379 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsI[threadNum][j] = bestStartsI[j];
# 1380 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsJ[threadNum][j] = bestStartsJ[j];
# 1381 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsI[threadNum][j] = bestEndsI[j];
# 1382 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsJ[threadNum][j] = bestEndsJ[j];
# 1383 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    call_lbl_2: B->bestSeqsI[threadNum][j] = ({ calling_npm("copyStringR", 0); copyStringR_npm(bestSeqsI[j]); });
# 1384 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    call_lbl_3: B->bestSeqsJ[threadNum][j] = ({ calling_npm("copyStringR", 0); copyStringR_npm(bestSeqsJ[j]); });
# 1385 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1386 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1387 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1388 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1389 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI == __null) {
# 1390 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsI == NULL for thread %d\n",
# 1391 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1392 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1393 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1394 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1395 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1396 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1397 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1398 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI[threadNum] == __null) {
# 1399 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsI[%d] = NULL for thread\n",
# 1400 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   threadNum, myTaskID);
# 1401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1406 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1407 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 c = 0;
# 1408 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i < B->numReports[threadNum]; i++) {
# 1409 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( strlen( (char*)(B->bestSeqsI[threadNum][i]) ) < 1 ) {
# 1410 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     c++;
# 1411 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1412 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1413 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1414 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (c) {
# 1415 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: 0-length bestSeqsI strings %d of %d reports for thread %d\n",
# 1416 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   c, B->numReports[threadNum], myTaskID);
# 1417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1418 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1419 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ == __null) {
# 1420 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsJ == NULL for thread %d\n",
# 1421 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1422 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1423 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1424 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1425 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1426 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ[threadNum] == __null) {
# 1429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsJ[%d] = NULL for thread\n",
# 1430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   threadNum, myTaskID);
# 1431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 c = 0;
# 1438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i < B->numReports[threadNum]; i++) {
# 1439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( strlen( (char *)(B->bestSeqsJ[threadNum][i]) ) < 1 ) {
# 1440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     c++;
# 1441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (c) {
# 1444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: 0-length bestSeqsJ strings %d of %d reports for thread %d\n",
# 1445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   c, B->numReports[threadNum], myTaskID);
# 1446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestScores) - sizeof(void *)), 5254463157148590161UL);free((((unsigned char *)bestScores) - sizeof(void *))); }) ;
# 1452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestStartsI) - sizeof(void *)), 5254463157148590181UL);free((((unsigned char *)bestStartsI) - sizeof(void *))); }) ;
# 1453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestStartsJ) - sizeof(void *)), 5254463157148590176UL);free((((unsigned char *)bestStartsJ) - sizeof(void *))); }) ;
# 1454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestEndsI) - sizeof(void *)), 5254463157148590171UL);free((((unsigned char *)bestEndsI) - sizeof(void *))); }) ;
# 1455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestEndsJ) - sizeof(void *)), 5254463157148590166UL);free((((unsigned char *)bestEndsJ) - sizeof(void *))); }) ;
# 1456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= maxReports; i++) {
# 1458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)bestSeqsI[i]) - sizeof(void *)), 5254463157148590188UL);free((((unsigned char *)bestSeqsI[i]) - sizeof(void *))); }) ;
# 1459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)bestSeqsJ[i]) - sizeof(void *)), 5254463157148590938UL);free((((unsigned char *)bestSeqsJ[i]) - sizeof(void *))); }) ;
# 1460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestSeqsI) - sizeof(void *)), 5254463157148590191UL);free((((unsigned char *)bestSeqsI) - sizeof(void *))); }) ;
# 1463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestSeqsJ) - sizeof(void *)), 5254463157148590936UL);free((((unsigned char *)bestSeqsJ) - sizeof(void *))); }) ;
# 1464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)weights[i]) - sizeof(void *)), 5254463157148590395UL);free((((unsigned char *)weights[i]) - sizeof(void *))); }) ;
# 1467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)weights) - sizeof(void *)), 5254463157148590398UL);free((((unsigned char *)weights) - sizeof(void *))); }) ;
# 1469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= sizeT; i++) {
# 1471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)T[i]) - sizeof(void *)), 5254463157148590493UL);free((((unsigned char *)T[i]) - sizeof(void *))); }) ;
# 1472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)T) - sizeof(void *)), 5254463157148590496UL);free((((unsigned char *)T) - sizeof(void *))); }) ;
# 1474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)mainSeq) - sizeof(void *)), 5254463157148590301UL);free((((unsigned char *)mainSeq) - sizeof(void *))); }) ;
# 1476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)matchSeq) - sizeof(void *)), 5254463157148590373UL);free((((unsigned char *)matchSeq) - sizeof(void *))); }) ;
# 1477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 1479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   BSTR_T *____chimes_ret_var_29; ; ____chimes_ret_var_29 = ((B)); rm_stack(true, 5254463157148593410UL, "scanBackward", &____must_manage_scanBackward, ____alias_loc_id_2, ____chimes_did_disable3, false); return ____chimes_ret_var_29; ;
# 1481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(true, 5254463157148593410UL, "scanBackward", &____must_manage_scanBackward, ____alias_loc_id_2, ____chimes_did_disable3, false); }
# 1482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
BSTR_T *freeB_npm(BSTR_T *B);
BSTR_T *freeB_quick(BSTR_T *B); BSTR_T *freeB(BSTR_T *B);
BSTR_T *freeB_resumable(BSTR_T *B) {const int ____chimes_did_disable4 = new_stack((void *)(&freeB), "freeB", &____must_manage_freeB, 1, 0, (size_t)(5254463157148592932UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 1486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i; int j; ;
# 1488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (B) {
# 1490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestScores) {
# 1491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestScores[i]) {
# 1493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestScores[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestScores[i]) - sizeof(void *))); }) ;
# 1494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestScores[i] = __null;
# 1495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestScores) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestScores) - sizeof(void *))); }) ;
# 1498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestScores = __null;
# 1499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestStartsI) {
# 1501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestStartsI[i]) {
# 1503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestStartsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsI[i]) - sizeof(void *))); }) ;
# 1504 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsI[i] = __null;
# 1505 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1506 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1507 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestStartsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsI) - sizeof(void *))); }) ;
# 1508 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestStartsI = __null;
# 1509 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1510 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestStartsJ) {
# 1511 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1512 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestStartsJ[i]) {
# 1513 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestStartsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsJ[i]) - sizeof(void *))); }) ;
# 1514 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsJ[i] = __null;
# 1515 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1516 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1517 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestStartsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsJ) - sizeof(void *))); }) ;
# 1518 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestStartsJ = __null;
# 1519 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1520 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestEndsI) {
# 1521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1522 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestEndsI[i]) {
# 1523 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestEndsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsI[i]) - sizeof(void *))); }) ;
# 1524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsI[i] = __null;
# 1525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestEndsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsI) - sizeof(void *))); }) ;
# 1528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestEndsI = __null;
# 1529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestEndsJ) {
# 1531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1532 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestEndsJ[i]) {
# 1533 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestEndsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsJ[i]) - sizeof(void *))); }) ;
# 1534 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsJ[i] = __null;
# 1535 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1536 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1537 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestEndsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsJ) - sizeof(void *))); }) ;
# 1538 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestEndsJ = __null;
# 1539 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1540 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestSeqsI) {
# 1541 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1542 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI[i]) {
# 1543 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= B->numReports[i]; j++) {
# 1544 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     if (B->bestSeqsI[i][j]) {
# 1545 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)B->bestSeqsI[i][j]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI[i][j]) - sizeof(void *))); }) ;
# 1546 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       B->bestSeqsI[i][j] = __null;
# 1547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1549 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestSeqsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI[i]) - sizeof(void *))); }) ;
# 1550 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsI[i] = __null;
# 1551 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1552 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1553 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestSeqsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI) - sizeof(void *))); }) ;
# 1554 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestSeqsI = __null;
# 1555 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1556 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestSeqsJ) {
# 1557 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ[i]) {
# 1559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= B->numReports[i]; j++) {
# 1560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     if (B->bestSeqsJ[i][j]) {
# 1561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)B->bestSeqsJ[i][j]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ[i][j]) - sizeof(void *))); }) ;
# 1562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       B->bestSeqsJ[i][j] = __null;
# 1563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestSeqsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ[i]) - sizeof(void *))); }) ;
# 1566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsJ[i] = __null;
# 1567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestSeqsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ) - sizeof(void *))); }) ;
# 1570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestSeqsJ = __null;
# 1571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->numReports) {
# 1573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->numReports) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->numReports) - sizeof(void *))); }) ;
# 1574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->numReports = __null;
# 1575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1576 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)B) - sizeof(void *)), 5254463157148592932UL);free((((unsigned char *)B) - sizeof(void *))); }) ;
# 1577 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 1578 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   BSTR_T *____chimes_ret_var_30; ; ____chimes_ret_var_30 = ((__null)); rm_stack(true, 5254463157148593410UL, "freeB", &____must_manage_freeB, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_30; ;
# 1579 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(true, 5254463157148593410UL, "freeB", &____must_manage_freeB, ____alias_loc_id_4, ____chimes_did_disable4, false); }
# 20 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
unsigned char *copyStringR_quick(const unsigned char *inpString) {const int ____chimes_did_disable0 = new_stack((void *)(&copyStringR), "copyStringR", &____must_manage_copyStringR, 1, 0, (size_t)(5254463157148589701UL)) ; ; ;
# 21 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 22 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int c; ;
# 23 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char *outString; ;
# 24 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 25 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ( c = strlen( (char*)inpString ) ) <= 0 ) {
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("copyStringR: input string length = %d\n", c);
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 30 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 31 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 32 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 33 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ( outString = (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((c + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (c+1)*sizeof(unsigned char), 5254463157148589683UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 34 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 35 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("copyStringR: cannot allocate outString of length %d\n", c+1);
# 36 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 37 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 38 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 39 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 40 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 41 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 42 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  outString = (unsigned char*)strcpy( (char*)outString, (char*)inpString );
# 43 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   unsigned char *____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((outString)); rm_stack(true, 5254463157148589683UL, "copyStringR", &____must_manage_copyStringR, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 44 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(true, 5254463157148589683UL, "copyStringR", &____must_manage_copyStringR, ____alias_loc_id_1, ____chimes_did_disable0, false); }

unsigned char *copyStringR(const unsigned char *inpString) { return (____chimes_replaying ? copyStringR_resumable(inpString) : copyStringR_quick(inpString)); }
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
static
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int tracePathR_quick(const ASTR_T *A, unsigned char **T,
# 87 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int ei, const int ej,
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iBeg, const int jBeg,
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iEnd, const int jEnd,
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const unsigned char *mainSeq, const unsigned char *matchSeq,
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int i, const int j, int dir, int threadNum,
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        int *rsi, int *rsj,
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        unsigned char *ri, unsigned char *rj) {const int ____chimes_did_disable1 = new_stack((void *)(&tracePathR), "tracePathR", &____must_manage_tracePathR, 18, 0, (size_t)(5254463157148593345UL), (size_t)(5254463157148593346UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148593353UL), (size_t)(5254463157148593354UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148593359UL), (size_t)(5254463157148593360UL), (size_t)(5254463157148593361UL), (size_t)(5254463157148593362UL)) ; ; ;
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *ri = '\0';
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rj = '\0';
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (i == 0) || (j == 0) ) {
# 115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsi = i + 1;
# 116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsj = j + 1;
# 117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir == 0) || ( (dir & T[i][j]) != 0 ) ) {
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    dir = T[i][j] >> 2;
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (dir == 0) {
# 133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsi = 0;
# 134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsj = 0;
# 135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((-1)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_2; ;
# 141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ei - i + 1 < iBeg ) {
# 168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR i-underflow: ei-i+1 = %d  iBeg = %d\n", ei-i+1, iBeg);
# 169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((-2)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_3; ;
# 170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ei - i + 1 > iEnd ) {
# 172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR i-overflow: ei-i+1 = %d  iEnd = %d\n", ei-i+1, iEnd);
# 173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((-3)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_4; ;
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ej - j + 1 < jBeg ) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR j-underflow: ej-j+1 = %d  jBeg = %d\n", ej-j+1, jBeg);
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = ((-4)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_5; ;
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ej - j + 1 > jEnd ) {
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR j-overflow: ej-j+1 = %d  jEnd = %d\n", ej-j+1, jEnd);
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_6; ; ____chimes_ret_var_6 = ((-5)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_6; ;
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 193 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 193 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 4) != 0) {
# 194 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_0: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i-1, j-1, 0, threadNum, rsi, rsj, ++ri, ++rj); });
# 198 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 199 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 200 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = mainSeq[ei - iBeg - i + 2];
# 201 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = matchSeq[ej - jBeg - j + 2];
# 202 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_7; ;
# 203 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 204 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 2) != 0) {
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_1: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i-1, j, 2, threadNum, rsi, rsj, ++ri, ++rj); });
# 211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = mainSeq[ei - iBeg - i + 2];
# 214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = A->simMatrix->hyphen;
# 215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_8; ;
# 216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 1) != 0) {
# 220 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_2: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i, j-1, 1, threadNum, rsi, rsj, ++ri, ++rj); });
# 224 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 225 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 226 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = A->simMatrix->hyphen;
# 227 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = matchSeq[ej - jBeg - j + 2];
# 228 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = ((0)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_9; ;
# 229 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 230 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 231 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 232 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 233 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 234 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 235 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 236 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 237 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rsi = 0;
# 238 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rsj = 0;
# 239 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 240 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 241 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 242 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 243 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 244 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   int ____chimes_ret_var_10; ; ____chimes_ret_var_10 = ((-1)); rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_10; ;
# 245 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(false, 0UL, "tracePathR", &____must_manage_tracePathR, ____alias_loc_id_5, ____chimes_did_disable1, false); }

static
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int tracePathR(const ASTR_T *A, unsigned char **T,
# 87 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int ei, const int ej,
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iBeg, const int jBeg,
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iEnd, const int jEnd,
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const unsigned char *mainSeq, const unsigned char *matchSeq,
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int i, const int j, int dir, int threadNum,
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        int *rsi, int *rsj,
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        unsigned char *ri, unsigned char *rj) { return (____chimes_replaying ? tracePathR_resumable(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i, j, dir, threadNum, rsi, rsj, ri, rj) : tracePathR_quick(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i, j, dir, threadNum, rsi, rsj, ri, rj)); }
# 319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
static
# 320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int doScan_quick(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej,
# 321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const unsigned char *mainSeq, const unsigned char *matchSeq,
# 322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    char **weights, const int gapFirst, const int gapExtend,
# 323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int minSeparation, const int report, const long long goal,
# 324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iBeg, const int jBeg,
# 325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iFin, const int jFin,
# 326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iEnd, const int jEnd,
# 327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int threadNum,
# 328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestR, int *bestStartsI, int *bestStartsJ,
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestEndsI, int *bestEndsJ,
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    unsigned char **bestSeqsI, unsigned char **bestSeqsJ,
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    long long *bestScores) {const int ____chimes_did_disable2 = new_stack((void *)(&doScan), "doScan", &____must_manage_doScan, 28, 0, (size_t)(5254463157148592391UL), (size_t)(5254463157148592392UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148592396UL), (size_t)(5254463157148592397UL), (size_t)(5254463157148592398UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(5254463157148592411UL), (size_t)(5254463157148591930UL), (size_t)(5254463157148591939UL), (size_t)(5254463157148592414UL), (size_t)(5254463157148592415UL), (size_t)(5254463157148592416UL), (size_t)(5254463157148592417UL), (size_t)(5254463157148592418UL)) ; int rsi;
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (____must_checkpoint_doScan_rsi_0) { register_stack_vars(1, "doScan|rsi|0", &____must_checkpoint_doScan_rsi_0, "i32", (void *)(&rsi), (size_t)4, 0, 0, 0); } ; ;
# 332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i; int j; int r; int v; int m; int e; int f; int di; int dj; int fi; int fj; int li; int lj; int rsj; ;
# 334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  long long **V; long long *E; long long *F; long long G; long long s; ;
# 335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ei < iBeg) {
# 339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_11; ; ____chimes_ret_var_11 = ((-16)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_11; ;
# 344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ei > iEnd) {
# 347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_12; ; ____chimes_ret_var_12 = ((-17)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_12; ;
# 352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ej < jBeg) {
# 355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_13; ; ____chimes_ret_var_13 = ((-18)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_13; ;
# 360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ej > jEnd) {
# 363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_14; ; ____chimes_ret_var_14 = ((-19)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_14; ;
# 368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  m = ( (ei - iBeg + 1 > ej - jBeg + 1) ? ei - iBeg + 1 : ej - jBeg + 1 );
# 373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 377 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 378 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 379 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (V = (long long**) ({ void *____chimes_tmp_ptr = malloc((3 * sizeof(long long *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, 3 * sizeof(long long*), 5254463157148591405UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 380 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate V for thread %d\n", threadNum);
# 381 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 382 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 383 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 384 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 385 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 386 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 1; i <= 2; i++) {
# 387 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    V[i] = (long long *) ({ void *____chimes_tmp_ptr = malloc(((m + 2) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m+2) * sizeof(long long), 5254463157148591734UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 388 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    for (j = 1; j <= m+1; j++) {
# 389 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      V[i][j] = (0XB000000000000000L);
# 390 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 391 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 392 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 393 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 394 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 395 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 396 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 397 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 398 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (E = (long long*) ({ void *____chimes_tmp_ptr = malloc(((m + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m+1) * sizeof(long long), 5254463157148592217UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 399 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate E for thread %d\n", threadNum);
# 400 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 406 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (F = (long long *) ({ void *____chimes_tmp_ptr = malloc(((m + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (m+1) * sizeof(long long), 5254463157148592222UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 407 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate F for thread %d\n", threadNum);
# 408 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 409 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 410 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 411 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 412 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 413 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 414 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 1; i <= m; i++) {
# 415 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    E[i] = F[i] = (0XB000000000000000L);
# 416 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 418 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 419 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 420 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  s = (long long)weights[ mainSeq[ei-iBeg+1] ] [ matchSeq[ej-jBeg+1] ];
# 421 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 422 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (s == goal) {
# 423 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 424 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 425 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 426 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_15; ; ____chimes_ret_var_15 = ((-2)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_15; ;
# 433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  V[1][2] = s;
# 438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  E[1] = F[1] = s - gapFirst;
# 439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  T[1][1] = 16+3;
# 440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  fj = ej - 1;
# 442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  fi = ei;
# 443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  lj = ej;
# 444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  v = 2;
# 445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  while (fi > 0) {
# 446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    dj = fj;
# 447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    di = fi;
# 448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    e = ei - di + 1;
# 449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    f = ej - dj + 1;
# 450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    while ( (dj < lj+1) &&
# 452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (di >= iBeg) && (di <= iEnd) &&
# 453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (dj >= jBeg) && (dj <= jEnd) &&
# 454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (e >= 1) && (e <= m) && (f >= 1) && (f <= m) ) {
# 455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      G =
# 462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (long long)weights[mainSeq[di-iBeg+1]][matchSeq[dj-jBeg+1]] + V[v][f];
# 463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      s = ( (E[e] > ( (F[f] > G) ? F[f] : G )) ? E[e] : ( (F[f] > G) ? F[f] : G ) );
# 467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      V[v][f+1] = s;
# 468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (s > 0) {
# 472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_16; ; ____chimes_ret_var_16 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_16; ;
# 486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_17; ; ____chimes_ret_var_17 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_17; ;
# 499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 T[e][f] = (unsigned char)( 4*(s == E[e]) + 8*(s == F[f]) + 16*(s == G) );
# 502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      } else {
# 521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 522 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 523 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_18; ; ____chimes_ret_var_18 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_18; ;
# 532 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 533 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 534 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 535 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 536 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 537 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 538 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 539 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 540 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 541 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 542 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 543 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 544 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_19; ; ____chimes_ret_var_19 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_19; ;
# 545 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 546 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 T[e][f] = 0;
# 548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (s == goal) {
# 559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (r = 1; r <= *bestR; r++) {
# 560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( ( (abs(di - bestStartsI[r]) > abs(dj - bestStartsJ[r])) ? abs(di - bestStartsI[r]) : abs(dj - bestStartsJ[r]) )
# 561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
                                 < minSeparation ) {
# 562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      int ____chimes_ret_var_20; ; ____chimes_ret_var_20 = ((-10)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_20; ;
# 572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (di > iFin) || (dj > jFin) ) {
# 576 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 577 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 578 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 579 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 580 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 581 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 582 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 583 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 585 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_21; ; ____chimes_ret_var_21 = ((-11)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_21; ;
# 586 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 597 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 598 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 599 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 600 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 601 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 602 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 603 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 604 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 605 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 606 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_22; ; ____chimes_ret_var_22 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_22; ;
# 607 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 608 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 609 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 610 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 611 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 612 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 613 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 614 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 615 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 616 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 617 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 618 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 619 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_23; ; ____chimes_ret_var_23 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_23; ;
# 620 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 621 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  call_lbl_0: ({ calling_npm("tracePathR", 0); tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, e, f, 0, threadNum, &rsi, &rsj, bestSeqsI[*bestR+1], bestSeqsJ[*bestR+1]); });
# 625 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (rsi <= 0) && (rsj <= 0) ) {
# 626 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 627 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 628 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 629 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 630 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 631 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 632 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 633 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 634 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 635 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 636 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 637 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 638 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_24; ; ____chimes_ret_var_24 = ((-14)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_24; ;
# 639 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (*bestR)++;
# 650 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsI[*bestR] = di;
# 651 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsJ[*bestR] = dj;
# 652 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestEndsI[*bestR] = ei;
# 653 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestEndsJ[*bestR] = ej;
# 654 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestScores[*bestR] = goal;
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 668 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 669 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 670 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 671 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 672 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int ____chimes_ret_var_25; ; ____chimes_ret_var_25 = ((0)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_25; ;
# 673 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 674 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 675 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 676 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 677 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      s -= gapFirst;
# 678 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 679 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 680 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      E[e] = ( (E[e] - gapExtend > s) ? E[e] - gapExtend : s );
# 682 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 683 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 684 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 685 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      F[f] = ( (F[f] - gapExtend > s) ? F[f] - gapExtend : s );
# 686 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 687 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 688 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 689 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 690 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 691 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 692 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 693 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 694 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 695 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 696 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 697 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 698 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 699 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_26; ; ____chimes_ret_var_26 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_26; ;
# 700 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 701 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 702 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 703 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 704 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 706 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 707 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 708 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 709 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 710 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 711 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 712 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_27; ; ____chimes_ret_var_27 = ((-1)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_27; ;
# 713 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 714 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 715 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      T[e][f] += (unsigned char)( (E[e] == s) + 2 * (F[f] == s) );
# 716 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 717 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      dj += 1;
# 718 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      di -= 1;
# 719 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      e += 1;
# 720 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      f -= 1;
# 721 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 722 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 723 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 724 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 725 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    v = 3 - v;
# 726 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 727 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (fj != 1) {
# 728 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      fj -= 1;
# 729 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    } else {
# 730 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      fi -= 1;
# 731 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 732 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 733 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 734 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 735 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 736 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 737 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 739 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 740 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 741 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 742 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 743 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 744 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 745 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   int ____chimes_ret_var_28; ; ____chimes_ret_var_28 = ((-15)); rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_28; ;
# 746 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(false, 0UL, "doScan", &____must_manage_doScan, ____alias_loc_id_3, ____chimes_did_disable2, false); }

static
# 320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int doScan(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej,
# 321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const unsigned char *mainSeq, const unsigned char *matchSeq,
# 322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    char **weights, const int gapFirst, const int gapExtend,
# 323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int minSeparation, const int report, const long long goal,
# 324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iBeg, const int jBeg,
# 325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iFin, const int jFin,
# 326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iEnd, const int jEnd,
# 327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int threadNum,
# 328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestR, int *bestStartsI, int *bestStartsJ,
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestEndsI, int *bestEndsJ,
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    unsigned char **bestSeqsI, unsigned char **bestSeqsJ,
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    long long *bestScores) { return (____chimes_replaying ? doScan_resumable(A, T, sizeT, ei, ej, mainSeq, matchSeq, weights, gapFirst, gapExtend, minSeparation, report, goal, iBeg, jBeg, iFin, jFin, iEnd, jEnd, threadNum, bestR, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, bestScores) : doScan_quick(A, T, sizeT, ei, ej, mainSeq, matchSeq, weights, gapFirst, gapExtend, minSeparation, report, goal, iBeg, jBeg, iFin, jFin, iEnd, jEnd, threadNum, bestR, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, bestScores)); }
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
BSTR_T *scanBackward_quick(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings) {const int ____chimes_did_disable3 = new_stack((void *)(&scanBackward), "scanBackward", &____must_manage_scanBackward, 4, 4, (size_t)(5254463157148590460UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "scanBackward|A|0", &____must_checkpoint_scanBackward_A_0, "%struct.astr*", (void *)(&A), (size_t)8, 1, 0, 0, "scanBackward|maxReports|0", &____must_checkpoint_scanBackward_maxReports_0, "i32", (void *)(&maxReports), (size_t)4, 0, 0, 0, "scanBackward|minSeparation|0", &____must_checkpoint_scanBackward_minSeparation_0, "i32", (void *)(&minSeparation), (size_t)4, 0, 0, 0, "scanBackward|maxDoublings|0", &____must_checkpoint_scanBackward_maxDoublings_0, "i32", (void *)(&maxDoublings), (size_t)4, 0, 0, 0) ; BSTR_T *B;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int myCol;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int myRow;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int npCol;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int npRow;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int matchLimit;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int bestR;
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (____must_checkpoint_scanBackward_B_0 || ____must_checkpoint_scanBackward_myCol_0 || ____must_checkpoint_scanBackward_myRow_0 || ____must_checkpoint_scanBackward_npCol_0 || ____must_checkpoint_scanBackward_npRow_0 || ____must_checkpoint_scanBackward_matchLimit_0 || ____must_checkpoint_scanBackward_bestR_0) { register_stack_vars(7, "scanBackward|B|0", &____must_checkpoint_scanBackward_B_0, "%struct.bstr*", (void *)(&B), (size_t)8, 1, 0, 0, "scanBackward|myCol|0", &____must_checkpoint_scanBackward_myCol_0, "i32", (void *)(&myCol), (size_t)4, 0, 0, 0, "scanBackward|myRow|0", &____must_checkpoint_scanBackward_myRow_0, "i32", (void *)(&myRow), (size_t)4, 0, 0, 0, "scanBackward|npCol|0", &____must_checkpoint_scanBackward_npCol_0, "i32", (void *)(&npCol), (size_t)4, 0, 0, 0, "scanBackward|npRow|0", &____must_checkpoint_scanBackward_npRow_0, "i32", (void *)(&npRow), (size_t)4, 0, 0, 0, "scanBackward|matchLimit|0", &____must_checkpoint_scanBackward_matchLimit_0, "i32", (void *)(&matchLimit), (size_t)4, 0, 0, 0, "scanBackward|bestR|0", &____must_checkpoint_scanBackward_bestR_0, "i32", (void *)(&bestR), (size_t)4, 0, 0, 0); } ; ;
# 816 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 817 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i; int j; int m; int n; int r; int c; int sizeT; int ei; int ej; int doublings; ;
# 818 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int gapStart; int gapExtend; int gapFirst; int maxThreads; int threadNum; int myTaskID; ;
# 819 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      int iBeg; int jBeg; int iFin; int jFin; int iEnd; int jEnd; ;
# 820 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int *bestStartsI; int *bestStartsJ; int *bestEndsI; int *bestEndsJ; ;
# 821 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char *mainSeq; unsigned char *matchSeq; unsigned char **T; ;
# 822 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char **bestSeqsI; unsigned char **bestSeqsJ; ;
# 823 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  long long *bestScores; long long goal; ;
# 824 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  char **weights; char hyphen; ;
# 825 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     B = (__null) ;
# 834 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 834 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  maxThreads = A->numThreads;
# 835 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 836 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 837 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 838 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 839 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 840 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 841 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  matchLimit = A->simMatrix->matchLimit;
# 842 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 843 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 845 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B = (BSTR_T*) ({ void *____chimes_tmp_ptr = malloc((sizeof(BSTR_T)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(BSTR_T), 5254463157148593410UL, 0, 1, (int)sizeof(struct bstr), 8, (int)__builtin_offsetof(struct bstr, bestScores), (int)__builtin_offsetof(struct bstr, numReports), (int)__builtin_offsetof(struct bstr, bestStartsI), (int)__builtin_offsetof(struct bstr, bestStartsJ), (int)__builtin_offsetof(struct bstr, bestEndsI), (int)__builtin_offsetof(struct bstr, bestEndsJ), (int)__builtin_offsetof(struct bstr, bestSeqsI), (int)__builtin_offsetof(struct bstr, bestSeqsJ)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 846 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B\n");
# 847 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 848 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 849 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 850 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 851 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 852 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numThreads = 0;
# 853 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numReports = __null;
# 854 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestScores = __null;
# 855 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestStartsI = B->bestStartsJ = __null;
# 856 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestEndsI = B->bestEndsJ = __null;
# 857 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestSeqsI = B->bestSeqsJ = __null;
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numThreads = A->numThreads;
# 867 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->numReports = (int*) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 868 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->numReports\n");
# 869 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 870 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 871 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 872 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 873 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 874 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 875 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestScores =
# 876 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (long long**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(long long *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(long long*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 877 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestScores\n");
# 878 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 879 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 880 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 881 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 882 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 883 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 884 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestStartsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 885 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestStartsI\n");
# 886 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 887 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 888 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 889 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 890 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 891 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 892 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestStartsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 893 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestStartsJ\n");
# 894 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 895 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 896 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 897 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 898 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 899 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 900 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestEndsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 901 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestEndsI\n");
# 902 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 903 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 904 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 905 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 906 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 907 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 908 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestEndsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 909 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestEndsJ\n");
# 910 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 912 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 913 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 914 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 915 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 916 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestSeqsI =
# 917 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (unsigned char***) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(unsigned char **)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(unsigned char**), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 918 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 919 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestSeqsI\n");
# 920 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 921 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 922 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 923 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 924 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 925 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 926 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestSeqsJ =
# 927 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (unsigned char***) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(unsigned char **)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(unsigned char**), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 928 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 929 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestSeqsJ\n");
# 930 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 931 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 932 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 933 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 934 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 935 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 936 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 0; i < maxThreads; i++) {
# 937 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->numReports[i] = 0;
# 938 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestScores[i] = __null;
# 939 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestStartsI[i] = B->bestStartsJ[i] = __null;
# 940 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestEndsI[i] = B->bestEndsJ[i] = __null;
# 941 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestSeqsI[i] = B->bestSeqsJ[i] = __null;
# 942 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
#pragma omp parallel firstprivate(maxReports, matchLimit, minSeparation) private (i, j, m, n, r, c, npRow, npCol, myRow, myCol, weights, iBeg, jBeg, iFin, jFin, iEnd, jEnd, doublings, hyphen, gapStart, gapExtend, gapFirst, sizeT, bestR, goal, ei, ej, T, bestScores, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, mainSeq, matchSeq, threadNum, myTaskID)
# 958 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 959 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 960 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 961 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 962 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 963 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 964 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  {
# 965 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 966 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 967 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 968 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     call_lbl_0: ({ calling((void*)gridInfo, 0, ____alias_loc_id_0, 0UL, 4, (size_t)(5254463157148589732UL), (size_t)(5254463157148589733UL), (size_t)(5254463157148589734UL), (size_t)(5254463157148589735UL)); (gridInfo)(&npRow, &npCol, &myRow, &myCol); }) ;
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    threadNum = 0;
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    myTaskID = threadNum;
# 991 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 992 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 993 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 994 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 995 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (myRow >= 0 && myCol >= 0) {
# 996 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 997 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 998 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 999 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      hyphen = A->simMatrix->hyphen;
# 1000 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapStart = A->simMatrix->gapStart;
# 1001 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapExtend = A->simMatrix->gapExtend;
# 1002 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapFirst = gapStart + gapExtend;
# 1014 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1014 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestScores = (long long*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(long long), 5254463157148590161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1015 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1016 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestScores for thread %d\n",
# 1017 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1018 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1019 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1020 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1021 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1022 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1023 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestStartsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590181UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1025 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestStartsI for thread %d\n",
# 1026 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1027 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1028 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1029 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1030 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1031 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1032 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1033 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestStartsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590176UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1034 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestStartsJ for thread %d\n",
# 1035 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1036 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1037 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1038 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1039 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1040 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1041 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1042 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestEndsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590171UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1043 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestEndsI for thread %d\n",
# 1044 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1045 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1046 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1047 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1048 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1049 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1050 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1051 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestEndsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590166UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1052 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestEndsJ for thread %d\n",
# 1053 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1054 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1055 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1056 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1057 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1058 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1059 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1060 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestSeqsI =
# 1061 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(unsigned char*), 5254463157148590191UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1062 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1063 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestSeqsI for thread %d\n",
# 1064 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1065 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1066 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1067 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1068 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1069 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1070 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1071 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       if ( (bestSeqsJ =
# 1072 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(unsigned char*), 5254463157148590936UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1073 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1074 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestSeqsJ for thread %d\n",
# 1075 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1076 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1077 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1078 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1079 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1080 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1081 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1082 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= maxReports; i++) {
# 1083 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestScores[i] = 0L;
# 1084 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsI[i] = bestStartsJ[i] = bestEndsI[i] = bestEndsJ[i] = 0;
# 1085 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1086 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (bestSeqsI[i] =
# 1087 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((matchLimit + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (matchLimit+1)*sizeof(unsigned char), 5254463157148590188UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1088 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate bestSeqsI[%d] for thread %d\n",
# 1090 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1091 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1092 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1093 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1094 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1095 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1096 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1097 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (bestSeqsJ[i] =
# 1098 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((matchLimit + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (matchLimit+1)*sizeof(unsigned char), 5254463157148590938UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1099 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate bestSeqsJ[%d] for thread %d\n",
# 1101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      n = A->seqData->mainLen;
# 1127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      m = A->seqData->matchLen;
# 1128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iBeg = 1 + (n*myRow)/npRow;
# 1130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jBeg = 1 + (m*myCol)/npCol;
# 1131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iFin = (n*(myRow+1))/npRow;
# 1133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jFin = (m*(myCol+1))/npCol;
# 1134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iEnd = ( (n < iFin + matchLimit - 1) ? n : iFin + matchLimit - 1 );
# 1136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jEnd = ( (m < jFin + matchLimit - 1) ? m : jFin + matchLimit - 1 );
# 1137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (mainSeq =
# 1144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((iEnd - iBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (iEnd - iBeg + 2) * sizeof(unsigned char), 5254463157148590301UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 == __null ) {
# 1146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate mainSeq for thread %d\n",
# 1147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = iBeg; i <= iEnd; i++) {
# 1152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 mainSeq[i - iBeg + 1] = A->seqData->main[i];
# 1153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (matchSeq =
# 1156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(unsigned char), 5254463157148590373UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null) {
# 1158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate matchSeq for thread %d\n",
# 1159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (j = jBeg; j <= jEnd; j++) {
# 1164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 matchSeq[j - jBeg + 1] = A->seqData->match[j];
# 1165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (weights = (char**) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1) * sizeof(char*), 5254463157148590398UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate weights for thread %d\n",
# 1175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (weights[i] = (char*) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1) * sizeof(char), 5254463157148590395UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("locateSimilar: cannot allocates weights[%d] for thread %d\n",
# 1186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1188 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j < ((64) + 1); j++) {
# 1189 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   weights[i][j] = A->simMatrix->similarity[i][j];
# 1190 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1191 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      sizeT = ( (A->simMatrix->matchLimit > A->seqData->maxValidation) ? A->simMatrix->matchLimit : A->seqData->maxValidation );
# 1206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      doublings = 0;
# 1207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1208 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    retry:
# 1209 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (T = (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((sizeT + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sizeT+1) * sizeof(unsigned char*), 5254463157148590496UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1210 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate T for thread %d\n", myTaskID);
# 1212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= sizeT; i++) {
# 1219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (T[i] = (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((sizeT + 1) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sizeT+1)*sizeof(unsigned char), 5254463157148590493UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1220 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1221 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate T[%d] for thread %d\n",
# 1222 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1223 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1224 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1225 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1226 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1227 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1228 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1229 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j <= sizeT; j++) {
# 1230 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   T[i][j] = 0;
# 1231 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1232 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1233 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1234 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1235 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1236 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      bestR = 0;
# 1237 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (r = 1; r <= A->numReports[threadNum]; r++) {
# 1238 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 goal = A->goodScores[threadNum][r];
# 1239 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 ei = A->goodEndsI[threadNum][r];
# 1240 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 ej = A->goodEndsJ[threadNum][r];
# 1241 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i <= sizeT; i++) {
# 1242 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= sizeT; j++) {
# 1243 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     T[i][j] = 0;
# 1244 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1245 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1246 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1247 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1248 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1249 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  call_lbl_1: if ( ({ calling_npm("doScan", 0); doScan_npm(A, T, sizeT, ei, ej, mainSeq, matchSeq, weights, gapFirst, gapExtend, minSeparation, r, goal, iBeg, jBeg, iFin, jFin, iEnd, jEnd, myTaskID, &bestR, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, bestScores); }) == -1 ) {
# 1254 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1255 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1256 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1257 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if (doublings >= maxDoublings) {
# 1258 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     printf("\tscanBackward: sequence %d dropped for thread %d\n",
# 1259 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     r, myTaskID);
# 1260 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   } else {
# 1261 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1262 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1263 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1264 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     for (i = 1; i <= sizeT; i++) {
# 1265 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)T[i]) - sizeof(void *)), 5254463157148590493UL);free((((unsigned char *)T[i]) - sizeof(void *))); }) ;
# 1266 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1267 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)T) - sizeof(void *)), 5254463157148590496UL);free((((unsigned char *)T) - sizeof(void *))); }) ;
# 1268 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     sizeT *= 2;
# 1269 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1270 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1271 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1272 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1273 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     doublings++;
# 1274 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     goto retry;
# 1275 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1276 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1279 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1280 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (bestR == maxReports) {
# 1281 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   break;
# 1282 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1283 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->numReports[threadNum] = bestR;
# 1293 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1294 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1295 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1296 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (bestR != 0) {
# 1297 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestScores[threadNum] =
# 1298 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (long long*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR +1) * sizeof(long long), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1299 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestScores for thread %d\n",
# 1300 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1301 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1302 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1303 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1304 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1305 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1306 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1307 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestStartsI[threadNum] =
# 1308 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1309 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestStartsI for thread %d\n",
# 1310 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1311 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1312 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1313 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1314 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1315 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1316 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1317 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1318 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestStartsJ[threadNum] =
# 1319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestStartsJ for thread %d\n",
# 1321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestEndsI[threadNum] =
# 1330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestEndsI for thread %d\n",
# 1332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestEndsJ[threadNum] =
# 1341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestEndsJ for thread %d\n",
# 1343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestSeqsI[threadNum] =
# 1352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR + 1) * sizeof(unsigned char*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestSeqsI for thread %d\n",
# 1355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestSeqsJ[threadNum] =
# 1364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(unsigned char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (bestR + 1) * sizeof(unsigned char*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestSeqsJ for thread %d\n",
# 1367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1377 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j <= bestR; j++) {
# 1378 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestScores[threadNum][j] = bestScores[j];
# 1379 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsI[threadNum][j] = bestStartsI[j];
# 1380 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsJ[threadNum][j] = bestStartsJ[j];
# 1381 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsI[threadNum][j] = bestEndsI[j];
# 1382 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsJ[threadNum][j] = bestEndsJ[j];
# 1383 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    call_lbl_2: B->bestSeqsI[threadNum][j] = ({ calling_npm("copyStringR", 0); copyStringR_npm(bestSeqsI[j]); });
# 1384 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    call_lbl_3: B->bestSeqsJ[threadNum][j] = ({ calling_npm("copyStringR", 0); copyStringR_npm(bestSeqsJ[j]); });
# 1385 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1386 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1387 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1388 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1389 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI == __null) {
# 1390 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsI == NULL for thread %d\n",
# 1391 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1392 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1393 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1394 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1395 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1396 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1397 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1398 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI[threadNum] == __null) {
# 1399 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsI[%d] = NULL for thread\n",
# 1400 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   threadNum, myTaskID);
# 1401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1406 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1407 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 c = 0;
# 1408 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i < B->numReports[threadNum]; i++) {
# 1409 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( strlen( (char*)(B->bestSeqsI[threadNum][i]) ) < 1 ) {
# 1410 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     c++;
# 1411 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1412 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1413 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1414 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (c) {
# 1415 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: 0-length bestSeqsI strings %d of %d reports for thread %d\n",
# 1416 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   c, B->numReports[threadNum], myTaskID);
# 1417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1418 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1419 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ == __null) {
# 1420 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsJ == NULL for thread %d\n",
# 1421 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1422 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1423 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1424 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1425 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1426 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ[threadNum] == __null) {
# 1429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsJ[%d] = NULL for thread\n",
# 1430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   threadNum, myTaskID);
# 1431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 c = 0;
# 1438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i < B->numReports[threadNum]; i++) {
# 1439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( strlen( (char *)(B->bestSeqsJ[threadNum][i]) ) < 1 ) {
# 1440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     c++;
# 1441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (c) {
# 1444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: 0-length bestSeqsJ strings %d of %d reports for thread %d\n",
# 1445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   c, B->numReports[threadNum], myTaskID);
# 1446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestScores) - sizeof(void *)), 5254463157148590161UL);free((((unsigned char *)bestScores) - sizeof(void *))); }) ;
# 1452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestStartsI) - sizeof(void *)), 5254463157148590181UL);free((((unsigned char *)bestStartsI) - sizeof(void *))); }) ;
# 1453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestStartsJ) - sizeof(void *)), 5254463157148590176UL);free((((unsigned char *)bestStartsJ) - sizeof(void *))); }) ;
# 1454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestEndsI) - sizeof(void *)), 5254463157148590171UL);free((((unsigned char *)bestEndsI) - sizeof(void *))); }) ;
# 1455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestEndsJ) - sizeof(void *)), 5254463157148590166UL);free((((unsigned char *)bestEndsJ) - sizeof(void *))); }) ;
# 1456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= maxReports; i++) {
# 1458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)bestSeqsI[i]) - sizeof(void *)), 5254463157148590188UL);free((((unsigned char *)bestSeqsI[i]) - sizeof(void *))); }) ;
# 1459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)bestSeqsJ[i]) - sizeof(void *)), 5254463157148590938UL);free((((unsigned char *)bestSeqsJ[i]) - sizeof(void *))); }) ;
# 1460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestSeqsI) - sizeof(void *)), 5254463157148590191UL);free((((unsigned char *)bestSeqsI) - sizeof(void *))); }) ;
# 1463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestSeqsJ) - sizeof(void *)), 5254463157148590936UL);free((((unsigned char *)bestSeqsJ) - sizeof(void *))); }) ;
# 1464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)weights[i]) - sizeof(void *)), 5254463157148590395UL);free((((unsigned char *)weights[i]) - sizeof(void *))); }) ;
# 1467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)weights) - sizeof(void *)), 5254463157148590398UL);free((((unsigned char *)weights) - sizeof(void *))); }) ;
# 1469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= sizeT; i++) {
# 1471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)T[i]) - sizeof(void *)), 5254463157148590493UL);free((((unsigned char *)T[i]) - sizeof(void *))); }) ;
# 1472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)T) - sizeof(void *)), 5254463157148590496UL);free((((unsigned char *)T) - sizeof(void *))); }) ;
# 1474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)mainSeq) - sizeof(void *)), 5254463157148590301UL);free((((unsigned char *)mainSeq) - sizeof(void *))); }) ;
# 1476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)matchSeq) - sizeof(void *)), 5254463157148590373UL);free((((unsigned char *)matchSeq) - sizeof(void *))); }) ;
# 1477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 1479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   BSTR_T *____chimes_ret_var_29; ; ____chimes_ret_var_29 = ((B)); rm_stack(true, 5254463157148593410UL, "scanBackward", &____must_manage_scanBackward, ____alias_loc_id_2, ____chimes_did_disable3, false); return ____chimes_ret_var_29; ;
# 1481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(true, 5254463157148593410UL, "scanBackward", &____must_manage_scanBackward, ____alias_loc_id_2, ____chimes_did_disable3, false); }

BSTR_T *scanBackward(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings) { return (____chimes_replaying ? scanBackward_resumable(A, maxReports, minSeparation, maxDoublings) : scanBackward_quick(A, maxReports, minSeparation, maxDoublings)); }
# 1485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
BSTR_T *freeB_quick(BSTR_T *B) {const int ____chimes_did_disable4 = new_stack((void *)(&freeB), "freeB", &____must_manage_freeB, 1, 0, (size_t)(5254463157148592932UL)) ; ; ;
# 1486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i; int j; ;
# 1488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (B) {
# 1490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestScores) {
# 1491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestScores[i]) {
# 1493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestScores[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestScores[i]) - sizeof(void *))); }) ;
# 1494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestScores[i] = __null;
# 1495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestScores) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestScores) - sizeof(void *))); }) ;
# 1498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestScores = __null;
# 1499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestStartsI) {
# 1501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestStartsI[i]) {
# 1503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestStartsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsI[i]) - sizeof(void *))); }) ;
# 1504 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsI[i] = __null;
# 1505 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1506 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1507 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestStartsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsI) - sizeof(void *))); }) ;
# 1508 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestStartsI = __null;
# 1509 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1510 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestStartsJ) {
# 1511 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1512 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestStartsJ[i]) {
# 1513 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestStartsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsJ[i]) - sizeof(void *))); }) ;
# 1514 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsJ[i] = __null;
# 1515 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1516 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1517 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestStartsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsJ) - sizeof(void *))); }) ;
# 1518 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestStartsJ = __null;
# 1519 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1520 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestEndsI) {
# 1521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1522 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestEndsI[i]) {
# 1523 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestEndsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsI[i]) - sizeof(void *))); }) ;
# 1524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsI[i] = __null;
# 1525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestEndsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsI) - sizeof(void *))); }) ;
# 1528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestEndsI = __null;
# 1529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestEndsJ) {
# 1531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1532 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestEndsJ[i]) {
# 1533 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestEndsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsJ[i]) - sizeof(void *))); }) ;
# 1534 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsJ[i] = __null;
# 1535 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1536 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1537 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestEndsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsJ) - sizeof(void *))); }) ;
# 1538 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestEndsJ = __null;
# 1539 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1540 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestSeqsI) {
# 1541 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1542 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI[i]) {
# 1543 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= B->numReports[i]; j++) {
# 1544 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     if (B->bestSeqsI[i][j]) {
# 1545 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)B->bestSeqsI[i][j]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI[i][j]) - sizeof(void *))); }) ;
# 1546 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       B->bestSeqsI[i][j] = __null;
# 1547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1549 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestSeqsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI[i]) - sizeof(void *))); }) ;
# 1550 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsI[i] = __null;
# 1551 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1552 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1553 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestSeqsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI) - sizeof(void *))); }) ;
# 1554 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestSeqsI = __null;
# 1555 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1556 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestSeqsJ) {
# 1557 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ[i]) {
# 1559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= B->numReports[i]; j++) {
# 1560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     if (B->bestSeqsJ[i][j]) {
# 1561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)B->bestSeqsJ[i][j]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ[i][j]) - sizeof(void *))); }) ;
# 1562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       B->bestSeqsJ[i][j] = __null;
# 1563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestSeqsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ[i]) - sizeof(void *))); }) ;
# 1566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsJ[i] = __null;
# 1567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestSeqsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ) - sizeof(void *))); }) ;
# 1570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestSeqsJ = __null;
# 1571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->numReports) {
# 1573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->numReports) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->numReports) - sizeof(void *))); }) ;
# 1574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->numReports = __null;
# 1575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1576 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)B) - sizeof(void *)), 5254463157148592932UL);free((((unsigned char *)B) - sizeof(void *))); }) ;
# 1577 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 1578 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   BSTR_T *____chimes_ret_var_30; ; ____chimes_ret_var_30 = ((__null)); rm_stack(true, 5254463157148593410UL, "freeB", &____must_manage_freeB, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_30; ;
# 1579 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
rm_stack(true, 5254463157148593410UL, "freeB", &____must_manage_freeB, ____alias_loc_id_4, ____chimes_did_disable4, false); }

BSTR_T *freeB(BSTR_T *B) { return (____chimes_replaying ? freeB_resumable(B) : freeB_quick(B)); }
# 20 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
unsigned char *copyStringR_npm(const unsigned char *inpString) {
# 21 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 22 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int c;
# 23 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char *outString;
# 24 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 25 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ( c = strlen( (char*)inpString ) ) <= 0 ) {
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("copyStringR: input string length = %d\n", c);
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 30 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 31 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 32 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 33 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ( outString = (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((c + 1) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (c+1)*sizeof(unsigned char), 5254463157148589683UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 34 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 35 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("copyStringR: cannot allocate outString of length %d\n", c+1);
# 36 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 37 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 38 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 39 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 40 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 41 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 42 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  outString = (unsigned char*)strcpy( (char*)outString, (char*)inpString );
# 43 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   unsigned char * ____chimes_ret_var_0; ____chimes_ret_var_0 = ((outString)); return ____chimes_ret_var_0; ;
# 44 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
}
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
static
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int tracePathR_npm(const ASTR_T *A, unsigned char **T,
# 87 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int ei, const int ej,
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iBeg, const int jBeg,
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int iEnd, const int jEnd,
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const unsigned char *mainSeq, const unsigned char *matchSeq,
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        const int i, const int j, int dir, int threadNum,
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        int *rsi, int *rsj,
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        unsigned char *ri, unsigned char *rj) {
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *ri = '\0';
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rj = '\0';
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (i == 0) || (j == 0) ) {
# 115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsi = i + 1;
# 116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsj = j + 1;
# 117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_1; ____chimes_ret_var_1 = ((0)); return ____chimes_ret_var_1; ;
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir == 0) || ( (dir & T[i][j]) != 0 ) ) {
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    dir = T[i][j] >> 2;
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (dir == 0) {
# 133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsi = 0;
# 134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    *rsj = 0;
# 135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_2; ____chimes_ret_var_2 = ((-1)); return ____chimes_ret_var_2; ;
# 141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ei - i + 1 < iBeg ) {
# 168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR i-underflow: ei-i+1 = %d  iBeg = %d\n", ei-i+1, iBeg);
# 169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_3; ____chimes_ret_var_3 = ((-2)); return ____chimes_ret_var_3; ;
# 170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ei - i + 1 > iEnd ) {
# 172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR i-overflow: ei-i+1 = %d  iEnd = %d\n", ei-i+1, iEnd);
# 173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_4; ____chimes_ret_var_4 = ((-3)); return ____chimes_ret_var_4; ;
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ej - j + 1 < jBeg ) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR j-underflow: ej-j+1 = %d  jBeg = %d\n", ej-j+1, jBeg);
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_5; ____chimes_ret_var_5 = ((-4)); return ____chimes_ret_var_5; ;
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( ej - j + 1 > jEnd ) {
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("\ttracePathR j-overflow: ej-j+1 = %d  jEnd = %d\n", ej-j+1, jEnd);
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_6; ____chimes_ret_var_6 = ((-5)); return ____chimes_ret_var_6; ;
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 193 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 193 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 4) != 0) {
# 194 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i-1, j-1, 0, threadNum, rsi, rsj, ++ri, ++rj);
# 198 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 199 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 200 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = mainSeq[ei - iBeg - i + 2];
# 201 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = matchSeq[ej - jBeg - j + 2];
# 202 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_7; ____chimes_ret_var_7 = ((0)); return ____chimes_ret_var_7; ;
# 203 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 204 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 2) != 0) {
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i-1, j, 2, threadNum, rsi, rsj, ++ri, ++rj);
# 211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = mainSeq[ei - iBeg - i + 2];
# 214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = A->simMatrix->hyphen;
# 215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_8; ____chimes_ret_var_8 = ((0)); return ____chimes_ret_var_8; ;
# 216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (dir & 1) != 0) {
# 220 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, i, j-1, 1, threadNum, rsi, rsj, ++ri, ++rj);
# 224 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 225 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if ( (*rsi > 0) || (*rsj > 0) ) {
# 226 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--ri) = A->simMatrix->hyphen;
# 227 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      *(--rj) = matchSeq[ej - jBeg - j + 2];
# 228 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       int ____chimes_ret_var_9; ____chimes_ret_var_9 = ((0)); return ____chimes_ret_var_9; ;
# 229 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 230 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 231 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 232 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 233 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 234 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 235 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 236 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 237 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rsi = 0;
# 238 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  *rsj = 0;
# 239 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 240 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 241 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 242 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 243 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 244 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   int ____chimes_ret_var_10; ____chimes_ret_var_10 = ((-1)); return ____chimes_ret_var_10; ;
# 245 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
}
# 319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
static
# 320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
int doScan_npm(const ASTR_T *A, unsigned char **T, const int sizeT, int ei, int ej,
# 321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const unsigned char *mainSeq, const unsigned char *matchSeq,
# 322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    char **weights, const int gapFirst, const int gapExtend,
# 323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int minSeparation, const int report, const long long goal,
# 324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iBeg, const int jBeg,
# 325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iFin, const int jFin,
# 326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int iEnd, const int jEnd,
# 327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    const int threadNum,
# 328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestR, int *bestStartsI, int *bestStartsJ,
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int *bestEndsI, int *bestEndsJ,
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    unsigned char **bestSeqsI, unsigned char **bestSeqsJ,
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    long long *bestScores) {
# 332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i, j, r, v, m, e, f, di, dj, fi, fj, li, lj, rsi, rsj;
# 334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  long long **V, *E, *F, G, s;
# 335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ei < iBeg) {
# 339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_11; ____chimes_ret_var_11 = ((-16)); return ____chimes_ret_var_11; ;
# 344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ei > iEnd) {
# 347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_12; ____chimes_ret_var_12 = ((-17)); return ____chimes_ret_var_12; ;
# 352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ej < jBeg) {
# 355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_13; ____chimes_ret_var_13 = ((-18)); return ____chimes_ret_var_13; ;
# 360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (ej > jEnd) {
# 363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_14; ____chimes_ret_var_14 = ((-19)); return ____chimes_ret_var_14; ;
# 368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  m = ( (ei - iBeg + 1 > ej - jBeg + 1) ? ei - iBeg + 1 : ej - jBeg + 1 );
# 373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 377 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 378 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 379 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (V = (long long**) ({ void *____chimes_tmp_ptr = malloc((3 * sizeof(long long *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, 3 * sizeof(long long*), 5254463157148591405UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 380 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate V for thread %d\n", threadNum);
# 381 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 382 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 383 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 384 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 385 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 386 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 1; i <= 2; i++) {
# 387 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    V[i] = (long long *) ({ void *____chimes_tmp_ptr = malloc(((m + 2) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (m+2) * sizeof(long long), 5254463157148591734UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 388 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    for (j = 1; j <= m+1; j++) {
# 389 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      V[i][j] = (0XB000000000000000L);
# 390 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 391 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 392 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 393 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 394 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 395 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 396 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 397 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 398 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (E = (long long*) ({ void *____chimes_tmp_ptr = malloc(((m + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (m+1) * sizeof(long long), 5254463157148592217UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 399 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate E for thread %d\n", threadNum);
# 400 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 406 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (F = (long long *) ({ void *____chimes_tmp_ptr = malloc(((m + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (m+1) * sizeof(long long), 5254463157148592222UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 407 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("doScan: cannot allocate F for thread %d\n", threadNum);
# 408 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 409 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 410 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 411 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 412 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 413 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 414 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 1; i <= m; i++) {
# 415 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    E[i] = F[i] = (0XB000000000000000L);
# 416 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 418 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 419 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 420 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  s = (long long)weights[ mainSeq[ei-iBeg+1] ] [ matchSeq[ej-jBeg+1] ];
# 421 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 422 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (s == goal) {
# 423 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 424 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 425 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 426 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     int ____chimes_ret_var_15; ____chimes_ret_var_15 = ((-2)); return ____chimes_ret_var_15; ;
# 433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  V[1][2] = s;
# 438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  E[1] = F[1] = s - gapFirst;
# 439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  T[1][1] = 16+3;
# 440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  fj = ej - 1;
# 442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  fi = ei;
# 443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  lj = ej;
# 444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  v = 2;
# 445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  while (fi > 0) {
# 446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    dj = fj;
# 447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    di = fi;
# 448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    e = ei - di + 1;
# 449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    f = ej - dj + 1;
# 450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    while ( (dj < lj+1) &&
# 452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (di >= iBeg) && (di <= iEnd) &&
# 453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (dj >= jBeg) && (dj <= jEnd) &&
# 454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (e >= 1) && (e <= m) && (f >= 1) && (f <= m) ) {
# 455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      G =
# 462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (long long)weights[mainSeq[di-iBeg+1]][matchSeq[dj-jBeg+1]] + V[v][f];
# 463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      s = ( (E[e] > ( (F[f] > G) ? F[f] : G )) ? E[e] : ( (F[f] > G) ? F[f] : G ) );
# 467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      V[v][f+1] = s;
# 468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (s > 0) {
# 472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_16; ____chimes_ret_var_16 = ((-1)); return ____chimes_ret_var_16; ;
# 486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_17; ____chimes_ret_var_17 = ((-1)); return ____chimes_ret_var_17; ;
# 499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 T[e][f] = (unsigned char)( 4*(s == E[e]) + 8*(s == F[f]) + 16*(s == G) );
# 502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      } else {
# 521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 522 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 523 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_18; ____chimes_ret_var_18 = ((-1)); return ____chimes_ret_var_18; ;
# 532 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 533 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 534 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 535 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 536 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 537 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 538 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 539 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 540 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 541 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 542 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 543 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 544 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_19; ____chimes_ret_var_19 = ((-1)); return ____chimes_ret_var_19; ;
# 545 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 546 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 T[e][f] = 0;
# 548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (s == goal) {
# 559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (r = 1; r <= *bestR; r++) {
# 560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( ( (abs(di - bestStartsI[r]) > abs(dj - bestStartsJ[r])) ? abs(di - bestStartsI[r]) : abs(dj - bestStartsJ[r]) )
# 561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
                                 < minSeparation ) {
# 562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      int ____chimes_ret_var_20; ____chimes_ret_var_20 = ((-10)); return ____chimes_ret_var_20; ;
# 572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (di > iFin) || (dj > jFin) ) {
# 576 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 577 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 578 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 579 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 580 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 581 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 582 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 583 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 585 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_21; ____chimes_ret_var_21 = ((-11)); return ____chimes_ret_var_21; ;
# 586 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 597 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 598 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 599 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 600 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 601 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 602 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 603 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 604 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 605 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 606 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_22; ____chimes_ret_var_22 = ((-1)); return ____chimes_ret_var_22; ;
# 607 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 608 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 609 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 610 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 611 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 612 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 613 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 614 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 615 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 616 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 617 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 618 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 619 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_23; ____chimes_ret_var_23 = ((-1)); return ____chimes_ret_var_23; ;
# 620 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 621 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 tracePathR_npm(A, T, ei, ej, iBeg, jBeg, iEnd, jEnd, mainSeq, matchSeq, e, f, 0, threadNum, &rsi, &rsj, bestSeqsI[*bestR+1], bestSeqsJ[*bestR+1]);
# 625 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (rsi <= 0) && (rsj <= 0) ) {
# 626 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 627 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 628 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 629 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 630 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 631 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 632 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 633 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 634 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 635 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 636 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 637 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 638 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_24; ____chimes_ret_var_24 = ((-14)); return ____chimes_ret_var_24; ;
# 639 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (*bestR)++;
# 650 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsI[*bestR] = di;
# 651 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsJ[*bestR] = dj;
# 652 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestEndsI[*bestR] = ei;
# 653 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestEndsJ[*bestR] = ej;
# 654 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestScores[*bestR] = goal;
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 668 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 669 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 670 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 671 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 672 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int ____chimes_ret_var_25; ____chimes_ret_var_25 = ((0)); return ____chimes_ret_var_25; ;
# 673 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 674 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 675 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 676 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 677 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      s -= gapFirst;
# 678 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 679 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 680 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      E[e] = ( (E[e] - gapExtend > s) ? E[e] - gapExtend : s );
# 682 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 683 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 684 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 685 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      F[f] = ( (F[f] - gapExtend > s) ? F[f] - gapExtend : s );
# 686 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 687 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 688 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 689 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (e > sizeT) {
# 690 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 691 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 692 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 693 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 694 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 695 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 696 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 697 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 698 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 699 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_26; ____chimes_ret_var_26 = ((-1)); return ____chimes_ret_var_26; ;
# 700 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 701 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 702 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (f > sizeT) {
# 703 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 704 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 706 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 707 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 708 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 709 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 710 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 711 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 712 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    int ____chimes_ret_var_27; ____chimes_ret_var_27 = ((-1)); return ____chimes_ret_var_27; ;
# 713 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 714 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 715 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      T[e][f] += (unsigned char)( (E[e] == s) + 2 * (F[f] == s) );
# 716 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 717 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      dj += 1;
# 718 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      di -= 1;
# 719 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      e += 1;
# 720 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      f -= 1;
# 721 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 722 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 723 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 724 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 725 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    v = 3 - v;
# 726 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 727 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (fj != 1) {
# 728 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      fj -= 1;
# 729 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    } else {
# 730 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      fi -= 1;
# 731 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 732 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 733 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 734 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 735 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 736 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 737 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 739 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 740 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V[1]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[1]) - sizeof(void *))); }) ;
# 741 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V[2]) - sizeof(void *)), 5254463157148591734UL);free((((unsigned char *)V[2]) - sizeof(void *))); }) ;
# 742 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)V) - sizeof(void *)), 5254463157148591405UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 743 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)E) - sizeof(void *)), 5254463157148592217UL);free((((unsigned char *)E) - sizeof(void *))); }) ;
# 744 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   ({ free_helper((((unsigned char *)F) - sizeof(void *)), 5254463157148592222UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 745 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   int ____chimes_ret_var_28; ____chimes_ret_var_28 = ((-15)); return ____chimes_ret_var_28; ;
# 746 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
}
# 815 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
BSTR_T *scanBackward_npm(ASTR_T *A, int maxReports, int minSeparation, int maxDoublings) {
# 816 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 817 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i, j, m, n, r, c, sizeT, bestR, ei, ej, doublings, matchLimit;
# 818 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int gapStart, gapExtend, gapFirst, maxThreads, threadNum, myTaskID;
# 819 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int npRow, npCol, myRow, myCol, iBeg, jBeg, iFin, jFin, iEnd, jEnd;
# 820 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int *bestStartsI, *bestStartsJ, *bestEndsI, *bestEndsJ;
# 821 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char *mainSeq, *matchSeq, **T;
# 822 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  unsigned char **bestSeqsI, **bestSeqsJ;
# 823 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  long long *bestScores, goal;
# 824 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  char **weights, hyphen;
# 825 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  BSTR_T *B=__null;
# 834 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 834 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  maxThreads = A->numThreads;
# 835 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 836 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 837 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 838 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 839 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 840 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 841 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  matchLimit = A->simMatrix->matchLimit;
# 842 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 843 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 845 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B = (BSTR_T*) ({ void *____chimes_tmp_ptr = malloc((sizeof(BSTR_T)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(BSTR_T), 5254463157148593410UL, 0, 1, (int)sizeof(struct bstr), 8, (int)__builtin_offsetof(struct bstr, bestScores), (int)__builtin_offsetof(struct bstr, numReports), (int)__builtin_offsetof(struct bstr, bestStartsI), (int)__builtin_offsetof(struct bstr, bestStartsJ), (int)__builtin_offsetof(struct bstr, bestEndsI), (int)__builtin_offsetof(struct bstr, bestEndsJ), (int)__builtin_offsetof(struct bstr, bestSeqsI), (int)__builtin_offsetof(struct bstr, bestSeqsJ)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 846 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B\n");
# 847 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 848 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 849 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 850 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 851 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 852 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numThreads = 0;
# 853 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numReports = __null;
# 854 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestScores = __null;
# 855 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestStartsI = B->bestStartsJ = __null;
# 856 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestEndsI = B->bestEndsJ = __null;
# 857 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->bestSeqsI = B->bestSeqsJ = __null;
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  B->numThreads = A->numThreads;
# 867 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->numReports = (int*) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 868 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->numReports\n");
# 869 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 870 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 871 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 872 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 873 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 874 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 875 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestScores =
# 876 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (long long**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(long long *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(long long*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 877 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestScores\n");
# 878 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 879 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 880 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 881 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 882 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 883 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 884 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestStartsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 885 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestStartsI\n");
# 886 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 887 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 888 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 889 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 890 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 891 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 892 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestStartsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 893 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestStartsJ\n");
# 894 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 895 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 896 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 897 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 898 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 899 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 900 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestEndsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 901 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestEndsI\n");
# 902 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 903 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 904 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 905 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 906 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 907 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 908 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestEndsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 909 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestEndsJ\n");
# 910 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 912 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 913 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 914 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 915 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 916 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestSeqsI =
# 917 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (unsigned char***) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(unsigned char **)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(unsigned char**), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 918 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 919 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestSeqsI\n");
# 920 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 921 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 922 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 923 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 924 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 925 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 926 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if ( (B->bestSeqsJ =
# 927 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 (unsigned char***) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(unsigned char **)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(unsigned char**), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 928 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       == __null ) {
# 929 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    printf("scanBackward: cannot allocate B->bestSeqsJ\n");
# 930 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 931 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 932 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 933 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    exit (1);
# 934 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 935 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 936 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  for (i = 0; i < maxThreads; i++) {
# 937 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->numReports[i] = 0;
# 938 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestScores[i] = __null;
# 939 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestStartsI[i] = B->bestStartsJ[i] = __null;
# 940 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestEndsI[i] = B->bestEndsJ[i] = __null;
# 941 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    B->bestSeqsI[i] = B->bestSeqsJ[i] = __null;
# 942 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
#pragma omp parallel firstprivate(maxReports, matchLimit, minSeparation) private (i, j, m, n, r, c, npRow, npCol, myRow, myCol, weights, iBeg, jBeg, iFin, jFin, iEnd, jEnd, doublings, hyphen, gapStart, gapExtend, gapFirst, sizeT, bestR, goal, ei, ej, T, bestScores, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, mainSeq, matchSeq, threadNum, myTaskID)
# 958 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 959 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 960 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 961 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 962 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 963 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 964 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  {
# 965 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 966 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 967 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 968 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    (*____chimes_extern_func_gridInfo)(&npRow, &npCol, &myRow, &myCol);
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    threadNum = 0;
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    myTaskID = threadNum;
# 991 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 992 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 993 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 994 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 995 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (myRow >= 0 && myCol >= 0) {
# 996 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 997 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 998 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 999 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      hyphen = A->simMatrix->hyphen;
# 1000 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapStart = A->simMatrix->gapStart;
# 1001 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapExtend = A->simMatrix->gapExtend;
# 1002 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      gapFirst = gapStart + gapExtend;
# 1014 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1014 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestScores = (long long*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(long long), 5254463157148590161UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1015 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1016 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestScores for thread %d\n",
# 1017 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1018 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1019 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1020 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1021 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1022 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1023 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestStartsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590181UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1025 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestStartsI for thread %d\n",
# 1026 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1027 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1028 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1029 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1030 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1031 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1032 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1033 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestStartsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590176UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1034 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestStartsJ for thread %d\n",
# 1035 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1036 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1037 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1038 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1039 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1040 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1041 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1042 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestEndsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590171UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1043 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestEndsI for thread %d\n",
# 1044 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1045 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1046 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1047 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1048 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1049 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1050 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1051 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestEndsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 5254463157148590166UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1052 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestEndsJ for thread %d\n",
# 1053 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1054 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1055 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1056 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1057 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1058 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1059 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1060 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (bestSeqsI =
# 1061 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(unsigned char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(unsigned char*), 5254463157148590191UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1062 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1063 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestSeqsI for thread %d\n",
# 1064 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1065 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1066 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1067 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1068 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1069 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1070 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1071 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       if ( (bestSeqsJ =
# 1072 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(unsigned char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(unsigned char*), 5254463157148590936UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1073 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1074 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate bestSeqsJ for thread %d\n",
# 1075 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1076 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1077 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1078 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1079 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1080 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1081 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1082 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= maxReports; i++) {
# 1083 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestScores[i] = 0L;
# 1084 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 bestStartsI[i] = bestStartsJ[i] = bestEndsI[i] = bestEndsJ[i] = 0;
# 1085 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1086 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (bestSeqsI[i] =
# 1087 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((matchLimit + 1) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (matchLimit+1)*sizeof(unsigned char), 5254463157148590188UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1088 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate bestSeqsI[%d] for thread %d\n",
# 1090 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1091 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1092 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1093 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1094 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1095 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1096 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1097 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (bestSeqsJ[i] =
# 1098 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((matchLimit + 1) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (matchLimit+1)*sizeof(unsigned char), 5254463157148590938UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1099 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate bestSeqsJ[%d] for thread %d\n",
# 1101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      n = A->seqData->mainLen;
# 1127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      m = A->seqData->matchLen;
# 1128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iBeg = 1 + (n*myRow)/npRow;
# 1130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jBeg = 1 + (m*myCol)/npCol;
# 1131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iFin = (n*(myRow+1))/npRow;
# 1133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jFin = (m*(myCol+1))/npCol;
# 1134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      iEnd = ( (n < iFin + matchLimit - 1) ? n : iFin + matchLimit - 1 );
# 1136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      jEnd = ( (m < jFin + matchLimit - 1) ? m : jFin + matchLimit - 1 );
# 1137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (mainSeq =
# 1144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((iEnd - iBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (iEnd - iBeg + 2) * sizeof(unsigned char), 5254463157148590301UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 == __null ) {
# 1146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate mainSeq for thread %d\n",
# 1147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = iBeg; i <= iEnd; i++) {
# 1152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 mainSeq[i - iBeg + 1] = A->seqData->main[i];
# 1153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (matchSeq =
# 1156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(unsigned char), 5254463157148590373UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null) {
# 1158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate matchSeq for thread %d\n",
# 1159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (j = jBeg; j <= jEnd; j++) {
# 1164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 matchSeq[j - jBeg + 1] = A->seqData->match[j];
# 1165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (weights = (char**) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ((64) + 1) * sizeof(char*), 5254463157148590398UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate weights for thread %d\n",
# 1175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        myTaskID);
# 1176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (weights[i] = (char*) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ((64) + 1) * sizeof(char), 5254463157148590395UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("locateSimilar: cannot allocates weights[%d] for thread %d\n",
# 1186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1188 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j < ((64) + 1); j++) {
# 1189 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   weights[i][j] = A->simMatrix->similarity[i][j];
# 1190 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1191 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      sizeT = ( (A->simMatrix->matchLimit > A->seqData->maxValidation) ? A->simMatrix->matchLimit : A->seqData->maxValidation );
# 1206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      doublings = 0;
# 1207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1208 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    retry:
# 1209 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if ( (T = (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((sizeT + 1) * sizeof(unsigned char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sizeT+1) * sizeof(unsigned char*), 5254463157148590496UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1210 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    == __null ) {
# 1211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 printf("scanBackward: cannot allocate T for thread %d\n", myTaskID);
# 1212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 exit (1);
# 1216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= sizeT; i++) {
# 1219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (T[i] = (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((sizeT + 1) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sizeT+1)*sizeof(unsigned char), 5254463157148590493UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1220 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1221 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate T[%d] for thread %d\n",
# 1222 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   i, myTaskID);
# 1223 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1224 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1225 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1226 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1227 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1228 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1229 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j <= sizeT; j++) {
# 1230 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   T[i][j] = 0;
# 1231 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1232 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1233 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1234 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1235 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1236 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      bestR = 0;
# 1237 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (r = 1; r <= A->numReports[threadNum]; r++) {
# 1238 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 goal = A->goodScores[threadNum][r];
# 1239 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 ei = A->goodEndsI[threadNum][r];
# 1240 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 ej = A->goodEndsJ[threadNum][r];
# 1241 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i <= sizeT; i++) {
# 1242 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= sizeT; j++) {
# 1243 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     T[i][j] = 0;
# 1244 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1245 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1246 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1247 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1248 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1249 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( doScan_npm(A, T, sizeT, ei, ej, mainSeq, matchSeq, weights, gapFirst, gapExtend, minSeparation, r, goal, iBeg, jBeg, iFin, jFin, iEnd, jEnd, myTaskID, &bestR, bestStartsI, bestStartsJ, bestEndsI, bestEndsJ, bestSeqsI, bestSeqsJ, bestScores) == -1 ) {
# 1254 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1255 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1256 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1257 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if (doublings >= maxDoublings) {
# 1258 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     printf("\tscanBackward: sequence %d dropped for thread %d\n",
# 1259 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     r, myTaskID);
# 1260 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   } else {
# 1261 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1262 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1263 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1264 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     for (i = 1; i <= sizeT; i++) {
# 1265 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)T[i]) - sizeof(void *)), 5254463157148590493UL);free((((unsigned char *)T[i]) - sizeof(void *))); }) ;
# 1266 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1267 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      ({ free_helper((((unsigned char *)T) - sizeof(void *)), 5254463157148590496UL);free((((unsigned char *)T) - sizeof(void *))); }) ;
# 1268 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     sizeT *= 2;
# 1269 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1270 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1271 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1272 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1273 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     doublings++;
# 1274 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     goto retry;
# 1275 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1276 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1279 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1280 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (bestR == maxReports) {
# 1281 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   break;
# 1282 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1283 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->numReports[threadNum] = bestR;
# 1293 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1294 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1295 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1296 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      if (bestR != 0) {
# 1297 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestScores[threadNum] =
# 1298 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (long long*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR +1) * sizeof(long long), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1299 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestScores for thread %d\n",
# 1300 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1301 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1302 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1303 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1304 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1305 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1306 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1307 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestStartsI[threadNum] =
# 1308 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1309 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestStartsI for thread %d\n",
# 1310 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1311 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1312 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1313 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1314 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1315 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1316 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1317 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1318 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestStartsJ[threadNum] =
# 1319 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1320 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestStartsJ for thread %d\n",
# 1321 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1322 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1323 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1324 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1325 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1326 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1327 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1328 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestEndsI[threadNum] =
# 1330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestEndsI for thread %d\n",
# 1332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestEndsJ[threadNum] =
# 1341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (int*) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR+1) * sizeof(int), 5254463157148592740UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestEndsJ for thread %d\n",
# 1343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestSeqsI[threadNum] =
# 1352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(unsigned char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR + 1) * sizeof(unsigned char*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestSeqsI for thread %d\n",
# 1355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if ( (B->bestSeqsJ[threadNum] =
# 1364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       (unsigned char**) ({ void *____chimes_tmp_ptr = malloc(((bestR + 1) * sizeof(unsigned char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (bestR + 1) * sizeof(unsigned char*), 5254463157148592740UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 1365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      == __null ) {
# 1366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: cannot allocate B->bestSeqsJ for thread %d\n",
# 1367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1377 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (j = 1; j <= bestR; j++) {
# 1378 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestScores[threadNum][j] = bestScores[j];
# 1379 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsI[threadNum][j] = bestStartsI[j];
# 1380 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsJ[threadNum][j] = bestStartsJ[j];
# 1381 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsI[threadNum][j] = bestEndsI[j];
# 1382 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsJ[threadNum][j] = bestEndsJ[j];
# 1383 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsI[threadNum][j] = copyStringR_npm(bestSeqsI[j]);
# 1384 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsJ[threadNum][j] = copyStringR_npm(bestSeqsJ[j]);
# 1385 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1386 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1387 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1388 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1389 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI == __null) {
# 1390 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsI == NULL for thread %d\n",
# 1391 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1392 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1393 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1394 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1395 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1396 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1397 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1398 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI[threadNum] == __null) {
# 1399 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsI[%d] = NULL for thread\n",
# 1400 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   threadNum, myTaskID);
# 1401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1406 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1407 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 c = 0;
# 1408 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i < B->numReports[threadNum]; i++) {
# 1409 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( strlen( (char*)(B->bestSeqsI[threadNum][i]) ) < 1 ) {
# 1410 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     c++;
# 1411 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1412 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1413 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1414 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (c) {
# 1415 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: 0-length bestSeqsI strings %d of %d reports for thread %d\n",
# 1416 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   c, B->numReports[threadNum], myTaskID);
# 1417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1418 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1419 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ == __null) {
# 1420 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsJ == NULL for thread %d\n",
# 1421 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   myTaskID);
# 1422 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1423 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1424 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1425 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1426 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ[threadNum] == __null) {
# 1429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: B->bestSeqsJ[%d] = NULL for thread\n",
# 1430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   threadNum, myTaskID);
# 1431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   exit (1);
# 1435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 c = 0;
# 1438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 for (i = 1; i < B->numReports[threadNum]; i++) {
# 1439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   if ( strlen( (char *)(B->bestSeqsJ[threadNum][i]) ) < 1 ) {
# 1440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     c++;
# 1441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (c) {
# 1444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   printf("scanBackward: 0-length bestSeqsJ strings %d of %d reports for thread %d\n",
# 1445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   c, B->numReports[threadNum], myTaskID);
# 1446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestScores) - sizeof(void *)), 5254463157148590161UL);free((((unsigned char *)bestScores) - sizeof(void *))); }) ;
# 1452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestStartsI) - sizeof(void *)), 5254463157148590181UL);free((((unsigned char *)bestStartsI) - sizeof(void *))); }) ;
# 1453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestStartsJ) - sizeof(void *)), 5254463157148590176UL);free((((unsigned char *)bestStartsJ) - sizeof(void *))); }) ;
# 1454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestEndsI) - sizeof(void *)), 5254463157148590171UL);free((((unsigned char *)bestEndsI) - sizeof(void *))); }) ;
# 1455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestEndsJ) - sizeof(void *)), 5254463157148590166UL);free((((unsigned char *)bestEndsJ) - sizeof(void *))); }) ;
# 1456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= maxReports; i++) {
# 1458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)bestSeqsI[i]) - sizeof(void *)), 5254463157148590188UL);free((((unsigned char *)bestSeqsI[i]) - sizeof(void *))); }) ;
# 1459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)bestSeqsJ[i]) - sizeof(void *)), 5254463157148590938UL);free((((unsigned char *)bestSeqsJ[i]) - sizeof(void *))); }) ;
# 1460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestSeqsI) - sizeof(void *)), 5254463157148590191UL);free((((unsigned char *)bestSeqsI) - sizeof(void *))); }) ;
# 1463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)bestSeqsJ) - sizeof(void *)), 5254463157148590936UL);free((((unsigned char *)bestSeqsJ) - sizeof(void *))); }) ;
# 1464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)weights[i]) - sizeof(void *)), 5254463157148590395UL);free((((unsigned char *)weights[i]) - sizeof(void *))); }) ;
# 1467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)weights) - sizeof(void *)), 5254463157148590398UL);free((((unsigned char *)weights) - sizeof(void *))); }) ;
# 1469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 1; i <= sizeT; i++) {
# 1471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  ({ free_helper((((unsigned char *)T[i]) - sizeof(void *)), 5254463157148590493UL);free((((unsigned char *)T[i]) - sizeof(void *))); }) ;
# 1472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)T) - sizeof(void *)), 5254463157148590496UL);free((((unsigned char *)T) - sizeof(void *))); }) ;
# 1474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)mainSeq) - sizeof(void *)), 5254463157148590301UL);free((((unsigned char *)mainSeq) - sizeof(void *))); }) ;
# 1476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)matchSeq) - sizeof(void *)), 5254463157148590373UL);free((((unsigned char *)matchSeq) - sizeof(void *))); }) ;
# 1477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 1479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   BSTR_T * ____chimes_ret_var_29; ____chimes_ret_var_29 = ((B)); return ____chimes_ret_var_29; ;
# 1481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
}
# 1485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
BSTR_T *freeB_npm(BSTR_T *B) {
# 1486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  int i, j;
# 1488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
# 1489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  if (B) {
# 1490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestScores) {
# 1491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestScores[i]) {
# 1493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestScores[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestScores[i]) - sizeof(void *))); }) ;
# 1494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestScores[i] = __null;
# 1495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestScores) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestScores) - sizeof(void *))); }) ;
# 1498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestScores = __null;
# 1499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestStartsI) {
# 1501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestStartsI[i]) {
# 1503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestStartsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsI[i]) - sizeof(void *))); }) ;
# 1504 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsI[i] = __null;
# 1505 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1506 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1507 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestStartsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsI) - sizeof(void *))); }) ;
# 1508 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestStartsI = __null;
# 1509 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1510 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestStartsJ) {
# 1511 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1512 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestStartsJ[i]) {
# 1513 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestStartsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsJ[i]) - sizeof(void *))); }) ;
# 1514 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestStartsJ[i] = __null;
# 1515 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1516 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1517 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestStartsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestStartsJ) - sizeof(void *))); }) ;
# 1518 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestStartsJ = __null;
# 1519 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1520 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestEndsI) {
# 1521 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1522 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestEndsI[i]) {
# 1523 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestEndsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsI[i]) - sizeof(void *))); }) ;
# 1524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsI[i] = __null;
# 1525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestEndsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsI) - sizeof(void *))); }) ;
# 1528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestEndsI = __null;
# 1529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestEndsJ) {
# 1531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1532 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestEndsJ[i]) {
# 1533 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestEndsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsJ[i]) - sizeof(void *))); }) ;
# 1534 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestEndsJ[i] = __null;
# 1535 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1536 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1537 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestEndsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestEndsJ) - sizeof(void *))); }) ;
# 1538 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestEndsJ = __null;
# 1539 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1540 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestSeqsI) {
# 1541 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1542 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsI[i]) {
# 1543 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= B->numReports[i]; j++) {
# 1544 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     if (B->bestSeqsI[i][j]) {
# 1545 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)B->bestSeqsI[i][j]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI[i][j]) - sizeof(void *))); }) ;
# 1546 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       B->bestSeqsI[i][j] = __null;
# 1547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1549 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestSeqsI[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI[i]) - sizeof(void *))); }) ;
# 1550 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsI[i] = __null;
# 1551 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1552 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1553 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestSeqsI) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsI) - sizeof(void *))); }) ;
# 1554 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestSeqsI = __null;
# 1555 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1556 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->bestSeqsJ) {
# 1557 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      for (i = 0; i < B->numThreads; i++) {
# 1558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 if (B->bestSeqsJ[i]) {
# 1559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   for (j = 1; j <= B->numReports[i]; j++) {
# 1560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     if (B->bestSeqsJ[i][j]) {
# 1561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
        ({ free_helper((((unsigned char *)B->bestSeqsJ[i][j]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ[i][j]) - sizeof(void *))); }) ;
# 1562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       B->bestSeqsJ[i][j] = __null;
# 1563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     }
# 1564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   }
# 1565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    ({ free_helper((((unsigned char *)B->bestSeqsJ[i]) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ[i]) - sizeof(void *))); }) ;
# 1566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   B->bestSeqsJ[i] = __null;
# 1567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
 }
# 1568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      }
# 1569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->bestSeqsJ) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->bestSeqsJ) - sizeof(void *))); }) ;
# 1570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->bestSeqsJ = __null;
# 1571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    if (B->numReports) {
# 1573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
       ({ free_helper((((unsigned char *)B->numReports) - sizeof(void *)), 5254463157148592740UL);free((((unsigned char *)B->numReports) - sizeof(void *))); }) ;
# 1574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
      B->numReports = __null;
# 1575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
    }
# 1576 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
     ({ free_helper((((unsigned char *)B) - sizeof(void *)), 5254463157148592932UL);free((((unsigned char *)B) - sizeof(void *))); }) ;
# 1577 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
  }
# 1578 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
   BSTR_T * ____chimes_ret_var_30; ____chimes_ret_var_30 = ((__null)); return ____chimes_ret_var_30; ;
# 1579 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/scanBackward.c"
}





static int module_init() {
    init_module(5254463157148589660UL, 59, 5, 12, 6, 5, 1, 6, 7, 0, 4,
                           &____alias_loc_id_0, (unsigned)10, (unsigned)0, (unsigned)1, (5254463157148589660UL + 50UL), (5254463157148589660UL + 51UL), (5254463157148589660UL + 52UL), (5254463157148589660UL + 53UL), (5254463157148589660UL + 54UL), (5254463157148589660UL + 65UL), (5254463157148589660UL + 69UL), (5254463157148589660UL + 95UL), (5254463157148589660UL + 3080UL), (5254463157148589660UL + 3750UL), "gridInfo", (unsigned)4, (5254463157148589660UL + 72UL), (5254463157148589660UL + 73UL), (5254463157148589660UL + 74UL), (5254463157148589660UL + 75UL),
                           &____alias_loc_id_1, (unsigned)5, (unsigned)0, (unsigned)0, (5254463157148589660UL + 1UL), (5254463157148589660UL + 2UL), (5254463157148589660UL + 3UL), (5254463157148589660UL + 4UL), (5254463157148589660UL + 23UL),
                           &____alias_loc_id_2, (unsigned)50, (unsigned)0, (unsigned)0, (5254463157148589660UL + 54UL), (5254463157148589660UL + 55UL), (5254463157148589660UL + 56UL), (5254463157148589660UL + 57UL), (5254463157148589660UL + 58UL), (5254463157148589660UL + 59UL), (5254463157148589660UL + 60UL), (5254463157148589660UL + 61UL), (5254463157148589660UL + 62UL), (5254463157148589660UL + 63UL), (5254463157148589660UL + 64UL), (5254463157148589660UL + 66UL), (5254463157148589660UL + 67UL), (5254463157148589660UL + 68UL), (5254463157148589660UL + 70UL), (5254463157148589660UL + 71UL), (5254463157148589660UL + 76UL), (5254463157148589660UL + 77UL), (5254463157148589660UL + 78UL), (5254463157148589660UL + 79UL), (5254463157148589660UL + 80UL), (5254463157148589660UL + 81UL), (5254463157148589660UL + 82UL), (5254463157148589660UL + 83UL), (5254463157148589660UL + 84UL), (5254463157148589660UL + 85UL), (5254463157148589660UL + 86UL), (5254463157148589660UL + 87UL), (5254463157148589660UL + 88UL), (5254463157148589660UL + 89UL), (5254463157148589660UL + 90UL), (5254463157148589660UL + 91UL), (5254463157148589660UL + 92UL), (5254463157148589660UL + 93UL), (5254463157148589660UL + 94UL), (5254463157148589660UL + 96UL), (5254463157148589660UL + 501UL), (5254463157148589660UL + 506UL), (5254463157148589660UL + 511UL), (5254463157148589660UL + 516UL), (5254463157148589660UL + 521UL), (5254463157148589660UL + 531UL), (5254463157148589660UL + 641UL), (5254463157148589660UL + 713UL), (5254463157148589660UL + 735UL), (5254463157148589660UL + 738UL), (5254463157148589660UL + 833UL), (5254463157148589660UL + 836UL), (5254463157148589660UL + 1276UL), (5254463157148589660UL + 3080UL),
                           &____alias_loc_id_3, (unsigned)75, (unsigned)0, (unsigned)0, (5254463157148589660UL + 1544UL), (5254463157148589660UL + 1545UL), (5254463157148589660UL + 1546UL), (5254463157148589660UL + 1547UL), (5254463157148589660UL + 1548UL), (5254463157148589660UL + 1549UL), (5254463157148589660UL + 1550UL), (5254463157148589660UL + 1551UL), (5254463157148589660UL + 1552UL), (5254463157148589660UL + 1553UL), (5254463157148589660UL + 1554UL), (5254463157148589660UL + 1555UL), (5254463157148589660UL + 1556UL), (5254463157148589660UL + 1557UL), (5254463157148589660UL + 1558UL), (5254463157148589660UL + 1559UL), (5254463157148589660UL + 1560UL), (5254463157148589660UL + 1561UL), (5254463157148589660UL + 1562UL), (5254463157148589660UL + 1563UL), (5254463157148589660UL + 1564UL), (5254463157148589660UL + 1565UL), (5254463157148589660UL + 1566UL), (5254463157148589660UL + 1567UL), (5254463157148589660UL + 1568UL), (5254463157148589660UL + 1569UL), (5254463157148589660UL + 1570UL), (5254463157148589660UL + 1571UL), (5254463157148589660UL + 1572UL), (5254463157148589660UL + 1573UL), (5254463157148589660UL + 1574UL), (5254463157148589660UL + 1575UL), (5254463157148589660UL + 1576UL), (5254463157148589660UL + 1577UL), (5254463157148589660UL + 1578UL), (5254463157148589660UL + 1579UL), (5254463157148589660UL + 1580UL), (5254463157148589660UL + 1581UL), (5254463157148589660UL + 1582UL), (5254463157148589660UL + 1583UL), (5254463157148589660UL + 1585UL), (5254463157148589660UL + 1588UL), (5254463157148589660UL + 1589UL), (5254463157148589660UL + 1590UL), (5254463157148589660UL + 1591UL), (5254463157148589660UL + 1592UL), (5254463157148589660UL + 1593UL), (5254463157148589660UL + 1594UL), (5254463157148589660UL + 1595UL), (5254463157148589660UL + 1596UL), (5254463157148589660UL + 1597UL), (5254463157148589660UL + 1598UL), (5254463157148589660UL + 1599UL), (5254463157148589660UL + 1600UL), (5254463157148589660UL + 1601UL), (5254463157148589660UL + 1602UL), (5254463157148589660UL + 1603UL), (5254463157148589660UL + 1604UL), (5254463157148589660UL + 1605UL), (5254463157148589660UL + 1606UL), (5254463157148589660UL + 1607UL), (5254463157148589660UL + 1608UL), (5254463157148589660UL + 1609UL), (5254463157148589660UL + 1610UL), (5254463157148589660UL + 1745UL), (5254463157148589660UL + 2074UL), (5254463157148589660UL + 2168UL), (5254463157148589660UL + 2270UL), (5254463157148589660UL + 2279UL), (5254463157148589660UL + 2557UL), (5254463157148589660UL + 2562UL), (5254463157148589660UL + 2751UL), (5254463157148589660UL + 2754UL), (5254463157148589660UL + 2755UL), (5254463157148589660UL + 2758UL),
                           &____alias_loc_id_4, (unsigned)6, (unsigned)0, (unsigned)0, (5254463157148589660UL + 2760UL), (5254463157148589660UL + 2761UL), (5254463157148589660UL + 2762UL), (5254463157148589660UL + 2763UL), (5254463157148589660UL + 3080UL), (5254463157148589660UL + 3272UL),
                           &____alias_loc_id_5, (unsigned)33, (unsigned)0, (unsigned)0, (5254463157148589660UL + 3274UL), (5254463157148589660UL + 3275UL), (5254463157148589660UL + 3276UL), (5254463157148589660UL + 3277UL), (5254463157148589660UL + 3278UL), (5254463157148589660UL + 3279UL), (5254463157148589660UL + 3280UL), (5254463157148589660UL + 3281UL), (5254463157148589660UL + 3282UL), (5254463157148589660UL + 3283UL), (5254463157148589660UL + 3284UL), (5254463157148589660UL + 3285UL), (5254463157148589660UL + 3286UL), (5254463157148589660UL + 3287UL), (5254463157148589660UL + 3288UL), (5254463157148589660UL + 3289UL), (5254463157148589660UL + 3290UL), (5254463157148589660UL + 3291UL), (5254463157148589660UL + 3292UL), (5254463157148589660UL + 3293UL), (5254463157148589660UL + 3294UL), (5254463157148589660UL + 3295UL), (5254463157148589660UL + 3296UL), (5254463157148589660UL + 3297UL), (5254463157148589660UL + 3298UL), (5254463157148589660UL + 3299UL), (5254463157148589660UL + 3300UL), (5254463157148589660UL + 3301UL), (5254463157148589660UL + 3302UL), (5254463157148589660UL + 3699UL), (5254463157148589660UL + 3700UL), (5254463157148589660UL + 3701UL), (5254463157148589660UL + 3702UL),
                            "copyStringR", 0, "_Z11copyStringRPKh", "_Z15copyStringR_npmPKh", 0, 1, (5254463157148589660UL + 41UL), (5254463157148589660UL + 23UL), 7, "strlen", 1, (5254463157148589660UL + 41UL), 0UL, "printf", 2, (5254463157148589660UL + 3703UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 23UL), "printf", 2, (5254463157148589660UL + 3704UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "strcpy", 2, (5254463157148589660UL + 23UL), (5254463157148589660UL + 41UL), (5254463157148589660UL + 23UL),
                            "tracePathR", 1, (void *)(&tracePathR_npm), (void *)__null, 0, 18, (5254463157148589660UL + 3685UL), (5254463157148589660UL + 3686UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3693UL), (5254463157148589660UL + 3694UL), 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3699UL), (5254463157148589660UL + 3700UL), (5254463157148589660UL + 3701UL), (5254463157148589660UL + 3702UL), 0UL, 7, "printf", 3, (5254463157148589660UL + 3746UL), 0UL, 0UL, 0UL, "printf", 3, (5254463157148589660UL + 3747UL), 0UL, 0UL, 0UL, "printf", 3, (5254463157148589660UL + 3746UL), 0UL, 0UL, 0UL, "printf", 3, (5254463157148589660UL + 3747UL), 0UL, 0UL, 0UL, "tracePathR", 18, (5254463157148589660UL + 3685UL), (5254463157148589660UL + 3686UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3693UL), (5254463157148589660UL + 3694UL), 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3699UL), (5254463157148589660UL + 3700UL), (5254463157148589660UL + 3701UL), (5254463157148589660UL + 3702UL), 0UL, "tracePathR", 18, (5254463157148589660UL + 3685UL), (5254463157148589660UL + 3686UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3693UL), (5254463157148589660UL + 3694UL), 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3699UL), (5254463157148589660UL + 3700UL), (5254463157148589660UL + 3701UL), (5254463157148589660UL + 3702UL), 0UL, "tracePathR", 18, (5254463157148589660UL + 3685UL), (5254463157148589660UL + 3686UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3693UL), (5254463157148589660UL + 3694UL), 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 3699UL), (5254463157148589660UL + 3700UL), (5254463157148589660UL + 3701UL), (5254463157148589660UL + 3702UL), 0UL,
                            "scanBackward", 0, "_Z12scanBackwardP4astriii", "_Z16scanBackward_npmP4astriii", 1, &____alias_loc_id_0, 4, (5254463157148589660UL + 800UL), 0UL, 0UL, 0UL, (5254463157148589660UL + 3750UL), 126, "malloc", 1, 0UL, (5254463157148589660UL + 3750UL), "printf", 1, (5254463157148589660UL + 3705UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3706UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3706UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3708UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3708UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3710UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3710UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3710UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 1, (5254463157148589660UL + 3710UL), 0UL, "exit", 1, 0UL, 0UL, "gridInfo", 4, (5254463157148589660UL + 72UL), (5254463157148589660UL + 73UL), (5254463157148589660UL + 74UL), (5254463157148589660UL + 75UL), 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 501UL), "printf", 2, (5254463157148589660UL + 3714UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 521UL), "printf", 2, (5254463157148589660UL + 3715UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 516UL), "printf", 2, (5254463157148589660UL + 3715UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 511UL), "printf", 2, (5254463157148589660UL + 3717UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 506UL), "printf", 2, (5254463157148589660UL + 3717UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 531UL), "printf", 2, (5254463157148589660UL + 3717UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 1276UL), "printf", 2, (5254463157148589660UL + 3717UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 528UL), "printf", 3, (5254463157148589660UL + 3721UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 1278UL), "printf", 3, (5254463157148589660UL + 3721UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 641UL), "printf", 2, (5254463157148589660UL + 3704UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 713UL), "printf", 2, (5254463157148589660UL + 3724UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 738UL), "printf", 2, (5254463157148589660UL + 3704UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 735UL), "printf", 3, (5254463157148589660UL + 3721UL), 0UL, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 836UL), "printf", 2, (5254463157148589660UL + 3727UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 833UL), "printf", 3, (5254463157148589660UL + 3728UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "doScan", 28, (5254463157148589660UL + 800UL), (5254463157148589660UL + 836UL), 0UL, 0UL, 0UL, (5254463157148589660UL + 641UL), (5254463157148589660UL + 713UL), (5254463157148589660UL + 738UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 61UL), (5254463157148589660UL + 521UL), (5254463157148589660UL + 516UL), (5254463157148589660UL + 511UL), (5254463157148589660UL + 506UL), (5254463157148589660UL + 531UL), (5254463157148589660UL + 1276UL), (5254463157148589660UL + 501UL), 0UL, "printf", 3, (5254463157148589660UL + 3729UL), 0UL, 0UL, 0UL, "free", 1, (5254463157148589660UL + 833UL), 0UL, "free", 1, (5254463157148589660UL + 836UL), 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3721UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3731UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3731UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3733UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3733UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3733UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3733UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "copyStringR", 1, (5254463157148589660UL + 528UL), (5254463157148589660UL + 3080UL), "copyStringR", 1, (5254463157148589660UL + 1278UL), (5254463157148589660UL + 3080UL), "printf", 2, (5254463157148589660UL + 3729UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "printf", 3, (5254463157148589660UL + 3729UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "strlen", 1, (5254463157148589660UL + 3080UL), 0UL, "printf", 4, (5254463157148589660UL + 3739UL), 0UL, 0UL, 0UL, 0UL, "printf", 2, (5254463157148589660UL + 3729UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "printf", 3, (5254463157148589660UL + 3729UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "strlen", 1, (5254463157148589660UL + 3080UL), 0UL, "printf", 4, (5254463157148589660UL + 3739UL), 0UL, 0UL, 0UL, 0UL, "free", 1, (5254463157148589660UL + 501UL), 0UL, "free", 1, (5254463157148589660UL + 521UL), 0UL, "free", 1, (5254463157148589660UL + 516UL), 0UL, "free", 1, (5254463157148589660UL + 511UL), 0UL, "free", 1, (5254463157148589660UL + 506UL), 0UL, "free", 1, (5254463157148589660UL + 528UL), 0UL, "free", 1, (5254463157148589660UL + 1278UL), 0UL, "free", 1, (5254463157148589660UL + 531UL), 0UL, "free", 1, (5254463157148589660UL + 1276UL), 0UL, "free", 1, (5254463157148589660UL + 735UL), 0UL, "free", 1, (5254463157148589660UL + 738UL), 0UL, "free", 1, (5254463157148589660UL + 833UL), 0UL, "free", 1, (5254463157148589660UL + 836UL), 0UL, "free", 1, (5254463157148589660UL + 641UL), 0UL, "free", 1, (5254463157148589660UL + 713UL), 0UL,
                            "doScan", 1, (void *)(&doScan_npm), (void *)__null, 0, 28, (5254463157148589660UL + 2731UL), (5254463157148589660UL + 2732UL), 0UL, 0UL, 0UL, (5254463157148589660UL + 2736UL), (5254463157148589660UL + 2737UL), (5254463157148589660UL + 2738UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 2751UL), (5254463157148589660UL + 2270UL), (5254463157148589660UL + 2279UL), (5254463157148589660UL + 2754UL), (5254463157148589660UL + 2755UL), (5254463157148589660UL + 2756UL), (5254463157148589660UL + 2757UL), (5254463157148589660UL + 2758UL), 0UL, 85, "malloc", 1, 0UL, (5254463157148589660UL + 1745UL), "printf", 2, (5254463157148589660UL + 3743UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 2074UL), "malloc", 1, 0UL, (5254463157148589660UL + 2557UL), "printf", 2, (5254463157148589660UL + 3743UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (5254463157148589660UL + 2562UL), "printf", 2, (5254463157148589660UL + 3743UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "tracePathR", 18, (5254463157148589660UL + 2731UL), (5254463157148589660UL + 2732UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 2736UL), (5254463157148589660UL + 2737UL), 0UL, 0UL, 0UL, 0UL, (5254463157148589660UL + 1586UL), (5254463157148589660UL + 1587UL), (5254463157148589660UL + 2425UL), (5254463157148589660UL + 2432UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 2074UL), 0UL, "free", 1, (5254463157148589660UL + 1745UL), 0UL, "free", 1, (5254463157148589660UL + 2557UL), 0UL, "free", 1, (5254463157148589660UL + 2562UL), 0UL,
                            "freeB", 0, "_Z5freeBP4bstr", "_Z9freeB_npmP4bstr", 0, 1, (5254463157148589660UL + 3272UL), (5254463157148589660UL + 3750UL), 18, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3080UL), 0UL, "free", 1, (5254463157148589660UL + 3272UL), 0UL,
                               "gridInfo", (void **)&(____chimes_extern_func_gridInfo),
                           "copyStringR", &(____chimes_does_checkpoint_copyStringR_npm),
                           "tracePathR", &(____chimes_does_checkpoint_tracePathR_npm),
                           "scanBackward", &(____chimes_does_checkpoint_scanBackward_npm),
                           "doScan", &(____chimes_does_checkpoint_doScan_npm),
                           "freeB", &(____chimes_does_checkpoint_freeB_npm),
                           "gridInfo", &(____chimes_does_checkpoint_gridInfo_npm),
                             (5254463157148589660UL + 2732UL), (5254463157148589660UL + 2168UL),
                             (5254463157148589660UL + 3750UL), (5254463157148589660UL + 3080UL),
                             (5254463157148589660UL + 2738UL), (5254463157148589660UL + 1863UL),
                             (5254463157148589660UL + 3686UL), (5254463157148589660UL + 3385UL),
                             (5254463157148589660UL + 3276UL), (5254463157148589660UL + 3686UL),
                             (5254463157148589660UL + 88UL), (5254463157148589660UL + 836UL),
                             (5254463157148589660UL + 89UL), (5254463157148589660UL + 531UL),
                             (5254463157148589660UL + 3272UL), (5254463157148589660UL + 3080UL),
                             (5254463157148589660UL + 3292UL), (5254463157148589660UL + 3702UL),
                             (5254463157148589660UL + 82UL), (5254463157148589660UL + 521UL),
                             (5254463157148589660UL + 83UL), (5254463157148589660UL + 516UL),
                             (5254463157148589660UL + 86UL), (5254463157148589660UL + 641UL),
                             (5254463157148589660UL + 87UL), (5254463157148589660UL + 713UL),
                             (5254463157148589660UL + 84UL), (5254463157148589660UL + 511UL),
                             (5254463157148589660UL + 85UL), (5254463157148589660UL + 506UL),
                             (5254463157148589660UL + 1546UL), (5254463157148589660UL + 2732UL),
                             (5254463157148589660UL + 1568UL), (5254463157148589660UL + 2754UL),
                             (5254463157148589660UL + 1588UL), (5254463157148589660UL + 1745UL),
                             (5254463157148589660UL + 1545UL), (5254463157148589660UL + 2731UL),
                             (5254463157148589660UL + 836UL), (5254463157148589660UL + 833UL),
                             (5254463157148589660UL + 3283UL), (5254463157148589660UL + 3693UL),
                             (5254463157148589660UL + 3290UL), (5254463157148589660UL + 3700UL),
                             (5254463157148589660UL + 1745UL), (5254463157148589660UL + 2074UL),
                             (5254463157148589660UL + 1UL), (5254463157148589660UL + 41UL),
                             (5254463157148589660UL + 1569UL), (5254463157148589660UL + 2755UL),
                             (5254463157148589660UL + 3UL), (5254463157148589660UL + 23UL),
                             (5254463157148589660UL + 4UL), (5254463157148589660UL + 23UL),
                             (5254463157148589660UL + 738UL), (5254463157148589660UL + 735UL),
                             (5254463157148589660UL + 1565UL), (5254463157148589660UL + 2751UL),
                             (5254463157148589660UL + 1566UL), (5254463157148589660UL + 2270UL),
                             (5254463157148589660UL + 1567UL), (5254463157148589660UL + 2279UL),
                             (5254463157148589660UL + 2763UL), (5254463157148589660UL + 3750UL),
                             (5254463157148589660UL + 2760UL), (5254463157148589660UL + 3272UL),
                             (5254463157148589660UL + 1276UL), (5254463157148589660UL + 1278UL),
                             (5254463157148589660UL + 1589UL), (5254463157148589660UL + 2557UL),
                             (5254463157148589660UL + 1590UL), (5254463157148589660UL + 2562UL),
                             (5254463157148589660UL + 3289UL), (5254463157148589660UL + 3699UL),
                             (5254463157148589660UL + 1572UL), (5254463157148589660UL + 2758UL),
                             (5254463157148589660UL + 91UL), (5254463157148589660UL + 501UL),
                             (5254463157148589660UL + 90UL), (5254463157148589660UL + 1276UL),
                             (5254463157148589660UL + 93UL), (5254463157148589660UL + 738UL),
                             (5254463157148589660UL + 3284UL), (5254463157148589660UL + 3694UL),
                             (5254463157148589660UL + 95UL), (5254463157148589660UL + 3750UL),
                             (5254463157148589660UL + 96UL), (5254463157148589660UL + 3750UL),
                             (5254463157148589660UL + 1551UL), (5254463157148589660UL + 2737UL),
                             (5254463157148589660UL + 1550UL), (5254463157148589660UL + 2736UL),
                             (5254463157148589660UL + 1552UL), (5254463157148589660UL + 2738UL),
                             (5254463157148589660UL + 50UL), (5254463157148589660UL + 800UL),
                             (5254463157148589660UL + 3685UL), (5254463157148589660UL + 3647UL),
                             (5254463157148589660UL + 3080UL), (5254463157148589660UL + 3080UL),
                             (5254463157148589660UL + 2756UL), (5254463157148589660UL + 2425UL),
                             (5254463157148589660UL + 2757UL), (5254463157148589660UL + 2432UL),
                             (5254463157148589660UL + 3275UL), (5254463157148589660UL + 3685UL),
                             (5254463157148589660UL + 3291UL), (5254463157148589660UL + 3701UL),
                             (5254463157148589660UL + 531UL), (5254463157148589660UL + 528UL),
                             (5254463157148589660UL + 802UL), (5254463157148589660UL + 662UL),
                             (5254463157148589660UL + 1571UL), (5254463157148589660UL + 2757UL),
                             (5254463157148589660UL + 800UL), (5254463157148589660UL + 802UL),
                             (5254463157148589660UL + 1570UL), (5254463157148589660UL + 2756UL),
                     "astr", 448UL, 7, "%struct.seqdat*", (int)__builtin_offsetof (struct astr, seqData), "%struct.simmat*", (int)__builtin_offsetof (struct astr, simMatrix), "long long int**", (int)__builtin_offsetof (struct astr, goodScores), "int", (int)__builtin_offsetof (struct astr, numThreads), "int*", (int)__builtin_offsetof (struct astr, numReports), "int**", (int)__builtin_offsetof (struct astr, goodEndsI), "int**", (int)__builtin_offsetof (struct astr, goodEndsJ),
                     "bstr", 576UL, 9, "long long int**", (int)__builtin_offsetof (struct bstr, bestScores), "int", (int)__builtin_offsetof (struct bstr, numThreads), "int*", (int)__builtin_offsetof (struct bstr, numReports), "int**", (int)__builtin_offsetof (struct bstr, bestStartsI), "int**", (int)__builtin_offsetof (struct bstr, bestStartsJ), "int**", (int)__builtin_offsetof (struct bstr, bestEndsI), "int**", (int)__builtin_offsetof (struct bstr, bestEndsJ), "unsigned char***", (int)__builtin_offsetof (struct bstr, bestSeqsI), "unsigned char***", (int)__builtin_offsetof (struct bstr, bestSeqsJ),
                     "seqdat", 256UL, 5, "unsigned char*", (int)__builtin_offsetof (struct seqdat, main), "unsigned char*", (int)__builtin_offsetof (struct seqdat, match), "int", (int)__builtin_offsetof (struct seqdat, mainLen), "int", (int)__builtin_offsetof (struct seqdat, matchLen), "int", (int)__builtin_offsetof (struct seqdat, maxValidation),
                     "simmat", 40960UL, 14, "[ 4225 x char ]", (int)__builtin_offsetof (struct simmat, similarity), "[ 66 x char ]", (int)__builtin_offsetof (struct simmat, aminoAcid), "char*", (int)__builtin_offsetof (struct simmat, bases), "[ 66 x char* ]", (int)__builtin_offsetof (struct simmat, codon), "[ 129 x unsigned char ]", (int)__builtin_offsetof (struct simmat, encode), "[ 129 x unsigned char ]", (int)__builtin_offsetof (struct simmat, encode_first), "char", (int)__builtin_offsetof (struct simmat, hyphen), "char", (int)__builtin_offsetof (struct simmat, star), "int", (int)__builtin_offsetof (struct simmat, exact), "int", (int)__builtin_offsetof (struct simmat, similar), "int", (int)__builtin_offsetof (struct simmat, dissimilar), "int", (int)__builtin_offsetof (struct simmat, gapStart), "int", (int)__builtin_offsetof (struct simmat, gapExtend), "int", (int)__builtin_offsetof (struct simmat, matchLimit),
                             "copyStringR", "_Z11copyStringRPKh", 0, 0,
                             "doScan", "_ZL6doScanPK4astrPPhiiiPKhS5_PPciiiixiiiiiiiPiS8_S8_S8_S8_S3_S3_Px", 0, 1, "tracePathR",
                             "scanBackward", "_Z12scanBackwardP4astriii", 0, 4, "gridInfo", "doScan", "copyStringR", "copyStringR",
                             "tracePathR", "_ZL10tracePathRPK4astrPPhiiiiiiPKhS5_iiiiPiS6_S2_S2_", 0, 3, "tracePathR", "tracePathR", "tracePathR",
                             "freeB", "_Z5freeBP4bstr", 0, 0,
                        "scanBackward|A|0", 1, "gridInfo",
                        "scanBackward|maxReports|0", 1, "gridInfo",
                        "scanBackward|minSeparation|0", 1, "gridInfo",
                        "scanBackward|maxDoublings|0", 1, "gridInfo",
                        "scanBackward|bestR|0", 1, "scanBackward",
                        "scanBackward|matchLimit|0", 1, "gridInfo",
                        "scanBackward|npRow|0", 1, "scanBackward",
                        "scanBackward|npCol|0", 1, "gridInfo",
                        "scanBackward|myRow|0", 1, "gridInfo",
                        "scanBackward|myCol|0", 1, "gridInfo",
                        "scanBackward|B|0", 1, "gridInfo",
                        "doScan|rsi|0", 1, "doScan",
        "tracePathR", 0UL, (int)18, 5254463157148593345UL, 5254463157148593346UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 5254463157148593353UL, 5254463157148593354UL, 0UL, 0UL, 0UL, 0UL, 5254463157148593359UL, 5254463157148593360UL, 5254463157148593361UL, 5254463157148593362UL,
        "tracePathR", 0UL, (int)18, 5254463157148593345UL, 5254463157148593346UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 5254463157148593353UL, 5254463157148593354UL, 0UL, 0UL, 0UL, 0UL, 5254463157148593359UL, 5254463157148593360UL, 5254463157148593361UL, 5254463157148593362UL,
        "tracePathR", 0UL, (int)18, 5254463157148593345UL, 5254463157148593346UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 5254463157148593353UL, 5254463157148593354UL, 0UL, 0UL, 0UL, 0UL, 5254463157148593359UL, 5254463157148593360UL, 5254463157148593361UL, 5254463157148593362UL,
        "tracePathR", 0UL, (int)18, 5254463157148592391UL, 5254463157148592392UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 5254463157148592396UL, 5254463157148592397UL, 0UL, 0UL, 0UL, 0UL, 5254463157148591246UL, 5254463157148591247UL, 5254463157148592085UL, 5254463157148592092UL,
        "doScan", 0UL, (int)28, 5254463157148590460UL, 5254463157148590496UL, 0UL, 0UL, 0UL, 5254463157148590301UL, 5254463157148590373UL, 5254463157148590398UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 5254463157148589721UL, 5254463157148590181UL, 5254463157148590176UL, 5254463157148590171UL, 5254463157148590166UL, 5254463157148590191UL, 5254463157148590936UL, 5254463157148590161UL,
        "copyStringR", 5254463157148592740UL, (int)1, 5254463157148590188UL,
        "copyStringR", 5254463157148592740UL, (int)1, 5254463157148590938UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
