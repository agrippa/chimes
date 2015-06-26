# 1 "alignment.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "alignment.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_del_npm = 1;
static int ____chimes_does_checkpoint_add_npm = 1;
static int ____chimes_does_checkpoint_calc_score_npm = 1;
static int ____chimes_does_checkpoint_get_matrix_npm = 1;
static int ____chimes_does_checkpoint_forward_pass_npm = 1;
static int ____chimes_does_checkpoint_reverse_pass_npm = 1;
static int ____chimes_does_checkpoint_diff_npm = 1;
static int ____chimes_does_checkpoint_tracepath_npm = 1;
static int ____chimes_does_checkpoint_pairalign_npm = 1;
static int ____chimes_does_checkpoint_pairalign_seq_npm = 1;
static int ____chimes_does_checkpoint_init_matrix_npm = 1;
static int ____chimes_does_checkpoint_pairalign_init_npm = 1;
static int ____chimes_does_checkpoint_align_init_npm = 1;
static int ____chimes_does_checkpoint_align_npm = 1;
static int ____chimes_does_checkpoint_align_seq_init_npm = 1;
static int ____chimes_does_checkpoint_align_seq_npm = 1;
static int ____chimes_does_checkpoint_align_end_npm = 1;
static int ____chimes_does_checkpoint_align_verify_npm = 1;
static int ____chimes_does_checkpoint_bots_error_npm = 1;
static int ____chimes_does_checkpoint_readseqs_npm = 1;

static int ____must_checkpoint_pairalign_se1_0 = 2;
static int ____must_checkpoint_pairalign_sb1_0 = 2;
static int ____must_checkpoint_pairalign_displ_0 = 2;
static int ____must_checkpoint_pairalign_seq_se1_0 = 2;
static int ____must_checkpoint_pairalign_seq_sb1_0 = 2;
static int ____must_checkpoint_pairalign_seq_displ_0 = 2;
static int ____must_checkpoint_pairalign_init_filename_0 = 2;

static int ____must_manage_align_verify = 2;
static int ____must_manage_pairalign = 2;
static int ____must_manage_pairalign_seq = 2;
static int ____must_manage_calc_score = 2;
static int ____must_manage_align_seq = 2;
static int ____must_manage_align = 2;
static int ____must_manage_align_end = 2;
static int ____must_manage_align_init = 2;
static int ____must_manage_forward_pass = 2;
static int ____must_manage_add = 2;
static int ____must_manage_del = 2;
static int ____must_manage_init_matrix = 2;
static int ____must_manage_reverse_pass = 2;
static int ____must_manage_diff = 2;
static int ____must_manage_get_matrix = 2;
static int ____must_manage_align_seq_init = 2;
static int ____must_manage_pairalign_init = 2;
static int ____must_manage_tracepath = 2;

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
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
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
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 23 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
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
# 24 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
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
# 25 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
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
# 26 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
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



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4




typedef float float_t;
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
# 25 "/usr/include/bits/mathinline.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/mathinline.h" 2 3 4
# 37 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{




  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return __m & 0x8;

}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{




  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return __m & 0x80;

}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4
}
# 27 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
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
# 28 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
# 1 "/usr/include/libgen.h" 1 3 4
# 24 "/usr/include/libgen.h" 3 4
extern "C" {


extern char *dirname (char *__path) throw ();







extern char *__xpg_basename (char *__path) throw ();


}
# 29 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/param.h" 1
# 23 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/param.h"
char *amino_acid_order = "ABCDEFGHIKLMNPQRSTVWXYZ";
char *amino_acid_codes = "ABCDEFGHIKLMNPQRSTUVWXYZ-";

int gon250mt[]={
  24,
   0, 0,
   5, 0, 115,
  -3, 0, -32, 47,
   0, 0, -30, 27, 36,
 -23, 0, -8, -45, -39, 70,
   5, 0, -20, 1, -8, -52, 66,
  -8, 0, -13, 4, 4, -1, -14, 60,
  -8, 0, -11, -38, -27, 10, -45, -22, 40,
  -4, 0, -28, 5, 12, -33, -11, 6, -21, 32,
 -12, 0, -15, -40, -28, 20, -44, -19, 28, -21, 40,
  -7, 0, -9, -30, -20, 16, -35, -13, 25, -14, 28, 43,
  -3, 0, -18, 22, 9, -31, 4, 12, -28, 8, -30, -22, 38,
   3, 0, -31, -7, -5, -38, -16, -11, -26, -6, -23, -24, -9, 76,
  -2, 0, -24, 9, 17, -26, -10, 12, -19, 15, -16, -10, 7, -2, 27,
  -6, 0, -22, -3, 4, -32, -10, 6, -24, 27, -22, -17, 3, -9, 15, 47,
  11, 0, 1, 5, 2, -28, 4, -2, -18, 1, -21, -14, 9, 4, 2, -2, 22,
   6, 0, -5, 0, -1, -22, -11, -3, -6, 1, -13, -6, 5, 1, 0, -2, 15, 25,
   1, 0, 0, -29, -19, 1, -33, -20, 31, -17, 18, 16, -22, -18, -15, -20, -10, 0, 34,
 -36, 0, -10, -52, -43, 36, -40, -8, -18, -35, -7, -10, -36, -50, -27, -16, -33, -35, -26, 142,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 -22, 0, -5, -28, -27, 51, -40, 22, -7, -21, 0, -2, -14, -31, -17, -18, -19, -19, -11, 41, 0, 78,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
# 30 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.h" 1
# 31 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
# 1 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/common/bots.h" 1
# 27 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/common/bots.h"
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
# 32 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c" 2
# 32 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 33 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int readseqs(int first_seq, char *filename);
# 34 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 35 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int ktup, window, signif;
# 36 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int prot_ktup, prot_window, prot_signif;
# 37 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 38 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int gap_pos1, gap_pos2, mat_avscore;
# 39 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int nseqs, max_aa;
# 40 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 41 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 42 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int *seqlen_array, def_aa_xref[32 +1];
# 43 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 44 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int *bench_output, *seq_output;
# 45 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 46 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
double gap_open, gap_extend;
# 47 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
double prot_gap_open, prot_gap_extend;
# 48 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
double pw_go_penalty, pw_ge_penalty;
# 49 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
double prot_pw_go_penalty, prot_pw_ge_penalty;
# 50 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 51 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
char **args, **names, **seq_array;
# 52 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 53 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int matrix[32][32];
# 63 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 63 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void del_npm(int k, int *print_ptr, int *last_print, int *displ);
void del_quick(int k, int *print_ptr, int *last_print, int *displ); void del(int k, int *print_ptr, int *last_print, int *displ);
void del_resumable(int k, int *print_ptr, int *last_print, int *displ)
# 64 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&del), "del", &____must_manage_del, 4, 0, (size_t)(0UL), (size_t)(2235191825397909493UL), (size_t)(2235191825397909494UL), (size_t)(2235191825397909495UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (*last_print<0) {*last_print = displ[(*print_ptr)-1] -= k; } else {*last_print = displ[(*print_ptr)++] = -k; } ;
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "del", &____must_manage_del, ____alias_loc_id_2, ____chimes_did_disable0); }
# 68 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 69 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 70 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 71 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 72 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void add_npm(int v, int *print_ptr, int *last_print, int *displ);
void add_quick(int v, int *print_ptr, int *last_print, int *displ); void add(int v, int *print_ptr, int *last_print, int *displ);
void add_resumable(int v, int *print_ptr, int *last_print, int *displ)
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&add), "add", &____must_manage_add, 4, 0, (size_t)(0UL), (size_t)(2235191825397909547UL), (size_t)(2235191825397909548UL), (size_t)(2235191825397909549UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (*last_print < 0) {
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      displ[(*print_ptr)-1] = v;
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      displ[(*print_ptr)++] = *last_print;
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   } else {
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      *last_print = displ[(*print_ptr)++] = v;
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "add", &____must_manage_add, ____alias_loc_id_3, ____chimes_did_disable1); }
# 81 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 82 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 83 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 84 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 85 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int calc_score_npm(int iat, int jat, int v1, int v2, int seq1, int seq2);
int calc_score_quick(int iat, int jat, int v1, int v2, int seq1, int seq2); int calc_score(int iat, int jat, int v1, int v2, int seq1, int seq2);
int calc_score_resumable(int iat, int jat, int v1, int v2, int seq1, int seq2)
# 86 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&calc_score), "calc_score", &____must_manage_calc_score, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 87 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int ipos; int jpos; ;
# 88 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ipos = v1 + iat;
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   jpos = v2 + jat;
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   i = seq_array[seq1][ipos];
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   j = seq_array[seq2][jpos];
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "calc_score", &____must_manage_calc_score, ____alias_loc_id_4, ____chimes_did_disable2); return (matrix[i][j]);
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
# 96 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 97 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 98 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 99 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 100 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int get_matrix_npm(int *matptr, int *xref, int scale);
int get_matrix_quick(int *matptr, int *xref, int scale); int get_matrix(int *matptr, int *xref, int scale);
int get_matrix_resumable(int *matptr, int *xref, int scale)
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&get_matrix), "get_matrix", &____must_manage_get_matrix, 3, 0, (size_t)(2235191825397910012UL), (size_t)(2235191825397910013UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int gg_score; gg_score = (0) ;
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int gr_score; gr_score = (0) ;
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int k; int ti; int tj; int ix; ;
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int av1; int av2; int av3; int min; int max; int maxres; ;
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) { for (j = 0; j <= max_aa; j++) { matrix[i][j] = 0; }; };
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ix = 0;
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = 0;
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) {
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ti = xref[i];
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 0; j <= i; j++) {
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         tj = xref[j];
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((ti != -1) && (tj != -1)) {
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            k = matptr[ix];
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (ti == tj) {
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[ti][ti] = k * scale;
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               maxres++;
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            } else {
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[ti][tj] = k * scale;
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[tj][ti] = k * scale;
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            ix++;
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres--;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av1 = av2 = av3 = 0;
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 0; j <= i; j++) {
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         av1 += matrix[i][j];
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (i == j) {av2 += matrix[i][j]; } else {av3 += matrix[i][j]; } ;
# 139 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 140 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 141 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 142 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av1 /= (maxres*maxres)/2;
# 143 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av2 /= maxres;
# 144 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av3 /= ((double)(maxres*maxres-maxres))/2;
# 145 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_avscore = -av3;
# 146 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 147 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   min = max = matrix[0][0];
# 148 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 149 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) { for (j = 1; j <= i; j++) {
# 151 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (matrix[i][j] < min) {min = matrix[i][j]; };
# 152 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (matrix[i][j] > max) {max = matrix[i][j]; };
# 153 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }; }
# 154 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 155 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i < gap_pos1; i++) {
# 156 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[i][gap_pos1] = gr_score;
# 157 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[gap_pos1][i] = gr_score;
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[i][gap_pos2] = gr_score;
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[gap_pos2][i] = gr_score;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos1][gap_pos1] = gg_score;
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos2][gap_pos2] = gg_score;
# 164 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos2][gap_pos1] = gg_score;
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos1][gap_pos2] = gg_score;
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres += 2;
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "get_matrix", &____must_manage_get_matrix, ____alias_loc_id_5, ____chimes_did_disable3); return(maxres);
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
# 171 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 172 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 173 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 174 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 175 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void forward_pass_npm(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh);
void forward_pass_quick(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh); void forward_pass(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh);
void forward_pass_resumable(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh)
# 176 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&forward_pass), "forward_pass", &____must_manage_forward_pass, 9, 0, (size_t)(2235191825397910229UL), (size_t)(2235191825397910230UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397910233UL), (size_t)(2235191825397910234UL), (size_t)(2235191825397910235UL), (size_t)(0UL), (size_t)(0UL)) ; int DD[5000];
int HH[5000];
 if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 177 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int f; int p; int t; int hh; ;
# 178 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 179 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ;
# 180 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 181 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *maxscore = 0;
# 182 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *se1 = *se2 = 0;
# 183 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 184 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= m; i++) {HH[i] = 0; DD[i] = -g;}
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 186 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= n; i++) {
# 187 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = p = 0;
# 188 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = -g;
# 189 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 190 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= m; j++) {
# 191 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         f -= gh;
# 192 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = hh - g - gh;
# 193 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 194 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f < t) {f = t; };
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] -= gh;
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = HH[j] - g - gh;
# 198 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 199 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (DD[j] < t) {DD[j] = t; };
# 200 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 201 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = p + matrix[(int)ia[i]][(int)ib[j]];
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < f) {hh = f; };
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < DD[j]) {hh = DD[j]; };
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < 0) {hh = 0; };
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         p = HH[j];
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > *maxscore) {*maxscore = hh; *se1 = i; *se2 = j;}
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "forward_pass", &____must_manage_forward_pass, ____alias_loc_id_6, ____chimes_did_disable4); }
# 213 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 214 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 215 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 216 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 217 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void reverse_pass_npm(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh);
void reverse_pass_quick(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh); void reverse_pass(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh);
void reverse_pass_resumable(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh)
# 218 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&reverse_pass), "reverse_pass", &____must_manage_reverse_pass, 9, 0, (size_t)(2235191825397910459UL), (size_t)(2235191825397910460UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397910463UL), (size_t)(2235191825397910464UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int DD[5000];
int HH[5000];
 if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 219 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int f; int p; int t; int hh; int cost; ;
# 220 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 221 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ;
# 222 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 223 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   cost = 0;
# 224 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *sb1 = *sb2 = 1;
# 225 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 226 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = se2; i > 0; i--){ HH[i] = -1; DD[i] = -1;}
# 227 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = se1; i > 0; i--) {
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = f = -1;
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (i == se1) {p = 0; } else {p = -1; } ;
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = se2; j > 0; j--) {
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         f -= gh;
# 235 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = hh - g - gh;
# 236 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f < t) {f = t; };
# 237 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 238 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] -= gh;
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = HH[j] - g - gh;
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (DD[j] < t) {DD[j] = t; };
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = p + matrix[(int)ia[i]][(int)ib[j]];
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < f) {hh = f; };
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < DD[j]) {hh = DD[j]; };
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         p = HH[j];
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > cost) {
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            cost = hh; *sb1 = i; *sb2 = j;
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (cost >= maxscore) {break; };
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 254 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 255 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (cost >= maxscore) {break; };
# 256 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 257 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "reverse_pass", &____must_manage_reverse_pass, ____alias_loc_id_7, ____chimes_did_disable5); }
# 258 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 259 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 260 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 261 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 262 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int diff_npm (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh);
int diff_quick (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh); int diff (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh);
int diff_resumable (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh)
# 263 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&diff), "diff", &____must_manage_diff, 13, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397911243UL), (size_t)(2235191825397911244UL), (size_t)(2235191825397911245UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int SS[5000];
int RR[5000];
int DD[5000];
int HH[5000];
 if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int f; int e; int s; int t; int hh; ;
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int midi; int midj; int midh; int type; ;
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ;
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 271 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (N <= 0) {if (M > 0) {({ calling_npm("del", 0); del_npm(M, print_ptr, last_print, displ); }); }; rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return( - (int) ((M) <= 0 ? 0 : tb + gh * (M))); }
# 272 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 273 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (M <= 1) {
# 274 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 275 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (M <= 0) {({ calling_npm("add", 0); add_npm(N, print_ptr, last_print, displ); }); rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return( - (int)((N) <= 0 ? 0 : tb + gh * (N)));}
# 276 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 277 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      midh = -(tb+gh) - ((N) <= 0 ? 0 : te + gh * (N));
# 278 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = -(te+gh) - ((N) <= 0 ? 0 : tb + gh * (N));
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 280 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh > midh) {midh = hh; };
# 281 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      midj = 0;
# 282 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 283 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= N; j++) {
# 284 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = ({ calling_npm("calc_score", 0); calc_score_npm(1, j, A, B, seq1, seq2); }) - ((N-j) <= 0 ? 0 : te + gh * (N-j)) - ((j-1) <= 0 ? 0 : tb + gh * (j-1));
# 285 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > midh) {midh = hh; midj = j;}
# 286 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 287 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 288 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (midj == 0) {
# 289 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ({ calling_npm("del", 0); del_npm(1, print_ptr, last_print, displ); });
# 290 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ({ calling_npm("add", 0); add_npm(N, print_ptr, last_print, displ); });
# 291 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      } else {
# 292 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (midj > 1) {({ calling_npm("add", 0); add_npm(midj-1, print_ptr, last_print, displ); }); };
# 293 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         displ[(*print_ptr)++] = *last_print = 0;
# 294 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (midj < N) {({ calling_npm("add", 0); add_npm(N-midj, print_ptr, last_print, displ); }); };
# 295 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 296 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 297 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return midh;
# 298 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 299 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 300 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midi = M / 2;
# 301 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   HH[0] = 0.0;
# 302 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -tb;
# 303 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 304 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = 1; j <= N; j++) {
# 305 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      HH[j] = t = t - gh;
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      DD[j] = t - g;
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -tb;
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= midi; i++) {
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      s = HH[0];
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      HH[0] = hh = t = t - gh;
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = t - g;
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= N; j++) {
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = hh - g - gh) > (f = f - gh)) {f = hh; };
# 317 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = HH[j] - g - gh) > (e = DD[j]- gh)) {e = hh; };
# 318 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = s + ({ calling_npm("calc_score", 0); calc_score_npm(i, j, A, B, seq1, seq2); });
# 319 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f > hh) {hh = f; };
# 320 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (e > hh) {hh = e; };
# 321 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 322 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         s = HH[j];
# 323 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 324 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] = e;
# 325 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 326 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 327 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 328 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   DD[0] = HH[0];
# 329 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   RR[N] = 0;
# 330 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -te;
# 331 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 332 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = N-1; j >= 0; j--) {RR[j] = t = t - gh; SS[j] = t - g;}
# 333 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 334 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -te;
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 336 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = M - 1; i >= midi; i--) {
# 337 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      s = RR[N];
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      RR[N] = hh = t = t-gh;
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = t - g;
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = N - 1; j >= 0; j--) {
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = hh - g - gh) > (f = f - gh)) {f = hh; };
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = RR[j] - g - gh) > (e = SS[j] - gh)) {e = hh; };
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = s + ({ calling_npm("calc_score", 0); calc_score_npm(i+1, j+1, A, B, seq1, seq2); });
# 344 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f > hh) {hh = f; };
# 345 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (e > hh) {hh = e; };
# 346 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 347 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         s = RR[j];
# 348 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         RR[j] = hh;
# 349 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         SS[j] = e;
# 350 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 351 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 352 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 353 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   SS[N] = RR[N];
# 354 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 355 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midh = HH[0] + RR[0];
# 356 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midj = 0;
# 357 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   type = 1;
# 358 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = 0; j <= N; j++) {
# 360 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = HH[j] + RR[j];
# 361 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh >= midh) {if (hh > midh || (HH[j] != DD[j] && RR[j] == SS[j]))
# 363 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         {midh = hh; midj = j;}; }
# 364 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 365 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 366 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = N; j >= 0; j--) {
# 367 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = DD[j] + SS[j] + g;
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh > midh) {midh = hh;midj = j;type = 2;}
# 369 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 370 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 371 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 372 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (type == 1) {
# 373 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A, B, midi, midj, tb, g, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 374 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A+midi, B+midj, M-midi, N-midj, g, te, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 375 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   } else {
# 376 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A, B, midi-1, midj, tb, 0.0, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 377 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("del", 0); del_npm(2, print_ptr, last_print, displ); });
# 378 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A+midi+1, B+midj, M-midi-1, N-midj, 0.0, te, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 379 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 380 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 381 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return midh;
# 382 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
# 383 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 384 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 385 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 386 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 387 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
double tracepath_npm(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2);
double tracepath_quick(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2); double tracepath(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2);
double tracepath_resumable(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2)
# 388 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&tracepath), "tracepath", &____must_manage_tracepath, 7, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397911396UL), (size_t)(2235191825397911397UL), (size_t)(2235191825397911398UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 389 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int k; ;
# 390 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int i1; i1 = (tsb1) ;
# 391 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int i2; i2 = (tsb2) ;
# 392 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int pos; pos = (0) ;
# 393 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int count; count = (0) ;
# 394 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 395 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= *print_ptr - 1; ++i) {
# 396 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (displ[i]==0) {{
# 397 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
          char c1; c1 = (seq_array[seq1][i1]) ;
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
          char c2; c2 = (seq_array[seq2][i2]) ;
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((c1!=gap_pos1) && (c1 != gap_pos2) && (c1 == c2)) {count++; };
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ++i1; ++i2; ++pos;
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }; } else if ((k = displ[i]) > 0) {
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         i2 += k;
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         pos += k;
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      } else {
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         i1 -= k;
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         pos -= k;
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 413 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "tracepath", &____must_manage_tracepath, ____alias_loc_id_9, ____chimes_did_disable7); return (100.0 * (double) count);
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
# 415 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 416 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 417 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int pairalign_npm(int istart, int iend, int jstart, int jend);
int pairalign_quick(int istart, int iend, int jstart, int jend); int pairalign(int istart, int iend, int jstart, int jend);
int pairalign_resumable(int istart, int iend, int jstart, int jend)
# 418 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&pairalign), "pairalign", &____must_manage_pairalign, 4, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int displ[10001];
int sb1;
int se1;
 if (____must_checkpoint_pairalign_displ_0 || ____must_checkpoint_pairalign_sb1_0 || ____must_checkpoint_pairalign_se1_0) { register_stack_vars(3, "pairalign|displ|0", &____must_checkpoint_pairalign_displ_0, "[10001 x i32]", (void *)(displ), (size_t)40004, 0, 0, 0, "pairalign|sb1|0", &____must_checkpoint_pairalign_sb1_0, "i32", (void *)(&sb1), (size_t)4, 0, 0, 0, "pairalign|se1|0", &____must_checkpoint_pairalign_se1_0, "i32", (void *)(&se1), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 419 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int n; int m; int si; int sj; ;
# 420 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int len1; int len2; int maxres; ;
# 421 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   double gg; double mm_score; ;
# 422 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int *mat_xref; int *matptr; ;
# 423 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 424 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matptr = gon250mt;
# 425 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_xref = def_aa_xref;
# 426 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = ({ calling_npm("get_matrix", 0); get_matrix_npm(matptr, mat_xref, 10); });
# 427 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (maxres == 0) {rm_stack(false, 0UL, "pairalign", &____must_manage_pairalign, ____alias_loc_id_10, ____chimes_did_disable8); return(-1); };
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Start aligning "); } };
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp parallel
# 431 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   {
# 432 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp for schedule(dynamic) private(i,n,si,sj,len1,m)
# 433 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (si = 0; si < nseqs; si++) {
# 434 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((n = seqlen_array[si+1]) != 0){
# 435 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            for (i = 1, len1 = 0; i <= n; i++) {
# 436 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                char c; c = (seq_array[si + 1][i]) ;
# 437 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if ((c != gap_pos1) && (c != gap_pos2)) {len1++; };
# 438 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 439 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 440 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            for (sj = si + 1; sj < nseqs; sj++)
# 441 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            {
# 442 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if ((m = seqlen_array[sj+1]) != 0)
# 443 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               {
# 444 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp task private(i,gg,len2,mm_score) firstprivate(m,n,si,sj,len1) shared(nseqs, bench_output,seqlen_array,seq_array,gap_pos1,gap_pos2,pw_ge_penalty,pw_go_penalty,mat_avscore)
# 445 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 446 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 447 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  {
# 448 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                   int se2; int sb2; int maxscore; int seq1; int seq2; int g; int gh; ;
# 449 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                   ;
# 450 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  int print_ptr; int last_print; ;
# 451 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 452 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  for (i = 1, len2 = 0; i <= m; i++) {
# 453 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                      char c; c = (seq_array[sj + 1][i]) ;
# 454 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                     if ((c != gap_pos1) && (c != gap_pos2)) {len2++; };
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  }
# 456 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 457 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  gh = 10 * pw_ge_penalty;
# 458 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  gg = pw_go_penalty + log((double) ((n)<(m)?(n):(m)));
# 459 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  g = (mat_avscore <= 0) ? 20 * gg : 2 * mat_avscore * gg;
# 460 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 461 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  seq1 = si + 1;
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  seq2 = sj + 1;
# 463 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 464 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  ({ calling_npm("forward_pass", 0); forward_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh); });
# 465 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  ({ calling_npm("reverse_pass", 0); reverse_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh); });
# 466 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 467 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  print_ptr = 1;
# 468 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  last_print = 0;
# 469 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 470 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  ({ calling_npm("diff", 0); diff_npm(sb1-1, sb2-1, se1-sb1+1, se2-sb2+1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh); });
# 471 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  mm_score = ({ calling_npm("tracepath", 0); tracepath_npm(sb1, sb2, &print_ptr, &last_print, displ, seq1, seq2); });
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 473 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  if (len1 == 0 || len2 == 0) {mm_score = 0.0; } else {mm_score /= (double) ((len1)<(len2)?(len1):(len2)); } ;
# 475 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 476 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  bench_output[si*nseqs+sj] = mm_score;
# 477 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  }
# 478 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               }
# 479 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 480 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 481 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 482 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 483 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, " completed!\n"); } };
# 484 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "pairalign", &____must_manage_pairalign, ____alias_loc_id_10, ____chimes_did_disable8); return 0;
# 485 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
# 486 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 487 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int pairalign_seq_npm(int istart, int iend, int jstart, int jend);
int pairalign_seq_quick(int istart, int iend, int jstart, int jend); int pairalign_seq(int istart, int iend, int jstart, int jend);
int pairalign_seq_resumable(int istart, int iend, int jstart, int jend)
# 488 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&pairalign_seq), "pairalign_seq", &____must_manage_pairalign_seq, 4, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int displ[10001];
int sb1;
int se1;
 if (____must_checkpoint_pairalign_seq_displ_0 || ____must_checkpoint_pairalign_seq_sb1_0 || ____must_checkpoint_pairalign_seq_se1_0) { register_stack_vars(3, "pairalign_seq|displ|0", &____must_checkpoint_pairalign_seq_displ_0, "[10001 x i32]", (void *)(displ), (size_t)40004, 0, 0, 0, "pairalign_seq|sb1|0", &____must_checkpoint_pairalign_seq_sb1_0, "i32", (void *)(&sb1), (size_t)4, 0, 0, 0, "pairalign_seq|se1|0", &____must_checkpoint_pairalign_seq_se1_0, "i32", (void *)(&se1), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 489 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int n; int m; int si; int sj; ;
# 490 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int len1; int len2; int maxres; ;
# 491 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   double gg; double mm_score; ;
# 492 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int *mat_xref; int *matptr; ;
# 493 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 494 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matptr = gon250mt;
# 495 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_xref = def_aa_xref;
# 496 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = ({ calling_npm("get_matrix", 0); get_matrix_npm(matptr, mat_xref, 10); });
# 497 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (maxres == 0) {rm_stack(false, 0UL, "pairalign_seq", &____must_manage_pairalign_seq, ____alias_loc_id_11, ____chimes_did_disable9); return(-1); };
# 498 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 499 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (si = 0; si < nseqs; si++) {
# 500 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if ((n = seqlen_array[si+1]) != 0){
# 501 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         for (i = 1, len1 = 0; i <= n; i++) {
# 502 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
             char c; c = (seq_array[si + 1][i]) ;
# 503 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if ((c != gap_pos1) && (c != gap_pos2)) {len1++; };
# 504 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 505 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 506 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         for (sj = si + 1; sj < nseqs; sj++) {
# 507 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if ((m = seqlen_array[sj+1]) != 0){
# 508 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                int se2; int sb2; int maxscore; int seq1; int seq2; int g; int gh; ;
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                ;
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               int print_ptr; int last_print; ;
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               for (i = 1, len2 = 0; i <= m; i++) {
# 513 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                   char c; c = (seq_array[sj + 1][i]) ;
# 514 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  if ((c != gap_pos1) && (c != gap_pos2)) {len2++; };
# 515 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               }
# 516 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 517 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               gh = 10 * pw_ge_penalty;
# 518 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               gg = pw_go_penalty + log((double) ((n)<(m)?(n):(m)));
# 519 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               g = (mat_avscore <= 0) ? 20 * gg : 2 * mat_avscore * gg;
# 520 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 521 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq1 = si + 1;
# 522 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq2 = sj + 1;
# 523 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 524 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               ({ calling_npm("forward_pass", 0); forward_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh); });
# 525 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               ({ calling_npm("reverse_pass", 0); reverse_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh); });
# 526 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 527 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               print_ptr = 1;
# 528 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               last_print = 0;
# 529 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 530 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               ({ calling_npm("diff", 0); diff_npm(sb1-1, sb2-1, se1-sb1+1, se2-sb2+1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh); });
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               mm_score = ({ calling_npm("tracepath", 0); tracepath_npm(sb1, sb2, &print_ptr, &last_print, displ, seq1, seq2); });
# 532 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 533 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if (len1 == 0 || len2 == 0) {mm_score = 0.0; } else {mm_score /= (double) ((len1)<(len2)?(len1):(len2)); } ;
# 535 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 536 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq_output[si*nseqs+sj] = mm_score;
# 537 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 538 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 539 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 540 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "pairalign_seq", &____must_manage_pairalign_seq, ____alias_loc_id_11, ____chimes_did_disable9); return 0;
# 542 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
# 543 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 544 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 545 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 546 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 547 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 548 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void init_matrix_npm(void);
void init_matrix_quick(void); void init_matrix(void);
void init_matrix_resumable(void)
# 549 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&init_matrix), "init_matrix", &____must_manage_init_matrix, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 550 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 551 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   char c1; char c2; ;
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_pos1 = 32 - 2;
# 554 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_pos2 = 32 - 1;
# 555 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   max_aa = strlen(amino_acid_codes) - 2;
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 557 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i < 32; i++) { def_aa_xref[i] = -1; };
# 558 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 559 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; (c1 = amino_acid_order[i]); i++) { for (j = 0; (c2 = amino_acid_codes[j]); j++) { if (c1 == c2) {def_aa_xref[i] = j; break;}; }; }
# 562 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "init_matrix", &____must_manage_init_matrix, ____alias_loc_id_12, ____chimes_did_disable10); }
# 563 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 564 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void pairalign_init_npm (char *filename);static void (*____chimes_extern_func_bots_error)(int, char *) = bots_error;static int (*____chimes_extern_func_readseqs)(int, char *) = readseqs;
void pairalign_init_quick (char *filename); void pairalign_init (char *filename);
void pairalign_init_resumable (char *filename)
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&pairalign_init), "pairalign_init", &____must_manage_pairalign_init, 1, 1, (size_t)(2235191825397912206UL), "pairalign_init|filename|0", &____must_checkpoint_pairalign_init_filename_0, "i8*", (void *)(&filename), (size_t)8, 1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; ;
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (!filename || !filename[0]) {
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
       call_lbl_1: ({ char * ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = ("Please specify an input file with the -f option\n"); } calling((void*)bots_error, 1, ____alias_loc_id_1, 0UL, 2, (size_t)(0UL), (size_t)(2235191825397912444UL)); (bots_error)(0, ____chimes_arg1); }) ;
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ({ calling_npm("init_matrix", 0); init_matrix_npm(); });
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    call_lbl_2: nseqs = ({ calling((void*)readseqs, 2, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(2235191825397912206UL)); (readseqs)(1, filename); }) ;
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Multiple Pairwise Alignment (%d sequences)\n" ,nseqs); } };
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= nseqs; i++) { ;; }
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ktup = 1;
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   window = 5;
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   signif = 5;
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_open = 10.0;
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_extend = 0.2;
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pw_go_penalty = 10.0;
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pw_ge_penalty = 0.1;
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "pairalign_init", &____must_manage_pairalign_init, ____alias_loc_id_13, ____chimes_did_disable11); }
# 590 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 591 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void align_init_npm ();
void align_init_quick (); void align_init ();
void align_init_resumable ()
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable12 = new_stack((void *)(&align_init), "align_init", &____must_manage_align_init, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 593 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 594 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   bench_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 595 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 596 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { bench_output[i*nseqs+j] = 0; }; };
# 599 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_init", &____must_manage_align_init, ____alias_loc_id_14, ____chimes_did_disable12); }
# 600 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 601 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void align_npm();
void align_quick(); void align();
void align_resumable()
# 602 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable13 = new_stack((void *)(&align), "align", &____must_manage_align, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 603 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ({ calling_npm("pairalign", 0); pairalign_npm(0, nseqs, 0, nseqs); });
# 604 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align", &____must_manage_align, 0, ____chimes_did_disable13); }
# 605 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 606 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void align_seq_init_npm ();
void align_seq_init_quick (); void align_seq_init ();
void align_seq_init_resumable ()
# 607 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable14 = new_stack((void *)(&align_seq_init), "align_seq_init", &____must_manage_align_seq_init, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 608 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 609 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   seq_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 610 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   bench_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { seq_output[i*nseqs+j] = 0; }; };
# 615 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_seq_init", &____must_manage_align_seq_init, ____alias_loc_id_15, ____chimes_did_disable14); }
# 616 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 617 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void align_seq_npm();
void align_seq_quick(); void align_seq();
void align_seq_resumable()
# 618 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable15 = new_stack((void *)(&align_seq), "align_seq", &____must_manage_align_seq, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 619 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ({ calling_npm("pairalign_seq", 0); pairalign_seq_npm(0, nseqs, 0, nseqs); });
# 620 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_seq", &____must_manage_align_seq, 0, ____chimes_did_disable15); }
# 621 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 622 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 623 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
void align_end_npm ();
void align_end_quick (); void align_end ();
void align_end_resumable ()
# 624 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable16 = new_stack((void *)(&align_end), "align_end", &____must_manage_align_end, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 625 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 626 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { if (bench_output[i*nseqs+j] != 0) {;; }; }; }
# 631 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_end", &____must_manage_align_end, ____alias_loc_id_16, ____chimes_did_disable16); }
# 654 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 654 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
int align_verify_npm ();
int align_verify_quick (); int align_verify ();
int align_verify_resumable ()
# 655 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable17 = new_stack((void *)(&align_verify), "align_verify", &____must_manage_align_verify, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 656 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 657 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int result; result = (1) ;
# 658 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i+=200) { for(j = 0; j<nseqs; j++)
# 660 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         {
# 661 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Output: Optimized prot. (%3d:%3d)=%5d \n" , i+1, j+1, (int) bench_output[i*nseqs+j]); } }
# 662 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                                                       ;
# 663 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }; }
# 664 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "align_verify", &____must_manage_align_verify, ____alias_loc_id_17, ____chimes_did_disable17); return result;
# 665 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}
void del_quick(int k, int *print_ptr, int *last_print, int *displ)
# 64 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&del), "del", &____must_manage_del, 4, 0, (size_t)(0UL), (size_t)(2235191825397909493UL), (size_t)(2235191825397909494UL), (size_t)(2235191825397909495UL)) ; ; ;
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (*last_print<0) {*last_print = displ[(*print_ptr)-1] -= k; } else {*last_print = displ[(*print_ptr)++] = -k; } ;
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "del", &____must_manage_del, ____alias_loc_id_2, ____chimes_did_disable0); }

void del(int k, int *print_ptr, int *last_print, int *displ) { (____chimes_replaying ? del_resumable(k, print_ptr, last_print, displ) : del_quick(k, print_ptr, last_print, displ)); }

void add_quick(int v, int *print_ptr, int *last_print, int *displ)
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&add), "add", &____must_manage_add, 4, 0, (size_t)(0UL), (size_t)(2235191825397909547UL), (size_t)(2235191825397909548UL), (size_t)(2235191825397909549UL)) ; ; ;
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (*last_print < 0) {
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      displ[(*print_ptr)-1] = v;
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      displ[(*print_ptr)++] = *last_print;
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   } else {
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      *last_print = displ[(*print_ptr)++] = v;
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "add", &____must_manage_add, ____alias_loc_id_3, ____chimes_did_disable1); }

void add(int v, int *print_ptr, int *last_print, int *displ) { (____chimes_replaying ? add_resumable(v, print_ptr, last_print, displ) : add_quick(v, print_ptr, last_print, displ)); }

int calc_score_quick(int iat, int jat, int v1, int v2, int seq1, int seq2)
# 86 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&calc_score), "calc_score", &____must_manage_calc_score, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 87 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int ipos; int jpos; ;
# 88 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ipos = v1 + iat;
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   jpos = v2 + jat;
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   i = seq_array[seq1][ipos];
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   j = seq_array[seq2][jpos];
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "calc_score", &____must_manage_calc_score, ____alias_loc_id_4, ____chimes_did_disable2); return (matrix[i][j]);
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int calc_score(int iat, int jat, int v1, int v2, int seq1, int seq2) { return (____chimes_replaying ? calc_score_resumable(iat, jat, v1, v2, seq1, seq2) : calc_score_quick(iat, jat, v1, v2, seq1, seq2)); }

int get_matrix_quick(int *matptr, int *xref, int scale)
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&get_matrix), "get_matrix", &____must_manage_get_matrix, 3, 0, (size_t)(2235191825397910012UL), (size_t)(2235191825397910013UL), (size_t)(0UL)) ; ; ;
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int gg_score; gg_score = (0) ;
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int gr_score; gr_score = (0) ;
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int k; int ti; int tj; int ix; ;
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int av1; int av2; int av3; int min; int max; int maxres; ;
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) { for (j = 0; j <= max_aa; j++) { matrix[i][j] = 0; }; };
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ix = 0;
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = 0;
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) {
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ti = xref[i];
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 0; j <= i; j++) {
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         tj = xref[j];
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((ti != -1) && (tj != -1)) {
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            k = matptr[ix];
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (ti == tj) {
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[ti][ti] = k * scale;
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               maxres++;
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            } else {
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[ti][tj] = k * scale;
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[tj][ti] = k * scale;
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            ix++;
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres--;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av1 = av2 = av3 = 0;
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 0; j <= i; j++) {
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         av1 += matrix[i][j];
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (i == j) {av2 += matrix[i][j]; } else {av3 += matrix[i][j]; } ;
# 139 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 140 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 141 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 142 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av1 /= (maxres*maxres)/2;
# 143 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av2 /= maxres;
# 144 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av3 /= ((double)(maxres*maxres-maxres))/2;
# 145 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_avscore = -av3;
# 146 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 147 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   min = max = matrix[0][0];
# 148 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 149 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) { for (j = 1; j <= i; j++) {
# 151 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (matrix[i][j] < min) {min = matrix[i][j]; };
# 152 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (matrix[i][j] > max) {max = matrix[i][j]; };
# 153 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }; }
# 154 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 155 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i < gap_pos1; i++) {
# 156 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[i][gap_pos1] = gr_score;
# 157 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[gap_pos1][i] = gr_score;
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[i][gap_pos2] = gr_score;
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[gap_pos2][i] = gr_score;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos1][gap_pos1] = gg_score;
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos2][gap_pos2] = gg_score;
# 164 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos2][gap_pos1] = gg_score;
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos1][gap_pos2] = gg_score;
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres += 2;
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "get_matrix", &____must_manage_get_matrix, ____alias_loc_id_5, ____chimes_did_disable3); return(maxres);
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int get_matrix(int *matptr, int *xref, int scale) { return (____chimes_replaying ? get_matrix_resumable(matptr, xref, scale) : get_matrix_quick(matptr, xref, scale)); }

void forward_pass_quick(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh)
# 176 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&forward_pass), "forward_pass", &____must_manage_forward_pass, 9, 0, (size_t)(2235191825397910229UL), (size_t)(2235191825397910230UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397910233UL), (size_t)(2235191825397910234UL), (size_t)(2235191825397910235UL), (size_t)(0UL), (size_t)(0UL)) ; int DD[5000];
int HH[5000];
 ; ;
# 177 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int f; int p; int t; int hh; ;
# 178 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 179 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ;
# 180 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 181 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *maxscore = 0;
# 182 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *se1 = *se2 = 0;
# 183 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 184 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= m; i++) {HH[i] = 0; DD[i] = -g;}
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 186 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= n; i++) {
# 187 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = p = 0;
# 188 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = -g;
# 189 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 190 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= m; j++) {
# 191 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         f -= gh;
# 192 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = hh - g - gh;
# 193 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 194 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f < t) {f = t; };
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] -= gh;
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = HH[j] - g - gh;
# 198 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 199 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (DD[j] < t) {DD[j] = t; };
# 200 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 201 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = p + matrix[(int)ia[i]][(int)ib[j]];
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < f) {hh = f; };
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < DD[j]) {hh = DD[j]; };
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < 0) {hh = 0; };
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         p = HH[j];
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > *maxscore) {*maxscore = hh; *se1 = i; *se2 = j;}
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "forward_pass", &____must_manage_forward_pass, ____alias_loc_id_6, ____chimes_did_disable4); }

void forward_pass(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh) { (____chimes_replaying ? forward_pass_resumable(ia, ib, n, m, se1, se2, maxscore, g, gh) : forward_pass_quick(ia, ib, n, m, se1, se2, maxscore, g, gh)); }

void reverse_pass_quick(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh)
# 218 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&reverse_pass), "reverse_pass", &____must_manage_reverse_pass, 9, 0, (size_t)(2235191825397910459UL), (size_t)(2235191825397910460UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397910463UL), (size_t)(2235191825397910464UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int DD[5000];
int HH[5000];
 ; ;
# 219 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int f; int p; int t; int hh; int cost; ;
# 220 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 221 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ;
# 222 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 223 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   cost = 0;
# 224 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *sb1 = *sb2 = 1;
# 225 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 226 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = se2; i > 0; i--){ HH[i] = -1; DD[i] = -1;}
# 227 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = se1; i > 0; i--) {
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = f = -1;
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (i == se1) {p = 0; } else {p = -1; } ;
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = se2; j > 0; j--) {
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         f -= gh;
# 235 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = hh - g - gh;
# 236 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f < t) {f = t; };
# 237 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 238 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] -= gh;
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = HH[j] - g - gh;
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (DD[j] < t) {DD[j] = t; };
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = p + matrix[(int)ia[i]][(int)ib[j]];
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < f) {hh = f; };
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < DD[j]) {hh = DD[j]; };
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         p = HH[j];
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > cost) {
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            cost = hh; *sb1 = i; *sb2 = j;
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (cost >= maxscore) {break; };
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 254 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 255 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (cost >= maxscore) {break; };
# 256 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 257 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "reverse_pass", &____must_manage_reverse_pass, ____alias_loc_id_7, ____chimes_did_disable5); }

void reverse_pass(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh) { (____chimes_replaying ? reverse_pass_resumable(ia, ib, se1, se2, sb1, sb2, maxscore, g, gh) : reverse_pass_quick(ia, ib, se1, se2, sb1, sb2, maxscore, g, gh)); }

int diff_quick (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh)
# 263 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&diff), "diff", &____must_manage_diff, 13, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397911243UL), (size_t)(2235191825397911244UL), (size_t)(2235191825397911245UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int SS[5000];
int RR[5000];
int DD[5000];
int HH[5000];
 ; ;
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; int f; int e; int s; int t; int hh; ;
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int midi; int midj; int midh; int type; ;
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ;
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    ;
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 271 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (N <= 0) {if (M > 0) {({ calling_npm("del", 0); del_npm(M, print_ptr, last_print, displ); }); }; rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return( - (int) ((M) <= 0 ? 0 : tb + gh * (M))); }
# 272 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 273 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (M <= 1) {
# 274 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 275 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (M <= 0) {({ calling_npm("add", 0); add_npm(N, print_ptr, last_print, displ); }); rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return( - (int)((N) <= 0 ? 0 : tb + gh * (N)));}
# 276 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 277 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      midh = -(tb+gh) - ((N) <= 0 ? 0 : te + gh * (N));
# 278 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = -(te+gh) - ((N) <= 0 ? 0 : tb + gh * (N));
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 280 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh > midh) {midh = hh; };
# 281 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      midj = 0;
# 282 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 283 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= N; j++) {
# 284 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = ({ calling_npm("calc_score", 0); calc_score_npm(1, j, A, B, seq1, seq2); }) - ((N-j) <= 0 ? 0 : te + gh * (N-j)) - ((j-1) <= 0 ? 0 : tb + gh * (j-1));
# 285 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > midh) {midh = hh; midj = j;}
# 286 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 287 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 288 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (midj == 0) {
# 289 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ({ calling_npm("del", 0); del_npm(1, print_ptr, last_print, displ); });
# 290 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ({ calling_npm("add", 0); add_npm(N, print_ptr, last_print, displ); });
# 291 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      } else {
# 292 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (midj > 1) {({ calling_npm("add", 0); add_npm(midj-1, print_ptr, last_print, displ); }); };
# 293 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         displ[(*print_ptr)++] = *last_print = 0;
# 294 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (midj < N) {({ calling_npm("add", 0); add_npm(N-midj, print_ptr, last_print, displ); }); };
# 295 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 296 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 297 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return midh;
# 298 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 299 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 300 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midi = M / 2;
# 301 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   HH[0] = 0.0;
# 302 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -tb;
# 303 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 304 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = 1; j <= N; j++) {
# 305 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      HH[j] = t = t - gh;
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      DD[j] = t - g;
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -tb;
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= midi; i++) {
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      s = HH[0];
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      HH[0] = hh = t = t - gh;
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = t - g;
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= N; j++) {
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = hh - g - gh) > (f = f - gh)) {f = hh; };
# 317 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = HH[j] - g - gh) > (e = DD[j]- gh)) {e = hh; };
# 318 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = s + ({ calling_npm("calc_score", 0); calc_score_npm(i, j, A, B, seq1, seq2); });
# 319 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f > hh) {hh = f; };
# 320 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (e > hh) {hh = e; };
# 321 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 322 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         s = HH[j];
# 323 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 324 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] = e;
# 325 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 326 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 327 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 328 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   DD[0] = HH[0];
# 329 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   RR[N] = 0;
# 330 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -te;
# 331 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 332 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = N-1; j >= 0; j--) {RR[j] = t = t - gh; SS[j] = t - g;}
# 333 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 334 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -te;
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 336 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = M - 1; i >= midi; i--) {
# 337 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      s = RR[N];
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      RR[N] = hh = t = t-gh;
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = t - g;
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = N - 1; j >= 0; j--) {
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = hh - g - gh) > (f = f - gh)) {f = hh; };
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = RR[j] - g - gh) > (e = SS[j] - gh)) {e = hh; };
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = s + ({ calling_npm("calc_score", 0); calc_score_npm(i+1, j+1, A, B, seq1, seq2); });
# 344 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f > hh) {hh = f; };
# 345 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (e > hh) {hh = e; };
# 346 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 347 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         s = RR[j];
# 348 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         RR[j] = hh;
# 349 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         SS[j] = e;
# 350 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 351 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 352 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 353 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   SS[N] = RR[N];
# 354 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 355 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midh = HH[0] + RR[0];
# 356 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midj = 0;
# 357 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   type = 1;
# 358 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = 0; j <= N; j++) {
# 360 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = HH[j] + RR[j];
# 361 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh >= midh) {if (hh > midh || (HH[j] != DD[j] && RR[j] == SS[j]))
# 363 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         {midh = hh; midj = j;}; }
# 364 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 365 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 366 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = N; j >= 0; j--) {
# 367 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = DD[j] + SS[j] + g;
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh > midh) {midh = hh;midj = j;type = 2;}
# 369 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 370 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 371 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 372 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (type == 1) {
# 373 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A, B, midi, midj, tb, g, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 374 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A+midi, B+midj, M-midi, N-midj, g, te, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 375 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   } else {
# 376 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A, B, midi-1, midj, tb, 0.0, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 377 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("del", 0); del_npm(2, print_ptr, last_print, displ); });
# 378 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ({ calling_npm("diff", 0); diff_npm(A+midi+1, B+midj, M-midi-1, N-midj, 0.0, te, print_ptr, last_print, displ, seq1, seq2, g, gh); });
# 379 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 380 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 381 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "diff", &____must_manage_diff, ____alias_loc_id_8, ____chimes_did_disable6); return midh;
# 382 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int diff (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh) { return (____chimes_replaying ? diff_resumable(A, B, M, N, tb, te, print_ptr, last_print, displ, seq1, seq2, g, gh) : diff_quick(A, B, M, N, tb, te, print_ptr, last_print, displ, seq1, seq2, g, gh)); }

double tracepath_quick(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2)
# 388 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&tracepath), "tracepath", &____must_manage_tracepath, 7, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(2235191825397911396UL), (size_t)(2235191825397911397UL), (size_t)(2235191825397911398UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 389 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int k; ;
# 390 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int i1; i1 = (tsb1) ;
# 391 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int i2; i2 = (tsb2) ;
# 392 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int pos; pos = (0) ;
# 393 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int count; count = (0) ;
# 394 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 395 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= *print_ptr - 1; ++i) {
# 396 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (displ[i]==0) {{
# 397 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
          char c1; c1 = (seq_array[seq1][i1]) ;
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
          char c2; c2 = (seq_array[seq2][i2]) ;
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((c1!=gap_pos1) && (c1 != gap_pos2) && (c1 == c2)) {count++; };
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ++i1; ++i2; ++pos;
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }; } else if ((k = displ[i]) > 0) {
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         i2 += k;
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         pos += k;
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      } else {
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         i1 -= k;
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         pos -= k;
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 413 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "tracepath", &____must_manage_tracepath, ____alias_loc_id_9, ____chimes_did_disable7); return (100.0 * (double) count);
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

double tracepath(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2) { return (____chimes_replaying ? tracepath_resumable(tsb1, tsb2, print_ptr, last_print, displ, seq1, seq2) : tracepath_quick(tsb1, tsb2, print_ptr, last_print, displ, seq1, seq2)); }

int pairalign_quick(int istart, int iend, int jstart, int jend)
# 418 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&pairalign), "pairalign", &____must_manage_pairalign, 4, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int displ[10001];
int sb1;
int se1;
 if (____must_checkpoint_pairalign_displ_0 || ____must_checkpoint_pairalign_sb1_0 || ____must_checkpoint_pairalign_se1_0) { register_stack_vars(3, "pairalign|displ|0", &____must_checkpoint_pairalign_displ_0, "[10001 x i32]", (void *)(displ), (size_t)40004, 0, 0, 0, "pairalign|sb1|0", &____must_checkpoint_pairalign_sb1_0, "i32", (void *)(&sb1), (size_t)4, 0, 0, 0, "pairalign|se1|0", &____must_checkpoint_pairalign_se1_0, "i32", (void *)(&se1), (size_t)4, 0, 0, 0); } ; ;
# 419 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int n; int m; int si; int sj; ;
# 420 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int len1; int len2; int maxres; ;
# 421 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   double gg; double mm_score; ;
# 422 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int *mat_xref; int *matptr; ;
# 423 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 424 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matptr = gon250mt;
# 425 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_xref = def_aa_xref;
# 426 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = ({ calling_npm("get_matrix", 0); get_matrix_npm(matptr, mat_xref, 10); });
# 427 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (maxres == 0) {rm_stack(false, 0UL, "pairalign", &____must_manage_pairalign, ____alias_loc_id_10, ____chimes_did_disable8); return(-1); };
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Start aligning "); } };
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp parallel
# 431 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   {
# 432 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp for schedule(dynamic) private(i,n,si,sj,len1,m)
# 433 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (si = 0; si < nseqs; si++) {
# 434 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((n = seqlen_array[si+1]) != 0){
# 435 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            for (i = 1, len1 = 0; i <= n; i++) {
# 436 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                char c; c = (seq_array[si + 1][i]) ;
# 437 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if ((c != gap_pos1) && (c != gap_pos2)) {len1++; };
# 438 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 439 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 440 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            for (sj = si + 1; sj < nseqs; sj++)
# 441 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            {
# 442 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if ((m = seqlen_array[sj+1]) != 0)
# 443 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               {
# 444 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp task private(i,gg,len2,mm_score) firstprivate(m,n,si,sj,len1) shared(nseqs, bench_output,seqlen_array,seq_array,gap_pos1,gap_pos2,pw_ge_penalty,pw_go_penalty,mat_avscore)
# 445 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 446 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 447 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  {
# 448 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                   int se2; int sb2; int maxscore; int seq1; int seq2; int g; int gh; ;
# 449 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                   ;
# 450 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  int print_ptr; int last_print; ;
# 451 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 452 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  for (i = 1, len2 = 0; i <= m; i++) {
# 453 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                      char c; c = (seq_array[sj + 1][i]) ;
# 454 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                     if ((c != gap_pos1) && (c != gap_pos2)) {len2++; };
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  }
# 456 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 457 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  gh = 10 * pw_ge_penalty;
# 458 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  gg = pw_go_penalty + log((double) ((n)<(m)?(n):(m)));
# 459 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  g = (mat_avscore <= 0) ? 20 * gg : 2 * mat_avscore * gg;
# 460 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 461 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  seq1 = si + 1;
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  seq2 = sj + 1;
# 463 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 464 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  ({ calling_npm("forward_pass", 0); forward_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh); });
# 465 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  ({ calling_npm("reverse_pass", 0); reverse_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh); });
# 466 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 467 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  print_ptr = 1;
# 468 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  last_print = 0;
# 469 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 470 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  ({ calling_npm("diff", 0); diff_npm(sb1-1, sb2-1, se1-sb1+1, se2-sb2+1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh); });
# 471 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  mm_score = ({ calling_npm("tracepath", 0); tracepath_npm(sb1, sb2, &print_ptr, &last_print, displ, seq1, seq2); });
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 473 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  if (len1 == 0 || len2 == 0) {mm_score = 0.0; } else {mm_score /= (double) ((len1)<(len2)?(len1):(len2)); } ;
# 475 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 476 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  bench_output[si*nseqs+sj] = mm_score;
# 477 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  }
# 478 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               }
# 479 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 480 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 481 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 482 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 483 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, " completed!\n"); } };
# 484 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "pairalign", &____must_manage_pairalign, ____alias_loc_id_10, ____chimes_did_disable8); return 0;
# 485 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int pairalign(int istart, int iend, int jstart, int jend) { return (____chimes_replaying ? pairalign_resumable(istart, iend, jstart, jend) : pairalign_quick(istart, iend, jstart, jend)); }

int pairalign_seq_quick(int istart, int iend, int jstart, int jend)
# 488 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&pairalign_seq), "pairalign_seq", &____must_manage_pairalign_seq, 4, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; int displ[10001];
int sb1;
int se1;
 if (____must_checkpoint_pairalign_seq_displ_0 || ____must_checkpoint_pairalign_seq_sb1_0 || ____must_checkpoint_pairalign_seq_se1_0) { register_stack_vars(3, "pairalign_seq|displ|0", &____must_checkpoint_pairalign_seq_displ_0, "[10001 x i32]", (void *)(displ), (size_t)40004, 0, 0, 0, "pairalign_seq|sb1|0", &____must_checkpoint_pairalign_seq_sb1_0, "i32", (void *)(&sb1), (size_t)4, 0, 0, 0, "pairalign_seq|se1|0", &____must_checkpoint_pairalign_seq_se1_0, "i32", (void *)(&se1), (size_t)4, 0, 0, 0); } ; ;
# 489 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int n; int m; int si; int sj; ;
# 490 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int len1; int len2; int maxres; ;
# 491 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   double gg; double mm_score; ;
# 492 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int *mat_xref; int *matptr; ;
# 493 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 494 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matptr = gon250mt;
# 495 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_xref = def_aa_xref;
# 496 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = ({ calling_npm("get_matrix", 0); get_matrix_npm(matptr, mat_xref, 10); });
# 497 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (maxres == 0) {rm_stack(false, 0UL, "pairalign_seq", &____must_manage_pairalign_seq, ____alias_loc_id_11, ____chimes_did_disable9); return(-1); };
# 498 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 499 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (si = 0; si < nseqs; si++) {
# 500 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if ((n = seqlen_array[si+1]) != 0){
# 501 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         for (i = 1, len1 = 0; i <= n; i++) {
# 502 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
             char c; c = (seq_array[si + 1][i]) ;
# 503 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if ((c != gap_pos1) && (c != gap_pos2)) {len1++; };
# 504 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 505 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 506 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         for (sj = si + 1; sj < nseqs; sj++) {
# 507 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if ((m = seqlen_array[sj+1]) != 0){
# 508 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                int se2; int sb2; int maxscore; int seq1; int seq2; int g; int gh; ;
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                ;
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               int print_ptr; int last_print; ;
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               for (i = 1, len2 = 0; i <= m; i++) {
# 513 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                   char c; c = (seq_array[sj + 1][i]) ;
# 514 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  if ((c != gap_pos1) && (c != gap_pos2)) {len2++; };
# 515 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               }
# 516 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 517 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               gh = 10 * pw_ge_penalty;
# 518 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               gg = pw_go_penalty + log((double) ((n)<(m)?(n):(m)));
# 519 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               g = (mat_avscore <= 0) ? 20 * gg : 2 * mat_avscore * gg;
# 520 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 521 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq1 = si + 1;
# 522 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq2 = sj + 1;
# 523 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 524 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               ({ calling_npm("forward_pass", 0); forward_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh); });
# 525 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               ({ calling_npm("reverse_pass", 0); reverse_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh); });
# 526 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 527 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               print_ptr = 1;
# 528 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               last_print = 0;
# 529 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 530 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               ({ calling_npm("diff", 0); diff_npm(sb1-1, sb2-1, se1-sb1+1, se2-sb2+1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh); });
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               mm_score = ({ calling_npm("tracepath", 0); tracepath_npm(sb1, sb2, &print_ptr, &last_print, displ, seq1, seq2); });
# 532 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 533 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if (len1 == 0 || len2 == 0) {mm_score = 0.0; } else {mm_score /= (double) ((len1)<(len2)?(len1):(len2)); } ;
# 535 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 536 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq_output[si*nseqs+sj] = mm_score;
# 537 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 538 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 539 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 540 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "pairalign_seq", &____must_manage_pairalign_seq, ____alias_loc_id_11, ____chimes_did_disable9); return 0;
# 542 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int pairalign_seq(int istart, int iend, int jstart, int jend) { return (____chimes_replaying ? pairalign_seq_resumable(istart, iend, jstart, jend) : pairalign_seq_quick(istart, iend, jstart, jend)); }

void init_matrix_quick(void)
# 549 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&init_matrix), "init_matrix", &____must_manage_init_matrix, 0, 0) ; ; ;
# 550 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 551 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   char c1; char c2; ;
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_pos1 = 32 - 2;
# 554 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_pos2 = 32 - 1;
# 555 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   max_aa = strlen(amino_acid_codes) - 2;
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 557 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i < 32; i++) { def_aa_xref[i] = -1; };
# 558 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 559 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; (c1 = amino_acid_order[i]); i++) { for (j = 0; (c2 = amino_acid_codes[j]); j++) { if (c1 == c2) {def_aa_xref[i] = j; break;}; }; }
# 562 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "init_matrix", &____must_manage_init_matrix, ____alias_loc_id_12, ____chimes_did_disable10); }

void init_matrix(void) { (____chimes_replaying ? init_matrix_resumable() : init_matrix_quick()); }

void pairalign_init_quick (char *filename)
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&pairalign_init), "pairalign_init", &____must_manage_pairalign_init, 1, 1, (size_t)(2235191825397912206UL), "pairalign_init|filename|0", &____must_checkpoint_pairalign_init_filename_0, "i8*", (void *)(&filename), (size_t)8, 1, 0, 0) ; ; ;
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; ;
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (!filename || !filename[0]) {
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
       call_lbl_1: ({ calling((void*)bots_error, 1, ____alias_loc_id_1, 0UL, 2, (size_t)(0UL), (size_t)(2235191825397912444UL)); (bots_error)(0, "Please specify an input file with the -f option\n"); }) ;
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ({ calling_npm("init_matrix", 0); init_matrix_npm(); });
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    call_lbl_2: nseqs = ({ calling((void*)readseqs, 2, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(2235191825397912206UL)); (readseqs)(1, filename); }) ;
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Multiple Pairwise Alignment (%d sequences)\n" ,nseqs); } };
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= nseqs; i++) { ;; }
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ktup = 1;
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   window = 5;
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   signif = 5;
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_open = 10.0;
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_extend = 0.2;
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pw_go_penalty = 10.0;
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pw_ge_penalty = 0.1;
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "pairalign_init", &____must_manage_pairalign_init, ____alias_loc_id_13, ____chimes_did_disable11); }

void pairalign_init (char *filename) { (____chimes_replaying ? pairalign_init_resumable(filename) : pairalign_init_quick(filename)); }

void align_init_quick ()
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable12 = new_stack((void *)(&align_init), "align_init", &____must_manage_align_init, 0, 0) ; ; ;
# 593 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 594 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   bench_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 595 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 596 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { bench_output[i*nseqs+j] = 0; }; };
# 599 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_init", &____must_manage_align_init, ____alias_loc_id_14, ____chimes_did_disable12); }

void align_init () { (____chimes_replaying ? align_init_resumable() : align_init_quick()); }

void align_quick()
# 602 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable13 = new_stack((void *)(&align), "align", &____must_manage_align, 0, 0) ; ; ;
# 603 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ({ calling_npm("pairalign", 0); pairalign_npm(0, nseqs, 0, nseqs); });
# 604 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align", &____must_manage_align, 0, ____chimes_did_disable13); }

void align() { (____chimes_replaying ? align_resumable() : align_quick()); }

void align_seq_init_quick ()
# 607 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable14 = new_stack((void *)(&align_seq_init), "align_seq_init", &____must_manage_align_seq_init, 0, 0) ; ; ;
# 608 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 609 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   seq_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 610 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   bench_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { seq_output[i*nseqs+j] = 0; }; };
# 615 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_seq_init", &____must_manage_align_seq_init, ____alias_loc_id_15, ____chimes_did_disable14); }

void align_seq_init () { (____chimes_replaying ? align_seq_init_resumable() : align_seq_init_quick()); }

void align_seq_quick()
# 618 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable15 = new_stack((void *)(&align_seq), "align_seq", &____must_manage_align_seq, 0, 0) ; ; ;
# 619 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ({ calling_npm("pairalign_seq", 0); pairalign_seq_npm(0, nseqs, 0, nseqs); });
# 620 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_seq", &____must_manage_align_seq, 0, ____chimes_did_disable15); }

void align_seq() { (____chimes_replaying ? align_seq_resumable() : align_seq_quick()); }

void align_end_quick ()
# 624 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable16 = new_stack((void *)(&align_end), "align_end", &____must_manage_align_end, 0, 0) ; ; ;
# 625 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 626 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { if (bench_output[i*nseqs+j] != 0) {;; }; }; }
# 631 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
rm_stack(false, 0UL, "align_end", &____must_manage_align_end, ____alias_loc_id_16, ____chimes_did_disable16); }

void align_end () { (____chimes_replaying ? align_end_resumable() : align_end_quick()); }

int align_verify_quick ()
# 655 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{const int ____chimes_did_disable17 = new_stack((void *)(&align_verify), "align_verify", &____must_manage_align_verify, 0, 0) ; ; ;
# 656 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i; int j; ;
# 657 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
    int result; result = (1) ;
# 658 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i+=200) { for(j = 0; j<nseqs; j++)
# 660 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         {
# 661 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Output: Optimized prot. (%3d:%3d)=%5d \n" , i+1, j+1, (int) bench_output[i*nseqs+j]); } }
# 662 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                                                       ;
# 663 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }; }
# 664 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   rm_stack(false, 0UL, "align_verify", &____must_manage_align_verify, ____alias_loc_id_17, ____chimes_did_disable17); return result;
# 665 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int align_verify () { return (____chimes_replaying ? align_verify_resumable() : align_verify_quick()); }



void del_npm(int k, int *print_ptr, int *last_print, int *displ)
# 64 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 65 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (*last_print<0) {*last_print = displ[(*print_ptr)-1] -= k; } else {*last_print = displ[(*print_ptr)++] = -k; } ;
# 67 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void add_npm(int v, int *print_ptr, int *last_print, int *displ)
# 73 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 74 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (*last_print < 0) {
# 75 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      displ[(*print_ptr)-1] = v;
# 76 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      displ[(*print_ptr)++] = *last_print;
# 77 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   } else {
# 78 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      *last_print = displ[(*print_ptr)++] = v;
# 79 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 80 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int calc_score_npm(int iat, int jat, int v1, int v2, int seq1, int seq2)
# 86 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 87 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, j, ipos, jpos;
# 88 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 89 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ipos = v1 + iat;
# 90 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   jpos = v2 + jat;
# 91 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   i = seq_array[seq1][ipos];
# 92 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   j = seq_array[seq2][jpos];
# 93 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 94 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return (matrix[i][j]);
# 95 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int get_matrix_npm(int *matptr, int *xref, int scale)
# 101 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 102 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int gg_score = 0;
# 103 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int gr_score = 0;
# 104 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, j, k, ti, tj, ix;
# 105 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int av1, av2, av3, min, max, maxres;
# 106 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 107 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) { for (j = 0; j <= max_aa; j++) { matrix[i][j] = 0; }; };
# 109 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 110 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ix = 0;
# 111 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = 0;
# 112 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 113 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) {
# 114 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      ti = xref[i];
# 115 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 0; j <= i; j++) {
# 116 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         tj = xref[j];
# 117 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((ti != -1) && (tj != -1)) {
# 118 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            k = matptr[ix];
# 119 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (ti == tj) {
# 120 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[ti][ti] = k * scale;
# 121 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               maxres++;
# 122 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            } else {
# 123 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[ti][tj] = k * scale;
# 124 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               matrix[tj][ti] = k * scale;
# 125 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 126 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            ix++;
# 127 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 128 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 129 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 130 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 131 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres--;
# 132 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av1 = av2 = av3 = 0;
# 133 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 134 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) {
# 135 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 0; j <= i; j++) {
# 136 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         av1 += matrix[i][j];
# 137 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (i == j) {av2 += matrix[i][j]; } else {av3 += matrix[i][j]; } ;
# 139 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 140 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 141 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 142 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av1 /= (maxres*maxres)/2;
# 143 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av2 /= maxres;
# 144 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   av3 /= ((double)(maxres*maxres-maxres))/2;
# 145 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_avscore = -av3;
# 146 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 147 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   min = max = matrix[0][0];
# 148 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 149 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= max_aa; i++) { for (j = 1; j <= i; j++) {
# 151 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (matrix[i][j] < min) {min = matrix[i][j]; };
# 152 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (matrix[i][j] > max) {max = matrix[i][j]; };
# 153 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }; }
# 154 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 155 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i < gap_pos1; i++) {
# 156 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[i][gap_pos1] = gr_score;
# 157 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[gap_pos1][i] = gr_score;
# 158 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[i][gap_pos2] = gr_score;
# 159 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      matrix[gap_pos2][i] = gr_score;
# 160 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 161 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 162 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos1][gap_pos1] = gg_score;
# 163 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos2][gap_pos2] = gg_score;
# 164 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos2][gap_pos1] = gg_score;
# 165 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matrix[gap_pos1][gap_pos2] = gg_score;
# 166 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 167 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres += 2;
# 168 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 169 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return(maxres);
# 170 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void forward_pass_npm(char *ia, char *ib, int n, int m, int *se1, int *se2, int *maxscore, int g, int gh)
# 176 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 177 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, j, f, p, t, hh;
# 178 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int HH[5000];
# 179 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        int DD[5000];
# 180 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 181 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *maxscore = 0;
# 182 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *se1 = *se2 = 0;
# 183 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 184 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i <= m; i++) {HH[i] = 0; DD[i] = -g;}
# 185 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 186 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= n; i++) {
# 187 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = p = 0;
# 188 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = -g;
# 189 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 190 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= m; j++) {
# 191 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         f -= gh;
# 192 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = hh - g - gh;
# 193 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 194 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f < t) {f = t; };
# 195 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 196 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] -= gh;
# 197 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = HH[j] - g - gh;
# 198 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 199 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (DD[j] < t) {DD[j] = t; };
# 200 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 201 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = p + matrix[(int)ia[i]][(int)ib[j]];
# 202 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < f) {hh = f; };
# 203 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < DD[j]) {hh = DD[j]; };
# 204 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < 0) {hh = 0; };
# 205 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 206 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         p = HH[j];
# 207 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 208 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 209 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > *maxscore) {*maxscore = hh; *se1 = i; *se2 = j;}
# 210 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 211 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 212 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void reverse_pass_npm(char *ia, char *ib, int se1, int se2, int *sb1, int *sb2, int maxscore, int g, int gh)
# 218 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 219 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, j, f, p, t, hh, cost;
# 220 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int HH[5000];
# 221 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        int DD[5000];
# 222 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 223 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   cost = 0;
# 224 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   *sb1 = *sb2 = 1;
# 225 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 226 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = se2; i > 0; i--){ HH[i] = -1; DD[i] = -1;}
# 227 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 228 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = se1; i > 0; i--) {
# 229 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = f = -1;
# 230 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (i == se1) {p = 0; } else {p = -1; } ;
# 231 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 232 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = se2; j > 0; j--) {
# 233 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 234 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         f -= gh;
# 235 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = hh - g - gh;
# 236 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f < t) {f = t; };
# 237 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 238 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] -= gh;
# 239 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         t = HH[j] - g - gh;
# 240 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (DD[j] < t) {DD[j] = t; };
# 241 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 242 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = p + matrix[(int)ia[i]][(int)ib[j]];
# 243 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < f) {hh = f; };
# 244 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh < DD[j]) {hh = DD[j]; };
# 245 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 246 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         p = HH[j];
# 247 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 248 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 249 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > cost) {
# 250 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            cost = hh; *sb1 = i; *sb2 = j;
# 251 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if (cost >= maxscore) {break; };
# 252 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 253 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 254 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 255 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (cost >= maxscore) {break; };
# 256 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 257 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int diff_npm (int A, int B, int M, int N, int tb, int te, int *print_ptr, int *last_print, int *displ, int seq1, int seq2, int g, int gh)
# 263 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 264 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, j, f, e, s, t, hh;
# 265 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int midi, midj, midh, type;
# 266 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int HH[5000];
# 267 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        int DD[5000];
# 268 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int RR[5000];
# 269 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int SS[5000];
# 270 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 271 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (N <= 0) {if (M > 0) {del_npm(M, print_ptr, last_print, displ); }; return( - (int) ((M) <= 0 ? 0 : tb + gh * (M))); }
# 272 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 273 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (M <= 1) {
# 274 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 275 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (M <= 0) {add_npm(N, print_ptr, last_print, displ); return( - (int)((N) <= 0 ? 0 : tb + gh * (N)));}
# 276 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 277 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      midh = -(tb+gh) - ((N) <= 0 ? 0 : te + gh * (N));
# 278 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = -(te+gh) - ((N) <= 0 ? 0 : tb + gh * (N));
# 279 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 280 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh > midh) {midh = hh; };
# 281 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      midj = 0;
# 282 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 283 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= N; j++) {
# 284 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = calc_score_npm(1, j, A, B, seq1, seq2) - ((N-j) <= 0 ? 0 : te + gh * (N-j)) - ((j-1) <= 0 ? 0 : tb + gh * (j-1));
# 285 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (hh > midh) {midh = hh; midj = j;}
# 286 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 287 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 288 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (midj == 0) {
# 289 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         del_npm(1, print_ptr, last_print, displ);
# 290 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         add_npm(N, print_ptr, last_print, displ);
# 291 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      } else {
# 292 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (midj > 1) {add_npm(midj-1, print_ptr, last_print, displ); };
# 293 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         displ[(*print_ptr)++] = *last_print = 0;
# 294 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (midj < N) {add_npm(N-midj, print_ptr, last_print, displ); };
# 295 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 296 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 297 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      return midh;
# 298 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 299 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 300 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midi = M / 2;
# 301 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   HH[0] = 0.0;
# 302 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -tb;
# 303 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 304 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = 1; j <= N; j++) {
# 305 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      HH[j] = t = t - gh;
# 306 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      DD[j] = t - g;
# 307 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 308 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 309 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -tb;
# 310 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 311 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= midi; i++) {
# 312 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      s = HH[0];
# 313 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      HH[0] = hh = t = t - gh;
# 314 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = t - g;
# 315 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = 1; j <= N; j++) {
# 316 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = hh - g - gh) > (f = f - gh)) {f = hh; };
# 317 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = HH[j] - g - gh) > (e = DD[j]- gh)) {e = hh; };
# 318 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = s + calc_score_npm(i, j, A, B, seq1, seq2);
# 319 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f > hh) {hh = f; };
# 320 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (e > hh) {hh = e; };
# 321 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 322 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         s = HH[j];
# 323 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         HH[j] = hh;
# 324 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         DD[j] = e;
# 325 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 326 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 327 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 328 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   DD[0] = HH[0];
# 329 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   RR[N] = 0;
# 330 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -te;
# 331 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 332 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = N-1; j >= 0; j--) {RR[j] = t = t - gh; SS[j] = t - g;}
# 333 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 334 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   t = -te;
# 335 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 336 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = M - 1; i >= midi; i--) {
# 337 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      s = RR[N];
# 338 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      RR[N] = hh = t = t-gh;
# 339 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      f = t - g;
# 340 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (j = N - 1; j >= 0; j--) {
# 341 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = hh - g - gh) > (f = f - gh)) {f = hh; };
# 342 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((hh = RR[j] - g - gh) > (e = SS[j] - gh)) {e = hh; };
# 343 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         hh = s + calc_score_npm(i+1, j+1, A, B, seq1, seq2);
# 344 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (f > hh) {hh = f; };
# 345 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if (e > hh) {hh = e; };
# 346 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 347 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         s = RR[j];
# 348 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         RR[j] = hh;
# 349 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         SS[j] = e;
# 350 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 351 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 352 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 353 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   SS[N] = RR[N];
# 354 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 355 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midh = HH[0] + RR[0];
# 356 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   midj = 0;
# 357 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   type = 1;
# 358 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 359 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = 0; j <= N; j++) {
# 360 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = HH[j] + RR[j];
# 361 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh >= midh) {if (hh > midh || (HH[j] != DD[j] && RR[j] == SS[j]))
# 363 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         {midh = hh; midj = j;}; }
# 364 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 365 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 366 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (j = N; j >= 0; j--) {
# 367 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      hh = DD[j] + SS[j] + g;
# 368 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (hh > midh) {midh = hh;midj = j;type = 2;}
# 369 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 370 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 371 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 372 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (type == 1) {
# 373 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      diff_npm(A, B, midi, midj, tb, g, print_ptr, last_print, displ, seq1, seq2, g, gh);
# 374 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      diff_npm(A+midi, B+midj, M-midi, N-midj, g, te, print_ptr, last_print, displ, seq1, seq2, g, gh);
# 375 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   } else {
# 376 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      diff_npm(A, B, midi-1, midj, tb, 0.0, print_ptr, last_print, displ, seq1, seq2, g, gh);
# 377 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      del_npm(2, print_ptr, last_print, displ);
# 378 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      diff_npm(A+midi+1, B+midj, M-midi-1, N-midj, 0.0, te, print_ptr, last_print, displ, seq1, seq2, g, gh);
# 379 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 380 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 381 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return midh;
# 382 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

double tracepath_npm(int tsb1, int tsb2, int *print_ptr, int *last_print, int *displ, int seq1, int seq2)
# 388 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 389 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, k;
# 390 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i1 = tsb1;
# 391 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i2 = tsb2;
# 392 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int pos = 0;
# 393 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int count = 0;
# 394 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 395 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= *print_ptr - 1; ++i) {
# 396 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if (displ[i]==0) {{
# 397 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         char c1 = seq_array[seq1][i1];
# 398 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         char c2 = seq_array[seq2][i2];
# 399 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 400 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((c1!=gap_pos1) && (c1 != gap_pos2) && (c1 == c2)) {count++; };
# 401 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 402 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         ++i1; ++i2; ++pos;
# 403 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 404 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }; } else if ((k = displ[i]) > 0) {
# 405 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         i2 += k;
# 406 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         pos += k;
# 407 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      } else {
# 408 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         i1 -= k;
# 409 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         pos -= k;
# 410 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 411 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 412 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 413 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return (100.0 * (double) count);
# 414 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int pairalign_npm(int istart, int iend, int jstart, int jend)
# 418 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 419 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, n, m, si, sj;
# 420 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int len1, len2, maxres;
# 421 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   double gg, mm_score;
# 422 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int *mat_xref, *matptr;
# 423 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 424 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matptr = gon250mt;
# 425 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_xref = def_aa_xref;
# 426 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = get_matrix_npm(matptr, mat_xref, 10);
# 427 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (maxres == 0) {return(-1); };
# 428 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 429 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Start aligning "); } };
# 430 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp parallel
# 431 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   {
# 432 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp for schedule(dynamic) private(i,n,si,sj,len1,m)
# 433 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      for (si = 0; si < nseqs; si++) {
# 434 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         if ((n = seqlen_array[si+1]) != 0){
# 435 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            for (i = 1, len1 = 0; i <= n; i++) {
# 436 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               char c = seq_array[si+1][i];
# 437 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if ((c != gap_pos1) && (c != gap_pos2)) {len1++; };
# 438 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 439 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 440 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            for (sj = si + 1; sj < nseqs; sj++)
# 441 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            {
# 442 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if ((m = seqlen_array[sj+1]) != 0)
# 443 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               {
# 444 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
#pragma omp task private(i,gg,len2,mm_score) firstprivate(m,n,si,sj,len1) shared(nseqs, bench_output,seqlen_array,seq_array,gap_pos1,gap_pos2,pw_ge_penalty,pw_go_penalty,mat_avscore)
# 445 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 446 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 447 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  {
# 448 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  int se1, se2, sb1, sb2, maxscore, seq1, seq2, g, gh;
# 449 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  int displ[2*5000 +1];
# 450 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  int print_ptr, last_print;
# 451 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 452 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  for (i = 1, len2 = 0; i <= m; i++) {
# 453 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                     char c = seq_array[sj+1][i];
# 454 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                     if ((c != gap_pos1) && (c != gap_pos2)) {len2++; };
# 455 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  }
# 456 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 457 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  gh = 10 * pw_ge_penalty;
# 458 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  gg = pw_go_penalty + log((double) ((n)<(m)?(n):(m)));
# 459 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  g = (mat_avscore <= 0) ? 20 * gg : 2 * mat_avscore * gg;
# 460 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 461 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  seq1 = si + 1;
# 462 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  seq2 = sj + 1;
# 463 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 464 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  forward_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh);
# 465 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  reverse_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh);
# 466 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 467 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  print_ptr = 1;
# 468 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  last_print = 0;
# 469 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 470 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  diff_npm(sb1-1, sb2-1, se1-sb1+1, se2-sb2+1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh);
# 471 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  mm_score = tracepath_npm(sb1, sb2, &print_ptr, &last_print, displ, seq1, seq2);
# 472 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 473 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  if (len1 == 0 || len2 == 0) {mm_score = 0.0; } else {mm_score /= (double) ((len1)<(len2)?(len1):(len2)); } ;
# 475 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 476 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  bench_output[si*nseqs+sj] = mm_score;
# 477 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  }
# 478 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               }
# 479 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 480 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 481 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 482 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 483 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
        { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, " completed!\n"); } };
# 484 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return 0;
# 485 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int pairalign_seq_npm(int istart, int iend, int jstart, int jend)
# 488 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 489 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, n, m, si, sj;
# 490 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int len1, len2, maxres;
# 491 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   double gg, mm_score;
# 492 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int *mat_xref, *matptr;
# 493 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 494 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   matptr = gon250mt;
# 495 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   mat_xref = def_aa_xref;
# 496 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   maxres = get_matrix_npm(matptr, mat_xref, 10);
# 497 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (maxres == 0) {return(-1); };
# 498 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 499 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (si = 0; si < nseqs; si++) {
# 500 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      if ((n = seqlen_array[si+1]) != 0){
# 501 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         for (i = 1, len1 = 0; i <= n; i++) {
# 502 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            char c = seq_array[si+1][i];
# 503 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if ((c != gap_pos1) && (c != gap_pos2)) {len1++; };
# 504 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 505 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 506 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         for (sj = si + 1; sj < nseqs; sj++) {
# 507 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            if ((m = seqlen_array[sj+1]) != 0){
# 508 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               int se1, se2, sb1, sb2, maxscore, seq1, seq2, g, gh;
# 509 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               int displ[2*5000 +1];
# 510 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               int print_ptr, last_print;
# 511 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 512 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               for (i = 1, len2 = 0; i <= m; i++) {
# 513 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  char c = seq_array[sj+1][i];
# 514 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                  if ((c != gap_pos1) && (c != gap_pos2)) {len2++; };
# 515 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               }
# 516 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 517 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               gh = 10 * pw_ge_penalty;
# 518 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               gg = pw_go_penalty + log((double) ((n)<(m)?(n):(m)));
# 519 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               g = (mat_avscore <= 0) ? 20 * gg : 2 * mat_avscore * gg;
# 520 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 521 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq1 = si + 1;
# 522 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq2 = sj + 1;
# 523 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 524 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               forward_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], n, m, &se1, &se2, &maxscore, g, gh);
# 525 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               reverse_pass_npm(&seq_array[seq1][0], &seq_array[seq2][0], se1, se2, &sb1, &sb2, maxscore, g, gh);
# 526 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 527 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               print_ptr = 1;
# 528 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               last_print = 0;
# 529 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 530 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               diff_npm(sb1-1, sb2-1, se1-sb1+1, se2-sb2+1, 0, 0, &print_ptr, &last_print, displ, seq1, seq2, g, gh);
# 531 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               mm_score = tracepath_npm(sb1, sb2, &print_ptr, &last_print, displ, seq1, seq2);
# 532 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 533 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               if (len1 == 0 || len2 == 0) {mm_score = 0.0; } else {mm_score /= (double) ((len1)<(len2)?(len1):(len2)); } ;
# 535 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 536 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
               seq_output[si*nseqs+sj] = mm_score;
# 537 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            }
# 538 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }
# 539 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      }
# 540 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 541 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return 0;
# 542 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void init_matrix_npm(void)
# 549 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 550 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i, j;
# 551 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   char c1, c2;
# 552 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 553 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_pos1 = 32 - 2;
# 554 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_pos2 = 32 - 1;
# 555 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   max_aa = strlen(amino_acid_codes) - 2;
# 556 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 557 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i < 32; i++) { def_aa_xref[i] = -1; };
# 558 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 559 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; (c1 = amino_acid_order[i]); i++) { for (j = 0; (c2 = amino_acid_codes[j]); j++) { if (c1 == c2) {def_aa_xref[i] = j; break;}; }; }
# 562 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void pairalign_init_npm (char *filename)
# 565 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 566 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i;
# 567 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 568 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   if (!filename || !filename[0]) {
# 569 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
      (*____chimes_extern_func_bots_error)(0, "Please specify an input file with the -f option\n");
# 570 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   }
# 571 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 572 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   init_matrix_npm();
# 573 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 574 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 575 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   nseqs = (*____chimes_extern_func_readseqs)(1, filename);
# 576 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 577 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Multiple Pairwise Alignment (%d sequences)\n" ,nseqs); } };
# 578 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 579 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 1; i <= nseqs; i++) { ;; }
# 581 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 582 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   ktup = 1;
# 583 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   window = 5;
# 584 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   signif = 5;
# 585 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_open = 10.0;
# 586 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   gap_extend = 0.2;
# 587 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pw_go_penalty = 10.0;
# 588 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pw_ge_penalty = 0.1;
# 589 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void align_init_npm ()
# 592 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 593 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i,j;
# 594 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   bench_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 595 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 596 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { bench_output[i*nseqs+j] = 0; }; };
# 599 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void align_npm()
# 602 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 603 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pairalign_npm(0, nseqs, 0, nseqs);
# 604 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void align_seq_init_npm ()
# 607 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 608 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i,j;
# 609 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   seq_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 610 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   bench_output = (int *) malloc_wrapper(sizeof(int)*nseqs*nseqs, 2235191825397912221UL, 0, 0);
# 611 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
# 612 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { seq_output[i*nseqs+j] = 0; }; };
# 615 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void align_seq_npm()
# 618 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 619 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   pairalign_seq_npm(0, nseqs, 0, nseqs);
# 620 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

void align_end_npm ()
# 624 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 625 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i,j;
# 626 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i++) { for (j = 0; j<nseqs; j++) { if (bench_output[i*nseqs+j] != 0) {;; }; }; }
# 631 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}

int align_verify_npm ()
# 655 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
{
# 656 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int i,j;
# 657 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   int result = 1;
# 658 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   for (i = 0; i<nseqs; i+=200) { for(j = 0; j<nseqs; j++)
# 660 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         {
# 661 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
            { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Output: Optimized prot. (%3d:%3d)=%5d \n" , i+1, j+1, (int) bench_output[i*nseqs+j]); } }
# 662 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
                                                       ;
# 663 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
         }; }
# 664 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
   return result;
# 665 "/scratch/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.c"
}





static int module_init() {
    init_module(2235191825397909448UL, 33, 18, 7, 18, 18, 2, 20, 27, 0, 1,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)1, (2235191825397909448UL + 2713UL), "readseqs", (unsigned)1, (2235191825397909448UL + 2758UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)1, (2235191825397909448UL + 2713UL), "bots_error", (unsigned)1, (2235191825397909448UL + 2996UL),
                           &____alias_loc_id_2, (unsigned)7, (unsigned)0, (unsigned)0, (2235191825397909448UL + 1UL), (2235191825397909448UL + 2UL), (2235191825397909448UL + 3UL), (2235191825397909448UL + 4UL), (2235191825397909448UL + 45UL), (2235191825397909448UL + 46UL), (2235191825397909448UL + 47UL),
                           &____alias_loc_id_3, (unsigned)7, (unsigned)0, (unsigned)0, (2235191825397909448UL + 50UL), (2235191825397909448UL + 51UL), (2235191825397909448UL + 52UL), (2235191825397909448UL + 53UL), (2235191825397909448UL + 99UL), (2235191825397909448UL + 100UL), (2235191825397909448UL + 101UL),
                           &____alias_loc_id_4, (unsigned)10, (unsigned)0, (unsigned)0, (2235191825397909448UL + 102UL), (2235191825397909448UL + 103UL), (2235191825397909448UL + 104UL), (2235191825397909448UL + 105UL), (2235191825397909448UL + 106UL), (2235191825397909448UL + 107UL), (2235191825397909448UL + 108UL), (2235191825397909448UL + 109UL), (2235191825397909448UL + 110UL), (2235191825397909448UL + 111UL),
                           &____alias_loc_id_5, (unsigned)19, (unsigned)0, (unsigned)0, (2235191825397909448UL + 172UL), (2235191825397909448UL + 173UL), (2235191825397909448UL + 174UL), (2235191825397909448UL + 175UL), (2235191825397909448UL + 176UL), (2235191825397909448UL + 177UL), (2235191825397909448UL + 178UL), (2235191825397909448UL + 179UL), (2235191825397909448UL + 180UL), (2235191825397909448UL + 181UL), (2235191825397909448UL + 182UL), (2235191825397909448UL + 183UL), (2235191825397909448UL + 184UL), (2235191825397909448UL + 185UL), (2235191825397909448UL + 186UL), (2235191825397909448UL + 187UL), (2235191825397909448UL + 188UL), (2235191825397909448UL + 2965UL), (2235191825397909448UL + 2991UL),
                           &____alias_loc_id_6, (unsigned)20, (unsigned)0, (unsigned)0, (2235191825397909448UL + 567UL), (2235191825397909448UL + 568UL), (2235191825397909448UL + 569UL), (2235191825397909448UL + 570UL), (2235191825397909448UL + 571UL), (2235191825397909448UL + 572UL), (2235191825397909448UL + 573UL), (2235191825397909448UL + 574UL), (2235191825397909448UL + 575UL), (2235191825397909448UL + 576UL), (2235191825397909448UL + 577UL), (2235191825397909448UL + 578UL), (2235191825397909448UL + 579UL), (2235191825397909448UL + 580UL), (2235191825397909448UL + 581UL), (2235191825397909448UL + 582UL), (2235191825397909448UL + 583UL), (2235191825397909448UL + 785UL), (2235191825397909448UL + 786UL), (2235191825397909448UL + 787UL),
                           &____alias_loc_id_7, (unsigned)20, (unsigned)0, (unsigned)0, (2235191825397909448UL + 790UL), (2235191825397909448UL + 791UL), (2235191825397909448UL + 792UL), (2235191825397909448UL + 793UL), (2235191825397909448UL + 794UL), (2235191825397909448UL + 795UL), (2235191825397909448UL + 796UL), (2235191825397909448UL + 797UL), (2235191825397909448UL + 798UL), (2235191825397909448UL + 799UL), (2235191825397909448UL + 800UL), (2235191825397909448UL + 801UL), (2235191825397909448UL + 802UL), (2235191825397909448UL + 803UL), (2235191825397909448UL + 804UL), (2235191825397909448UL + 805UL), (2235191825397909448UL + 806UL), (2235191825397909448UL + 807UL), (2235191825397909448UL + 1015UL), (2235191825397909448UL + 1016UL),
                           &____alias_loc_id_8, (unsigned)32, (unsigned)0, (unsigned)0, (2235191825397909448UL + 1020UL), (2235191825397909448UL + 1021UL), (2235191825397909448UL + 1022UL), (2235191825397909448UL + 1023UL), (2235191825397909448UL + 1024UL), (2235191825397909448UL + 1025UL), (2235191825397909448UL + 1026UL), (2235191825397909448UL + 1027UL), (2235191825397909448UL + 1028UL), (2235191825397909448UL + 1029UL), (2235191825397909448UL + 1030UL), (2235191825397909448UL + 1031UL), (2235191825397909448UL + 1032UL), (2235191825397909448UL + 1033UL), (2235191825397909448UL + 1034UL), (2235191825397909448UL + 1035UL), (2235191825397909448UL + 1036UL), (2235191825397909448UL + 1037UL), (2235191825397909448UL + 1038UL), (2235191825397909448UL + 1039UL), (2235191825397909448UL + 1040UL), (2235191825397909448UL + 1041UL), (2235191825397909448UL + 1042UL), (2235191825397909448UL + 1043UL), (2235191825397909448UL + 1044UL), (2235191825397909448UL + 1045UL), (2235191825397909448UL + 1046UL), (2235191825397909448UL + 1047UL), (2235191825397909448UL + 1048UL), (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL),
                           &____alias_loc_id_9, (unsigned)15, (unsigned)0, (unsigned)0, (2235191825397909448UL + 1802UL), (2235191825397909448UL + 1803UL), (2235191825397909448UL + 1804UL), (2235191825397909448UL + 1805UL), (2235191825397909448UL + 1806UL), (2235191825397909448UL + 1807UL), (2235191825397909448UL + 1808UL), (2235191825397909448UL + 1809UL), (2235191825397909448UL + 1810UL), (2235191825397909448UL + 1811UL), (2235191825397909448UL + 1812UL), (2235191825397909448UL + 1813UL), (2235191825397909448UL + 1814UL), (2235191825397909448UL + 1815UL), (2235191825397909448UL + 1816UL),
                            &____alias_loc_id_10, (unsigned)26, (unsigned)0, (unsigned)0, (2235191825397909448UL + 1953UL), (2235191825397909448UL + 1954UL), (2235191825397909448UL + 1955UL), (2235191825397909448UL + 1956UL), (2235191825397909448UL + 1957UL), (2235191825397909448UL + 1958UL), (2235191825397909448UL + 1959UL), (2235191825397909448UL + 1960UL), (2235191825397909448UL + 1961UL), (2235191825397909448UL + 1962UL), (2235191825397909448UL + 1963UL), (2235191825397909448UL + 1964UL), (2235191825397909448UL + 1965UL), (2235191825397909448UL + 1966UL), (2235191825397909448UL + 1967UL), (2235191825397909448UL + 1968UL), (2235191825397909448UL + 1969UL), (2235191825397909448UL + 1970UL), (2235191825397909448UL + 1976UL), (2235191825397909448UL + 1977UL), (2235191825397909448UL + 1978UL), (2235191825397909448UL + 1979UL), (2235191825397909448UL + 1981UL), (2235191825397909448UL + 1982UL), (2235191825397909448UL + 1983UL), (2235191825397909448UL + 2773UL),
                            &____alias_loc_id_11, (unsigned)26, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2304UL), (2235191825397909448UL + 2305UL), (2235191825397909448UL + 2306UL), (2235191825397909448UL + 2307UL), (2235191825397909448UL + 2308UL), (2235191825397909448UL + 2309UL), (2235191825397909448UL + 2310UL), (2235191825397909448UL + 2311UL), (2235191825397909448UL + 2312UL), (2235191825397909448UL + 2313UL), (2235191825397909448UL + 2314UL), (2235191825397909448UL + 2315UL), (2235191825397909448UL + 2316UL), (2235191825397909448UL + 2317UL), (2235191825397909448UL + 2318UL), (2235191825397909448UL + 2319UL), (2235191825397909448UL + 2320UL), (2235191825397909448UL + 2321UL), (2235191825397909448UL + 2327UL), (2235191825397909448UL + 2328UL), (2235191825397909448UL + 2329UL), (2235191825397909448UL + 2330UL), (2235191825397909448UL + 2332UL), (2235191825397909448UL + 2333UL), (2235191825397909448UL + 2334UL), (2235191825397909448UL + 2773UL),
                            &____alias_loc_id_12, (unsigned)6, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2640UL), (2235191825397909448UL + 2641UL), (2235191825397909448UL + 2642UL), (2235191825397909448UL + 2643UL), (2235191825397909448UL + 2965UL), (2235191825397909448UL + 2977UL),
                            &____alias_loc_id_13, (unsigned)3, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2714UL), (2235191825397909448UL + 2965UL), (2235191825397909448UL + 2980UL),
                            &____alias_loc_id_14, (unsigned)4, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2763UL), (2235191825397909448UL + 2764UL), (2235191825397909448UL + 2773UL), (2235191825397909448UL + 2976UL),
                            &____alias_loc_id_15, (unsigned)4, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2773UL), (2235191825397909448UL + 2813UL), (2235191825397909448UL + 2814UL), (2235191825397909448UL + 2976UL),
                            &____alias_loc_id_16, (unsigned)2, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2871UL), (2235191825397909448UL + 2872UL),
                            &____alias_loc_id_17, (unsigned)3, (unsigned)0, (unsigned)0, (2235191825397909448UL + 2910UL), (2235191825397909448UL + 2911UL), (2235191825397909448UL + 2912UL),
                            "del", (void *)(&del_npm), (void *)__null, 0, 4, 0UL, (2235191825397909448UL + 45UL), (2235191825397909448UL + 46UL), (2235191825397909448UL + 47UL), 0UL, 0,
                            "add", (void *)(&add_npm), (void *)__null, 0, 4, 0UL, (2235191825397909448UL + 99UL), (2235191825397909448UL + 100UL), (2235191825397909448UL + 101UL), 0UL, 0,
                            "calc_score", (void *)(&calc_score_npm), (void *)__null, 0, 6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0,
                            "get_matrix", (void *)(&get_matrix_npm), (void *)__null, 0, 3, (2235191825397909448UL + 564UL), (2235191825397909448UL + 565UL), 0UL, 0UL, 0,
                            "forward_pass", (void *)(&forward_pass_npm), (void *)__null, 0, 9, (2235191825397909448UL + 781UL), (2235191825397909448UL + 782UL), 0UL, 0UL, (2235191825397909448UL + 785UL), (2235191825397909448UL + 786UL), (2235191825397909448UL + 787UL), 0UL, 0UL, 0UL, 0,
                            "reverse_pass", (void *)(&reverse_pass_npm), (void *)__null, 0, 9, (2235191825397909448UL + 1011UL), (2235191825397909448UL + 1012UL), 0UL, 0UL, (2235191825397909448UL + 1015UL), (2235191825397909448UL + 1016UL), 0UL, 0UL, 0UL, 0UL, 0,
                            "diff", (void *)(&diff_npm), (void *)__null, 0, 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, 0UL, 0UL, 0UL, 0UL, 14, "del", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "add", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "calc_score", 6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "del", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "add", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "add", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "add", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "calc_score", 6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "calc_score", 6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "diff", 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, 0UL, 0UL, 0UL, 0UL, "diff", 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, 0UL, 0UL, 0UL, 0UL, "diff", 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, 0UL, 0UL, 0UL, 0UL, "del", 4, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, "diff", 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 1795UL), (2235191825397909448UL + 1796UL), (2235191825397909448UL + 1797UL), 0UL, 0UL, 0UL, 0UL, 0UL,
                            "tracepath", (void *)(&tracepath_npm), (void *)__null, 0, 7, 0UL, 0UL, (2235191825397909448UL + 1948UL), (2235191825397909448UL + 1949UL), (2235191825397909448UL + 1950UL), 0UL, 0UL, 0UL, 0,
                            "pairalign", (void *)(&pairalign_npm), (void *)__null, 0, 4, 0UL, 0UL, 0UL, 0UL, 0UL, 8, "get_matrix", 3, (2235191825397909448UL + 2964UL), (2235191825397909448UL + 2977UL), 0UL, 0UL, "fprintf", 2, (2235191825397909448UL + 2932UL), (2235191825397909448UL + 2994UL), 0UL, "log", 1, 0UL, 0UL, "forward_pass", 9, (2235191825397909448UL + 142UL), (2235191825397909448UL + 142UL), 0UL, 0UL, (2235191825397909448UL + 1971UL), (2235191825397909448UL + 1972UL), (2235191825397909448UL + 1975UL), 0UL, 0UL, 0UL, "reverse_pass", 9, (2235191825397909448UL + 142UL), (2235191825397909448UL + 142UL), 0UL, 0UL, (2235191825397909448UL + 1973UL), (2235191825397909448UL + 1974UL), 0UL, 0UL, 0UL, 0UL, "diff", 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 1981UL), (2235191825397909448UL + 1982UL), (2235191825397909448UL + 1980UL), 0UL, 0UL, 0UL, 0UL, 0UL, "tracepath", 7, 0UL, 0UL, (2235191825397909448UL + 1981UL), (2235191825397909448UL + 1982UL), (2235191825397909448UL + 1980UL), 0UL, 0UL, 0UL, "fprintf", 2, (2235191825397909448UL + 2932UL), (2235191825397909448UL + 2995UL), 0UL,
                            "pairalign_seq", (void *)(&pairalign_seq_npm), (void *)__null, 0, 4, 0UL, 0UL, 0UL, 0UL, 0UL, 6, "get_matrix", 3, (2235191825397909448UL + 2964UL), (2235191825397909448UL + 2977UL), 0UL, 0UL, "log", 1, 0UL, 0UL, "forward_pass", 9, (2235191825397909448UL + 142UL), (2235191825397909448UL + 142UL), 0UL, 0UL, (2235191825397909448UL + 2322UL), (2235191825397909448UL + 2323UL), (2235191825397909448UL + 2326UL), 0UL, 0UL, 0UL, "reverse_pass", 9, (2235191825397909448UL + 142UL), (2235191825397909448UL + 142UL), 0UL, 0UL, (2235191825397909448UL + 2324UL), (2235191825397909448UL + 2325UL), 0UL, 0UL, 0UL, 0UL, "diff", 13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, (2235191825397909448UL + 2332UL), (2235191825397909448UL + 2333UL), (2235191825397909448UL + 2331UL), 0UL, 0UL, 0UL, 0UL, 0UL, "tracepath", 7, 0UL, 0UL, (2235191825397909448UL + 2332UL), (2235191825397909448UL + 2333UL), (2235191825397909448UL + 2331UL), 0UL, 0UL, 0UL,
                            "init_matrix", (void *)(&init_matrix_npm), (void *)__null, 0, 0, 0UL, 1, "strlen", 1, (2235191825397909448UL + 2650UL), 0UL,
                            "pairalign_init", (void *)(&pairalign_init_npm), (void *)__null, 2, &____alias_loc_id_0, &____alias_loc_id_1, 1, (2235191825397909448UL + 2758UL), 0UL, 4, "bots_error", 2, 0UL, (2235191825397909448UL + 2996UL), 0UL, "init_matrix", 0, 0UL, "readseqs", 2, 0UL, (2235191825397909448UL + 2758UL), 0UL, "fprintf", 3, (2235191825397909448UL + 2932UL), (2235191825397909448UL + 2997UL), 0UL, 0UL,
                            "align_init", (void *)(&align_init_npm), (void *)__null, 0, 0, 0UL, 1, "malloc", 1, 0UL, (2235191825397909448UL + 2773UL),
                            "align", (void *)(&align_npm), (void *)__null, 0, 0, 0UL, 1, "pairalign", 4, 0UL, 0UL, 0UL, 0UL, 0UL,
                            "align_seq_init", (void *)(&align_seq_init_npm), (void *)__null, 0, 0, 0UL, 2, "malloc", 1, 0UL, (2235191825397909448UL + 2773UL), "malloc", 1, 0UL, (2235191825397909448UL + 2773UL),
                            "align_seq", (void *)(&align_seq_npm), (void *)__null, 0, 0, 0UL, 1, "pairalign_seq", 4, 0UL, 0UL, 0UL, 0UL, 0UL,
                            "align_end", (void *)(&align_end_npm), (void *)__null, 0, 0, 0UL, 0,
                            "align_verify", (void *)(&align_verify_npm), (void *)__null, 0, 0, 0UL, 1, "fprintf", 5, (2235191825397909448UL + 2932UL), (2235191825397909448UL + 2998UL), 0UL, 0UL, 0UL, 0UL,
                               "bots_error", (void **)&(____chimes_extern_func_bots_error),
                               "readseqs", (void **)&(____chimes_extern_func_readseqs),
                           "del", &(____chimes_does_checkpoint_del_npm),
                           "add", &(____chimes_does_checkpoint_add_npm),
                           "calc_score", &(____chimes_does_checkpoint_calc_score_npm),
                           "get_matrix", &(____chimes_does_checkpoint_get_matrix_npm),
                           "forward_pass", &(____chimes_does_checkpoint_forward_pass_npm),
                           "reverse_pass", &(____chimes_does_checkpoint_reverse_pass_npm),
                           "diff", &(____chimes_does_checkpoint_diff_npm),
                           "tracepath", &(____chimes_does_checkpoint_tracepath_npm),
                           "pairalign", &(____chimes_does_checkpoint_pairalign_npm),
                           "pairalign_seq", &(____chimes_does_checkpoint_pairalign_seq_npm),
                           "init_matrix", &(____chimes_does_checkpoint_init_matrix_npm),
                           "pairalign_init", &(____chimes_does_checkpoint_pairalign_init_npm),
                           "align_init", &(____chimes_does_checkpoint_align_init_npm),
                           "align", &(____chimes_does_checkpoint_align_npm),
                           "align_seq_init", &(____chimes_does_checkpoint_align_seq_init_npm),
                           "align_seq", &(____chimes_does_checkpoint_align_seq_npm),
                           "align_end", &(____chimes_does_checkpoint_align_end_npm),
                           "align_verify", &(____chimes_does_checkpoint_align_verify_npm),
                           "bots_error", &(____chimes_does_checkpoint_bots_error_npm),
                           "readseqs", &(____chimes_does_checkpoint_readseqs_npm),
                             (2235191825397909448UL + 2713UL), (2235191825397909448UL + 2758UL),
                             (2235191825397909448UL + 2961UL), (2235191825397909448UL + 2650UL),
                             (2235191825397909448UL + 573UL), (2235191825397909448UL + 787UL),
                             (2235191825397909448UL + 572UL), (2235191825397909448UL + 786UL),
                             (2235191825397909448UL + 571UL), (2235191825397909448UL + 785UL),
                             (2235191825397909448UL + 173UL), (2235191825397909448UL + 565UL),
                             (2235191825397909448UL + 172UL), (2235191825397909448UL + 564UL),
                             (2235191825397909448UL + 795UL), (2235191825397909448UL + 1016UL),
                             (2235191825397909448UL + 794UL), (2235191825397909448UL + 1015UL),
                             (2235191825397909448UL + 1968UL), (2235191825397909448UL + 2977UL),
                             (2235191825397909448UL + 1969UL), (2235191825397909448UL + 2964UL),
                             (2235191825397909448UL + 791UL), (2235191825397909448UL + 1012UL),
                             (2235191825397909448UL + 790UL), (2235191825397909448UL + 1011UL),
                             (2235191825397909448UL + 1029UL), (2235191825397909448UL + 1797UL),
                             (2235191825397909448UL + 3UL), (2235191825397909448UL + 46UL),
                             (2235191825397909448UL + 2UL), (2235191825397909448UL + 45UL),
                             (2235191825397909448UL + 4UL), (2235191825397909448UL + 47UL),
                             (2235191825397909448UL + 568UL), (2235191825397909448UL + 782UL),
                             (2235191825397909448UL + 140UL), (2235191825397909448UL + 142UL),
                             (2235191825397909448UL + 1805UL), (2235191825397909448UL + 1949UL),
                             (2235191825397909448UL + 567UL), (2235191825397909448UL + 781UL),
                             (2235191825397909448UL + 2320UL), (2235191825397909448UL + 2964UL),
                             (2235191825397909448UL + 2976UL), (2235191825397909448UL + 2773UL),
                             (2235191825397909448UL + 1806UL), (2235191825397909448UL + 1950UL),
                             (2235191825397909448UL + 1027UL), (2235191825397909448UL + 1795UL),
                             (2235191825397909448UL + 1804UL), (2235191825397909448UL + 1948UL),
                             (2235191825397909448UL + 2988UL), (2235191825397909448UL + 140UL),
                             (2235191825397909448UL + 2319UL), (2235191825397909448UL + 2977UL),
                             (2235191825397909448UL + 2993UL), (2235191825397909448UL + 2932UL),
                             (2235191825397909448UL + 51UL), (2235191825397909448UL + 99UL),
                             (2235191825397909448UL + 1028UL), (2235191825397909448UL + 1796UL),
                             (2235191825397909448UL + 53UL), (2235191825397909448UL + 101UL),
                             (2235191825397909448UL + 52UL), (2235191825397909448UL + 100UL),
                     "bots_verbose_mode_t", 0,
                             "align_verify", "_Z12align_verifyv", 0,
                             "pairalign", "_Z9pairaligniiii", 5, "get_matrix", "forward_pass", "reverse_pass", "diff", "tracepath",
                             "pairalign_seq", "_Z13pairalign_seqiiii", 5, "get_matrix", "forward_pass", "reverse_pass", "diff", "tracepath",
                             "calc_score", "_Z10calc_scoreiiiiii", 0,
                             "align_seq", "_Z9align_seqv", 1, "pairalign_seq",
                             "align", "_Z5alignv", 1, "pairalign",
                             "align_end", "_Z9align_endv", 0,
                             "align_init", "_Z10align_initv", 0,
                             "forward_pass", "_Z12forward_passPcS_iiPiS0_S0_ii", 0,
                             "add", "_Z3addiPiS_S_", 0,
                             "del", "_Z3deliPiS_S_", 0,
                             "init_matrix", "_Z11init_matrixv", 0,
                             "reverse_pass", "_Z12reverse_passPcS_iiPiS0_iii", 0,
                             "diff", "_Z4diffiiiiiiPiS_S_iiii", 14, "del", "add", "calc_score", "del", "add", "add", "add", "calc_score", "calc_score", "diff", "diff", "diff", "del", "diff",
                             "get_matrix", "_Z10get_matrixPiS_i", 0,
                             "align_seq_init", "_Z14align_seq_initv", 0,
                             "pairalign_init", "_Z14pairalign_initPc", 3, "bots_error", "init_matrix", "readseqs",
                             "tracepath", "_Z9tracepathiiPiS_S_ii", 0,
                        "pairalign|se1|0", 1, "pairalign",
                        "pairalign|sb1|0", 1, "pairalign",
                        "pairalign|displ|0", 1, "pairalign",
                        "pairalign_seq|se1|0", 1, "pairalign_seq",
                        "pairalign_seq|sb1|0", 1, "pairalign_seq",
                        "pairalign_seq|displ|0", 1, "pairalign_seq",
                        "pairalign_init|filename|0", 2, "readseqs", "bots_error",
        "del", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "add", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "calc_score", 0UL, (int)6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "del", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "add", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "add", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "add", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "calc_score", 0UL, (int)6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "calc_score", 0UL, (int)6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "diff", 0UL, (int)13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL, 0UL, 0UL, 0UL, 0UL,
        "diff", 0UL, (int)13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL, 0UL, 0UL, 0UL, 0UL,
        "diff", 0UL, (int)13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL, 0UL, 0UL, 0UL, 0UL,
        "del", 0UL, (int)4, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL,
        "diff", 0UL, (int)13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2235191825397911243UL, 2235191825397911244UL, 2235191825397911245UL, 0UL, 0UL, 0UL, 0UL,
        "get_matrix", 0UL, (int)3, 2235191825397912412UL, 2235191825397912425UL, 0UL,
        "forward_pass", 0UL, (int)9, 2235191825397909590UL, 2235191825397909590UL, 0UL, 0UL, 2235191825397911419UL, 2235191825397911420UL, 2235191825397911423UL, 0UL, 0UL,
        "reverse_pass", 0UL, (int)9, 2235191825397909590UL, 2235191825397909590UL, 0UL, 0UL, 2235191825397911421UL, 2235191825397911422UL, 0UL, 0UL, 0UL,
        "diff", 0UL, (int)13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2235191825397911429UL, 2235191825397911430UL, 2235191825397911428UL, 0UL, 0UL, 0UL, 0UL,
        "tracepath", 0UL, (int)7, 0UL, 0UL, 2235191825397911429UL, 2235191825397911430UL, 2235191825397911428UL, 0UL, 0UL,
        "get_matrix", 0UL, (int)3, 2235191825397912412UL, 2235191825397912425UL, 0UL,
        "forward_pass", 0UL, (int)9, 2235191825397909590UL, 2235191825397909590UL, 0UL, 0UL, 2235191825397911770UL, 2235191825397911771UL, 2235191825397911774UL, 0UL, 0UL,
        "reverse_pass", 0UL, (int)9, 2235191825397909590UL, 2235191825397909590UL, 0UL, 0UL, 2235191825397911772UL, 2235191825397911773UL, 0UL, 0UL, 0UL,
        "diff", 0UL, (int)13, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2235191825397911780UL, 2235191825397911781UL, 2235191825397911779UL, 0UL, 0UL, 0UL, 0UL,
        "tracepath", 0UL, (int)7, 0UL, 0UL, 2235191825397911780UL, 2235191825397911781UL, 2235191825397911779UL, 0UL, 0UL,
        "init_matrix", 0UL, (int)0,
        "pairalign", 0UL, (int)4, 0UL, 0UL, 0UL, 0UL,
        "pairalign_seq", 0UL, (int)4, 0UL, 0UL, 0UL, 0UL);
    register_global_var("global|amino_acid_order", "i8*", (void *)(&amino_acid_order), 8.0, 1, 0, (2235191825397909448UL + 2961UL), 0);
    register_global_var("global|amino_acid_codes", "i8*", (void *)(&amino_acid_codes), 8.0, 1, 0, (2235191825397909448UL + 2961UL), 0);
    register_global_var("global|gon250mt", "[276 x i32]", (void *)(&gon250mt), 1104.0, 0, 0, 0UL, 0);
    register_global_var("global|ktup", "i32", (void *)(&ktup), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|window", "i32", (void *)(&window), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|signif", "i32", (void *)(&signif), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_ktup", "i32", (void *)(&prot_ktup), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_window", "i32", (void *)(&prot_window), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_signif", "i32", (void *)(&prot_signif), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|gap_pos1", "i32", (void *)(&gap_pos1), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|gap_pos2", "i32", (void *)(&gap_pos2), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|mat_avscore", "i32", (void *)(&mat_avscore), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|nseqs", "i32", (void *)(&nseqs), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|max_aa", "i32", (void *)(&max_aa), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|seqlen_array", "i32*", (void *)(&seqlen_array), 8.0, 1, 0, (2235191825397909448UL + 2976UL), 0);
    register_global_var("global|def_aa_xref", "[33 x i32]", (void *)(&def_aa_xref), 132.0, 0, 0, 0UL, 0);
    register_global_var("global|bench_output", "i32*", (void *)(&bench_output), 8.0, 1, 0, (2235191825397909448UL + 2976UL), 0);
    register_global_var("global|seq_output", "i32*", (void *)(&seq_output), 8.0, 1, 0, (2235191825397909448UL + 2976UL), 0);
    register_global_var("global|gap_open", "double", (void *)(&gap_open), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|gap_extend", "double", (void *)(&gap_extend), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_gap_open", "double", (void *)(&prot_gap_open), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_gap_extend", "double", (void *)(&prot_gap_extend), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|pw_go_penalty", "double", (void *)(&pw_go_penalty), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|pw_ge_penalty", "double", (void *)(&pw_ge_penalty), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_pw_go_penalty", "double", (void *)(&prot_pw_go_penalty), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|prot_pw_ge_penalty", "double", (void *)(&prot_pw_ge_penalty), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|args", "i8**", (void *)(&args), 8.0, 1, 0, (2235191825397909448UL + 2988UL), 0);
    register_global_var("global|names", "i8**", (void *)(&names), 8.0, 1, 0, (2235191825397909448UL + 2988UL), 0);
    register_global_var("global|seq_array", "i8**", (void *)(&seq_array), 8.0, 1, 0, (2235191825397909448UL + 2988UL), 0);
    register_global_var("global|matrix", "[32 x [32 x i32]]", (void *)(&matrix), 4096.0, 0, 0, 0UL, 0);
    register_constant(2235191825397909448UL + 0UL, (void *)amino_acid_order, 24);
    register_constant(2235191825397909448UL + 1UL, (void *)amino_acid_codes, 26);
    return 0;
}

static const int __libchimes_module_init = module_init();
