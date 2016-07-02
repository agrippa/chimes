# 1 "sequenceAlignment.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "sequenceAlignment.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_dispElapsedTime_npm = 1;
static int ____chimes_does_checkpoint_freeA_npm = 1;
static int ____chimes_does_checkpoint_freeB_npm = 1;
static int ____chimes_does_checkpoint_freeC_npm = 1;
static int ____chimes_does_checkpoint_freeSeqData_npm = 1;
static int ____chimes_does_checkpoint_freeSimMatrix_npm = 1;
static int ____chimes_does_checkpoint_genScalData_npm = 1;
static int ____chimes_does_checkpoint_genSimMatrix_npm = 1;
static int ____chimes_does_checkpoint_getSeconds_npm = 1;
static int ____chimes_does_checkpoint_getUserParameters_npm = 1;
static int ____chimes_does_checkpoint_mergeAlignment_npm = 1;
static int ____chimes_does_checkpoint_pairwiseAlign_npm = 1;
static int ____chimes_does_checkpoint_scanBackward_npm = 1;
static int ____chimes_does_checkpoint_verifyAlignment_npm = 1;
static int ____chimes_does_checkpoint_verifyData_npm = 1;
static int ____chimes_does_checkpoint_verifyMergeAlignment_npm = 1;

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
static unsigned ____alias_loc_id_13;
static unsigned ____alias_loc_id_14;
static unsigned ____alias_loc_id_15;
static unsigned ____alias_loc_id_16;
static unsigned ____alias_loc_id_17;
static unsigned ____alias_loc_id_18;
static unsigned ____alias_loc_id_19;
static unsigned ____alias_loc_id_20;
static unsigned ____alias_loc_id_21;
# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
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
# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 11 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
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
# 12 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
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
# 13 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
# 1 "/usr/include/strings.h" 1 3 4
# 30 "/usr/include/strings.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 31 "/usr/include/strings.h" 2 3 4






extern "C" {



extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern void bcopy (__const void *__src, void *__dest, size_t __n) throw ();


extern void bzero (void *__s, size_t __n) throw ();



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
# 110 "/usr/include/strings.h" 3 4
extern int ffs (int __i) throw () __attribute__ ((const));



extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__));
# 129 "/usr/include/strings.h" 3 4
extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));


}
# 14 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
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
# 15 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
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
# 16 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
# 16 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 17 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"

# 1 "/scratch/jmg3/chimes/src/libchimes/checkpoint.h" 1
# 11 "/scratch/jmg3/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 19 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
# 19 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 20 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"

# 1 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h" 1
# 91 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
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
# 207 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
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
# 22 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c" 2
# 22 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 23 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 24 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     struct timeval tp; ;
# 25 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     struct timezone tzp; ;
# 26 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 27 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_20, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 28 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_20, ____chimes_did_disable0, false); }
# 29 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
static void (*____chimes_extern_func_dispElapsedTime)(double) = dispElapsedTime;static struct astr *(*____chimes_extern_func_freeA)(struct astr *) = freeA;static struct bstr *(*____chimes_extern_func_freeB)(struct bstr *) = freeB;static struct cstr *(*____chimes_extern_func_freeC)(struct cstr *) = freeC;static struct seqdat *(*____chimes_extern_func_freeSeqData)(struct seqdat *) = freeSeqData;static struct simmat *(*____chimes_extern_func_freeSimMatrix)(struct simmat *) = freeSimMatrix;static struct seqdat *(*____chimes_extern_func_genScalData)(unsigned int, struct simmat *, int, int, int) = genScalData;static struct simmat *(*____chimes_extern_func_genSimMatrix)(int, int, int, int, int, int, int) = genSimMatrix;static double (*____chimes_extern_func_getSeconds)(void) = getSeconds;static void (*____chimes_extern_func_getUserParameters)(void) = getUserParameters;static struct cstr *(*____chimes_extern_func_mergeAlignment)(struct bstr *, int, int) = mergeAlignment;static struct astr *(*____chimes_extern_func_pairwiseAlign)(struct seqdat *, struct simmat *, int, int, int) = pairwiseAlign;static struct bstr *(*____chimes_extern_func_scanBackward)(struct astr *, int, int, int) = scanBackward;static void (*____chimes_extern_func_verifyAlignment)(struct simmat *, struct bstr *, int) = verifyAlignment;static void (*____chimes_extern_func_verifyData)(struct simmat *, struct seqdat *, int, int) = verifyData;static void (*____chimes_extern_func_verifyMergeAlignment)(struct simmat *, struct cstr *, int) = verifyMergeAlignment;
int main_quick(int argc, char **argv); int main(int argc, char **argv);
int main_resumable(int argc, char **argv) {const int ____chimes_did_disable1 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(10582626670436340937UL)) ; double end_time;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double start_time;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
CSTR_T *C;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
BSTR_T *B;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
ASTR_T *A;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
SEQDATA_T *seqData;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
SIMMATRIX_T *simMatrix;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double startTime;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int matchSeqLength;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int mainSeqLength;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int randomSeed;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int myTaskID;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
 register_stack_vars(12, "main|end_time|0", &____must_checkpoint_main_end_time_0, "double", (void *)(&end_time), (size_t)8, 0, 0, 0, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|C|0", (int *)0x0, "%struct.cstr*", (void *)(&C), (size_t)8, 1, 0, 0, "main|B|0", (int *)0x0, "%struct.bstr*", (void *)(&B), (size_t)8, 1, 0, 0, "main|A|0", (int *)0x0, "%struct.astr*", (void *)(&A), (size_t)8, 1, 0, 0, "main|seqData|0", (int *)0x0, "%struct.seqdat*", (void *)(&seqData), (size_t)8, 1, 0, 0, "main|simMatrix|0", (int *)0x0, "%struct.simmat*", (void *)(&simMatrix), (size_t)8, 1, 0, 0, "main|startTime|0", (int *)0x0, "double", (void *)(&startTime), (size_t)8, 0, 0, 0, "main|matchSeqLength|0", (int *)0x0, "i32", (void *)(&matchSeqLength), (size_t)4, 0, 0, 0, "main|mainSeqLength|0", (int *)0x0, "i32", (void *)(&mainSeqLength), (size_t)4, 0, 0, 0, "main|randomSeed|0", (int *)0x0, "i32", (void *)(&randomSeed), (size_t)4, 0, 0, 0, "main|myTaskID|0", (int *)0x0, "i32", (void *)(&myTaskID), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(18): { goto call_lbl_18; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(25): { goto call_lbl_25; } case(26): { goto call_lbl_26; } case(27): { goto call_lbl_27; } case(28): { goto call_lbl_28; } case(29): { goto call_lbl_29; } default: { chimes_error(); } } } ; ;
# 31 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 32 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   int ierr; ;
# 33 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   int scale; ;
# 34 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  time_t timeVar; ;
# 35 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  struct tm *timeStr; ;
# 36 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 37 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 38 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 39 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 40 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 41 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  myTaskID = 0;
# 64 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 65 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 66 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 67 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 68 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if ( (argc != 1) && (argc != 2) ) {
# 69 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    if (myTaskID == 0) {
# 70 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      printf("Usage: %s <2*log2(sequence length)>\n", argv[0]);
# 71 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    }
# 72 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    exit (1);
# 73 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 74 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 75 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (argc == 1) {
# 76 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    scale = (30);
# 77 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  } else {
# 78 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    scale = atoi(argv[1]);
# 79 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    if (scale < 0) {
# 80 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      if (myTaskID == 0) {
# 81 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
 printf("sequenceAlignment: 2*log2(sequence length) must be >= 0!\n");
# 82 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      }
# 83 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      exit(1);
# 84 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    }
# 85 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 86 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 87 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      call_lbl_0: start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 88 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 89 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 90 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 91 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  mainSeqLength = matchSeqLength = 1 << (scale / 2);
# 92 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 93 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 94 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 95 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 96 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 97 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 98 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 99 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_1: (____chimes_does_checkpoint_getUserParameters_npm ? ( ({ calling((void*)getUserParameters, 1, ____alias_loc_id_19, 0UL, 0); (getUserParameters)(); }) ) : (({ calling_npm("getUserParameters", ____alias_loc_id_19); (*____chimes_extern_func_getUserParameters)(); })));
# 100 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 101 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 102 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nHPCS SSCA #1 Bioinformatics Sequence Alignment ");
# 103 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("Executable Specification:\nRunning...\n");
# 104 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 105 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 106 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 107 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  randomSeed = 1;
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 126 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nScalable data generation beginning execution...\n");
# 127 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 128 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 129 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 130 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_2: checkpoint_transformed(2, ____alias_loc_id_18);
# 131 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 132 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 133 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_3: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 3, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 134 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 135 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 136 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 137 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_4: simMatrix = (____chimes_does_checkpoint_genSimMatrix_npm ? ( ({ int ____chimes_arg0; int ____chimes_arg1; int ____chimes_arg2; int ____chimes_arg3; int ____chimes_arg4; int ____chimes_arg5; int ____chimes_arg6; if (!____chimes_replaying) { ____chimes_arg0 = ((5)); ____chimes_arg1 = ((4)); ____chimes_arg2 = ((-3)); ____chimes_arg3 = ((8)); ____chimes_arg4 = ((1)); ____chimes_arg5 = ((60)); ____chimes_arg6 = (((64) + 1)); } calling((void*)genSimMatrix, 4, ____alias_loc_id_17, 10582626670436340820UL, 7, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (genSimMatrix)(____chimes_arg0, ____chimes_arg1, ____chimes_arg2, ____chimes_arg3, ____chimes_arg4, ____chimes_arg5, ____chimes_arg6); }) ) : (({ calling_npm("genSimMatrix", ____alias_loc_id_17); (*____chimes_extern_func_genSimMatrix)((5), (4), (-3), (8), (1), (60), ((64) + 1)); })));
# 139 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 140 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 141 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tgenSimMatrix() completed execution.\n");
# 142 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 143 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 144 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 145 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_5: checkpoint_transformed(5, ____alias_loc_id_16);
# 146 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 147 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 148 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_6: seqData = (____chimes_does_checkpoint_genScalData_npm ? ( ({ int ____chimes_arg11; if (!____chimes_replaying) { ____chimes_arg11 = (((64) + 1)); } calling((void*)genScalData, 6, ____alias_loc_id_15, 10582626670436340832UL, 5, (size_t)(0UL), (size_t)(10582626670436340820UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (genScalData)(randomSeed, simMatrix, mainSeqLength, matchSeqLength, ____chimes_arg11); }) ) : (({ calling_npm("genScalData", ____alias_loc_id_15); (*____chimes_extern_func_genScalData)(randomSeed, simMatrix, mainSeqLength, matchSeqLength, ((64) + 1)); })));
# 149 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 150 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 151 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tgenScalData() completed execution.\n");
# 152 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 153 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 154 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_7: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 7, ____alias_loc_id_14, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_14); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 155 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 156 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 157 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_8: checkpoint_transformed(8, 0);
# 158 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 159 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 160 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 161 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 162 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 163 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_9: (____chimes_does_checkpoint_verifyData_npm ? ( ({ int ____chimes_arg15; int ____chimes_arg16; if (!____chimes_replaying) { ____chimes_arg15 = ((20)); ____chimes_arg16 = ((5)); } calling((void*)verifyData, 9, ____alias_loc_id_13, 0UL, 4, (size_t)(10582626670436340820UL), (size_t)(10582626670436340832UL), (size_t)(0UL), (size_t)(0UL)); (verifyData)(simMatrix, seqData, ____chimes_arg15, ____chimes_arg16); }) ) : (({ calling_npm("verifyData", ____alias_loc_id_13); (*____chimes_extern_func_verifyData)(simMatrix, seqData, (20), (5)); })));
# 164 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 165 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 166 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 167 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 168 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 169 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 170 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 171 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nKernel 1 - pairwiseAlign() beginning execution...\n");
# 172 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 173 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 174 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_10: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 10, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 175 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 176 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 177 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 178 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_11: A = (____chimes_does_checkpoint_pairwiseAlign_npm ? ( ({ int ____chimes_arg19; int ____chimes_arg20; int ____chimes_arg21; if (!____chimes_replaying) { ____chimes_arg19 = ((20)); ____chimes_arg20 = ((200)); ____chimes_arg21 = ((5)); } calling((void*)pairwiseAlign, 11, ____alias_loc_id_12, 10582626670436340854UL, 5, (size_t)(10582626670436340832UL), (size_t)(10582626670436340820UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (pairwiseAlign)(seqData, simMatrix, ____chimes_arg19, ____chimes_arg20, ____chimes_arg21); }) ) : (({ calling_npm("pairwiseAlign", ____alias_loc_id_12); (*____chimes_extern_func_pairwiseAlign)(seqData, simMatrix, (20), (200), (5)); })));
# 180 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 181 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 182 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tpairwiseAlign() completed execution.\n");
# 183 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 184 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 185 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_12: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 12, ____alias_loc_id_11, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_11); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 186 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 187 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 188 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_13: checkpoint_transformed(13, 0);
# 189 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 190 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 191 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 192 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 193 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 194 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 195 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 196 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nKernel 2A - scanBackward() beginning execution...\n");
# 197 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 198 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 199 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_14: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 14, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 200 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 201 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 202 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 203 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_15: B = (____chimes_does_checkpoint_scanBackward_npm ? ( ({ int ____chimes_arg24; int ____chimes_arg25; int ____chimes_arg26; if (!____chimes_replaying) { ____chimes_arg24 = (((200) / 2)); ____chimes_arg25 = ((5)); ____chimes_arg26 = ((3)); } calling((void*)scanBackward, 15, ____alias_loc_id_10, 10582626670436340872UL, 4, (size_t)(10582626670436340854UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (scanBackward)(A, ____chimes_arg24, ____chimes_arg25, ____chimes_arg26); }) ) : (({ calling_npm("scanBackward", ____alias_loc_id_10); (*____chimes_extern_func_scanBackward)(A, ((200)/2), (5), (3)); })));
# 204 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 205 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 206 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tscanBackward() completed execution.\n");
# 207 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 208 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 209 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_16: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 16, ____alias_loc_id_9, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_9); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 210 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 211 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 212 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_17: checkpoint_transformed(17, 0);
# 213 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 214 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 215 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 216 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 217 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 218 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_18: (____chimes_does_checkpoint_verifyAlignment_npm ? ( ({ int ____chimes_arg30; if (!____chimes_replaying) { ____chimes_arg30 = ((6)); } calling((void*)verifyAlignment, 18, ____alias_loc_id_8, 0UL, 3, (size_t)(10582626670436340820UL), (size_t)(10582626670436340872UL), (size_t)(0UL)); (verifyAlignment)(simMatrix, B, ____chimes_arg30); }) ) : (({ calling_npm("verifyAlignment", ____alias_loc_id_8); (*____chimes_extern_func_verifyAlignment)(simMatrix, B, (6)); })));
# 219 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 220 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 221 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 222 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 223 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 224 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 225 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 226 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nKernel 2B - mergeAlignment() beginning execution...\n");
# 227 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 228 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 229 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_19: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 19, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 230 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 231 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 232 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 233 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_20: C = (____chimes_does_checkpoint_mergeAlignment_npm ? ( ({ int ____chimes_arg32; int ____chimes_arg33; if (!____chimes_replaying) { ____chimes_arg32 = (((200) / 2)); ____chimes_arg33 = ((5)); } calling((void*)mergeAlignment, 20, ____alias_loc_id_7, 10582626670436340893UL, 3, (size_t)(10582626670436340872UL), (size_t)(0UL), (size_t)(0UL)); (mergeAlignment)(B, ____chimes_arg32, ____chimes_arg33); }) ) : (({ calling_npm("mergeAlignment", ____alias_loc_id_7); (*____chimes_extern_func_mergeAlignment)(B, ((200)/2), (5)); })));
# 234 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 235 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 236 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tmergeAlignment() completed execution.\n");
# 237 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 238 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 239 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_21: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 21, ____alias_loc_id_6, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_6); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 240 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 241 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 242 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_22: checkpoint_transformed(22, 0);
# 243 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 244 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 245 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 246 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 247 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 248 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_23: (____chimes_does_checkpoint_verifyMergeAlignment_npm ? ( ({ int ____chimes_arg37; if (!____chimes_replaying) { ____chimes_arg37 = ((6)); } calling((void*)verifyMergeAlignment, 23, ____alias_loc_id_5, 0UL, 3, (size_t)(10582626670436340820UL), (size_t)(10582626670436340893UL), (size_t)(0UL)); (verifyMergeAlignment)(simMatrix, C, ____chimes_arg37); }) ) : (({ calling_npm("verifyMergeAlignment", ____alias_loc_id_5); (*____chimes_extern_func_verifyMergeAlignment)(simMatrix, C, (6)); })));
# 249 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 250 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 251 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 252 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 253 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 254 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      call_lbl_24: end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 255 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 256 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_25: A = (____chimes_does_checkpoint_freeA_npm ? ( ({ calling((void*)freeA, 25, ____alias_loc_id_4, 10582626670436340854UL, 1, (size_t)(10582626670436340854UL)); (freeA)(A); }) ) : (({ calling_npm("freeA", ____alias_loc_id_4); (*____chimes_extern_func_freeA)(A); })));
# 257 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_26: B = (____chimes_does_checkpoint_freeB_npm ? ( ({ calling((void*)freeB, 26, ____alias_loc_id_3, 10582626670436340872UL, 1, (size_t)(10582626670436340872UL)); (freeB)(B); }) ) : (({ calling_npm("freeB", ____alias_loc_id_3); (*____chimes_extern_func_freeB)(B); })));
# 258 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_27: C = (____chimes_does_checkpoint_freeC_npm ? ( ({ calling((void*)freeC, 27, ____alias_loc_id_2, 10582626670436340893UL, 1, (size_t)(10582626670436340893UL)); (freeC)(C); }) ) : (({ calling_npm("freeC", ____alias_loc_id_2); (*____chimes_extern_func_freeC)(C); })));
# 259 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_28: (____chimes_does_checkpoint_freeSimMatrix_npm ? ( ({ calling((void*)freeSimMatrix, 28, ____alias_loc_id_1, 10582626670436340919UL, 1, (size_t)(10582626670436340820UL)); (freeSimMatrix)(simMatrix); }) ) : (({ calling_npm("freeSimMatrix", ____alias_loc_id_1); (*____chimes_extern_func_freeSimMatrix)(simMatrix); })));
# 260 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_29: (____chimes_does_checkpoint_freeSeqData_npm ? ( ({ calling((void*)freeSeqData, 29, ____alias_loc_id_0, 10582626670436340921UL, 1, (size_t)(10582626670436340832UL)); (freeSeqData)(seqData); }) ) : (({ calling_npm("freeSeqData", ____alias_loc_id_0); (*____chimes_extern_func_freeSeqData)(seqData); })));
# 261 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 262 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 263 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 264 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 265 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 266 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  printf("execution took %f s\n", end_time - start_time);
# 267 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 268 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 269 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nHPCS SSCA #1 Bioinformatics Sequence Alignment ");
# 270 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("Executable Specification:\nEnd of test.\n");
# 271 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((0)); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_21, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 281 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_21, ____chimes_did_disable1, false); }
# 23 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; ; ;
# 24 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     struct timeval tp; ;
# 25 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     struct timezone tzp; ;
# 26 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 27 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_20, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 28 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_20, ____chimes_did_disable0, false); }

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int main_quick(int argc, char **argv) {const int ____chimes_did_disable1 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(10582626670436340937UL)) ; double end_time;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double start_time;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
CSTR_T *C;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
BSTR_T *B;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
ASTR_T *A;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
SEQDATA_T *seqData;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
SIMMATRIX_T *simMatrix;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double startTime;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int matchSeqLength;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int mainSeqLength;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int randomSeed;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
int myTaskID;
# 30 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
 register_stack_vars(12, "main|end_time|0", &____must_checkpoint_main_end_time_0, "double", (void *)(&end_time), (size_t)8, 0, 0, 0, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|C|0", (int *)0x0, "%struct.cstr*", (void *)(&C), (size_t)8, 1, 0, 0, "main|B|0", (int *)0x0, "%struct.bstr*", (void *)(&B), (size_t)8, 1, 0, 0, "main|A|0", (int *)0x0, "%struct.astr*", (void *)(&A), (size_t)8, 1, 0, 0, "main|seqData|0", (int *)0x0, "%struct.seqdat*", (void *)(&seqData), (size_t)8, 1, 0, 0, "main|simMatrix|0", (int *)0x0, "%struct.simmat*", (void *)(&simMatrix), (size_t)8, 1, 0, 0, "main|startTime|0", (int *)0x0, "double", (void *)(&startTime), (size_t)8, 0, 0, 0, "main|matchSeqLength|0", (int *)0x0, "i32", (void *)(&matchSeqLength), (size_t)4, 0, 0, 0, "main|mainSeqLength|0", (int *)0x0, "i32", (void *)(&mainSeqLength), (size_t)4, 0, 0, 0, "main|randomSeed|0", (int *)0x0, "i32", (void *)(&randomSeed), (size_t)4, 0, 0, 0, "main|myTaskID|0", (int *)0x0, "i32", (void *)(&myTaskID), (size_t)4, 0, 0, 0); ; ;
# 31 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 32 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   int ierr; ;
# 33 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   int scale; ;
# 34 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  time_t timeVar; ;
# 35 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  struct tm *timeStr; ;
# 36 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 37 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 38 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 39 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 40 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 41 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   ;
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 63 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  myTaskID = 0;
# 64 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 65 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 66 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 67 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 68 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if ( (argc != 1) && (argc != 2) ) {
# 69 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    if (myTaskID == 0) {
# 70 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      printf("Usage: %s <2*log2(sequence length)>\n", argv[0]);
# 71 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    }
# 72 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    exit (1);
# 73 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 74 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 75 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (argc == 1) {
# 76 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    scale = (30);
# 77 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  } else {
# 78 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    scale = atoi(argv[1]);
# 79 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    if (scale < 0) {
# 80 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      if (myTaskID == 0) {
# 81 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
 printf("sequenceAlignment: 2*log2(sequence length) must be >= 0!\n");
# 82 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      }
# 83 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      exit(1);
# 84 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    }
# 85 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 86 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 87 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      call_lbl_0: start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 88 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 89 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 90 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 91 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  mainSeqLength = matchSeqLength = 1 << (scale / 2);
# 92 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 93 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 94 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 95 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 96 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 97 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 98 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 99 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_1: (____chimes_does_checkpoint_getUserParameters_npm ? ( ({ calling((void*)getUserParameters, 1, ____alias_loc_id_19, 0UL, 0); (getUserParameters)(); }) ) : (({ calling_npm("getUserParameters", ____alias_loc_id_19); (*____chimes_extern_func_getUserParameters)(); })));
# 100 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 101 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 102 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nHPCS SSCA #1 Bioinformatics Sequence Alignment ");
# 103 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("Executable Specification:\nRunning...\n");
# 104 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 105 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 106 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 107 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  randomSeed = 1;
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 125 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 126 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nScalable data generation beginning execution...\n");
# 127 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 128 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 129 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 130 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_2: checkpoint_transformed(2, ____alias_loc_id_18);
# 131 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 132 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 133 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_3: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 3, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 134 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 135 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 136 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 137 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_4: simMatrix = (____chimes_does_checkpoint_genSimMatrix_npm ? ( ({ calling((void*)genSimMatrix, 4, ____alias_loc_id_17, 10582626670436340820UL, 7, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (genSimMatrix)((5), (4), (-3), (8), (1), (60), ((64) + 1)); }) ) : (({ calling_npm("genSimMatrix", ____alias_loc_id_17); (*____chimes_extern_func_genSimMatrix)((5), (4), (-3), (8), (1), (60), ((64) + 1)); })));
# 139 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 140 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 141 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tgenSimMatrix() completed execution.\n");
# 142 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 143 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 144 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 145 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_5: checkpoint_transformed(5, ____alias_loc_id_16);
# 146 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 147 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 148 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_6: seqData = (____chimes_does_checkpoint_genScalData_npm ? ( ({ calling((void*)genScalData, 6, ____alias_loc_id_15, 10582626670436340832UL, 5, (size_t)(0UL), (size_t)(10582626670436340820UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (genScalData)(randomSeed, simMatrix, mainSeqLength, matchSeqLength, ((64) + 1)); }) ) : (({ calling_npm("genScalData", ____alias_loc_id_15); (*____chimes_extern_func_genScalData)(randomSeed, simMatrix, mainSeqLength, matchSeqLength, ((64) + 1)); })));
# 149 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 150 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 151 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tgenScalData() completed execution.\n");
# 152 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 153 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 154 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_7: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 7, ____alias_loc_id_14, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_14); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 155 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 156 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 157 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_8: checkpoint_transformed(8, 0);
# 158 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 159 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 160 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 161 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 162 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 163 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_9: (____chimes_does_checkpoint_verifyData_npm ? ( ({ calling((void*)verifyData, 9, ____alias_loc_id_13, 0UL, 4, (size_t)(10582626670436340820UL), (size_t)(10582626670436340832UL), (size_t)(0UL), (size_t)(0UL)); (verifyData)(simMatrix, seqData, (20), (5)); }) ) : (({ calling_npm("verifyData", ____alias_loc_id_13); (*____chimes_extern_func_verifyData)(simMatrix, seqData, (20), (5)); })));
# 164 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 165 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 166 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 167 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 168 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 169 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 170 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 171 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nKernel 1 - pairwiseAlign() beginning execution...\n");
# 172 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 173 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 174 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_10: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 10, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 175 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 176 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 177 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 178 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_11: A = (____chimes_does_checkpoint_pairwiseAlign_npm ? ( ({ calling((void*)pairwiseAlign, 11, ____alias_loc_id_12, 10582626670436340854UL, 5, (size_t)(10582626670436340832UL), (size_t)(10582626670436340820UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (pairwiseAlign)(seqData, simMatrix, (20), (200), (5)); }) ) : (({ calling_npm("pairwiseAlign", ____alias_loc_id_12); (*____chimes_extern_func_pairwiseAlign)(seqData, simMatrix, (20), (200), (5)); })));
# 180 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 181 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 182 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tpairwiseAlign() completed execution.\n");
# 183 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 184 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 185 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_12: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 12, ____alias_loc_id_11, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_11); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 186 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 187 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 188 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_13: checkpoint_transformed(13, 0);
# 189 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 190 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 191 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 192 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 193 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 194 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 195 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 196 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nKernel 2A - scanBackward() beginning execution...\n");
# 197 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 198 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 199 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_14: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 14, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 200 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 201 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 202 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 203 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_15: B = (____chimes_does_checkpoint_scanBackward_npm ? ( ({ calling((void*)scanBackward, 15, ____alias_loc_id_10, 10582626670436340872UL, 4, (size_t)(10582626670436340854UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (scanBackward)(A, ((200) / 2), (5), (3)); }) ) : (({ calling_npm("scanBackward", ____alias_loc_id_10); (*____chimes_extern_func_scanBackward)(A, ((200)/2), (5), (3)); })));
# 204 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 205 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 206 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tscanBackward() completed execution.\n");
# 207 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 208 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 209 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_16: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 16, ____alias_loc_id_9, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_9); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 210 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 211 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 212 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_17: checkpoint_transformed(17, 0);
# 213 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 214 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 215 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 216 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 217 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 218 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_18: (____chimes_does_checkpoint_verifyAlignment_npm ? ( ({ calling((void*)verifyAlignment, 18, ____alias_loc_id_8, 0UL, 3, (size_t)(10582626670436340820UL), (size_t)(10582626670436340872UL), (size_t)(0UL)); (verifyAlignment)(simMatrix, B, (6)); }) ) : (({ calling_npm("verifyAlignment", ____alias_loc_id_8); (*____chimes_extern_func_verifyAlignment)(simMatrix, B, (6)); })));
# 219 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 220 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 221 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 222 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 223 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 224 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 225 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 226 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nKernel 2B - mergeAlignment() beginning execution...\n");
# 227 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 228 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 229 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_19: startTime = (____chimes_does_checkpoint_getSeconds_npm ? ( ({ calling((void*)getSeconds, 19, 0, 0UL, 0); (getSeconds)(); }) ) : (({ calling_npm("getSeconds", 0); (*____chimes_extern_func_getSeconds)(); })));
# 230 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 231 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 232 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 233 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_20: C = (____chimes_does_checkpoint_mergeAlignment_npm ? ( ({ calling((void*)mergeAlignment, 20, ____alias_loc_id_7, 10582626670436340893UL, 3, (size_t)(10582626670436340872UL), (size_t)(0UL), (size_t)(0UL)); (mergeAlignment)(B, ((200) / 2), (5)); }) ) : (({ calling_npm("mergeAlignment", ____alias_loc_id_7); (*____chimes_extern_func_mergeAlignment)(B, ((200)/2), (5)); })));
# 234 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 235 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 236 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\n\tmergeAlignment() completed execution.\n");
# 237 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 238 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 239 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_21: (____chimes_does_checkpoint_dispElapsedTime_npm ? ( ({ calling((void*)dispElapsedTime, 21, ____alias_loc_id_6, 0UL, 1, (size_t)(0UL)); (dispElapsedTime)(startTime); }) ) : (({ calling_npm("dispElapsedTime", ____alias_loc_id_6); (*____chimes_extern_func_dispElapsedTime)(startTime); })));
# 240 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 241 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 242 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_22: checkpoint_transformed(22, 0);
# 243 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 244 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 245 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 246 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 247 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 248 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_23: (____chimes_does_checkpoint_verifyMergeAlignment_npm ? ( ({ calling((void*)verifyMergeAlignment, 23, ____alias_loc_id_5, 0UL, 3, (size_t)(10582626670436340820UL), (size_t)(10582626670436340893UL), (size_t)(0UL)); (verifyMergeAlignment)(simMatrix, C, (6)); }) ) : (({ calling_npm("verifyMergeAlignment", ____alias_loc_id_5); (*____chimes_extern_func_verifyMergeAlignment)(simMatrix, C, (6)); })));
# 249 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 250 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 251 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 252 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 253 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 254 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
      call_lbl_24: end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 255 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 256 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_25: A = (____chimes_does_checkpoint_freeA_npm ? ( ({ calling((void*)freeA, 25, ____alias_loc_id_4, 10582626670436340854UL, 1, (size_t)(10582626670436340854UL)); (freeA)(A); }) ) : (({ calling_npm("freeA", ____alias_loc_id_4); (*____chimes_extern_func_freeA)(A); })));
# 257 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_26: B = (____chimes_does_checkpoint_freeB_npm ? ( ({ calling((void*)freeB, 26, ____alias_loc_id_3, 10582626670436340872UL, 1, (size_t)(10582626670436340872UL)); (freeB)(B); }) ) : (({ calling_npm("freeB", ____alias_loc_id_3); (*____chimes_extern_func_freeB)(B); })));
# 258 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_27: C = (____chimes_does_checkpoint_freeC_npm ? ( ({ calling((void*)freeC, 27, ____alias_loc_id_2, 10582626670436340893UL, 1, (size_t)(10582626670436340893UL)); (freeC)(C); }) ) : (({ calling_npm("freeC", ____alias_loc_id_2); (*____chimes_extern_func_freeC)(C); })));
# 259 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_28: (____chimes_does_checkpoint_freeSimMatrix_npm ? ( ({ calling((void*)freeSimMatrix, 28, ____alias_loc_id_1, 10582626670436340919UL, 1, (size_t)(10582626670436340820UL)); (freeSimMatrix)(simMatrix); }) ) : (({ calling_npm("freeSimMatrix", ____alias_loc_id_1); (*____chimes_extern_func_freeSimMatrix)(simMatrix); })));
# 260 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
   call_lbl_29: (____chimes_does_checkpoint_freeSeqData_npm ? ( ({ calling((void*)freeSeqData, 29, ____alias_loc_id_0, 10582626670436340921UL, 1, (size_t)(10582626670436340832UL)); (freeSeqData)(seqData); }) ) : (({ calling_npm("freeSeqData", ____alias_loc_id_0); (*____chimes_extern_func_freeSeqData)(seqData); })));
# 261 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 262 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 263 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 264 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 265 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 266 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  printf("execution took %f s\n", end_time - start_time);
# 267 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 268 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  if (myTaskID == 0) {
# 269 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("\nHPCS SSCA #1 Bioinformatics Sequence Alignment ");
# 270 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    printf("Executable Specification:\nEnd of test.\n");
# 271 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  }
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
# 280 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
  int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((0)); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_21, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 281 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_21, ____chimes_did_disable1, false); }

int main(int argc, char **argv) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 23 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
double seconds_npm() {
# 24 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    struct timeval tp;
# 25 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    struct timezone tzp;
# 26 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
    int i = gettimeofday(&tp, &tzp);
# 27 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); return ____chimes_ret_var_0; ;
# 28 "/scratch/jmg3/Benchmarks/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.c"
}





static int module_init() {
    init_module(10582626670436340693UL, 7, 2, 1, 22, 1, 16, 17, 2, 22, 8,
                           &____alias_loc_id_0, (unsigned)0, (unsigned)0, (unsigned)1, "freeSeqData", (unsigned)2, (10582626670436340693UL + 139UL), (10582626670436340693UL + 228UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 42UL), "freeSimMatrix", (unsigned)2, (10582626670436340693UL + 127UL), (10582626670436340693UL + 226UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 41UL), "freeC", (unsigned)1, (10582626670436340693UL + 200UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 40UL), "freeB", (unsigned)1, (10582626670436340693UL + 179UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 44UL), "freeA", (unsigned)1, (10582626670436340693UL + 161UL),
                           &____alias_loc_id_5, (unsigned)0, (unsigned)0, (unsigned)1, "verifyMergeAlignment", (unsigned)2, (10582626670436340693UL + 127UL), (10582626670436340693UL + 200UL),
                           &____alias_loc_id_6, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 42UL),
                           &____alias_loc_id_7, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 37UL), "mergeAlignment", (unsigned)2, (10582626670436340693UL + 179UL), (10582626670436340693UL + 200UL),
                           &____alias_loc_id_8, (unsigned)0, (unsigned)0, (unsigned)1, "verifyAlignment", (unsigned)2, (10582626670436340693UL + 127UL), (10582626670436340693UL + 179UL),
                           &____alias_loc_id_9, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 41UL),
                            &____alias_loc_id_10, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 37UL), "scanBackward", (unsigned)2, (10582626670436340693UL + 161UL), (10582626670436340693UL + 179UL),
                            &____alias_loc_id_11, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 40UL),
                            &____alias_loc_id_12, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 37UL), "pairwiseAlign", (unsigned)3, (10582626670436340693UL + 127UL), (10582626670436340693UL + 139UL), (10582626670436340693UL + 161UL),
                            &____alias_loc_id_13, (unsigned)0, (unsigned)0, (unsigned)1, "verifyData", (unsigned)2, (10582626670436340693UL + 127UL), (10582626670436340693UL + 139UL),
                            &____alias_loc_id_14, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 39UL),
                            &____alias_loc_id_15, (unsigned)0, (unsigned)0, (unsigned)1, "genScalData", (unsigned)2, (10582626670436340693UL + 127UL), (10582626670436340693UL + 139UL),
                            &____alias_loc_id_16, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 38UL),
                            &____alias_loc_id_17, (unsigned)1, (unsigned)0, (unsigned)1, (10582626670436340693UL + 37UL), "genSimMatrix", (unsigned)1, (10582626670436340693UL + 127UL),
                            &____alias_loc_id_18, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 31UL),
                            &____alias_loc_id_19, (unsigned)8, (unsigned)0, (unsigned)0, (10582626670436340693UL + 26UL), (10582626670436340693UL + 27UL), (10582626670436340693UL + 28UL), (10582626670436340693UL + 29UL), (10582626670436340693UL + 32UL), (10582626670436340693UL + 33UL), (10582626670436340693UL + 34UL), (10582626670436340693UL + 43UL),
                            &____alias_loc_id_20, (unsigned)3, (unsigned)0, (unsigned)0, (10582626670436340693UL + 1UL), (10582626670436340693UL + 3UL), (10582626670436340693UL + 4UL),
                            &____alias_loc_id_21, (unsigned)1, (unsigned)0, (unsigned)0, (10582626670436340693UL + 45UL),
                            "seconds", 0, "_Z7secondsv", "_Z11seconds_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (10582626670436340693UL + 1UL), (10582626670436340693UL + 2UL), 0UL,
                               "dispElapsedTime", (void **)&(____chimes_extern_func_dispElapsedTime),
                               "freeA", (void **)&(____chimes_extern_func_freeA),
                               "freeB", (void **)&(____chimes_extern_func_freeB),
                               "freeC", (void **)&(____chimes_extern_func_freeC),
                               "freeSeqData", (void **)&(____chimes_extern_func_freeSeqData),
                               "freeSimMatrix", (void **)&(____chimes_extern_func_freeSimMatrix),
                               "genScalData", (void **)&(____chimes_extern_func_genScalData),
                               "genSimMatrix", (void **)&(____chimes_extern_func_genSimMatrix),
                               "getSeconds", (void **)&(____chimes_extern_func_getSeconds),
                               "getUserParameters", (void **)&(____chimes_extern_func_getUserParameters),
                               "mergeAlignment", (void **)&(____chimes_extern_func_mergeAlignment),
                               "pairwiseAlign", (void **)&(____chimes_extern_func_pairwiseAlign),
                               "scanBackward", (void **)&(____chimes_extern_func_scanBackward),
                               "verifyAlignment", (void **)&(____chimes_extern_func_verifyAlignment),
                               "verifyData", (void **)&(____chimes_extern_func_verifyData),
                               "verifyMergeAlignment", (void **)&(____chimes_extern_func_verifyMergeAlignment),
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "dispElapsedTime", &(____chimes_does_checkpoint_dispElapsedTime_npm),
                           "freeA", &(____chimes_does_checkpoint_freeA_npm),
                           "freeB", &(____chimes_does_checkpoint_freeB_npm),
                           "freeC", &(____chimes_does_checkpoint_freeC_npm),
                           "freeSeqData", &(____chimes_does_checkpoint_freeSeqData_npm),
                           "freeSimMatrix", &(____chimes_does_checkpoint_freeSimMatrix_npm),
                           "genScalData", &(____chimes_does_checkpoint_genScalData_npm),
                           "genSimMatrix", &(____chimes_does_checkpoint_genSimMatrix_npm),
                           "getSeconds", &(____chimes_does_checkpoint_getSeconds_npm),
                           "getUserParameters", &(____chimes_does_checkpoint_getUserParameters_npm),
                           "mergeAlignment", &(____chimes_does_checkpoint_mergeAlignment_npm),
                           "pairwiseAlign", &(____chimes_does_checkpoint_pairwiseAlign_npm),
                           "scanBackward", &(____chimes_does_checkpoint_scanBackward_npm),
                           "verifyAlignment", &(____chimes_does_checkpoint_verifyAlignment_npm),
                           "verifyData", &(____chimes_does_checkpoint_verifyData_npm),
                           "verifyMergeAlignment", &(____chimes_does_checkpoint_verifyMergeAlignment_npm),
                             (10582626670436340693UL + 39UL), (10582626670436340693UL + 139UL),
                             (10582626670436340693UL + 38UL), (10582626670436340693UL + 127UL),
                             (10582626670436340693UL + 28UL), (10582626670436340693UL + 244UL),
                             (10582626670436340693UL + 42UL), (10582626670436340693UL + 200UL),
                             (10582626670436340693UL + 40UL), (10582626670436340693UL + 161UL),
                             (10582626670436340693UL + 41UL), (10582626670436340693UL + 179UL),
                             (10582626670436340693UL + 244UL), (10582626670436340693UL + 89UL),
                     "astr", 448UL, 7, "%struct.seqdat*", (int)__builtin_offsetof (struct astr, seqData), "%struct.simmat*", (int)__builtin_offsetof (struct astr, simMatrix), "long long int**", (int)__builtin_offsetof (struct astr, goodScores), "int", (int)__builtin_offsetof (struct astr, numThreads), "int*", (int)__builtin_offsetof (struct astr, numReports), "int**", (int)__builtin_offsetof (struct astr, goodEndsI), "int**", (int)__builtin_offsetof (struct astr, goodEndsJ),
                     "bstr", 576UL, 9, "long long int**", (int)__builtin_offsetof (struct bstr, bestScores), "int", (int)__builtin_offsetof (struct bstr, numThreads), "int*", (int)__builtin_offsetof (struct bstr, numReports), "int**", (int)__builtin_offsetof (struct bstr, bestStartsI), "int**", (int)__builtin_offsetof (struct bstr, bestStartsJ), "int**", (int)__builtin_offsetof (struct bstr, bestEndsI), "int**", (int)__builtin_offsetof (struct bstr, bestEndsJ), "unsigned char***", (int)__builtin_offsetof (struct bstr, bestSeqsI), "unsigned char***", (int)__builtin_offsetof (struct bstr, bestSeqsJ),
                     "cstr", 512UL, 8, "long long int*", (int)__builtin_offsetof (struct cstr, finalScores), "int", (int)__builtin_offsetof (struct cstr, numReports), "int*", (int)__builtin_offsetof (struct cstr, finalStartsI), "int*", (int)__builtin_offsetof (struct cstr, finalStartsJ), "int*", (int)__builtin_offsetof (struct cstr, finalEndsI), "int*", (int)__builtin_offsetof (struct cstr, finalEndsJ), "unsigned char**", (int)__builtin_offsetof (struct cstr, finalSeqsI), "unsigned char**", (int)__builtin_offsetof (struct cstr, finalSeqsJ),
                     "seqdat", 256UL, 5, "unsigned char*", (int)__builtin_offsetof (struct seqdat, main), "unsigned char*", (int)__builtin_offsetof (struct seqdat, match), "int", (int)__builtin_offsetof (struct seqdat, mainLen), "int", (int)__builtin_offsetof (struct seqdat, matchLen), "int", (int)__builtin_offsetof (struct seqdat, maxValidation),
                     "simmat", 40960UL, 14, "[ 4225 x char ]", (int)__builtin_offsetof (struct simmat, similarity), "[ 66 x char ]", (int)__builtin_offsetof (struct simmat, aminoAcid), "char*", (int)__builtin_offsetof (struct simmat, bases), "[ 66 x char* ]", (int)__builtin_offsetof (struct simmat, codon), "[ 129 x unsigned char ]", (int)__builtin_offsetof (struct simmat, encode), "[ 129 x unsigned char ]", (int)__builtin_offsetof (struct simmat, encode_first), "char", (int)__builtin_offsetof (struct simmat, hyphen), "char", (int)__builtin_offsetof (struct simmat, star), "int", (int)__builtin_offsetof (struct simmat, exact), "int", (int)__builtin_offsetof (struct simmat, similar), "int", (int)__builtin_offsetof (struct simmat, dissimilar), "int", (int)__builtin_offsetof (struct simmat, gapStart), "int", (int)__builtin_offsetof (struct simmat, gapExtend), "int", (int)__builtin_offsetof (struct simmat, matchLimit),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 64UL, 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                     "tm", 0UL, 0,
                             "seconds", "_Z7secondsv", 0, 0,
                             "main", "main", 0, 30, "seconds", "getUserParameters", "checkpoint", "getSeconds", "genSimMatrix", "checkpoint", "genScalData", "dispElapsedTime", "checkpoint", "verifyData", "getSeconds", "pairwiseAlign", "dispElapsedTime", "checkpoint", "getSeconds", "scanBackward", "dispElapsedTime", "checkpoint", "verifyAlignment", "getSeconds", "mergeAlignment", "dispElapsedTime", "checkpoint", "verifyMergeAlignment", "seconds", "freeA", "freeB", "freeC", "freeSimMatrix", "freeSeqData",
                        "main|end_time|0", 5, "freeSimMatrix", "freeSeqData", "freeC", "freeB", "freeA",
        "seconds", 0UL, (int)0,
        "seconds", 0UL, (int)0,
        "getUserParameters", 0UL, (int)0,
        "getSeconds", 0UL, (int)0,
        "genSimMatrix", 10582626670436340820UL, (int)7, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "genScalData", 10582626670436340832UL, (int)5, 0UL, 10582626670436340820UL, 0UL, 0UL, 0UL,
        "dispElapsedTime", 0UL, (int)1, 0UL,
        "verifyData", 0UL, (int)4, 10582626670436340820UL, 10582626670436340832UL, 0UL, 0UL,
        "getSeconds", 0UL, (int)0,
        "pairwiseAlign", 10582626670436340854UL, (int)5, 10582626670436340832UL, 10582626670436340820UL, 0UL, 0UL, 0UL,
        "dispElapsedTime", 0UL, (int)1, 0UL,
        "getSeconds", 0UL, (int)0,
        "scanBackward", 10582626670436340872UL, (int)4, 10582626670436340854UL, 0UL, 0UL, 0UL,
        "dispElapsedTime", 0UL, (int)1, 0UL,
        "verifyAlignment", 0UL, (int)3, 10582626670436340820UL, 10582626670436340872UL, 0UL,
        "getSeconds", 0UL, (int)0,
        "mergeAlignment", 10582626670436340893UL, (int)3, 10582626670436340872UL, 0UL, 0UL,
        "dispElapsedTime", 0UL, (int)1, 0UL,
        "verifyMergeAlignment", 0UL, (int)3, 10582626670436340820UL, 10582626670436340893UL, 0UL,
        "freeA", 10582626670436340854UL, (int)1, 10582626670436340854UL,
        "freeB", 10582626670436340872UL, (int)1, 10582626670436340872UL,
        "freeC", 10582626670436340893UL, (int)1, 10582626670436340893UL,
        "freeSimMatrix", 10582626670436340919UL, (int)1, 10582626670436340820UL,
        "freeSeqData", 10582626670436340921UL, (int)1, 10582626670436340832UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
