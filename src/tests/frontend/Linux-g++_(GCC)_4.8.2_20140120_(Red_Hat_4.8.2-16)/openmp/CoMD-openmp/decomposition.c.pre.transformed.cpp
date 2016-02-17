# 1 "decomposition.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "decomposition.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_processorNum_npm = 1;
static int ____chimes_does_checkpoint_initDecomposition_npm = 1;
static int ____chimes_does_checkpoint_getMyRank_npm = 1;
static int ____chimes_does_checkpoint_getNRanks_npm = 1;

static int ____must_checkpoint_initDecomposition_xproc_0 = 2;
static int ____must_checkpoint_initDecomposition_yproc_0 = 2;
static int ____must_checkpoint_initDecomposition_zproc_0 = 2;
static int ____must_checkpoint_initDecomposition_globalExtent_0 = 2;
static int ____must_checkpoint_initDecomposition_dd_0 = 2;

static int ____must_manage_processorNum = 2;
static int ____must_manage_initDecomposition = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 3 4
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
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 2 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 3 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 4 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 5 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 6 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"

# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 375 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 387 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 388 "/usr/include/sys/cdefs.h" 2 3 4
# 376 "/usr/include/features.h" 2 3 4
# 399 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 400 "/usr/include/features.h" 2 3 4
# 25 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 27 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


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
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


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


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/bits/byteswap.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

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
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


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
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__leaf__)) atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__leaf__)) atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4
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





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4
# 54 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/sys/select.h" 3 4
}
# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}

}
# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 115 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 202 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 271 "/usr/include/sys/types.h" 2 3 4


}
# 315 "/usr/include/stdlib.h" 2 3 4






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
# 465 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 479 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 492 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__, __alloc_size__ (2)));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 534 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 716 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
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
# 807 "/usr/include/stdlib.h" 3 4
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







extern int mblen (const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 884 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 895 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 952 "/usr/include/stdlib.h" 2 3 4
# 964 "/usr/include/stdlib.h" 3 4
}
# 8 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c" 2
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.h" 1






# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 8 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.h" 2


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
# 9 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c" 2
# 9 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"

# 1 "/usr/include/assert.h" 1 3 4
# 65 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 11 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c" 2
# 11 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"

# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h"
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
# 13 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c" 2
# 13 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 14 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 15 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 16 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 17 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 18 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
Domain* initDecomposition_npm(int xproc, int yproc, int zproc, real3 globalExtent);static int (*____chimes_extern_func_getMyRank)(void) = getMyRank;static int (*____chimes_extern_func_getNRanks)(void) = getNRanks;
Domain* initDecomposition_quick(int xproc, int yproc, int zproc, real3 globalExtent); Domain* initDecomposition(int xproc, int yproc, int zproc, real3 globalExtent);
Domain* initDecomposition_resumable(int xproc, int yproc, int zproc, real3 globalExtent)
# 19 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initDecomposition), "initDecomposition", &____must_manage_initDecomposition, 4, 4, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9341214929697525590UL), "initDecomposition|xproc|0", &____must_checkpoint_initDecomposition_xproc_0, "i32", (void *)(&xproc), (size_t)4, 0, 0, 0, "initDecomposition|yproc|0", &____must_checkpoint_initDecomposition_yproc_0, "i32", (void *)(&yproc), (size_t)4, 0, 0, 0, "initDecomposition|zproc|0", &____must_checkpoint_initDecomposition_zproc_0, "i32", (void *)(&zproc), (size_t)4, 0, 0, 0, "initDecomposition|globalExtent|0", &____must_checkpoint_initDecomposition_globalExtent_0, "double*", (void *)(&globalExtent), (size_t)8, 1, 0, 0) ; Domain *dd;
# 19 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
 if (____must_checkpoint_initDecomposition_dd_0) { register_stack_vars(1, "initDecomposition|dd|0", &____must_checkpoint_initDecomposition_dd_0, "%struct.DomainSt*", (void *)(&dd), (size_t)8, 1, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ; ;
# 20 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    call_lbl_0: ((xproc * yproc * zproc == ({ calling((void*)getNRanks, 0, ____alias_loc_id_1, 0UL, 0); (getNRanks)(); }) ) ? static_cast<void> (0) : __assert_fail ("xproc * yproc * zproc == getNRanks()", "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c", 20, __PRETTY_FUNCTION__));
# 21 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 22 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd = ((Domain*) ({ void *____chimes_tmp_ptr = malloc((sizeof(Domain)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(Domain), 9341214929697525391UL, 0, 1, (int)sizeof(struct DomainSt), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 23 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[0] = xproc;
# 24 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[1] = yproc;
# 25 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[2] = zproc;
# 26 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 27 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int myRank; call_lbl_1: myRank = ( ({ calling((void*)getMyRank, 1, ____alias_loc_id_0, 0UL, 0); (getMyRank)(); }) ) ;
# 28 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[0] = myRank % dd->procGrid[0];
# 29 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   myRank /= dd->procGrid[0];
# 30 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[1] = myRank % dd->procGrid[1];
# 31 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[2] = myRank / dd->procGrid[1];
# 32 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 33 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 34 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 35 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   {
# 36 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalMin[i] = 0;
# 37 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalMax[i] = globalExtent[i];
# 38 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalExtent[i] = dd->globalMax[i] - dd->globalMin[i];
# 39 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   } }
# 40 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 41 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 42 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 43 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   {
# 44 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localExtent[i] = dd->globalExtent[i] / dd->procGrid[i];
# 45 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localMin[i] = dd->globalMin[i] + dd->procCoord[i] * dd->localExtent[i];
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localMax[i] = dd->globalMin[i] + (dd->procCoord[i]+1) * dd->localExtent[i];
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   } }
# 48 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 49 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    Domain *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (dd); rm_stack(true, 9341214929697525391UL, "initDecomposition", &____must_manage_initDecomposition, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 50 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
rm_stack(true, 9341214929697525391UL, "initDecomposition", &____must_manage_initDecomposition, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 51 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 52 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 53 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 54 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 55 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 56 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 57 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
int processorNum_npm(Domain* domain, int dix, int diy, int diz);
int processorNum_quick(Domain* domain, int dix, int diy, int diz); int processorNum(Domain* domain, int dix, int diy, int diz);
int processorNum_resumable(Domain* domain, int dix, int diy, int diz)
# 58 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&processorNum), "processorNum", &____must_manage_processorNum, 4, 0, (size_t)(9341214929697525688UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 59 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    const int *procCoord; procCoord = (domain->procCoord) ;
# 60 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    const int *procGrid; procGrid = (domain->procGrid) ;
# 61 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int ix; ix = ((procCoord[0] + dix + procGrid[0]) % procGrid[0]) ;
# 62 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int iy; iy = ((procCoord[1] + diy + procGrid[1]) % procGrid[1]) ;
# 63 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int iz; iz = ((procCoord[2] + diz + procGrid[2]) % procGrid[2]) ;
# 64 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 65 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (ix + procGrid[0] *(iy + procGrid[1]*iz)); rm_stack(false, 0UL, "processorNum", &____must_manage_processorNum, ____alias_loc_id_3, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 66 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
rm_stack(false, 0UL, "processorNum", &____must_manage_processorNum, ____alias_loc_id_3, ____chimes_did_disable1, false); }
# 18 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
Domain* initDecomposition_quick(int xproc, int yproc, int zproc, real3 globalExtent)
# 19 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initDecomposition), "initDecomposition", &____must_manage_initDecomposition, 4, 4, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9341214929697525590UL), "initDecomposition|xproc|0", &____must_checkpoint_initDecomposition_xproc_0, "i32", (void *)(&xproc), (size_t)4, 0, 0, 0, "initDecomposition|yproc|0", &____must_checkpoint_initDecomposition_yproc_0, "i32", (void *)(&yproc), (size_t)4, 0, 0, 0, "initDecomposition|zproc|0", &____must_checkpoint_initDecomposition_zproc_0, "i32", (void *)(&zproc), (size_t)4, 0, 0, 0, "initDecomposition|globalExtent|0", &____must_checkpoint_initDecomposition_globalExtent_0, "double*", (void *)(&globalExtent), (size_t)8, 1, 0, 0) ; Domain *dd;
# 19 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
 if (____must_checkpoint_initDecomposition_dd_0) { register_stack_vars(1, "initDecomposition|dd|0", &____must_checkpoint_initDecomposition_dd_0, "%struct.DomainSt*", (void *)(&dd), (size_t)8, 1, 0, 0); } ; ;
# 20 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    call_lbl_0: ((xproc * yproc * zproc == ({ calling((void*)getNRanks, 0, ____alias_loc_id_1, 0UL, 0); (getNRanks)(); }) ) ? static_cast<void> (0) : __assert_fail ("xproc * yproc * zproc == getNRanks()", "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c", 20, __PRETTY_FUNCTION__));
# 21 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 22 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd = ((Domain*) ({ void *____chimes_tmp_ptr = malloc((sizeof(Domain)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(Domain), 9341214929697525391UL, 0, 1, (int)sizeof(struct DomainSt), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 23 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[0] = xproc;
# 24 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[1] = yproc;
# 25 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[2] = zproc;
# 26 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 27 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int myRank; call_lbl_1: myRank = ( ({ calling((void*)getMyRank, 1, ____alias_loc_id_0, 0UL, 0); (getMyRank)(); }) ) ;
# 28 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[0] = myRank % dd->procGrid[0];
# 29 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   myRank /= dd->procGrid[0];
# 30 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[1] = myRank % dd->procGrid[1];
# 31 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[2] = myRank / dd->procGrid[1];
# 32 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 33 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 34 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 35 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   {
# 36 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalMin[i] = 0;
# 37 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalMax[i] = globalExtent[i];
# 38 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalExtent[i] = dd->globalMax[i] - dd->globalMin[i];
# 39 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   } }
# 40 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 41 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 42 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 43 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   {
# 44 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localExtent[i] = dd->globalExtent[i] / dd->procGrid[i];
# 45 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localMin[i] = dd->globalMin[i] + dd->procCoord[i] * dd->localExtent[i];
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localMax[i] = dd->globalMin[i] + (dd->procCoord[i]+1) * dd->localExtent[i];
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   } }
# 48 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 49 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    Domain *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (dd); rm_stack(true, 9341214929697525391UL, "initDecomposition", &____must_manage_initDecomposition, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 50 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
rm_stack(true, 9341214929697525391UL, "initDecomposition", &____must_manage_initDecomposition, ____alias_loc_id_2, ____chimes_did_disable0, false); }

Domain* initDecomposition(int xproc, int yproc, int zproc, real3 globalExtent) { return (____chimes_replaying ? initDecomposition_resumable(xproc, yproc, zproc, globalExtent) : initDecomposition_quick(xproc, yproc, zproc, globalExtent)); }
# 57 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
int processorNum_quick(Domain* domain, int dix, int diy, int diz)
# 58 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&processorNum), "processorNum", &____must_manage_processorNum, 4, 0, (size_t)(9341214929697525688UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 59 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    const int *procCoord; procCoord = (domain->procCoord) ;
# 60 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    const int *procGrid; procGrid = (domain->procGrid) ;
# 61 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int ix; ix = ((procCoord[0] + dix + procGrid[0]) % procGrid[0]) ;
# 62 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int iy; iy = ((procCoord[1] + diy + procGrid[1]) % procGrid[1]) ;
# 63 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int iz; iz = ((procCoord[2] + diz + procGrid[2]) % procGrid[2]) ;
# 64 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 65 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (ix + procGrid[0] *(iy + procGrid[1]*iz)); rm_stack(false, 0UL, "processorNum", &____must_manage_processorNum, ____alias_loc_id_3, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 66 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
rm_stack(false, 0UL, "processorNum", &____must_manage_processorNum, ____alias_loc_id_3, ____chimes_did_disable1, false); }

int processorNum(Domain* domain, int dix, int diy, int diz) { return (____chimes_replaying ? processorNum_resumable(domain, dix, diy, diz) : processorNum_quick(domain, dix, diy, diz)); }
# 18 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
Domain* initDecomposition_npm(int xproc, int yproc, int zproc, real3 globalExtent)
# 19 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
{
# 20 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   ((xproc * yproc * zproc == (*____chimes_extern_func_getNRanks)()) ? static_cast<void> (0) : __assert_fail ("xproc * yproc * zproc == getNRanks()", "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c", 20, __PRETTY_FUNCTION__));
# 21 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 22 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   Domain* dd = (Domain*) ({ void *____chimes_tmp_ptr = malloc((sizeof(Domain)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(Domain), 9341214929697525391UL, 0, 1, (int)sizeof(struct DomainSt), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 23 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[0] = xproc;
# 24 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[1] = yproc;
# 25 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procGrid[2] = zproc;
# 26 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 27 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   int myRank = (*____chimes_extern_func_getMyRank)();
# 28 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[0] = myRank % dd->procGrid[0];
# 29 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   myRank /= dd->procGrid[0];
# 30 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[1] = myRank % dd->procGrid[1];
# 31 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   dd->procCoord[2] = myRank / dd->procGrid[1];
# 32 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 33 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 34 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   for (int i = 0; i < 3; i++)
# 35 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   {
# 36 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalMin[i] = 0;
# 37 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalMax[i] = globalExtent[i];
# 38 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->globalExtent[i] = dd->globalMax[i] - dd->globalMin[i];
# 39 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   }
# 40 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 41 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 42 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   for (int i = 0; i < 3; i++)
# 43 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   {
# 44 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localExtent[i] = dd->globalExtent[i] / dd->procGrid[i];
# 45 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localMin[i] = dd->globalMin[i] + dd->procCoord[i] * dd->localExtent[i];
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
      dd->localMax[i] = dd->globalMin[i] + (dd->procCoord[i]+1) * dd->localExtent[i];
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   }
# 48 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 49 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    Domain * ____chimes_ret_var_0; ____chimes_ret_var_0 = (dd); return ____chimes_ret_var_0; ;
# 50 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
}
# 57 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
int processorNum_npm(Domain* domain, int dix, int diy, int diz)
# 58 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
{
# 59 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   const int* procCoord = domain->procCoord;
# 60 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   const int* procGrid = domain->procGrid;
# 61 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   int ix = (procCoord[0] + dix + procGrid[0]) % procGrid[0];
# 62 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   int iy = (procCoord[1] + diy + procGrid[1]) % procGrid[1];
# 63 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
   int iz = (procCoord[2] + diz + procGrid[2]) % procGrid[2];
# 64 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
# 65 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
    int ____chimes_ret_var_1; ____chimes_ret_var_1 = (ix + procGrid[0] *(iy + procGrid[1]*iz)); return ____chimes_ret_var_1; ;
# 66 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.c"
}





static int module_init() {
    init_module(9341214929697525360UL, 6, 2, 5, 4, 2, 2, 4, 0, 0, 1,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (unsigned)0, (9341214929697525360UL + 5UL), (9341214929697525360UL + 31UL),
                           &____alias_loc_id_1, (unsigned)4, (unsigned)0, (unsigned)0, (9341214929697525360UL + 1UL), (9341214929697525360UL + 2UL), (9341214929697525360UL + 3UL), (9341214929697525360UL + 4UL),
                           &____alias_loc_id_2, (unsigned)5, (unsigned)0, (unsigned)0, (9341214929697525360UL + 6UL), (9341214929697525360UL + 7UL), (9341214929697525360UL + 8UL), (9341214929697525360UL + 9UL), (9341214929697525360UL + 31UL),
                           &____alias_loc_id_3, (unsigned)10, (unsigned)0, (unsigned)0, (9341214929697525360UL + 238UL), (9341214929697525360UL + 239UL), (9341214929697525360UL + 240UL), (9341214929697525360UL + 241UL), (9341214929697525360UL + 242UL), (9341214929697525360UL + 243UL), (9341214929697525360UL + 244UL), (9341214929697525360UL + 245UL), (9341214929697525360UL + 246UL), (9341214929697525360UL + 247UL),
                            "processorNum", 0, "_Z12processorNumP8DomainStiii", "_Z16processorNum_npmP8DomainStiii", 0, 4, (9341214929697525360UL + 328UL), 0UL, 0UL, 0UL, 0UL, 0,
                            "initDecomposition", 0, "_Z17initDecompositioniiiPd", "_Z21initDecomposition_npmiiiPd", 2, &____alias_loc_id_0, &____alias_loc_id_1, 4, 0UL, 0UL, 0UL, (9341214929697525360UL + 230UL), (9341214929697525360UL + 31UL), 4, "getNRanks", 0, 0UL, "__assert_fail", 4, (9341214929697525360UL + 332UL), (9341214929697525360UL + 333UL), 0UL, (9341214929697525360UL + 334UL), 0UL, "malloc", 1, 0UL, (9341214929697525360UL + 31UL), "getMyRank", 0, 0UL,
                               "getMyRank", (void **)&(____chimes_extern_func_getMyRank),
                               "getNRanks", (void **)&(____chimes_extern_func_getNRanks),
                           "processorNum", &(____chimes_does_checkpoint_processorNum_npm),
                           "initDecomposition", &(____chimes_does_checkpoint_initDecomposition_npm),
                           "getMyRank", &(____chimes_does_checkpoint_getMyRank_npm),
                           "getNRanks", &(____chimes_does_checkpoint_getNRanks_npm),
                             (9341214929697525360UL + 238UL), (9341214929697525360UL + 328UL),
                             (9341214929697525360UL + 4UL), (9341214929697525360UL + 230UL),
                             (9341214929697525360UL + 243UL), (9341214929697525360UL + 328UL),
                             (9341214929697525360UL + 242UL), (9341214929697525360UL + 328UL),
                             (9341214929697525360UL + 9UL), (9341214929697525360UL + 31UL),
                             (9341214929697525360UL + 5UL), (9341214929697525360UL + 31UL),
                     "DomainSt", 1344UL, 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent),
                             "processorNum", "_Z12processorNumP8DomainStiii", 0, 0,
                             "initDecomposition", "_Z17initDecompositioniiiPd", 0, 2, "getNRanks", "getMyRank",
                        "initDecomposition|xproc|0", 1, "getNRanks",
                        "initDecomposition|yproc|0", 1, "getNRanks",
                        "initDecomposition|zproc|0", 1, "getNRanks",
                        "initDecomposition|globalExtent|0", 2, "getNRanks", "getMyRank",
                        "initDecomposition|dd|0", 1, "getMyRank");
    return 0;
}

static const int __libchimes_module_init = module_init();
