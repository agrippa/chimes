# 1 "ljForce.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "ljForce.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_initLjPot_npm = 1;
static int ____chimes_does_checkpoint_ljPrint_npm = 1;
static int ____chimes_does_checkpoint_ljForce_npm = 1;
static int ____chimes_does_checkpoint_ljDestroy_npm = 1;
static int ____chimes_does_checkpoint_getNeighborBoxes_npm = 1;
static int ____chimes_does_checkpoint_zeroReal3_npm = 1;

static int ____must_checkpoint_ljForce_s_0 = 2;
static int ____must_checkpoint_ljForce_epsilon_0 = 2;
static int ____must_checkpoint_ljForce_rCut2_0 = 2;
static int ____must_checkpoint_ljForce_ePot_0 = 2;
static int ____must_checkpoint_ljForce_s6_0 = 2;
static int ____must_checkpoint_ljForce_eShift_0 = 2;
static int ____must_checkpoint_ljForce_nbrBoxes_0 = 2;
static int ____must_checkpoint_ljForce_iBox_0 = 2;
static int ____must_checkpoint_ljForce_nIBox_0 = 2;
static int ____must_checkpoint_ljForce_dr_0 = 2;

static int ____must_manage_initLjPot = 2;
static int ____must_manage_ljPrint = 2;
static int ____must_manage_zeroReal3 = 2;
static int ____must_manage_ljForce = 2;
static int ____must_manage_ljDestroy = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
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
# 76 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 62 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.h" 1






struct BasePotentialSt;
struct BasePotentialSt* initLjPot(void);
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"

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
# 65 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
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
# 66 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
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
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"

# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/constants.h" 1
# 28 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/constants.h"
static const double amuToInternalMass =
         1.660538921e-27 * 1.0e-10 * 1.0e-10
         / (1.0e-15 * 1.0e-15 * 1.602176565e-19);


static const double kB_eV = 8.6173324e-5;


static const double hartreeToEv = 27.21138505;


static const double bohrToAngs = 0.52917721092;
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
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
# 70 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
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
# 71 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
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
# 72 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 1






# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
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
# 109 "/usr/include/stdio.h" 3 4


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
   int (*loadBuffer)(void* parms, void* data, int face, char* buf) __attribute__((nocheckpoint));
# 61 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
   void (*unloadBuffer)(void* parms, void* data, int face, int bufSize, char* buf) __attribute__((nocheckpoint));


   void (*destroy)(void* parms) __attribute__((nocheckpoint));


   void* parms;
}
HaloExchange;


HaloExchange* initAtomHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


HaloExchange* initForceHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


void destroyHaloExchange(HaloExchange** haloExchange);


void haloExchange(HaloExchange* haloExchange, void* data);


void sortAtomsInCell(struct AtomsSt* atoms, struct LinkCellSt* boxes, int iBox);
# 10 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2

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
   int (*force)(struct SimFlatSt* s) __attribute__((nocheckpoint));
   void (*print)(FILE* file, struct BasePotentialSt* pot) __attribute__((nocheckpoint));
   void (*destroy)(struct BasePotentialSt** pot) __attribute__((nocheckpoint));
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
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c" 2
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 75 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 76 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 77 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 78 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 79 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
typedef struct LjPotentialSt
# 80 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{
# 81 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t cutoff;
# 82 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t mass;
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t lat;
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   char latticeType[8];
# 85 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   char name[3];
# 86 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   int atomicNo;
# 87 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   int (*force)(SimFlat* s);
# 88 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   void (*print)(FILE* file, BasePotential* pot);
# 89 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   void (*destroy)(BasePotential** pot);
# 90 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t sigma;
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t epsilon;
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
} LjPotential;
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int ljForce(SimFlat* s);
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljPrint(FILE* file, BasePotential* pot);
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljDestroy_npm(BasePotential** inppot);
void ljDestroy_quick(BasePotential** inppot); void ljDestroy(BasePotential** inppot);
void ljDestroy_resumable(BasePotential** inppot)
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&ljDestroy), "ljDestroy", &____must_manage_ljDestroy, 1, 0, (size_t)(15692222973149250888UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   if (! inppot) {rm_stack(false, 0UL, "ljDestroy", &____must_manage_ljDestroy, ____alias_loc_id_1, ____chimes_did_disable0, false); return; };
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *pot; pot = ((LjPotential*)(*inppot)) ;
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   if (! pot) {rm_stack(false, 0UL, "ljDestroy", &____must_manage_ljDestroy, ____alias_loc_id_1, ____chimes_did_disable0, false); return; };
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    ({ free_helper((((unsigned char *)pot) - sizeof(void *)), 15692222973149250874UL);free((((unsigned char *)pot) - sizeof(void *))); }) ;
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   *inppot = __null;
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   rm_stack(false, 0UL, "ljDestroy", &____must_manage_ljDestroy, ____alias_loc_id_1, ____chimes_did_disable0, false); return;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
}
# 107 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
BasePotential* initLjPot_npm(void);
BasePotential* initLjPot_quick(void); BasePotential* initLjPot(void);
BasePotential* initLjPot_resumable(void)
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&initLjPot), "initLjPot", &____must_manage_initLjPot, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *pot; pot = ((LjPotential*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LjPotential)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LjPotential), 15692222973149250895UL, 0, 1, (int)sizeof(struct LjPotentialSt), 3, (int)__builtin_offsetof(struct LjPotentialSt, force), (int)__builtin_offsetof(struct LjPotentialSt, print), (int)__builtin_offsetof(struct LjPotentialSt, destroy)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->force = ljForce;
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->print = ljPrint;
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->destroy = ljDestroy;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->sigma = 2.315;
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->epsilon = 0.167;
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->mass = 63.55 * amuToInternalMass;
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->lat = 3.615;
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   strcpy(pot->latticeType, "FCC");
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->cutoff = 2.5*pot->sigma;
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   strcpy(pot->name, "Cu");
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->atomicNo = 29;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    BasePotential *____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((BasePotential*) pot); rm_stack(true, 15692222973149250895UL, "initLjPot", &____must_manage_initLjPot, ____alias_loc_id_2, ____chimes_did_disable1, false); return ____chimes_ret_var_0; ;
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
rm_stack(true, 15692222973149250895UL, "initLjPot", &____must_manage_initLjPot, ____alias_loc_id_2, ____chimes_did_disable1, false); }
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljPrint_npm(FILE* file, BasePotential* pot);
void ljPrint_quick(FILE* file, BasePotential* pot); void ljPrint(FILE* file, BasePotential* pot);
void ljPrint_resumable(FILE* file, BasePotential* pot)
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&ljPrint), "ljPrint", &____must_manage_ljPrint, 2, 0, (size_t)(15692222973149251488UL), (size_t)(15692222973149251489UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *ljPot; ljPot = ((LjPotential*) pot) ;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Potential type   : Lennard-Jones\n");
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Species name     : %s\n", ljPot->name);
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Atomic number    : %d\n", ljPot->atomicNo);
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Mass             : ""%lg"" amu\n", ljPot->mass / amuToInternalMass);
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Lattice Type     : %s\n", ljPot->latticeType);
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Lattice spacing  : ""%lg"" Angstroms\n", ljPot->lat);
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Cutoff           : ""%lg"" Angstroms\n", ljPot->cutoff);
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Epsilon          : ""%lg"" eV\n", ljPot->epsilon);
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Sigma            : ""%lg"" Angstroms\n", ljPot->sigma);
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
rm_stack(false, 0UL, "ljPrint", &____must_manage_ljPrint, ____alias_loc_id_4, ____chimes_did_disable2, false); }
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int ljForce_npm(SimFlat* s);static int (*____chimes_extern_func_getNeighborBoxes)(struct LinkCellSt *, int, int *) = getNeighborBoxes;static void (*____chimes_extern_func_zeroReal3)(double *) = zeroReal3;
int ljForce_quick(SimFlat* s); int ljForce(SimFlat* s);
int ljForce_resumable(SimFlat* s)
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&ljForce), "ljForce", &____must_manage_ljForce, 1, 1, (size_t)(15692222973149251136UL), "ljForce|s|0", &____must_checkpoint_ljForce_s_0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0) ; real_t dr[3];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int nIBox;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int iBox;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int nbrBoxes[27];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t eShift;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t s6;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t ePot;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t rCut2;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t epsilon;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
 if (____must_checkpoint_ljForce_dr_0 || ____must_checkpoint_ljForce_nIBox_0 || ____must_checkpoint_ljForce_iBox_0 || ____must_checkpoint_ljForce_nbrBoxes_0 || ____must_checkpoint_ljForce_eShift_0 || ____must_checkpoint_ljForce_s6_0 || ____must_checkpoint_ljForce_ePot_0 || ____must_checkpoint_ljForce_rCut2_0 || ____must_checkpoint_ljForce_epsilon_0) { register_stack_vars(9, "ljForce|dr|0", &____must_checkpoint_ljForce_dr_0, "[3 x double]", (void *)(dr), (size_t)24, 0, 0, 0, "ljForce|nIBox|0", &____must_checkpoint_ljForce_nIBox_0, "i32", (void *)(&nIBox), (size_t)4, 0, 0, 0, "ljForce|iBox|0", &____must_checkpoint_ljForce_iBox_0, "i32", (void *)(&iBox), (size_t)4, 0, 0, 0, "ljForce|nbrBoxes|0", &____must_checkpoint_ljForce_nbrBoxes_0, "[27 x i32]", (void *)(nbrBoxes), (size_t)108, 0, 0, 0, "ljForce|eShift|0", &____must_checkpoint_ljForce_eShift_0, "double", (void *)(&eShift), (size_t)8, 0, 0, 0, "ljForce|s6|0", &____must_checkpoint_ljForce_s6_0, "double", (void *)(&s6), (size_t)8, 0, 0, 0, "ljForce|ePot|0", &____must_checkpoint_ljForce_ePot_0, "double", (void *)(&ePot), (size_t)8, 0, 0, 0, "ljForce|rCut2|0", &____must_checkpoint_ljForce_rCut2_0, "double", (void *)(&rCut2), (size_t)8, 0, 0, 0, "ljForce|epsilon|0", &____must_checkpoint_ljForce_epsilon_0, "double", (void *)(&epsilon), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ; ;
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *pot; pot = ((LjPotential *) s->pot) ;
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    real_t sigma; sigma = (pot->sigma) ;
# 147 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      epsilon = (pot->epsilon) ;
# 148 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    real_t rCut; rCut = (pot->cutoff) ;
# 149 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      rCut2 = (rCut*rCut) ;
# 150 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 151 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 152 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      ePot = (0.0) ;
# 153 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   s->ePotential = 0.0;
# 154 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    int fSize; fSize = (s->boxes->nTotalBoxes*64) ;
# 155 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   { int iii; for ( iii = (0) ; iii<fSize; ++iii)
# 156 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   {
# 157 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
       call_lbl_0: ({ calling((void*)zeroReal3, 0, 0, 0UL, 1, (size_t)(15692222973149251140UL)); (zeroReal3)(s->atoms->f[iii]); }) ;
# 158 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      s->atoms->U[iii] = 0.;
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   } }
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      s6 = (sigma*sigma*sigma*sigma*sigma*sigma) ;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    real_t rCut6; rCut6 = (s6 / (rCut2*rCut2*rCut2)) ;
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      eShift = (1.0 * rCut6 * (rCut6 - 1.0)) ;
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    ;
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   { for ( iBox = (0) ; iBox<s->boxes->nLocalBoxes; iBox++)
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   {
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         nIBox = (s->boxes->nAtoms[iBox]) ;
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      if (nIBox == 0) {continue; };
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
       int nNbrBoxes; call_lbl_1: nNbrBoxes = ( ({ LinkCell * ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = (s->boxes); } calling((void*)getNeighborBoxes, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(15692222973149251138UL), (size_t)(0UL), (size_t)(15692222973149250956UL)); (getNeighborBoxes)(____chimes_arg1, iBox, nbrBoxes); }) ) ;
# 173 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      { int jTmp; for ( jTmp = (0) ; jTmp<nNbrBoxes; jTmp++)
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      {
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
          int jBox; jBox = (nbrBoxes[jTmp]) ;
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         ((jBox>=0) ? static_cast<void> (0) : __assert_fail ("jBox>=0", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c", 178, __PRETTY_FUNCTION__));
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
          int nJBox; nJBox = (s->boxes->nAtoms[jBox]) ;
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         if (nJBox == 0) {continue; };
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         { int iOff; int ii; for ( iOff = (iBox*64) , ii = (0) ; ii<nIBox; ii++,iOff++)
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         {
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
             int iId; iId = (s->atoms->gid[iOff]) ;
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            { int jOff; int ij; for ( jOff = (64*jBox) , ij = (0) ; ij<nJBox; ij++,jOff++)
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            {
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                ;
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                int jId; jId = (s->atoms->gid[jOff]) ;
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (jBox < s->boxes->nLocalBoxes && jId <= iId) {continue; };
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t r2; r2 = (0.0) ;
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               { int m1; for ( m1 = (0) ; m1<3; m1++)
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               {
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  dr[m1] = s->atoms->r[iOff][m1]-s->atoms->r[jOff][m1];
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  r2+=dr[m1]*dr[m1];
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               } }
# 200 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (r2 > rCut2) {continue; };
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 204 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 205 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               r2 = 1.0/r2;
# 206 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t r6; r6 = (s6 * (r2*r2*r2)) ;
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t eLocal; eLocal = (r6 * (r6 - 1.0) - eShift) ;
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               s->atoms->U[iOff] += 0.5*eLocal;
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               s->atoms->U[jOff] += 0.5*eLocal;
# 210 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 211 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 212 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (jBox < s->boxes->nLocalBoxes) {ePot += eLocal; } else {ePot += 0.5 * eLocal; } ;
# 217 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 218 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t fr; fr = (- 4.0*epsilon*r6*r2*(12.0*r6 - 6.0)) ;
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               { int m2; for ( m2 = (0) ; m2<3; m2++)
# 221 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               {
# 222 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  s->atoms->f[iOff][m2] -= dr[m2]*fr;
# 223 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  s->atoms->f[jOff][m2] += dr[m2]*fr;
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               } }
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            } }
# 226 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         } }
# 227 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      } }
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   } }
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   ePot = ePot*4.0*epsilon;
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   s->ePotential = ePot;
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "ljForce", &____must_manage_ljForce, ____alias_loc_id_3, ____chimes_did_disable3, false); return ____chimes_ret_var_1; ;
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
rm_stack(false, 0UL, "ljForce", &____must_manage_ljForce, ____alias_loc_id_3, ____chimes_did_disable3, false); }
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljDestroy_quick(BasePotential** inppot)
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&ljDestroy), "ljDestroy", &____must_manage_ljDestroy, 1, 0, (size_t)(15692222973149250888UL)) ; ; ;
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   if (! inppot) {rm_stack(false, 0UL, "ljDestroy", &____must_manage_ljDestroy, ____alias_loc_id_1, ____chimes_did_disable0, false); return; };
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *pot; pot = ((LjPotential*)(*inppot)) ;
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   if (! pot) {rm_stack(false, 0UL, "ljDestroy", &____must_manage_ljDestroy, ____alias_loc_id_1, ____chimes_did_disable0, false); return; };
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    ({ free_helper((((unsigned char *)pot) - sizeof(void *)), 15692222973149250874UL);free((((unsigned char *)pot) - sizeof(void *))); }) ;
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   *inppot = __null;
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   rm_stack(false, 0UL, "ljDestroy", &____must_manage_ljDestroy, ____alias_loc_id_1, ____chimes_did_disable0, false); return;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
}

void ljDestroy(BasePotential** inppot) { (____chimes_replaying ? ljDestroy_resumable(inppot) : ljDestroy_quick(inppot)); }
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
BasePotential* initLjPot_quick(void)
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&initLjPot), "initLjPot", &____must_manage_initLjPot, 0, 0) ; ; ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *pot; pot = ((LjPotential*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LjPotential)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LjPotential), 15692222973149250895UL, 0, 1, (int)sizeof(struct LjPotentialSt), 3, (int)__builtin_offsetof(struct LjPotentialSt, force), (int)__builtin_offsetof(struct LjPotentialSt, print), (int)__builtin_offsetof(struct LjPotentialSt, destroy)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->force = ljForce;
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->print = ljPrint;
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->destroy = ljDestroy;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->sigma = 2.315;
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->epsilon = 0.167;
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->mass = 63.55 * amuToInternalMass;
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->lat = 3.615;
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   strcpy(pot->latticeType, "FCC");
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->cutoff = 2.5*pot->sigma;
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   strcpy(pot->name, "Cu");
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->atomicNo = 29;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    BasePotential *____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((BasePotential*) pot); rm_stack(true, 15692222973149250895UL, "initLjPot", &____must_manage_initLjPot, ____alias_loc_id_2, ____chimes_did_disable1, false); return ____chimes_ret_var_0; ;
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
rm_stack(true, 15692222973149250895UL, "initLjPot", &____must_manage_initLjPot, ____alias_loc_id_2, ____chimes_did_disable1, false); }

BasePotential* initLjPot(void) { return (____chimes_replaying ? initLjPot_resumable() : initLjPot_quick()); }
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljPrint_quick(FILE* file, BasePotential* pot)
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&ljPrint), "ljPrint", &____must_manage_ljPrint, 2, 0, (size_t)(15692222973149251488UL), (size_t)(15692222973149251489UL)) ; ; ;
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *ljPot; ljPot = ((LjPotential*) pot) ;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Potential type   : Lennard-Jones\n");
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Species name     : %s\n", ljPot->name);
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Atomic number    : %d\n", ljPot->atomicNo);
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Mass             : ""%lg"" amu\n", ljPot->mass / amuToInternalMass);
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Lattice Type     : %s\n", ljPot->latticeType);
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Lattice spacing  : ""%lg"" Angstroms\n", ljPot->lat);
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Cutoff           : ""%lg"" Angstroms\n", ljPot->cutoff);
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Epsilon          : ""%lg"" eV\n", ljPot->epsilon);
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Sigma            : ""%lg"" Angstroms\n", ljPot->sigma);
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
rm_stack(false, 0UL, "ljPrint", &____must_manage_ljPrint, ____alias_loc_id_4, ____chimes_did_disable2, false); }

void ljPrint(FILE* file, BasePotential* pot) { (____chimes_replaying ? ljPrint_resumable(file, pot) : ljPrint_quick(file, pot)); }
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int ljForce_quick(SimFlat* s)
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&ljForce), "ljForce", &____must_manage_ljForce, 1, 1, (size_t)(15692222973149251136UL), "ljForce|s|0", &____must_checkpoint_ljForce_s_0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0) ; real_t dr[3];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int nIBox;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int iBox;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int nbrBoxes[27];
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t eShift;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t s6;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t ePot;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t rCut2;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
real_t epsilon;
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
 if (____must_checkpoint_ljForce_dr_0 || ____must_checkpoint_ljForce_nIBox_0 || ____must_checkpoint_ljForce_iBox_0 || ____must_checkpoint_ljForce_nbrBoxes_0 || ____must_checkpoint_ljForce_eShift_0 || ____must_checkpoint_ljForce_s6_0 || ____must_checkpoint_ljForce_ePot_0 || ____must_checkpoint_ljForce_rCut2_0 || ____must_checkpoint_ljForce_epsilon_0) { register_stack_vars(9, "ljForce|dr|0", &____must_checkpoint_ljForce_dr_0, "[3 x double]", (void *)(dr), (size_t)24, 0, 0, 0, "ljForce|nIBox|0", &____must_checkpoint_ljForce_nIBox_0, "i32", (void *)(&nIBox), (size_t)4, 0, 0, 0, "ljForce|iBox|0", &____must_checkpoint_ljForce_iBox_0, "i32", (void *)(&iBox), (size_t)4, 0, 0, 0, "ljForce|nbrBoxes|0", &____must_checkpoint_ljForce_nbrBoxes_0, "[27 x i32]", (void *)(nbrBoxes), (size_t)108, 0, 0, 0, "ljForce|eShift|0", &____must_checkpoint_ljForce_eShift_0, "double", (void *)(&eShift), (size_t)8, 0, 0, 0, "ljForce|s6|0", &____must_checkpoint_ljForce_s6_0, "double", (void *)(&s6), (size_t)8, 0, 0, 0, "ljForce|ePot|0", &____must_checkpoint_ljForce_ePot_0, "double", (void *)(&ePot), (size_t)8, 0, 0, 0, "ljForce|rCut2|0", &____must_checkpoint_ljForce_rCut2_0, "double", (void *)(&rCut2), (size_t)8, 0, 0, 0, "ljForce|epsilon|0", &____must_checkpoint_ljForce_epsilon_0, "double", (void *)(&epsilon), (size_t)8, 0, 0, 0); } ; ;
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    LjPotential *pot; pot = ((LjPotential *) s->pot) ;
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    real_t sigma; sigma = (pot->sigma) ;
# 147 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      epsilon = (pot->epsilon) ;
# 148 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    real_t rCut; rCut = (pot->cutoff) ;
# 149 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      rCut2 = (rCut*rCut) ;
# 150 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 151 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 152 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      ePot = (0.0) ;
# 153 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   s->ePotential = 0.0;
# 154 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    int fSize; fSize = (s->boxes->nTotalBoxes*64) ;
# 155 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   { int iii; for ( iii = (0) ; iii<fSize; ++iii)
# 156 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   {
# 157 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
       call_lbl_0: ({ calling((void*)zeroReal3, 0, 0, 0UL, 1, (size_t)(15692222973149251140UL)); (zeroReal3)(s->atoms->f[iii]); }) ;
# 158 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      s->atoms->U[iii] = 0.;
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   } }
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      s6 = (sigma*sigma*sigma*sigma*sigma*sigma) ;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    real_t rCut6; rCut6 = (s6 / (rCut2*rCut2*rCut2)) ;
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      eShift = (1.0 * rCut6 * (rCut6 - 1.0)) ;
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    ;
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   { for ( iBox = (0) ; iBox<s->boxes->nLocalBoxes; iBox++)
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   {
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         nIBox = (s->boxes->nAtoms[iBox]) ;
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      if (nIBox == 0) {continue; };
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
       int nNbrBoxes; call_lbl_1: nNbrBoxes = ( ({ calling((void*)getNeighborBoxes, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(15692222973149251138UL), (size_t)(0UL), (size_t)(15692222973149250956UL)); (getNeighborBoxes)(s->boxes, iBox, nbrBoxes); }) ) ;
# 173 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      { int jTmp; for ( jTmp = (0) ; jTmp<nNbrBoxes; jTmp++)
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      {
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
          int jBox; jBox = (nbrBoxes[jTmp]) ;
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         ((jBox>=0) ? static_cast<void> (0) : __assert_fail ("jBox>=0", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c", 178, __PRETTY_FUNCTION__));
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
          int nJBox; nJBox = (s->boxes->nAtoms[jBox]) ;
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         if (nJBox == 0) {continue; };
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         { int iOff; int ii; for ( iOff = (iBox*64) , ii = (0) ; ii<nIBox; ii++,iOff++)
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         {
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
             int iId; iId = (s->atoms->gid[iOff]) ;
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            { int jOff; int ij; for ( jOff = (64*jBox) , ij = (0) ; ij<nJBox; ij++,jOff++)
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            {
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                ;
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                int jId; jId = (s->atoms->gid[jOff]) ;
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (jBox < s->boxes->nLocalBoxes && jId <= iId) {continue; };
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t r2; r2 = (0.0) ;
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               { int m1; for ( m1 = (0) ; m1<3; m1++)
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               {
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  dr[m1] = s->atoms->r[iOff][m1]-s->atoms->r[jOff][m1];
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  r2+=dr[m1]*dr[m1];
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               } }
# 200 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (r2 > rCut2) {continue; };
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 204 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 205 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               r2 = 1.0/r2;
# 206 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t r6; r6 = (s6 * (r2*r2*r2)) ;
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t eLocal; eLocal = (r6 * (r6 - 1.0) - eShift) ;
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               s->atoms->U[iOff] += 0.5*eLocal;
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               s->atoms->U[jOff] += 0.5*eLocal;
# 210 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 211 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 212 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (jBox < s->boxes->nLocalBoxes) {ePot += eLocal; } else {ePot += 0.5 * eLocal; } ;
# 217 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 218 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                real_t fr; fr = (- 4.0*epsilon*r6*r2*(12.0*r6 - 6.0)) ;
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               { int m2; for ( m2 = (0) ; m2<3; m2++)
# 221 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               {
# 222 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  s->atoms->f[iOff][m2] -= dr[m2]*fr;
# 223 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  s->atoms->f[jOff][m2] += dr[m2]*fr;
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               } }
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            } }
# 226 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         } }
# 227 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      } }
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   } }
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   ePot = ePot*4.0*epsilon;
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   s->ePotential = ePot;
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "ljForce", &____must_manage_ljForce, ____alias_loc_id_3, ____chimes_did_disable3, false); return ____chimes_ret_var_1; ;
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
rm_stack(false, 0UL, "ljForce", &____must_manage_ljForce, ____alias_loc_id_3, ____chimes_did_disable3, false); }

int ljForce(SimFlat* s) { return (____chimes_replaying ? ljForce_resumable(s) : ljForce_quick(s)); }
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljDestroy_npm(BasePotential** inppot)
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   if (! inppot) {return; };
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   LjPotential* pot = (LjPotential*)(*inppot);
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   if (! pot) {return; };
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    ({ free_helper((((unsigned char *)pot) - sizeof(void *)), 15692222973149250874UL);free((((unsigned char *)pot) - sizeof(void *))); }) ;
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   *inppot = __null;
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   return;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
}
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
BasePotential* initLjPot_npm(void)
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   LjPotential *pot = (LjPotential*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LjPotential)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LjPotential), 15692222973149250895UL, 0, 1, (int)sizeof(struct LjPotentialSt), 3, (int)__builtin_offsetof(struct LjPotentialSt, force), (int)__builtin_offsetof(struct LjPotentialSt, print), (int)__builtin_offsetof(struct LjPotentialSt, destroy)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->force = ljForce;
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->print = ljPrint;
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->destroy = ljDestroy;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->sigma = 2.315;
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->epsilon = 0.167;
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->mass = 63.55 * amuToInternalMass;
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->lat = 3.615;
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   strcpy(pot->latticeType, "FCC");
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->cutoff = 2.5*pot->sigma;
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   strcpy(pot->name, "Cu");
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   pot->atomicNo = 29;
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    BasePotential * ____chimes_ret_var_0; ____chimes_ret_var_0 = ((BasePotential*) pot); return ____chimes_ret_var_0; ;
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
}
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
void ljPrint_npm(FILE* file, BasePotential* pot)
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   LjPotential* ljPot = (LjPotential*) pot;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Potential type   : Lennard-Jones\n");
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Species name     : %s\n", ljPot->name);
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Atomic number    : %d\n", ljPot->atomicNo);
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Mass             : ""%lg"" amu\n", ljPot->mass / amuToInternalMass);
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Lattice Type     : %s\n", ljPot->latticeType);
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Lattice spacing  : ""%lg"" Angstroms\n", ljPot->lat);
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Cutoff           : ""%lg"" Angstroms\n", ljPot->cutoff);
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Epsilon          : ""%lg"" eV\n", ljPot->epsilon);
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   fprintf(file, "  Sigma            : ""%lg"" Angstroms\n", ljPot->sigma);
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
}
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
int ljForce_npm(SimFlat* s)
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
{
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   LjPotential* pot = (LjPotential *) s->pot;
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t sigma = pot->sigma;
# 147 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t epsilon = pot->epsilon;
# 148 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t rCut = pot->cutoff;
# 149 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t rCut2 = rCut*rCut;
# 150 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 151 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 152 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t ePot = 0.0;
# 153 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   s->ePotential = 0.0;
# 154 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   int fSize = s->boxes->nTotalBoxes*64;
# 155 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   for (int iii=0; iii<fSize; ++iii)
# 156 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   {
# 157 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      (*____chimes_extern_func_zeroReal3)(s->atoms->f[iii]);
# 158 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      s->atoms->U[iii] = 0.;
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   }
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t s6 = sigma*sigma*sigma*sigma*sigma*sigma;
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t rCut6 = s6 / (rCut2*rCut2*rCut2);
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   real_t eShift = 1.0 * rCut6 * (rCut6 - 1.0);
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   int nbrBoxes[27];
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; iBox++)
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   {
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      int nIBox = s->boxes->nAtoms[iBox];
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      if (nIBox == 0) {continue; };
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      int nNbrBoxes = (*____chimes_extern_func_getNeighborBoxes)(s->boxes, iBox, nbrBoxes);
# 173 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      for (int jTmp=0; jTmp<nNbrBoxes; jTmp++)
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      {
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         int jBox = nbrBoxes[jTmp];
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         ((jBox>=0) ? static_cast<void> (0) : __assert_fail ("jBox>=0", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c", 178, __PRETTY_FUNCTION__));
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         int nJBox = s->boxes->nAtoms[jBox];
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         if (nJBox == 0) {continue; };
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         for (int iOff=iBox*64,ii=0; ii<nIBox; ii++,iOff++)
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         {
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            int iId = s->atoms->gid[iOff];
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            for (int jOff=64*jBox,ij=0; ij<nJBox; ij++,jOff++)
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            {
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               real_t dr[3];
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               int jId = s->atoms->gid[jOff];
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (jBox < s->boxes->nLocalBoxes && jId <= iId) {continue; };
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               real_t r2 = 0.0;
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               for (int m1=0; m1<3; m1++)
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               {
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  dr[m1] = s->atoms->r[iOff][m1]-s->atoms->r[jOff][m1];
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  r2+=dr[m1]*dr[m1];
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               }
# 200 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (r2 > rCut2) {continue; };
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 204 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 205 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               r2 = 1.0/r2;
# 206 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               real_t r6 = s6 * (r2*r2*r2);
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               real_t eLocal = r6 * (r6 - 1.0) - eShift;
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               s->atoms->U[iOff] += 0.5*eLocal;
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               s->atoms->U[jOff] += 0.5*eLocal;
# 210 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 211 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 212 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               if (jBox < s->boxes->nLocalBoxes) {ePot += eLocal; } else {ePot += 0.5 * eLocal; } ;
# 217 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 218 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               real_t fr = - 4.0*epsilon*r6*r2*(12.0*r6 - 6.0);
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               for (int m2=0; m2<3; m2++)
# 221 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               {
# 222 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  s->atoms->f[iOff][m2] -= dr[m2]*fr;
# 223 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
                  s->atoms->f[jOff][m2] += dr[m2]*fr;
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
               }
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
            }
# 226 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
         }
# 227 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
      }
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   }
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   ePot = ePot*4.0*epsilon;
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
   s->ePotential = ePot;
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
    int ____chimes_ret_var_1; ____chimes_ret_var_1 = (0); return ____chimes_ret_var_1; ;
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.c"
}





static int module_init() {
    init_module(15692222973149250863UL, 14, 5, 10, 6, 4, 2, 6, 0, 0, 10,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)1, (15692222973149250863UL + 95UL), "getNeighborBoxes", (unsigned)2, (15692222973149250863UL + 93UL), (15692222973149250863UL + 275UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (15692222973149250863UL + 1UL), (15692222973149250863UL + 2UL), (15692222973149250863UL + 25UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (15692222973149250863UL + 29UL), (15692222973149250863UL + 30UL), (15692222973149250863UL + 32UL),
                           &____alias_loc_id_3, (unsigned)34, (unsigned)0, (unsigned)0, (15692222973149250863UL + 81UL), (15692222973149250863UL + 82UL), (15692222973149250863UL + 83UL), (15692222973149250863UL + 84UL), (15692222973149250863UL + 85UL), (15692222973149250863UL + 86UL), (15692222973149250863UL + 87UL), (15692222973149250863UL + 88UL), (15692222973149250863UL + 89UL), (15692222973149250863UL + 90UL), (15692222973149250863UL + 91UL), (15692222973149250863UL + 92UL), (15692222973149250863UL + 94UL), (15692222973149250863UL + 95UL), (15692222973149250863UL + 96UL), (15692222973149250863UL + 97UL), (15692222973149250863UL + 98UL), (15692222973149250863UL + 99UL), (15692222973149250863UL + 100UL), (15692222973149250863UL + 101UL), (15692222973149250863UL + 102UL), (15692222973149250863UL + 103UL), (15692222973149250863UL + 104UL), (15692222973149250863UL + 105UL), (15692222973149250863UL + 106UL), (15692222973149250863UL + 107UL), (15692222973149250863UL + 108UL), (15692222973149250863UL + 109UL), (15692222973149250863UL + 110UL), (15692222973149250863UL + 111UL), (15692222973149250863UL + 112UL), (15692222973149250863UL + 113UL), (15692222973149250863UL + 273UL), (15692222973149250863UL + 277UL),
                           &____alias_loc_id_4, (unsigned)3, (unsigned)0, (unsigned)0, (15692222973149250863UL + 570UL), (15692222973149250863UL + 571UL), (15692222973149250863UL + 572UL),
                           &____alias_loc_id_5, (unsigned)2, (unsigned)0, (unsigned)0, (15692222973149250863UL + 631UL), (15692222973149250863UL + 644UL),
                            "initLjPot", 0, "_Z9initLjPotv", "_Z13initLjPot_npmv", 0, 0, (15692222973149250863UL + 32UL), 3, "malloc", 1, 0UL, (15692222973149250863UL + 32UL), "strcpy", 2, (15692222973149250863UL + 32UL), (15692222973149250863UL + 652UL), (15692222973149250863UL + 59UL), "strcpy", 2, (15692222973149250863UL + 32UL), (15692222973149250863UL + 653UL), (15692222973149250863UL + 70UL),
                            "ljPrint", 0, "_Z7ljPrintP8_IO_FILEP15BasePotentialSt", "_Z11ljPrint_npmP8_IO_FILEP15BasePotentialSt", 0, 2, (15692222973149250863UL + 625UL), (15692222973149250863UL + 626UL), 0UL, 9, "fprintf", 2, (15692222973149250863UL + 625UL), (15692222973149250863UL + 654UL), 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 655UL), (15692222973149250863UL + 626UL), 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 655UL), 0UL, 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 657UL), 0UL, 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 655UL), (15692222973149250863UL + 626UL), 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 654UL), 0UL, 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 654UL), 0UL, 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 661UL), 0UL, 0UL, "fprintf", 3, (15692222973149250863UL + 625UL), (15692222973149250863UL + 654UL), 0UL, 0UL,
                            "ljForce", 0, "_Z7ljForceP9SimFlatSt", "_Z11ljForce_npmP9SimFlatSt", 1, &____alias_loc_id_0, 1, (15692222973149250863UL + 273UL), 0UL, 3, "zeroReal3", 1, (15692222973149250863UL + 277UL), 0UL, "getNeighborBoxes", 3, (15692222973149250863UL + 275UL), 0UL, (15692222973149250863UL + 93UL), 0UL, "__assert_fail", 4, (15692222973149250863UL + 663UL), (15692222973149250863UL + 664UL), 0UL, (15692222973149250863UL + 665UL), 0UL,
                            "ljDestroy", 0, "_Z9ljDestroyPP15BasePotentialSt", "_Z13ljDestroy_npmPP15BasePotentialSt", 0, 1, (15692222973149250863UL + 25UL), 0UL, 1, "free", 1, (15692222973149250863UL + 11UL), 0UL,
                               "getNeighborBoxes", (void **)&(____chimes_extern_func_getNeighborBoxes),
                               "zeroReal3", (void **)&(____chimes_extern_func_zeroReal3),
                           "initLjPot", &(____chimes_does_checkpoint_initLjPot_npm),
                           "ljPrint", &(____chimes_does_checkpoint_ljPrint_npm),
                           "ljForce", &(____chimes_does_checkpoint_ljForce_npm),
                           "ljDestroy", &(____chimes_does_checkpoint_ljDestroy_npm),
                           "getNeighborBoxes", &(____chimes_does_checkpoint_getNeighborBoxes_npm),
                           "zeroReal3", &(____chimes_does_checkpoint_zeroReal3_npm),
                             (15692222973149250863UL + 25UL), (15692222973149250863UL + 11UL),
                             (15692222973149250863UL + 570UL), (15692222973149250863UL + 625UL),
                             (15692222973149250863UL + 273UL), (15692222973149250863UL + 275UL),
                             (15692222973149250863UL + 631UL), (15692222973149250863UL + 644UL),
                             (15692222973149250863UL + 32UL), (15692222973149250863UL + 666UL),
                             (15692222973149250863UL + 571UL), (15692222973149250863UL + 626UL),
                             (15692222973149250863UL + 30UL), (15692222973149250863UL + 32UL),
                             (15692222973149250863UL + 29UL), (15692222973149250863UL + 32UL),
                             (15692222973149250863UL + 1UL), (15692222973149250863UL + 25UL),
                             (15692222973149250863UL + 2UL), (15692222973149250863UL + 11UL),
                             (15692222973149250863UL + 275UL), (15692222973149250863UL + 277UL),
                             (15692222973149250863UL + 572UL), (15692222973149250863UL + 626UL),
                             (15692222973149250863UL + 82UL), (15692222973149250863UL + 275UL),
                             (15692222973149250863UL + 81UL), (15692222973149250863UL + 273UL),
                     "AtomsSt", 448UL, 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U),
                     "BasePotentialSt", 512UL, 9, "double", (int)__builtin_offsetof (struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof (struct BasePotentialSt, mass), "double", (int)__builtin_offsetof (struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, name), "int", (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), "func*", (int)__builtin_offsetof (struct BasePotentialSt, force), "func*", (int)__builtin_offsetof (struct BasePotentialSt, print), "func*", (int)__builtin_offsetof (struct BasePotentialSt, destroy),
                     "DomainSt", 0UL, 0,
                     "HaloExchangeSt", 0UL, 0,
                     "LinkCellSt", 1024UL, 9, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms),
                     "LjPotentialSt", 640UL, 11, "double", (int)__builtin_offsetof (struct LjPotentialSt, cutoff), "double", (int)__builtin_offsetof (struct LjPotentialSt, mass), "double", (int)__builtin_offsetof (struct LjPotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct LjPotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct LjPotentialSt, name), "int", (int)__builtin_offsetof (struct LjPotentialSt, atomicNo), "func*", (int)__builtin_offsetof (struct LjPotentialSt, force), "func*", (int)__builtin_offsetof (struct LjPotentialSt, print), "func*", (int)__builtin_offsetof (struct LjPotentialSt, destroy), "double", (int)__builtin_offsetof (struct LjPotentialSt, sigma), "double", (int)__builtin_offsetof (struct LjPotentialSt, epsilon),
                     "SimFlatSt", 640UL, 11, "int", (int)__builtin_offsetof (struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof (struct SimFlatSt, printRate), "double", (int)__builtin_offsetof (struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof (struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof (struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof (struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof (struct SimFlatSt, species), "double", (int)__builtin_offsetof (struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof (struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof (struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof (struct SimFlatSt, atomExchange),
                     "SpeciesDataSt", 0UL, 0,
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                             "initLjPot", "_Z9initLjPotv", 0, 0,
                             "ljPrint", "_Z7ljPrintP8_IO_FILEP15BasePotentialSt", 0, 0,
                             "zeroReal3", "_ZL9zeroReal3Pd", 0, 0,
                             "ljForce", "_Z7ljForceP9SimFlatSt", 0, 2, "zeroReal3", "getNeighborBoxes",
                             "ljDestroy", "_Z9ljDestroyPP15BasePotentialSt", 0, 0,
                        "ljForce|s|0", 1, "getNeighborBoxes",
                        "ljForce|epsilon|0", 1, "getNeighborBoxes",
                        "ljForce|rCut2|0", 1, "getNeighborBoxes",
                        "ljForce|ePot|0", 1, "getNeighborBoxes",
                        "ljForce|s6|0", 1, "getNeighborBoxes",
                        "ljForce|eShift|0", 1, "getNeighborBoxes",
                        "ljForce|nbrBoxes|0", 1, "ljForce",
                        "ljForce|iBox|0", 1, "getNeighborBoxes",
                        "ljForce|nIBox|0", 1, "getNeighborBoxes",
                        "ljForce|dr|0", 1, "getNeighborBoxes");
    return 0;
}

static const int __libchimes_module_init = module_init();
