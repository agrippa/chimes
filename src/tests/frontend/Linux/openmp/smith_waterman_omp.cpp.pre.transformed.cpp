# 1 "smith_waterman_omp.cpp.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "smith_waterman_omp.cpp.pre.transformed.cpp"
extern char __executable_start;
extern char __etext;
static int ____chimes_does_checkpoint_GUID_DIAG_npm = 1;
static int ____chimes_does_checkpoint_GUID_RCOL_npm = 1;
static int ____chimes_does_checkpoint_GUID_BROW_npm = 1;
static int ____chimes_does_checkpoint_TILE_ROW_npm = 1;
static int ____chimes_does_checkpoint_TILE_COL_npm = 1;
static int ____chimes_does_checkpoint_GUID_KIND_npm = 1;
static int ____chimes_does_checkpoint_PUT_npm = 1;
static int ____chimes_does_checkpoint_PUT_DIAG_npm = 1;
static int ____chimes_does_checkpoint_PUT_RCOL_npm = 1;
static int ____chimes_does_checkpoint_PUT_BROW_npm = 1;
static int ____chimes_does_checkpoint_char_mapping_npm = 1;
static int ____chimes_does_checkpoint_print_matrix_npm = 1;
static int ____chimes_does_checkpoint_random_init_npm = 1;
static int ____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm = 1;
static int ____chimes_does_checkpoint_read_file_npm = 1;
static int ____chimes_does_checkpoint_add_tile_to_run_npm = 1;
static int ____chimes_does_checkpoint_pop_next_tile_npm = 1;
static int ____chimes_does_checkpoint_task_func_npm = 1;


static int ____must_manage_GUID_BROW = 2;
static int ____must_manage_task_func = 2;
static int ____must_manage_clear_whitespaces_do_mapping = 2;
static int ____must_manage_GUID_KIND = 2;
static int ____must_manage_GUID_DIAG = 2;
static int ____must_manage_print_matrix = 2;
static int ____must_manage_PUT_BROW = 2;
static int ____must_manage_pop_next_tile = 2;
static int ____must_manage_PUT_RCOL = 2;
static int ____must_manage_char_mapping = 2;
static int ____must_manage_GUID_RCOL = 2;
static int ____must_manage_read_file = 2;
static int ____must_manage_random_init = 2;
static int ____must_manage_PUT_DIAG = 2;
static int ____must_manage_PUT = 2;
static int ____must_manage_add_tile_to_run = 2;
static int ____must_manage_TILE_ROW = 2;
static int ____must_manage_TILE_COL = 2;

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
# 1 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
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

extern void *translate_fptr(void *fptr, int lbl, size_t return_alias,
        unsigned loc_id, int n_params, ...);
extern void calling_npm(const char *name, size_t return_alias, unsigned loc_id,
        int n_params, ...);
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned loc_id, unsigned naliases, ...);
extern int get_next_call();
extern int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs,
        int n_provided_npm_functions, int n_external_npm_functions,
        int n_npm_conditionals, int nstructs, ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern void register_text(void *start, size_t len);
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

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned relation,
        unsigned parent, unsigned threads_in_region,
        unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 67 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
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
# 2 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
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
# 3 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
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
# 4 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 5 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
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
# 6 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/omp.h" 1 3 4
# 34 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/omp.h" 3 4
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
# 7 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
# 7 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 8 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*fp)(void *));
# 10 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp" 2
# 25 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 25 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
typedef struct _tile {
# 26 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int row;
# 27 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int col;
# 28 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
} tile;
# 29 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 30 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
typedef struct _tiles_to_run {
# 31 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    tile *q;
# 32 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    tile *base;
# 33 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int capacity;
# 34 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int length;
# 35 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
} tiles_to_run;
# 36 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 37 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
typedef enum {
# 38 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 DIAG_KIND,
# 39 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 RCOL_KIND,
# 40 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 BROW_KIND,
# 41 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 NUM_DEPS
# 42 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
} TILE_DEPS;
# 43 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 44 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
signed char* string_1;
# 45 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
signed char* string_2;
# 46 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 47 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int strlen_1;
# 48 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int strlen_2;
# 49 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 50 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int tile_width;
# 51 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int tile_height;
# 52 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 53 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int n_tiles_x;
# 54 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int n_tiles_y;
# 55 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 56 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int ** tile_edges_x;
# 57 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int ** tile_edges_y;
# 58 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int * tile_diag;
# 59 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int * put_counts;
# 60 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int *** worker_tiles;
# 61 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int * max_buffer;
# 62 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int * temp_buffer;
# 63 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int max_size;
# 64 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
volatile int done;
# 65 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 66 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int nthreads;
# 67 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
struct timeval begin,end;
# 68 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 69 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int dsizes[NUM_DEPS];
# 70 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 71 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int GUID_DIAG_npm(int r, int c);
int GUID_DIAG_quick(int r, int c); int GUID_DIAG(int r, int c);
int GUID_RCOL_npm(int r, int c);
int GUID_DIAG_resumable(int r, int c) {const int ____chimes_did_disable0 = new_stack((void *)(&GUID_DIAG), "GUID_DIAG", &____must_manage_GUID_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0); return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
# 72 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int GUID_RCOL_quick(int r, int c); int GUID_RCOL(int r, int c);
int GUID_BROW_npm(int r, int c);
int GUID_RCOL_resumable(int r, int c) {const int ____chimes_did_disable1 = new_stack((void *)(&GUID_RCOL), "GUID_RCOL", &____must_manage_GUID_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1); return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
# 73 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int GUID_BROW_quick(int r, int c); int GUID_BROW(int r, int c);
int GUID_BROW_resumable(int r, int c) {const int ____chimes_did_disable2 = new_stack((void *)(&GUID_BROW), "GUID_BROW", &____must_manage_GUID_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2); return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
# 74 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 75 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int TILE_ROW_npm(int guid);
int TILE_ROW_quick(int guid); int TILE_ROW(int guid);
int TILE_COL_npm(int guid);
int TILE_ROW_resumable(int guid) {const int ____chimes_did_disable3 = new_stack((void *)(&TILE_ROW), "TILE_ROW", &____must_manage_TILE_ROW, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3); return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }
# 76 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int TILE_COL_quick(int guid); int TILE_COL(int guid);
int TILE_COL_resumable(int guid) {const int ____chimes_did_disable4 = new_stack((void *)(&TILE_COL), "TILE_COL", &____must_manage_TILE_COL, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4); return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }
# 77 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 78 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int GUID_KIND_npm(int guid);
int GUID_KIND_quick(int guid); int GUID_KIND(int guid);
int GUID_KIND_resumable(int guid) {const int ____chimes_did_disable5 = new_stack((void *)(&GUID_KIND), "GUID_KIND", &____must_manage_GUID_KIND, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5); return guid / (n_tiles_x * n_tiles_y); }
# 225 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 225 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int PUT_npm(int row, int col);
int PUT_quick(int row, int col); int PUT(int row, int col);
int PUT_resumable(int row, int col) {const int ____chimes_did_disable6 = new_stack((void *)(&PUT), "PUT", &____must_manage_PUT, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 226 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y - 1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0;; };
# 227 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x - 1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0;; };
# 228 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 229 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int success; success = (0) ;
# 230 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int await_tile; await_tile = (({ calling_npm("GUID_DIAG", 0UL, 0, 2, 0UL, 0UL); GUID_DIAG_npm(row, col); })) ;
# 231 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 232 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ((put_counts[await_tile] < NUM_DEPS) ? static_cast<void> (0) : __assert_fail ("put_counts[await_tile] < NUM_DEPS", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 233, __PRETTY_FUNCTION__));
# 234 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return success;
# 240 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}
# 241 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 242 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int PUT_DIAG_npm(int row, int col);
int PUT_DIAG_quick(int row, int col); int PUT_DIAG(int row, int col);
int PUT_RCOL_npm(int row, int col);
int PUT_DIAG_resumable(int row, int col) {const int ____chimes_did_disable7 = new_stack((void *)(&PUT_DIAG), "PUT_DIAG", &____must_manage_PUT_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7); return ({ calling_npm("PUT", 0UL, 0, 2, 0UL, 0UL); PUT_npm(row+1, col+1); }); }
# 243 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int PUT_RCOL_quick(int row, int col); int PUT_RCOL(int row, int col);
int PUT_BROW_npm(int row, int col);
int PUT_RCOL_resumable(int row, int col) {const int ____chimes_did_disable8 = new_stack((void *)(&PUT_RCOL), "PUT_RCOL", &____must_manage_PUT_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8); return ({ calling_npm("PUT", 0UL, 0, 2, 0UL, 0UL); PUT_npm(row, col+1); }); }
# 244 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int PUT_BROW_quick(int row, int col); int PUT_BROW(int row, int col);
int PUT_BROW_resumable(int row, int col) {const int ____chimes_did_disable9 = new_stack((void *)(&PUT_BROW), "PUT_BROW", &____must_manage_PUT_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9); return ({ calling_npm("PUT", 0UL, 0, 2, 0UL, 0UL); PUT_npm(row+1, col); }); }
# 245 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 246 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};
# 247 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 248 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
signed char char_mapping_npm ( char c );
signed char char_mapping_quick ( char c ); signed char char_mapping ( char c );
signed char char_mapping_resumable ( char c ) {const int ____chimes_did_disable10 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 249 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 250 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10); return to_be_returned;
# 258 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}
# 259 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 260 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns );
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ); void print_matrix ( int** matrix, int n_rows, int n_columns );
void print_matrix_resumable ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable11 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(2727067958040902782UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 261 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int i; int j; ;
# 262 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 265 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        fprintf(stdout, "\n");
# 267 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout,"--------------------------------\n");
# 269 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_12, ____chimes_did_disable11); }
# 270 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 271 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
static char alignment_score_matrix[5][5] =
# 272 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
{
# 273 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    {-1,-1,-1,-1,-1},
# 274 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    {-1,2,-4,-2,-4},
# 275 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    {-1,-4, 2,-4,-2},
# 276 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    {-1,-2,-4, 2,-4},
# 277 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    {-1,-4,-2,-4, 2}
# 278 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
};
# 279 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 280 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
static void random_init_npm(signed char *s, unsigned long long len);
static void random_init_quick(signed char *s, unsigned long long len); static void random_init(signed char *s, unsigned long long len);
static void random_init_resumable(signed char *s, unsigned long long len) {const int ____chimes_did_disable12 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(2727067958040904170UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 281 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 282 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         int r; r = (rand() % 4) ;
# 283 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        switch (r) {
# 284 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (0):
# 285 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'A';
# 286 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 287 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (1):
# 288 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'C';
# 289 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 290 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (2):
# 291 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'G';
# 292 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 293 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (3):
# 294 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'T';
# 295 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 296 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 297 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    } }
# 298 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_19, ____chimes_did_disable12); }
# 299 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 300 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ); size_t clear_whitespaces_do_mapping ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_resumable ( signed char* buffer, long size ) {const int ____chimes_did_disable13 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(2727067958040902829UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 301 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 302 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 303 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 304 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 305 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 306 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 307 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 308 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0UL, 0, 1, 0UL); char_mapping_npm(curr_char); });
# 309 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 310 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 311 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 312 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 313 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13); return non_ws_index;
# 314 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}
# 315 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 316 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars );
signed char* read_file_quick( FILE* file, size_t* n_chars ); signed char* read_file( FILE* file, size_t* n_chars );
signed char* read_file_resumable( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable14 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(2727067958040902871UL), (size_t)(2727067958040902872UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 317 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 318 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     long file_size; file_size = (ftell(file)) ;
# 319 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 320 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 321 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 2727067958040902852UL, 0, 0)) ;
# 322 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 323 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 324 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 325 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 326 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 327 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0UL, 0, 2, 2727067958040902852UL, 0UL); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 328 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(true, 2727067958040902852UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14); return file_buffer;
# 329 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}
# 330 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 331 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
void add_tile_to_run_npm(int row, int col, tiles_to_run *q);
void add_tile_to_run_quick(int row, int col, tiles_to_run *q); void add_tile_to_run(int row, int col, tiles_to_run *q);
void add_tile_to_run_resumable(int row, int col, tiles_to_run *q) {const int ____chimes_did_disable15 = new_stack((void *)(&add_tile_to_run), "add_tile_to_run", &____must_manage_add_tile_to_run, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(2727067958040902904UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 332 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ((q->length < q->capacity) ? static_cast<void> (0) : __assert_fail ("q->length < q->capacity", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 332, __PRETTY_FUNCTION__));
# 333 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 334 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 335 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 336 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "add_tile_to_run", &____must_manage_add_tile_to_run, ____alias_loc_id_15, ____chimes_did_disable15); }
# 337 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 338 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
tile* pop_next_tile_npm(tiles_to_run *q);
tile* pop_next_tile_quick(tiles_to_run *q); tile* pop_next_tile(tiles_to_run *q);
tile* pop_next_tile_resumable(tiles_to_run *q) {const int ____chimes_did_disable16 = new_stack((void *)(&pop_next_tile), "pop_next_tile", &____must_manage_pop_next_tile, 1, 0, (size_t)(2727067958040902950UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 339 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ((q->length >= 0) ? static_cast<void> (0) : __assert_fail ("q->length >= 0", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 339, __PRETTY_FUNCTION__));
# 340 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 341 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 2727067958040903965UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return __null;
# 342 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    } else {
# 343 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         tile *next; next = (q->q) ;
# 344 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 345 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 346 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 2727067958040903965UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return next;
# 347 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 348 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 2727067958040903965UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); }
# 349 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 350 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
void task_func_npm(int i, int j, tiles_to_run *next);
void task_func_quick(int i, int j, tiles_to_run *next); void task_func(int i, int j, tiles_to_run *next);
void task_func_resumable(int i, int j, tiles_to_run *next) {const int ____chimes_did_disable17 = new_stack((void *)(&task_func), "task_func", &____must_manage_task_func, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(2727067958040903412UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 351 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int ii; int jj; ;
# 352 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int threadId; threadId = (omp_get_thread_num()) ;
# 353 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int **local_matrix; local_matrix = (worker_tiles[threadId]) ;
# 354 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 355 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int diag_index; diag_index = (((n_tiles_y - 1) + (j - i))) ;
# 356 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int *diag; diag = (&tile_diag[diag_index]) ;
# 357 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_y; tile_edge_y = (tile_edges_y[i]) ;
# 358 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_x; tile_edge_x = (tile_edges_x[j]) ;
# 359 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 360 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 361 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 362 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width + 1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii - 1]; };
# 364 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 365 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii - 1]; };
# 367 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 368 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 369 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 370 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_1; char_from_1 = (string_1[(j - 1) * tile_width + jj - 1]) ;
# 371 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_2; char_from_2 = (string_2[(i - 1) * tile_height + ii - 1]) ;
# 372 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 373 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int diag_score; diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 374 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int left_score; left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 375 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int top_score; top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 376 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 378 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 379 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  }
# 380 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 381 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 382 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 383 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { tile_edge_y[ii - 1] = local_matrix[ii][tile_width]; };
# 385 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width + 1; ++ii) { tile_edge_x[ii - 1] = local_matrix[tile_height][ii]; };
# 387 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 388 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {; bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread();
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 390 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        {
# 391 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 392 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(i, j); })) ;
# 393 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 394 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 395 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 396 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0UL, 0, 3, 0UL, 0UL, 2727067958040903412UL); add_tile_to_run_npm(row, col, next); });
# 397 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 398 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 399 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 400 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 401 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_RCOL", 0UL, 0, 2, 0UL, 0UL); PUT_RCOL_npm(i, j); })) ;
# 402 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 403 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i) ;
# 404 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 405 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0UL, 0, 3, 0UL, 0UL, 2727067958040903412UL); add_tile_to_run_npm(row, col, next); });
# 406 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 407 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 408 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 409 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 410 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_BROW", 0UL, 0, 2, 0UL, 0UL); PUT_BROW_npm(i, j); })) ;
# 411 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 412 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 413 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j) ;
# 414 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0UL, 0, 3, 0UL, 0UL, 2727067958040903412UL); add_tile_to_run_npm(row, col, next); });
# 415 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 416 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 417 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        } reenable_current_thread(____chimes_disable0);
# 418 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 419 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 420 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 421 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 422 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 423 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "task_func", &____must_manage_task_func, ____alias_loc_id_17, ____chimes_did_disable17); }
# 424 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 425 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
int main_quick ( int argc, char* argv[] ); int main ( int argc, char* argv[] );
int main_resumable ( int argc, char* argv[] ) {const int ____chimes_did_disable18 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(2727067958040904117UL)) ; tiles_to_run *tmp;
bool done;
tile *mine;
tiles_to_run *next;
tiles_to_run *curr;
int result_col;
int result_row;
int j;
int i;
 register_stack_vars(9, "main|tmp|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|done|0", (int *)0x0, "i8", (void *)(&done), (size_t)1, 0, 0, 0, "main|mine|0", (int *)0x0, "%struct._tile*", (void *)(&mine), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|result_col|0", (int *)0x0, "i32", (void *)(&result_col), (size_t)4, 0, 0, 0, "main|result_row|0", (int *)0x0, "i32", (void *)(&result_row), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(49): { goto call_lbl_49; } case(50): { goto call_lbl_50; } case(34): { goto call_lbl_34; } default: { chimes_error(); } } } ; ;
# 426 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
      int level; ;; { call_lbl_49: unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(49, &____chimes_region_id0, 1, &done);
# 427 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 429 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &done); ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 430 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  nthreads = omp_get_num_threads();
# 431 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0); }
# 432 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 433 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if ( argc < 5 ) {
# 434 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        fprintf(stderr, "Usage: %s length1 length2 tileWidth tileHeight\n", argv[0]);
# 435 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        exit(1);
# 436 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 437 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 438 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);
# 439 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 440 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length1; length1 = (strtoull(argv[1], __null, 10)) ;
# 441 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length2; length2 = (strtoull(argv[2], __null, 10)) ;
# 442 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 443 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    tile_width = (int) atoi (argv[3]);
# 444 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    tile_height = (int) atoi (argv[4]);
# 445 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 446 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_1; n_char_in_file_1 = (length1) ;
# 447 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_2; n_char_in_file_2 = (length2) ;
# 448 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 449 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 2727067958040903134UL, 0, 0);
# 450 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 2727067958040903134UL, 0, 0);
# 451 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 452 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0UL, 0, 2, 2727067958040903134UL, 0UL); random_init_npm(string_1, n_char_in_file_1); });
# 453 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0UL, 0, 2, 2727067958040903134UL, 0UL); random_init_npm(string_2, n_char_in_file_2); });
# 454 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 455 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile width  %d\n", tile_width);
# 456 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile height %d\n", tile_height);
# 457 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 458 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_1 % tile_width) { fprintf(stderr, "String1 length should be multiple of tile width\n"); exit(1); }
# 459 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_2 % tile_height) { fprintf(stderr, "String2 length should be multiple of tile height\n"); exit(1); }
# 460 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 461 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    n_tiles_x = n_char_in_file_1/tile_width;
# 462 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    n_tiles_y = n_char_in_file_2/tile_height;
# 463 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 464 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);
# 465 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 466 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    strlen_1 = n_char_in_file_1;
# 467 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    strlen_2 = n_char_in_file_2;
# 468 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 469 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 470 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 471 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 472 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 n_tiles_x++;
# 473 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 n_tiles_y++;
# 474 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 475 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int num_tiles; num_tiles = (n_tiles_x * n_tiles_y) ;
# 476 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 put_counts = (int*)malloc_wrapper(sizeof(int)*num_tiles, 2727067958040902644UL, 0, 0);
# 477 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i=0; i<num_tiles; i++) {
# 478 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  put_counts[i] = 0;
# 479 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 480 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 481 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 482 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int num_diags; num_diags = (n_tiles_x + n_tiles_y - 1) ;
# 483 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*num_diags, 2727067958040902644UL, 0, 0);
# 484 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_diag[((n_tiles_y - 1) + (0 - 0))] = 0;
# 485 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 ({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(0, 0); });
# 486 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 487 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 488 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (i - 0))] = -1*(i*tile_width);
# 489 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(0, i); });
# 490 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 491 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 492 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (0 - i))] = -1*(i*tile_height);
# 493 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(i, 0); });
# 494 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 495 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 496 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 497 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 2727067958040903043UL, 1, 0);
# 498 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 499 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 2727067958040903045UL, 0, 0);
# 500 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1 * ((i - 1) * tile_height + j); };
# 502 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_RCOL", 0UL, 0, 2, 0UL, 0UL); PUT_RCOL_npm(i, 0); });
# 503 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 504 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 505 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 506 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 2727067958040903043UL, 1, 0);
# 507 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 508 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 2727067958040903045UL, 0, 0);
# 509 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1 * ((i - 1) * tile_width + j); };
# 511 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_BROW", 0UL, 0, 2, 0UL, 0UL); PUT_BROW_npm(0, i); });
# 512 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 513 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 514 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 515 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 2727067958040903022UL, 1, 0);
# 516 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 517 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 2727067958040903234UL, 1, 0);
# 518 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height + 1; j++) { worker_tiles[i][j] = (int *)malloc_wrapper(sizeof(int) * (tile_width + 1), 2727067958040903236UL, 0, 0); };
# 520 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 521 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 522 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 523 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 dsizes[DIAG_KIND] = 1;
# 524 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 dsizes[RCOL_KIND] = tile_height;
# 525 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 dsizes[BROW_KIND] = tile_width;
# 526 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 527 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 max_size = dsizes[0];
# 528 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < NUM_DEPS; i++) { if (max_size < dsizes[i]) max_size = dsizes[i];; };
# 530 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 max_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 2727067958040902644UL, 0, 0);
# 531 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 temp_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 2727067958040902644UL, 0, 0);
# 561 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 561 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    result_row = (n_tiles_y - 1) ;
# 562 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    result_col = (n_tiles_x - 1) ;
# 563 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 done = 0;
# 564 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 565 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&begin,0);
# 566 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 567 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
       curr = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 2727067958040903869UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 568 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 2727067958040903878UL, 0, 1, (int)sizeof(struct _tile), 0);
# 569 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->q = curr->base;
# 570 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->capacity = n_tiles_y * n_tiles_x;
# 571 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->length = 1;
# 572 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].row = 1;
# 573 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].col = 1;
# 574 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 575 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
       next = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 2727067958040903869UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 576 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 2727067958040903878UL, 0, 1, (int)sizeof(struct _tile), 0);
# 577 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->q = next->base;
# 578 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->capacity = n_tiles_y * n_tiles_x;
# 579 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->length = 0;
# 580 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 581 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    while (curr->length > 0) {
# 582 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
           mine = (__null); { call_lbl_50: unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(50, &____chimes_region_id1, 2, &done, &mine); ;
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel firstprivate(mine) firstprivate(done)
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 584 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &done, &mine); ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 585 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
               done = (false) ;
# 586 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 587 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            while (!done) {; bool ____chimes_disable3; ____chimes_disable3 = disable_current_thread();
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 589 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                {
# 590 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    mine = ({ calling_npm("pop_next_tile", 2727067958040903965UL, 0, 1, 2727067958040903869UL); pop_next_tile_npm(curr); });
# 591 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                } reenable_current_thread(____chimes_disable3);
# 592 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                done = (mine == __null);
# 593 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 594 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (!done) {
# 595 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("task_func", 0UL, 0, 3, 0UL, 0UL, 2727067958040903869UL); task_func_npm(mine->row, mine->col, next); });
# 596 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 597 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 598 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1); }
# 599 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 600 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
           tmp = (curr) ;
# 601 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        curr = next;
# 602 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        next = tmp;
# 603 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 604 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        curr->q = curr->base;
# 605 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 606 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        next->length = 0;
# 607 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 608 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 609 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         call_lbl_34: checkpoint_transformed(34, ____alias_loc_id_0);
# 610 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 611 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 612 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 613 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&end,0);
# 614 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     int score; score = (tile_diag[((n_tiles_y - 1) + (result_col - result_row))]) ;
# 615 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "score: %d\n", score);
# 616 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 617 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 618 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 619 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height + 1; j++) { free_wrapper(worker_tiles[i][j], 2727067958040903236UL); };
# 621 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  free_wrapper(worker_tiles[i], 2727067958040903234UL);
# 622 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 623 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(worker_tiles, 2727067958040903022UL);
# 624 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 625 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 2727067958040903045UL); };
# 627 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_y, 2727067958040903043UL);
# 628 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 629 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 2727067958040903045UL); };
# 631 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_x, 2727067958040903043UL);
# 632 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 633 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_diag, 2727067958040902644UL);
# 634 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 635 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_1, 2727067958040903134UL);
# 636 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_2, 2727067958040903134UL);
# 637 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 638 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18); return 0;
# 639 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}
int GUID_DIAG_quick(int r, int c) {const int ____chimes_did_disable0 = new_stack((void *)(&GUID_DIAG), "GUID_DIAG", &____must_manage_GUID_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0); return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_DIAG(int r, int c) { return (____chimes_replaying ? GUID_DIAG_resumable(r, c) : GUID_DIAG_quick(r, c)); }

int GUID_RCOL_quick(int r, int c) {const int ____chimes_did_disable1 = new_stack((void *)(&GUID_RCOL), "GUID_RCOL", &____must_manage_GUID_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1); return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_RCOL(int r, int c) { return (____chimes_replaying ? GUID_RCOL_resumable(r, c) : GUID_RCOL_quick(r, c)); }

int GUID_BROW_quick(int r, int c) {const int ____chimes_did_disable2 = new_stack((void *)(&GUID_BROW), "GUID_BROW", &____must_manage_GUID_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2); return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_BROW(int r, int c) { return (____chimes_replaying ? GUID_BROW_resumable(r, c) : GUID_BROW_quick(r, c)); }

int TILE_ROW_quick(int guid) {const int ____chimes_did_disable3 = new_stack((void *)(&TILE_ROW), "TILE_ROW", &____must_manage_TILE_ROW, 1, 0, (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3); return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }

int TILE_ROW(int guid) { return (____chimes_replaying ? TILE_ROW_resumable(guid) : TILE_ROW_quick(guid)); }

int TILE_COL_quick(int guid) {const int ____chimes_did_disable4 = new_stack((void *)(&TILE_COL), "TILE_COL", &____must_manage_TILE_COL, 1, 0, (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4); return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }

int TILE_COL(int guid) { return (____chimes_replaying ? TILE_COL_resumable(guid) : TILE_COL_quick(guid)); }

int GUID_KIND_quick(int guid) {const int ____chimes_did_disable5 = new_stack((void *)(&GUID_KIND), "GUID_KIND", &____must_manage_GUID_KIND, 1, 0, (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5); return guid / (n_tiles_x * n_tiles_y); }

int GUID_KIND(int guid) { return (____chimes_replaying ? GUID_KIND_resumable(guid) : GUID_KIND_quick(guid)); }

int PUT_quick(int row, int col) {const int ____chimes_did_disable6 = new_stack((void *)(&PUT), "PUT", &____must_manage_PUT, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 226 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y - 1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0;; };
# 227 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x - 1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0;; };
# 228 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 229 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int success; success = (0) ;
# 230 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int await_tile; await_tile = (({ calling_npm("GUID_DIAG", 0UL, 0, 2, 0UL, 0UL); GUID_DIAG_npm(row, col); })) ;
# 231 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 232 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ((put_counts[await_tile] < NUM_DEPS) ? static_cast<void> (0) : __assert_fail ("put_counts[await_tile] < NUM_DEPS", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 233, __PRETTY_FUNCTION__));
# 234 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return success;
# 240 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

int PUT(int row, int col) { return (____chimes_replaying ? PUT_resumable(row, col) : PUT_quick(row, col)); }

int PUT_DIAG_quick(int row, int col) {const int ____chimes_did_disable7 = new_stack((void *)(&PUT_DIAG), "PUT_DIAG", &____must_manage_PUT_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7); return ({ calling_npm("PUT", 0UL, 0, 2, 0UL, 0UL); PUT_npm(row+1, col+1); }); }

int PUT_DIAG(int row, int col) { return (____chimes_replaying ? PUT_DIAG_resumable(row, col) : PUT_DIAG_quick(row, col)); }

int PUT_RCOL_quick(int row, int col) {const int ____chimes_did_disable8 = new_stack((void *)(&PUT_RCOL), "PUT_RCOL", &____must_manage_PUT_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8); return ({ calling_npm("PUT", 0UL, 0, 2, 0UL, 0UL); PUT_npm(row, col+1); }); }

int PUT_RCOL(int row, int col) { return (____chimes_replaying ? PUT_RCOL_resumable(row, col) : PUT_RCOL_quick(row, col)); }

int PUT_BROW_quick(int row, int col) {const int ____chimes_did_disable9 = new_stack((void *)(&PUT_BROW), "PUT_BROW", &____must_manage_PUT_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9); return ({ calling_npm("PUT", 0UL, 0, 2, 0UL, 0UL); PUT_npm(row+1, col); }); }

int PUT_BROW(int row, int col) { return (____chimes_replaying ? PUT_BROW_resumable(row, col) : PUT_BROW_quick(row, col)); }

signed char char_mapping_quick ( char c ) {const int ____chimes_did_disable10 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; ; ;
# 249 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 250 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10); return to_be_returned;
# 258 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

signed char char_mapping ( char c ) { return (____chimes_replaying ? char_mapping_resumable(c) : char_mapping_quick(c)); }

void print_matrix_quick ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable11 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(2727067958040902782UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 261 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int i; int j; ;
# 262 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 265 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        fprintf(stdout, "\n");
# 267 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout,"--------------------------------\n");
# 269 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_12, ____chimes_did_disable11); }

void print_matrix ( int** matrix, int n_rows, int n_columns ) { (____chimes_replaying ? print_matrix_resumable(matrix, n_rows, n_columns) : print_matrix_quick(matrix, n_rows, n_columns)); }

static void random_init_quick(signed char *s, unsigned long long len) {const int ____chimes_did_disable12 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(2727067958040904170UL), (size_t)(0UL)) ; ; ;
# 281 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 282 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         int r; r = (rand() % 4) ;
# 283 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        switch (r) {
# 284 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (0):
# 285 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'A';
# 286 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 287 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (1):
# 288 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'C';
# 289 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 290 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (2):
# 291 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'G';
# 292 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 293 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (3):
# 294 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'T';
# 295 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 296 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 297 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    } }
# 298 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_19, ____chimes_did_disable12); }

static void random_init(signed char *s, unsigned long long len) { (____chimes_replaying ? random_init_resumable(s, len) : random_init_quick(s, len)); }

size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ) {const int ____chimes_did_disable13 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(2727067958040902829UL), (size_t)(0UL)) ; ; ;
# 301 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 302 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 303 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 304 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 305 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 306 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 307 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 308 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0UL, 0, 1, 0UL); char_mapping_npm(curr_char); });
# 309 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 310 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 311 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 312 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 313 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13); return non_ws_index;
# 314 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) { return (____chimes_replaying ? clear_whitespaces_do_mapping_resumable(buffer, size) : clear_whitespaces_do_mapping_quick(buffer, size)); }

signed char* read_file_quick( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable14 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(2727067958040902871UL), (size_t)(2727067958040902872UL)) ; ; ;
# 317 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 318 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     long file_size; file_size = (ftell(file)) ;
# 319 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 320 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 321 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 2727067958040902852UL, 0, 0)) ;
# 322 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 323 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 324 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 325 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 326 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 327 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0UL, 0, 2, 2727067958040902852UL, 0UL); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 328 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(true, 2727067958040902852UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14); return file_buffer;
# 329 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

signed char* read_file( FILE* file, size_t* n_chars ) { return (____chimes_replaying ? read_file_resumable(file, n_chars) : read_file_quick(file, n_chars)); }

void add_tile_to_run_quick(int row, int col, tiles_to_run *q) {const int ____chimes_did_disable15 = new_stack((void *)(&add_tile_to_run), "add_tile_to_run", &____must_manage_add_tile_to_run, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(2727067958040902904UL)) ; ; ;
# 332 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ((q->length < q->capacity) ? static_cast<void> (0) : __assert_fail ("q->length < q->capacity", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 332, __PRETTY_FUNCTION__));
# 333 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 334 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 335 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 336 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "add_tile_to_run", &____must_manage_add_tile_to_run, ____alias_loc_id_15, ____chimes_did_disable15); }

void add_tile_to_run(int row, int col, tiles_to_run *q) { (____chimes_replaying ? add_tile_to_run_resumable(row, col, q) : add_tile_to_run_quick(row, col, q)); }

tile* pop_next_tile_quick(tiles_to_run *q) {const int ____chimes_did_disable16 = new_stack((void *)(&pop_next_tile), "pop_next_tile", &____must_manage_pop_next_tile, 1, 0, (size_t)(2727067958040902950UL)) ; ; ;
# 339 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ((q->length >= 0) ? static_cast<void> (0) : __assert_fail ("q->length >= 0", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 339, __PRETTY_FUNCTION__));
# 340 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 341 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 2727067958040903965UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return __null;
# 342 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    } else {
# 343 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         tile *next; next = (q->q) ;
# 344 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 345 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 346 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 2727067958040903965UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return next;
# 347 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 348 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 2727067958040903965UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); }

tile* pop_next_tile(tiles_to_run *q) { return (____chimes_replaying ? pop_next_tile_resumable(q) : pop_next_tile_quick(q)); }

void task_func_quick(int i, int j, tiles_to_run *next) {const int ____chimes_did_disable17 = new_stack((void *)(&task_func), "task_func", &____must_manage_task_func, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(2727067958040903412UL)) ; ; ;
# 351 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int ii; int jj; ;
# 352 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int threadId; threadId = (omp_get_thread_num()) ;
# 353 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int **local_matrix; local_matrix = (worker_tiles[threadId]) ;
# 354 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 355 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int diag_index; diag_index = (((n_tiles_y - 1) + (j - i))) ;
# 356 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int *diag; diag = (&tile_diag[diag_index]) ;
# 357 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_y; tile_edge_y = (tile_edges_y[i]) ;
# 358 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_x; tile_edge_x = (tile_edges_x[j]) ;
# 359 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 360 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 361 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 362 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width + 1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii - 1]; };
# 364 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 365 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii - 1]; };
# 367 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 368 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 369 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 370 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_1; char_from_1 = (string_1[(j - 1) * tile_width + jj - 1]) ;
# 371 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_2; char_from_2 = (string_2[(i - 1) * tile_height + ii - 1]) ;
# 372 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 373 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int diag_score; diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 374 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int left_score; left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 375 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int top_score; top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 376 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 378 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 379 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  }
# 380 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 381 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 382 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 383 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { tile_edge_y[ii - 1] = local_matrix[ii][tile_width]; };
# 385 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width + 1; ++ii) { tile_edge_x[ii - 1] = local_matrix[tile_height][ii]; };
# 387 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 388 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {; bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread();
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 390 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        {
# 391 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 392 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(i, j); })) ;
# 393 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 394 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 395 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 396 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0UL, 0, 3, 0UL, 0UL, 2727067958040903412UL); add_tile_to_run_npm(row, col, next); });
# 397 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 398 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 399 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 400 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 401 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_RCOL", 0UL, 0, 2, 0UL, 0UL); PUT_RCOL_npm(i, j); })) ;
# 402 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 403 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i) ;
# 404 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 405 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0UL, 0, 3, 0UL, 0UL, 2727067958040903412UL); add_tile_to_run_npm(row, col, next); });
# 406 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 407 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 408 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 409 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 410 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_BROW", 0UL, 0, 2, 0UL, 0UL); PUT_BROW_npm(i, j); })) ;
# 411 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 412 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 413 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j) ;
# 414 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0UL, 0, 3, 0UL, 0UL, 2727067958040903412UL); add_tile_to_run_npm(row, col, next); });
# 415 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 416 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 417 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        } reenable_current_thread(____chimes_disable0);
# 418 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 419 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 420 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 421 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 422 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 423 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "task_func", &____must_manage_task_func, ____alias_loc_id_17, ____chimes_did_disable17); }

void task_func(int i, int j, tiles_to_run *next) { (____chimes_replaying ? task_func_resumable(i, j, next) : task_func_quick(i, j, next)); }

int main_quick ( int argc, char* argv[] ) {const int ____chimes_did_disable18 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(2727067958040904117UL)) ; tiles_to_run *tmp;
bool done;
tile *mine;
tiles_to_run *next;
tiles_to_run *curr;
int result_col;
int result_row;
int j;
int i;
 register_stack_vars(9, "main|tmp|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|done|0", (int *)0x0, "i8", (void *)(&done), (size_t)1, 0, 0, 0, "main|mine|0", (int *)0x0, "%struct._tile*", (void *)(&mine), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|result_col|0", (int *)0x0, "i32", (void *)(&result_col), (size_t)4, 0, 0, 0, "main|result_row|0", (int *)0x0, "i32", (void *)(&result_row), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); ; ;
# 426 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
      int level; ;; { call_lbl_49: unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(49, &____chimes_region_id0, 1, &done);
# 427 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 428 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 429 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &done); ;
# 430 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  nthreads = omp_get_num_threads();
# 431 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0); }
# 432 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 433 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if ( argc < 5 ) {
# 434 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        fprintf(stderr, "Usage: %s length1 length2 tileWidth tileHeight\n", argv[0]);
# 435 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        exit(1);
# 436 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 437 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 438 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);
# 439 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 440 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length1; length1 = (strtoull(argv[1], __null, 10)) ;
# 441 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length2; length2 = (strtoull(argv[2], __null, 10)) ;
# 442 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 443 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    tile_width = (int) atoi (argv[3]);
# 444 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    tile_height = (int) atoi (argv[4]);
# 445 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 446 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_1; n_char_in_file_1 = (length1) ;
# 447 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_2; n_char_in_file_2 = (length2) ;
# 448 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 449 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 2727067958040903134UL, 0, 0);
# 450 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 2727067958040903134UL, 0, 0);
# 451 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 452 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0UL, 0, 2, 2727067958040903134UL, 0UL); random_init_npm(string_1, n_char_in_file_1); });
# 453 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0UL, 0, 2, 2727067958040903134UL, 0UL); random_init_npm(string_2, n_char_in_file_2); });
# 454 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 455 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile width  %d\n", tile_width);
# 456 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Tile height %d\n", tile_height);
# 457 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 458 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_1 % tile_width) { fprintf(stderr, "String1 length should be multiple of tile width\n"); exit(1); }
# 459 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_2 % tile_height) { fprintf(stderr, "String2 length should be multiple of tile height\n"); exit(1); }
# 460 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 461 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    n_tiles_x = n_char_in_file_1/tile_width;
# 462 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    n_tiles_y = n_char_in_file_2/tile_height;
# 463 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 464 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);
# 465 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 466 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    strlen_1 = n_char_in_file_1;
# 467 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    strlen_2 = n_char_in_file_2;
# 468 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 469 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 470 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 471 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 472 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 n_tiles_x++;
# 473 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 n_tiles_y++;
# 474 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 475 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int num_tiles; num_tiles = (n_tiles_x * n_tiles_y) ;
# 476 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 put_counts = (int*)malloc_wrapper(sizeof(int)*num_tiles, 2727067958040902644UL, 0, 0);
# 477 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i=0; i<num_tiles; i++) {
# 478 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  put_counts[i] = 0;
# 479 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 480 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 481 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 482 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  int num_diags; num_diags = (n_tiles_x + n_tiles_y - 1) ;
# 483 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*num_diags, 2727067958040902644UL, 0, 0);
# 484 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_diag[((n_tiles_y - 1) + (0 - 0))] = 0;
# 485 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 ({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(0, 0); });
# 486 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 487 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 488 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (i - 0))] = -1*(i*tile_width);
# 489 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(0, i); });
# 490 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 491 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 492 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (0 - i))] = -1*(i*tile_height);
# 493 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0UL, 0, 2, 0UL, 0UL); PUT_DIAG_npm(i, 0); });
# 494 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 495 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 496 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 497 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 2727067958040903043UL, 1, 0);
# 498 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 499 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 2727067958040903045UL, 0, 0);
# 500 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1 * ((i - 1) * tile_height + j); };
# 502 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_RCOL", 0UL, 0, 2, 0UL, 0UL); PUT_RCOL_npm(i, 0); });
# 503 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 504 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 505 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 506 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 2727067958040903043UL, 1, 0);
# 507 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 508 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 2727067958040903045UL, 0, 0);
# 509 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1 * ((i - 1) * tile_width + j); };
# 511 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_BROW", 0UL, 0, 2, 0UL, 0UL); PUT_BROW_npm(0, i); });
# 512 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 513 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 514 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 515 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 2727067958040903022UL, 1, 0);
# 516 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 517 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 2727067958040903234UL, 1, 0);
# 518 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height + 1; j++) { worker_tiles[i][j] = (int *)malloc_wrapper(sizeof(int) * (tile_width + 1), 2727067958040903236UL, 0, 0); };
# 520 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 521 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 522 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 523 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 dsizes[DIAG_KIND] = 1;
# 524 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 dsizes[RCOL_KIND] = tile_height;
# 525 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 dsizes[BROW_KIND] = tile_width;
# 526 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 527 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 max_size = dsizes[0];
# 528 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < NUM_DEPS; i++) { if (max_size < dsizes[i]) max_size = dsizes[i];; };
# 530 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 max_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 2727067958040902644UL, 0, 0);
# 531 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 temp_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 2727067958040902644UL, 0, 0);
# 561 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 561 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    result_row = (n_tiles_y - 1) ;
# 562 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    result_col = (n_tiles_x - 1) ;
# 563 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 done = 0;
# 564 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 565 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&begin,0);
# 566 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 567 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
       curr = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 2727067958040903869UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 568 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 2727067958040903878UL, 0, 1, (int)sizeof(struct _tile), 0);
# 569 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->q = curr->base;
# 570 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->capacity = n_tiles_y * n_tiles_x;
# 571 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    curr->length = 1;
# 572 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].row = 1;
# 573 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].col = 1;
# 574 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 575 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
       next = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 2727067958040903869UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 576 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 2727067958040903878UL, 0, 1, (int)sizeof(struct _tile), 0);
# 577 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->q = next->base;
# 578 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->capacity = n_tiles_y * n_tiles_x;
# 579 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    next->length = 0;
# 580 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 581 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    while (curr->length > 0) {
# 582 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
           mine = (__null); { call_lbl_50: unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(50, &____chimes_region_id1, 2, &done, &mine); ;
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel firstprivate(mine) firstprivate(done)
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 583 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 584 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &done, &mine); ;
# 585 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
               done = (false) ;
# 586 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 587 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            while (!done) {; bool ____chimes_disable3; ____chimes_disable3 = disable_current_thread();
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 588 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 589 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                {
# 590 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    mine = ({ calling_npm("pop_next_tile", 2727067958040903965UL, 0, 1, 2727067958040903869UL); pop_next_tile_npm(curr); });
# 591 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                } reenable_current_thread(____chimes_disable3);
# 592 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                done = (mine == __null);
# 593 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 594 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (!done) {
# 595 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("task_func", 0UL, 0, 3, 0UL, 0UL, 2727067958040903869UL); task_func_npm(mine->row, mine->col, next); });
# 596 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 597 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 598 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1); }
# 599 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 600 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
           tmp = (curr) ;
# 601 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        curr = next;
# 602 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        next = tmp;
# 603 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 604 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        curr->q = curr->base;
# 605 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 606 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        next->length = 0;
# 607 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 608 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 609 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
         call_lbl_34: checkpoint_transformed(34, ____alias_loc_id_0);
# 610 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 611 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 612 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 613 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&end,0);
# 614 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
     int score; score = (tile_diag[((n_tiles_y - 1) + (result_col - result_row))]) ;
# 615 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "score: %d\n", score);
# 616 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 617 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 618 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 619 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height + 1; j++) { free_wrapper(worker_tiles[i][j], 2727067958040903236UL); };
# 621 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  free_wrapper(worker_tiles[i], 2727067958040903234UL);
# 622 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 623 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(worker_tiles, 2727067958040903022UL);
# 624 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 625 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 2727067958040903045UL); };
# 627 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_y, 2727067958040903043UL);
# 628 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 629 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 2727067958040903045UL); };
# 631 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_x, 2727067958040903043UL);
# 632 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 633 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_diag, 2727067958040902644UL);
# 634 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 635 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_1, 2727067958040903134UL);
# 636 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_2, 2727067958040903134UL);
# 637 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 638 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18); return 0;
# 639 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

int main ( int argc, char* argv[] ) { init_chimes(); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }



int GUID_DIAG_npm(int r, int c) { return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_RCOL_npm(int r, int c) { return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_BROW_npm(int r, int c) { return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int TILE_ROW_npm(int guid) { return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }

int TILE_COL_npm(int guid) { return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }

int GUID_KIND_npm(int guid) { return guid / (n_tiles_x * n_tiles_y); }

int PUT_npm(int row, int col) {
# 226 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y - 1)) {return 0;; };
# 227 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x - 1)) {return 0;; };
# 228 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 229 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int success = 0;
# 230 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int await_tile = GUID_DIAG_npm(row, col);
# 231 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 232 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  ((put_counts[await_tile] < NUM_DEPS) ? static_cast<void> (0) : __assert_fail ("put_counts[await_tile] < NUM_DEPS", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 233, __PRETTY_FUNCTION__));
# 234 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 return success;
# 240 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

int PUT_DIAG_npm(int row, int col) { return PUT_npm(row+1, col+1); }

int PUT_RCOL_npm(int row, int col) { return PUT_npm(row, col+1); }

int PUT_BROW_npm(int row, int col) { return PUT_npm(row+1, col); }

signed char char_mapping_npm ( char c ) {
# 249 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    signed char to_be_returned = -1;
# 250 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    return to_be_returned;
# 258 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

void print_matrix_npm ( int** matrix, int n_rows, int n_columns ) {
# 261 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    int i, j;
# 262 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            fprintf(stdout, "%d ", matrix[i][j]);
# 265 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        fprintf(stdout, "\n");
# 267 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fprintf(stdout,"--------------------------------\n");
# 269 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

static void random_init_npm(signed char *s, unsigned long long len) {
# 281 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    for (unsigned long long i = 0; i < len; i++) {
# 282 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        int r = rand() % 4;
# 283 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        switch (r) {
# 284 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (0):
# 285 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'A';
# 286 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 287 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (1):
# 288 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'C';
# 289 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 290 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (2):
# 291 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'G';
# 292 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 293 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case (3):
# 294 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                s[i] = 'T';
# 295 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 296 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 297 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 298 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size ) {
# 301 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    size_t non_ws_index = 0, traverse_index = 0;
# 302 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 303 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 304 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        char curr_char = buffer[traverse_index];
# 305 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 306 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 307 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 308 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = char_mapping_npm(curr_char);
# 309 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                break;
# 310 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 311 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 312 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 313 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    return non_ws_index;
# 314 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

signed char* read_file_npm( FILE* file, size_t* n_chars ) {
# 317 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 318 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    long file_size = ftell (file);
# 319 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 320 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 321 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    signed char *file_buffer = (signed char *)malloc_wrapper((1+file_size)*sizeof(signed char), 2727067958040902852UL, 0, 0);
# 322 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 323 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    size_t n_read_from_file = fread(file_buffer, sizeof(signed char), file_size, file);
# 324 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 325 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 326 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 327 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    *n_chars = clear_whitespaces_do_mapping_npm(file_buffer, file_size);
# 328 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    return file_buffer;
# 329 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

void add_tile_to_run_npm(int row, int col, tiles_to_run *q) {
# 332 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ((q->length < q->capacity) ? static_cast<void> (0) : __assert_fail ("q->length < q->capacity", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 332, __PRETTY_FUNCTION__));
# 333 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 334 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 335 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 336 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

tile* pop_next_tile_npm(tiles_to_run *q) {
# 339 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    ((q->length >= 0) ? static_cast<void> (0) : __assert_fail ("q->length >= 0", "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp", 339, __PRETTY_FUNCTION__));
# 340 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 341 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        return __null;
# 342 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    } else {
# 343 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        tile *next = q->q;
# 344 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 345 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 346 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        return next;
# 347 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
    }
# 348 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}

void task_func_npm(int i, int j, tiles_to_run *next) {
# 351 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int ii, jj;
# 352 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int threadId = omp_get_thread_num();
# 353 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int ** local_matrix = worker_tiles[threadId];
# 354 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 355 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int diag_index = ((n_tiles_y - 1) + (j - i));
# 356 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int * diag = &tile_diag[diag_index];
# 357 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int * tile_edge_y = tile_edges_y[i];
# 358 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 int * tile_edge_x = tile_edges_x[j];
# 359 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 360 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 361 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 362 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width + 1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii - 1]; };
# 364 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 365 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii - 1]; };
# 367 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 368 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 369 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 370 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   signed char char_from_1 = string_1[(j-1)*tile_width+jj-1];
# 371 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   signed char char_from_2 = string_2[(i-1)*tile_height+ii-1];
# 372 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 373 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   int diag_score = local_matrix[ii-1][jj-1] + alignment_score_matrix[char_from_2][char_from_1];
# 374 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   int left_score = local_matrix[ii ][jj-1] + alignment_score_matrix[char_from_1][GAP];
# 375 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   int top_score = local_matrix[ii-1][jj ] + alignment_score_matrix[GAP][char_from_2];
# 376 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 377 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
# 378 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 379 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
  }
# 380 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 381 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 382 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 383 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { tile_edge_y[ii - 1] = local_matrix[ii][tile_width]; };
# 385 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width + 1; ++ii) { tile_edge_x[ii - 1] = local_matrix[tile_height][ii]; };
# 387 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 388 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 389 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 390 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        {
# 391 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 392 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_DIAG_npm(i, j);
# 393 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 394 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    int row = i + 1;
# 395 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    int col = j + 1;
# 396 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 397 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 398 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 399 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 400 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 401 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_RCOL_npm(i, j);
# 402 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 403 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    int row = i;
# 404 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    int col = j + 1;
# 405 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 406 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 407 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 408 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 409 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 410 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_BROW_npm(i, j);
# 411 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 412 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    int row = i + 1;
# 413 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    int col = j;
# 414 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 415 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
                }
# 416 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
            }
# 417 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
        }
# 418 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
 }
# 419 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 420 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 421 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 422 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
# 423 "/home/jmg3/num-debug/src/examples/openmp/smithWaterman/smith_waterman_omp.cpp"
}





static int module_init() {
    init_module(2727067958040902507UL, 33, 19, 0, 20, 18, 0, 18, 7,
                           &____alias_loc_id_0, (unsigned)32, (unsigned)3, (2727067958040902507UL + 137UL), (2727067958040902507UL + 515UL), (2727067958040902507UL + 536UL), (2727067958040902507UL + 538UL), (2727067958040902507UL + 727UL), (2727067958040902507UL + 906UL), (2727067958040902507UL + 907UL), (2727067958040902507UL + 908UL), (2727067958040902507UL + 909UL), (2727067958040902507UL + 910UL), (2727067958040902507UL + 912UL), (2727067958040902507UL + 913UL), (2727067958040902507UL + 914UL), (2727067958040902507UL + 915UL), (2727067958040902507UL + 916UL), (2727067958040902507UL + 917UL), (2727067958040902507UL + 918UL), (2727067958040902507UL + 919UL), (2727067958040902507UL + 920UL), (2727067958040902507UL + 921UL), (2727067958040902507UL + 922UL), (2727067958040902507UL + 923UL), (2727067958040902507UL + 924UL), (2727067958040902507UL + 1362UL), (2727067958040902507UL + 1371UL), (2727067958040902507UL + 1668UL), (2727067958040902507UL + 1670UL), (2727067958040902507UL + 1676UL), (2727067958040902507UL + 1678UL), (2727067958040902507UL + 1680UL), (2727067958040902507UL + 1686UL), (2727067958040902507UL + 1688UL), "task_func", (unsigned)1, (2727067958040902507UL + 1362UL), "random_init", (unsigned)1, (2727067958040902507UL + 627UL), "pop_next_tile", (unsigned)1, (2727067958040902507UL + 1362UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (2727067958040902507UL + 1UL), (2727067958040902507UL + 2UL),
                           &____alias_loc_id_2, (unsigned)2, (unsigned)0, (2727067958040902507UL + 22UL), (2727067958040902507UL + 23UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (2727067958040902507UL + 41UL), (2727067958040902507UL + 42UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)0, (2727067958040902507UL + 60UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (2727067958040902507UL + 72UL),
                           &____alias_loc_id_6, (unsigned)1, (unsigned)0, (2727067958040902507UL + 84UL),
                           &____alias_loc_id_7, (unsigned)6, (unsigned)0, (2727067958040902507UL + 94UL), (2727067958040902507UL + 95UL), (2727067958040902507UL + 96UL), (2727067958040902507UL + 97UL), (2727067958040902507UL + 98UL), (2727067958040902507UL + 137UL),
                           &____alias_loc_id_8, (unsigned)2, (unsigned)0, (2727067958040902507UL + 162UL), (2727067958040902507UL + 163UL),
                           &____alias_loc_id_9, (unsigned)2, (unsigned)0, (2727067958040902507UL + 176UL), (2727067958040902507UL + 177UL),
                            &____alias_loc_id_10, (unsigned)2, (unsigned)0, (2727067958040902507UL + 189UL), (2727067958040902507UL + 190UL),
                            &____alias_loc_id_11, (unsigned)2, (unsigned)0, (2727067958040902507UL + 202UL), (2727067958040902507UL + 203UL),
                            &____alias_loc_id_12, (unsigned)5, (unsigned)0, (2727067958040902507UL + 224UL), (2727067958040902507UL + 225UL), (2727067958040902507UL + 226UL), (2727067958040902507UL + 227UL), (2727067958040902507UL + 228UL),
                            &____alias_loc_id_13, (unsigned)6, (unsigned)0, (2727067958040902507UL + 280UL), (2727067958040902507UL + 281UL), (2727067958040902507UL + 282UL), (2727067958040902507UL + 283UL), (2727067958040902507UL + 284UL), (2727067958040902507UL + 322UL),
                            &____alias_loc_id_14, (unsigned)7, (unsigned)1, (2727067958040902507UL + 324UL), (2727067958040902507UL + 325UL), (2727067958040902507UL + 326UL), (2727067958040902507UL + 327UL), (2727067958040902507UL + 328UL), (2727067958040902507UL + 345UL), (2727067958040902507UL + 365UL), "clear_whitespaces_do_mapping", (unsigned)1, (2727067958040902507UL + 345UL),
                            &____alias_loc_id_15, (unsigned)5, (unsigned)0, (2727067958040902507UL + 375UL), (2727067958040902507UL + 376UL), (2727067958040902507UL + 377UL), (2727067958040902507UL + 397UL), (2727067958040902507UL + 403UL),
                            &____alias_loc_id_16, (unsigned)4, (unsigned)0, (2727067958040902507UL + 429UL), (2727067958040902507UL + 430UL), (2727067958040902507UL + 431UL), (2727067958040902507UL + 443UL),
                            &____alias_loc_id_17, (unsigned)29, (unsigned)1, (2727067958040902507UL + 137UL), (2727067958040902507UL + 475UL), (2727067958040902507UL + 476UL), (2727067958040902507UL + 477UL), (2727067958040902507UL + 478UL), (2727067958040902507UL + 479UL), (2727067958040902507UL + 480UL), (2727067958040902507UL + 481UL), (2727067958040902507UL + 482UL), (2727067958040902507UL + 483UL), (2727067958040902507UL + 484UL), (2727067958040902507UL + 485UL), (2727067958040902507UL + 486UL), (2727067958040902507UL + 487UL), (2727067958040902507UL + 488UL), (2727067958040902507UL + 489UL), (2727067958040902507UL + 490UL), (2727067958040902507UL + 491UL), (2727067958040902507UL + 492UL), (2727067958040902507UL + 493UL), (2727067958040902507UL + 494UL), (2727067958040902507UL + 495UL), (2727067958040902507UL + 496UL), (2727067958040902507UL + 497UL), (2727067958040902507UL + 498UL), (2727067958040902507UL + 499UL), (2727067958040902507UL + 500UL), (2727067958040902507UL + 538UL), (2727067958040902507UL + 729UL), "add_tile_to_run", (unsigned)1, (2727067958040902507UL + 905UL),
                            &____alias_loc_id_18, (unsigned)30, (unsigned)3, (2727067958040902507UL + 137UL), (2727067958040902507UL + 515UL), (2727067958040902507UL + 536UL), (2727067958040902507UL + 538UL), (2727067958040902507UL + 727UL), (2727067958040902507UL + 906UL), (2727067958040902507UL + 907UL), (2727067958040902507UL + 908UL), (2727067958040902507UL + 909UL), (2727067958040902507UL + 910UL), (2727067958040902507UL + 912UL), (2727067958040902507UL + 913UL), (2727067958040902507UL + 914UL), (2727067958040902507UL + 915UL), (2727067958040902507UL + 916UL), (2727067958040902507UL + 917UL), (2727067958040902507UL + 918UL), (2727067958040902507UL + 919UL), (2727067958040902507UL + 920UL), (2727067958040902507UL + 921UL), (2727067958040902507UL + 925UL), (2727067958040902507UL + 1362UL), (2727067958040902507UL + 1371UL), (2727067958040902507UL + 1668UL), (2727067958040902507UL + 1670UL), (2727067958040902507UL + 1676UL), (2727067958040902507UL + 1678UL), (2727067958040902507UL + 1680UL), (2727067958040902507UL + 1686UL), (2727067958040902507UL + 1688UL), "task_func", (unsigned)1, (2727067958040902507UL + 1362UL), "random_init", (unsigned)1, (2727067958040902507UL + 627UL), "pop_next_tile", (unsigned)1, (2727067958040902507UL + 1362UL),
                            &____alias_loc_id_19, (unsigned)5, (unsigned)0, (2727067958040902507UL + 1616UL), (2727067958040902507UL + 1617UL), (2727067958040902507UL + 1618UL), (2727067958040902507UL + 1619UL), (2727067958040902507UL + 1663UL),
                            "GUID_DIAG", (void *)(&GUID_DIAG_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "GUID_RCOL", (void *)(&GUID_RCOL_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "GUID_BROW", (void *)(&GUID_BROW_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "TILE_ROW", (void *)(&TILE_ROW_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "TILE_COL", (void *)(&TILE_COL_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "GUID_KIND", (void *)(&GUID_KIND_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "PUT", (void *)(&PUT_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 2, "GUID_DIAG", 2, 0UL, 0UL, 0UL, "__assert_fail", 4, (2727067958040902507UL + 1689UL), (2727067958040902507UL + 1690UL), 0UL, (2727067958040902507UL + 1691UL), 0UL,
                            "PUT_DIAG", (void *)(&PUT_DIAG_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "PUT_RCOL", (void *)(&PUT_RCOL_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "PUT_BROW", (void *)(&PUT_BROW_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "char_mapping", (void *)(&char_mapping_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "print_matrix", (void *)(&print_matrix_npm), (void *)__null, 0, 3, (2727067958040902507UL + 275UL), 0UL, 0UL, 0UL, 3, "fprintf", 3, (2727067958040902507UL + 249UL), (2727067958040902507UL + 1693UL), 0UL, 0UL, "fprintf", 2, (2727067958040902507UL + 249UL), (2727067958040902507UL + 1694UL), 0UL, "fprintf", 2, (2727067958040902507UL + 249UL), (2727067958040902507UL + 1689UL), 0UL,
                            "random_init", (void *)(&random_init_npm), (void *)__null, 0, 2, (2727067958040902507UL + 1663UL), 0UL, 0UL, 1, "rand", 0, 0UL,
                            "clear_whitespaces_do_mapping", (void *)(&clear_whitespaces_do_mapping_npm), (void *)__null, 0, 2, (2727067958040902507UL + 322UL), 0UL, 0UL, 1, "char_mapping", 1, 0UL, 0UL,
                            "read_file", (void *)(&read_file_npm), (void *)__null, 0, 2, (2727067958040902507UL + 364UL), (2727067958040902507UL + 365UL), (2727067958040902507UL + 345UL), 6, "fseek", 3, (2727067958040902507UL + 364UL), 0UL, 0UL, 0UL, "ftell", 1, (2727067958040902507UL + 364UL), 0UL, "fseek", 3, (2727067958040902507UL + 364UL), 0UL, 0UL, 0UL, "malloc", 1, 0UL, (2727067958040902507UL + 345UL), "fread", 4, (2727067958040902507UL + 345UL), 0UL, 0UL, (2727067958040902507UL + 364UL), 0UL, "clear_whitespaces_do_mapping", 2, (2727067958040902507UL + 345UL), 0UL, 0UL,
                            "add_tile_to_run", (void *)(&add_tile_to_run_npm), (void *)__null, 0, 3, 0UL, 0UL, (2727067958040902507UL + 397UL), 0UL, 1, "__assert_fail", 4, (2727067958040902507UL + 1696UL), (2727067958040902507UL + 1690UL), 0UL, (2727067958040902507UL + 1697UL), 0UL,
                            "pop_next_tile", (void *)(&pop_next_tile_npm), (void *)__null, 0, 1, (2727067958040902507UL + 443UL), (2727067958040902507UL + 1458UL), 1, "__assert_fail", 4, (2727067958040902507UL + 1698UL), (2727067958040902507UL + 1690UL), 0UL, (2727067958040902507UL + 1699UL), 0UL,
                            "task_func", (void *)(&task_func_npm), (void *)__null, 0, 3, 0UL, 0UL, (2727067958040902507UL + 905UL), 0UL, 7, "omp_get_thread_num", 0, 0UL, "PUT_DIAG", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (2727067958040902507UL + 905UL), 0UL, "PUT_RCOL", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (2727067958040902507UL + 905UL), 0UL, "PUT_BROW", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (2727067958040902507UL + 905UL), 0UL,
                           "GUID_DIAG", &(____chimes_does_checkpoint_GUID_DIAG_npm),
                           "GUID_RCOL", &(____chimes_does_checkpoint_GUID_RCOL_npm),
                           "GUID_BROW", &(____chimes_does_checkpoint_GUID_BROW_npm),
                           "TILE_ROW", &(____chimes_does_checkpoint_TILE_ROW_npm),
                           "TILE_COL", &(____chimes_does_checkpoint_TILE_COL_npm),
                           "GUID_KIND", &(____chimes_does_checkpoint_GUID_KIND_npm),
                           "PUT", &(____chimes_does_checkpoint_PUT_npm),
                           "PUT_DIAG", &(____chimes_does_checkpoint_PUT_DIAG_npm),
                           "PUT_RCOL", &(____chimes_does_checkpoint_PUT_RCOL_npm),
                           "PUT_BROW", &(____chimes_does_checkpoint_PUT_BROW_npm),
                           "char_mapping", &(____chimes_does_checkpoint_char_mapping_npm),
                           "print_matrix", &(____chimes_does_checkpoint_print_matrix_npm),
                           "random_init", &(____chimes_does_checkpoint_random_init_npm),
                           "clear_whitespaces_do_mapping", &(____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm),
                           "read_file", &(____chimes_does_checkpoint_read_file_npm),
                           "add_tile_to_run", &(____chimes_does_checkpoint_add_tile_to_run_npm),
                           "pop_next_tile", &(____chimes_does_checkpoint_pop_next_tile_npm),
                           "task_func", &(____chimes_does_checkpoint_task_func_npm),
                             (2727067958040902507UL + 397UL), (2727067958040902507UL + 403UL),
                             (2727067958040902507UL + 275UL), (2727067958040902507UL + 256UL),
                             (2727067958040902507UL + 224UL), (2727067958040902507UL + 275UL),
                             (2727067958040902507UL + 727UL), (2727067958040902507UL + 729UL),
                             (2727067958040902507UL + 1616UL), (2727067958040902507UL + 1663UL),
                             (2727067958040902507UL + 1692UL), (2727067958040902507UL + 249UL),
                             (2727067958040902507UL + 1610UL), (2727067958040902507UL + 952UL),
                             (2727067958040902507UL + 429UL), (2727067958040902507UL + 1458UL),
                             (2727067958040902507UL + 1678UL), (2727067958040902507UL + 137UL),
                             (2727067958040902507UL + 327UL), (2727067958040902507UL + 345UL),
                             (2727067958040902507UL + 324UL), (2727067958040902507UL + 364UL),
                             (2727067958040902507UL + 325UL), (2727067958040902507UL + 365UL),
                             (2727067958040902507UL + 280UL), (2727067958040902507UL + 322UL),
                             (2727067958040902507UL + 1676UL), (2727067958040902507UL + 536UL),
                             (2727067958040902507UL + 443UL), (2727067958040902507UL + 1458UL),
                             (2727067958040902507UL + 485UL), (2727067958040902507UL + 538UL),
                             (2727067958040902507UL + 484UL), (2727067958040902507UL + 538UL),
                             (2727067958040902507UL + 483UL), (2727067958040902507UL + 137UL),
                             (2727067958040902507UL + 377UL), (2727067958040902507UL + 397UL),
                             (2727067958040902507UL + 481UL), (2727067958040902507UL + 727UL),
                             (2727067958040902507UL + 1680UL), (2727067958040902507UL + 515UL),
                             (2727067958040902507UL + 924UL), (2727067958040902507UL + 1362UL),
                             (2727067958040902507UL + 908UL), (2727067958040902507UL + 1610UL),
                             (2727067958040902507UL + 536UL), (2727067958040902507UL + 538UL),
                             (2727067958040902507UL + 1362UL), (2727067958040902507UL + 1371UL),
                             (2727067958040902507UL + 477UL), (2727067958040902507UL + 905UL),
                             (2727067958040902507UL + 1668UL), (2727067958040902507UL + 627UL),
                             (2727067958040902507UL + 920UL), (2727067958040902507UL + 1362UL),
                             (2727067958040902507UL + 921UL), (2727067958040902507UL + 1362UL),
                             (2727067958040902507UL + 922UL), (2727067958040902507UL + 1458UL),
                             (2727067958040902507UL + 515UL), (2727067958040902507UL + 727UL),
                             (2727067958040902507UL + 430UL), (2727067958040902507UL + 443UL),
                             (2727067958040902507UL + 431UL), (2727067958040902507UL + 1458UL),
                     "Nucleotide", 0,
                     "TILE_DEPS", 0,
                     "_IO_FILE", 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0,
                     "_tile", 2, "int", (int)__builtin_offsetof (struct _tile, row), "int", (int)__builtin_offsetof (struct _tile, col),
                     "_tiles_to_run", 4, "%struct._tile*", (int)__builtin_offsetof (struct _tiles_to_run, q), "%struct._tile*", (int)__builtin_offsetof (struct _tiles_to_run, base), "int", (int)__builtin_offsetof (struct _tiles_to_run, capacity), "int", (int)__builtin_offsetof (struct _tiles_to_run, length),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "GUID_BROW", 0,
                             "task_func", 6, "PUT_DIAG", "add_tile_to_run", "PUT_RCOL", "add_tile_to_run", "PUT_BROW", "add_tile_to_run",
                             "clear_whitespaces_do_mapping", 1, "char_mapping",
                             "GUID_KIND", 0,
                             "main", 10, "random_init", "random_init", "PUT_DIAG", "PUT_DIAG", "PUT_DIAG", "PUT_RCOL", "PUT_BROW", "pop_next_tile", "task_func", "checkpoint",
                             "GUID_DIAG", 0,
                             "print_matrix", 0,
                             "PUT_BROW", 1, "PUT",
                             "pop_next_tile", 0,
                             "PUT_RCOL", 1, "PUT",
                             "char_mapping", 0,
                             "GUID_RCOL", 0,
                             "read_file", 1, "clear_whitespaces_do_mapping",
                             "random_init", 0,
                             "PUT_DIAG", 1, "PUT",
                             "PUT", 1, "GUID_DIAG",
                             "add_tile_to_run", 0,
                             "TILE_ROW", 0,
                             "TILE_COL", 0);
    register_global_var("global|string_1", "i8*", (void *)(&string_1), 8.0, 1, 0, 0);
    register_global_var("global|string_2", "i8*", (void *)(&string_2), 8.0, 1, 0, 0);
    register_global_var("global|strlen_1", "i32", (void *)(&strlen_1), 4.0, 0, 0, 0);
    register_global_var("global|strlen_2", "i32", (void *)(&strlen_2), 4.0, 0, 0, 0);
    register_global_var("global|tile_width", "i32", (void *)(&tile_width), 4.0, 0, 0, 0);
    register_global_var("global|tile_height", "i32", (void *)(&tile_height), 4.0, 0, 0, 0);
    register_global_var("global|n_tiles_x", "i32", (void *)(&n_tiles_x), 4.0, 0, 0, 0);
    register_global_var("global|n_tiles_y", "i32", (void *)(&n_tiles_y), 4.0, 0, 0, 0);
    register_global_var("global|tile_edges_x", "i32**", (void *)(&tile_edges_x), 8.0, 1, 0, 0);
    register_global_var("global|tile_edges_y", "i32**", (void *)(&tile_edges_y), 8.0, 1, 0, 0);
    register_global_var("global|tile_diag", "i32*", (void *)(&tile_diag), 8.0, 1, 0, 0);
    register_global_var("global|put_counts", "i32*", (void *)(&put_counts), 8.0, 1, 0, 0);
    register_global_var("global|worker_tiles", "i32***", (void *)(&worker_tiles), 8.0, 1, 0, 0);
    register_global_var("global|max_buffer", "i32*", (void *)(&max_buffer), 8.0, 1, 0, 0);
    register_global_var("global|temp_buffer", "i32*", (void *)(&temp_buffer), 8.0, 1, 0, 0);
    register_global_var("global|max_size", "i32", (void *)(&max_size), 4.0, 0, 0, 0);
    register_global_var("global|done", "i32", (void *)(&done), 4.0, 0, 0, 0);
    register_global_var("global|nthreads", "i32", (void *)(&nthreads), 4.0, 0, 0, 0);
    register_global_var("global|begin", "%struct.timeval = type { i64, i64 }", (void *)(&begin), 16.0, 0, 1, 0);
    register_global_var("global|end", "%struct.timeval = type { i64, i64 }", (void *)(&end), 16.0, 0, 1, 0);
    register_global_var("global|dsizes", "[3 x i32]", (void *)(&dsizes), 12.0, 0, 0, 0);
    register_global_var("global|alignment_score_matrix", "[5 x [5 x i8]]", (void *)(&alignment_score_matrix), 25.0, 0, 0, 0);
    register_text((void *)&__executable_start, (size_t)((&__etext) - (&__executable_start)));
    return 0;
}

static const int __libchimes_module_init = module_init();
