# 1 "mergeAlignment.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "mergeAlignment.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_mergeAlignment_npm = 1;
static int ____chimes_does_checkpoint_freeC_npm = 1;
static int ____chimes_does_checkpoint_getSeconds_npm = 1;
static int ____chimes_does_checkpoint_gridInfo_npm = 1;
static int ____chimes_does_checkpoint_qSort_both_npm = 1;

static int ____must_checkpoint_mergeAlignment_B_0 = 2;
static int ____must_checkpoint_mergeAlignment_maxReports_0 = 2;
static int ____must_checkpoint_mergeAlignment_minSeparation_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempScores_0 = 2;
static int ____must_checkpoint_mergeAlignment_scores_0 = 2;
static int ____must_checkpoint_mergeAlignment_numReports_0 = 2;
static int ____must_checkpoint_mergeAlignment_threadNum_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempStartsI_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempStartsJ_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempEndsI_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempEndsJ_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempSeqsI_0 = 2;
static int ____must_checkpoint_mergeAlignment_tempSeqsJ_0 = 2;
static int ____must_checkpoint_mergeAlignment_sequences_0 = 2;
static int ____must_checkpoint_mergeAlignment_C_0 = 2;
static int ____must_checkpoint_mergeAlignment_i_0 = 2;
static int ____must_checkpoint_mergeAlignment_j_0 = 2;
static int ____must_checkpoint_mergeAlignment_iter_0 = 2;
static int ____must_checkpoint_mergeAlignment_mask_0 = 2;
static int ____must_checkpoint_mergeAlignment_consumer_0 = 2;
static int ____must_checkpoint_mergeAlignment_producer_0 = 2;
static int ____must_checkpoint_mergeAlignment_totalReports_0 = 2;
static int ____must_checkpoint_mergeAlignment_flag_0 = 2;
static int ____must_checkpoint_mergeAlignment_length_0 = 2;
static int ____must_checkpoint_mergeAlignment_index_0 = 2;
static int ____must_checkpoint_mergeAlignment_indexB_0 = 2;
static int ____must_checkpoint_mergeAlignment_myRow_0 = 2;
static int ____must_checkpoint_mergeAlignment_beginTime_0 = 2;
static int ____must_checkpoint_mergeAlignment_P_0 = 2;

static int ____must_manage_freeC = 2;
static int ____must_manage_mergeAlignment = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 2


extern void init_chimes();
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
        const char *funcname, int *conditional, unsigned loc_id, int disabled);
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
# 74 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 12 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
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



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h" 1 3 4
# 40 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h" 3 4
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
# 13 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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





# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 14 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 15 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c" 2
# 15 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"

# 1 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h" 1
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
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
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
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
# 17 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c" 2
# 51 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 51 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
CSTR_T *mergeAlignment_npm(BSTR_T *B, int maxReports, int minSeparation);static double (*____chimes_extern_func_getSeconds)(void) = getSeconds;static int (*____chimes_extern_func_gridInfo)(int *, int *, int *, int *) = gridInfo;static void (*____chimes_extern_func_qSort_both)(long long *, int *, const long long *, int) = qSort_both;
CSTR_T *mergeAlignment_quick(BSTR_T *B, int maxReports, int minSeparation); CSTR_T *mergeAlignment(BSTR_T *B, int maxReports, int minSeparation);
CSTR_T *mergeAlignment_resumable(BSTR_T *B, int maxReports, int minSeparation) {const int ____chimes_did_disable0 = new_stack((void *)(&mergeAlignment), "mergeAlignment", &____must_manage_mergeAlignment, 3, 3, (size_t)(10402924002521286981UL), (size_t)(0UL), (size_t)(0UL), "mergeAlignment|B|0", &____must_checkpoint_mergeAlignment_B_0, "%struct.bstr*", (void *)(&B), (size_t)8, 1, 0, 0, "mergeAlignment|maxReports|0", &____must_checkpoint_mergeAlignment_maxReports_0, "i32", (void *)(&maxReports), (size_t)4, 0, 0, 0, "mergeAlignment|minSeparation|0", &____must_checkpoint_mergeAlignment_minSeparation_0, "i32", (void *)(&minSeparation), (size_t)4, 0, 0, 0) ; BSTR_T *P;
double beginTime;
int myRow;
int indexB;
int *index;
int length;
int flag;
int totalReports;
int producer;
int consumer;
int mask;
int iter;
int j;
int i;
CSTR_T *C;
unsigned char **sequences;
unsigned char **tempSeqsJ;
unsigned char **tempSeqsI;
int *tempEndsJ;
int *tempEndsI;
int *tempStartsJ;
int *tempStartsI;
int threadNum;
int numReports;
long long *scores;
long long *tempScores;
 if (____must_checkpoint_mergeAlignment_P_0 || ____must_checkpoint_mergeAlignment_beginTime_0 || ____must_checkpoint_mergeAlignment_myRow_0 || ____must_checkpoint_mergeAlignment_indexB_0 || ____must_checkpoint_mergeAlignment_index_0 || ____must_checkpoint_mergeAlignment_length_0 || ____must_checkpoint_mergeAlignment_flag_0 || ____must_checkpoint_mergeAlignment_totalReports_0 || ____must_checkpoint_mergeAlignment_producer_0 || ____must_checkpoint_mergeAlignment_consumer_0 || ____must_checkpoint_mergeAlignment_mask_0 || ____must_checkpoint_mergeAlignment_iter_0 || ____must_checkpoint_mergeAlignment_j_0 || ____must_checkpoint_mergeAlignment_i_0 || ____must_checkpoint_mergeAlignment_C_0 || ____must_checkpoint_mergeAlignment_sequences_0 || ____must_checkpoint_mergeAlignment_tempSeqsJ_0 || ____must_checkpoint_mergeAlignment_tempSeqsI_0 || ____must_checkpoint_mergeAlignment_tempEndsJ_0 || ____must_checkpoint_mergeAlignment_tempEndsI_0 || ____must_checkpoint_mergeAlignment_tempStartsJ_0 || ____must_checkpoint_mergeAlignment_tempStartsI_0 || ____must_checkpoint_mergeAlignment_threadNum_0 || ____must_checkpoint_mergeAlignment_numReports_0 || ____must_checkpoint_mergeAlignment_scores_0 || ____must_checkpoint_mergeAlignment_tempScores_0) { register_stack_vars(26, "mergeAlignment|P|0", &____must_checkpoint_mergeAlignment_P_0, "%struct.bstr*", (void *)(&P), (size_t)8, 1, 0, 0, "mergeAlignment|beginTime|0", &____must_checkpoint_mergeAlignment_beginTime_0, "double", (void *)(&beginTime), (size_t)8, 0, 0, 0, "mergeAlignment|myRow|0", &____must_checkpoint_mergeAlignment_myRow_0, "i32", (void *)(&myRow), (size_t)4, 0, 0, 0, "mergeAlignment|indexB|0", &____must_checkpoint_mergeAlignment_indexB_0, "i32", (void *)(&indexB), (size_t)4, 0, 0, 0, "mergeAlignment|index|0", &____must_checkpoint_mergeAlignment_index_0, "i32*", (void *)(&index), (size_t)8, 1, 0, 0, "mergeAlignment|length|0", &____must_checkpoint_mergeAlignment_length_0, "i32", (void *)(&length), (size_t)4, 0, 0, 0, "mergeAlignment|flag|0", &____must_checkpoint_mergeAlignment_flag_0, "i32", (void *)(&flag), (size_t)4, 0, 0, 0, "mergeAlignment|totalReports|0", &____must_checkpoint_mergeAlignment_totalReports_0, "i32", (void *)(&totalReports), (size_t)4, 0, 0, 0, "mergeAlignment|producer|0", &____must_checkpoint_mergeAlignment_producer_0, "i32", (void *)(&producer), (size_t)4, 0, 0, 0, "mergeAlignment|consumer|0", &____must_checkpoint_mergeAlignment_consumer_0, "i32", (void *)(&consumer), (size_t)4, 0, 0, 0, "mergeAlignment|mask|0", &____must_checkpoint_mergeAlignment_mask_0, "i32", (void *)(&mask), (size_t)4, 0, 0, 0, "mergeAlignment|iter|0", &____must_checkpoint_mergeAlignment_iter_0, "i32", (void *)(&iter), (size_t)4, 0, 0, 0, "mergeAlignment|j|0", &____must_checkpoint_mergeAlignment_j_0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "mergeAlignment|i|0", &____must_checkpoint_mergeAlignment_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "mergeAlignment|C|0", &____must_checkpoint_mergeAlignment_C_0, "%struct.cstr*", (void *)(&C), (size_t)8, 1, 0, 0, "mergeAlignment|sequences|0", &____must_checkpoint_mergeAlignment_sequences_0, "i8**", (void *)(&sequences), (size_t)8, 1, 0, 0, "mergeAlignment|tempSeqsJ|0", &____must_checkpoint_mergeAlignment_tempSeqsJ_0, "i8**", (void *)(&tempSeqsJ), (size_t)8, 1, 0, 0, "mergeAlignment|tempSeqsI|0", &____must_checkpoint_mergeAlignment_tempSeqsI_0, "i8**", (void *)(&tempSeqsI), (size_t)8, 1, 0, 0, "mergeAlignment|tempEndsJ|0", &____must_checkpoint_mergeAlignment_tempEndsJ_0, "i32*", (void *)(&tempEndsJ), (size_t)8, 1, 0, 0, "mergeAlignment|tempEndsI|0", &____must_checkpoint_mergeAlignment_tempEndsI_0, "i32*", (void *)(&tempEndsI), (size_t)8, 1, 0, 0, "mergeAlignment|tempStartsJ|0", &____must_checkpoint_mergeAlignment_tempStartsJ_0, "i32*", (void *)(&tempStartsJ), (size_t)8, 1, 0, 0, "mergeAlignment|tempStartsI|0", &____must_checkpoint_mergeAlignment_tempStartsI_0, "i32*", (void *)(&tempStartsI), (size_t)8, 1, 0, 0, "mergeAlignment|threadNum|0", &____must_checkpoint_mergeAlignment_threadNum_0, "i32", (void *)(&threadNum), (size_t)4, 0, 0, 0, "mergeAlignment|numReports|0", &____must_checkpoint_mergeAlignment_numReports_0, "i32", (void *)(&numReports), (size_t)4, 0, 0, 0, "mergeAlignment|scores|0", &____must_checkpoint_mergeAlignment_scores_0, "i64*", (void *)(&scores), (size_t)8, 1, 0, 0, "mergeAlignment|tempScores|0", &____must_checkpoint_mergeAlignment_tempScores_0, "i64*", (void *)(&tempScores), (size_t)8, 1, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(28): { goto call_lbl_28; } case(59): { goto call_lbl_59; } case(85): { goto call_lbl_85; } case(88): { goto call_lbl_88; } default: { chimes_error(); } } } ; ;
# 52 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 53 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores = (__null) ;
# 54 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   int newReports; int numThreads; int maxThreads; ;
# 55 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       tempStartsI = (__null) ; tempStartsJ = (__null) ;
# 56 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       tempEndsI = (__null) ; tempEndsJ = (__null) ;
# 57 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       unsigned char *ptr; tempSeqsI = (__null) ; tempSeqsJ = (__null) ;
# 58 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     C = (__null) ;
# 59 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
         ;
# 60 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    int count; ;
# 61 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   int myCol; int npRow; int npCol; ;
# 62 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   double endTime; ;
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   ;
# 72 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  maxThreads = B->numThreads;
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P = (BSTR_T*)malloc_wrapper(sizeof(BSTR_T), 10402924002521285944UL, 0, 1, (int)sizeof(struct bstr), 8, (int)__builtin_offsetof(struct bstr, bestScores), (int)__builtin_offsetof(struct bstr, numReports), (int)__builtin_offsetof(struct bstr, bestStartsI), (int)__builtin_offsetof(struct bstr, bestStartsJ), (int)__builtin_offsetof(struct bstr, bestEndsI), (int)__builtin_offsetof(struct bstr, bestEndsJ), (int)__builtin_offsetof(struct bstr, bestSeqsI), (int)__builtin_offsetof(struct bstr, bestSeqsJ))) == __null ) {
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P\n");
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->numReports = (int*)malloc_wrapper(maxThreads*sizeof(int), 10402924002521285946UL, 0, 0)) == __null ) {
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->numReports\n");
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 97 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 98 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 99 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestScores = (long long**)malloc_wrapper(maxThreads*sizeof(long long*), 10402924002521285946UL, 1, 0))
# 100 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestScores\n");
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestStartsI = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestStartsI\n");
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 108 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestStartsJ = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestStartsJ\n");
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestEndsI = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestEndsI\n");
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestEndsJ = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestEndsJ\n");
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestSeqsI =
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char***)malloc_wrapper(maxThreads*sizeof(unsigned char**), 10402924002521285946UL, 1, 0))
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestSeqsI\n");
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestSeqsJ =
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char***)malloc_wrapper(maxThreads*sizeof(unsigned char**), 10402924002521285946UL, 1, 0))
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestSeqsJ\n");
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  {
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     call_lbl_28: ({ calling((void*)gridInfo, 28, ____alias_loc_id_3, 0UL, 4, (size_t)(10402924002521284825UL), (size_t)(10402924002521284826UL), (size_t)(10402924002521284823UL), (size_t)(10402924002521284824UL)); (gridInfo)(&npRow, &npCol, &myRow, &myCol); }) ;
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    threadNum = 0;
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempScores =
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (long long*)malloc_wrapper((2*maxReports+1)*sizeof(long long), 10402924002521287098UL, 0, 0))
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 198 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempScores for thread %d\n",
# 199 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 200 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 201 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempStartsI =
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempStartsI for thread %d\n",
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempStartsJ =
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 218 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempStartsJ for thread %d\n",
# 219 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 220 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 221 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 222 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 223 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 224 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 225 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 226 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempEndsI =
# 227 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempEndsI for thread %d\n",
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 235 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 236 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempEndsJ =
# 237 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 238 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempEndsJ for thread %d\n",
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempSeqsI =
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempSeqsI for thread %d\n",
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 254 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 255 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 256 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 257 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempSeqsJ =
# 258 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 259 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 260 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempSeqsJ for thread %d\n",
# 261 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 262 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 263 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    for (i = 0; i <= 2*maxReports; i++) {
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI[i] = tempSeqsJ[i] = __null;
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestScores[threadNum] = tempScores;
# 280 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestStartsI[threadNum] = tempStartsI;
# 281 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestStartsJ[threadNum] = tempStartsJ;
# 282 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestEndsI[threadNum] = tempEndsI;
# 283 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestEndsJ[threadNum] = tempEndsJ;
# 284 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestSeqsI[threadNum] = tempSeqsI;
# 285 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestSeqsJ[threadNum] = tempSeqsJ;
# 286 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 287 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 288 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 289 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 290 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 291 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 292 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 293 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (threadNum & 1) == 0 ) {
# 294 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (sequences =
# 295 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521286304UL, 1, 0))
# 296 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 297 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate sequences for thread %d\n",
# 298 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 299 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 300 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 301 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 302 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 303 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 304 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 305 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (scores = (long long*)malloc_wrapper((2*maxReports+1)*sizeof(long long), 10402924002521285976UL, 0, 0))
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate scores for thread %d\n",
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (index = (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521285967UL, 0, 0)) == __null ) {
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate index for thread %d\n",
# 317 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 318 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 319 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 320 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 321 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 322 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 323 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     call_lbl_59: beginTime = ({ calling((void*)getSeconds, 59, ____alias_loc_id_1, 0UL, 0); (getSeconds)(); }) ;
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (myRow < 0 || myCol < 0) {
# 360 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      P->numReports[threadNum] = numReports = 0;
# 361 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 362 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      P->numReports[threadNum] = numReports = B->numReports[threadNum];
# 363 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    indexB = threadNum;
# 384 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 385 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 386 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 387 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 388 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    for (i = 1; i <= numReports; i++) {
# 389 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores[i] = B->bestScores[indexB][i];
# 390 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsI[i] = B->bestStartsI[indexB][i];
# 391 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsJ[i] = B->bestStartsJ[indexB][i];
# 392 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsI[i] = B->bestEndsI[indexB][i];
# 393 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsJ[i] = B->bestEndsJ[indexB][i];
# 394 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 395 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length = strlen((char*)(B->bestSeqsI[indexB][i]));
# 396 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if (length < 1) {
# 397 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: strlen(B->bestSeqsI[%d] = %d for thread %d\n",
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, length, indexB);
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length++;
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (tempSeqsI[i] =
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate tempSeqsI[%d] for thread %d",
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, indexB);
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI[i] =
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char*)strcpy((char*)(tempSeqsI[i]),
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
          (char*)(B->bestSeqsI[indexB][i]));
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 413 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length = strlen((char*)(B->bestSeqsJ[indexB][i]));
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if (length < 1) {
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: strlen(B->bestSeqsJ[%d] = %d for thread %d\n",
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, length, indexB);
# 417 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 418 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 419 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length++;
# 420 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (tempSeqsJ[i] =
# 421 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 422 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 423 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate tempSeqsJ[%d] for thread %d",
# 424 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, indexB);
# 425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 426 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 427 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsJ[i] =
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char*)strcpy((char*)(tempSeqsJ[i]),
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
          (char*)(B->bestSeqsJ[indexB][i]));
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    iter = npRow*npCol - 1;
# 463 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    mask = 1;
# 464 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    while (iter > 0) {
# 465 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      consumer = threadNum & (~mask);
# 466 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      producer = consumer | ((mask + 1) >> 1);
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( ( threadNum == consumer ) && ( producer < npRow*npCol ) &&
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    ( myRow >= 0 ) && ( myCol >= 0) ) {
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 totalReports = numReports;
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= P->numReports[producer]; i++) {
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   flag = 0;
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   for (j = 1; j <= numReports; j++) {
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( ( ( (abs(tempStartsI[j] - P->bestStartsI[producer][i]) > abs(tempStartsJ[j] - P->bestStartsJ[producer][i])) ? abs(tempStartsI[j] - P->bestStartsI[producer][i]) : abs(tempStartsJ[j] - P->bestStartsJ[producer][i]) )
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     < minSeparation ) ||
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   ( ( (abs(tempEndsI[j] - P->bestEndsI[producer][i]) > abs(tempEndsJ[j] - P->bestEndsJ[producer][i])) ? abs(tempEndsI[j] - P->bestEndsI[producer][i]) : abs(tempEndsJ[j] - P->bestEndsJ[producer][i]) )
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     < minSeparation ) ) {
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       flag = 1;
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       break;
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (flag == 0) {
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     totalReports++;
# 580 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempScores[totalReports] = P->bestScores[producer][i];
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempStartsI[totalReports] = P->bestStartsI[producer][i];
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempStartsJ[totalReports] = P->bestStartsJ[producer][i];
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempEndsI[totalReports] = P->bestEndsI[producer][i];
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempEndsJ[totalReports] = P->bestEndsJ[producer][i];
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsI[totalReports] = P->bestSeqsI[producer][i];
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsJ[totalReports] = P->bestSeqsJ[producer][i];
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     P->bestSeqsI[producer][i] = P->bestSeqsJ[producer][i] = __null;
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   } else {
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if (P->bestSeqsI[producer][i]) {
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       free_wrapper(P->bestSeqsI[producer][i], 10402924002521287100UL);
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       P->bestSeqsI[producer][i] = __null;
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 593 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if (P->bestSeqsJ[producer][i]) {
# 594 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       free_wrapper(P->bestSeqsJ[producer][i], 10402924002521287100UL);
# 595 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       P->bestSeqsJ[producer][i] = __null;
# 596 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 597 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     printf("\tmergeAlignment() thread %d found redundant report %d from thread %d\n",
# 598 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     threadNum, i, producer);
# 599 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 600 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  call_lbl_85: ({ calling((void*)qSort_both, 85, ____alias_loc_id_2, 0UL, 4, (size_t)(10402924002521285976UL), (size_t)(10402924002521285967UL), (size_t)(10402924002521287098UL), (size_t)(0UL)); (qSort_both)(scores, index, tempScores, totalReports); }) ;
# 850 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 numReports = ( (maxReports < totalReports) ? maxReports : totalReports );
# 851 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 852 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 853 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 P->numReports[consumer] = numReports;
# 854 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 P->numReports[producer] = 0;
# 855 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 856 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 857 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 858 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempScores[ index[totalReports - i + 1] ];
# 859 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 860 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 861 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempScores[i] = scores[i];
# 862 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 863 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 865 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempStartsI[ index[totalReports - i + 1] ];
# 866 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 867 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 868 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempStartsI[i] = scores[i];
# 869 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 870 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 871 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 872 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempStartsJ[ index[totalReports - i + 1] ];
# 873 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 874 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 875 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempStartsJ[i] = scores[i];
# 876 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 877 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 878 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 879 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempEndsI[ index[totalReports - i + 1] ];
# 880 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 881 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 882 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempEndsI[i] = scores[i];
# 883 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 884 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 885 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempEndsJ[ index[totalReports - i + 1] ];
# 887 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 888 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 889 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempEndsJ[i] = scores[i];
# 890 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 899 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 899 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= totalReports - numReports; i++) {
# 900 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (tempSeqsI[ index[i] ]) {
# 901 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     free_wrapper(tempSeqsI[ index[i] ], 10402924002521287100UL);
# 902 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsI[ index[i] ] = __null;
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 904 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (tempSeqsJ[ index[i] ]) {
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     free_wrapper(tempSeqsJ[ index[i] ], 10402924002521287100UL);
# 906 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsJ[ index[i] ] = __null;
# 907 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 909 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 910 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 911 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 912 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 913 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 914 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 915 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 916 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   sequences[i] = tempSeqsI[ index[totalReports - i + 1] ];
# 917 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 918 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 919 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = sequences[i];
# 920 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 921 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 922 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 923 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   sequences[i] = tempSeqsJ[ index[totalReports - i + 1] ];
# 924 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 925 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 926 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsJ[i] = sequences[i];
# 927 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 938 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 938 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = numReports+1; i <= totalReports; i++) {
# 939 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = tempSeqsJ[i] = __null;
# 940 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 956 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 956 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 971 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 971 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( ( threadNum == producer ) && ( myRow >= 0 ) && ( myCol >= 0) ) {
# 1161 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1161 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1176 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1176 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      mask = (mask << 1) + 1;
# 1177 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      iter >>= 1;
# 1178 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1179 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1180 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1181 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1182 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1183 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     call_lbl_88: endTime = ({ calling((void*)getSeconds, 88, ____alias_loc_id_0, 0UL, 0); (getSeconds)(); }) ;
# 1184 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (threadNum == 0) {
# 1185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("\n        Merge time = %10.5f seconds\n",
# 1186 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      endTime - beginTime);
# 1187 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (threadNum == 0) {
# 1198 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1199 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C = (CSTR_T*)malloc_wrapper(sizeof(CSTR_T), 10402924002521287236UL, 0, 1, (int)sizeof(struct cstr), 7, (int)__builtin_offsetof(struct cstr, finalScores), (int)__builtin_offsetof(struct cstr, finalStartsI), (int)__builtin_offsetof(struct cstr, finalStartsJ), (int)__builtin_offsetof(struct cstr, finalEndsI), (int)__builtin_offsetof(struct cstr, finalEndsJ), (int)__builtin_offsetof(struct cstr, finalSeqsI), (int)__builtin_offsetof(struct cstr, finalSeqsJ))) == __null ) {
# 1200 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C\n");
# 1201 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1202 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1203 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1204 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1205 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1206 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->numReports = 0;
# 1207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalScores = __null;
# 1208 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsI = C->finalStartsJ = __null;
# 1209 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsI = C->finalEndsJ = __null;
# 1210 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsI = C->finalSeqsJ = __null;
# 1211 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1212 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->numReports = numReports;
# 1213 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1214 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalScores =
# 1215 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (long long*)malloc_wrapper((numReports+1)*sizeof(long long), 10402924002521287098UL, 0, 0)) == __null ) {
# 1216 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalScores\n");
# 1217 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1218 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1219 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1220 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1221 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1222 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1223 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalStartsI =
# 1224 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1225 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalStartsI\n");
# 1226 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1227 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1228 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1229 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1230 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1231 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1232 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalStartsJ =
# 1233 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1234 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalStartsJ\n");
# 1235 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1236 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1237 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1238 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1239 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1240 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1241 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalEndsI =
# 1242 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1243 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalEndsI\n");
# 1244 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1245 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1246 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1247 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1248 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1249 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1250 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalEndsJ =
# 1251 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1252 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalEndsJ\n");
# 1253 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1254 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1255 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1256 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1257 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1258 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1259 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( (C->finalSeqsI =
# 1260 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (unsigned char**)malloc_wrapper((numReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 1261 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   == __null ) {
# 1262 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       printf("mergeAlignment: cannot allocate C->finalSeqsI\n");
# 1263 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1264 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1265 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1266 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1267 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1268 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1269 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( (C->finalSeqsJ =
# 1270 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (unsigned char**)malloc_wrapper((numReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 1271 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   == __null ) {
# 1272 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       printf("mergeAlignment: cannot allocate C->finalSeqsJ\n");
# 1273 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1274 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1275 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1276 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1277 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1278 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= numReports; i++) {
# 1280 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalScores[i] = tempScores[i];
# 1281 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalStartsI[i] = tempStartsI[i];
# 1282 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalStartsJ[i] = tempStartsJ[i];
# 1283 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalEndsI[i] = tempEndsI[i];
# 1284 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalEndsJ[i] = tempEndsJ[i];
# 1285 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( ( length = strlen( (char*)tempSeqsI[i] ) ) < 1 ) {
# 1286 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: strlen(tempSeqsI[%d]) = %d for process %d\n",
# 1287 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   i, length, threadNum);
# 1288 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1289 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1290 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1291 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1292 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1293 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 length++;
# 1294 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( (C->finalSeqsI[i] =
# 1295 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 1296 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      == __null ) {
# 1297 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: cannot allocate C->finalSeqsI[%d]\n", i);
# 1298 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1299 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1300 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1301 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1302 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1303 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalSeqsI[i] =
# 1304 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char*)strcpy((char*)C->finalSeqsI[i], (char*)tempSeqsI[i]);
# 1305 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 free_wrapper(tempSeqsI[i], 10402924002521287100UL);
# 1306 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 tempSeqsI[i] = __null;
# 1307 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1308 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( ( length = strlen( (char*)tempSeqsJ[i] ) ) < 1 ) {
# 1309 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: strlen(tempSeqsJ[%d]) = %d for process %d\n",
# 1310 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   i, length, threadNum);
# 1311 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1312 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1313 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1314 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1315 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1316 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 length++;
# 1317 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( (C->finalSeqsJ[i] =
# 1318 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 1319 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      == __null ) {
# 1320 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: cannot allocate C->finalSeqsJ[%d]\n", i);
# 1321 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1322 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1323 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1324 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1325 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1326 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalSeqsJ[i] =
# 1327 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char*)strcpy((char*)C->finalSeqsJ[i], (char*)tempSeqsJ[i]);
# 1328 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 free_wrapper(tempSeqsJ[i], 10402924002521287100UL);
# 1329 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 tempSeqsJ[i] = __null;
# 1330 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1331 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1332 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1333 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1334 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1335 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempScores) {
# 1336 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempScores, 10402924002521287098UL);
# 1337 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores = __null;
# 1338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1339 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempStartsI) {
# 1340 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempStartsI, 10402924002521287098UL);
# 1341 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsI = __null;
# 1342 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1343 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempStartsJ) {
# 1344 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempStartsJ, 10402924002521287098UL);
# 1345 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsJ = __null;
# 1346 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1347 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempEndsI) {
# 1348 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempEndsI, 10402924002521287098UL);
# 1349 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsI = __null;
# 1350 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1351 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempEndsJ) {
# 1352 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempEndsJ, 10402924002521287098UL);
# 1353 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsJ = __null;
# 1354 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1355 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1356 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1357 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1358 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1360 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1361 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1362 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    count = 0;
# 1363 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempSeqsI) {
# 1364 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 0; i <= 2*maxReports; i++) {
# 1365 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (tempSeqsI[i]) {
# 1366 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(tempSeqsI[i], 10402924002521287100UL);
# 1367 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = __null;
# 1368 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   count++;
# 1369 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1370 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1371 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempSeqsI, 10402924002521287098UL);
# 1372 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI = __null;
# 1373 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1374 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (count != 0) {
# 1375 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: freed %d tempSeqsI strings for thread %d\n",
# 1376 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      count, threadNum);
# 1377 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1378 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1379 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    count = 0;
# 1380 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempSeqsJ) {
# 1381 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 0; i <= 2*maxReports; i++) {
# 1382 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (tempSeqsJ[i]) {
# 1383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(tempSeqsJ[i], 10402924002521287100UL);
# 1384 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsJ[i] = __null;
# 1385 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   count++;
# 1386 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1387 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1388 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempSeqsJ, 10402924002521287098UL);
# 1389 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsJ = __null;
# 1390 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1391 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (count != 0) {
# 1392 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: freed %d tempSeqsJ strings for thread %d\n",
# 1393 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      count, threadNum);
# 1394 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1395 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1396 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1397 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1398 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1399 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1400 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1401 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (threadNum & 1) == 0 ) {
# 1402 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(sequences, 10402924002521286304UL);
# 1403 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(scores, 10402924002521285976UL);
# 1404 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(index, 10402924002521285967UL);
# 1405 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 1406 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1407 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1408 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1409 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1410 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 1425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->numReports, 10402924002521285946UL);
# 1426 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestScores, 10402924002521285946UL);
# 1427 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestStartsI, 10402924002521285946UL);
# 1428 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestStartsJ, 10402924002521285946UL);
# 1429 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestEndsI, 10402924002521285946UL);
# 1430 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestEndsJ, 10402924002521285946UL);
# 1431 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestSeqsI, 10402924002521285946UL);
# 1432 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestSeqsJ, 10402924002521285946UL);
# 1433 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P, 10402924002521285944UL);
# 1434 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1435 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1436 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   CSTR_T *____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((C)); rm_stack(true, 10402924002521287236UL, "mergeAlignment", &____must_manage_mergeAlignment, ____alias_loc_id_4, ____chimes_did_disable0); return ____chimes_ret_var_0; ;
# 1437 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
rm_stack(true, 10402924002521287236UL, "mergeAlignment", &____must_manage_mergeAlignment, ____alias_loc_id_4, ____chimes_did_disable0); }
# 1438 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1439 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1440 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1441 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
CSTR_T *freeC_npm(CSTR_T *C);
CSTR_T *freeC_quick(CSTR_T *C); CSTR_T *freeC(CSTR_T *C);
CSTR_T *freeC_resumable(CSTR_T *C) {const int ____chimes_did_disable1 = new_stack((void *)(&freeC), "freeC", &____must_manage_freeC, 1, 0, (size_t)(10402924002521287193UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 1442 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1443 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int i; ;
# 1444 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1445 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if (C) {
# 1446 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalScores) {
# 1447 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalScores, 10402924002521287098UL);
# 1448 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalScores = __null;
# 1449 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1450 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalStartsI) {
# 1451 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalStartsI, 10402924002521287098UL);
# 1452 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsI = __null;
# 1453 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1454 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalStartsJ) {
# 1455 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalStartsJ, 10402924002521287098UL);
# 1456 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsJ = __null;
# 1457 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1458 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalEndsI) {
# 1459 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalEndsI, 10402924002521287098UL);
# 1460 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsI = __null;
# 1461 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalEndsJ) {
# 1463 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalEndsJ, 10402924002521287098UL);
# 1464 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsJ = __null;
# 1465 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1466 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalSeqsI) {
# 1467 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= C->numReports; i++) {
# 1468 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (C->finalSeqsI[i]) {
# 1469 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(C->finalSeqsI[i], 10402924002521287100UL);
# 1470 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   C->finalSeqsI[i] = __null;
# 1471 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1472 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1473 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalSeqsI, 10402924002521287098UL);
# 1474 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsI = __null;
# 1475 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1476 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalSeqsJ) {
# 1477 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= C->numReports; i++) {
# 1478 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (C->finalSeqsJ[i]) {
# 1479 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(C->finalSeqsJ[i], 10402924002521287100UL);
# 1480 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   C->finalSeqsJ[i] = __null;
# 1481 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1482 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1483 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalSeqsJ, 10402924002521287098UL);
# 1484 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsJ = __null;
# 1485 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1486 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    free_wrapper(C, 10402924002521287193UL);
# 1487 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 1488 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   CSTR_T *____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((__null)); rm_stack(true, 10402924002521287236UL, "freeC", &____must_manage_freeC, ____alias_loc_id_5, ____chimes_did_disable1); return ____chimes_ret_var_1; ;
# 1489 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
rm_stack(true, 10402924002521287236UL, "freeC", &____must_manage_freeC, ____alias_loc_id_5, ____chimes_did_disable1); }
CSTR_T *mergeAlignment_quick(BSTR_T *B, int maxReports, int minSeparation) {const int ____chimes_did_disable0 = new_stack((void *)(&mergeAlignment), "mergeAlignment", &____must_manage_mergeAlignment, 3, 3, (size_t)(10402924002521286981UL), (size_t)(0UL), (size_t)(0UL), "mergeAlignment|B|0", &____must_checkpoint_mergeAlignment_B_0, "%struct.bstr*", (void *)(&B), (size_t)8, 1, 0, 0, "mergeAlignment|maxReports|0", &____must_checkpoint_mergeAlignment_maxReports_0, "i32", (void *)(&maxReports), (size_t)4, 0, 0, 0, "mergeAlignment|minSeparation|0", &____must_checkpoint_mergeAlignment_minSeparation_0, "i32", (void *)(&minSeparation), (size_t)4, 0, 0, 0) ; BSTR_T *P;
double beginTime;
int myRow;
int indexB;
int *index;
int length;
int flag;
int totalReports;
int producer;
int consumer;
int mask;
int iter;
int j;
int i;
CSTR_T *C;
unsigned char **sequences;
unsigned char **tempSeqsJ;
unsigned char **tempSeqsI;
int *tempEndsJ;
int *tempEndsI;
int *tempStartsJ;
int *tempStartsI;
int threadNum;
int numReports;
long long *scores;
long long *tempScores;
 if (____must_checkpoint_mergeAlignment_P_0 || ____must_checkpoint_mergeAlignment_beginTime_0 || ____must_checkpoint_mergeAlignment_myRow_0 || ____must_checkpoint_mergeAlignment_indexB_0 || ____must_checkpoint_mergeAlignment_index_0 || ____must_checkpoint_mergeAlignment_length_0 || ____must_checkpoint_mergeAlignment_flag_0 || ____must_checkpoint_mergeAlignment_totalReports_0 || ____must_checkpoint_mergeAlignment_producer_0 || ____must_checkpoint_mergeAlignment_consumer_0 || ____must_checkpoint_mergeAlignment_mask_0 || ____must_checkpoint_mergeAlignment_iter_0 || ____must_checkpoint_mergeAlignment_j_0 || ____must_checkpoint_mergeAlignment_i_0 || ____must_checkpoint_mergeAlignment_C_0 || ____must_checkpoint_mergeAlignment_sequences_0 || ____must_checkpoint_mergeAlignment_tempSeqsJ_0 || ____must_checkpoint_mergeAlignment_tempSeqsI_0 || ____must_checkpoint_mergeAlignment_tempEndsJ_0 || ____must_checkpoint_mergeAlignment_tempEndsI_0 || ____must_checkpoint_mergeAlignment_tempStartsJ_0 || ____must_checkpoint_mergeAlignment_tempStartsI_0 || ____must_checkpoint_mergeAlignment_threadNum_0 || ____must_checkpoint_mergeAlignment_numReports_0 || ____must_checkpoint_mergeAlignment_scores_0 || ____must_checkpoint_mergeAlignment_tempScores_0) { register_stack_vars(26, "mergeAlignment|P|0", &____must_checkpoint_mergeAlignment_P_0, "%struct.bstr*", (void *)(&P), (size_t)8, 1, 0, 0, "mergeAlignment|beginTime|0", &____must_checkpoint_mergeAlignment_beginTime_0, "double", (void *)(&beginTime), (size_t)8, 0, 0, 0, "mergeAlignment|myRow|0", &____must_checkpoint_mergeAlignment_myRow_0, "i32", (void *)(&myRow), (size_t)4, 0, 0, 0, "mergeAlignment|indexB|0", &____must_checkpoint_mergeAlignment_indexB_0, "i32", (void *)(&indexB), (size_t)4, 0, 0, 0, "mergeAlignment|index|0", &____must_checkpoint_mergeAlignment_index_0, "i32*", (void *)(&index), (size_t)8, 1, 0, 0, "mergeAlignment|length|0", &____must_checkpoint_mergeAlignment_length_0, "i32", (void *)(&length), (size_t)4, 0, 0, 0, "mergeAlignment|flag|0", &____must_checkpoint_mergeAlignment_flag_0, "i32", (void *)(&flag), (size_t)4, 0, 0, 0, "mergeAlignment|totalReports|0", &____must_checkpoint_mergeAlignment_totalReports_0, "i32", (void *)(&totalReports), (size_t)4, 0, 0, 0, "mergeAlignment|producer|0", &____must_checkpoint_mergeAlignment_producer_0, "i32", (void *)(&producer), (size_t)4, 0, 0, 0, "mergeAlignment|consumer|0", &____must_checkpoint_mergeAlignment_consumer_0, "i32", (void *)(&consumer), (size_t)4, 0, 0, 0, "mergeAlignment|mask|0", &____must_checkpoint_mergeAlignment_mask_0, "i32", (void *)(&mask), (size_t)4, 0, 0, 0, "mergeAlignment|iter|0", &____must_checkpoint_mergeAlignment_iter_0, "i32", (void *)(&iter), (size_t)4, 0, 0, 0, "mergeAlignment|j|0", &____must_checkpoint_mergeAlignment_j_0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "mergeAlignment|i|0", &____must_checkpoint_mergeAlignment_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "mergeAlignment|C|0", &____must_checkpoint_mergeAlignment_C_0, "%struct.cstr*", (void *)(&C), (size_t)8, 1, 0, 0, "mergeAlignment|sequences|0", &____must_checkpoint_mergeAlignment_sequences_0, "i8**", (void *)(&sequences), (size_t)8, 1, 0, 0, "mergeAlignment|tempSeqsJ|0", &____must_checkpoint_mergeAlignment_tempSeqsJ_0, "i8**", (void *)(&tempSeqsJ), (size_t)8, 1, 0, 0, "mergeAlignment|tempSeqsI|0", &____must_checkpoint_mergeAlignment_tempSeqsI_0, "i8**", (void *)(&tempSeqsI), (size_t)8, 1, 0, 0, "mergeAlignment|tempEndsJ|0", &____must_checkpoint_mergeAlignment_tempEndsJ_0, "i32*", (void *)(&tempEndsJ), (size_t)8, 1, 0, 0, "mergeAlignment|tempEndsI|0", &____must_checkpoint_mergeAlignment_tempEndsI_0, "i32*", (void *)(&tempEndsI), (size_t)8, 1, 0, 0, "mergeAlignment|tempStartsJ|0", &____must_checkpoint_mergeAlignment_tempStartsJ_0, "i32*", (void *)(&tempStartsJ), (size_t)8, 1, 0, 0, "mergeAlignment|tempStartsI|0", &____must_checkpoint_mergeAlignment_tempStartsI_0, "i32*", (void *)(&tempStartsI), (size_t)8, 1, 0, 0, "mergeAlignment|threadNum|0", &____must_checkpoint_mergeAlignment_threadNum_0, "i32", (void *)(&threadNum), (size_t)4, 0, 0, 0, "mergeAlignment|numReports|0", &____must_checkpoint_mergeAlignment_numReports_0, "i32", (void *)(&numReports), (size_t)4, 0, 0, 0, "mergeAlignment|scores|0", &____must_checkpoint_mergeAlignment_scores_0, "i64*", (void *)(&scores), (size_t)8, 1, 0, 0, "mergeAlignment|tempScores|0", &____must_checkpoint_mergeAlignment_tempScores_0, "i64*", (void *)(&tempScores), (size_t)8, 1, 0, 0); } ; ;
# 52 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 53 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores = (__null) ;
# 54 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   int newReports; int numThreads; int maxThreads; ;
# 55 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       tempStartsI = (__null) ; tempStartsJ = (__null) ;
# 56 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       tempEndsI = (__null) ; tempEndsJ = (__null) ;
# 57 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       unsigned char *ptr; tempSeqsI = (__null) ; tempSeqsJ = (__null) ;
# 58 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     C = (__null) ;
# 59 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
         ;
# 60 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    int count; ;
# 61 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   int myCol; int npRow; int npCol; ;
# 62 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   double endTime; ;
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   ;
# 72 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  maxThreads = B->numThreads;
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P = (BSTR_T*)malloc_wrapper(sizeof(BSTR_T), 10402924002521285944UL, 0, 1, (int)sizeof(struct bstr), 8, (int)__builtin_offsetof(struct bstr, bestScores), (int)__builtin_offsetof(struct bstr, numReports), (int)__builtin_offsetof(struct bstr, bestStartsI), (int)__builtin_offsetof(struct bstr, bestStartsJ), (int)__builtin_offsetof(struct bstr, bestEndsI), (int)__builtin_offsetof(struct bstr, bestEndsJ), (int)__builtin_offsetof(struct bstr, bestSeqsI), (int)__builtin_offsetof(struct bstr, bestSeqsJ))) == __null ) {
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P\n");
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->numReports = (int*)malloc_wrapper(maxThreads*sizeof(int), 10402924002521285946UL, 0, 0)) == __null ) {
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->numReports\n");
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 97 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 98 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 99 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestScores = (long long**)malloc_wrapper(maxThreads*sizeof(long long*), 10402924002521285946UL, 1, 0))
# 100 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestScores\n");
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestStartsI = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestStartsI\n");
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 108 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestStartsJ = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestStartsJ\n");
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestEndsI = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestEndsI\n");
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestEndsJ = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestEndsJ\n");
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestSeqsI =
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char***)malloc_wrapper(maxThreads*sizeof(unsigned char**), 10402924002521285946UL, 1, 0))
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestSeqsI\n");
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestSeqsJ =
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char***)malloc_wrapper(maxThreads*sizeof(unsigned char**), 10402924002521285946UL, 1, 0))
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestSeqsJ\n");
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  {
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     call_lbl_28: ({ calling((void*)gridInfo, 28, ____alias_loc_id_3, 0UL, 4, (size_t)(10402924002521284825UL), (size_t)(10402924002521284826UL), (size_t)(10402924002521284823UL), (size_t)(10402924002521284824UL)); (gridInfo)(&npRow, &npCol, &myRow, &myCol); }) ;
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    threadNum = 0;
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempScores =
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (long long*)malloc_wrapper((2*maxReports+1)*sizeof(long long), 10402924002521287098UL, 0, 0))
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 198 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempScores for thread %d\n",
# 199 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 200 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 201 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempStartsI =
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempStartsI for thread %d\n",
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempStartsJ =
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 218 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempStartsJ for thread %d\n",
# 219 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 220 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 221 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 222 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 223 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 224 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 225 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 226 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempEndsI =
# 227 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempEndsI for thread %d\n",
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 235 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 236 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempEndsJ =
# 237 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 238 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempEndsJ for thread %d\n",
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempSeqsI =
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempSeqsI for thread %d\n",
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 254 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 255 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 256 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 257 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempSeqsJ =
# 258 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 259 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 260 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempSeqsJ for thread %d\n",
# 261 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 262 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 263 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    for (i = 0; i <= 2*maxReports; i++) {
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI[i] = tempSeqsJ[i] = __null;
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestScores[threadNum] = tempScores;
# 280 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestStartsI[threadNum] = tempStartsI;
# 281 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestStartsJ[threadNum] = tempStartsJ;
# 282 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestEndsI[threadNum] = tempEndsI;
# 283 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestEndsJ[threadNum] = tempEndsJ;
# 284 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestSeqsI[threadNum] = tempSeqsI;
# 285 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestSeqsJ[threadNum] = tempSeqsJ;
# 286 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 287 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 288 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 289 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 290 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 291 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 292 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 293 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (threadNum & 1) == 0 ) {
# 294 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (sequences =
# 295 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521286304UL, 1, 0))
# 296 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 297 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate sequences for thread %d\n",
# 298 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 299 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 300 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 301 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 302 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 303 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 304 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 305 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (scores = (long long*)malloc_wrapper((2*maxReports+1)*sizeof(long long), 10402924002521285976UL, 0, 0))
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate scores for thread %d\n",
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (index = (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521285967UL, 0, 0)) == __null ) {
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate index for thread %d\n",
# 317 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 318 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 319 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 320 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 321 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 322 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 323 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     call_lbl_59: beginTime = ({ calling((void*)getSeconds, 59, ____alias_loc_id_1, 0UL, 0); (getSeconds)(); }) ;
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (myRow < 0 || myCol < 0) {
# 360 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      P->numReports[threadNum] = numReports = 0;
# 361 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 362 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      P->numReports[threadNum] = numReports = B->numReports[threadNum];
# 363 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    indexB = threadNum;
# 384 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 385 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 386 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 387 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 388 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    for (i = 1; i <= numReports; i++) {
# 389 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores[i] = B->bestScores[indexB][i];
# 390 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsI[i] = B->bestStartsI[indexB][i];
# 391 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsJ[i] = B->bestStartsJ[indexB][i];
# 392 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsI[i] = B->bestEndsI[indexB][i];
# 393 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsJ[i] = B->bestEndsJ[indexB][i];
# 394 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 395 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length = strlen((char*)(B->bestSeqsI[indexB][i]));
# 396 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if (length < 1) {
# 397 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: strlen(B->bestSeqsI[%d] = %d for thread %d\n",
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, length, indexB);
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length++;
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (tempSeqsI[i] =
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate tempSeqsI[%d] for thread %d",
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, indexB);
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI[i] =
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char*)strcpy((char*)(tempSeqsI[i]),
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
          (char*)(B->bestSeqsI[indexB][i]));
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 413 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length = strlen((char*)(B->bestSeqsJ[indexB][i]));
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if (length < 1) {
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: strlen(B->bestSeqsJ[%d] = %d for thread %d\n",
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, length, indexB);
# 417 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 418 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 419 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length++;
# 420 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (tempSeqsJ[i] =
# 421 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 422 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 423 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate tempSeqsJ[%d] for thread %d",
# 424 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, indexB);
# 425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 426 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 427 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsJ[i] =
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char*)strcpy((char*)(tempSeqsJ[i]),
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
          (char*)(B->bestSeqsJ[indexB][i]));
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    iter = npRow*npCol - 1;
# 463 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    mask = 1;
# 464 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    while (iter > 0) {
# 465 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      consumer = threadNum & (~mask);
# 466 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      producer = consumer | ((mask + 1) >> 1);
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( ( threadNum == consumer ) && ( producer < npRow*npCol ) &&
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    ( myRow >= 0 ) && ( myCol >= 0) ) {
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 totalReports = numReports;
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= P->numReports[producer]; i++) {
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   flag = 0;
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   for (j = 1; j <= numReports; j++) {
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( ( ( (abs(tempStartsI[j] - P->bestStartsI[producer][i]) > abs(tempStartsJ[j] - P->bestStartsJ[producer][i])) ? abs(tempStartsI[j] - P->bestStartsI[producer][i]) : abs(tempStartsJ[j] - P->bestStartsJ[producer][i]) )
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     < minSeparation ) ||
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   ( ( (abs(tempEndsI[j] - P->bestEndsI[producer][i]) > abs(tempEndsJ[j] - P->bestEndsJ[producer][i])) ? abs(tempEndsI[j] - P->bestEndsI[producer][i]) : abs(tempEndsJ[j] - P->bestEndsJ[producer][i]) )
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     < minSeparation ) ) {
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       flag = 1;
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       break;
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (flag == 0) {
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     totalReports++;
# 580 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempScores[totalReports] = P->bestScores[producer][i];
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempStartsI[totalReports] = P->bestStartsI[producer][i];
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempStartsJ[totalReports] = P->bestStartsJ[producer][i];
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempEndsI[totalReports] = P->bestEndsI[producer][i];
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempEndsJ[totalReports] = P->bestEndsJ[producer][i];
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsI[totalReports] = P->bestSeqsI[producer][i];
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsJ[totalReports] = P->bestSeqsJ[producer][i];
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     P->bestSeqsI[producer][i] = P->bestSeqsJ[producer][i] = __null;
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   } else {
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if (P->bestSeqsI[producer][i]) {
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       free_wrapper(P->bestSeqsI[producer][i], 10402924002521287100UL);
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       P->bestSeqsI[producer][i] = __null;
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 593 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if (P->bestSeqsJ[producer][i]) {
# 594 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       free_wrapper(P->bestSeqsJ[producer][i], 10402924002521287100UL);
# 595 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       P->bestSeqsJ[producer][i] = __null;
# 596 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 597 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     printf("\tmergeAlignment() thread %d found redundant report %d from thread %d\n",
# 598 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     threadNum, i, producer);
# 599 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 600 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  call_lbl_85: ({ calling((void*)qSort_both, 85, ____alias_loc_id_2, 0UL, 4, (size_t)(10402924002521285976UL), (size_t)(10402924002521285967UL), (size_t)(10402924002521287098UL), (size_t)(0UL)); (qSort_both)(scores, index, tempScores, totalReports); }) ;
# 850 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 numReports = ( (maxReports < totalReports) ? maxReports : totalReports );
# 851 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 852 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 853 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 P->numReports[consumer] = numReports;
# 854 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 P->numReports[producer] = 0;
# 855 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 856 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 857 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 858 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempScores[ index[totalReports - i + 1] ];
# 859 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 860 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 861 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempScores[i] = scores[i];
# 862 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 863 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 865 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempStartsI[ index[totalReports - i + 1] ];
# 866 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 867 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 868 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempStartsI[i] = scores[i];
# 869 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 870 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 871 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 872 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempStartsJ[ index[totalReports - i + 1] ];
# 873 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 874 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 875 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempStartsJ[i] = scores[i];
# 876 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 877 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 878 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 879 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempEndsI[ index[totalReports - i + 1] ];
# 880 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 881 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 882 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempEndsI[i] = scores[i];
# 883 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 884 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 885 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempEndsJ[ index[totalReports - i + 1] ];
# 887 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 888 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 889 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempEndsJ[i] = scores[i];
# 890 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 899 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 899 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= totalReports - numReports; i++) {
# 900 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (tempSeqsI[ index[i] ]) {
# 901 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     free_wrapper(tempSeqsI[ index[i] ], 10402924002521287100UL);
# 902 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsI[ index[i] ] = __null;
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 904 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (tempSeqsJ[ index[i] ]) {
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     free_wrapper(tempSeqsJ[ index[i] ], 10402924002521287100UL);
# 906 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsJ[ index[i] ] = __null;
# 907 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 909 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 910 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 911 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 912 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 913 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 914 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 915 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 916 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   sequences[i] = tempSeqsI[ index[totalReports - i + 1] ];
# 917 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 918 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 919 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = sequences[i];
# 920 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 921 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 922 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 923 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   sequences[i] = tempSeqsJ[ index[totalReports - i + 1] ];
# 924 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 925 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 926 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsJ[i] = sequences[i];
# 927 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 938 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 938 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = numReports+1; i <= totalReports; i++) {
# 939 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = tempSeqsJ[i] = __null;
# 940 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 956 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 956 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 971 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 971 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( ( threadNum == producer ) && ( myRow >= 0 ) && ( myCol >= 0) ) {
# 1161 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1161 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1176 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1176 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      mask = (mask << 1) + 1;
# 1177 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      iter >>= 1;
# 1178 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1179 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1180 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1181 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1182 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1183 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     call_lbl_88: endTime = ({ calling((void*)getSeconds, 88, ____alias_loc_id_0, 0UL, 0); (getSeconds)(); }) ;
# 1184 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (threadNum == 0) {
# 1185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("\n        Merge time = %10.5f seconds\n",
# 1186 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      endTime - beginTime);
# 1187 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (threadNum == 0) {
# 1198 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1199 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C = (CSTR_T*)malloc_wrapper(sizeof(CSTR_T), 10402924002521287236UL, 0, 1, (int)sizeof(struct cstr), 7, (int)__builtin_offsetof(struct cstr, finalScores), (int)__builtin_offsetof(struct cstr, finalStartsI), (int)__builtin_offsetof(struct cstr, finalStartsJ), (int)__builtin_offsetof(struct cstr, finalEndsI), (int)__builtin_offsetof(struct cstr, finalEndsJ), (int)__builtin_offsetof(struct cstr, finalSeqsI), (int)__builtin_offsetof(struct cstr, finalSeqsJ))) == __null ) {
# 1200 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C\n");
# 1201 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1202 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1203 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1204 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1205 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1206 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->numReports = 0;
# 1207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalScores = __null;
# 1208 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsI = C->finalStartsJ = __null;
# 1209 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsI = C->finalEndsJ = __null;
# 1210 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsI = C->finalSeqsJ = __null;
# 1211 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1212 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->numReports = numReports;
# 1213 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1214 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalScores =
# 1215 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (long long*)malloc_wrapper((numReports+1)*sizeof(long long), 10402924002521287098UL, 0, 0)) == __null ) {
# 1216 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalScores\n");
# 1217 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1218 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1219 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1220 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1221 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1222 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1223 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalStartsI =
# 1224 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1225 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalStartsI\n");
# 1226 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1227 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1228 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1229 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1230 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1231 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1232 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalStartsJ =
# 1233 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1234 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalStartsJ\n");
# 1235 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1236 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1237 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1238 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1239 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1240 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1241 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalEndsI =
# 1242 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1243 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalEndsI\n");
# 1244 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1245 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1246 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1247 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1248 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1249 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1250 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalEndsJ =
# 1251 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1252 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalEndsJ\n");
# 1253 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1254 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1255 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1256 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1257 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1258 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1259 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( (C->finalSeqsI =
# 1260 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (unsigned char**)malloc_wrapper((numReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 1261 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   == __null ) {
# 1262 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       printf("mergeAlignment: cannot allocate C->finalSeqsI\n");
# 1263 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1264 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1265 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1266 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1267 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1268 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1269 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( (C->finalSeqsJ =
# 1270 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (unsigned char**)malloc_wrapper((numReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 1271 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   == __null ) {
# 1272 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       printf("mergeAlignment: cannot allocate C->finalSeqsJ\n");
# 1273 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1274 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1275 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1276 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1277 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1278 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= numReports; i++) {
# 1280 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalScores[i] = tempScores[i];
# 1281 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalStartsI[i] = tempStartsI[i];
# 1282 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalStartsJ[i] = tempStartsJ[i];
# 1283 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalEndsI[i] = tempEndsI[i];
# 1284 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalEndsJ[i] = tempEndsJ[i];
# 1285 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( ( length = strlen( (char*)tempSeqsI[i] ) ) < 1 ) {
# 1286 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: strlen(tempSeqsI[%d]) = %d for process %d\n",
# 1287 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   i, length, threadNum);
# 1288 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1289 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1290 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1291 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1292 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1293 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 length++;
# 1294 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( (C->finalSeqsI[i] =
# 1295 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 1296 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      == __null ) {
# 1297 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: cannot allocate C->finalSeqsI[%d]\n", i);
# 1298 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1299 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1300 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1301 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1302 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1303 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalSeqsI[i] =
# 1304 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char*)strcpy((char*)C->finalSeqsI[i], (char*)tempSeqsI[i]);
# 1305 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 free_wrapper(tempSeqsI[i], 10402924002521287100UL);
# 1306 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 tempSeqsI[i] = __null;
# 1307 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1308 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( ( length = strlen( (char*)tempSeqsJ[i] ) ) < 1 ) {
# 1309 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: strlen(tempSeqsJ[%d]) = %d for process %d\n",
# 1310 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   i, length, threadNum);
# 1311 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1312 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1313 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1314 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1315 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1316 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 length++;
# 1317 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( (C->finalSeqsJ[i] =
# 1318 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 1319 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      == __null ) {
# 1320 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: cannot allocate C->finalSeqsJ[%d]\n", i);
# 1321 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1322 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1323 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1324 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1325 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1326 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalSeqsJ[i] =
# 1327 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char*)strcpy((char*)C->finalSeqsJ[i], (char*)tempSeqsJ[i]);
# 1328 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 free_wrapper(tempSeqsJ[i], 10402924002521287100UL);
# 1329 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 tempSeqsJ[i] = __null;
# 1330 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1331 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1332 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1333 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1334 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1335 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempScores) {
# 1336 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempScores, 10402924002521287098UL);
# 1337 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores = __null;
# 1338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1339 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempStartsI) {
# 1340 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempStartsI, 10402924002521287098UL);
# 1341 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsI = __null;
# 1342 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1343 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempStartsJ) {
# 1344 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempStartsJ, 10402924002521287098UL);
# 1345 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsJ = __null;
# 1346 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1347 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempEndsI) {
# 1348 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempEndsI, 10402924002521287098UL);
# 1349 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsI = __null;
# 1350 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1351 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempEndsJ) {
# 1352 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempEndsJ, 10402924002521287098UL);
# 1353 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsJ = __null;
# 1354 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1355 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1356 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1357 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1358 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1360 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1361 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1362 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    count = 0;
# 1363 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempSeqsI) {
# 1364 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 0; i <= 2*maxReports; i++) {
# 1365 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (tempSeqsI[i]) {
# 1366 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(tempSeqsI[i], 10402924002521287100UL);
# 1367 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = __null;
# 1368 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   count++;
# 1369 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1370 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1371 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempSeqsI, 10402924002521287098UL);
# 1372 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI = __null;
# 1373 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1374 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (count != 0) {
# 1375 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: freed %d tempSeqsI strings for thread %d\n",
# 1376 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      count, threadNum);
# 1377 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1378 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1379 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    count = 0;
# 1380 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempSeqsJ) {
# 1381 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 0; i <= 2*maxReports; i++) {
# 1382 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (tempSeqsJ[i]) {
# 1383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(tempSeqsJ[i], 10402924002521287100UL);
# 1384 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsJ[i] = __null;
# 1385 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   count++;
# 1386 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1387 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1388 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempSeqsJ, 10402924002521287098UL);
# 1389 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsJ = __null;
# 1390 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1391 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (count != 0) {
# 1392 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: freed %d tempSeqsJ strings for thread %d\n",
# 1393 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      count, threadNum);
# 1394 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1395 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1396 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1397 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1398 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1399 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1400 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1401 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (threadNum & 1) == 0 ) {
# 1402 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(sequences, 10402924002521286304UL);
# 1403 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(scores, 10402924002521285976UL);
# 1404 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(index, 10402924002521285967UL);
# 1405 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 1406 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1407 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1408 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1409 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1410 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 1425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->numReports, 10402924002521285946UL);
# 1426 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestScores, 10402924002521285946UL);
# 1427 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestStartsI, 10402924002521285946UL);
# 1428 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestStartsJ, 10402924002521285946UL);
# 1429 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestEndsI, 10402924002521285946UL);
# 1430 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestEndsJ, 10402924002521285946UL);
# 1431 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestSeqsI, 10402924002521285946UL);
# 1432 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestSeqsJ, 10402924002521285946UL);
# 1433 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P, 10402924002521285944UL);
# 1434 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1435 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1436 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   CSTR_T *____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((C)); rm_stack(true, 10402924002521287236UL, "mergeAlignment", &____must_manage_mergeAlignment, ____alias_loc_id_4, ____chimes_did_disable0); return ____chimes_ret_var_0; ;
# 1437 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
rm_stack(true, 10402924002521287236UL, "mergeAlignment", &____must_manage_mergeAlignment, ____alias_loc_id_4, ____chimes_did_disable0); }

CSTR_T *mergeAlignment(BSTR_T *B, int maxReports, int minSeparation) { return (____chimes_replaying ? mergeAlignment_resumable(B, maxReports, minSeparation) : mergeAlignment_quick(B, maxReports, minSeparation)); }

CSTR_T *freeC_quick(CSTR_T *C) {const int ____chimes_did_disable1 = new_stack((void *)(&freeC), "freeC", &____must_manage_freeC, 1, 0, (size_t)(10402924002521287193UL)) ; ; ;
# 1442 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1443 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int i; ;
# 1444 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1445 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if (C) {
# 1446 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalScores) {
# 1447 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalScores, 10402924002521287098UL);
# 1448 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalScores = __null;
# 1449 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1450 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalStartsI) {
# 1451 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalStartsI, 10402924002521287098UL);
# 1452 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsI = __null;
# 1453 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1454 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalStartsJ) {
# 1455 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalStartsJ, 10402924002521287098UL);
# 1456 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsJ = __null;
# 1457 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1458 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalEndsI) {
# 1459 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalEndsI, 10402924002521287098UL);
# 1460 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsI = __null;
# 1461 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalEndsJ) {
# 1463 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalEndsJ, 10402924002521287098UL);
# 1464 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsJ = __null;
# 1465 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1466 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalSeqsI) {
# 1467 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= C->numReports; i++) {
# 1468 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (C->finalSeqsI[i]) {
# 1469 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(C->finalSeqsI[i], 10402924002521287100UL);
# 1470 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   C->finalSeqsI[i] = __null;
# 1471 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1472 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1473 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalSeqsI, 10402924002521287098UL);
# 1474 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsI = __null;
# 1475 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1476 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalSeqsJ) {
# 1477 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= C->numReports; i++) {
# 1478 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (C->finalSeqsJ[i]) {
# 1479 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(C->finalSeqsJ[i], 10402924002521287100UL);
# 1480 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   C->finalSeqsJ[i] = __null;
# 1481 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1482 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1483 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalSeqsJ, 10402924002521287098UL);
# 1484 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsJ = __null;
# 1485 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1486 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    free_wrapper(C, 10402924002521287193UL);
# 1487 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 1488 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   CSTR_T *____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((__null)); rm_stack(true, 10402924002521287236UL, "freeC", &____must_manage_freeC, ____alias_loc_id_5, ____chimes_did_disable1); return ____chimes_ret_var_1; ;
# 1489 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
rm_stack(true, 10402924002521287236UL, "freeC", &____must_manage_freeC, ____alias_loc_id_5, ____chimes_did_disable1); }

CSTR_T *freeC(CSTR_T *C) { return (____chimes_replaying ? freeC_resumable(C) : freeC_quick(C)); }



CSTR_T *mergeAlignment_npm(BSTR_T *B, int maxReports, int minSeparation) {
# 52 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 53 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  long long *tempScores=__null, *scores;
# 54 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int numReports, newReports, threadNum, numThreads, maxThreads;
# 55 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int *tempStartsI=__null, *tempStartsJ=__null;
# 56 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int *tempEndsI=__null, *tempEndsJ=__null;
# 57 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  unsigned char **tempSeqsI=__null, **tempSeqsJ=__null, **sequences, *ptr;
# 58 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  CSTR_T *C=__null;
# 59 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int i, j, iter, mask, consumer, producer, totalReports;
# 60 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int flag, length, count, *index, indexB;
# 61 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int myRow, myCol, npRow, npCol;
# 62 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  double beginTime, endTime;
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  BSTR_T *P;
# 72 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  maxThreads = B->numThreads;
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P = (BSTR_T*)malloc_wrapper(sizeof(BSTR_T), 10402924002521285944UL, 0, 1, (int)sizeof(struct bstr), 8, (int)__builtin_offsetof(struct bstr, bestScores), (int)__builtin_offsetof(struct bstr, numReports), (int)__builtin_offsetof(struct bstr, bestStartsI), (int)__builtin_offsetof(struct bstr, bestStartsJ), (int)__builtin_offsetof(struct bstr, bestEndsI), (int)__builtin_offsetof(struct bstr, bestEndsJ), (int)__builtin_offsetof(struct bstr, bestSeqsI), (int)__builtin_offsetof(struct bstr, bestSeqsJ))) == __null ) {
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P\n");
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->numReports = (int*)malloc_wrapper(maxThreads*sizeof(int), 10402924002521285946UL, 0, 0)) == __null ) {
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->numReports\n");
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 97 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 98 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 99 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestScores = (long long**)malloc_wrapper(maxThreads*sizeof(long long*), 10402924002521285946UL, 1, 0))
# 100 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestScores\n");
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestStartsI = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestStartsI\n");
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 108 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestStartsJ = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestStartsJ\n");
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestEndsI = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestEndsI\n");
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestEndsJ = (int**)malloc_wrapper(maxThreads*sizeof(int*), 10402924002521285946UL, 1, 0)) == __null ) {
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestEndsJ\n");
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestSeqsI =
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char***)malloc_wrapper(maxThreads*sizeof(unsigned char**), 10402924002521285946UL, 1, 0))
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestSeqsI\n");
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if ( (P->bestSeqsJ =
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char***)malloc_wrapper(maxThreads*sizeof(unsigned char**), 10402924002521285946UL, 1, 0))
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       == __null ) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    printf("mergeAlignment: cannot allocate P->bestSeqsJ\n");
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    exit (1);
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  {
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (*____chimes_extern_func_gridInfo)(&npRow, &npCol, &myRow, &myCol);
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    threadNum = 0;
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempScores =
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (long long*)malloc_wrapper((2*maxReports+1)*sizeof(long long), 10402924002521287098UL, 0, 0))
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 198 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempScores for thread %d\n",
# 199 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 200 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 201 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempStartsI =
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempStartsI for thread %d\n",
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempStartsJ =
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 218 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempStartsJ for thread %d\n",
# 219 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 220 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 221 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 222 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 223 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 224 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 225 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 226 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempEndsI =
# 227 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempEndsI for thread %d\n",
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 235 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 236 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempEndsJ =
# 237 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null ) {
# 238 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempEndsJ for thread %d\n",
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempSeqsI =
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempSeqsI for thread %d\n",
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 254 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 255 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 256 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 257 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (tempSeqsJ =
# 258 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 259 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  == __null ) {
# 260 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: cannot allocate tempSeqsJ for thread %d\n",
# 261 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      threadNum);
# 262 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 263 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      exit (1);
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    for (i = 0; i <= 2*maxReports; i++) {
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI[i] = tempSeqsJ[i] = __null;
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestScores[threadNum] = tempScores;
# 280 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestStartsI[threadNum] = tempStartsI;
# 281 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestStartsJ[threadNum] = tempStartsJ;
# 282 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestEndsI[threadNum] = tempEndsI;
# 283 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestEndsJ[threadNum] = tempEndsJ;
# 284 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestSeqsI[threadNum] = tempSeqsI;
# 285 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    P->bestSeqsJ[threadNum] = tempSeqsJ;
# 286 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 287 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 288 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 289 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 290 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 291 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 292 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 293 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (threadNum & 1) == 0 ) {
# 294 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (sequences =
# 295 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char**)malloc_wrapper((2*maxReports+1)*sizeof(unsigned char*), 10402924002521286304UL, 1, 0))
# 296 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 297 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate sequences for thread %d\n",
# 298 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 299 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 300 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 301 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 302 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 303 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 304 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 305 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (scores = (long long*)malloc_wrapper((2*maxReports+1)*sizeof(long long), 10402924002521285976UL, 0, 0))
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate scores for thread %d\n",
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (index = (int*)malloc_wrapper((2*maxReports+1)*sizeof(int), 10402924002521285967UL, 0, 0)) == __null ) {
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate index for thread %d\n",
# 317 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        threadNum);
# 318 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 319 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 320 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 321 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 322 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 323 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    beginTime = (*____chimes_extern_func_getSeconds)();
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (myRow < 0 || myCol < 0) {
# 360 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      P->numReports[threadNum] = numReports = 0;
# 361 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 362 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      P->numReports[threadNum] = numReports = B->numReports[threadNum];
# 363 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    indexB = threadNum;
# 384 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 385 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 386 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 387 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 388 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    for (i = 1; i <= numReports; i++) {
# 389 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores[i] = B->bestScores[indexB][i];
# 390 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsI[i] = B->bestStartsI[indexB][i];
# 391 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsJ[i] = B->bestStartsJ[indexB][i];
# 392 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsI[i] = B->bestEndsI[indexB][i];
# 393 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsJ[i] = B->bestEndsJ[indexB][i];
# 394 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 395 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length = strlen((char*)(B->bestSeqsI[indexB][i]));
# 396 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if (length < 1) {
# 397 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: strlen(B->bestSeqsI[%d] = %d for thread %d\n",
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, length, indexB);
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length++;
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (tempSeqsI[i] =
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate tempSeqsI[%d] for thread %d",
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, indexB);
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI[i] =
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char*)strcpy((char*)(tempSeqsI[i]),
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
          (char*)(B->bestSeqsI[indexB][i]));
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 413 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length = strlen((char*)(B->bestSeqsJ[indexB][i]));
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if (length < 1) {
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: strlen(B->bestSeqsJ[%d] = %d for thread %d\n",
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, length, indexB);
# 417 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 418 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 419 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      length++;
# 420 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (tempSeqsJ[i] =
# 421 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 422 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    == __null ) {
# 423 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate tempSeqsJ[%d] for thread %d",
# 424 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
        i, indexB);
# 425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 426 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 427 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsJ[i] =
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (unsigned char*)strcpy((char*)(tempSeqsJ[i]),
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
          (char*)(B->bestSeqsJ[indexB][i]));
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    iter = npRow*npCol - 1;
# 463 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    mask = 1;
# 464 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    while (iter > 0) {
# 465 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      consumer = threadNum & (~mask);
# 466 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      producer = consumer | ((mask + 1) >> 1);
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( ( threadNum == consumer ) && ( producer < npRow*npCol ) &&
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    ( myRow >= 0 ) && ( myCol >= 0) ) {
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 totalReports = numReports;
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= P->numReports[producer]; i++) {
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   flag = 0;
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   for (j = 1; j <= numReports; j++) {
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( ( ( (abs(tempStartsI[j] - P->bestStartsI[producer][i]) > abs(tempStartsJ[j] - P->bestStartsJ[producer][i])) ? abs(tempStartsI[j] - P->bestStartsI[producer][i]) : abs(tempStartsJ[j] - P->bestStartsJ[producer][i]) )
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     < minSeparation ) ||
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   ( ( (abs(tempEndsI[j] - P->bestEndsI[producer][i]) > abs(tempEndsJ[j] - P->bestEndsJ[producer][i])) ? abs(tempEndsI[j] - P->bestEndsI[producer][i]) : abs(tempEndsJ[j] - P->bestEndsJ[producer][i]) )
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     < minSeparation ) ) {
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       flag = 1;
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       break;
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (flag == 0) {
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     totalReports++;
# 580 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempScores[totalReports] = P->bestScores[producer][i];
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempStartsI[totalReports] = P->bestStartsI[producer][i];
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempStartsJ[totalReports] = P->bestStartsJ[producer][i];
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempEndsI[totalReports] = P->bestEndsI[producer][i];
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempEndsJ[totalReports] = P->bestEndsJ[producer][i];
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsI[totalReports] = P->bestSeqsI[producer][i];
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsJ[totalReports] = P->bestSeqsJ[producer][i];
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     P->bestSeqsI[producer][i] = P->bestSeqsJ[producer][i] = __null;
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   } else {
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if (P->bestSeqsI[producer][i]) {
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       free_wrapper(P->bestSeqsI[producer][i], 10402924002521287100UL);
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       P->bestSeqsI[producer][i] = __null;
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 593 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if (P->bestSeqsJ[producer][i]) {
# 594 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       free_wrapper(P->bestSeqsJ[producer][i], 10402924002521287100UL);
# 595 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       P->bestSeqsJ[producer][i] = __null;
# 596 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     }
# 597 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     printf("\tmergeAlignment() thread %d found redundant report %d from thread %d\n",
# 598 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     threadNum, i, producer);
# 599 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 600 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 849 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 (*____chimes_extern_func_qSort_both)(scores, index, tempScores, totalReports);
# 850 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 numReports = ( (maxReports < totalReports) ? maxReports : totalReports );
# 851 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 852 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 853 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 P->numReports[consumer] = numReports;
# 854 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 P->numReports[producer] = 0;
# 855 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 856 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 857 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 858 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempScores[ index[totalReports - i + 1] ];
# 859 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 860 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 861 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempScores[i] = scores[i];
# 862 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 863 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 864 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 865 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempStartsI[ index[totalReports - i + 1] ];
# 866 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 867 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 868 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempStartsI[i] = scores[i];
# 869 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 870 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 871 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 872 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempStartsJ[ index[totalReports - i + 1] ];
# 873 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 874 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 875 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempStartsJ[i] = scores[i];
# 876 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 877 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 878 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 879 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempEndsI[ index[totalReports - i + 1] ];
# 880 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 881 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 882 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempEndsI[i] = scores[i];
# 883 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 884 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 885 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 886 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   scores[i] = tempEndsJ[ index[totalReports - i + 1] ];
# 887 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 888 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 889 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempEndsJ[i] = scores[i];
# 890 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 899 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 899 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= totalReports - numReports; i++) {
# 900 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (tempSeqsI[ index[i] ]) {
# 901 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     free_wrapper(tempSeqsI[ index[i] ], 10402924002521287100UL);
# 902 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsI[ index[i] ] = __null;
# 903 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 904 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   if (tempSeqsJ[ index[i] ]) {
# 905 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     free_wrapper(tempSeqsJ[ index[i] ], 10402924002521287100UL);
# 906 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     tempSeqsJ[ index[i] ] = __null;
# 907 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   }
# 908 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 909 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 910 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 911 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 912 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 913 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 914 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 915 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 916 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   sequences[i] = tempSeqsI[ index[totalReports - i + 1] ];
# 917 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 918 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 919 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = sequences[i];
# 920 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 921 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 922 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 923 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   sequences[i] = tempSeqsJ[ index[totalReports - i + 1] ];
# 924 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 925 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = 1; i <= numReports; i++) {
# 926 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsJ[i] = sequences[i];
# 927 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 938 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 938 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 for (i = numReports+1; i <= totalReports; i++) {
# 939 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = tempSeqsJ[i] = __null;
# 940 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 956 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 956 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 971 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 971 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( ( threadNum == producer ) && ( myRow >= 0 ) && ( myCol >= 0) ) {
# 1161 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1161 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1176 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1176 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      mask = (mask << 1) + 1;
# 1177 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      iter >>= 1;
# 1178 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1179 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1180 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1181 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1182 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1183 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    endTime = (*____chimes_extern_func_getSeconds)();
# 1184 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (threadNum == 0) {
# 1185 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("\n        Merge time = %10.5f seconds\n",
# 1186 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      endTime - beginTime);
# 1187 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1197 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (threadNum == 0) {
# 1198 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1199 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C = (CSTR_T*)malloc_wrapper(sizeof(CSTR_T), 10402924002521287236UL, 0, 1, (int)sizeof(struct cstr), 7, (int)__builtin_offsetof(struct cstr, finalScores), (int)__builtin_offsetof(struct cstr, finalStartsI), (int)__builtin_offsetof(struct cstr, finalStartsJ), (int)__builtin_offsetof(struct cstr, finalEndsI), (int)__builtin_offsetof(struct cstr, finalEndsJ), (int)__builtin_offsetof(struct cstr, finalSeqsI), (int)__builtin_offsetof(struct cstr, finalSeqsJ))) == __null ) {
# 1200 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C\n");
# 1201 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1202 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1203 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1204 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1205 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1206 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->numReports = 0;
# 1207 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalScores = __null;
# 1208 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsI = C->finalStartsJ = __null;
# 1209 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsI = C->finalEndsJ = __null;
# 1210 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsI = C->finalSeqsJ = __null;
# 1211 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1212 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->numReports = numReports;
# 1213 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1214 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalScores =
# 1215 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (long long*)malloc_wrapper((numReports+1)*sizeof(long long), 10402924002521287098UL, 0, 0)) == __null ) {
# 1216 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalScores\n");
# 1217 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1218 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1219 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1220 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1221 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1222 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1223 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalStartsI =
# 1224 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1225 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalStartsI\n");
# 1226 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1227 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1228 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1229 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1230 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1231 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1232 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalStartsJ =
# 1233 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1234 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalStartsJ\n");
# 1235 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1236 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1237 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1238 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1239 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1240 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1241 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalEndsI =
# 1242 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1243 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalEndsI\n");
# 1244 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1245 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1246 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1247 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1248 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1249 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1250 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      if ( (C->finalEndsJ =
# 1251 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     (int*)malloc_wrapper((numReports+1)*sizeof(int), 10402924002521287098UL, 0, 0)) == __null) {
# 1252 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 printf("mergeAlignment: cannot allocate C->finalEndsJ\n");
# 1253 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1254 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1255 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1256 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1257 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1258 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1259 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( (C->finalSeqsI =
# 1260 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (unsigned char**)malloc_wrapper((numReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 1261 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   == __null ) {
# 1262 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       printf("mergeAlignment: cannot allocate C->finalSeqsI\n");
# 1263 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1264 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1265 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1266 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1267 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1268 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1269 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
     if ( (C->finalSeqsJ =
# 1270 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    (unsigned char**)malloc_wrapper((numReports+1)*sizeof(unsigned char*), 10402924002521287098UL, 1, 0))
# 1271 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   == __null ) {
# 1272 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       printf("mergeAlignment: cannot allocate C->finalSeqsJ\n");
# 1273 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1274 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1275 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1276 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 exit (1);
# 1277 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1278 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1279 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= numReports; i++) {
# 1280 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalScores[i] = tempScores[i];
# 1281 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalStartsI[i] = tempStartsI[i];
# 1282 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalStartsJ[i] = tempStartsJ[i];
# 1283 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalEndsI[i] = tempEndsI[i];
# 1284 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalEndsJ[i] = tempEndsJ[i];
# 1285 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( ( length = strlen( (char*)tempSeqsI[i] ) ) < 1 ) {
# 1286 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: strlen(tempSeqsI[%d]) = %d for process %d\n",
# 1287 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   i, length, threadNum);
# 1288 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1289 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1290 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1291 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1292 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1293 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 length++;
# 1294 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( (C->finalSeqsI[i] =
# 1295 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 1296 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      == __null ) {
# 1297 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: cannot allocate C->finalSeqsI[%d]\n", i);
# 1298 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1299 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1300 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1301 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1302 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1303 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalSeqsI[i] =
# 1304 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char*)strcpy((char*)C->finalSeqsI[i], (char*)tempSeqsI[i]);
# 1305 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 free_wrapper(tempSeqsI[i], 10402924002521287100UL);
# 1306 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 tempSeqsI[i] = __null;
# 1307 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1308 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( ( length = strlen( (char*)tempSeqsJ[i] ) ) < 1 ) {
# 1309 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: strlen(tempSeqsJ[%d]) = %d for process %d\n",
# 1310 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   i, length, threadNum);
# 1311 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1312 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1313 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1314 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1315 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1316 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 length++;
# 1317 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if ( (C->finalSeqsJ[i] =
# 1318 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
       (unsigned char*)malloc_wrapper(length * sizeof(unsigned char), 10402924002521287100UL, 0, 0))
# 1319 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      == __null ) {
# 1320 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   printf("mergeAlignment: cannot allocate C->finalSeqsJ[%d]\n", i);
# 1321 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1322 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1323 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1324 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   exit (1);
# 1325 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1326 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 C->finalSeqsJ[i] =
# 1327 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   (unsigned char*)strcpy((char*)C->finalSeqsJ[i], (char*)tempSeqsJ[i]);
# 1328 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 free_wrapper(tempSeqsJ[i], 10402924002521287100UL);
# 1329 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 tempSeqsJ[i] = __null;
# 1330 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1331 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1332 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1333 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1334 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1335 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempScores) {
# 1336 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempScores, 10402924002521287098UL);
# 1337 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempScores = __null;
# 1338 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1339 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempStartsI) {
# 1340 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempStartsI, 10402924002521287098UL);
# 1341 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsI = __null;
# 1342 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1343 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempStartsJ) {
# 1344 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempStartsJ, 10402924002521287098UL);
# 1345 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempStartsJ = __null;
# 1346 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1347 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempEndsI) {
# 1348 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempEndsI, 10402924002521287098UL);
# 1349 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsI = __null;
# 1350 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1351 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempEndsJ) {
# 1352 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempEndsJ, 10402924002521287098UL);
# 1353 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempEndsJ = __null;
# 1354 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1355 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1356 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1357 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1358 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1359 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1360 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1361 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1362 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    count = 0;
# 1363 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempSeqsI) {
# 1364 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 0; i <= 2*maxReports; i++) {
# 1365 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (tempSeqsI[i]) {
# 1366 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(tempSeqsI[i], 10402924002521287100UL);
# 1367 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsI[i] = __null;
# 1368 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   count++;
# 1369 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1370 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1371 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempSeqsI, 10402924002521287098UL);
# 1372 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsI = __null;
# 1373 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1374 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (count != 0) {
# 1375 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: freed %d tempSeqsI strings for thread %d\n",
# 1376 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      count, threadNum);
# 1377 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1378 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1379 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    count = 0;
# 1380 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (tempSeqsJ) {
# 1381 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 0; i <= 2*maxReports; i++) {
# 1382 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (tempSeqsJ[i]) {
# 1383 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(tempSeqsJ[i], 10402924002521287100UL);
# 1384 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   tempSeqsJ[i] = __null;
# 1385 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   count++;
# 1386 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1387 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1388 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(tempSeqsJ, 10402924002521287098UL);
# 1389 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      tempSeqsJ = __null;
# 1390 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1391 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (count != 0) {
# 1392 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      printf("mergeAlignment: freed %d tempSeqsJ strings for thread %d\n",
# 1393 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      count, threadNum);
# 1394 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1395 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1396 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1397 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1398 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1399 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1400 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1401 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if ( (threadNum & 1) == 0 ) {
# 1402 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(sequences, 10402924002521286304UL);
# 1403 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(scores, 10402924002521285976UL);
# 1404 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(index, 10402924002521285967UL);
# 1405 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    } else {
# 1406 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1407 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1408 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1409 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1410 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 1425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1425 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->numReports, 10402924002521285946UL);
# 1426 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestScores, 10402924002521285946UL);
# 1427 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestStartsI, 10402924002521285946UL);
# 1428 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestStartsJ, 10402924002521285946UL);
# 1429 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestEndsI, 10402924002521285946UL);
# 1430 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestEndsJ, 10402924002521285946UL);
# 1431 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestSeqsI, 10402924002521285946UL);
# 1432 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P->bestSeqsJ, 10402924002521285946UL);
# 1433 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  free_wrapper(P, 10402924002521285944UL);
# 1434 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1435 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1436 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   CSTR_T * ____chimes_ret_var_0; ____chimes_ret_var_0 = ((C)); return ____chimes_ret_var_0; ;
# 1437 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
}

CSTR_T *freeC_npm(CSTR_T *C) {
# 1442 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1443 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  int i;
# 1444 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
# 1445 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  if (C) {
# 1446 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalScores) {
# 1447 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalScores, 10402924002521287098UL);
# 1448 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalScores = __null;
# 1449 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1450 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalStartsI) {
# 1451 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalStartsI, 10402924002521287098UL);
# 1452 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsI = __null;
# 1453 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1454 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalStartsJ) {
# 1455 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalStartsJ, 10402924002521287098UL);
# 1456 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalStartsJ = __null;
# 1457 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1458 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalEndsI) {
# 1459 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalEndsI, 10402924002521287098UL);
# 1460 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsI = __null;
# 1461 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1462 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalEndsJ) {
# 1463 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalEndsJ, 10402924002521287098UL);
# 1464 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalEndsJ = __null;
# 1465 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1466 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalSeqsI) {
# 1467 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= C->numReports; i++) {
# 1468 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (C->finalSeqsI[i]) {
# 1469 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(C->finalSeqsI[i], 10402924002521287100UL);
# 1470 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   C->finalSeqsI[i] = __null;
# 1471 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1472 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1473 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalSeqsI, 10402924002521287098UL);
# 1474 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsI = __null;
# 1475 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1476 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    if (C->finalSeqsJ) {
# 1477 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      for (i = 1; i <= C->numReports; i++) {
# 1478 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 if (C->finalSeqsJ[i]) {
# 1479 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   free_wrapper(C->finalSeqsJ[i], 10402924002521287100UL);
# 1480 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   C->finalSeqsJ[i] = __null;
# 1481 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
 }
# 1482 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      }
# 1483 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      free_wrapper(C->finalSeqsJ, 10402924002521287098UL);
# 1484 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
      C->finalSeqsJ = __null;
# 1485 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    }
# 1486 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
    free_wrapper(C, 10402924002521287193UL);
# 1487 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
  }
# 1488 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
   CSTR_T * ____chimes_ret_var_1; ____chimes_ret_var_1 = ((__null)); return ____chimes_ret_var_1; ;
# 1489 "/scratch/jmg3/spec/benchspec/OMP2012/372.smithwa/src/mergeAlignment.c"
}





static int module_init() {
    init_module(10402924002521284791UL, 25, 2, 29, 6, 2, 3, 5, 0, 0, 2,
                           &____alias_loc_id_0, (unsigned)14, (unsigned)0, (unsigned)0, (10402924002521284791UL + 6UL), (10402924002521284791UL + 20UL), (10402924002521284791UL + 22UL), (10402924002521284791UL + 23UL), (10402924002521284791UL + 24UL), (10402924002521284791UL + 25UL), (10402924002521284791UL + 28UL), (10402924002521284791UL + 31UL), (10402924002521284791UL + 36UL), (10402924002521284791UL + 1155UL), (10402924002521284791UL + 1185UL), (10402924002521284791UL + 1513UL), (10402924002521284791UL + 2307UL), (10402924002521284791UL + 2309UL),
                           &____alias_loc_id_1, (unsigned)14, (unsigned)0, (unsigned)0, (10402924002521284791UL + 4UL), (10402924002521284791UL + 5UL), (10402924002521284791UL + 8UL), (10402924002521284791UL + 11UL), (10402924002521284791UL + 12UL), (10402924002521284791UL + 13UL), (10402924002521284791UL + 14UL), (10402924002521284791UL + 15UL), (10402924002521284791UL + 16UL), (10402924002521284791UL + 17UL), (10402924002521284791UL + 20UL), (10402924002521284791UL + 30UL), (10402924002521284791UL + 1155UL), (10402924002521284791UL + 2307UL),
                           &____alias_loc_id_2, (unsigned)5, (unsigned)0, (unsigned)1, (10402924002521284791UL + 20UL), (10402924002521284791UL + 21UL), (10402924002521284791UL + 26UL), (10402924002521284791UL + 27UL), (10402924002521284791UL + 2307UL), "qSort_both", (unsigned)3, (10402924002521284791UL + 1176UL), (10402924002521284791UL + 1185UL), (10402924002521284791UL + 2307UL),
                           &____alias_loc_id_3, (unsigned)14, (unsigned)0, (unsigned)1, (10402924002521284791UL + 1UL), (10402924002521284791UL + 2UL), (10402924002521284791UL + 3UL), (10402924002521284791UL + 4UL), (10402924002521284791UL + 10UL), (10402924002521284791UL + 11UL), (10402924002521284791UL + 12UL), (10402924002521284791UL + 13UL), (10402924002521284791UL + 14UL), (10402924002521284791UL + 15UL), (10402924002521284791UL + 16UL), (10402924002521284791UL + 19UL), (10402924002521284791UL + 38UL), (10402924002521284791UL + 1153UL), "gridInfo", (unsigned)4, (10402924002521284791UL + 32UL), (10402924002521284791UL + 33UL), (10402924002521284791UL + 34UL), (10402924002521284791UL + 35UL),
                           &____alias_loc_id_4, (unsigned)16, (unsigned)0, (unsigned)0, (10402924002521284791UL + 4UL), (10402924002521284791UL + 11UL), (10402924002521284791UL + 12UL), (10402924002521284791UL + 13UL), (10402924002521284791UL + 14UL), (10402924002521284791UL + 15UL), (10402924002521284791UL + 16UL), (10402924002521284791UL + 19UL), (10402924002521284791UL + 20UL), (10402924002521284791UL + 28UL), (10402924002521284791UL + 29UL), (10402924002521284791UL + 37UL), (10402924002521284791UL + 39UL), (10402924002521284791UL + 2307UL), (10402924002521284791UL + 2309UL), (10402924002521284791UL + 2445UL),
                           &____alias_loc_id_5, (unsigned)5, (unsigned)0, (unsigned)0, (10402924002521284791UL + 2211UL), (10402924002521284791UL + 2212UL), (10402924002521284791UL + 2213UL), (10402924002521284791UL + 2307UL), (10402924002521284791UL + 2402UL),
                            "mergeAlignment", (void *)(&mergeAlignment_npm), (void *)__null, 4, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_2, &____alias_loc_id_3, 3, (10402924002521284791UL + 2190UL), 0UL, 0UL, (10402924002521284791UL + 2445UL), 152, "malloc", 1, 0UL, (10402924002521284791UL + 1153UL), "printf", 1, (10402924002521284791UL + 2403UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2404UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2404UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2406UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2406UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2408UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2408UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2408UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1155UL), "printf", 1, (10402924002521284791UL + 2408UL), 0UL, "exit", 1, 0UL, 0UL, "gridInfo", 4, (10402924002521284791UL + 34UL), (10402924002521284791UL + 35UL), (10402924002521284791UL + 32UL), (10402924002521284791UL + 33UL), 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2412UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2413UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2413UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2415UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2415UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2415UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 2, (10402924002521284791UL + 2415UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1513UL), "printf", 2, (10402924002521284791UL + 2415UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1185UL), "printf", 2, (10402924002521284791UL + 2420UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 1176UL), "printf", 2, (10402924002521284791UL + 2421UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "getSeconds", 0, 0UL, "strlen", 1, (10402924002521284791UL + 562UL), 0UL, "printf", 4, (10402924002521284791UL + 2422UL), 0UL, 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2309UL), "printf", 3, (10402924002521284791UL + 2422UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "strcpy", 2, (10402924002521284791UL + 2309UL), (10402924002521284791UL + 562UL), (10402924002521284791UL + 2309UL), "strlen", 1, (10402924002521284791UL + 562UL), 0UL, "printf", 4, (10402924002521284791UL + 2422UL), 0UL, 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2309UL), "printf", 3, (10402924002521284791UL + 2422UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "strcpy", 2, (10402924002521284791UL + 2309UL), (10402924002521284791UL + 562UL), (10402924002521284791UL + 2309UL), "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "printf", 4, (10402924002521284791UL + 2426UL), 0UL, 0UL, 0UL, 0UL, "qSort_both", 4, (10402924002521284791UL + 1185UL), (10402924002521284791UL + 1176UL), (10402924002521284791UL + 2307UL), 0UL, 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "getSeconds", 0, 0UL, "printf", 2, (10402924002521284791UL + 2427UL), 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2445UL), "printf", 1, (10402924002521284791UL + 2403UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2406UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2430UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2430UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2404UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2404UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2404UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2307UL), "printf", 1, (10402924002521284791UL + 2404UL), 0UL, "exit", 1, 0UL, 0UL, "strlen", 1, (10402924002521284791UL + 2309UL), 0UL, "printf", 4, (10402924002521284791UL + 2413UL), 0UL, 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2309UL), "printf", 2, (10402924002521284791UL + 2437UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "strcpy", 2, (10402924002521284791UL + 2309UL), (10402924002521284791UL + 2309UL), (10402924002521284791UL + 2309UL), "free", 1, (10402924002521284791UL + 2309UL), 0UL, "strlen", 1, (10402924002521284791UL + 2309UL), 0UL, "printf", 4, (10402924002521284791UL + 2413UL), 0UL, 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (10402924002521284791UL + 2309UL), "printf", 2, (10402924002521284791UL + 2437UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "strcpy", 2, (10402924002521284791UL + 2309UL), (10402924002521284791UL + 2309UL), (10402924002521284791UL + 2309UL), "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "printf", 3, (10402924002521284791UL + 2412UL), 0UL, 0UL, 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "printf", 3, (10402924002521284791UL + 2412UL), 0UL, 0UL, 0UL, "free", 1, (10402924002521284791UL + 1513UL), 0UL, "free", 1, (10402924002521284791UL + 1185UL), 0UL, "free", 1, (10402924002521284791UL + 1176UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1155UL), 0UL, "free", 1, (10402924002521284791UL + 1153UL), 0UL,
                            "freeC", (void *)(&freeC_npm), (void *)__null, 0, 1, (10402924002521284791UL + 2402UL), (10402924002521284791UL + 2445UL), 10, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2309UL), 0UL, "free", 1, (10402924002521284791UL + 2307UL), 0UL, "free", 1, (10402924002521284791UL + 2402UL), 0UL,
                               "getSeconds", (void **)&(____chimes_extern_func_getSeconds),
                               "gridInfo", (void **)&(____chimes_extern_func_gridInfo),
                               "qSort_both", (void **)&(____chimes_extern_func_qSort_both),
                           "mergeAlignment", &(____chimes_does_checkpoint_mergeAlignment_npm),
                           "freeC", &(____chimes_does_checkpoint_freeC_npm),
                           "getSeconds", &(____chimes_does_checkpoint_getSeconds_npm),
                           "gridInfo", &(____chimes_does_checkpoint_gridInfo_npm),
                           "qSort_both", &(____chimes_does_checkpoint_qSort_both_npm),
                             (10402924002521284791UL + 2190UL), (10402924002521284791UL + 478UL),
                             (10402924002521284791UL + 2307UL), (10402924002521284791UL + 2309UL),
                             (10402924002521284791UL + 1UL), (10402924002521284791UL + 2190UL),
                             (10402924002521284791UL + 5UL), (10402924002521284791UL + 1185UL),
                             (10402924002521284791UL + 4UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 2402UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 2211UL), (10402924002521284791UL + 2402UL),
                             (10402924002521284791UL + 2213UL), (10402924002521284791UL + 2445UL),
                             (10402924002521284791UL + 2445UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 1155UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 39UL), (10402924002521284791UL + 2445UL),
                             (10402924002521284791UL + 1153UL), (10402924002521284791UL + 1155UL),
                             (10402924002521284791UL + 38UL), (10402924002521284791UL + 1153UL),
                             (10402924002521284791UL + 480UL), (10402924002521284791UL + 562UL),
                             (10402924002521284791UL + 11UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 13UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 12UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 15UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 14UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 17UL), (10402924002521284791UL + 1513UL),
                             (10402924002521284791UL + 16UL), (10402924002521284791UL + 2307UL),
                             (10402924002521284791UL + 19UL), (10402924002521284791UL + 2445UL),
                             (10402924002521284791UL + 30UL), (10402924002521284791UL + 1176UL),
                             (10402924002521284791UL + 478UL), (10402924002521284791UL + 480UL),
                             (10402924002521284791UL + 1513UL), (10402924002521284791UL + 2309UL),
                     "bstr", 9, "long long int**", (int)__builtin_offsetof (struct bstr, bestScores), "int", (int)__builtin_offsetof (struct bstr, numThreads), "int*", (int)__builtin_offsetof (struct bstr, numReports), "int**", (int)__builtin_offsetof (struct bstr, bestStartsI), "int**", (int)__builtin_offsetof (struct bstr, bestStartsJ), "int**", (int)__builtin_offsetof (struct bstr, bestEndsI), "int**", (int)__builtin_offsetof (struct bstr, bestEndsJ), "unsigned char***", (int)__builtin_offsetof (struct bstr, bestSeqsI), "unsigned char***", (int)__builtin_offsetof (struct bstr, bestSeqsJ),
                     "cstr", 8, "long long int*", (int)__builtin_offsetof (struct cstr, finalScores), "int", (int)__builtin_offsetof (struct cstr, numReports), "int*", (int)__builtin_offsetof (struct cstr, finalStartsI), "int*", (int)__builtin_offsetof (struct cstr, finalStartsJ), "int*", (int)__builtin_offsetof (struct cstr, finalEndsI), "int*", (int)__builtin_offsetof (struct cstr, finalEndsJ), "unsigned char**", (int)__builtin_offsetof (struct cstr, finalSeqsI), "unsigned char**", (int)__builtin_offsetof (struct cstr, finalSeqsJ),
                             "freeC", "_Z5freeCP4cstr", 0,
                             "mergeAlignment", "_Z14mergeAlignmentP4bstrii", 4, "gridInfo", "getSeconds", "qSort_both", "getSeconds",
                        "mergeAlignment|B|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|maxReports|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|minSeparation|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|tempScores|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|scores|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|numReports|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|threadNum|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|tempStartsI|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|tempStartsJ|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|tempEndsI|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|tempEndsJ|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|tempSeqsI|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|tempSeqsJ|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|sequences|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|C|0", 3, "qSort_both", "gridInfo", "getSeconds",
                        "mergeAlignment|i|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|j|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|iter|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|mask|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|consumer|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|producer|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|totalReports|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|flag|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|length|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|index|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|indexB|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|myRow|0", 1, "mergeAlignment",
                        "mergeAlignment|beginTime|0", 2, "qSort_both", "getSeconds",
                        "mergeAlignment|P|0", 3, "qSort_both", "gridInfo", "getSeconds");
    return 0;
}

static const int __libchimes_module_init = module_init();
