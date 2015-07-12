# 1 "parallel.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "parallel.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_initParallel_npm = 1;
static int ____chimes_does_checkpoint_maxIntParallel_npm = 1;
static int ____chimes_does_checkpoint_timestampBarrier_npm = 1;
static int ____chimes_does_checkpoint_destroyParallel_npm = 1;
static int ____chimes_does_checkpoint_bcastParallel_npm = 1;
static int ____chimes_does_checkpoint_addIntParallel_npm = 1;
static int ____chimes_does_checkpoint_minRankDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_printRank_npm = 1;
static int ____chimes_does_checkpoint_getMyRank_npm = 1;
static int ____chimes_does_checkpoint_addDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_maxRankDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_builtWithMpi_npm = 1;
static int ____chimes_does_checkpoint_addRealParallel_npm = 1;
static int ____chimes_does_checkpoint_getNRanks_npm = 1;
static int ____chimes_does_checkpoint_barrierParallel_npm = 1;
static int ____chimes_does_checkpoint_sendReceiveParallel_npm = 1;


static int ____must_manage_initParallel = 2;
static int ____must_manage_maxIntParallel = 2;
static int ____must_manage_timestampBarrier = 2;
static int ____must_manage_destroyParallel = 2;
static int ____must_manage_bcastParallel = 2;
static int ____must_manage_addIntParallel = 2;
static int ____must_manage_minRankDoubleParallel = 2;
static int ____must_manage_printRank = 2;
static int ____must_manage_getMyRank = 2;
static int ____must_manage_addDoubleParallel = 2;
static int ____must_manage_maxRankDoubleParallel = 2;
static int ____must_manage_builtWithMpi = 2;
static int ____must_manage_addRealParallel = 2;
static int ____must_manage_getNRanks = 2;
static int ____must_manage_barrierParallel = 2;
static int ____must_manage_sendReceiveParallel = 2;

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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 1 "/tmp/chimes-frontend//"
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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 2 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 3 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 4 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 5 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 6 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 7 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"

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
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c" 2
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 11 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 12 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 13 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"

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
# 15 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 133 "/usr/include/time.h" 3 4
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





typedef __pid_t pid_t;
# 183 "/usr/include/time.h" 3 4
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
# 216 "/usr/include/time.h" 2 3 4

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
# 16 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 17 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c" 2
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
# 18 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c" 2
# 18 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 19 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
static int myRank = 0;
# 20 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
static int nRanks = 1;
# 31 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 31 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int getNRanks_npm();
int getNRanks_quick(); int getNRanks();
int getNRanks_resumable()
# 32 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&getNRanks), "getNRanks", &____must_manage_getNRanks, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 33 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (nRanks); rm_stack(false, 0UL, "getNRanks", &____must_manage_getNRanks, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 34 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "getNRanks", &____must_manage_getNRanks, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 35 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int getMyRank_npm();
int getMyRank_quick(); int getMyRank();
int getMyRank_resumable()
# 37 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&getMyRank), "getMyRank", &____must_manage_getMyRank, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 38 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (myRank); rm_stack(false, 0UL, "getMyRank", &____must_manage_getMyRank, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 39 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "getMyRank", &____must_manage_getMyRank, ____alias_loc_id_1, ____chimes_did_disable1, false); }
# 40 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 41 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 42 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 43 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 44 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 45 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int printRank_npm();
int printRank_quick(); int printRank();
int printRank_resumable()
# 46 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&printRank), "printRank", &____must_manage_printRank, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 47 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   if (myRank == 0) { int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (1); rm_stack(false, 0UL, "printRank", &____must_manage_printRank, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; };
# 48 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "printRank", &____must_manage_printRank, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ;
# 49 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "printRank", &____must_manage_printRank, ____alias_loc_id_2, ____chimes_did_disable2, false); }
# 50 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 51 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void timestampBarrier_npm(const char* msg);void barrierParallel_npm();
void timestampBarrier_quick(const char* msg); void timestampBarrier(const char* msg);
void timestampBarrier_resumable(const char* msg)
# 52 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&timestampBarrier), "timestampBarrier", &____must_manage_timestampBarrier, 1, 0, (size_t)(2776516408427544883UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 53 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    call_lbl_0: ({ calling_npm("barrierParallel", 0); barrierParallel_npm(); });
# 54 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    call_lbl_1: if (! ({ calling_npm("printRank", 0); printRank_npm(); })) {rm_stack(false, 0UL, "timestampBarrier", &____must_manage_timestampBarrier, ____alias_loc_id_3, ____chimes_did_disable3, false); return; };
# 56 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    time_t t; t = (time(__null)) ;
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    char *timeString; timeString = (ctime(&t)) ;
# 58 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   timeString[24] = '\0';
# 59 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   fprintf(stdout, "%s: %s\n", timeString, msg);
# 60 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   fflush(stdout);
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "timestampBarrier", &____must_manage_timestampBarrier, ____alias_loc_id_3, ____chimes_did_disable3, false); }
# 62 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void initParallel_npm(int* argc, char*** argv);
void initParallel(int* argc, char*** argv)
# 64 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 65 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 66 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 68 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 70 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 71 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 72 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void destroyParallel_npm();
void destroyParallel()
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 75 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 76 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 77 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 78 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 79 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void barrierParallel()
# 80 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 81 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 82 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int sendReceiveParallel_npm(void* sendBuf, int sendLen, int dest, void* recvBuf, int recvLen, int source);
int sendReceiveParallel_quick(void* sendBuf, int sendLen, int dest, void* recvBuf, int recvLen, int source); int sendReceiveParallel(void* sendBuf, int sendLen, int dest, void* recvBuf, int recvLen, int source);
int sendReceiveParallel_resumable(void* sendBuf, int sendLen, int dest,
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
                        void* recvBuf, int recvLen, int source)
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&sendReceiveParallel), "sendReceiveParallel", &____must_manage_sendReceiveParallel, 6, 0, (size_t)(2776516408427544928UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2776516408427544927UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   ((source == dest) ? static_cast<void> (0) : __assert_fail ("source == dest", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c", 106, __PRETTY_FUNCTION__));
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   memcpy(recvBuf, sendBuf, sendLen);
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (sendLen); rm_stack(false, 0UL, "sendReceiveParallel", &____must_manage_sendReceiveParallel, ____alias_loc_id_5, ____chimes_did_disable7, false); return ____chimes_ret_var_4; ;
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "sendReceiveParallel", &____must_manage_sendReceiveParallel, ____alias_loc_id_5, ____chimes_did_disable7, false); }
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addIntParallel_npm(int* sendBuf, int* recvBuf, int count);
void addIntParallel_quick(int* sendBuf, int* recvBuf, int count); void addIntParallel(int* sendBuf, int* recvBuf, int count);
void addIntParallel_resumable(int* sendBuf, int* recvBuf, int count)
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&addIntParallel), "addIntParallel", &____must_manage_addIntParallel, 3, 0, (size_t)(2776516408427544985UL), (size_t)(2776516408427544986UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "addIntParallel", &____must_manage_addIntParallel, ____alias_loc_id_6, ____chimes_did_disable8, false); }
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addRealParallel_npm(real_t* sendBuf, real_t* recvBuf, int count);
void addRealParallel_quick(real_t* sendBuf, real_t* recvBuf, int count); void addRealParallel(real_t* sendBuf, real_t* recvBuf, int count);
void addRealParallel_resumable(real_t* sendBuf, real_t* recvBuf, int count)
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&addRealParallel), "addRealParallel", &____must_manage_addRealParallel, 3, 0, (size_t)(2776516408427545021UL), (size_t)(2776516408427545022UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "addRealParallel", &____must_manage_addRealParallel, ____alias_loc_id_7, ____chimes_did_disable9, false); }
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addDoubleParallel_npm(double* sendBuf, double* recvBuf, int count);
void addDoubleParallel_quick(double* sendBuf, double* recvBuf, int count); void addDoubleParallel(double* sendBuf, double* recvBuf, int count);
void addDoubleParallel_resumable(double* sendBuf, double* recvBuf, int count)
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&addDoubleParallel), "addDoubleParallel", &____must_manage_addDoubleParallel, 3, 0, (size_t)(2776516408427545057UL), (size_t)(2776516408427545058UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "addDoubleParallel", &____must_manage_addDoubleParallel, ____alias_loc_id_8, ____chimes_did_disable10, false); }
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void maxIntParallel_npm(int* sendBuf, int* recvBuf, int count);
void maxIntParallel_quick(int* sendBuf, int* recvBuf, int count); void maxIntParallel(int* sendBuf, int* recvBuf, int count);
void maxIntParallel_resumable(int* sendBuf, int* recvBuf, int count)
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&maxIntParallel), "maxIntParallel", &____must_manage_maxIntParallel, 3, 0, (size_t)(2776516408427545093UL), (size_t)(2776516408427545094UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 147 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 148 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 150 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 151 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "maxIntParallel", &____must_manage_maxIntParallel, ____alias_loc_id_9, ____chimes_did_disable11, false); }
# 152 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 153 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 154 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void minRankDoubleParallel_npm(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);
void minRankDoubleParallel_quick(RankReduceData* sendBuf, RankReduceData* recvBuf, int count); void minRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);
void minRankDoubleParallel_resumable(RankReduceData* sendBuf, RankReduceData* recvBuf, int count)
# 155 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable12 = new_stack((void *)(&minRankDoubleParallel), "minRankDoubleParallel", &____must_manage_minRankDoubleParallel, 3, 0, (size_t)(2776516408427545143UL), (size_t)(2776516408427545144UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 156 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 157 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 158 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ; ii<count; ++ii)
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   {
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].val = sendBuf[ii].val;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].rank = sendBuf[ii].rank;
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   } }
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "minRankDoubleParallel", &____must_manage_minRankDoubleParallel, ____alias_loc_id_10, ____chimes_did_disable12, false); }
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void maxRankDoubleParallel_npm(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);
void maxRankDoubleParallel_quick(RankReduceData* sendBuf, RankReduceData* recvBuf, int count); void maxRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);
void maxRankDoubleParallel_resumable(RankReduceData* sendBuf, RankReduceData* recvBuf, int count)
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable13 = new_stack((void *)(&maxRankDoubleParallel), "maxRankDoubleParallel", &____must_manage_maxRankDoubleParallel, 3, 0, (size_t)(2776516408427545193UL), (size_t)(2776516408427545194UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ; ii<count; ++ii)
# 173 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   {
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].val = sendBuf[ii].val;
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].rank = sendBuf[ii].rank;
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   } }
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "maxRankDoubleParallel", &____must_manage_maxRankDoubleParallel, ____alias_loc_id_11, ____chimes_did_disable13, false); }
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void bcastParallel_npm(void* buf, int count, int root);
void bcastParallel(void* buf, int count, int root)
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int builtWithMpi_npm(void);
int builtWithMpi_quick(void); int builtWithMpi(void);
int builtWithMpi_resumable(void)
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable15 = new_stack((void *)(&builtWithMpi), "builtWithMpi", &____must_manage_builtWithMpi, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (0); rm_stack(false, 0UL, "builtWithMpi", &____must_manage_builtWithMpi, ____alias_loc_id_13, ____chimes_did_disable15, false); return ____chimes_ret_var_5; ;
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "builtWithMpi", &____must_manage_builtWithMpi, ____alias_loc_id_13, ____chimes_did_disable15, false); }
# 31 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int getNRanks_quick()
# 32 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&getNRanks), "getNRanks", &____must_manage_getNRanks, 0, 0) ; ; ;
# 33 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (nRanks); rm_stack(false, 0UL, "getNRanks", &____must_manage_getNRanks, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 34 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "getNRanks", &____must_manage_getNRanks, ____alias_loc_id_0, ____chimes_did_disable0, false); }

int getNRanks() { return (____chimes_replaying ? getNRanks_resumable() : getNRanks_quick()); }
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int getMyRank_quick()
# 37 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&getMyRank), "getMyRank", &____must_manage_getMyRank, 0, 0) ; ; ;
# 38 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (myRank); rm_stack(false, 0UL, "getMyRank", &____must_manage_getMyRank, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 39 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "getMyRank", &____must_manage_getMyRank, ____alias_loc_id_1, ____chimes_did_disable1, false); }

int getMyRank() { return (____chimes_replaying ? getMyRank_resumable() : getMyRank_quick()); }
# 45 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int printRank_quick()
# 46 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&printRank), "printRank", &____must_manage_printRank, 0, 0) ; ; ;
# 47 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   if (myRank == 0) { int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (1); rm_stack(false, 0UL, "printRank", &____must_manage_printRank, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; };
# 48 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "printRank", &____must_manage_printRank, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ;
# 49 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "printRank", &____must_manage_printRank, ____alias_loc_id_2, ____chimes_did_disable2, false); }

int printRank() { return (____chimes_replaying ? printRank_resumable() : printRank_quick()); }
# 51 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void timestampBarrier_quick(const char* msg)
# 52 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&timestampBarrier), "timestampBarrier", &____must_manage_timestampBarrier, 1, 0, (size_t)(2776516408427544883UL)) ; ; ;
# 53 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    call_lbl_0: ({ calling_npm("barrierParallel", 0); barrierParallel_npm(); });
# 54 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    call_lbl_1: if (! ({ calling_npm("printRank", 0); printRank_npm(); })) {rm_stack(false, 0UL, "timestampBarrier", &____must_manage_timestampBarrier, ____alias_loc_id_3, ____chimes_did_disable3, false); return; };
# 56 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    time_t t; t = (time(__null)) ;
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    char *timeString; timeString = (ctime(&t)) ;
# 58 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   timeString[24] = '\0';
# 59 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   fprintf(stdout, "%s: %s\n", timeString, msg);
# 60 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   fflush(stdout);
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "timestampBarrier", &____must_manage_timestampBarrier, ____alias_loc_id_3, ____chimes_did_disable3, false); }

void timestampBarrier(const char* msg) { (____chimes_replaying ? timestampBarrier_resumable(msg) : timestampBarrier_quick(msg)); }
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int sendReceiveParallel_quick(void* sendBuf, int sendLen, int dest,
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
                        void* recvBuf, int recvLen, int source)
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&sendReceiveParallel), "sendReceiveParallel", &____must_manage_sendReceiveParallel, 6, 0, (size_t)(2776516408427544928UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2776516408427544927UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   ((source == dest) ? static_cast<void> (0) : __assert_fail ("source == dest", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c", 106, __PRETTY_FUNCTION__));
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   memcpy(recvBuf, sendBuf, sendLen);
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (sendLen); rm_stack(false, 0UL, "sendReceiveParallel", &____must_manage_sendReceiveParallel, ____alias_loc_id_5, ____chimes_did_disable7, false); return ____chimes_ret_var_4; ;
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "sendReceiveParallel", &____must_manage_sendReceiveParallel, ____alias_loc_id_5, ____chimes_did_disable7, false); }

int sendReceiveParallel(void* sendBuf, int sendLen, int dest,
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
                        void* recvBuf, int recvLen, int source) { return (____chimes_replaying ? sendReceiveParallel_resumable(sendBuf, sendLen, dest, recvBuf, recvLen, source) : sendReceiveParallel_quick(sendBuf, sendLen, dest, recvBuf, recvLen, source)); }
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addIntParallel_quick(int* sendBuf, int* recvBuf, int count)
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&addIntParallel), "addIntParallel", &____must_manage_addIntParallel, 3, 0, (size_t)(2776516408427544985UL), (size_t)(2776516408427544986UL), (size_t)(0UL)) ; ; ;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "addIntParallel", &____must_manage_addIntParallel, ____alias_loc_id_6, ____chimes_did_disable8, false); }

void addIntParallel(int* sendBuf, int* recvBuf, int count) { (____chimes_replaying ? addIntParallel_resumable(sendBuf, recvBuf, count) : addIntParallel_quick(sendBuf, recvBuf, count)); }
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addRealParallel_quick(real_t* sendBuf, real_t* recvBuf, int count)
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&addRealParallel), "addRealParallel", &____must_manage_addRealParallel, 3, 0, (size_t)(2776516408427545021UL), (size_t)(2776516408427545022UL), (size_t)(0UL)) ; ; ;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "addRealParallel", &____must_manage_addRealParallel, ____alias_loc_id_7, ____chimes_did_disable9, false); }

void addRealParallel(real_t* sendBuf, real_t* recvBuf, int count) { (____chimes_replaying ? addRealParallel_resumable(sendBuf, recvBuf, count) : addRealParallel_quick(sendBuf, recvBuf, count)); }
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addDoubleParallel_quick(double* sendBuf, double* recvBuf, int count)
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&addDoubleParallel), "addDoubleParallel", &____must_manage_addDoubleParallel, 3, 0, (size_t)(2776516408427545057UL), (size_t)(2776516408427545058UL), (size_t)(0UL)) ; ; ;
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "addDoubleParallel", &____must_manage_addDoubleParallel, ____alias_loc_id_8, ____chimes_did_disable10, false); }

void addDoubleParallel(double* sendBuf, double* recvBuf, int count) { (____chimes_replaying ? addDoubleParallel_resumable(sendBuf, recvBuf, count) : addDoubleParallel_quick(sendBuf, recvBuf, count)); }
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void maxIntParallel_quick(int* sendBuf, int* recvBuf, int count)
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&maxIntParallel), "maxIntParallel", &____must_manage_maxIntParallel, 3, 0, (size_t)(2776516408427545093UL), (size_t)(2776516408427545094UL), (size_t)(0UL)) ; ; ;
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 147 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 148 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; } };
# 150 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 151 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "maxIntParallel", &____must_manage_maxIntParallel, ____alias_loc_id_9, ____chimes_did_disable11, false); }

void maxIntParallel(int* sendBuf, int* recvBuf, int count) { (____chimes_replaying ? maxIntParallel_resumable(sendBuf, recvBuf, count) : maxIntParallel_quick(sendBuf, recvBuf, count)); }
# 154 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void minRankDoubleParallel_quick(RankReduceData* sendBuf, RankReduceData* recvBuf, int count)
# 155 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable12 = new_stack((void *)(&minRankDoubleParallel), "minRankDoubleParallel", &____must_manage_minRankDoubleParallel, 3, 0, (size_t)(2776516408427545143UL), (size_t)(2776516408427545144UL), (size_t)(0UL)) ; ; ;
# 156 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 157 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 158 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ; ii<count; ++ii)
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   {
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].val = sendBuf[ii].val;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].rank = sendBuf[ii].rank;
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   } }
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "minRankDoubleParallel", &____must_manage_minRankDoubleParallel, ____alias_loc_id_10, ____chimes_did_disable12, false); }

void minRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count) { (____chimes_replaying ? minRankDoubleParallel_resumable(sendBuf, recvBuf, count) : minRankDoubleParallel_quick(sendBuf, recvBuf, count)); }
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void maxRankDoubleParallel_quick(RankReduceData* sendBuf, RankReduceData* recvBuf, int count)
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable13 = new_stack((void *)(&maxRankDoubleParallel), "maxRankDoubleParallel", &____must_manage_maxRankDoubleParallel, 3, 0, (size_t)(2776516408427545193UL), (size_t)(2776516408427545194UL), (size_t)(0UL)) ; ; ;
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   { int ii; for ( ii = (0) ; ii<count; ++ii)
# 173 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   {
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].val = sendBuf[ii].val;
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].rank = sendBuf[ii].rank;
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   } }
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "maxRankDoubleParallel", &____must_manage_maxRankDoubleParallel, ____alias_loc_id_11, ____chimes_did_disable13, false); }

void maxRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count) { (____chimes_replaying ? maxRankDoubleParallel_resumable(sendBuf, recvBuf, count) : maxRankDoubleParallel_quick(sendBuf, recvBuf, count)); }
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int builtWithMpi_quick(void)
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{const int ____chimes_did_disable15 = new_stack((void *)(&builtWithMpi), "builtWithMpi", &____must_manage_builtWithMpi, 0, 0) ; ; ;
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (0); rm_stack(false, 0UL, "builtWithMpi", &____must_manage_builtWithMpi, ____alias_loc_id_13, ____chimes_did_disable15, false); return ____chimes_ret_var_5; ;
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
rm_stack(false, 0UL, "builtWithMpi", &____must_manage_builtWithMpi, ____alias_loc_id_13, ____chimes_did_disable15, false); }

int builtWithMpi(void) { return (____chimes_replaying ? builtWithMpi_resumable() : builtWithMpi_quick()); }
# 31 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int getNRanks_npm()
# 32 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 33 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_0; ____chimes_ret_var_0 = (nRanks); return ____chimes_ret_var_0; ;
# 34 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 36 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int getMyRank_npm()
# 37 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 38 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_1; ____chimes_ret_var_1 = (myRank); return ____chimes_ret_var_1; ;
# 39 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 45 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int printRank_npm()
# 46 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 47 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   if (myRank == 0) { int ____chimes_ret_var_2; ____chimes_ret_var_2 = (1); return ____chimes_ret_var_2; ; };
# 48 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_3; ____chimes_ret_var_3 = (0); return ____chimes_ret_var_3; ;
# 49 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 51 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void timestampBarrier_npm(const char* msg)
# 52 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 53 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   barrierParallel_npm();
# 54 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   if (! printRank_npm()) {return; };
# 56 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   time_t t= time(__null);
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   char* timeString = ctime(&t);
# 58 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   timeString[24] = '\0';
# 59 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   fprintf(stdout, "%s: %s\n", timeString, msg);
# 60 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   fflush(stdout);
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void initParallel_npm(int* argc, char*** argv)
# 64 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 65 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 66 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 68 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 70 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 72 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void destroyParallel_npm()
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 75 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 76 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 77 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 79 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void barrierParallel_npm()
# 80 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 81 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 82 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int sendReceiveParallel_npm(void* sendBuf, int sendLen, int dest,
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
                        void* recvBuf, int recvLen, int source)
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   ((source == dest) ? static_cast<void> (0) : __assert_fail ("source == dest", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c", 106, __PRETTY_FUNCTION__));
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   memcpy(recvBuf, sendBuf, sendLen);
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_4; ____chimes_ret_var_4 = (sendLen); return ____chimes_ret_var_4; ;
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addIntParallel_npm(int* sendBuf, int* recvBuf, int count)
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   for (int ii=0;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; };
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addRealParallel_npm(real_t* sendBuf, real_t* recvBuf, int count)
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   for (int ii=0;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; };
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void addDoubleParallel_npm(double* sendBuf, double* recvBuf, int count)
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   for (int ii=0;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; };
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void maxIntParallel_npm(int* sendBuf, int* recvBuf, int count)
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 147 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 148 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   for (int ii=0;ii<count; ++ii) { recvBuf[ii] = sendBuf[ii]; };
# 150 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 151 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 154 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void minRankDoubleParallel_npm(RankReduceData* sendBuf, RankReduceData* recvBuf, int count)
# 155 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 156 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 157 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 158 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   for (int ii=0; ii<count; ++ii)
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   {
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].val = sendBuf[ii].val;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].rank = sendBuf[ii].rank;
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   }
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void maxRankDoubleParallel_npm(RankReduceData* sendBuf, RankReduceData* recvBuf, int count)
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   for (int ii=0; ii<count; ++ii)
# 173 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   {
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].val = sendBuf[ii].val;
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
      recvBuf[ii].rank = sendBuf[ii].rank;
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
   }
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
void bcastParallel_npm(void* buf, int count, int root)
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
int builtWithMpi_npm(void)
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
{
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
    int ____chimes_ret_var_5; ____chimes_ret_var_5 = (0); return ____chimes_ret_var_5; ;
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.c"
}





static int module_init() {
    init_module(2776516408427544823UL, 20, 16, 0, 14, 16, 0, 16, 2, 0, 1,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)0, (2776516408427544823UL + 1UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)0, (2776516408427544823UL + 9UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (2776516408427544823UL + 15UL), (2776516408427544823UL + 16UL), (2776516408427544823UL + 17UL),
                           &____alias_loc_id_3, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 33UL), (2776516408427544823UL + 34UL), (2776516408427544823UL + 35UL), (2776516408427544823UL + 47UL), (2776516408427544823UL + 398UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)0, (unsigned)0, (2776516408427544823UL + 67UL), (2776516408427544823UL + 68UL),
                           &____alias_loc_id_5, (unsigned)7, (unsigned)0, (unsigned)0, (2776516408427544823UL + 77UL), (2776516408427544823UL + 78UL), (2776516408427544823UL + 79UL), (2776516408427544823UL + 80UL), (2776516408427544823UL + 81UL), (2776516408427544823UL + 82UL), (2776516408427544823UL + 83UL),
                           &____alias_loc_id_6, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 129UL), (2776516408427544823UL + 130UL), (2776516408427544823UL + 131UL), (2776516408427544823UL + 132UL), (2776516408427544823UL + 163UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 165UL), (2776516408427544823UL + 166UL), (2776516408427544823UL + 167UL), (2776516408427544823UL + 168UL), (2776516408427544823UL + 199UL),
                           &____alias_loc_id_8, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 201UL), (2776516408427544823UL + 202UL), (2776516408427544823UL + 203UL), (2776516408427544823UL + 204UL), (2776516408427544823UL + 235UL),
                           &____alias_loc_id_9, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 237UL), (2776516408427544823UL + 238UL), (2776516408427544823UL + 239UL), (2776516408427544823UL + 240UL), (2776516408427544823UL + 271UL),
                            &____alias_loc_id_10, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 273UL), (2776516408427544823UL + 274UL), (2776516408427544823UL + 275UL), (2776516408427544823UL + 276UL), (2776516408427544823UL + 321UL),
                            &____alias_loc_id_11, (unsigned)5, (unsigned)0, (unsigned)0, (2776516408427544823UL + 323UL), (2776516408427544823UL + 324UL), (2776516408427544823UL + 325UL), (2776516408427544823UL + 326UL), (2776516408427544823UL + 371UL),
                            &____alias_loc_id_12, (unsigned)3, (unsigned)0, (unsigned)0, (2776516408427544823UL + 373UL), (2776516408427544823UL + 374UL), (2776516408427544823UL + 375UL),
                            &____alias_loc_id_13, (unsigned)1, (unsigned)0, (unsigned)0, (2776516408427544823UL + 386UL),
                            "initParallel", 0, "_Z12initParallelPiPPPc", "_Z16initParallel_npmPiPPPc", 0, 2, (2776516408427544823UL + 74UL), (2776516408427544823UL + 75UL), 0UL, 0,
                            "maxIntParallel", 0, "_Z14maxIntParallelPiS_i", "_Z18maxIntParallel_npmPiS_i", 0, 3, (2776516408427544823UL + 270UL), (2776516408427544823UL + 271UL), 0UL, 0UL, 0,
                            "timestampBarrier", 0, "_Z16timestampBarrierPKc", "_Z20timestampBarrier_npmPKc", 0, 1, (2776516408427544823UL + 60UL), 0UL, 6, "barrierParallel", 0, 0UL, "printRank", 0, 0UL, "time", 1, (2776516408427544823UL + 398UL), 0UL, "ctime", 1, (2776516408427544823UL + 34UL), (2776516408427544823UL + 47UL), "fprintf", 4, (2776516408427544823UL + 52UL), (2776516408427544823UL + 394UL), (2776516408427544823UL + 47UL), (2776516408427544823UL + 60UL), 0UL, "fflush", 1, (2776516408427544823UL + 52UL), 0UL,
                            "destroyParallel", 0, "_Z15destroyParallelv", "_Z19destroyParallel_npmv", 0, 0, 0UL, 0,
                            "bcastParallel", 0, "_Z13bcastParallelPvii", "_Z17bcastParallel_npmPvii", 0, 3, (2776516408427544823UL + 383UL), 0UL, 0UL, 0UL, 0,
                            "addIntParallel", 0, "_Z14addIntParallelPiS_i", "_Z18addIntParallel_npmPiS_i", 0, 3, (2776516408427544823UL + 162UL), (2776516408427544823UL + 163UL), 0UL, 0UL, 0,
                            "minRankDoubleParallel", 0, "_Z21minRankDoubleParallelP16RankReduceDataStS0_i", "_Z25minRankDoubleParallel_npmP16RankReduceDataStS0_i", 0, 3, (2776516408427544823UL + 320UL), (2776516408427544823UL + 321UL), 0UL, 0UL, 0,
                            "printRank", 0, "_Z9printRankv", "_Z13printRank_npmv", 0, 0, 0UL, 0,
                            "getMyRank", 0, "_Z9getMyRankv", "_Z13getMyRank_npmv", 0, 0, 0UL, 0,
                            "addDoubleParallel", 0, "_Z17addDoubleParallelPdS_i", "_Z21addDoubleParallel_npmPdS_i", 0, 3, (2776516408427544823UL + 234UL), (2776516408427544823UL + 235UL), 0UL, 0UL, 0,
                            "maxRankDoubleParallel", 0, "_Z21maxRankDoubleParallelP16RankReduceDataStS0_i", "_Z25maxRankDoubleParallel_npmP16RankReduceDataStS0_i", 0, 3, (2776516408427544823UL + 370UL), (2776516408427544823UL + 371UL), 0UL, 0UL, 0,
                            "builtWithMpi", 0, "_Z12builtWithMpiv", "_Z16builtWithMpi_npmv", 0, 0, 0UL, 0,
                            "addRealParallel", 0, "_Z15addRealParallelPdS_i", "_Z19addRealParallel_npmPdS_i", 0, 3, (2776516408427544823UL + 198UL), (2776516408427544823UL + 199UL), 0UL, 0UL, 0,
                            "getNRanks", 0, "_Z9getNRanksv", "_Z13getNRanks_npmv", 0, 0, 0UL, 0,
                            "barrierParallel", 0, "_Z15barrierParallelv", "_Z19barrierParallel_npmv", 0, 0, 0UL, 0,
                            "sendReceiveParallel", 0, "_Z19sendReceiveParallelPviiS_ii", "_Z23sendReceiveParallel_npmPviiS_ii", 0, 6, (2776516408427544823UL + 105UL), 0UL, 0UL, (2776516408427544823UL + 104UL), 0UL, 0UL, 0UL, 2, "__assert_fail", 4, (2776516408427544823UL + 395UL), (2776516408427544823UL + 396UL), 0UL, (2776516408427544823UL + 397UL), 0UL, "memcpy", 3, (2776516408427544823UL + 104UL), (2776516408427544823UL + 105UL), 0UL, 0UL,
                           "initParallel", &(____chimes_does_checkpoint_initParallel_npm),
                           "maxIntParallel", &(____chimes_does_checkpoint_maxIntParallel_npm),
                           "timestampBarrier", &(____chimes_does_checkpoint_timestampBarrier_npm),
                           "destroyParallel", &(____chimes_does_checkpoint_destroyParallel_npm),
                           "bcastParallel", &(____chimes_does_checkpoint_bcastParallel_npm),
                           "addIntParallel", &(____chimes_does_checkpoint_addIntParallel_npm),
                           "minRankDoubleParallel", &(____chimes_does_checkpoint_minRankDoubleParallel_npm),
                           "printRank", &(____chimes_does_checkpoint_printRank_npm),
                           "getMyRank", &(____chimes_does_checkpoint_getMyRank_npm),
                           "addDoubleParallel", &(____chimes_does_checkpoint_addDoubleParallel_npm),
                           "maxRankDoubleParallel", &(____chimes_does_checkpoint_maxRankDoubleParallel_npm),
                           "builtWithMpi", &(____chimes_does_checkpoint_builtWithMpi_npm),
                           "addRealParallel", &(____chimes_does_checkpoint_addRealParallel_npm),
                           "getNRanks", &(____chimes_does_checkpoint_getNRanks_npm),
                           "barrierParallel", &(____chimes_does_checkpoint_barrierParallel_npm),
                           "sendReceiveParallel", &(____chimes_does_checkpoint_sendReceiveParallel_npm),
                             (2776516408427544823UL + 201UL), (2776516408427544823UL + 234UL),
                             (2776516408427544823UL + 393UL), (2776516408427544823UL + 52UL),
                             (2776516408427544823UL + 274UL), (2776516408427544823UL + 321UL),
                             (2776516408427544823UL + 202UL), (2776516408427544823UL + 235UL),
                             (2776516408427544823UL + 273UL), (2776516408427544823UL + 320UL),
                             (2776516408427544823UL + 373UL), (2776516408427544823UL + 383UL),
                             (2776516408427544823UL + 33UL), (2776516408427544823UL + 60UL),
                             (2776516408427544823UL + 35UL), (2776516408427544823UL + 47UL),
                             (2776516408427544823UL + 77UL), (2776516408427544823UL + 105UL),
                             (2776516408427544823UL + 323UL), (2776516408427544823UL + 370UL),
                             (2776516408427544823UL + 130UL), (2776516408427544823UL + 163UL),
                             (2776516408427544823UL + 238UL), (2776516408427544823UL + 271UL),
                             (2776516408427544823UL + 324UL), (2776516408427544823UL + 371UL),
                             (2776516408427544823UL + 67UL), (2776516408427544823UL + 74UL),
                             (2776516408427544823UL + 68UL), (2776516408427544823UL + 75UL),
                             (2776516408427544823UL + 129UL), (2776516408427544823UL + 162UL),
                             (2776516408427544823UL + 80UL), (2776516408427544823UL + 104UL),
                             (2776516408427544823UL + 237UL), (2776516408427544823UL + 270UL),
                             (2776516408427544823UL + 166UL), (2776516408427544823UL + 199UL),
                             (2776516408427544823UL + 165UL), (2776516408427544823UL + 198UL),
                     "RankReduceDataSt", 128UL, 2, "double", (int)__builtin_offsetof (struct RankReduceDataSt, val), "int", (int)__builtin_offsetof (struct RankReduceDataSt, rank),
                             "initParallel", "_Z12initParallelPiPPPc", 0,
                             "maxIntParallel", "_Z14maxIntParallelPiS_i", 0,
                             "timestampBarrier", "_Z16timestampBarrierPKc", 2, "barrierParallel", "printRank",
                             "destroyParallel", "_Z15destroyParallelv", 0,
                             "bcastParallel", "_Z13bcastParallelPvii", 0,
                             "addIntParallel", "_Z14addIntParallelPiS_i", 0,
                             "minRankDoubleParallel", "_Z21minRankDoubleParallelP16RankReduceDataStS0_i", 0,
                             "printRank", "_Z9printRankv", 0,
                             "getMyRank", "_Z9getMyRankv", 0,
                             "addDoubleParallel", "_Z17addDoubleParallelPdS_i", 0,
                             "maxRankDoubleParallel", "_Z21maxRankDoubleParallelP16RankReduceDataStS0_i", 0,
                             "builtWithMpi", "_Z12builtWithMpiv", 0,
                             "addRealParallel", "_Z15addRealParallelPdS_i", 0,
                             "getNRanks", "_Z9getNRanksv", 0,
                             "barrierParallel", "_Z15barrierParallelv", 0,
                             "sendReceiveParallel", "_Z19sendReceiveParallelPviiS_ii", 0,
        "barrierParallel", 0UL, (int)0,
        "printRank", 0UL, (int)0);
    register_global_var("global|nRanks", "i32", (void *)(&nRanks), 4, 0, 0, 0UL, 0);
    register_global_var("global|myRank", "i32", (void *)(&myRank), 4, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
