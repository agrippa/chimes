# 1 "mycommand.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "mycommand.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_parseCommandLine_npm = 1;
static int ____chimes_does_checkpoint_printCmdYaml_npm = 1;
static int ____chimes_does_checkpoint_addArg_npm = 1;
static int ____chimes_does_checkpoint_freeArgs_npm = 1;
static int ____chimes_does_checkpoint_printArgs_npm = 1;
static int ____chimes_does_checkpoint_printRank_npm = 1;
static int ____chimes_does_checkpoint_processArgs_npm = 1;

static int ____must_checkpoint_parseCommandLine_argc_0 = 2;
static int ____must_checkpoint_parseCommandLine_argv_0 = 2;
static int ____must_checkpoint_parseCommandLine_cmd_0 = 2;
static int ____must_checkpoint_parseCommandLine_help_0 = 2;
static int ____must_checkpoint_printCmdYaml_file_0 = 2;
static int ____must_checkpoint_printCmdYaml_cmd_0 = 2;

static int ____must_manage_parseCommandLine = 2;
static int ____must_manage_printCmdYaml = 2;

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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
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
extern void malloc_helper(const void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void calloc_helper(const void *ptr, size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void realloc_helper(const void *new_ptr, const void *old_ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
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
# 75 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 2 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 3 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"

# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.h" 1






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
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.h" 2



typedef struct CommandSt
{
   char potDir[1024];
   char potName[1024];
   char potType[1024];
   int doeam;
   int nx;
   int ny;
   int nz;
   int xproc;
   int yproc;
   int zproc;
   int nSteps;
   int printRate;
   double dt;
   double lat;
   double temperature;
   double initialDelta;
} Command;


Command parseCommandLine(int argc, char** argv);


void printCmdYaml(FILE* file, Command* cmd);
# 5 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 5 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"

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
# 163 "/usr/include/string.h" 2 3 4


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
# 7 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
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
# 240 "/usr/include/stdlib.h" 3 4
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
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"

# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.h" 1
# 28 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.h"
int addArg(const char *longOption, const char shortOption,
           int has_arg, const char type, void *dataPtr, int dataSize,
           const char *help);


void processArgs(int argc, char **argv);


void printArgs(void);

void freeArgs(void);
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 1






# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mytype.h" 1
# 13 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 2


typedef struct RankReduceDataSt
{
   double val;
   int rank;
} RankReduceData;


int getNRanks(void);


int getMyRank(void);


int printRank(void);


void timestampBarrier(const char* msg);


void initParallel(int *argc, char ***argv);


void destroyParallel(void);


void barrierParallel(void);


int sendReceiveParallel(void* sendBuf, int sendLen, int dest,
                        void* recvBuf, int recvLen, int source);


void addIntParallel(int* sendBuf, int* recvBuf, int count);


void addRealParallel(real_t* sendBuf, real_t* recvBuf, int count);


void addDoubleParallel(double* sendBuf, double* recvBuf, int count);


void maxIntParallel(int* sendBuf, int* recvBuf, int count);


void minRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);


void maxRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);


void bcastParallel(void* buf, int len, int root);


int builtWithMpi(void);
# 11 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
Command parseCommandLine_npm(int argc, char** argv);static int (*____chimes_extern_func_addArg)(const char *, char, int, char, void *, int, const char *) = addArg;static void (*____chimes_extern_func_freeArgs)(void) = freeArgs;static void (*____chimes_extern_func_printArgs)(void) = printArgs;static void (*____chimes_extern_func_processArgs)(int, char **) = processArgs;
Command parseCommandLine_quick(int argc, char** argv); Command parseCommandLine(int argc, char** argv);
Command parseCommandLine_resumable(int argc, char** argv)
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&parseCommandLine), "parseCommandLine", &____must_manage_parseCommandLine, 3, 2, (size_t)(12022527874929792621UL), (size_t)(0UL), (size_t)(12022527874929792623UL), "parseCommandLine|argc|0", &____must_checkpoint_parseCommandLine_argc_0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "parseCommandLine|argv|0", &____must_checkpoint_parseCommandLine_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; int help;
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
Command cmd;
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 if (____must_checkpoint_parseCommandLine_help_0 || ____must_checkpoint_parseCommandLine_cmd_0) { register_stack_vars(2, "parseCommandLine|help|0", &____must_checkpoint_parseCommandLine_help_0, "i32", (void *)(&help), (size_t)4, 0, 0, 0, "parseCommandLine|cmd|0", &____must_checkpoint_parseCommandLine_cmd_0, "%struct.CommandSt = type { [1024 x i8], [1024 x i8], [1024 x i8], i32, i32, i32, i32, i32, i32, i32, i32, i32, double, double, double, double }", (void *)(&cmd), (size_t)3144, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(18): { goto call_lbl_18; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } default: { chimes_error(); } } } ; ;
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
     ;
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potDir, 0, 1024);
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potName, 0, 1024);
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potType, 0, 1024);
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potDir, "pots");
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potName, "\0");
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potType, "funcfl");
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.doeam = 0;
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nx = 20;
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.ny = 20;
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nz = 20;
# 200 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.xproc = 1;
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.yproc = 1;
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.zproc = 1;
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nSteps = 100;
# 204 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.printRate = 10;
# 205 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.dt = 1.0;
# 206 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.lat = -1.0;
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.temperature = 600.0;
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.initialDelta = 0.0;
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 210 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      help = (0) ;
# 211 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 212 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_0: ({ char ____chimes_arg1; char ____chimes_arg3; void * ____chimes_arg4; if (!____chimes_replaying) { ____chimes_arg1 = ('h'); ____chimes_arg3 = ('i'); ____chimes_arg4 = (&(help)); } calling((void*)addArg, 0, ____alias_loc_id_18, 0UL, 7, (size_t)(12022527874929792720UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792479UL), (size_t)(0UL), (size_t)(12022527874929792724UL)); (addArg)("help", ____chimes_arg1, 0, ____chimes_arg3, ____chimes_arg4, 0, "print this message"); }) ;
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_1: ({ char ____chimes_arg8; char ____chimes_arg10; void * ____chimes_arg11; int ____chimes_arg12; if (!____chimes_replaying) { ____chimes_arg8 = ('d'); ____chimes_arg10 = ('s'); ____chimes_arg11 = (cmd.potDir); ____chimes_arg12 = (sizeof (cmd.potDir)); } calling((void*)addArg, 1, ____alias_loc_id_17, 0UL, 7, (size_t)(12022527874929792722UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792726UL)); (addArg)("potDir", ____chimes_arg8, 1, ____chimes_arg10, ____chimes_arg11, ____chimes_arg12, "potential directory"); }) ;
# 214 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_2: ({ char ____chimes_arg15; char ____chimes_arg17; void * ____chimes_arg18; int ____chimes_arg19; if (!____chimes_replaying) { ____chimes_arg15 = ('p'); ____chimes_arg17 = ('s'); ____chimes_arg18 = (cmd.potName); ____chimes_arg19 = (sizeof (cmd.potName)); } calling((void*)addArg, 2, ____alias_loc_id_16, 0UL, 7, (size_t)(12022527874929792727UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792728UL)); (addArg)("potName", ____chimes_arg15, 1, ____chimes_arg17, ____chimes_arg18, ____chimes_arg19, "potential name"); }) ;
# 215 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_3: ({ char ____chimes_arg22; char ____chimes_arg24; void * ____chimes_arg25; int ____chimes_arg26; if (!____chimes_replaying) { ____chimes_arg22 = ('t'); ____chimes_arg24 = ('s'); ____chimes_arg25 = (cmd.potType); ____chimes_arg26 = (sizeof (cmd.potType)); } calling((void*)addArg, 3, ____alias_loc_id_15, 0UL, 7, (size_t)(12022527874929792727UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792730UL)); (addArg)("potType", ____chimes_arg22, 1, ____chimes_arg24, ____chimes_arg25, ____chimes_arg26, "potential type (funcfl or setfl)"); }) ;
# 216 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_4: ({ char ____chimes_arg29; char ____chimes_arg31; void * ____chimes_arg32; if (!____chimes_replaying) { ____chimes_arg29 = ('e'); ____chimes_arg31 = ('i'); ____chimes_arg32 = (&(cmd.doeam)); } calling((void*)addArg, 4, ____alias_loc_id_14, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792732UL)); (addArg)("doeam", ____chimes_arg29, 0, ____chimes_arg31, ____chimes_arg32, 0, "compute eam potentials"); }) ;
# 217 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_5: ({ char ____chimes_arg36; char ____chimes_arg38; void * ____chimes_arg39; if (!____chimes_replaying) { ____chimes_arg36 = ('x'); ____chimes_arg38 = ('i'); ____chimes_arg39 = (&(cmd.nx)); } calling((void*)addArg, 5, ____alias_loc_id_13, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("nx", ____chimes_arg36, 1, ____chimes_arg38, ____chimes_arg39, 0, "number of unit cells in x"); }) ;
# 218 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_6: ({ char ____chimes_arg43; char ____chimes_arg45; void * ____chimes_arg46; if (!____chimes_replaying) { ____chimes_arg43 = ('y'); ____chimes_arg45 = ('i'); ____chimes_arg46 = (&(cmd.ny)); } calling((void*)addArg, 6, ____alias_loc_id_12, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("ny", ____chimes_arg43, 1, ____chimes_arg45, ____chimes_arg46, 0, "number of unit cells in y"); }) ;
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_7: ({ char ____chimes_arg50; char ____chimes_arg52; void * ____chimes_arg53; if (!____chimes_replaying) { ____chimes_arg50 = ('z'); ____chimes_arg52 = ('i'); ____chimes_arg53 = (&(cmd.nz)); } calling((void*)addArg, 7, ____alias_loc_id_11, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("nz", ____chimes_arg50, 1, ____chimes_arg52, ____chimes_arg53, 0, "number of unit cells in z"); }) ;
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_8: ({ char ____chimes_arg57; char ____chimes_arg59; void * ____chimes_arg60; if (!____chimes_replaying) { ____chimes_arg57 = ('i'); ____chimes_arg59 = ('i'); ____chimes_arg60 = (&(cmd.xproc)); } calling((void*)addArg, 8, ____alias_loc_id_10, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("xproc", ____chimes_arg57, 1, ____chimes_arg59, ____chimes_arg60, 0, "processors in x direction"); }) ;
# 221 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_9: ({ char ____chimes_arg64; char ____chimes_arg66; void * ____chimes_arg67; if (!____chimes_replaying) { ____chimes_arg64 = ('j'); ____chimes_arg66 = ('i'); ____chimes_arg67 = (&(cmd.yproc)); } calling((void*)addArg, 9, ____alias_loc_id_9, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("yproc", ____chimes_arg64, 1, ____chimes_arg66, ____chimes_arg67, 0, "processors in y direction"); }) ;
# 222 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_10: ({ char ____chimes_arg71; char ____chimes_arg73; void * ____chimes_arg74; if (!____chimes_replaying) { ____chimes_arg71 = ('k'); ____chimes_arg73 = ('i'); ____chimes_arg74 = (&(cmd.zproc)); } calling((void*)addArg, 10, ____alias_loc_id_8, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("zproc", ____chimes_arg71, 1, ____chimes_arg73, ____chimes_arg74, 0, "processors in z direction"); }) ;
# 223 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_11: ({ char ____chimes_arg78; char ____chimes_arg80; void * ____chimes_arg81; if (!____chimes_replaying) { ____chimes_arg78 = ('N'); ____chimes_arg80 = ('i'); ____chimes_arg81 = (&(cmd.nSteps)); } calling((void*)addArg, 11, ____alias_loc_id_7, 0UL, 7, (size_t)(12022527874929792722UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792746UL)); (addArg)("nSteps", ____chimes_arg78, 1, ____chimes_arg80, ____chimes_arg81, 0, "number of time steps"); }) ;
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_12: ({ char ____chimes_arg85; char ____chimes_arg87; void * ____chimes_arg88; if (!____chimes_replaying) { ____chimes_arg85 = ('n'); ____chimes_arg87 = ('i'); ____chimes_arg88 = (&(cmd.printRate)); } calling((void*)addArg, 12, ____alias_loc_id_6, 0UL, 7, (size_t)(12022527874929792747UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792748UL)); (addArg)("printRate", ____chimes_arg85, 1, ____chimes_arg87, ____chimes_arg88, 0, "number of steps between output"); }) ;
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_13: ({ char ____chimes_arg92; char ____chimes_arg94; void * ____chimes_arg95; if (!____chimes_replaying) { ____chimes_arg92 = ('D'); ____chimes_arg94 = ('d'); ____chimes_arg95 = (&(cmd.dt)); } calling((void*)addArg, 13, ____alias_loc_id_5, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792750UL)); (addArg)("dt", ____chimes_arg92, 1, ____chimes_arg94, ____chimes_arg95, 0, "time step (in fs)"); }) ;
# 226 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_14: ({ char ____chimes_arg99; char ____chimes_arg101; void * ____chimes_arg102; if (!____chimes_replaying) { ____chimes_arg99 = ('l'); ____chimes_arg101 = ('d'); ____chimes_arg102 = (&(cmd.lat)); } calling((void*)addArg, 14, ____alias_loc_id_4, 0UL, 7, (size_t)(12022527874929792751UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792752UL)); (addArg)("lat", ____chimes_arg99, 1, ____chimes_arg101, ____chimes_arg102, 0, "lattice parameter (Angstroms)"); }) ;
# 227 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_15: ({ char ____chimes_arg106; char ____chimes_arg108; void * ____chimes_arg109; if (!____chimes_replaying) { ____chimes_arg106 = ('T'); ____chimes_arg108 = ('d'); ____chimes_arg109 = (&(cmd.temperature)); } calling((void*)addArg, 15, ____alias_loc_id_3, 0UL, 7, (size_t)(12022527874929792720UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792754UL)); (addArg)("temp", ____chimes_arg106, 1, ____chimes_arg108, ____chimes_arg109, 0, "initial temperature (K)"); }) ;
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_16: ({ char ____chimes_arg113; char ____chimes_arg115; void * ____chimes_arg116; if (!____chimes_replaying) { ____chimes_arg113 = ('r'); ____chimes_arg115 = ('d'); ____chimes_arg116 = (&(cmd.initialDelta)); } calling((void*)addArg, 16, ____alias_loc_id_2, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("delta", ____chimes_arg113, 1, ____chimes_arg115, ____chimes_arg116, 0, "initial delta (Angstroms)"); }) ;
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_17: ({ calling((void*)processArgs, 17, ____alias_loc_id_1, 0UL, 2, (size_t)(0UL), (size_t)(12022527874929792623UL)); (processArgs)(argc, argv); }) ;
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (strlen(cmd.potName) == 0)
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   {
# 235 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      if (strcmp(cmd.potType, "setfl" ) == 0) {strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      if (strcmp(cmd.potType, "funcfl") == 0) {strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   }
# 240 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 241 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (help)
# 242 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   {
# 243 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
       call_lbl_18: ({ calling((void*)printArgs, 18, 0, 0UL, 0); (printArgs)(); }) ;
# 244 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
       call_lbl_19: ({ calling((void*)freeArgs, 19, 0, 0UL, 0); (freeArgs)(); }) ;
# 245 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      exit(2);
# 246 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   }
# 247 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_20: ({ calling((void*)freeArgs, 20, ____alias_loc_id_0, 0UL, 0); (freeArgs)(); }) ;
# 248 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 249 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
     Command ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (cmd); rm_stack(false, 0UL, "parseCommandLine", &____must_manage_parseCommandLine, 0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 250 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
rm_stack(false, 0UL, "parseCommandLine", &____must_manage_parseCommandLine, 0, ____chimes_did_disable0, false); }
# 251 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 252 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
void printCmdYaml_npm(FILE* file, Command* cmd);static int (*____chimes_extern_func_printRank)(void) = printRank;
void printCmdYaml_quick(FILE* file, Command* cmd); void printCmdYaml(FILE* file, Command* cmd);
void printCmdYaml_resumable(FILE* file, Command* cmd)
# 253 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&printCmdYaml), "printCmdYaml", &____must_manage_printCmdYaml, 2, 2, (size_t)(12022527874929792715UL), (size_t)(12022527874929792716UL), "printCmdYaml|file|0", &____must_checkpoint_printCmdYaml_file_0, "%struct._IO_FILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printCmdYaml|cmd|0", &____must_checkpoint_printCmdYaml_cmd_0, "%struct.CommandSt*", (void *)(&cmd), (size_t)8, 1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 254 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   alias_group_changed(____alias_loc_id_19); call_lbl_0: if (! ({ calling((void*)printRank, 0, ____alias_loc_id_19, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1, false); return; };
# 256 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   fprintf(file,
# 257 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "Command Line Parameters:\n"
# 258 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  doeam: %d\n"
# 259 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potDir: %s\n"
# 260 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potName: %s\n"
# 261 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potType: %s\n"
# 262 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nx: %d\n"
# 263 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  ny: %d\n"
# 264 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nz: %d\n"
# 265 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  xproc: %d\n"
# 266 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  yproc: %d\n"
# 267 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  zproc: %d\n"
# 268 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Lattice constant: %g Angstroms\n"
# 269 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nSteps: %d\n"
# 270 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  printRate: %d\n"
# 271 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Time step: %g fs\n"
# 272 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Initial Temperature: %g K\n"
# 273 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Initial Delta: %g Angstroms\n"
# 274 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "\n",
# 275 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->doeam,
# 276 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potDir,
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potName,
# 278 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potType,
# 279 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->nx, cmd->ny, cmd->nz,
# 280 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->lat,
# 282 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->nSteps,
# 283 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->printRate,
# 284 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->dt,
# 285 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->temperature,
# 286 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->initialDelta
# 287 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   );
# 288 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   fflush(file);
# 289 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1, false); }
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
Command parseCommandLine_quick(int argc, char** argv)
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&parseCommandLine), "parseCommandLine", &____must_manage_parseCommandLine, 3, 2, (size_t)(12022527874929792621UL), (size_t)(0UL), (size_t)(12022527874929792623UL), "parseCommandLine|argc|0", &____must_checkpoint_parseCommandLine_argc_0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "parseCommandLine|argv|0", &____must_checkpoint_parseCommandLine_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; int help;
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
Command cmd;
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 if (____must_checkpoint_parseCommandLine_help_0 || ____must_checkpoint_parseCommandLine_cmd_0) { register_stack_vars(2, "parseCommandLine|help|0", &____must_checkpoint_parseCommandLine_help_0, "i32", (void *)(&help), (size_t)4, 0, 0, 0, "parseCommandLine|cmd|0", &____must_checkpoint_parseCommandLine_cmd_0, "%struct.CommandSt = type { [1024 x i8], [1024 x i8], [1024 x i8], i32, i32, i32, i32, i32, i32, i32, i32, i32, double, double, double, double }", (void *)(&cmd), (size_t)3144, 0, 1, 0); } ; ;
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
     ;
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potDir, 0, 1024);
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potName, 0, 1024);
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potType, 0, 1024);
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potDir, "pots");
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potName, "\0");
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potType, "funcfl");
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.doeam = 0;
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nx = 20;
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.ny = 20;
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nz = 20;
# 200 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.xproc = 1;
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.yproc = 1;
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.zproc = 1;
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nSteps = 100;
# 204 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.printRate = 10;
# 205 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.dt = 1.0;
# 206 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.lat = -1.0;
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.temperature = 600.0;
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.initialDelta = 0.0;
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 210 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      help = (0) ;
# 211 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 212 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_0: ({ calling((void*)addArg, 0, ____alias_loc_id_18, 0UL, 7, (size_t)(12022527874929792720UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792479UL), (size_t)(0UL), (size_t)(12022527874929792724UL)); (addArg)("help", 'h', 0, 'i', &(help), 0, "print this message"); }) ;
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_1: ({ calling((void*)addArg, 1, ____alias_loc_id_17, 0UL, 7, (size_t)(12022527874929792722UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792726UL)); (addArg)("potDir", 'd', 1, 's', cmd.potDir, sizeof (cmd.potDir), "potential directory"); }) ;
# 214 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_2: ({ calling((void*)addArg, 2, ____alias_loc_id_16, 0UL, 7, (size_t)(12022527874929792727UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792728UL)); (addArg)("potName", 'p', 1, 's', cmd.potName, sizeof (cmd.potName), "potential name"); }) ;
# 215 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_3: ({ calling((void*)addArg, 3, ____alias_loc_id_15, 0UL, 7, (size_t)(12022527874929792727UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792730UL)); (addArg)("potType", 't', 1, 's', cmd.potType, sizeof (cmd.potType), "potential type (funcfl or setfl)"); }) ;
# 216 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_4: ({ calling((void*)addArg, 4, ____alias_loc_id_14, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792732UL)); (addArg)("doeam", 'e', 0, 'i', &(cmd.doeam), 0, "compute eam potentials"); }) ;
# 217 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_5: ({ calling((void*)addArg, 5, ____alias_loc_id_13, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("nx", 'x', 1, 'i', &(cmd.nx), 0, "number of unit cells in x"); }) ;
# 218 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_6: ({ calling((void*)addArg, 6, ____alias_loc_id_12, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("ny", 'y', 1, 'i', &(cmd.ny), 0, "number of unit cells in y"); }) ;
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_7: ({ calling((void*)addArg, 7, ____alias_loc_id_11, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("nz", 'z', 1, 'i', &(cmd.nz), 0, "number of unit cells in z"); }) ;
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_8: ({ calling((void*)addArg, 8, ____alias_loc_id_10, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("xproc", 'i', 1, 'i', &(cmd.xproc), 0, "processors in x direction"); }) ;
# 221 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_9: ({ calling((void*)addArg, 9, ____alias_loc_id_9, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("yproc", 'j', 1, 'i', &(cmd.yproc), 0, "processors in y direction"); }) ;
# 222 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_10: ({ calling((void*)addArg, 10, ____alias_loc_id_8, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("zproc", 'k', 1, 'i', &(cmd.zproc), 0, "processors in z direction"); }) ;
# 223 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_11: ({ calling((void*)addArg, 11, ____alias_loc_id_7, 0UL, 7, (size_t)(12022527874929792722UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792746UL)); (addArg)("nSteps", 'N', 1, 'i', &(cmd.nSteps), 0, "number of time steps"); }) ;
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_12: ({ calling((void*)addArg, 12, ____alias_loc_id_6, 0UL, 7, (size_t)(12022527874929792747UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792748UL)); (addArg)("printRate", 'n', 1, 'i', &(cmd.printRate), 0, "number of steps between output"); }) ;
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_13: ({ calling((void*)addArg, 13, ____alias_loc_id_5, 0UL, 7, (size_t)(12022527874929792733UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792750UL)); (addArg)("dt", 'D', 1, 'd', &(cmd.dt), 0, "time step (in fs)"); }) ;
# 226 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_14: ({ calling((void*)addArg, 14, ____alias_loc_id_4, 0UL, 7, (size_t)(12022527874929792751UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792752UL)); (addArg)("lat", 'l', 1, 'd', &(cmd.lat), 0, "lattice parameter (Angstroms)"); }) ;
# 227 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_15: ({ calling((void*)addArg, 15, ____alias_loc_id_3, 0UL, 7, (size_t)(12022527874929792720UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792754UL)); (addArg)("temp", 'T', 1, 'd', &(cmd.temperature), 0, "initial temperature (K)"); }) ;
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_16: ({ calling((void*)addArg, 16, ____alias_loc_id_2, 0UL, 7, (size_t)(12022527874929792731UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12022527874929792478UL), (size_t)(0UL), (size_t)(12022527874929792734UL)); (addArg)("delta", 'r', 1, 'd', &(cmd.initialDelta), 0, "initial delta (Angstroms)"); }) ;
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_17: ({ calling((void*)processArgs, 17, ____alias_loc_id_1, 0UL, 2, (size_t)(0UL), (size_t)(12022527874929792623UL)); (processArgs)(argc, argv); }) ;
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (strlen(cmd.potName) == 0)
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   {
# 235 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      if (strcmp(cmd.potType, "setfl" ) == 0) {strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      if (strcmp(cmd.potType, "funcfl") == 0) {strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   }
# 240 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 241 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (help)
# 242 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   {
# 243 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
       call_lbl_18: ({ calling((void*)printArgs, 18, 0, 0UL, 0); (printArgs)(); }) ;
# 244 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
       call_lbl_19: ({ calling((void*)freeArgs, 19, 0, 0UL, 0); (freeArgs)(); }) ;
# 245 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      exit(2);
# 246 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   }
# 247 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    call_lbl_20: ({ calling((void*)freeArgs, 20, ____alias_loc_id_0, 0UL, 0); (freeArgs)(); }) ;
# 248 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 249 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
     Command ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (cmd); rm_stack(false, 0UL, "parseCommandLine", &____must_manage_parseCommandLine, 0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 250 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
rm_stack(false, 0UL, "parseCommandLine", &____must_manage_parseCommandLine, 0, ____chimes_did_disable0, false); }

Command parseCommandLine(int argc, char** argv) { return (____chimes_replaying ? parseCommandLine_resumable(argc, argv) : parseCommandLine_quick(argc, argv)); }
# 252 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
void printCmdYaml_quick(FILE* file, Command* cmd)
# 253 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&printCmdYaml), "printCmdYaml", &____must_manage_printCmdYaml, 2, 2, (size_t)(12022527874929792715UL), (size_t)(12022527874929792716UL), "printCmdYaml|file|0", &____must_checkpoint_printCmdYaml_file_0, "%struct._IO_FILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printCmdYaml|cmd|0", &____must_checkpoint_printCmdYaml_cmd_0, "%struct.CommandSt*", (void *)(&cmd), (size_t)8, 1, 0, 0) ; ; ;
# 254 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   alias_group_changed(____alias_loc_id_19); call_lbl_0: if (! ({ calling((void*)printRank, 0, ____alias_loc_id_19, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1, false); return; };
# 256 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   fprintf(file,
# 257 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "Command Line Parameters:\n"
# 258 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  doeam: %d\n"
# 259 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potDir: %s\n"
# 260 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potName: %s\n"
# 261 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potType: %s\n"
# 262 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nx: %d\n"
# 263 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  ny: %d\n"
# 264 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nz: %d\n"
# 265 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  xproc: %d\n"
# 266 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  yproc: %d\n"
# 267 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  zproc: %d\n"
# 268 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Lattice constant: %g Angstroms\n"
# 269 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nSteps: %d\n"
# 270 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  printRate: %d\n"
# 271 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Time step: %g fs\n"
# 272 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Initial Temperature: %g K\n"
# 273 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Initial Delta: %g Angstroms\n"
# 274 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "\n",
# 275 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->doeam,
# 276 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potDir,
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potName,
# 278 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potType,
# 279 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->nx, cmd->ny, cmd->nz,
# 280 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->lat,
# 282 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->nSteps,
# 283 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->printRate,
# 284 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->dt,
# 285 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->temperature,
# 286 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->initialDelta
# 287 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   );
# 288 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   fflush(file);
# 289 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1, false); }

void printCmdYaml(FILE* file, Command* cmd) { (____chimes_replaying ? printCmdYaml_resumable(file, cmd) : printCmdYaml_quick(file, cmd)); }
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
Command parseCommandLine_npm(int argc, char** argv)
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   Command cmd;
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potDir, 0, 1024);
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potName, 0, 1024);
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   memset(cmd.potType, 0, 1024);
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potDir, "pots");
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potName, "\0");
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   strcpy(cmd.potType, "funcfl");
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.doeam = 0;
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nx = 20;
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.ny = 20;
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nz = 20;
# 200 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.xproc = 1;
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.yproc = 1;
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.zproc = 1;
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.nSteps = 100;
# 204 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.printRate = 10;
# 205 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.dt = 1.0;
# 206 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.lat = -1.0;
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.temperature = 600.0;
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   cmd.initialDelta = 0.0;
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 210 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   int help=0;
# 211 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 212 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("help", 'h', 0, 'i', &(help), 0, "print this message");
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("potDir", 'd', 1, 's', cmd.potDir, sizeof(cmd.potDir), "potential directory");
# 214 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("potName", 'p', 1, 's', cmd.potName, sizeof(cmd.potName), "potential name");
# 215 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("potType", 't', 1, 's', cmd.potType, sizeof(cmd.potType), "potential type (funcfl or setfl)");
# 216 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("doeam", 'e', 0, 'i', &(cmd.doeam), 0, "compute eam potentials");
# 217 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("nx", 'x', 1, 'i', &(cmd.nx), 0, "number of unit cells in x");
# 218 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("ny", 'y', 1, 'i', &(cmd.ny), 0, "number of unit cells in y");
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("nz", 'z', 1, 'i', &(cmd.nz), 0, "number of unit cells in z");
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("xproc", 'i', 1, 'i', &(cmd.xproc), 0, "processors in x direction");
# 221 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("yproc", 'j', 1, 'i', &(cmd.yproc), 0, "processors in y direction");
# 222 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("zproc", 'k', 1, 'i', &(cmd.zproc), 0, "processors in z direction");
# 223 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("nSteps", 'N', 1, 'i', &(cmd.nSteps), 0, "number of time steps");
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("printRate", 'n', 1, 'i', &(cmd.printRate), 0, "number of steps between output");
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("dt", 'D', 1, 'd', &(cmd.dt), 0, "time step (in fs)");
# 226 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("lat", 'l', 1, 'd', &(cmd.lat), 0, "lattice parameter (Angstroms)");
# 227 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("temp", 'T', 1, 'd', &(cmd.temperature), 0, "initial temperature (K)");
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_addArg)("delta", 'r', 1, 'd', &(cmd.initialDelta), 0, "initial delta (Angstroms)");
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_processArgs)(argc, argv);
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (strlen(cmd.potName) == 0)
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   {
# 235 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      if (strcmp(cmd.potType, "setfl" ) == 0) {strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      if (strcmp(cmd.potType, "funcfl") == 0) {strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   }
# 240 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 241 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (help)
# 242 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   {
# 243 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      (*____chimes_extern_func_printArgs)();
# 244 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      (*____chimes_extern_func_freeArgs)();
# 245 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
      exit(2);
# 246 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   }
# 247 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   (*____chimes_extern_func_freeArgs)();
# 248 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 249 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
    Command ____chimes_ret_var_0; ____chimes_ret_var_0 = (cmd); return ____chimes_ret_var_0; ;
# 250 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
}
# 252 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
void printCmdYaml_npm(FILE* file, Command* cmd)
# 253 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{
# 254 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   if (! (*____chimes_extern_func_printRank)()) {return; };
# 256 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   fprintf(file,
# 257 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "Command Line Parameters:\n"
# 258 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  doeam: %d\n"
# 259 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potDir: %s\n"
# 260 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potName: %s\n"
# 261 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  potType: %s\n"
# 262 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nx: %d\n"
# 263 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  ny: %d\n"
# 264 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nz: %d\n"
# 265 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  xproc: %d\n"
# 266 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  yproc: %d\n"
# 267 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  zproc: %d\n"
# 268 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Lattice constant: %g Angstroms\n"
# 269 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  nSteps: %d\n"
# 270 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  printRate: %d\n"
# 271 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Time step: %g fs\n"
# 272 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Initial Temperature: %g K\n"
# 273 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "  Initial Delta: %g Angstroms\n"
# 274 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           "\n",
# 275 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->doeam,
# 276 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potDir,
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potName,
# 278 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->potType,
# 279 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->nx, cmd->ny, cmd->nz,
# 280 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->lat,
# 282 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->nSteps,
# 283 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->printRate,
# 284 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->dt,
# 285 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->temperature,
# 286 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
           cmd->initialDelta
# 287 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   );
# 288 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
   fflush(file);
# 289 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
}





static int module_init() {
    init_module(12022527874929792475UL, 3, 2, 6, 20, 2, 5, 7, 0, 0, 3,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)0, (12022527874929792475UL + 3UL),
                           &____alias_loc_id_1, (unsigned)0, (unsigned)0, (unsigned)1, "processArgs", (unsigned)1, (12022527874929792475UL + 148UL),
                           &____alias_loc_id_2, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 256UL), (12022527874929792475UL + 259UL),
                           &____alias_loc_id_3, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 245UL), (12022527874929792475UL + 279UL),
                           &____alias_loc_id_4, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 276UL), (12022527874929792475UL + 277UL),
                           &____alias_loc_id_5, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 258UL), (12022527874929792475UL + 275UL),
                           &____alias_loc_id_6, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 272UL), (12022527874929792475UL + 273UL),
                           &____alias_loc_id_7, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 247UL), (12022527874929792475UL + 271UL),
                           &____alias_loc_id_8, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 256UL), (12022527874929792475UL + 259UL),
                           &____alias_loc_id_9, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 256UL), (12022527874929792475UL + 259UL),
                            &____alias_loc_id_10, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 256UL), (12022527874929792475UL + 259UL),
                            &____alias_loc_id_11, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 258UL), (12022527874929792475UL + 259UL),
                            &____alias_loc_id_12, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 258UL), (12022527874929792475UL + 259UL),
                            &____alias_loc_id_13, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 258UL), (12022527874929792475UL + 259UL),
                            &____alias_loc_id_14, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 256UL), (12022527874929792475UL + 257UL),
                            &____alias_loc_id_15, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 252UL), (12022527874929792475UL + 255UL),
                            &____alias_loc_id_16, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 252UL), (12022527874929792475UL + 253UL),
                            &____alias_loc_id_17, (unsigned)0, (unsigned)0, (unsigned)1, "addArg", (unsigned)3, (12022527874929792475UL + 3UL), (12022527874929792475UL + 247UL), (12022527874929792475UL + 251UL),
                            &____alias_loc_id_18, (unsigned)4, (unsigned)0, (unsigned)1, (12022527874929792475UL + 1UL), (12022527874929792475UL + 2UL), (12022527874929792475UL + 3UL), (12022527874929792475UL + 4UL), "addArg", (unsigned)3, (12022527874929792475UL + 4UL), (12022527874929792475UL + 245UL), (12022527874929792475UL + 249UL),
                            &____alias_loc_id_19, (unsigned)2, (unsigned)0, (unsigned)0, (12022527874929792475UL + 176UL), (12022527874929792475UL + 177UL),
                            "parseCommandLine", 0, "_Z16parseCommandLineiPPc", "_Z20parseCommandLine_npmiPPc", 19, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_10, &____alias_loc_id_11, &____alias_loc_id_12, &____alias_loc_id_13, &____alias_loc_id_14, &____alias_loc_id_15, &____alias_loc_id_16, &____alias_loc_id_17, &____alias_loc_id_18, &____alias_loc_id_2, &____alias_loc_id_3, &____alias_loc_id_4, &____alias_loc_id_5, &____alias_loc_id_6, &____alias_loc_id_7, &____alias_loc_id_8, &____alias_loc_id_9, 3, (12022527874929792475UL + 146UL), 0UL, (12022527874929792475UL + 148UL), 0UL, 34, "memset", 3, (12022527874929792475UL + 3UL), 0UL, 0UL, 0UL, "memset", 3, (12022527874929792475UL + 3UL), 0UL, 0UL, 0UL, "memset", 3, (12022527874929792475UL + 3UL), 0UL, 0UL, 0UL, "strcpy", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 245UL), (12022527874929792475UL + 21UL), "strcpy", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 246UL), (12022527874929792475UL + 24UL), "strcpy", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 247UL), (12022527874929792475UL + 27UL), "addArg", 7, (12022527874929792475UL + 245UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 4UL), 0UL, (12022527874929792475UL + 249UL), 0UL, "addArg", 7, (12022527874929792475UL + 247UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 251UL), 0UL, "addArg", 7, (12022527874929792475UL + 252UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 253UL), 0UL, "addArg", 7, (12022527874929792475UL + 252UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 255UL), 0UL, "addArg", 7, (12022527874929792475UL + 256UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 257UL), 0UL, "addArg", 7, (12022527874929792475UL + 258UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "addArg", 7, (12022527874929792475UL + 258UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "addArg", 7, (12022527874929792475UL + 258UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "addArg", 7, (12022527874929792475UL + 256UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "addArg", 7, (12022527874929792475UL + 256UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "addArg", 7, (12022527874929792475UL + 256UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "addArg", 7, (12022527874929792475UL + 247UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 271UL), 0UL, "addArg", 7, (12022527874929792475UL + 272UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 273UL), 0UL, "addArg", 7, (12022527874929792475UL + 258UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 275UL), 0UL, "addArg", 7, (12022527874929792475UL + 276UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 277UL), 0UL, "addArg", 7, (12022527874929792475UL + 245UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 279UL), 0UL, "addArg", 7, (12022527874929792475UL + 256UL), 0UL, 0UL, 0UL, (12022527874929792475UL + 3UL), 0UL, (12022527874929792475UL + 259UL), 0UL, "processArgs", 2, 0UL, (12022527874929792475UL + 148UL), 0UL, "strlen", 1, (12022527874929792475UL + 3UL), 0UL, "strcmp", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 256UL), 0UL, "strcpy", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 253UL), (12022527874929792475UL + 121UL), "strcmp", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 247UL), 0UL, "strcpy", 2, (12022527874929792475UL + 3UL), (12022527874929792475UL + 272UL), (12022527874929792475UL + 130UL), "printArgs", 0, 0UL, "freeArgs", 0, 0UL, "exit", 1, 0UL, 0UL, "freeArgs", 0, 0UL, "memcpy", 3, (12022527874929792475UL + 146UL), (12022527874929792475UL + 3UL), 0UL, 0UL,
                            "printCmdYaml", 0, "_Z12printCmdYamlP8_IO_FILEP9CommandSt", "_Z16printCmdYaml_npmP8_IO_FILEP9CommandSt", 1, &____alias_loc_id_19, 2, (12022527874929792475UL + 240UL), (12022527874929792475UL + 241UL), 0UL, 3, "printRank", 0, 0UL, "fprintf", 18, (12022527874929792475UL + 240UL), (12022527874929792475UL + 285UL), 0UL, (12022527874929792475UL + 241UL), (12022527874929792475UL + 241UL), (12022527874929792475UL + 241UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "fflush", 1, (12022527874929792475UL + 240UL), 0UL,
                               "addArg", (void **)&(____chimes_extern_func_addArg),
                               "freeArgs", (void **)&(____chimes_extern_func_freeArgs),
                               "printArgs", (void **)&(____chimes_extern_func_printArgs),
                               "printRank", (void **)&(____chimes_extern_func_printRank),
                               "processArgs", (void **)&(____chimes_extern_func_processArgs),
                           "parseCommandLine", &(____chimes_does_checkpoint_parseCommandLine_npm),
                           "printCmdYaml", &(____chimes_does_checkpoint_printCmdYaml_npm),
                           "addArg", &(____chimes_does_checkpoint_addArg_npm),
                           "freeArgs", &(____chimes_does_checkpoint_freeArgs_npm),
                           "printArgs", &(____chimes_does_checkpoint_printArgs_npm),
                           "printRank", &(____chimes_does_checkpoint_printRank_npm),
                           "processArgs", &(____chimes_does_checkpoint_processArgs_npm),
                             (12022527874929792475UL + 177UL), (12022527874929792475UL + 241UL),
                             (12022527874929792475UL + 176UL), (12022527874929792475UL + 240UL),
                             (12022527874929792475UL + 2UL), (12022527874929792475UL + 148UL),
                     "CommandSt", 25152UL, 16, "[ 1024 x char ]", (int)__builtin_offsetof (struct CommandSt, potDir), "[ 1024 x char ]", (int)__builtin_offsetof (struct CommandSt, potName), "[ 1024 x char ]", (int)__builtin_offsetof (struct CommandSt, potType), "int", (int)__builtin_offsetof (struct CommandSt, doeam), "int", (int)__builtin_offsetof (struct CommandSt, nx), "int", (int)__builtin_offsetof (struct CommandSt, ny), "int", (int)__builtin_offsetof (struct CommandSt, nz), "int", (int)__builtin_offsetof (struct CommandSt, xproc), "int", (int)__builtin_offsetof (struct CommandSt, yproc), "int", (int)__builtin_offsetof (struct CommandSt, zproc), "int", (int)__builtin_offsetof (struct CommandSt, nSteps), "int", (int)__builtin_offsetof (struct CommandSt, printRate), "double", (int)__builtin_offsetof (struct CommandSt, dt), "double", (int)__builtin_offsetof (struct CommandSt, lat), "double", (int)__builtin_offsetof (struct CommandSt, temperature), "double", (int)__builtin_offsetof (struct CommandSt, initialDelta),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                             "parseCommandLine", "_Z16parseCommandLineiPPc", 21, "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "processArgs", "printArgs", "freeArgs", "freeArgs",
                             "printCmdYaml", "_Z12printCmdYamlP8_IO_FILEP9CommandSt", 1, "printRank",
                        "parseCommandLine|argc|0", 1, "addArg",
                        "parseCommandLine|argv|0", 1, "addArg",
                        "parseCommandLine|cmd|0", 1, "parseCommandLine",
                        "parseCommandLine|help|0", 1, "parseCommandLine",
                        "printCmdYaml|file|0", 1, "printRank",
                        "printCmdYaml|cmd|0", 1, "printRank");
    return 0;
}

static const int __libchimes_module_init = module_init();
