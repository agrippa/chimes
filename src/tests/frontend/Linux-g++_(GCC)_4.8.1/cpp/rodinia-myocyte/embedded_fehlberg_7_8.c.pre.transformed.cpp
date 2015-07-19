# 1 "embedded_fehlberg_7_8.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "embedded_fehlberg_7_8.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_embedded_fehlberg_7_8_npm = 1;
static int ____chimes_does_checkpoint_master_npm = 1;

static int ____must_checkpoint_embedded_fehlberg_7_8_initvalu_temp_0 = 2;

static int ____must_manage_embedded_fehlberg_7_8 = 2;
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
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
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/define.h" 1





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
# 7 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/define.h" 2
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



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include-fixed/bits/mathdef.h" 1 3 4
# 55 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include-fixed/bits/mathdef.h" 3 4
typedef double float_t;

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
# 63 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[0] < 0;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __d; int __i[4]; } __u = { __d: __x };
  return __u.__i[0] < 0;
}
# 116 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double fdim (double __x, double __y) throw ();
extern __inline __attribute__ ((__gnu_inline__)) double
fdim (double __x, double __y) throw ()
{
  return __x <= __y ? 0 : __x - __y;
}

extern __inline __attribute__ ((__gnu_inline__)) float fdimf (float __x, float __y) throw ();
extern __inline __attribute__ ((__gnu_inline__)) float
fdimf (float __x, float __y) throw ()
{
  return __x <= __y ? 0 : __x - __y;
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4
}
# 8 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/define.h" 2
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/omp.h" 1 3 4
# 34 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/omp.h" 3 4
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
# 9 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/define.h" 2
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/define.h"
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
# 2 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c" 2
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
float embedded_fehlberg_7_8_npm( float timeinst, float h, float* initvalu, float* finavalu, float* error, float* parameter);static void (*____chimes_extern_func_master)(float, float *, float *, float *) = master;
float embedded_fehlberg_7_8_quick( float timeinst, float h, float* initvalu, float* finavalu, float* error, float* parameter); float embedded_fehlberg_7_8( float timeinst, float h, float* initvalu, float* finavalu, float* error, float* parameter);
float embedded_fehlberg_7_8_resumable( float timeinst,
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float h,
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* initvalu,
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* finavalu,
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* error,
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* parameter) {const int ____chimes_did_disable0 = new_stack((void *)(&embedded_fehlberg_7_8), "embedded_fehlberg_7_8", &____must_manage_embedded_fehlberg_7_8, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(6599527376914384340UL), (size_t)(6599527376914384341UL), (size_t)(6599527376914384342UL), (size_t)(6599527376914384343UL)) ; float finavalu_temp[13][91];
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
float initvalu_temp[91];
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 if (____must_checkpoint_embedded_fehlberg_7_8_initvalu_temp_0) { register_stack_vars(1, "embedded_fehlberg_7_8|initvalu_temp|0", &____must_checkpoint_embedded_fehlberg_7_8_initvalu_temp_0, "[91 x float]", (void *)(initvalu_temp), (size_t)364, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } default: { chimes_error(); } } } ; ;
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c_1_11; c_1_11 = (41.0 / 840.0) ;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c6; c6 = (34.0 / 105.0) ;
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c_7_8; c_7_8 = (9.0 / 35.0) ;
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c_9_10; c_9_10 = (9.0 / 280.0) ;
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a2; a2 = (2.0 / 27.0) ;
# 113 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a3; a3 = (1.0 / 9.0) ;
# 114 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a4; a4 = (1.0 / 6.0) ;
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a5; a5 = (5.0 / 12.0) ;
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a6; a6 = (1.0 / 2.0) ;
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a7; a7 = (5.0 / 6.0) ;
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a8; a8 = (1.0 / 6.0) ;
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a9; a9 = (2.0 / 3.0) ;
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a10; a10 = (1.0 / 3.0) ;
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 122 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b31; b31 = (1.0 / 36.0) ;
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b32; b32 = (3.0 / 36.0) ;
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b41; b41 = (1.0 / 24.0) ;
# 125 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b43; b43 = (3.0 / 24.0) ;
# 126 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b51; b51 = (20.0 / 48.0) ;
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b53; b53 = (-75.0 / 48.0) ;
# 128 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b54; b54 = (75.0 / 48.0) ;
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b61; b61 = (1.0 / 20.0) ;
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b64; b64 = (5.0 / 20.0) ;
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b65; b65 = (4.0 / 20.0) ;
# 132 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b71; b71 = (-25.0 / 108.0) ;
# 133 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b74; b74 = (125.0 / 108.0) ;
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b75; b75 = (-260.0 / 108.0) ;
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b76; b76 = (250.0 / 108.0) ;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b81; b81 = (31.0/300.0) ;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b85; b85 = (61.0/225.0) ;
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b86; b86 = (-2.0/9.0) ;
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b87; b87 = (13.0/900.0) ;
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b91; b91 = (2.0) ;
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b94; b94 = (-53.0/6.0) ;
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b95; b95 = (704.0 / 45.0) ;
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b96; b96 = (-107.0 / 9.0) ;
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b97; b97 = (67.0 / 90.0) ;
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b98; b98 = (3.0) ;
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_1; b10_1 = (-91.0 / 108.0) ;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_4; b10_4 = (23.0 / 108.0) ;
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_5; b10_5 = (-976.0 / 135.0) ;
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_6; b10_6 = (311.0 / 54.0) ;
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_7; b10_7 = (-19.0 / 60.0) ;
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_8; b10_8 = (17.0 / 6.0) ;
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_9; b10_9 = (-1.0 / 12.0) ;
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_1; b11_1 = (2383.0 / 4100.0) ;
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_4; b11_4 = (-341.0 / 164.0) ;
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_5; b11_5 = (4496.0 / 1025.0) ;
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_6; b11_6 = (-301.0 / 82.0) ;
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_7; b11_7 = (2133.0 / 4100.0) ;
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_8; b11_8 = (45.0 / 82.0) ;
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_9; b11_9 = (45.0 / 164.0) ;
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_10; b11_10 = (18.0 / 41.0) ;
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_1; b12_1 = (3.0 / 205.0) ;
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_6; b12_6 = (- 6.0 / 41.0) ;
# 163 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_7; b12_7 = (- 3.0 / 205.0) ;
# 164 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_8; b12_8 = (- 3.0 / 41.0) ;
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_9; b12_9 = (3.0 / 41.0) ;
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_10; b12_10 = (6.0 / 41.0) ;
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_1; b13_1 = (-1777.0 / 4100.0) ;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_4; b13_4 = (-341.0 / 164.0) ;
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_5; b13_5 = (4496.0 / 1025.0) ;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_6; b13_6 = (-289.0 / 82.0) ;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_7; b13_7 = (2193.0 / 4100.0) ;
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_8; b13_8 = (51.0 / 82.0) ;
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_9; b13_9 = (33.0 / 164.0) ;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_10; b13_10 = (12.0 / 41.0) ;
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float err_factor; err_factor = (-41.0 / 840.0) ;
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  float h2_7; h2_7 = (a2 * h) ;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 float timeinst_temp; ;
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 int i; ;
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
     ;
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
     ;
# 207 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 207 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst;
# 208 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 209 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] ;
# 210 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 212 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 213 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_0: ({ float * ____chimes_arg3; if (!____chimes_replaying) { ____chimes_arg3 = (finavalu_temp[0]); } calling((void*)master, 0, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg3); }) ;
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h2_7;
# 227 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 228 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h2_7 * (finavalu_temp[0][i]);
# 229 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 230 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 231 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_1: ({ float * ____chimes_arg7; if (!____chimes_replaying) { ____chimes_arg7 = (finavalu_temp[1]); } calling((void*)master, 1, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg7); }) ;
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a3*h;
# 245 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 246 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b31*finavalu_temp[0][i] + b32*finavalu_temp[1][i]);
# 247 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 248 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 249 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_2: ({ float * ____chimes_arg11; if (!____chimes_replaying) { ____chimes_arg11 = (finavalu_temp[2]); } calling((void*)master, 2, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg11); }) ;
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a4*h;
# 263 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 264 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b41*finavalu_temp[0][i] + b43*finavalu_temp[2][i]) ;
# 265 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 266 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 267 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_3: ({ float * ____chimes_arg15; if (!____chimes_replaying) { ____chimes_arg15 = (finavalu_temp[3]); } calling((void*)master, 3, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg15); }) ;
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a5*h;
# 281 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 282 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b51*finavalu_temp[0][i] + b53*finavalu_temp[2][i] + b54*finavalu_temp[3][i]) ;
# 283 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 284 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 285 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_4: ({ float * ____chimes_arg19; if (!____chimes_replaying) { ____chimes_arg19 = (finavalu_temp[4]); } calling((void*)master, 4, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg19); }) ;
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a6*h;
# 299 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 300 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b61*finavalu_temp[0][i] + b64*finavalu_temp[3][i] + b65*finavalu_temp[4][i]) ;
# 301 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 302 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 303 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_5: ({ float * ____chimes_arg23; if (!____chimes_replaying) { ____chimes_arg23 = (finavalu_temp[5]); } calling((void*)master, 5, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg23); }) ;
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a7*h;
# 317 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 318 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b71*finavalu_temp[0][i] + b74*finavalu_temp[3][i] + b75*finavalu_temp[4][i] + b76*finavalu_temp[5][i]);
# 319 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 320 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 321 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_6: ({ float * ____chimes_arg27; if (!____chimes_replaying) { ____chimes_arg27 = (finavalu_temp[6]); } calling((void*)master, 6, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg27); }) ;
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a8*h;
# 335 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 336 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b81*finavalu_temp[0][i] + b85*finavalu_temp[4][i] + b86*finavalu_temp[5][i] + b87*finavalu_temp[6][i]);
# 337 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 339 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_7: ({ float * ____chimes_arg31; if (!____chimes_replaying) { ____chimes_arg31 = (finavalu_temp[7]); } calling((void*)master, 7, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg31); }) ;
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a9*h;
# 353 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 354 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b91*finavalu_temp[0][i] + b94*finavalu_temp[3][i] + b95*finavalu_temp[4][i] + b96*finavalu_temp[5][i] + b97*finavalu_temp[6][i]+ b98*finavalu_temp[7][i]) ;
# 355 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 356 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 357 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_8: ({ float * ____chimes_arg35; if (!____chimes_replaying) { ____chimes_arg35 = (finavalu_temp[8]); } calling((void*)master, 8, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg35); }) ;
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a10*h;
# 371 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b10_1*finavalu_temp[0][i] + b10_4*finavalu_temp[3][i] + b10_5*finavalu_temp[4][i] + b10_6*finavalu_temp[5][i] + b10_7*finavalu_temp[6][i] + b10_8*finavalu_temp[7][i] + b10_9*finavalu_temp[8] [i]) ;
# 373 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 374 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 375 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_9: ({ float * ____chimes_arg39; if (!____chimes_replaying) { ____chimes_arg39 = (finavalu_temp[9]); } calling((void*)master, 9, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg39); }) ;
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h;
# 389 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 390 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b11_1*finavalu_temp[0][i] + b11_4*finavalu_temp[3][i] + b11_5*finavalu_temp[4][i] + b11_6*finavalu_temp[5][i] + b11_7*finavalu_temp[6][i] + b11_8*finavalu_temp[7][i] + b11_9*finavalu_temp[8][i]+ b11_10 * finavalu_temp[9][i]);
# 391 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 392 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 393 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_10: ({ float * ____chimes_arg43; if (!____chimes_replaying) { ____chimes_arg43 = (finavalu_temp[10]); } calling((void*)master, 10, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg43); }) ;
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst;
# 407 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 408 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b12_1*finavalu_temp[0][i] + b12_6*finavalu_temp[5][i] + b12_7*finavalu_temp[6][i] + b12_8*finavalu_temp[7][i] + b12_9*finavalu_temp[8][i] + b12_10 * finavalu_temp[9][i]) ;
# 409 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 410 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 411 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_11: ({ float * ____chimes_arg47; if (!____chimes_replaying) { ____chimes_arg47 = (finavalu_temp[11]); } calling((void*)master, 11, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg47); }) ;
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h;
# 425 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 426 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b13_1*finavalu_temp[0][i] + b13_4*finavalu_temp[3][i] + b13_5*finavalu_temp[4][i] + b13_6*finavalu_temp[5][i] + b13_7*finavalu_temp[6][i] + b13_8*finavalu_temp[7][i] + b13_9*finavalu_temp[8][i] + b13_10*finavalu_temp[9][i] + finavalu_temp[11][i]) ;
# 427 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 428 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 429 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_12: ({ float * ____chimes_arg51; if (!____chimes_replaying) { ____chimes_arg51 = (finavalu_temp[12]); } calling((void*)master, 12, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, ____chimes_arg51); }) ;
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 443 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  finavalu[i]= initvalu[i] + h * (c_1_11 * (finavalu_temp[0][i] + finavalu_temp[10][i]) + c6 * finavalu_temp[5][i] + c_7_8 * (finavalu_temp[6][i] + finavalu_temp[7][i]) + c_9_10 * (finavalu_temp[8][i] + finavalu_temp[9][i]) );
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 453 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 454 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 455 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 456 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 457 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 458 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 459 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  error[i] = fabs(err_factor * (finavalu_temp[0][i] + finavalu_temp[10][i] - finavalu_temp[11][i] - finavalu_temp[12][i]));
# 460 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 461 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
rm_stack(false, 0UL, "embedded_fehlberg_7_8", &____must_manage_embedded_fehlberg_7_8, 0, ____chimes_did_disable0, false); }
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
float embedded_fehlberg_7_8_quick( float timeinst,
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float h,
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* initvalu,
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* finavalu,
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* error,
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* parameter) {const int ____chimes_did_disable0 = new_stack((void *)(&embedded_fehlberg_7_8), "embedded_fehlberg_7_8", &____must_manage_embedded_fehlberg_7_8, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(6599527376914384340UL), (size_t)(6599527376914384341UL), (size_t)(6599527376914384342UL), (size_t)(6599527376914384343UL)) ; float finavalu_temp[13][91];
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
float initvalu_temp[91];
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 if (____must_checkpoint_embedded_fehlberg_7_8_initvalu_temp_0) { register_stack_vars(1, "embedded_fehlberg_7_8|initvalu_temp|0", &____must_checkpoint_embedded_fehlberg_7_8_initvalu_temp_0, "[91 x float]", (void *)(initvalu_temp), (size_t)364, 0, 0, 0); } ; ;
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c_1_11; c_1_11 = (41.0 / 840.0) ;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c6; c6 = (34.0 / 105.0) ;
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c_7_8; c_7_8 = (9.0 / 35.0) ;
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float c_9_10; c_9_10 = (9.0 / 280.0) ;
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a2; a2 = (2.0 / 27.0) ;
# 113 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a3; a3 = (1.0 / 9.0) ;
# 114 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a4; a4 = (1.0 / 6.0) ;
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a5; a5 = (5.0 / 12.0) ;
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a6; a6 = (1.0 / 2.0) ;
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a7; a7 = (5.0 / 6.0) ;
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a8; a8 = (1.0 / 6.0) ;
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a9; a9 = (2.0 / 3.0) ;
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float a10; a10 = (1.0 / 3.0) ;
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 122 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b31; b31 = (1.0 / 36.0) ;
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b32; b32 = (3.0 / 36.0) ;
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b41; b41 = (1.0 / 24.0) ;
# 125 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b43; b43 = (3.0 / 24.0) ;
# 126 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b51; b51 = (20.0 / 48.0) ;
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b53; b53 = (-75.0 / 48.0) ;
# 128 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b54; b54 = (75.0 / 48.0) ;
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b61; b61 = (1.0 / 20.0) ;
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b64; b64 = (5.0 / 20.0) ;
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b65; b65 = (4.0 / 20.0) ;
# 132 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b71; b71 = (-25.0 / 108.0) ;
# 133 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b74; b74 = (125.0 / 108.0) ;
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b75; b75 = (-260.0 / 108.0) ;
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b76; b76 = (250.0 / 108.0) ;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b81; b81 = (31.0/300.0) ;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b85; b85 = (61.0/225.0) ;
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b86; b86 = (-2.0/9.0) ;
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b87; b87 = (13.0/900.0) ;
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b91; b91 = (2.0) ;
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b94; b94 = (-53.0/6.0) ;
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b95; b95 = (704.0 / 45.0) ;
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b96; b96 = (-107.0 / 9.0) ;
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b97; b97 = (67.0 / 90.0) ;
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b98; b98 = (3.0) ;
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_1; b10_1 = (-91.0 / 108.0) ;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_4; b10_4 = (23.0 / 108.0) ;
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_5; b10_5 = (-976.0 / 135.0) ;
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_6; b10_6 = (311.0 / 54.0) ;
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_7; b10_7 = (-19.0 / 60.0) ;
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_8; b10_8 = (17.0 / 6.0) ;
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b10_9; b10_9 = (-1.0 / 12.0) ;
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_1; b11_1 = (2383.0 / 4100.0) ;
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_4; b11_4 = (-341.0 / 164.0) ;
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_5; b11_5 = (4496.0 / 1025.0) ;
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_6; b11_6 = (-301.0 / 82.0) ;
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_7; b11_7 = (2133.0 / 4100.0) ;
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_8; b11_8 = (45.0 / 82.0) ;
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_9; b11_9 = (45.0 / 164.0) ;
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b11_10; b11_10 = (18.0 / 41.0) ;
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_1; b12_1 = (3.0 / 205.0) ;
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_6; b12_6 = (- 6.0 / 41.0) ;
# 163 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_7; b12_7 = (- 3.0 / 205.0) ;
# 164 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_8; b12_8 = (- 3.0 / 41.0) ;
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_9; b12_9 = (3.0 / 41.0) ;
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b12_10; b12_10 = (6.0 / 41.0) ;
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_1; b13_1 = (-1777.0 / 4100.0) ;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_4; b13_4 = (-341.0 / 164.0) ;
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_5; b13_5 = (4496.0 / 1025.0) ;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_6; b13_6 = (-289.0 / 82.0) ;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_7; b13_7 = (2193.0 / 4100.0) ;
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_8; b13_8 = (51.0 / 82.0) ;
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_9; b13_9 = (33.0 / 164.0) ;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float b13_10; b13_10 = (12.0 / 41.0) ;
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  static float err_factor; err_factor = (-41.0 / 840.0) ;
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  float h2_7; h2_7 = (a2 * h) ;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 float timeinst_temp; ;
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 int i; ;
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
     ;
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
     ;
# 207 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 207 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst;
# 208 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 209 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] ;
# 210 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 212 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 213 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_0: ({ calling((void*)master, 0, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[0]); }) ;
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h2_7;
# 227 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 228 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h2_7 * (finavalu_temp[0][i]);
# 229 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 230 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 231 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_1: ({ calling((void*)master, 1, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[1]); }) ;
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a3*h;
# 245 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 246 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b31*finavalu_temp[0][i] + b32*finavalu_temp[1][i]);
# 247 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 248 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 249 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_2: ({ calling((void*)master, 2, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[2]); }) ;
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a4*h;
# 263 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 264 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b41*finavalu_temp[0][i] + b43*finavalu_temp[2][i]) ;
# 265 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 266 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 267 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_3: ({ calling((void*)master, 3, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[3]); }) ;
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a5*h;
# 281 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 282 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b51*finavalu_temp[0][i] + b53*finavalu_temp[2][i] + b54*finavalu_temp[3][i]) ;
# 283 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 284 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 285 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_4: ({ calling((void*)master, 4, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[4]); }) ;
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a6*h;
# 299 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 300 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b61*finavalu_temp[0][i] + b64*finavalu_temp[3][i] + b65*finavalu_temp[4][i]) ;
# 301 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 302 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 303 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_5: ({ calling((void*)master, 5, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[5]); }) ;
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a7*h;
# 317 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 318 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b71*finavalu_temp[0][i] + b74*finavalu_temp[3][i] + b75*finavalu_temp[4][i] + b76*finavalu_temp[5][i]);
# 319 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 320 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 321 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_6: ({ calling((void*)master, 6, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[6]); }) ;
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a8*h;
# 335 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 336 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b81*finavalu_temp[0][i] + b85*finavalu_temp[4][i] + b86*finavalu_temp[5][i] + b87*finavalu_temp[6][i]);
# 337 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 339 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_7: ({ calling((void*)master, 7, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[7]); }) ;
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a9*h;
# 353 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 354 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b91*finavalu_temp[0][i] + b94*finavalu_temp[3][i] + b95*finavalu_temp[4][i] + b96*finavalu_temp[5][i] + b97*finavalu_temp[6][i]+ b98*finavalu_temp[7][i]) ;
# 355 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 356 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 357 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_8: ({ calling((void*)master, 8, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[8]); }) ;
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a10*h;
# 371 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b10_1*finavalu_temp[0][i] + b10_4*finavalu_temp[3][i] + b10_5*finavalu_temp[4][i] + b10_6*finavalu_temp[5][i] + b10_7*finavalu_temp[6][i] + b10_8*finavalu_temp[7][i] + b10_9*finavalu_temp[8] [i]) ;
# 373 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 374 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 375 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_9: ({ calling((void*)master, 9, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[9]); }) ;
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h;
# 389 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 390 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b11_1*finavalu_temp[0][i] + b11_4*finavalu_temp[3][i] + b11_5*finavalu_temp[4][i] + b11_6*finavalu_temp[5][i] + b11_7*finavalu_temp[6][i] + b11_8*finavalu_temp[7][i] + b11_9*finavalu_temp[8][i]+ b11_10 * finavalu_temp[9][i]);
# 391 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 392 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 393 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_10: ({ calling((void*)master, 10, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[10]); }) ;
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst;
# 407 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 408 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b12_1*finavalu_temp[0][i] + b12_6*finavalu_temp[5][i] + b12_7*finavalu_temp[6][i] + b12_8*finavalu_temp[7][i] + b12_9*finavalu_temp[8][i] + b12_10 * finavalu_temp[9][i]) ;
# 409 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 410 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 411 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_11: ({ calling((void*)master, 11, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[11]); }) ;
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h;
# 425 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 426 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b13_1*finavalu_temp[0][i] + b13_4*finavalu_temp[3][i] + b13_5*finavalu_temp[4][i] + b13_6*finavalu_temp[5][i] + b13_7*finavalu_temp[6][i] + b13_8*finavalu_temp[7][i] + b13_9*finavalu_temp[8][i] + b13_10*finavalu_temp[9][i] + finavalu_temp[11][i]) ;
# 427 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 428 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 429 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  call_lbl_12: ({ calling((void*)master, 12, 0, 0UL, 4, (size_t)(0UL), (size_t)(6599527376914383347UL), (size_t)(6599527376914384343UL), (size_t)(6599527376914383348UL)); (master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[12]); }) ;
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 443 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  finavalu[i]= initvalu[i] + h * (c_1_11 * (finavalu_temp[0][i] + finavalu_temp[10][i]) + c6 * finavalu_temp[5][i] + c_7_8 * (finavalu_temp[6][i] + finavalu_temp[7][i]) + c_9_10 * (finavalu_temp[8][i] + finavalu_temp[9][i]) );
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 453 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 454 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 455 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 456 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 457 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 458 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 459 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  error[i] = fabs(err_factor * (finavalu_temp[0][i] + finavalu_temp[10][i] - finavalu_temp[11][i] - finavalu_temp[12][i]));
# 460 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 461 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
rm_stack(false, 0UL, "embedded_fehlberg_7_8", &____must_manage_embedded_fehlberg_7_8, 0, ____chimes_did_disable0, false); }

float embedded_fehlberg_7_8( float timeinst,
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float h,
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* initvalu,
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* finavalu,
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* error,
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* parameter) { return (____chimes_replaying ? embedded_fehlberg_7_8_resumable(timeinst, h, initvalu, finavalu, error, parameter) : embedded_fehlberg_7_8_quick(timeinst, h, initvalu, finavalu, error, parameter)); }
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
float embedded_fehlberg_7_8_npm( float timeinst,
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float h,
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* initvalu,
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* finavalu,
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* error,
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
               float* parameter) {
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float c_1_11 = 41.0 / 840.0;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float c6 = 34.0 / 105.0;
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float c_7_8= 9.0 / 35.0;
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float c_9_10 = 9.0 / 280.0;
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a2 = 2.0 / 27.0;
# 113 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a3 = 1.0 / 9.0;
# 114 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a4 = 1.0 / 6.0;
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a5 = 5.0 / 12.0;
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a6 = 1.0 / 2.0;
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a7 = 5.0 / 6.0;
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a8 = 1.0 / 6.0;
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a9 = 2.0 / 3.0;
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float a10 = 1.0 / 3.0;
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 122 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b31 = 1.0 / 36.0;
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b32 = 3.0 / 36.0;
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b41 = 1.0 / 24.0;
# 125 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b43 = 3.0 / 24.0;
# 126 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b51 = 20.0 / 48.0;
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b53 = -75.0 / 48.0;
# 128 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b54 = 75.0 / 48.0;
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b61 = 1.0 / 20.0;
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b64 = 5.0 / 20.0;
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b65 = 4.0 / 20.0;
# 132 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b71 = -25.0 / 108.0;
# 133 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b74 = 125.0 / 108.0;
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b75 = -260.0 / 108.0;
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b76 = 250.0 / 108.0;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b81 = 31.0/300.0;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b85 = 61.0/225.0;
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b86 = -2.0/9.0;
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b87 = 13.0/900.0;
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b91 = 2.0;
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b94 = -53.0/6.0;
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b95 = 704.0 / 45.0;
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b96 = -107.0 / 9.0;
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b97 = 67.0 / 90.0;
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b98 = 3.0;
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_1 = -91.0 / 108.0;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_4 = 23.0 / 108.0;
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_5 = -976.0 / 135.0;
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_6 = 311.0 / 54.0;
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_7 = -19.0 / 60.0;
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_8 = 17.0 / 6.0;
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b10_9 = -1.0 / 12.0;
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_1 = 2383.0 / 4100.0;
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_4 = -341.0 / 164.0;
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_5 = 4496.0 / 1025.0;
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_6 = -301.0 / 82.0;
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_7 = 2133.0 / 4100.0;
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_8 = 45.0 / 82.0;
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_9 = 45.0 / 164.0;
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b11_10 = 18.0 / 41.0;
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b12_1 = 3.0 / 205.0;
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b12_6 = - 6.0 / 41.0;
# 163 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b12_7 = - 3.0 / 205.0;
# 164 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b12_8 = - 3.0 / 41.0;
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b12_9 = 3.0 / 41.0;
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b12_10 = 6.0 / 41.0;
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_1 = -1777.0 / 4100.0;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_4 = -341.0 / 164.0;
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_5 = 4496.0 / 1025.0;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_6 = -289.0 / 82.0;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_7 = 2193.0 / 4100.0;
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_8 = 51.0 / 82.0;
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_9 = 33.0 / 164.0;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float b13_10 = 12.0 / 41.0;
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 static float err_factor = -41.0 / 840.0;
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 float h2_7 = a2 * h;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 float timeinst_temp;
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 int i;
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
    float initvalu_temp[91];
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
    float finavalu_temp[13][91];
# 207 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 207 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst;
# 208 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 209 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] ;
# 210 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 211 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 212 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 213 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[0]);
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 226 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h2_7;
# 227 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 228 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h2_7 * (finavalu_temp[0][i]);
# 229 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 230 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 231 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[1]);
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 244 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a3*h;
# 245 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 246 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b31*finavalu_temp[0][i] + b32*finavalu_temp[1][i]);
# 247 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 248 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 249 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[2]);
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 262 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a4*h;
# 263 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 264 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b41*finavalu_temp[0][i] + b43*finavalu_temp[2][i]) ;
# 265 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 266 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 267 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[3]);
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 280 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a5*h;
# 281 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 282 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b51*finavalu_temp[0][i] + b53*finavalu_temp[2][i] + b54*finavalu_temp[3][i]) ;
# 283 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 284 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 285 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[4]);
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 298 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a6*h;
# 299 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 300 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b61*finavalu_temp[0][i] + b64*finavalu_temp[3][i] + b65*finavalu_temp[4][i]) ;
# 301 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 302 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 303 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[5]);
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 316 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a7*h;
# 317 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 318 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b71*finavalu_temp[0][i] + b74*finavalu_temp[3][i] + b75*finavalu_temp[4][i] + b76*finavalu_temp[5][i]);
# 319 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 320 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 321 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[6]);
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 334 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a8*h;
# 335 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 336 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b81*finavalu_temp[0][i] + b85*finavalu_temp[4][i] + b86*finavalu_temp[5][i] + b87*finavalu_temp[6][i]);
# 337 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 338 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 339 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[7]);
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 352 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a9*h;
# 353 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 354 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b91*finavalu_temp[0][i] + b94*finavalu_temp[3][i] + b95*finavalu_temp[4][i] + b96*finavalu_temp[5][i] + b97*finavalu_temp[6][i]+ b98*finavalu_temp[7][i]) ;
# 355 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 356 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 357 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[8]);
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 370 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+a10*h;
# 371 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 372 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b10_1*finavalu_temp[0][i] + b10_4*finavalu_temp[3][i] + b10_5*finavalu_temp[4][i] + b10_6*finavalu_temp[5][i] + b10_7*finavalu_temp[6][i] + b10_8*finavalu_temp[7][i] + b10_9*finavalu_temp[8] [i]) ;
# 373 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 374 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 375 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[9]);
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 388 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h;
# 389 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 390 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b11_1*finavalu_temp[0][i] + b11_4*finavalu_temp[3][i] + b11_5*finavalu_temp[4][i] + b11_6*finavalu_temp[5][i] + b11_7*finavalu_temp[6][i] + b11_8*finavalu_temp[7][i] + b11_9*finavalu_temp[8][i]+ b11_10 * finavalu_temp[9][i]);
# 391 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 392 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 393 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[10]);
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 406 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst;
# 407 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 408 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b12_1*finavalu_temp[0][i] + b12_6*finavalu_temp[5][i] + b12_7*finavalu_temp[6][i] + b12_8*finavalu_temp[7][i] + b12_9*finavalu_temp[8][i] + b12_10 * finavalu_temp[9][i]) ;
# 409 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 410 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 411 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[11]);
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 424 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 timeinst_temp = timeinst+h;
# 425 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 426 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  initvalu_temp[i] = initvalu[i] + h * ( b13_1*finavalu_temp[0][i] + b13_4*finavalu_temp[3][i] + b13_5*finavalu_temp[4][i] + b13_6*finavalu_temp[5][i] + b13_7*finavalu_temp[6][i] + b13_8*finavalu_temp[7][i] + b13_9*finavalu_temp[8][i] + b13_10*finavalu_temp[9][i] + finavalu_temp[11][i]) ;
# 427 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 428 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 429 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 (*____chimes_extern_func_master)(timeinst_temp, initvalu_temp, parameter, finavalu_temp[12]);
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 442 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 443 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  finavalu[i]= initvalu[i] + h * (c_1_11 * (finavalu_temp[0][i] + finavalu_temp[10][i]) + c6 * finavalu_temp[5][i] + c_7_8 * (finavalu_temp[6][i] + finavalu_temp[7][i]) + c_9_10 * (finavalu_temp[8][i] + finavalu_temp[9][i]) );
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 452 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 453 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 454 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 455 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 456 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 457 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 458 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 for(i=0; i<91; i++){
# 459 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
  error[i] = fabs(err_factor * (finavalu_temp[0][i] + finavalu_temp[10][i] - finavalu_temp[11][i] - finavalu_temp[12][i]));
# 460 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 461 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
 }
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
# 470 "/gpfs-biou/jmg3/rodinia_3.0/openmp/myocyte/embedded_fehlberg_7_8.c"
}





static int module_init() {
    init_module(6599527376914383336UL, 4, 1, 1, 0, 1, 1, 2, 0, 0, 0,
                            "embedded_fehlberg_7_8", 0, "_Z21embedded_fehlberg_7_8ffPfS_S_S_", "_Z25embedded_fehlberg_7_8_npmffPfS_S_S_", 0, 6, 0UL, 0UL, (6599527376914383336UL + 1004UL), (6599527376914383336UL + 1005UL), (6599527376914383336UL + 1006UL), (6599527376914383336UL + 1007UL), 0UL, 14, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "master", 4, 0UL, (6599527376914383336UL + 11UL), (6599527376914383336UL + 1007UL), (6599527376914383336UL + 12UL), 0UL, "fabs", 1, 0UL, 0UL,
                               "master", (void **)&(____chimes_extern_func_master),
                           "embedded_fehlberg_7_8", &(____chimes_does_checkpoint_embedded_fehlberg_7_8_npm),
                           "master", &(____chimes_does_checkpoint_master_npm),
                             (6599527376914383336UL + 5UL), (6599527376914383336UL + 1005UL),
                             (6599527376914383336UL + 4UL), (6599527376914383336UL + 1004UL),
                             (6599527376914383336UL + 7UL), (6599527376914383336UL + 1007UL),
                             (6599527376914383336UL + 6UL), (6599527376914383336UL + 1006UL),
                             "embedded_fehlberg_7_8", "_Z21embedded_fehlberg_7_8ffPfS_S_S_", 0, 13, "master", "master", "master", "master", "master", "master", "master", "master", "master", "master", "master", "master", "master",
                        "embedded_fehlberg_7_8|initvalu_temp|0", 1, "embedded_fehlberg_7_8");
    return 0;
}

static const int __libchimes_module_init = module_init();
