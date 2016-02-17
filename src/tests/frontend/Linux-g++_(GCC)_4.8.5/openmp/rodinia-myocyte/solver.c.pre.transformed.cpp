# 1 "solver.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "solver.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_solver_npm = 1;
static int ____chimes_does_checkpoint_embedded_fehlberg_7_8_npm = 1;

static int ____must_checkpoint_solver_y_0 = 2;
static int ____must_checkpoint_solver_x_0 = 2;
static int ____must_checkpoint_solver_xmax_0 = 2;
static int ____must_checkpoint_solver_params_0 = 2;
static int ____must_checkpoint_solver_err_exponent_0 = 2;
static int ____must_checkpoint_solver_error_0 = 2;
static int ____must_checkpoint_solver_outside_0 = 2;
static int ____must_checkpoint_solver_h_0 = 2;
static int ____must_checkpoint_solver_h_init_0 = 2;
static int ____must_checkpoint_solver_tolerance_0 = 2;
static int ____must_checkpoint_solver_scale_min_0 = 2;
static int ____must_checkpoint_solver_err_0 = 2;
static int ____must_checkpoint_solver_yy_0 = 2;
static int ____must_checkpoint_solver_j_0 = 2;
static int ____must_checkpoint_solver_k_0 = 2;

static int ____must_manage_solver = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
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
# 69 "/home/jmg3/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/define.h" 1





# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
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
# 26 "/usr/include/stdlib.h" 2 3 4







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
# 31 "/usr/include/sys/types.h" 2 3 4



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





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





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
# 7 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/define.h" 2
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
# 8 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/define.h" 2
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/omp.h" 1 3 4
# 34 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/omp.h" 3 4
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
# 9 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/define.h" 2
# 18 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/define.h"
extern float embedded_fehlberg_7_8( float timeinst,
               float h,
               float* initvalu,
               float* finavalu,
               float* error,
               float* parameter);
extern void ecc( float timeinst,
    float *initvalu,
    int initvalu_offset,
    float *parameter,
    int parameter_offset,
    float *finavalu);

extern float cam(float timeinst,
   float *initvalu,
   int initvalu_offset,
   float *parameter,
   int parameter_offset,
   float *finavalu,
   float Ca);

extern void fin( float *initvalu,
    int initvalu_offset_ecc,
    int initvalu_offset_Dyad,
    int initvalu_offset_SL,
    int initvalu_offset_Cyt,
    float *parameter,
    float *finavalu,
    float JCaDyad,
    float JCaSL,
    float JCaCyt);

extern void master(float timeinst,
     float* initvalu,
     float* parameter,
     float* finavalu);


extern int solver( float** y,
     float* x,
     int xmax,
     float* params);

extern void myocyte_read( char* filename,
     float* input,
     int data_rows,
     int data_cols,
     int major);

extern void myocyte_write( char* filename,
     float* input,
     int data_rows,
     int data_cols,
     int major,
     int data_range);

extern long long get_time();
# 2 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c" 2
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int solver_npm( float** y, float* x, int xmax, float* params);static float (*____chimes_extern_func_embedded_fehlberg_7_8)(float, float, float *, float *, float *, float *) = embedded_fehlberg_7_8;
int solver_quick( float** y, float* x, int xmax, float* params); int solver( float** y, float* x, int xmax, float* params);
int solver_resumable( float** y,
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* x,
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     int xmax,
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* params) {const int ____chimes_did_disable0 = new_stack((void *)(&solver), "solver", &____must_manage_solver, 4, 4, (size_t)(6850351079512197538UL), (size_t)(6850351079512197539UL), (size_t)(0UL), (size_t)(6850351079512197541UL), "solver|y|0", &____must_checkpoint_solver_y_0, "float**", (void *)(&y), (size_t)8, 1, 0, 0, "solver|x|0", &____must_checkpoint_solver_x_0, "float*", (void *)(&x), (size_t)8, 1, 0, 0, "solver|xmax|0", &____must_checkpoint_solver_xmax_0, "i32", (void *)(&xmax), (size_t)4, 0, 0, 0, "solver|params|0", &____must_checkpoint_solver_params_0, "float*", (void *)(&params), (size_t)8, 1, 0, 0) ; int k;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int j;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float yy[91];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float scale[91];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float err[91];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float scale_min;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float tolerance;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float h_init;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float h;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int outside;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int error;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float err_exponent;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (____must_checkpoint_solver_k_0 || ____must_checkpoint_solver_j_0 || ____must_checkpoint_solver_yy_0 || ____must_checkpoint_solver_err_0 || ____must_checkpoint_solver_scale_min_0 || ____must_checkpoint_solver_tolerance_0 || ____must_checkpoint_solver_h_init_0 || ____must_checkpoint_solver_h_0 || ____must_checkpoint_solver_outside_0 || ____must_checkpoint_solver_error_0 || ____must_checkpoint_solver_err_exponent_0) { register_stack_vars(11, "solver|k|0", &____must_checkpoint_solver_k_0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "solver|j|0", &____must_checkpoint_solver_j_0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "solver|yy|0", &____must_checkpoint_solver_yy_0, "[91 x float]", (void *)(yy), (size_t)364, 0, 0, 0, "solver|err|0", &____must_checkpoint_solver_err_0, "[91 x float]", (void *)(err), (size_t)364, 0, 0, 0, "solver|scale_min|0", &____must_checkpoint_solver_scale_min_0, "float", (void *)(&scale_min), (size_t)4, 0, 0, 0, "solver|tolerance|0", &____must_checkpoint_solver_tolerance_0, "float", (void *)(&tolerance), (size_t)4, 0, 0, 0, "solver|h_init|0", &____must_checkpoint_solver_h_init_0, "float", (void *)(&h_init), (size_t)4, 0, 0, 0, "solver|h|0", &____must_checkpoint_solver_h_0, "float", (void *)(&h), (size_t)4, 0, 0, 0, "solver|outside|0", &____must_checkpoint_solver_outside_0, "i32", (void *)(&outside), (size_t)4, 0, 0, 0, "solver|error|0", &____must_checkpoint_solver_error_0, "i32", (void *)(&error), (size_t)4, 0, 0, 0, "solver|err_exponent|0", &____must_checkpoint_solver_err_exponent_0, "float", (void *)(&err_exponent), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 85 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float last_interval; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 88 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int xmin; ;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 94 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float scale_fina; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     ;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     ;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 105 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int i; ;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 112 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 err_exponent = 1.0 / 7.0;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 last_interval = 0;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 h_init = 1;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 h = h_init;
# 116 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 xmin = 0;
# 117 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 tolerance = 10 / (float)(xmax-xmin);
# 118 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 x[0] = 0;
# 121 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 127 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (xmax < xmin || h <= 0.0){
# 128 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (-2); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (xmax == xmin){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_1; ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 137 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (h > (xmax - xmin) ) {
# 138 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  h = (float)xmax - (float)xmin;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  last_interval = 1;
# 140 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 141 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 143 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 146 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 for(k=1; k<=xmax; k++) {
# 147 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 148 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  x[k] = k-1;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  h = h_init;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 152 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  scale_fina = 1.0;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  for (j = 0; j < 12; j++) {
# 163 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   error = 0;
# 169 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   outside = 0;
# 170 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   scale_min = 4.0;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 174 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    call_lbl_0: ({ float ____chimes_arg0; float * ____chimes_arg2; float * ____chimes_arg3; if (!____chimes_replaying) { ____chimes_arg0 = (x[k]); ____chimes_arg2 = (y[k - 1]); ____chimes_arg3 = (y[k]); } calling((void*)embedded_fehlberg_7_8, 0, ____alias_loc_id_0, 0UL, 6, (size_t)(0UL), (size_t)(0UL), (size_t)(6850351079512197280UL), (size_t)(6850351079512197280UL), (size_t)(6850351079512197158UL), (size_t)(6850351079512197541UL)); (embedded_fehlberg_7_8)(____chimes_arg0, h, ____chimes_arg2, ____chimes_arg3, err, params); }) ;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 183 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 184 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 187 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 188 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(err[i] > 0){
# 189 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     error = 1;
# 190 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 191 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (error != 1) {
# 193 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    scale_fina = 4.0;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    break;
# 195 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 196 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 200 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 202 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(y[k-1][i] == 0.0){
# 203 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     yy[i] = tolerance;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 205 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    else{
# 206 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     yy[i] = fabs(y[k-1][i]);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 208 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    scale[i] = 0.8 * pow( tolerance * yy[i] / err[i] , err_exponent );
# 209 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(scale[i]<scale_min){
# 210 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     scale_min = scale[i];
# 211 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 212 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 213 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   scale_fina = ( (( (scale_min) < (0.125) ? (0.125) : (scale_min) )) < (4.0) ? (( (scale_min) < (0.125) ? (0.125) : (scale_min) )) : (4.0) );
# 214 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 215 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 216 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 219 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 220 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if ( err[i] > ( tolerance * yy[i] ) ){
# 221 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     outside = 1;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 223 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 224 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (outside == 0){
# 225 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    break;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 227 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 228 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 229 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   h = h * scale_fina;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (h >= 0.9) {
# 237 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = 0.9;
# 238 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 239 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 241 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (x[k] + h > (float)xmax) {{
# 242 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = (float)xmax - x[k];
# 243 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }; } else if ( x[k] + h + 0.5 * h > (float)xmax ){
# 247 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = 0.5 * h;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 249 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 250 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  }
# 251 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 252 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 255 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 256 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  x[k] = x[k] + h;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 259 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 261 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 262 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  if ( j >= 12 ) {
# 263 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (-1); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_2; ;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  }
# 265 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_3; ;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 284 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 285 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 286 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 287 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 288 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int solver_quick( float** y,
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* x,
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     int xmax,
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* params) {const int ____chimes_did_disable0 = new_stack((void *)(&solver), "solver", &____must_manage_solver, 4, 4, (size_t)(6850351079512197538UL), (size_t)(6850351079512197539UL), (size_t)(0UL), (size_t)(6850351079512197541UL), "solver|y|0", &____must_checkpoint_solver_y_0, "float**", (void *)(&y), (size_t)8, 1, 0, 0, "solver|x|0", &____must_checkpoint_solver_x_0, "float*", (void *)(&x), (size_t)8, 1, 0, 0, "solver|xmax|0", &____must_checkpoint_solver_xmax_0, "i32", (void *)(&xmax), (size_t)4, 0, 0, 0, "solver|params|0", &____must_checkpoint_solver_params_0, "float*", (void *)(&params), (size_t)8, 1, 0, 0) ; int k;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int j;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float yy[91];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float scale[91];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float err[91];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float scale_min;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float tolerance;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float h_init;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float h;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int outside;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int error;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
float err_exponent;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (____must_checkpoint_solver_k_0 || ____must_checkpoint_solver_j_0 || ____must_checkpoint_solver_yy_0 || ____must_checkpoint_solver_err_0 || ____must_checkpoint_solver_scale_min_0 || ____must_checkpoint_solver_tolerance_0 || ____must_checkpoint_solver_h_init_0 || ____must_checkpoint_solver_h_0 || ____must_checkpoint_solver_outside_0 || ____must_checkpoint_solver_error_0 || ____must_checkpoint_solver_err_exponent_0) { register_stack_vars(11, "solver|k|0", &____must_checkpoint_solver_k_0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "solver|j|0", &____must_checkpoint_solver_j_0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "solver|yy|0", &____must_checkpoint_solver_yy_0, "[91 x float]", (void *)(yy), (size_t)364, 0, 0, 0, "solver|err|0", &____must_checkpoint_solver_err_0, "[91 x float]", (void *)(err), (size_t)364, 0, 0, 0, "solver|scale_min|0", &____must_checkpoint_solver_scale_min_0, "float", (void *)(&scale_min), (size_t)4, 0, 0, 0, "solver|tolerance|0", &____must_checkpoint_solver_tolerance_0, "float", (void *)(&tolerance), (size_t)4, 0, 0, 0, "solver|h_init|0", &____must_checkpoint_solver_h_init_0, "float", (void *)(&h_init), (size_t)4, 0, 0, 0, "solver|h|0", &____must_checkpoint_solver_h_0, "float", (void *)(&h), (size_t)4, 0, 0, 0, "solver|outside|0", &____must_checkpoint_solver_outside_0, "i32", (void *)(&outside), (size_t)4, 0, 0, 0, "solver|error|0", &____must_checkpoint_solver_error_0, "i32", (void *)(&error), (size_t)4, 0, 0, 0, "solver|err_exponent|0", &____must_checkpoint_solver_err_exponent_0, "float", (void *)(&err_exponent), (size_t)4, 0, 0, 0); } ; ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 85 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float last_interval; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 88 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int xmin; ;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 94 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float scale_fina; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     ;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     ;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 105 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int i; ;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 112 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 err_exponent = 1.0 / 7.0;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 last_interval = 0;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 h_init = 1;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 h = h_init;
# 116 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 xmin = 0;
# 117 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 tolerance = 10 / (float)(xmax-xmin);
# 118 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 x[0] = 0;
# 121 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 127 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (xmax < xmin || h <= 0.0){
# 128 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (-2); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (xmax == xmin){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_1; ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 137 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (h > (xmax - xmin) ) {
# 138 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  h = (float)xmax - (float)xmin;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  last_interval = 1;
# 140 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 141 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 143 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 146 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 for(k=1; k<=xmax; k++) {
# 147 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 148 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  x[k] = k-1;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  h = h_init;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 152 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  scale_fina = 1.0;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  for (j = 0; j < 12; j++) {
# 163 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   error = 0;
# 169 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   outside = 0;
# 170 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   scale_min = 4.0;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 174 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    call_lbl_0: ({ calling((void*)embedded_fehlberg_7_8, 0, ____alias_loc_id_0, 0UL, 6, (size_t)(0UL), (size_t)(0UL), (size_t)(6850351079512197280UL), (size_t)(6850351079512197280UL), (size_t)(6850351079512197158UL), (size_t)(6850351079512197541UL)); (embedded_fehlberg_7_8)(x[k], h, y[k - 1], y[k], err, params); }) ;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 183 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 184 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 187 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 188 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(err[i] > 0){
# 189 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     error = 1;
# 190 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 191 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (error != 1) {
# 193 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    scale_fina = 4.0;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    break;
# 195 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 196 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 200 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 202 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(y[k-1][i] == 0.0){
# 203 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     yy[i] = tolerance;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 205 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    else{
# 206 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     yy[i] = fabs(y[k-1][i]);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 208 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    scale[i] = 0.8 * pow( tolerance * yy[i] / err[i] , err_exponent );
# 209 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(scale[i]<scale_min){
# 210 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     scale_min = scale[i];
# 211 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 212 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 213 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   scale_fina = ( (( (scale_min) < (0.125) ? (0.125) : (scale_min) )) < (4.0) ? (( (scale_min) < (0.125) ? (0.125) : (scale_min) )) : (4.0) );
# 214 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 215 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 216 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 219 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 220 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if ( err[i] > ( tolerance * yy[i] ) ){
# 221 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     outside = 1;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 223 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 224 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (outside == 0){
# 225 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    break;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 227 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 228 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 229 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   h = h * scale_fina;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (h >= 0.9) {
# 237 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = 0.9;
# 238 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 239 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 241 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (x[k] + h > (float)xmax) {{
# 242 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = (float)xmax - x[k];
# 243 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }; } else if ( x[k] + h + 0.5 * h > (float)xmax ){
# 247 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = 0.5 * h;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 249 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 250 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  }
# 251 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 252 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 255 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 256 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  x[k] = x[k] + h;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 259 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 261 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 262 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  if ( j >= 12 ) {
# 263 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (-1); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_2; ;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  }
# 265 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); return ____chimes_ret_var_3; ;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 284 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 285 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 286 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 287 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 288 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
rm_stack(false, 0UL, "solver", &____must_manage_solver, ____alias_loc_id_1, ____chimes_did_disable0, false); }

int solver( float** y,
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* x,
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     int xmax,
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* params) { return (____chimes_replaying ? solver_resumable(y, x, xmax, params) : solver_quick(y, x, xmax, params)); }
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
int solver_npm( float** y,
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* x,
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     int xmax,
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     float* params) {
# 79 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 85 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float err_exponent;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float last_interval;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int error;
# 88 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int outside;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float h;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float h_init;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float tolerance;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int xmin;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 94 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float scale_min;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 float scale_fina;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    float err[91];
# 98 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    float scale[91];
# 99 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    float yy[91];
# 100 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 105 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 int i, j, k;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 107 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 112 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 err_exponent = 1.0 / 7.0;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 last_interval = 0;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 h_init = 1;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 h = h_init;
# 116 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 xmin = 0;
# 117 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 tolerance = 10 / (float)(xmax-xmin);
# 118 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 x[0] = 0;
# 121 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 127 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (xmax < xmin || h <= 0.0){
# 128 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   int ____chimes_ret_var_0; ____chimes_ret_var_0 = (-2); return ____chimes_ret_var_0; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (xmax == xmin){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   int ____chimes_ret_var_1; ____chimes_ret_var_1 = (0); return ____chimes_ret_var_1; ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 137 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 if (h > (xmax - xmin) ) {
# 138 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  h = (float)xmax - (float)xmin;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  last_interval = 1;
# 140 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 141 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 143 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 146 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 for(k=1; k<=xmax; k++) {
# 147 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 148 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  x[k] = k-1;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  h = h_init;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 152 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  scale_fina = 1.0;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  for (j = 0; j < 12; j++) {
# 163 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   error = 0;
# 169 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   outside = 0;
# 170 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   scale_min = 4.0;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 172 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 173 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 174 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   (*____chimes_extern_func_embedded_fehlberg_7_8)(x[k], h, y[k-1], y[k], err, params);
# 182 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 183 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 184 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 187 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 188 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(err[i] > 0){
# 189 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     error = 1;
# 190 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 191 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (error != 1) {
# 193 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    scale_fina = 4.0;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    break;
# 195 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 196 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 200 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 202 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(y[k-1][i] == 0.0){
# 203 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     yy[i] = tolerance;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 205 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    else{
# 206 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     yy[i] = fabs(y[k-1][i]);
# 207 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 208 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    scale[i] = 0.8 * pow( tolerance * yy[i] / err[i] , err_exponent );
# 209 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if(scale[i]<scale_min){
# 210 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     scale_min = scale[i];
# 211 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 212 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 213 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   scale_fina = ( (( (scale_min) < (0.125) ? (0.125) : (scale_min) )) < (4.0) ? (( (scale_min) < (0.125) ? (0.125) : (scale_min) )) : (4.0) );
# 214 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 215 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 216 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 219 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   for(i=0; i<91; i++){
# 220 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    if ( err[i] > ( tolerance * yy[i] ) ){
# 221 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
     outside = 1;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    }
# 223 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 224 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (outside == 0){
# 225 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    break;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 227 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 228 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 229 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   h = h * scale_fina;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (h >= 0.9) {
# 237 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = 0.9;
# 238 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 239 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 240 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 241 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   if (x[k] + h > (float)xmax) {{
# 242 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = (float)xmax - x[k];
# 243 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }; } else if ( x[k] + h + 0.5 * h > (float)xmax ){
# 247 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    h = 0.5 * h;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
   }
# 249 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 250 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  }
# 251 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 252 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 255 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 256 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  x[k] = x[k] + h;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 259 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 261 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 262 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  if ( j >= 12 ) {
# 263 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
    int ____chimes_ret_var_2; ____chimes_ret_var_2 = (-1); return ____chimes_ret_var_2; ;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  }
# 265 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
 }
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
  int ____chimes_ret_var_3; ____chimes_ret_var_3 = (0); return ____chimes_ret_var_3; ;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 284 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 285 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 286 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 287 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
# 288 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/solver.c"
}





static int module_init() {
    init_module(6850351079512197142UL, 4, 1, 15, 2, 1, 1, 2, 0, 0, 0,
                           &____alias_loc_id_0, (unsigned)10, (unsigned)0, (unsigned)1, (6850351079512197142UL + 8UL), (6850351079512197142UL + 9UL), (6850351079512197142UL + 10UL), (6850351079512197142UL + 14UL), (6850351079512197142UL + 15UL), (6850351079512197142UL + 17UL), (6850351079512197142UL + 18UL), (6850351079512197142UL + 19UL), (6850351079512197142UL + 20UL), (6850351079512197142UL + 397UL), "embedded_fehlberg_7_8", (unsigned)3, (6850351079512197142UL + 16UL), (6850351079512197142UL + 138UL), (6850351079512197142UL + 399UL),
                           &____alias_loc_id_1, (unsigned)25, (unsigned)0, (unsigned)0, (6850351079512197142UL + 1UL), (6850351079512197142UL + 2UL), (6850351079512197142UL + 3UL), (6850351079512197142UL + 4UL), (6850351079512197142UL + 5UL), (6850351079512197142UL + 6UL), (6850351079512197142UL + 7UL), (6850351079512197142UL + 8UL), (6850351079512197142UL + 9UL), (6850351079512197142UL + 10UL), (6850351079512197142UL + 11UL), (6850351079512197142UL + 12UL), (6850351079512197142UL + 13UL), (6850351079512197142UL + 14UL), (6850351079512197142UL + 15UL), (6850351079512197142UL + 17UL), (6850351079512197142UL + 18UL), (6850351079512197142UL + 19UL), (6850351079512197142UL + 20UL), (6850351079512197142UL + 21UL), (6850351079512197142UL + 22UL), (6850351079512197142UL + 23UL), (6850351079512197142UL + 24UL), (6850351079512197142UL + 25UL), (6850351079512197142UL + 397UL),
                            "solver", 0, "_Z6solverPPfS_iS_", "_Z10solver_npmPPfS_iS_", 1, &____alias_loc_id_0, 4, (6850351079512197142UL + 396UL), (6850351079512197142UL + 397UL), 0UL, (6850351079512197142UL + 399UL), 0UL, 3, "embedded_fehlberg_7_8", 6, 0UL, 0UL, (6850351079512197142UL + 138UL), (6850351079512197142UL + 138UL), (6850351079512197142UL + 16UL), (6850351079512197142UL + 399UL), 0UL, "fabs", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL,
                               "embedded_fehlberg_7_8", (void **)&(____chimes_extern_func_embedded_fehlberg_7_8),
                           "solver", &(____chimes_does_checkpoint_solver_npm),
                           "embedded_fehlberg_7_8", &(____chimes_does_checkpoint_embedded_fehlberg_7_8_npm),
                             (6850351079512197142UL + 3UL), (6850351079512197142UL + 397UL),
                             (6850351079512197142UL + 2UL), (6850351079512197142UL + 396UL),
                             (6850351079512197142UL + 5UL), (6850351079512197142UL + 399UL),
                             (6850351079512197142UL + 396UL), (6850351079512197142UL + 138UL),
                             "solver", "_Z6solverPPfS_iS_", 0, 1, "embedded_fehlberg_7_8",
                        "solver|y|0", 1, "embedded_fehlberg_7_8",
                        "solver|x|0", 1, "embedded_fehlberg_7_8",
                        "solver|xmax|0", 1, "embedded_fehlberg_7_8",
                        "solver|params|0", 1, "embedded_fehlberg_7_8",
                        "solver|err_exponent|0", 1, "embedded_fehlberg_7_8",
                        "solver|error|0", 1, "embedded_fehlberg_7_8",
                        "solver|outside|0", 1, "embedded_fehlberg_7_8",
                        "solver|h|0", 1, "embedded_fehlberg_7_8",
                        "solver|h_init|0", 1, "embedded_fehlberg_7_8",
                        "solver|tolerance|0", 1, "embedded_fehlberg_7_8",
                        "solver|scale_min|0", 1, "embedded_fehlberg_7_8",
                        "solver|err|0", 1, "solver",
                        "solver|yy|0", 1, "embedded_fehlberg_7_8",
                        "solver|j|0", 1, "embedded_fehlberg_7_8",
                        "solver|k|0", 1, "embedded_fehlberg_7_8");
    return 0;
}

static const int __libchimes_module_init = module_init();
