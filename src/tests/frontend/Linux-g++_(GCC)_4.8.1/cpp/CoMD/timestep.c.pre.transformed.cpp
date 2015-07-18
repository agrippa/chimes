# 1 "timestep.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "timestep.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_advancePosition_npm = 1;
static int ____chimes_does_checkpoint_kineticEnergy_npm = 1;
static int ____chimes_does_checkpoint_advanceVelocity_npm = 1;
static int ____chimes_does_checkpoint_redistributeAtoms_npm = 1;
static int ____chimes_does_checkpoint_addRealParallel_npm = 1;
static int ____chimes_does_checkpoint_haloExchange_npm = 1;
static int ____chimes_does_checkpoint_profileStart_npm = 1;
static int ____chimes_does_checkpoint_profileStop_npm = 1;
static int ____chimes_does_checkpoint_sortAtomsInCell_npm = 1;
static int ____chimes_does_checkpoint_updateLinkCells_npm = 1;

static int ____must_checkpoint_redistributeAtoms_sim_0 = 2;
static int ____must_checkpoint_redistributeAtoms_ii_0 = 2;
static int ____must_checkpoint_kineticEnergy_s_0 = 2;
static int ____must_checkpoint_kineticEnergy_eLocal_0 = 2;
static int ____must_checkpoint_kineticEnergy_eSum_0 = 2;

static int ____must_manage_advancePosition = 2;
static int ____must_manage_kineticEnergy = 2;
static int ____must_manage_redistributeAtoms = 2;
static int ____must_manage_advanceVelocity = 2;

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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 2 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 3 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"

# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.h" 1






# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 1






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
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
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
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
   int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
   void (*unloadBuffer)(void* parms, void* data, int face, int bufSize, char* buf);


   void (*destroy)(void* parms);


   void* parms;
}
HaloExchange;


HaloExchange* initAtomHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


HaloExchange* initForceHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


void destroyHaloExchange(HaloExchange** haloExchange);


void haloExchange(HaloExchange* haloExchange, void* data);


void sortAtomsInCell(struct AtomsSt* atoms, struct LinkCellSt* boxes, int iBox);
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h" 1
# 12 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h"
struct DomainSt;
struct AtomsSt;



typedef struct LinkCellSt
{
   int gridSize[3];
   int nLocalBoxes;
   int nHaloBoxes;
   int nTotalBoxes;

   real3 localMin;
   real3 localMax;
   real3 boxSize;
   real3 invBoxSize;

   int* nAtoms;
} LinkCell;

LinkCell* initLinkCells(const struct DomainSt* domain, real_t cutoff);
void destroyLinkCells(LinkCell** boxes);

int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes);
void putAtomInBox(LinkCell* boxes, struct AtomsSt* atoms,
                  const int gid, const int iType,
                  const real_t x, const real_t y, const real_t z,
                  const real_t px, const real_t py, const real_t pz);
int getBoxFromTuple(LinkCell* boxes, int x, int y, int z);

void moveAtom(LinkCell* boxes, struct AtomsSt* atoms, int iId, int iBox, int jBox);


void updateLinkCells(LinkCell* boxes, struct AtomsSt* atoms);

int maxOccupancy(LinkCell* boxes);
# 11 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/decomposition.h" 1
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/decomposition.h"
typedef struct DomainSt
{

   int procGrid[3];
   int procCoord[3];


   real3 globalMin;
   real3 globalMax;
   real3 globalExtent;


   real3 localMin;
   real3 localMax;
   real3 localExtent;
} Domain;

struct DomainSt* initDecomposition(int xproc, int yproc, int zproc,
                                   real3 globalExtent);


int processorNum(Domain* domain, int dix, int diy, int dik);
# 12 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/initAtoms.h" 1
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/initAtoms.h"
struct SimFlatSt;
struct LinkCellSt;


typedef struct AtomsSt
{

   int nLocal;
   int nGlobal;

   int* gid;
   int* iSpecies;

   real3* r;
   real3* p;
   real3* f;
   real_t* U;
} Atoms;



Atoms* initAtoms(struct LinkCellSt* boxes);
void destroyAtoms(struct AtomsSt* atoms);

void createFccLattice(int nx, int ny, int nz, real_t lat, struct SimFlatSt* s);

void setVcm(struct SimFlatSt* s, real_t vcm[3]);
void setTemperature(struct SimFlatSt* s, real_t temperature);
void randomDisplacements(struct SimFlatSt* s, real_t delta);
# 13 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h"
typedef struct BasePotentialSt
{
   real_t cutoff;
   real_t mass;
   real_t lat;
   char latticeType[8];
   char name[3];
   int atomicNo;
   int (*force)(struct SimFlatSt* s);
   void (*print)(FILE* file, struct BasePotentialSt* pot);
   void (*destroy)(struct BasePotentialSt** pot);
} BasePotential;



typedef struct SpeciesDataSt
{
   char name[3];
   int atomicNo;
   real_t mass;
} SpeciesData;



typedef struct ValidateSt
{
   double eTot0;
   int nAtoms0;
} Validate;





typedef struct SimFlatSt
{
   int nSteps;
   int printRate;
   double dt;

   Domain* domain;

   LinkCell* boxes;

   Atoms* atoms;

   SpeciesData* species;

   real_t ePotential;
   real_t eKinetic;

   BasePotential *pot;

   HaloExchange* atomExchange;

} SimFlat;
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.h" 2

double timestep(SimFlat* s, int n, real_t dt);
void computeForce(SimFlat* s);
void kineticEnergy(SimFlat* s);


void redistributeAtoms(struct SimFlatSt* sim);
# 5 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 5 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 6 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 7 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"

# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 1
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h"
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
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h" 1
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h"
enum TimerHandle{
   totalTimer,
   loopTimer,
   timestepTimer,
   positionTimer,
   velocityTimer,
   redistributeTimer,
   atomHaloTimer,
   computeForceTimer,
   eamHaloTimer,
   commHaloTimer,
   commReduceTimer,
   numberOfTimers};
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 11 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 9 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
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
# 10 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 2

extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 13 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 13 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 14 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 15 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
static void advanceVelocity(SimFlat* s, int nBoxes, real_t dt);
# 16 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
static void advancePosition(SimFlat* s, int nBoxes, real_t dt);
# 35 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 35 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advanceVelocity_npm(SimFlat* s, int nBoxes, real_t dt);void advancePosition_npm(SimFlat* s, int nBoxes, real_t dt);void kineticEnergy_npm(SimFlat* s);void redistributeAtoms_npm(SimFlat* sim);static void (*____chimes_extern_func_profileStart)(enum TimerHandle) = profileStart;static void (*____chimes_extern_func_profileStop)(enum TimerHandle) = profileStop;
double timestep_quick(SimFlat* s, int nSteps, real_t dt); double timestep(SimFlat* s, int nSteps, real_t dt);void computeForce_quick(SimFlat* s); void computeForce(SimFlat* s);void advanceVelocity_quick(SimFlat* s, int nBoxes, real_t dt); void advanceVelocity(SimFlat* s, int nBoxes, real_t dt);void advancePosition_quick(SimFlat* s, int nBoxes, real_t dt); void advancePosition(SimFlat* s, int nBoxes, real_t dt);void kineticEnergy_quick(SimFlat* s); void kineticEnergy(SimFlat* s);void redistributeAtoms_quick(SimFlat* sim); void redistributeAtoms(SimFlat* sim);
double timestep_resumable(SimFlat* s, int nSteps, real_t dt)
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&timestep), "timestep", (int *)0, 3, 3, (size_t)(7237354288423011275UL), (size_t)(0UL), (size_t)(0UL), "timestep|s|0", (int *)0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "timestep|nSteps|0", (int *)0, "i32", (void *)(&nSteps), (size_t)4, 0, 0, 0, "timestep|dt|0", (int *)0, "double", (void *)(&dt), (size_t)8, 0, 0, 0) ; int ii;
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 register_stack_vars(1, "timestep|ii|0", (int *)0x0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(18): { goto call_lbl_18; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } default: { chimes_error(); } } } ; ;
# 37 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { for ( ii = (0) ; ii<nSteps; ++ii)
# 38 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 39 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_0: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (profileStart)(velocityTimer); }) ) : (({ calling_npm("profileStart", ____alias_loc_id_1); (*____chimes_extern_func_profileStart)(velocityTimer); }))); } while(0);
# 40 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_1: ({ calling_npm("advanceVelocity", 0); advanceVelocity_npm(s, s->boxes->nLocalBoxes, 0.5*dt); });
# 41 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_2: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(velocityTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(velocityTimer); }))); } while(0);
# 42 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 43 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 44 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_3: checkpoint_transformed(3, 0);
# 45 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 46 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 47 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_4: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 4, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(positionTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(positionTimer); }))); } while(0);
# 48 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_5: ({ calling_npm("advancePosition", 0); advancePosition_npm(s, s->boxes->nLocalBoxes, dt); });
# 49 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_6: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 6, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(positionTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(positionTimer); }))); } while(0);
# 50 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 51 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 52 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_7: checkpoint_transformed(7, 0);
# 53 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 54 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 55 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_8: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 8, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(redistributeTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(redistributeTimer); }))); } while(0);
# 56 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_9: (____chimes_does_checkpoint_redistributeAtoms_npm ? ( ({ calling((void*)redistributeAtoms, 9, 0, 0UL, 1, (size_t)(7237354288423011275UL)); (redistributeAtoms)(s); }) ) : (({ calling_npm("redistributeAtoms", 0); redistributeAtoms_npm(s); })));
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_10: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 10, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(redistributeTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(redistributeTimer); }))); } while(0);
# 58 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 59 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 60 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_11: checkpoint_transformed(11, 0);
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 62 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_12: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 12, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(computeForceTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(computeForceTimer); }))); } while(0);
# 64 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_13: ({ calling((void*)computeForce, 13, 0, 0UL, 1, (size_t)(7237354288423011275UL)); (computeForce)(s); }) ;
# 65 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_14: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 14, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(computeForceTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(computeForceTimer); }))); } while(0);
# 66 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 68 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_15: checkpoint_transformed(15, 0);
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 70 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 71 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_16: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 16, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(velocityTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(velocityTimer); }))); } while(0);
# 72 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_17: ({ calling_npm("advanceVelocity", 0); advanceVelocity_npm(s, s->boxes->nLocalBoxes, 0.5*dt); });
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_18: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 18, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(velocityTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(velocityTimer); }))); } while(0);
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 75 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 76 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_19: checkpoint_transformed(19, 0);
# 77 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 78 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 79 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 80 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_20: (____chimes_does_checkpoint_kineticEnergy_npm ? ( ({ calling((void*)kineticEnergy, 20, ____alias_loc_id_0, 0UL, 1, (size_t)(7237354288423011275UL)); (kineticEnergy)(s); }) ) : (({ calling_npm("kineticEnergy", ____alias_loc_id_0); kineticEnergy_npm(s); })));
# 81 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 82 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    real_t ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (s->ePotential); rm_stack(false, 0UL, "timestep", (int *)0x0, ____alias_loc_id_8, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "timestep", (int *)0x0, ____alias_loc_id_8, ____chimes_did_disable0, false); }
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 85 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void computeForce_resumable(SimFlat* s)
# 86 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&computeForce), "computeForce", (int *)0, 1, 0, (size_t)(7237354288423011702UL)) ; if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 87 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_0: ((int (*)(struct SimFlatSt *))(translate_fptr((void *)s->pot->force, 0, 0, 0UL, 1, 7237354288423011702UL)))(s);
# 88 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "computeForce", (int *)0x0, 0, ____chimes_did_disable1, false); }
# 89 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 90 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advanceVelocity_resumable(SimFlat* s, int nBoxes, real_t dt)
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&advanceVelocity), "advanceVelocity", &____must_manage_advanceVelocity, 3, 0, (size_t)(7237354288423011481UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { int iBox; for ( iBox = (0) ; iBox<nBoxes; iBox++)
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      { int iOff; int ii; for ( iOff = (64*iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][0] += dt*s->atoms->f[iOff][0];
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][1] += dt*s->atoms->f[iOff][1];
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][2] += dt*s->atoms->f[iOff][2];
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      } }
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "advanceVelocity", &____must_manage_advanceVelocity, ____alias_loc_id_9, ____chimes_did_disable2, false); }
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advancePosition_resumable(SimFlat* s, int nBoxes, real_t dt)
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&advancePosition), "advancePosition", &____must_manage_advancePosition, 3, 0, (size_t)(7237354288423011639UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { int iBox; for ( iBox = (0) ; iBox<nBoxes; iBox++)
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      { int iOff; int ii; for ( iOff = (64*iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          real_t invMass; invMass = (1.0/s->species[iSpecies].mass) ;
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][0] += dt*s->atoms->p[iOff][0]*invMass;
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][1] += dt*s->atoms->p[iOff][1]*invMass;
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][2] += dt*s->atoms->p[iOff][2]*invMass;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      } }
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "advancePosition", &____must_manage_advancePosition, ____alias_loc_id_10, ____chimes_did_disable3, false); }
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
static void (*____chimes_extern_func_addRealParallel)(double *, double *, int) = addRealParallel;
void kineticEnergy_resumable(SimFlat* s)
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&kineticEnergy), "kineticEnergy", &____must_manage_kineticEnergy, 1, 1, (size_t)(7237354288423011869UL), "kineticEnergy|s|0", &____must_checkpoint_kineticEnergy_s_0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0) ; real_t eSum[2];
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
real_t eLocal[2];
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 if (____must_checkpoint_kineticEnergy_eSum_0 || ____must_checkpoint_kineticEnergy_eLocal_0) { register_stack_vars(2, "kineticEnergy|eSum|0", &____must_checkpoint_kineticEnergy_eSum_0, "[2 x double]", (void *)(eSum), (size_t)16, 0, 0, 0, "kineticEnergy|eLocal|0", &____must_checkpoint_kineticEnergy_eLocal_0, "[2 x double]", (void *)(eLocal), (size_t)16, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    ;
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   eLocal[0] = s->ePotential;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   eLocal[1] = 0;
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { int iBox; for ( iBox = (0) ; iBox<s->boxes->nLocalBoxes; iBox++)
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      { int iOff; int ii; for ( iOff = (64*iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          real_t invMass; invMass = (0.5/s->species[iSpecies].mass) ;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         eLocal[1] += ( s->atoms->p[iOff][0] * s->atoms->p[iOff][0] +
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][1] * s->atoms->p[iOff][1] +
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][2] * s->atoms->p[iOff][2] )*invMass;
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      } }
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    ;
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_0: ({ calling((void*)profileStart, 0, ____alias_loc_id_7, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_1: ({ calling((void*)addRealParallel, 1, ____alias_loc_id_6, 0UL, 3, (size_t)(7237354288423011704UL), (size_t)(7237354288423011710UL), (size_t)(0UL)); (addRealParallel)(eLocal, eSum, 2); }) ;
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_2: ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   s->ePotential = eSum[0];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   s->eKinetic = eSum[1];
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "kineticEnergy", &____must_manage_kineticEnergy, ____alias_loc_id_12, ____chimes_did_disable4, false); }
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
static void (*____chimes_extern_func_haloExchange)(struct HaloExchangeSt *, void *) = haloExchange;static void (*____chimes_extern_func_sortAtomsInCell)(struct AtomsSt *, struct LinkCellSt *, int) = sortAtomsInCell;static void (*____chimes_extern_func_updateLinkCells)(struct LinkCellSt *, struct AtomsSt *) = updateLinkCells;
void redistributeAtoms_resumable(SimFlat* sim)
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&redistributeAtoms), "redistributeAtoms", &____must_manage_redistributeAtoms, 1, 1, (size_t)(7237354288423011656UL), "redistributeAtoms|sim|0", &____must_checkpoint_redistributeAtoms_sim_0, "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0) ; int ii;
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 if (____must_checkpoint_redistributeAtoms_ii_0) { register_stack_vars(1, "redistributeAtoms|ii|0", &____must_checkpoint_redistributeAtoms_ii_0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ; ;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_0: ({ LinkCell * ____chimes_arg18; Atoms * ____chimes_arg19; if (!____chimes_replaying) { ____chimes_arg18 = (sim->boxes); ____chimes_arg19 = (sim->atoms); } calling((void*)updateLinkCells, 0, ____alias_loc_id_4, 0UL, 2, (size_t)(7237354288423011658UL), (size_t)(7237354288423011658UL)); (updateLinkCells)(____chimes_arg18, ____chimes_arg19); }) ;
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_1: ({ calling((void*)profileStart, 1, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(atomHaloTimer); }) ; } while(0);
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_2: ({ HaloExchange * ____chimes_arg21; if (!____chimes_replaying) { ____chimes_arg21 = (sim->atomExchange); } calling((void*)haloExchange, 2, ____alias_loc_id_3, 0UL, 2, (size_t)(7237354288423011658UL), (size_t)(7237354288423011656UL)); (haloExchange)(____chimes_arg21, sim); }) ;
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_3: ({ calling((void*)profileStop, 3, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(atomHaloTimer); }) ; } while(0);
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { for ( ii = (0) ;ii<sim->boxes->nTotalBoxes; ++ii) { call_lbl_4: ({ Atoms * ____chimes_arg24; LinkCell * ____chimes_arg25; if (!____chimes_replaying) { ____chimes_arg24 = (sim->atoms); ____chimes_arg25 = (sim->boxes); } calling((void*)sortAtomsInCell, 4, ____alias_loc_id_2, 0UL, 3, (size_t)(7237354288423011658UL), (size_t)(7237354288423011658UL), (size_t)(0UL)); (sortAtomsInCell)(____chimes_arg24, ____chimes_arg25, ii); }) ; } };
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "redistributeAtoms", &____must_manage_redistributeAtoms, ____alias_loc_id_11, ____chimes_did_disable5, false); }
# 35 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
double timestep_quick(SimFlat* s, int nSteps, real_t dt)
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&timestep), "timestep", (int *)0, 3, 3, (size_t)(7237354288423011275UL), (size_t)(0UL), (size_t)(0UL), "timestep|s|0", (int *)0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "timestep|nSteps|0", (int *)0, "i32", (void *)(&nSteps), (size_t)4, 0, 0, 0, "timestep|dt|0", (int *)0, "double", (void *)(&dt), (size_t)8, 0, 0, 0) ; int ii;
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 register_stack_vars(1, "timestep|ii|0", (int *)0x0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); ; ;
# 37 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { for ( ii = (0) ; ii<nSteps; ++ii)
# 38 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 39 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_0: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (profileStart)(velocityTimer); }) ) : (({ calling_npm("profileStart", ____alias_loc_id_1); (*____chimes_extern_func_profileStart)(velocityTimer); }))); } while(0);
# 40 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_1: ({ calling_npm("advanceVelocity", 0); advanceVelocity_npm(s, s->boxes->nLocalBoxes, 0.5*dt); });
# 41 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_2: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(velocityTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(velocityTimer); }))); } while(0);
# 42 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 43 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 44 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_3: checkpoint_transformed(3, 0);
# 45 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 46 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 47 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_4: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 4, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(positionTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(positionTimer); }))); } while(0);
# 48 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_5: ({ calling_npm("advancePosition", 0); advancePosition_npm(s, s->boxes->nLocalBoxes, dt); });
# 49 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_6: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 6, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(positionTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(positionTimer); }))); } while(0);
# 50 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 51 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 52 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_7: checkpoint_transformed(7, 0);
# 53 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 54 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 55 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_8: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 8, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(redistributeTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(redistributeTimer); }))); } while(0);
# 56 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_9: (____chimes_does_checkpoint_redistributeAtoms_npm ? ( ({ calling((void*)redistributeAtoms, 9, 0, 0UL, 1, (size_t)(7237354288423011275UL)); redistributeAtoms_quick(s); }) ) : (({ calling_npm("redistributeAtoms", 0); redistributeAtoms_npm(s); })));
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_10: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 10, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(redistributeTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(redistributeTimer); }))); } while(0);
# 58 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 59 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 60 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_11: checkpoint_transformed(11, 0);
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 62 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_12: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 12, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(computeForceTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(computeForceTimer); }))); } while(0);
# 64 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_13: ({ calling((void*)computeForce, 13, 0, 0UL, 1, (size_t)(7237354288423011275UL)); computeForce_quick(s); }) ;
# 65 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_14: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 14, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(computeForceTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(computeForceTimer); }))); } while(0);
# 66 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 68 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_15: checkpoint_transformed(15, 0);
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 70 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 71 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_16: (____chimes_does_checkpoint_profileStart_npm ? ( ({ calling((void*)profileStart, 16, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(velocityTimer); }) ) : (({ calling_npm("profileStart", 0); (*____chimes_extern_func_profileStart)(velocityTimer); }))); } while(0);
# 72 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_17: ({ calling_npm("advanceVelocity", 0); advanceVelocity_npm(s, s->boxes->nLocalBoxes, 0.5*dt); });
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      do { call_lbl_18: (____chimes_does_checkpoint_profileStop_npm ? ( ({ calling((void*)profileStop, 18, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(velocityTimer); }) ) : (({ calling_npm("profileStop", 0); (*____chimes_extern_func_profileStop)(velocityTimer); }))); } while(0);
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 75 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 76 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
       call_lbl_19: checkpoint_transformed(19, 0);
# 77 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 78 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 79 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 80 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_20: (____chimes_does_checkpoint_kineticEnergy_npm ? ( ({ calling((void*)kineticEnergy, 20, ____alias_loc_id_0, 0UL, 1, (size_t)(7237354288423011275UL)); kineticEnergy_quick(s); }) ) : (({ calling_npm("kineticEnergy", ____alias_loc_id_0); kineticEnergy_npm(s); })));
# 81 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 82 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    real_t ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (s->ePotential); rm_stack(false, 0UL, "timestep", (int *)0x0, ____alias_loc_id_8, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "timestep", (int *)0x0, ____alias_loc_id_8, ____chimes_did_disable0, false); }

double timestep(SimFlat* s, int nSteps, real_t dt) { return (____chimes_replaying ? timestep_resumable(s, nSteps, dt) : timestep_quick(s, nSteps, dt)); }
# 85 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void computeForce_quick(SimFlat* s)
# 86 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&computeForce), "computeForce", (int *)0, 1, 0, (size_t)(7237354288423011702UL)) ; ; ;
# 87 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_0: ((int (*)(struct SimFlatSt *))(translate_fptr((void *)s->pot->force, 0, 0, 0UL, 1, 7237354288423011702UL)))(s);
# 88 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "computeForce", (int *)0x0, 0, ____chimes_did_disable1, false); }

void computeForce(SimFlat* s) { (____chimes_replaying ? computeForce_resumable(s) : computeForce_quick(s)); }
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advanceVelocity_quick(SimFlat* s, int nBoxes, real_t dt)
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&advanceVelocity), "advanceVelocity", &____must_manage_advanceVelocity, 3, 0, (size_t)(7237354288423011481UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { int iBox; for ( iBox = (0) ; iBox<nBoxes; iBox++)
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      { int iOff; int ii; for ( iOff = (64*iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][0] += dt*s->atoms->f[iOff][0];
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][1] += dt*s->atoms->f[iOff][1];
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][2] += dt*s->atoms->f[iOff][2];
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      } }
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "advanceVelocity", &____must_manage_advanceVelocity, ____alias_loc_id_9, ____chimes_did_disable2, false); }

void advanceVelocity(SimFlat* s, int nBoxes, real_t dt) { (____chimes_replaying ? advanceVelocity_resumable(s, nBoxes, dt) : advanceVelocity_quick(s, nBoxes, dt)); }
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advancePosition_quick(SimFlat* s, int nBoxes, real_t dt)
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&advancePosition), "advancePosition", &____must_manage_advancePosition, 3, 0, (size_t)(7237354288423011639UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { int iBox; for ( iBox = (0) ; iBox<nBoxes; iBox++)
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      { int iOff; int ii; for ( iOff = (64*iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          real_t invMass; invMass = (1.0/s->species[iSpecies].mass) ;
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][0] += dt*s->atoms->p[iOff][0]*invMass;
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][1] += dt*s->atoms->p[iOff][1]*invMass;
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][2] += dt*s->atoms->p[iOff][2]*invMass;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      } }
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "advancePosition", &____must_manage_advancePosition, ____alias_loc_id_10, ____chimes_did_disable3, false); }

void advancePosition(SimFlat* s, int nBoxes, real_t dt) { (____chimes_replaying ? advancePosition_resumable(s, nBoxes, dt) : advancePosition_quick(s, nBoxes, dt)); }
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void kineticEnergy_quick(SimFlat* s)
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&kineticEnergy), "kineticEnergy", &____must_manage_kineticEnergy, 1, 1, (size_t)(7237354288423011869UL), "kineticEnergy|s|0", &____must_checkpoint_kineticEnergy_s_0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0) ; real_t eSum[2];
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
real_t eLocal[2];
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 if (____must_checkpoint_kineticEnergy_eSum_0 || ____must_checkpoint_kineticEnergy_eLocal_0) { register_stack_vars(2, "kineticEnergy|eSum|0", &____must_checkpoint_kineticEnergy_eSum_0, "[2 x double]", (void *)(eSum), (size_t)16, 0, 0, 0, "kineticEnergy|eLocal|0", &____must_checkpoint_kineticEnergy_eLocal_0, "[2 x double]", (void *)(eLocal), (size_t)16, 0, 0, 0); } ; ;
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    ;
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   eLocal[0] = s->ePotential;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   eLocal[1] = 0;
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { int iBox; for ( iBox = (0) ; iBox<s->boxes->nLocalBoxes; iBox++)
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      { int iOff; int ii; for ( iOff = (64*iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
          real_t invMass; invMass = (0.5/s->species[iSpecies].mass) ;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         eLocal[1] += ( s->atoms->p[iOff][0] * s->atoms->p[iOff][0] +
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][1] * s->atoms->p[iOff][1] +
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][2] * s->atoms->p[iOff][2] )*invMass;
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      } }
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   } }
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    ;
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_0: ({ calling((void*)profileStart, 0, ____alias_loc_id_7, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_1: ({ calling((void*)addRealParallel, 1, ____alias_loc_id_6, 0UL, 3, (size_t)(7237354288423011704UL), (size_t)(7237354288423011710UL), (size_t)(0UL)); (addRealParallel)(eLocal, eSum, 2); }) ;
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_2: ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   s->ePotential = eSum[0];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   s->eKinetic = eSum[1];
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "kineticEnergy", &____must_manage_kineticEnergy, ____alias_loc_id_12, ____chimes_did_disable4, false); }

void kineticEnergy(SimFlat* s) { (____chimes_replaying ? kineticEnergy_resumable(s) : kineticEnergy_quick(s)); }
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void redistributeAtoms_quick(SimFlat* sim)
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&redistributeAtoms), "redistributeAtoms", &____must_manage_redistributeAtoms, 1, 1, (size_t)(7237354288423011656UL), "redistributeAtoms|sim|0", &____must_checkpoint_redistributeAtoms_sim_0, "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0) ; int ii;
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 if (____must_checkpoint_redistributeAtoms_ii_0) { register_stack_vars(1, "redistributeAtoms|ii|0", &____must_checkpoint_redistributeAtoms_ii_0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } ; ;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_0: ({ calling((void*)updateLinkCells, 0, ____alias_loc_id_4, 0UL, 2, (size_t)(7237354288423011658UL), (size_t)(7237354288423011658UL)); (updateLinkCells)(sim->boxes, sim->atoms); }) ;
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_1: ({ calling((void*)profileStart, 1, 0, 0UL, 1, (size_t)(0UL)); (profileStart)(atomHaloTimer); }) ; } while(0);
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
    call_lbl_2: ({ calling((void*)haloExchange, 2, ____alias_loc_id_3, 0UL, 2, (size_t)(7237354288423011658UL), (size_t)(7237354288423011656UL)); (haloExchange)(sim->atomExchange, sim); }) ;
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { call_lbl_3: ({ calling((void*)profileStop, 3, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(atomHaloTimer); }) ; } while(0);
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   { for ( ii = (0) ;ii<sim->boxes->nTotalBoxes; ++ii) { call_lbl_4: ({ calling((void*)sortAtomsInCell, 4, ____alias_loc_id_2, 0UL, 3, (size_t)(7237354288423011658UL), (size_t)(7237354288423011658UL), (size_t)(0UL)); (sortAtomsInCell)(sim->atoms, sim->boxes, ii); }) ; } };
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "redistributeAtoms", &____must_manage_redistributeAtoms, ____alias_loc_id_11, ____chimes_did_disable5, false); }

void redistributeAtoms(SimFlat* sim) { (____chimes_replaying ? redistributeAtoms_resumable(sim) : redistributeAtoms_quick(sim)); }
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advanceVelocity_npm(SimFlat* s, int nBoxes, real_t dt)
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   for (int iBox=0; iBox<nBoxes; iBox++)
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      for (int iOff=64*iBox,ii=0; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][0] += dt*s->atoms->f[iOff][0];
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][1] += dt*s->atoms->f[iOff][1];
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][2] += dt*s->atoms->f[iOff][2];
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      }
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   }
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
}
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advancePosition_npm(SimFlat* s, int nBoxes, real_t dt)
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   for (int iBox=0; iBox<nBoxes; iBox++)
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      for (int iOff=64*iBox,ii=0; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         int iSpecies = s->atoms->iSpecies[iOff];
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         real_t invMass = 1.0/s->species[iSpecies].mass;
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][0] += dt*s->atoms->p[iOff][0]*invMass;
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][1] += dt*s->atoms->p[iOff][1]*invMass;
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->r[iOff][2] += dt*s->atoms->p[iOff][2]*invMass;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      }
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   }
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
}
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void kineticEnergy_npm(SimFlat* s)
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   real_t eLocal[2];
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   eLocal[0] = s->ePotential;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   eLocal[1] = 0;
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; iBox++)
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   {
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      for (int iOff=64*iBox,ii=0; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      {
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         int iSpecies = s->atoms->iSpecies[iOff];
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         real_t invMass = 0.5/s->species[iSpecies].mass;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         eLocal[1] += ( s->atoms->p[iOff][0] * s->atoms->p[iOff][0] +
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][1] * s->atoms->p[iOff][1] +
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
         s->atoms->p[iOff][2] * s->atoms->p[iOff][2] )*invMass;
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
      }
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   }
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   real_t eSum[2];
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { (*____chimes_extern_func_profileStart)(commReduceTimer); } while(0);
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   (*____chimes_extern_func_addRealParallel)(eLocal, eSum, 2);
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { (*____chimes_extern_func_profileStop)(commReduceTimer); } while(0);
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   s->ePotential = eSum[0];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   s->eKinetic = eSum[1];
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
}
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void redistributeAtoms_npm(SimFlat* sim)
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   (*____chimes_extern_func_updateLinkCells)(sim->boxes, sim->atoms);
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { (*____chimes_extern_func_profileStart)(atomHaloTimer); } while(0);
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   (*____chimes_extern_func_haloExchange)(sim->atomExchange, sim);
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   do { (*____chimes_extern_func_profileStop)(atomHaloTimer); } while(0);
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
   for (int ii=0;ii<sim->boxes->nTotalBoxes; ++ii) { (*____chimes_extern_func_sortAtomsInCell)(sim->atoms, sim->boxes, ii); };
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
}





static int module_init() {
    init_module(7237354288423011253UL, 16, 6, 5, 13, 4, 6, 10, 3, 12, 10,
                           &____alias_loc_id_0, (unsigned)4, (unsigned)0, (unsigned)0, (7237354288423011253UL + 1UL), (7237354288423011253UL + 2UL), (7237354288423011253UL + 3UL), (7237354288423011253UL + 4UL),
                           &____alias_loc_id_1, (unsigned)4, (unsigned)0, (unsigned)0, (7237354288423011253UL + 1UL), (7237354288423011253UL + 2UL), (7237354288423011253UL + 3UL), (7237354288423011253UL + 4UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)0, (unsigned)1, (7237354288423011253UL + 390UL), "sortAtomsInCell", (unsigned)1, (7237354288423011253UL + 405UL),
                           &____alias_loc_id_3, (unsigned)0, (unsigned)0, (unsigned)1, "haloExchange", (unsigned)2, (7237354288423011253UL + 403UL), (7237354288423011253UL + 405UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)0, (unsigned)1, (7237354288423011253UL + 389UL), "updateLinkCells", (unsigned)1, (7237354288423011253UL + 405UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)1, (unsigned)0, (7237354288423011253UL + 438UL), (7237354288423011253UL + 438UL),
                           &____alias_loc_id_6, (unsigned)0, (unsigned)0, (unsigned)1, "addRealParallel", (unsigned)2, (7237354288423011253UL + 451UL), (7237354288423011253UL + 457UL),
                           &____alias_loc_id_7, (unsigned)7, (unsigned)0, (unsigned)0, (7237354288423011253UL + 450UL), (7237354288423011253UL + 451UL), (7237354288423011253UL + 452UL), (7237354288423011253UL + 453UL), (7237354288423011253UL + 454UL), (7237354288423011253UL + 455UL), (7237354288423011253UL + 456UL),
                           &____alias_loc_id_8, (unsigned)1, (unsigned)0, (unsigned)0, (7237354288423011253UL + 5UL),
                           &____alias_loc_id_9, (unsigned)7, (unsigned)0, (unsigned)0, (7237354288423011253UL + 104UL), (7237354288423011253UL + 105UL), (7237354288423011253UL + 106UL), (7237354288423011253UL + 107UL), (7237354288423011253UL + 108UL), (7237354288423011253UL + 109UL), (7237354288423011253UL + 149UL),
                            &____alias_loc_id_10, (unsigned)9, (unsigned)0, (unsigned)0, (7237354288423011253UL + 232UL), (7237354288423011253UL + 233UL), (7237354288423011253UL + 234UL), (7237354288423011253UL + 235UL), (7237354288423011253UL + 236UL), (7237354288423011253UL + 237UL), (7237354288423011253UL + 238UL), (7237354288423011253UL + 239UL), (7237354288423011253UL + 279UL),
                            &____alias_loc_id_11, (unsigned)1, (unsigned)0, (unsigned)0, (7237354288423011253UL + 390UL),
                            &____alias_loc_id_12, (unsigned)1, (unsigned)0, (unsigned)0, (7237354288423011253UL + 616UL),
                            "advancePosition", 1, (void *)(&advancePosition_npm), (void *)__null, 0, 3, (7237354288423011253UL + 386UL), 0UL, 0UL, 0UL, 0,
                            "kineticEnergy", 0, "_Z13kineticEnergyP9SimFlatSt", "_Z17kineticEnergy_npmP9SimFlatSt", 2, &____alias_loc_id_6, &____alias_loc_id_7, 1, (7237354288423011253UL + 616UL), 0UL, 3, "profileStart", 1, 0UL, 0UL, "addRealParallel", 3, (7237354288423011253UL + 451UL), (7237354288423011253UL + 457UL), 0UL, 0UL, "profileStop", 1, 0UL, 0UL,
                            "advanceVelocity", 1, (void *)(&advanceVelocity_npm), (void *)__null, 0, 3, (7237354288423011253UL + 228UL), 0UL, 0UL, 0UL, 0,
                            "redistributeAtoms", 0, "_Z17redistributeAtomsP9SimFlatSt", "_Z21redistributeAtoms_npmP9SimFlatSt", 3, &____alias_loc_id_2, &____alias_loc_id_3, &____alias_loc_id_4, 1, (7237354288423011253UL + 403UL), 0UL, 5, "updateLinkCells", 2, (7237354288423011253UL + 405UL), (7237354288423011253UL + 405UL), 0UL, "profileStart", 1, 0UL, 0UL, "haloExchange", 2, (7237354288423011253UL + 405UL), (7237354288423011253UL + 403UL), 0UL, "profileStop", 1, 0UL, 0UL, "sortAtomsInCell", 3, (7237354288423011253UL + 405UL), (7237354288423011253UL + 405UL), 0UL, 0UL,
                               "addRealParallel", (void **)&(____chimes_extern_func_addRealParallel),
                               "haloExchange", (void **)&(____chimes_extern_func_haloExchange),
                               "profileStart", (void **)&(____chimes_extern_func_profileStart),
                               "profileStop", (void **)&(____chimes_extern_func_profileStop),
                               "sortAtomsInCell", (void **)&(____chimes_extern_func_sortAtomsInCell),
                               "updateLinkCells", (void **)&(____chimes_extern_func_updateLinkCells),
                           "advancePosition", &(____chimes_does_checkpoint_advancePosition_npm),
                           "kineticEnergy", &(____chimes_does_checkpoint_kineticEnergy_npm),
                           "advanceVelocity", &(____chimes_does_checkpoint_advanceVelocity_npm),
                           "redistributeAtoms", &(____chimes_does_checkpoint_redistributeAtoms_npm),
                           "addRealParallel", &(____chimes_does_checkpoint_addRealParallel_npm),
                           "haloExchange", &(____chimes_does_checkpoint_haloExchange_npm),
                           "profileStart", &(____chimes_does_checkpoint_profileStart_npm),
                           "profileStop", &(____chimes_does_checkpoint_profileStop_npm),
                           "sortAtomsInCell", &(____chimes_does_checkpoint_sortAtomsInCell_npm),
                           "updateLinkCells", &(____chimes_does_checkpoint_updateLinkCells_npm),
                             (7237354288423011253UL + 147UL), (7237354288423011253UL + 149UL),
                             (7237354288423011253UL + 449UL), (7237354288423011253UL + 443UL),
                             (7237354288423011253UL + 438UL), (7237354288423011253UL + 449UL),
                             (7237354288423011253UL + 22UL), (7237354288423011253UL + 25UL),
                             (7237354288423011253UL + 443UL), (7237354288423011253UL + 445UL),
                             (7237354288423011253UL + 277UL), (7237354288423011253UL + 279UL),
                             (7237354288423011253UL + 616UL), (7237354288423011253UL + 503UL),
                             (7237354288423011253UL + 1UL), (7237354288423011253UL + 22UL),
                             (7237354288423011253UL + 450UL), (7237354288423011253UL + 616UL),
                             (7237354288423011253UL + 403UL), (7237354288423011253UL + 405UL),
                             (7237354288423011253UL + 104UL), (7237354288423011253UL + 228UL),
                             (7237354288423011253UL + 386UL), (7237354288423011253UL + 277UL),
                             (7237354288423011253UL + 228UL), (7237354288423011253UL + 147UL),
                             (7237354288423011253UL + 389UL), (7237354288423011253UL + 403UL),
                             (7237354288423011253UL + 503UL), (7237354288423011253UL + 505UL),
                             (7237354288423011253UL + 232UL), (7237354288423011253UL + 386UL),
                     "AtomsSt", 448UL, 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U),
                     "BasePotentialSt", 512UL, 9, "double", (int)__builtin_offsetof (struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof (struct BasePotentialSt, mass), "double", (int)__builtin_offsetof (struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, name), "int", (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), "func*", (int)__builtin_offsetof (struct BasePotentialSt, force), "func*", (int)__builtin_offsetof (struct BasePotentialSt, print), "func*", (int)__builtin_offsetof (struct BasePotentialSt, destroy),
                     "DomainSt", 0UL, 0,
                     "HaloExchangeSt", 512UL, 6, "[ 6 x int ]", (int)__builtin_offsetof (struct HaloExchangeSt, nbrRank), "int", (int)__builtin_offsetof (struct HaloExchangeSt, bufCapacity), "func*", (int)__builtin_offsetof (struct HaloExchangeSt, loadBuffer), "func*", (int)__builtin_offsetof (struct HaloExchangeSt, unloadBuffer), "func*", (int)__builtin_offsetof (struct HaloExchangeSt, destroy), "void*", (int)__builtin_offsetof (struct HaloExchangeSt, parms),
                     "LinkCellSt", 1024UL, 9, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms),
                     "SimFlatSt", 640UL, 11, "int", (int)__builtin_offsetof (struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof (struct SimFlatSt, printRate), "double", (int)__builtin_offsetof (struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof (struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof (struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof (struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof (struct SimFlatSt, species), "double", (int)__builtin_offsetof (struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof (struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof (struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof (struct SimFlatSt, atomExchange),
                     "SpeciesDataSt", 128UL, 3, "[ 3 x char ]", (int)__builtin_offsetof (struct SpeciesDataSt, name), "int", (int)__builtin_offsetof (struct SpeciesDataSt, atomicNo), "double", (int)__builtin_offsetof (struct SpeciesDataSt, mass),
                     "TimerHandle", 32UL, 0,
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                             "timestep", "_Z8timestepP9SimFlatStid", 21, "profileStart", "advanceVelocity", "profileStop", "checkpoint", "profileStart", "advancePosition", "profileStop", "checkpoint", "profileStart", "redistributeAtoms", "profileStop", "checkpoint", "profileStart", "computeForce", "profileStop", "checkpoint", "profileStart", "advanceVelocity", "profileStop", "checkpoint", "kineticEnergy",
                             "advancePosition", "_ZL15advancePositionP9SimFlatStid", 0,
                             "kineticEnergy", "_Z13kineticEnergyP9SimFlatSt", 3, "profileStart", "addRealParallel", "profileStop",
                             "computeForce", "_Z12computeForceP9SimFlatSt", 0,
                             "redistributeAtoms", "_Z17redistributeAtomsP9SimFlatSt", 5, "updateLinkCells", "profileStart", "haloExchange", "profileStop", "sortAtomsInCell",
                             "advanceVelocity", "_ZL15advanceVelocityP9SimFlatStid", 0,
                        "redistributeAtoms|sim|0", 5, "updateLinkCells", "sortAtomsInCell", "profileStop", "profileStart", "haloExchange",
                        "redistributeAtoms|ii|0", 1, "sortAtomsInCell",
                        "kineticEnergy|s|0", 3, "profileStop", "profileStart", "addRealParallel",
                        "kineticEnergy|eLocal|0", 1, "kineticEnergy",
                        "kineticEnergy|eSum|0", 3, "profileStop", "profileStart", "addRealParallel",
        "advanceVelocity", 0UL, (int)3, 7237354288423011275UL, 0UL, 0UL,
        "advancePosition", 0UL, (int)3, 7237354288423011275UL, 0UL, 0UL,
        "advanceVelocity", 0UL, (int)3, 7237354288423011275UL, 0UL, 0UL,
        "profileStart", 0UL, (int)1, 0UL,
        "profileStop", 0UL, (int)1, 0UL,
        "profileStart", 0UL, (int)1, 0UL,
        "profileStop", 0UL, (int)1, 0UL,
        "profileStart", 0UL, (int)1, 0UL,
        "redistributeAtoms", 0UL, (int)1, 7237354288423011275UL,
        "profileStop", 0UL, (int)1, 0UL,
        "profileStart", 0UL, (int)1, 0UL,
        "profileStop", 0UL, (int)1, 0UL,
        "profileStart", 0UL, (int)1, 0UL,
        "profileStop", 0UL, (int)1, 0UL,
        "kineticEnergy", 0UL, (int)1, 7237354288423011275UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
