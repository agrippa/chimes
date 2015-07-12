# 1 "ecc.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "ecc.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_ecc_npm = 1;
static int ____chimes_does_checkpoint_fmod_npm = 1;

static int ____must_checkpoint_ecc_finavalu_0 = 2;
static int ____must_checkpoint_ecc_offset_39_0 = 2;
static int ____must_checkpoint_ecc_offset_41_0 = 2;
static int ____must_checkpoint_ecc_offset_42_0 = 2;
static int ____must_checkpoint_ecc_I_ClCa_0 = 2;
static int ____must_checkpoint_ecc_I_Clbk_0 = 2;
static int ____must_checkpoint_ecc_I_Na_tot_junc_0 = 2;
static int ____must_checkpoint_ecc_I_Na_tot_sl_0 = 2;
static int ____must_checkpoint_ecc_I_K_tot_0 = 2;
static int ____must_checkpoint_ecc_I_Ca_tot_junc_0 = 2;
static int ____must_checkpoint_ecc_I_Ca_tot_sl_0 = 2;

static int ____must_manage_ecc = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
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
# 68 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
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
               float* parameter,
               int mode);
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
     float* finavalu,
     int mode);


extern int solver( float** y,
     float* x,
     int xmax,
     float* params,
     int mode);

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
# 2 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c" 2
# 2 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 3 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 4 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 5 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
void ecc_npm( float timeinst, float *initvalu, int initvalu_offset, float *parameter, int parameter_offset, float *finavalu);static double (*____chimes_extern_func_fmod)(double, double) = fmod;
void ecc_quick( float timeinst, float *initvalu, int initvalu_offset, float *parameter, int parameter_offset, float *finavalu); void ecc( float timeinst, float *initvalu, int initvalu_offset, float *parameter, int parameter_offset, float *finavalu);
void ecc_resumable( float timeinst,
# 7 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *initvalu,
# 8 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int initvalu_offset,
# 9 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *parameter,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int parameter_offset,
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *finavalu){const int ____chimes_did_disable0 = new_stack((void *)(&ecc), "ecc", &____must_manage_ecc, 6, 1, (size_t)(0UL), (size_t)(17020714764657570938UL), (size_t)(0UL), (size_t)(17020714764657570940UL), (size_t)(0UL), (size_t)(17020714764657570942UL), "ecc|finavalu|0", &____must_checkpoint_ecc_finavalu_0, "float*", (void *)(&finavalu), (size_t)8, 1, 0, 0) ; float I_Ca_tot_sl;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Ca_tot_junc;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_K_tot;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Na_tot_sl;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Na_tot_junc;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Clbk;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_ClCa;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
int offset_42;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
int offset_41;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
int offset_39;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 if (____must_checkpoint_ecc_I_Ca_tot_sl_0 || ____must_checkpoint_ecc_I_Ca_tot_junc_0 || ____must_checkpoint_ecc_I_K_tot_0 || ____must_checkpoint_ecc_I_Na_tot_sl_0 || ____must_checkpoint_ecc_I_Na_tot_junc_0 || ____must_checkpoint_ecc_I_Clbk_0 || ____must_checkpoint_ecc_I_ClCa_0 || ____must_checkpoint_ecc_offset_42_0 || ____must_checkpoint_ecc_offset_41_0 || ____must_checkpoint_ecc_offset_39_0) { register_stack_vars(10, "ecc|I_Ca_tot_sl|0", &____must_checkpoint_ecc_I_Ca_tot_sl_0, "float", (void *)(&I_Ca_tot_sl), (size_t)4, 0, 0, 0, "ecc|I_Ca_tot_junc|0", &____must_checkpoint_ecc_I_Ca_tot_junc_0, "float", (void *)(&I_Ca_tot_junc), (size_t)4, 0, 0, 0, "ecc|I_K_tot|0", &____must_checkpoint_ecc_I_K_tot_0, "float", (void *)(&I_K_tot), (size_t)4, 0, 0, 0, "ecc|I_Na_tot_sl|0", &____must_checkpoint_ecc_I_Na_tot_sl_0, "float", (void *)(&I_Na_tot_sl), (size_t)4, 0, 0, 0, "ecc|I_Na_tot_junc|0", &____must_checkpoint_ecc_I_Na_tot_junc_0, "float", (void *)(&I_Na_tot_junc), (size_t)4, 0, 0, 0, "ecc|I_Clbk|0", &____must_checkpoint_ecc_I_Clbk_0, "float", (void *)(&I_Clbk), (size_t)4, 0, 0, 0, "ecc|I_ClCa|0", &____must_checkpoint_ecc_I_ClCa_0, "float", (void *)(&I_ClCa), (size_t)4, 0, 0, 0, "ecc|offset_42|0", &____must_checkpoint_ecc_offset_42_0, "i32", (void *)(&offset_42), (size_t)4, 0, 0, 0, "ecc|offset_41|0", &____must_checkpoint_ecc_offset_41_0, "i32", (void *)(&offset_41), (size_t)4, 0, 0, 0, "ecc|offset_39|0", &____must_checkpoint_ecc_offset_39_0, "i32", (void *)(&offset_39), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 12 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 17 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 18 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_1; ;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_2; ;
# 20 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_3; ;
# 21 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_4; ;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_5; ;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_6; ;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_7; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_8; ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_9; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_10; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_11; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_12; ;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_13; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_14; ;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_15; ;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_16; ;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_17; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_18; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_19; ;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_20; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_21; ;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_22; ;
# 40 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_23; ;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_24; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_25; ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_26; ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_27; ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_28; ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_29; ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_30; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_31; ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_32; ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_33; ;
# 51 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_34; ;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_35; ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_36; ;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_37; ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_38; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_40; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_43; ;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_44; ;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_45; ;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_46; ;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 65 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 66 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int parameter_offset_1; ;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_1; ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_2; ;
# 71 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_3; ;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_4; ;
# 73 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_5; ;
# 74 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_6; ;
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_7; ;
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_8; ;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_9; ;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_10; ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_11; ;
# 80 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_12; ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_13; ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_14; ;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_15; ;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_16; ;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_17; ;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_18; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_19; ;
# 88 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_20; ;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_21; ;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_22; ;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_23; ;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_24; ;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_25; ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_26; ;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_27; ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_28; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_29; ;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_30; ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_31; ;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_32; ;
# 101 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_33; ;
# 102 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_34; ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_35; ;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_36; ;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_37; ;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_38; ;
# 107 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_39; ;
# 108 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_40; ;
# 109 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_41; ;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_42; ;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_43; ;
# 112 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_44; ;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_45; ;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_46; ;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float parameter_1; ;
# 118 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pi; ;
# 121 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float R; ;
# 124 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Frdy; ;
# 125 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Temp; ;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float FoRT; ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cmem; ;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Qpow; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float cellLength; ;
# 132 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float cellRadius; ;
# 133 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junctionLength; ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junctionRadius; ;
# 135 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float distSLcyto; ;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float distJuncSL; ;
# 137 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DcaJuncSL; ;
# 138 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DcaSLcyto; ;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DnaJuncSL; ;
# 140 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DnaSLcyto; ;
# 141 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vcell; ;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vmyo; ;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vsr; ;
# 144 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vsl; ;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vjunc; ;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float SAjunc; ;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float SAsl; ;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_ca_juncsl; ;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_ca_slmyo; ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_na_juncsl; ;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_na_slmyo; ;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fjunc; ;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fsl; ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fjunc_CaL; ;
# 157 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fsl_CaL; ;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cli; ;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Clo; ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ko; ;
# 163 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Nao; ;
# 164 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cao; ;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Mgi; ;
# 166 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ena_junc; ;
# 169 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ena_sl; ;
# 170 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ek; ;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eca_junc; ;
# 172 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eca_sl; ;
# 173 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ecl; ;
# 174 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GNa; ;
# 177 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GNaB; ;
# 178 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarNaK; ;
# 179 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNaip; ;
# 180 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmKo; ;
# 181 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10NaK; ;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10KmNai; ;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 184 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pNaK; ;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GtoSlow; ;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GtoFast; ;
# 188 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gkp; ;
# 189 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GClCa; ;
# 192 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GClB; ;
# 193 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KdClCa; ;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pNa; ;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pCa; ;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pK; ;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCa; ;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10CaL; ;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 202 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 203 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarNCX; ;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCai; ;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCao; ;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNai; ;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNao; ;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ksat; ;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float nu; ;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kdact; ;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10NCX; ;
# 212 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarSLCaP; ;
# 213 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmPCa; ;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GCaB; ;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10SLCaP; ;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10SRCaP; ;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vmax_SRCaP; ;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kmf; ;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kmr; ;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float hillSRCaP; ;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ks; ;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koCa; ;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kom; ;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiCa; ;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kim; ;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ec50SR; ;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Naj; ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Nasl; ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_na; ;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_na; ;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_TnClow; ;
# 236 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tncl; ;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tncl; ;
# 238 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_TnChigh; ;
# 239 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tnchca; ;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tnchca; ;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tnchmg; ;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tnchmg; ;
# 243 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_CaM; ;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_cam; ;
# 245 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_cam; ;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_myosin; ;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_myoca; ;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_myoca; ;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_myomg; ;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_myomg; ;
# 251 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SR; ;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_sr; ;
# 253 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_sr; ;
# 254 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLlowsl; ;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLlowj; ;
# 256 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_sll; ;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_sll; ;
# 258 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLhighsl; ;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLhighj; ;
# 260 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_slh; ;
# 261 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_slh; ;
# 262 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Csqn; ;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_csqn; ;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_csqn; ;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float am; ;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bm; ;
# 269 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ah; ;
# 270 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bh; ;
# 271 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float aj; ;
# 272 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bj; ;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_junc; ;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_sl; ;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na; ;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 278 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk_junc; ;
# 279 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk_sl; ;
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk; ;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sigma; ;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float fnak; ;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak_junc; ;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak_sl; ;
# 287 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak; ;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 289 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 290 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gkr; ;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xrss; ;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxr; ;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float rkr; ;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kr; ;
# 295 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 296 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 297 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pcaks_junc; ;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pcaks_sl; ;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gks_junc; ;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gks_sl; ;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eks; ;
# 302 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xsss; ;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxs; ;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks_junc; ;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks_sl; ;
# 306 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks; ;
# 307 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 308 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kp_kp; ;
# 310 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp_junc; ;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp_sl; ;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp; ;
# 313 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 315 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xtoss; ;
# 316 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ytoss; ;
# 317 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float rtoss; ;
# 318 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxtos; ;
# 319 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauytos; ;
# 320 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float taurtos; ;
# 321 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tos; ;
# 322 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxtof; ;
# 325 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauytof; ;
# 326 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tof; ;
# 327 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_to; ;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 329 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 330 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float aki; ;
# 331 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bki; ;
# 332 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiss; ;
# 333 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ki; ;
# 334 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 335 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 336 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa_junc; ;
# 337 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa_sl; ;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 340 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 341 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 342 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float dss; ;
# 343 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float taud; ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float fss; ;
# 345 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauf; ;
# 346 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarca_j; ;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarca_sl; ;
# 350 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibark; ;
# 351 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarna_j; ;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarna_sl; ;
# 353 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_junc; ;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_sl; ;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca; ;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaK; ;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa_junc; ;
# 358 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa_sl; ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa; ;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Catot; ;
# 361 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 362 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ka_junc; ;
# 364 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ka_sl; ;
# 365 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s1_junc; ;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s1_sl; ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s2_junc; ;
# 368 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s3_junc; ;
# 369 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s2_sl; ;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s3_sl; ;
# 371 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx_junc; ;
# 372 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx_sl; ;
# 373 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx; ;
# 374 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 375 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 376 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca_junc; ;
# 377 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca_sl; ;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca; ;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 380 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk_junc; ;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk_sl; ;
# 383 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk; ;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 385 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 386 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float MaxSR; ;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float MinSR; ;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kCaSR; ;
# 389 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koSRCa; ;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiSRCa; ;
# 391 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float RI; ;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_SRCarel; ;
# 393 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_serca; ;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_SRleak; ;
# 395 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 396 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 397 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_cytosol; ;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 399 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_junction; ;
# 401 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_sl; ;
# 402 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 404 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float oneovervsr; ;
# 405 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 406 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 408 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float oneovervsl; ;
# 410 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 411 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 412 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 413 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 415 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 416 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 417 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junc_sl; ;
# 418 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sl_junc; ;
# 419 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sl_myo; ;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float myo_sl; ;
# 421 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 422 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 423 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int state; ;
# 424 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_app; ;
# 425 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_hold; ;
# 426 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_test; ;
# 427 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_clamp; ;
# 428 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float R_clamp; ;
# 429 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 430 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 431 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_tot; ;
# 432 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Cl_tot; ;
# 433 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_tot; ;
# 434 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tot; ;
# 435 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 437 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 438 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 439 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 441 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_1 = initvalu_offset;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_2 = initvalu_offset+1;
# 443 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_3 = initvalu_offset+2;
# 444 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_4 = initvalu_offset+3;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_5 = initvalu_offset+4;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_6 = initvalu_offset+5;
# 447 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_7 = initvalu_offset+6;
# 448 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_8 = initvalu_offset+7;
# 449 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_9 = initvalu_offset+8;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_10 = initvalu_offset+9;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_11 = initvalu_offset+10;
# 452 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_12 = initvalu_offset+11;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_13 = initvalu_offset+12;
# 454 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_14 = initvalu_offset+13;
# 455 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_15 = initvalu_offset+14;
# 456 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_16 = initvalu_offset+15;
# 457 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_17 = initvalu_offset+16;
# 458 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_18 = initvalu_offset+17;
# 459 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_19 = initvalu_offset+18;
# 460 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_20 = initvalu_offset+19;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_21 = initvalu_offset+20;
# 462 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_22 = initvalu_offset+21;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_23 = initvalu_offset+22;
# 464 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_24 = initvalu_offset+23;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_25 = initvalu_offset+24;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_26 = initvalu_offset+25;
# 467 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_27 = initvalu_offset+26;
# 468 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_28 = initvalu_offset+27;
# 469 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_29 = initvalu_offset+28;
# 470 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_30 = initvalu_offset+29;
# 471 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_31 = initvalu_offset+30;
# 472 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_32 = initvalu_offset+31;
# 473 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_33 = initvalu_offset+32;
# 474 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_34 = initvalu_offset+33;
# 475 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_35 = initvalu_offset+34;
# 476 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_36 = initvalu_offset+35;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_37 = initvalu_offset+36;
# 478 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_38 = initvalu_offset+37;
# 479 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_39 = initvalu_offset+38;
# 480 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_40 = initvalu_offset+39;
# 481 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_41 = initvalu_offset+40;
# 482 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_42 = initvalu_offset+41;
# 483 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_43 = initvalu_offset+42;
# 484 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_44 = initvalu_offset+43;
# 485 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_45 = initvalu_offset+44;
# 486 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_46 = initvalu_offset+45;
# 487 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 489 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 parameter_offset_1 = parameter_offset;
# 490 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 491 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 492 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_1 = initvalu[offset_1 ];
# 493 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_2 = initvalu[offset_2 ];
# 494 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_3 = initvalu[offset_3 ];
# 495 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_4 = initvalu[offset_4 ];
# 496 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_5 = initvalu[offset_5 ];
# 497 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_6 = initvalu[offset_6 ];
# 498 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_7 = initvalu[offset_7 ];
# 499 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_8 = initvalu[offset_8 ];
# 500 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_9 = initvalu[offset_9 ];
# 501 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_10 = initvalu[offset_10];
# 502 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_11 = initvalu[offset_11];
# 503 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_12 = initvalu[offset_12];
# 504 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_13 = initvalu[offset_13];
# 505 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_14 = initvalu[offset_14];
# 506 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_15 = initvalu[offset_15];
# 507 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_16 = initvalu[offset_16];
# 508 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_17 = initvalu[offset_17];
# 509 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_18 = initvalu[offset_18];
# 510 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_19 = initvalu[offset_19];
# 511 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_20 = initvalu[offset_20];
# 512 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_21 = initvalu[offset_21];
# 513 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_22 = initvalu[offset_22];
# 514 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_23 = initvalu[offset_23];
# 515 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_24 = initvalu[offset_24];
# 516 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_25 = initvalu[offset_25];
# 517 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_26 = initvalu[offset_26];
# 518 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_27 = initvalu[offset_27];
# 519 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_28 = initvalu[offset_28];
# 520 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_29 = initvalu[offset_29];
# 521 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_30 = initvalu[offset_30];
# 522 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_31 = initvalu[offset_31];
# 523 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_32 = initvalu[offset_32];
# 524 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_33 = initvalu[offset_33];
# 525 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_34 = initvalu[offset_34];
# 526 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_35 = initvalu[offset_35];
# 527 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_36 = initvalu[offset_36];
# 528 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_37 = initvalu[offset_37];
# 529 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_38 = initvalu[offset_38];
# 530 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_39 = initvalu[offset_39];
# 531 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_40 = initvalu[offset_40];
# 532 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_41 = initvalu[offset_41];
# 533 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_42 = initvalu[offset_42];
# 534 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_43 = initvalu[offset_43];
# 535 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_44 = initvalu[offset_44];
# 536 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_45 = initvalu[offset_45];
# 537 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_46 = initvalu[offset_46];
# 538 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 parameter_1 = parameter[parameter_offset_1];
# 541 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 543 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pi = 3.1416;
# 544 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 545 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 546 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 R = 8314;
# 547 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Frdy = 96485;
# 548 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Temp = 310;
# 549 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 FoRT = Frdy/R/Temp;
# 550 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cmem = 1.3810e-10;
# 551 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Qpow = (Temp-310)/10;
# 552 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 cellLength = 100;
# 555 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 cellRadius = 10.25;
# 556 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junctionLength = 160e-3;
# 557 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junctionRadius = 15e-3;
# 558 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 distSLcyto = 0.45;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 distJuncSL = 0.5;
# 560 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DcaJuncSL = 1.64e-6;
# 561 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DcaSLcyto = 1.22e-6;
# 562 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DnaJuncSL = 1.09e-5;
# 563 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DnaSLcyto = 1.79e-5;
# 564 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vcell = pi*pow(cellRadius,2)*cellLength*1e-15;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vmyo = 0.65*Vcell;
# 566 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vsr = 0.035*Vcell;
# 567 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vsl = 0.02*Vcell;
# 568 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vjunc = 0.0539*0.01*Vcell;
# 569 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 SAjunc = 20150*pi*2*junctionLength*junctionRadius;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 SAsl = pi*2*cellRadius*cellLength;
# 571 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_ca_juncsl = 1/1.2134e12;
# 572 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_ca_slmyo = 1/2.68510e11;
# 573 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_na_juncsl = 1/(1.6382e12/3*100);
# 574 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_na_slmyo = 1/(1.8308e10/3*100);
# 575 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 576 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 577 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fjunc = 0.11;
# 578 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fsl = 1-Fjunc;
# 579 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fjunc_CaL = 0.9;
# 580 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fsl_CaL = 1-Fjunc_CaL;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 582 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cli = 15;
# 584 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Clo = 150;
# 585 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ko = 5.4;
# 586 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Nao = 140;
# 587 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cao = 1.8;
# 588 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Mgi = 1;
# 589 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 590 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ena_junc = (1/FoRT)*log(Nao/initvalu_32);
# 592 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ena_sl = (1/FoRT)*log(Nao/initvalu_33);
# 593 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ek = (1/FoRT)*log(Ko/initvalu_35);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eca_junc = (1/FoRT/2)*log(Cao/initvalu_36);
# 595 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eca_sl = (1/FoRT/2)*log(Cao/initvalu_37);
# 596 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ecl = (1/FoRT)*log(Cli/Clo);
# 597 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 598 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GNa = 16.0;
# 600 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GNaB = 0.297e-3;
# 601 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarNaK = 1.90719;
# 602 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNaip = 11;
# 603 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmKo = 1.5;
# 604 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10NaK = 1.63;
# 605 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10KmNai = 1.39;
# 606 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 607 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 608 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pNaK = 0.01833;
# 609 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GtoSlow = 0.06;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GtoFast = 0.02;
# 611 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gkp = 0.001;
# 612 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GClCa = 0.109625;
# 615 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GClB = 9e-3;
# 616 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KdClCa = 100e-3;
# 617 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 618 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 619 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pNa = 1.5e-8;
# 620 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pCa = 5.4e-4;
# 621 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pK = 2.7e-7;
# 622 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCa = 0.6e-3;
# 623 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10CaL = 1.8;
# 624 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 625 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 626 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarNCX = 9.0;
# 627 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCai = 3.59e-3;
# 628 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCao = 1.3;
# 629 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNai = 12.29;
# 630 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNao = 87.5;
# 631 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ksat = 0.27;
# 632 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 nu = 0.35;
# 633 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kdact = 0.256e-3;
# 634 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10NCX = 1.57;
# 635 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarSLCaP = 0.0673;
# 636 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmPCa = 0.5e-3;
# 637 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GCaB = 2.513e-4;
# 638 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10SLCaP = 2.35;
# 639 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 640 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 641 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10SRCaP = 2.6;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vmax_SRCaP = 2.86e-4;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kmf = 0.246e-3;
# 644 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kmr = 1.7;
# 645 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 hillSRCaP = 1.787;
# 646 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ks = 25;
# 647 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koCa = 10;
# 648 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kom = 0.06;
# 649 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiCa = 0.5;
# 650 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kim = 0.005;
# 651 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ec50SR = 0.45;
# 652 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 654 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Naj = 7.561;
# 655 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Nasl = 1.65;
# 656 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_na = 1e-3;
# 657 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_na = 0.1e-3;
# 658 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_TnClow = 70e-3;
# 659 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tncl = 19.6e-3;
# 660 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tncl = 32.7;
# 661 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_TnChigh = 140e-3;
# 662 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tnchca = 0.032e-3;
# 663 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tnchca = 2.37;
# 664 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tnchmg = 3.33e-3;
# 665 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tnchmg = 3e-3;
# 666 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_CaM = 24e-3;
# 667 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_cam = 238e-3;
# 668 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_cam = 34;
# 669 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_myosin = 140e-3;
# 670 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_myoca = 0.46e-3;
# 671 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_myoca = 13.8;
# 672 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_myomg = 0.057e-3;
# 673 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_myomg = 0.0157;
# 674 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SR = 19*0.9e-3;
# 675 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_sr = 60e-3;
# 676 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_sr = 100;
# 677 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLlowsl = 37.38e-3*Vmyo/Vsl;
# 678 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLlowj = 4.62e-3*Vmyo/Vjunc*0.1;
# 679 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_sll = 1300e-3;
# 680 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_sll = 100;
# 681 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLhighsl = 13.35e-3*Vmyo/Vsl;
# 682 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLhighj = 1.65e-3*Vmyo/Vjunc*0.1;
# 683 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_slh = 30e-3;
# 684 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_slh = 100;
# 685 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Csqn = 2.7;
# 686 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_csqn = 65;
# 687 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_csqn = 100;
# 688 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 689 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 690 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 am = 0.32*(initvalu_39+47.13)/(1-exp(-0.1*(initvalu_39+47.13)));
# 691 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 bm = 0.08*exp(-initvalu_39/11);
# 692 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 if(initvalu_39 >= -40){
# 693 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ah = 0; aj = 0;
# 694 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bh = 1/(0.13*(1+exp(-(initvalu_39+10.66)/11.1)));
# 695 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bj = 0.3*exp(-2.535e-7*initvalu_39)/(1+exp(-0.1*(initvalu_39+32)));
# 696 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 697 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 else{
# 698 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ah = 0.135*exp((80+initvalu_39)/-6.8);
# 699 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bh = 3.56*exp(0.079*initvalu_39)+3.1e5*exp(0.35*initvalu_39);
# 700 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  aj = (-127140*exp(0.2444*initvalu_39)-3.474e-5*exp(-0.04391*initvalu_39))*(initvalu_39+37.78)/(1+exp(0.311*(initvalu_39+79.23)));
# 701 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bj = 0.1212*exp(-0.01052*initvalu_39)/(1+exp(-0.1378*(initvalu_39+40.14)));
# 702 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 703 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_1] = am*(1-initvalu_1)-bm*initvalu_1;
# 704 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_2] = ah*(1-initvalu_2)-bh*initvalu_2;
# 705 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_3] = aj*(1-initvalu_3)-bj*initvalu_3;
# 706 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_junc = Fjunc*GNa*pow(initvalu_1,3)*initvalu_2*initvalu_3*(initvalu_39-ena_junc);
# 707 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_sl = Fsl*GNa*pow(initvalu_1,3)*initvalu_2*initvalu_3*(initvalu_39-ena_sl);
# 708 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na = I_Na_junc+I_Na_sl;
# 709 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 710 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 711 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk_junc = Fjunc*GNaB*(initvalu_39-ena_junc);
# 712 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk_sl = Fsl*GNaB*(initvalu_39-ena_sl);
# 713 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk = I_nabk_junc+I_nabk_sl;
# 714 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 715 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 716 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sigma = (exp(Nao/67.3)-1)/7;
# 717 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 fnak = 1/(1+0.1245*exp(-0.1*initvalu_39*FoRT)+0.0365*sigma*exp(-initvalu_39*FoRT));
# 718 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak_junc = Fjunc*IbarNaK*fnak*Ko /(1+pow((KmNaip/initvalu_32),4)) /(Ko+KmKo);
# 719 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak_sl = Fsl*IbarNaK*fnak*Ko /(1+pow((KmNaip/initvalu_33),4)) /(Ko+KmKo);
# 720 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak = I_nak_junc+I_nak_sl;
# 721 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 722 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 723 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gkr = 0.03*sqrt(Ko/5.4);
# 724 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xrss = 1/(1+exp(-(initvalu_39+50)/7.5));
# 725 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxr = 1/(0.00138*(initvalu_39+7)/(1-exp(-0.123*(initvalu_39+7)))+6.1e-4*(initvalu_39+10)/(exp(0.145*(initvalu_39+10))-1));
# 726 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_12] = (xrss-initvalu_12)/tauxr;
# 727 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 rkr = 1/(1+exp((initvalu_39+33)/22.4));
# 728 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kr = gkr*initvalu_12*rkr*(initvalu_39-ek);
# 729 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 730 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 731 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pcaks_junc = -log10(initvalu_36)+3.0;
# 732 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pcaks_sl = -log10(initvalu_37)+3.0;
# 733 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gks_junc = 0.07*(0.057 +0.19/(1+ exp((-7.2+pcaks_junc)/0.6)));
# 734 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gks_sl = 0.07*(0.057 +0.19/(1+ exp((-7.2+pcaks_sl)/0.6)));
# 735 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eks = (1/FoRT)*log((Ko+pNaK*Nao)/(initvalu_35+pNaK*initvalu_34));
# 736 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xsss = 1/(1+exp(-(initvalu_39-1.5)/16.7));
# 737 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxs = 1/(7.19e-5*(initvalu_39+30)/(1-exp(-0.148*(initvalu_39+30)))+1.31e-4*(initvalu_39+30)/(exp(0.0687*(initvalu_39+30))-1));
# 738 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_13] = (xsss-initvalu_13)/tauxs;
# 739 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks_junc = Fjunc*gks_junc*pow(initvalu_12,2)*(initvalu_39-eks);
# 740 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks_sl = Fsl*gks_sl*pow(initvalu_13,2)*(initvalu_39-eks);
# 741 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks = I_ks_junc+I_ks_sl;
# 742 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 743 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 744 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kp_kp = 1/(1+exp(7.488-initvalu_39/5.98));
# 745 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp_junc = Fjunc*gkp*kp_kp*(initvalu_39-ek);
# 746 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp_sl = Fsl*gkp*kp_kp*(initvalu_39-ek);
# 747 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp = I_kp_junc+I_kp_sl;
# 748 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 749 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 750 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xtoss = 1/(1+exp(-(initvalu_39+3.0)/15));
# 751 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ytoss = 1/(1+exp((initvalu_39+33.5)/10));
# 752 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 rtoss = 1/(1+exp((initvalu_39+33.5)/10));
# 753 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxtos = 9/(1+exp((initvalu_39+3.0)/15))+0.5;
# 754 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauytos = 3e3/(1+exp((initvalu_39+60.0)/10))+30;
# 755 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 taurtos = 2800/(1+exp((initvalu_39+60.0)/10))+220;
# 756 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_8] = (xtoss-initvalu_8)/tauxtos;
# 757 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_9] = (ytoss-initvalu_9)/tauytos;
# 758 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_40]= (rtoss-initvalu_40)/taurtos;
# 759 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tos = GtoSlow*initvalu_8*(initvalu_9+0.5*initvalu_40)*(initvalu_39-ek);
# 760 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 761 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 762 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxtof = 3.5*exp(-initvalu_39*initvalu_39/30/30)+1.5;
# 763 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauytof = 20.0/(1+exp((initvalu_39+33.5)/10))+20.0;
# 764 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_10] = (xtoss-initvalu_10)/tauxtof;
# 765 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_11] = (ytoss-initvalu_11)/tauytof;
# 766 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tof = GtoFast*initvalu_10*initvalu_11*(initvalu_39-ek);
# 767 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_to = I_tos + I_tof;
# 768 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 769 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 770 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 aki = 1.02/(1+exp(0.2385*(initvalu_39-ek-59.215)));
# 771 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 bki =(0.49124*exp(0.08032*(initvalu_39+5.476-ek)) + exp(0.06175*(initvalu_39-ek-594.31))) /(1 + exp(-0.5143*(initvalu_39-ek+4.753)));
# 772 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiss = aki/(aki+bki);
# 773 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ki = 0.9*sqrt(Ko/5.4)*kiss*(initvalu_39-ek);
# 774 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 775 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 776 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa_junc = Fjunc*GClCa/(1+KdClCa/initvalu_36)*(initvalu_39-ecl);
# 777 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa_sl = Fsl*GClCa/(1+KdClCa/initvalu_37)*(initvalu_39-ecl);
# 778 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa = I_ClCa_junc+I_ClCa_sl;
# 779 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Clbk = GClB*(initvalu_39-ecl);
# 780 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 781 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 782 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 dss = 1/(1+exp(-(initvalu_39+14.5)/6.0));
# 783 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 taud = dss*(1-exp(-(initvalu_39+14.5)/6.0))/(0.035*(initvalu_39+14.5));
# 784 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 fss = 1/(1+exp((initvalu_39+35.06)/3.6))+0.6/(1+exp((50-initvalu_39)/20));
# 785 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauf = 1/(0.0197*exp(-pow(0.0337*(initvalu_39+14.5),2))+0.02);
# 786 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_4] = (dss-initvalu_4)/taud;
# 787 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_5] = (fss-initvalu_5)/tauf;
# 788 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_6] = 1.7*initvalu_36*(1-initvalu_6)-11.9e-3*initvalu_6;
# 789 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_7] = 1.7*initvalu_37*(1-initvalu_7)-11.9e-3*initvalu_7;
# 790 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 791 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 792 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarca_j = pCa*4*(initvalu_39*Frdy*FoRT) * (0.341*initvalu_36*exp(2*initvalu_39*FoRT)-0.341*Cao) /(exp(2*initvalu_39*FoRT)-1);
# 793 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarca_sl = pCa*4*(initvalu_39*Frdy*FoRT) * (0.341*initvalu_37*exp(2*initvalu_39*FoRT)-0.341*Cao) /(exp(2*initvalu_39*FoRT)-1);
# 794 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibark = pK*(initvalu_39*Frdy*FoRT)*(0.75*initvalu_35*exp(initvalu_39*FoRT)-0.75*Ko) /(exp(initvalu_39*FoRT)-1);
# 795 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarna_j = pNa*(initvalu_39*Frdy*FoRT) *(0.75*initvalu_32*exp(initvalu_39*FoRT)-0.75*Nao) /(exp(initvalu_39*FoRT)-1);
# 796 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarna_sl = pNa*(initvalu_39*Frdy*FoRT) *(0.75*initvalu_33*exp(initvalu_39*FoRT)-0.75*Nao) /(exp(initvalu_39*FoRT)-1);
# 797 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_junc = (Fjunc_CaL*ibarca_j*initvalu_4*initvalu_5*(1-initvalu_6)*pow(Q10CaL,Qpow))*0.45;
# 798 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_sl = (Fsl_CaL*ibarca_sl*initvalu_4*initvalu_5*(1-initvalu_7)*pow(Q10CaL,Qpow))*0.45;
# 799 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca = I_Ca_junc+I_Ca_sl;
# 800 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_43]=-I_Ca*Cmem/(Vmyo*2*Frdy)*1e3;
# 801 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaK = (ibark*initvalu_4*initvalu_5*(Fjunc_CaL*(1-initvalu_6)+Fsl_CaL*(1-initvalu_7))*pow(Q10CaL,Qpow))*0.45;
# 802 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa_junc = (Fjunc_CaL*ibarna_j*initvalu_4*initvalu_5*(1-initvalu_6)*pow(Q10CaL,Qpow))*0.45;
# 803 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa_sl = (Fsl_CaL*ibarna_sl*initvalu_4*initvalu_5*(1-initvalu_7)*pow(Q10CaL,Qpow))*0.45;
# 804 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa = I_CaNa_junc+I_CaNa_sl;
# 805 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Catot = I_Ca+I_CaK+I_CaNa;
# 806 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 807 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 808 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ka_junc = 1/(1+pow((Kdact/initvalu_36),3));
# 809 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ka_sl = 1/(1+pow((Kdact/initvalu_37),3));
# 810 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s1_junc = exp(nu*initvalu_39*FoRT)*pow(initvalu_32,3)*Cao;
# 811 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s1_sl = exp(nu*initvalu_39*FoRT)*pow(initvalu_33,3)*Cao;
# 812 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s2_junc = exp((nu-1)*initvalu_39*FoRT)*pow(Nao,3)*initvalu_36;
# 813 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s3_junc = (KmCai*pow(Nao,3)*(1+pow((initvalu_32/KmNai),3))+pow(KmNao,3)*initvalu_36+ pow(KmNai,3)*Cao*(1+initvalu_36/KmCai)+KmCao*pow(initvalu_32,3)+pow(initvalu_32,3)*Cao+pow(Nao,3)*initvalu_36)*(1+ksat*exp((nu-1)*initvalu_39*FoRT));
# 814 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s2_sl = exp((nu-1)*initvalu_39*FoRT)*pow(Nao,3)*initvalu_37;
# 815 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s3_sl = (KmCai*pow(Nao,3)*(1+pow((initvalu_33/KmNai),3)) + pow(KmNao,3)*initvalu_37+pow(KmNai,3)*Cao*(1+initvalu_37/KmCai)+KmCao*pow(initvalu_33,3)+pow(initvalu_33,3)*Cao+pow(Nao,3)*initvalu_37)*(1+ksat*exp((nu-1)*initvalu_39*FoRT));
# 816 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx_junc = Fjunc*IbarNCX*pow(Q10NCX,Qpow)*Ka_junc*(s1_junc-s2_junc)/s3_junc;
# 817 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx_sl = Fsl*IbarNCX*pow(Q10NCX,Qpow)*Ka_sl*(s1_sl-s2_sl)/s3_sl;
# 818 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx = I_ncx_junc+I_ncx_sl;
# 819 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_45]=2*I_ncx*Cmem/(Vmyo*2*Frdy)*1e3;
# 820 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 821 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 822 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca_junc = Fjunc *
# 823 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     pow(Q10SLCaP,Qpow) *
# 824 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     IbarSLCaP *
# 825 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     pow(initvalu_36,1.6) /
# 826 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     (pow(KmPCa,1.6) + pow(initvalu_36,1.6));
# 827 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca_sl = Fsl *
# 828 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    pow(Q10SLCaP,Qpow) *
# 829 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    IbarSLCaP *
# 830 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    pow(initvalu_37,1.6) /
# 831 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    (pow(KmPCa,1.6) + pow(initvalu_37,1.6));
# 832 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca = I_pca_junc+I_pca_sl;
# 833 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_44]=-I_pca*Cmem/(Vmyo*2*Frdy)*1e3;
# 834 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 835 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 836 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk_junc = Fjunc*GCaB*(initvalu_39-eca_junc);
# 837 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk_sl = Fsl*GCaB*(initvalu_39-eca_sl);
# 838 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk = I_cabk_junc+I_cabk_sl;
# 839 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_46]=-I_cabk*Cmem/(Vmyo*2*Frdy)*1e3;
# 840 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 841 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 842 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 MaxSR = 15;
# 843 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 MinSR = 1;
# 844 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kCaSR = MaxSR - (MaxSR-MinSR)/(1+pow(ec50SR/initvalu_31,2.5));
# 845 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koSRCa = koCa/kCaSR;
# 846 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiSRCa = kiCa*kCaSR;
# 847 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 RI = 1-initvalu_14-initvalu_15-initvalu_16;
# 848 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_14] = (kim*RI-kiSRCa*initvalu_36*initvalu_14)-(koSRCa*pow(initvalu_36,2)*initvalu_14-kom*initvalu_15);
# 849 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_15] = (koSRCa*pow(initvalu_36,2)*initvalu_14-kom*initvalu_15)-(kiSRCa*initvalu_36*initvalu_15-kim*initvalu_16);
# 850 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_16] = (kiSRCa*initvalu_36*initvalu_15-kim*initvalu_16)-(kom*initvalu_16-koSRCa*pow(initvalu_36,2)*RI);
# 851 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_SRCarel = ks*initvalu_15*(initvalu_31-initvalu_36);
# 852 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_serca = pow(Q10SRCaP,Qpow)*Vmax_SRCaP*(pow((initvalu_38/Kmf),hillSRCaP)-pow((initvalu_31/Kmr),hillSRCaP))
# 853 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
           /(1+pow((initvalu_38/Kmf),hillSRCaP)+pow((initvalu_31/Kmr),hillSRCaP));
# 854 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_SRleak = 5.348e-6*(initvalu_31-initvalu_36);
# 855 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 856 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 857 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_17] = kon_na*initvalu_32*(Bmax_Naj-initvalu_17)-koff_na*initvalu_17;
# 858 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_18] = kon_na*initvalu_33*(Bmax_Nasl-initvalu_18)-koff_na*initvalu_18;
# 859 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 860 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 861 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_19] = kon_tncl*initvalu_38*(Bmax_TnClow-initvalu_19)-koff_tncl*initvalu_19;
# 862 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_20] = kon_tnchca*initvalu_38*(Bmax_TnChigh-initvalu_20-initvalu_21)-koff_tnchca*initvalu_20;
# 863 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_21] = kon_tnchmg*Mgi*(Bmax_TnChigh-initvalu_20-initvalu_21)-koff_tnchmg*initvalu_21;
# 864 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_22] = 0;
# 865 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_23] = kon_myoca*initvalu_38*(Bmax_myosin-initvalu_23-initvalu_24)-koff_myoca*initvalu_23;
# 866 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_24] = kon_myomg*Mgi*(Bmax_myosin-initvalu_23-initvalu_24)-koff_myomg*initvalu_24;
# 867 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_25] = kon_sr*initvalu_38*(Bmax_SR-initvalu_25)-koff_sr*initvalu_25;
# 868 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_cytosol = finavalu[offset_19] + finavalu[offset_20] + finavalu[offset_21] + finavalu[offset_22] + finavalu[offset_23] + finavalu[offset_24] + finavalu[offset_25];
# 869 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 870 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 871 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_26] = kon_sll*initvalu_36*(Bmax_SLlowj-initvalu_26)-koff_sll*initvalu_26;
# 872 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_27] = kon_sll*initvalu_37*(Bmax_SLlowsl-initvalu_27)-koff_sll*initvalu_27;
# 873 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_28] = kon_slh*initvalu_36*(Bmax_SLhighj-initvalu_28)-koff_slh*initvalu_28;
# 874 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_29] = kon_slh*initvalu_37*(Bmax_SLhighsl-initvalu_29)-koff_slh*initvalu_29;
# 875 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_junction = finavalu[offset_26]+finavalu[offset_28];
# 876 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_sl = finavalu[offset_27]+finavalu[offset_29];
# 877 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 878 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 879 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_30] = kon_csqn*initvalu_31*(Bmax_Csqn-initvalu_30)-koff_csqn*initvalu_30;
# 880 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 oneovervsr = 1/Vsr;
# 881 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_31] = J_serca*Vmyo*oneovervsr-(J_SRleak*Vmyo*oneovervsr+J_SRCarel)-finavalu[offset_30];
# 882 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 883 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 884 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot_junc = I_Na_junc+I_nabk_junc+3*I_ncx_junc+3*I_nak_junc+I_CaNa_junc;
# 885 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot_sl = I_Na_sl+I_nabk_sl+3*I_ncx_sl+3*I_nak_sl+I_CaNa_sl;
# 886 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_32] = -I_Na_tot_junc*Cmem/(Vjunc*Frdy)+J_na_juncsl/Vjunc*(initvalu_33-initvalu_32)-finavalu[offset_17];
# 887 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 oneovervsl = 1/Vsl;
# 888 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_33] = -I_Na_tot_sl*Cmem*oneovervsl/Frdy+J_na_juncsl*oneovervsl*(initvalu_32-initvalu_33)+J_na_slmyo*oneovervsl*(initvalu_34-initvalu_33)-finavalu[offset_18];
# 889 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_34] = J_na_slmyo/Vmyo*(initvalu_33-initvalu_34);
# 890 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 891 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 892 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_K_tot = I_to+I_kr+I_ks+I_ki-2*I_nak+I_CaK+I_kp;
# 893 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_35] = 0;
# 894 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 895 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 896 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot_junc = I_Ca_junc+I_cabk_junc+I_pca_junc-2*I_ncx_junc;
# 897 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot_sl = I_Ca_sl+I_cabk_sl+I_pca_sl-2*I_ncx_sl;
# 898 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_36] = -I_Ca_tot_junc*Cmem/(Vjunc*2*Frdy)+J_ca_juncsl/Vjunc*(initvalu_37-initvalu_36)
# 899 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
          - J_CaB_junction+(J_SRCarel)*Vsr/Vjunc+J_SRleak*Vmyo/Vjunc;
# 900 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_37] = -I_Ca_tot_sl*Cmem/(Vsl*2*Frdy)+J_ca_juncsl/Vsl*(initvalu_36-initvalu_37)
# 901 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
          + J_ca_slmyo/Vsl*(initvalu_38-initvalu_37)-J_CaB_sl;
# 902 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_38] = -J_serca-J_CaB_cytosol +J_ca_slmyo/Vmyo*(initvalu_37-initvalu_38);
# 903 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junc_sl=J_ca_juncsl/Vsl*(initvalu_36-initvalu_37);
# 904 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sl_junc=J_ca_juncsl/Vjunc*(initvalu_37-initvalu_36);
# 905 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sl_myo=J_ca_slmyo/Vsl*(initvalu_38-initvalu_37);
# 906 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 myo_sl=J_ca_slmyo/Vmyo*(initvalu_37-initvalu_38);
# 907 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 908 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 909 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 state = 1;
# 910 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 switch(state){
# 911 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 0:
# 912 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   I_app = 0;
# 913 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 914 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 1:
# 915 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    call_lbl_0: if(alias_group_changed(____alias_loc_id_0) || ({ calling((void*)fmod, 0, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); (fmod)(timeinst, parameter_1); }) <= 5){
# 916 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    I_app = 9.5;
# 917 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 918 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   else{
# 919 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    I_app = 0.0;
# 920 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 921 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 922 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 2:
# 923 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   V_hold = -55;
# 924 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   V_test = 0;
# 925 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   if(timeinst>0.5 & timeinst<200.5){
# 926 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    V_clamp = V_test;
# 927 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 928 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   else{
# 929 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    V_clamp = V_hold;
# 930 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 931 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   R_clamp = 0.04;
# 932 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   I_app = (V_clamp-initvalu_39)/R_clamp;
# 933 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 934 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 935 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 936 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 937 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot = I_Na_tot_junc + I_Na_tot_sl;
# 938 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Cl_tot = I_ClCa+I_Clbk;
# 939 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot = I_Ca_tot_junc+I_Ca_tot_sl;
# 940 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tot = I_Na_tot+I_Cl_tot+I_Ca_tot+I_K_tot;
# 941 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_39] = -(I_tot-I_app);
# 942 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 943 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 944 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_41] = 0;
# 945 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_42] = 0;
# 946 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 947 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
rm_stack(false, 0UL, "ecc", &____must_manage_ecc, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 6 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
void ecc_quick( float timeinst,
# 7 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *initvalu,
# 8 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int initvalu_offset,
# 9 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *parameter,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int parameter_offset,
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *finavalu){const int ____chimes_did_disable0 = new_stack((void *)(&ecc), "ecc", &____must_manage_ecc, 6, 1, (size_t)(0UL), (size_t)(17020714764657570938UL), (size_t)(0UL), (size_t)(17020714764657570940UL), (size_t)(0UL), (size_t)(17020714764657570942UL), "ecc|finavalu|0", &____must_checkpoint_ecc_finavalu_0, "float*", (void *)(&finavalu), (size_t)8, 1, 0, 0) ; float I_Ca_tot_sl;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Ca_tot_junc;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_K_tot;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Na_tot_sl;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Na_tot_junc;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_Clbk;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
float I_ClCa;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
int offset_42;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
int offset_41;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
int offset_39;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 if (____must_checkpoint_ecc_I_Ca_tot_sl_0 || ____must_checkpoint_ecc_I_Ca_tot_junc_0 || ____must_checkpoint_ecc_I_K_tot_0 || ____must_checkpoint_ecc_I_Na_tot_sl_0 || ____must_checkpoint_ecc_I_Na_tot_junc_0 || ____must_checkpoint_ecc_I_Clbk_0 || ____must_checkpoint_ecc_I_ClCa_0 || ____must_checkpoint_ecc_offset_42_0 || ____must_checkpoint_ecc_offset_41_0 || ____must_checkpoint_ecc_offset_39_0) { register_stack_vars(10, "ecc|I_Ca_tot_sl|0", &____must_checkpoint_ecc_I_Ca_tot_sl_0, "float", (void *)(&I_Ca_tot_sl), (size_t)4, 0, 0, 0, "ecc|I_Ca_tot_junc|0", &____must_checkpoint_ecc_I_Ca_tot_junc_0, "float", (void *)(&I_Ca_tot_junc), (size_t)4, 0, 0, 0, "ecc|I_K_tot|0", &____must_checkpoint_ecc_I_K_tot_0, "float", (void *)(&I_K_tot), (size_t)4, 0, 0, 0, "ecc|I_Na_tot_sl|0", &____must_checkpoint_ecc_I_Na_tot_sl_0, "float", (void *)(&I_Na_tot_sl), (size_t)4, 0, 0, 0, "ecc|I_Na_tot_junc|0", &____must_checkpoint_ecc_I_Na_tot_junc_0, "float", (void *)(&I_Na_tot_junc), (size_t)4, 0, 0, 0, "ecc|I_Clbk|0", &____must_checkpoint_ecc_I_Clbk_0, "float", (void *)(&I_Clbk), (size_t)4, 0, 0, 0, "ecc|I_ClCa|0", &____must_checkpoint_ecc_I_ClCa_0, "float", (void *)(&I_ClCa), (size_t)4, 0, 0, 0, "ecc|offset_42|0", &____must_checkpoint_ecc_offset_42_0, "i32", (void *)(&offset_42), (size_t)4, 0, 0, 0, "ecc|offset_41|0", &____must_checkpoint_ecc_offset_41_0, "i32", (void *)(&offset_41), (size_t)4, 0, 0, 0, "ecc|offset_39|0", &____must_checkpoint_ecc_offset_39_0, "i32", (void *)(&offset_39), (size_t)4, 0, 0, 0); } ; ;
# 12 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 17 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 18 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_1; ;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_2; ;
# 20 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_3; ;
# 21 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_4; ;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_5; ;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_6; ;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_7; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_8; ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_9; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_10; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_11; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_12; ;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_13; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_14; ;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_15; ;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_16; ;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_17; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_18; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_19; ;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_20; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_21; ;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_22; ;
# 40 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_23; ;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_24; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_25; ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_26; ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_27; ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_28; ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_29; ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_30; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_31; ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_32; ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_33; ;
# 51 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_34; ;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_35; ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_36; ;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_37; ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_38; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_40; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_43; ;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_44; ;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_45; ;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_46; ;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 65 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 66 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int parameter_offset_1; ;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_1; ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_2; ;
# 71 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_3; ;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_4; ;
# 73 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_5; ;
# 74 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_6; ;
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_7; ;
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_8; ;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_9; ;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_10; ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_11; ;
# 80 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_12; ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_13; ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_14; ;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_15; ;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_16; ;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_17; ;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_18; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_19; ;
# 88 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_20; ;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_21; ;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_22; ;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_23; ;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_24; ;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_25; ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_26; ;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_27; ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_28; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_29; ;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_30; ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_31; ;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_32; ;
# 101 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_33; ;
# 102 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_34; ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_35; ;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_36; ;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_37; ;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_38; ;
# 107 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_39; ;
# 108 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_40; ;
# 109 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_41; ;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_42; ;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_43; ;
# 112 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_44; ;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_45; ;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_46; ;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float parameter_1; ;
# 118 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pi; ;
# 121 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float R; ;
# 124 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Frdy; ;
# 125 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Temp; ;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float FoRT; ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cmem; ;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Qpow; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float cellLength; ;
# 132 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float cellRadius; ;
# 133 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junctionLength; ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junctionRadius; ;
# 135 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float distSLcyto; ;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float distJuncSL; ;
# 137 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DcaJuncSL; ;
# 138 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DcaSLcyto; ;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DnaJuncSL; ;
# 140 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DnaSLcyto; ;
# 141 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vcell; ;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vmyo; ;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vsr; ;
# 144 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vsl; ;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vjunc; ;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float SAjunc; ;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float SAsl; ;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_ca_juncsl; ;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_ca_slmyo; ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_na_juncsl; ;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_na_slmyo; ;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fjunc; ;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fsl; ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fjunc_CaL; ;
# 157 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fsl_CaL; ;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cli; ;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Clo; ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ko; ;
# 163 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Nao; ;
# 164 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cao; ;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Mgi; ;
# 166 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ena_junc; ;
# 169 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ena_sl; ;
# 170 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ek; ;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eca_junc; ;
# 172 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eca_sl; ;
# 173 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ecl; ;
# 174 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GNa; ;
# 177 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GNaB; ;
# 178 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarNaK; ;
# 179 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNaip; ;
# 180 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmKo; ;
# 181 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10NaK; ;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10KmNai; ;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 184 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pNaK; ;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GtoSlow; ;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GtoFast; ;
# 188 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gkp; ;
# 189 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GClCa; ;
# 192 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GClB; ;
# 193 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KdClCa; ;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pNa; ;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pCa; ;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pK; ;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCa; ;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10CaL; ;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 202 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 203 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarNCX; ;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCai; ;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCao; ;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNai; ;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNao; ;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ksat; ;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float nu; ;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kdact; ;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10NCX; ;
# 212 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarSLCaP; ;
# 213 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmPCa; ;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GCaB; ;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10SLCaP; ;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10SRCaP; ;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vmax_SRCaP; ;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kmf; ;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kmr; ;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float hillSRCaP; ;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ks; ;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koCa; ;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kom; ;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiCa; ;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kim; ;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ec50SR; ;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Naj; ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Nasl; ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_na; ;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_na; ;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_TnClow; ;
# 236 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tncl; ;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tncl; ;
# 238 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_TnChigh; ;
# 239 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tnchca; ;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tnchca; ;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tnchmg; ;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tnchmg; ;
# 243 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_CaM; ;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_cam; ;
# 245 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_cam; ;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_myosin; ;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_myoca; ;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_myoca; ;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_myomg; ;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_myomg; ;
# 251 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SR; ;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_sr; ;
# 253 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_sr; ;
# 254 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLlowsl; ;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLlowj; ;
# 256 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_sll; ;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_sll; ;
# 258 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLhighsl; ;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLhighj; ;
# 260 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_slh; ;
# 261 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_slh; ;
# 262 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Csqn; ;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_csqn; ;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_csqn; ;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float am; ;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bm; ;
# 269 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ah; ;
# 270 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bh; ;
# 271 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float aj; ;
# 272 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bj; ;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_junc; ;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_sl; ;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na; ;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 278 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk_junc; ;
# 279 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk_sl; ;
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk; ;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sigma; ;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float fnak; ;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak_junc; ;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak_sl; ;
# 287 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak; ;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 289 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 290 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gkr; ;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xrss; ;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxr; ;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float rkr; ;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kr; ;
# 295 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 296 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 297 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pcaks_junc; ;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pcaks_sl; ;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gks_junc; ;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gks_sl; ;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eks; ;
# 302 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xsss; ;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxs; ;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks_junc; ;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks_sl; ;
# 306 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks; ;
# 307 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 308 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kp_kp; ;
# 310 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp_junc; ;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp_sl; ;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp; ;
# 313 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 315 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xtoss; ;
# 316 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ytoss; ;
# 317 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float rtoss; ;
# 318 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxtos; ;
# 319 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauytos; ;
# 320 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float taurtos; ;
# 321 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tos; ;
# 322 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxtof; ;
# 325 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauytof; ;
# 326 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tof; ;
# 327 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_to; ;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 329 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 330 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float aki; ;
# 331 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bki; ;
# 332 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiss; ;
# 333 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ki; ;
# 334 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 335 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 336 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa_junc; ;
# 337 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa_sl; ;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 340 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 341 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 342 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float dss; ;
# 343 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float taud; ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float fss; ;
# 345 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauf; ;
# 346 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarca_j; ;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarca_sl; ;
# 350 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibark; ;
# 351 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarna_j; ;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarna_sl; ;
# 353 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_junc; ;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_sl; ;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca; ;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaK; ;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa_junc; ;
# 358 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa_sl; ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa; ;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Catot; ;
# 361 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 362 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ka_junc; ;
# 364 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ka_sl; ;
# 365 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s1_junc; ;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s1_sl; ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s2_junc; ;
# 368 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s3_junc; ;
# 369 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s2_sl; ;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s3_sl; ;
# 371 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx_junc; ;
# 372 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx_sl; ;
# 373 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx; ;
# 374 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 375 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 376 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca_junc; ;
# 377 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca_sl; ;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca; ;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 380 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk_junc; ;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk_sl; ;
# 383 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk; ;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 385 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 386 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float MaxSR; ;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float MinSR; ;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kCaSR; ;
# 389 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koSRCa; ;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiSRCa; ;
# 391 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float RI; ;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_SRCarel; ;
# 393 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_serca; ;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_SRleak; ;
# 395 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 396 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 397 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_cytosol; ;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 399 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_junction; ;
# 401 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_sl; ;
# 402 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 404 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float oneovervsr; ;
# 405 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 406 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 408 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float oneovervsl; ;
# 410 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 411 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 412 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 413 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 415 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 416 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ;
# 417 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junc_sl; ;
# 418 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sl_junc; ;
# 419 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sl_myo; ;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float myo_sl; ;
# 421 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 422 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 423 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int state; ;
# 424 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_app; ;
# 425 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_hold; ;
# 426 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_test; ;
# 427 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_clamp; ;
# 428 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float R_clamp; ;
# 429 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 430 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 431 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_tot; ;
# 432 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Cl_tot; ;
# 433 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_tot; ;
# 434 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tot; ;
# 435 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 437 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 438 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 439 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 441 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_1 = initvalu_offset;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_2 = initvalu_offset+1;
# 443 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_3 = initvalu_offset+2;
# 444 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_4 = initvalu_offset+3;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_5 = initvalu_offset+4;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_6 = initvalu_offset+5;
# 447 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_7 = initvalu_offset+6;
# 448 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_8 = initvalu_offset+7;
# 449 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_9 = initvalu_offset+8;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_10 = initvalu_offset+9;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_11 = initvalu_offset+10;
# 452 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_12 = initvalu_offset+11;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_13 = initvalu_offset+12;
# 454 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_14 = initvalu_offset+13;
# 455 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_15 = initvalu_offset+14;
# 456 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_16 = initvalu_offset+15;
# 457 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_17 = initvalu_offset+16;
# 458 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_18 = initvalu_offset+17;
# 459 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_19 = initvalu_offset+18;
# 460 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_20 = initvalu_offset+19;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_21 = initvalu_offset+20;
# 462 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_22 = initvalu_offset+21;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_23 = initvalu_offset+22;
# 464 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_24 = initvalu_offset+23;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_25 = initvalu_offset+24;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_26 = initvalu_offset+25;
# 467 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_27 = initvalu_offset+26;
# 468 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_28 = initvalu_offset+27;
# 469 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_29 = initvalu_offset+28;
# 470 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_30 = initvalu_offset+29;
# 471 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_31 = initvalu_offset+30;
# 472 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_32 = initvalu_offset+31;
# 473 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_33 = initvalu_offset+32;
# 474 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_34 = initvalu_offset+33;
# 475 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_35 = initvalu_offset+34;
# 476 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_36 = initvalu_offset+35;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_37 = initvalu_offset+36;
# 478 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_38 = initvalu_offset+37;
# 479 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_39 = initvalu_offset+38;
# 480 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_40 = initvalu_offset+39;
# 481 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_41 = initvalu_offset+40;
# 482 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_42 = initvalu_offset+41;
# 483 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_43 = initvalu_offset+42;
# 484 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_44 = initvalu_offset+43;
# 485 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_45 = initvalu_offset+44;
# 486 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_46 = initvalu_offset+45;
# 487 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 489 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 parameter_offset_1 = parameter_offset;
# 490 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 491 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 492 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_1 = initvalu[offset_1 ];
# 493 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_2 = initvalu[offset_2 ];
# 494 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_3 = initvalu[offset_3 ];
# 495 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_4 = initvalu[offset_4 ];
# 496 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_5 = initvalu[offset_5 ];
# 497 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_6 = initvalu[offset_6 ];
# 498 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_7 = initvalu[offset_7 ];
# 499 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_8 = initvalu[offset_8 ];
# 500 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_9 = initvalu[offset_9 ];
# 501 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_10 = initvalu[offset_10];
# 502 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_11 = initvalu[offset_11];
# 503 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_12 = initvalu[offset_12];
# 504 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_13 = initvalu[offset_13];
# 505 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_14 = initvalu[offset_14];
# 506 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_15 = initvalu[offset_15];
# 507 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_16 = initvalu[offset_16];
# 508 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_17 = initvalu[offset_17];
# 509 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_18 = initvalu[offset_18];
# 510 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_19 = initvalu[offset_19];
# 511 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_20 = initvalu[offset_20];
# 512 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_21 = initvalu[offset_21];
# 513 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_22 = initvalu[offset_22];
# 514 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_23 = initvalu[offset_23];
# 515 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_24 = initvalu[offset_24];
# 516 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_25 = initvalu[offset_25];
# 517 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_26 = initvalu[offset_26];
# 518 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_27 = initvalu[offset_27];
# 519 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_28 = initvalu[offset_28];
# 520 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_29 = initvalu[offset_29];
# 521 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_30 = initvalu[offset_30];
# 522 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_31 = initvalu[offset_31];
# 523 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_32 = initvalu[offset_32];
# 524 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_33 = initvalu[offset_33];
# 525 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_34 = initvalu[offset_34];
# 526 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_35 = initvalu[offset_35];
# 527 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_36 = initvalu[offset_36];
# 528 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_37 = initvalu[offset_37];
# 529 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_38 = initvalu[offset_38];
# 530 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_39 = initvalu[offset_39];
# 531 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_40 = initvalu[offset_40];
# 532 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_41 = initvalu[offset_41];
# 533 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_42 = initvalu[offset_42];
# 534 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_43 = initvalu[offset_43];
# 535 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_44 = initvalu[offset_44];
# 536 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_45 = initvalu[offset_45];
# 537 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_46 = initvalu[offset_46];
# 538 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 parameter_1 = parameter[parameter_offset_1];
# 541 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 543 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pi = 3.1416;
# 544 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 545 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 546 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 R = 8314;
# 547 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Frdy = 96485;
# 548 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Temp = 310;
# 549 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 FoRT = Frdy/R/Temp;
# 550 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cmem = 1.3810e-10;
# 551 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Qpow = (Temp-310)/10;
# 552 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 cellLength = 100;
# 555 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 cellRadius = 10.25;
# 556 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junctionLength = 160e-3;
# 557 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junctionRadius = 15e-3;
# 558 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 distSLcyto = 0.45;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 distJuncSL = 0.5;
# 560 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DcaJuncSL = 1.64e-6;
# 561 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DcaSLcyto = 1.22e-6;
# 562 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DnaJuncSL = 1.09e-5;
# 563 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DnaSLcyto = 1.79e-5;
# 564 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vcell = pi*pow(cellRadius,2)*cellLength*1e-15;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vmyo = 0.65*Vcell;
# 566 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vsr = 0.035*Vcell;
# 567 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vsl = 0.02*Vcell;
# 568 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vjunc = 0.0539*0.01*Vcell;
# 569 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 SAjunc = 20150*pi*2*junctionLength*junctionRadius;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 SAsl = pi*2*cellRadius*cellLength;
# 571 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_ca_juncsl = 1/1.2134e12;
# 572 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_ca_slmyo = 1/2.68510e11;
# 573 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_na_juncsl = 1/(1.6382e12/3*100);
# 574 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_na_slmyo = 1/(1.8308e10/3*100);
# 575 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 576 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 577 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fjunc = 0.11;
# 578 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fsl = 1-Fjunc;
# 579 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fjunc_CaL = 0.9;
# 580 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fsl_CaL = 1-Fjunc_CaL;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 582 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cli = 15;
# 584 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Clo = 150;
# 585 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ko = 5.4;
# 586 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Nao = 140;
# 587 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cao = 1.8;
# 588 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Mgi = 1;
# 589 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 590 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ena_junc = (1/FoRT)*log(Nao/initvalu_32);
# 592 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ena_sl = (1/FoRT)*log(Nao/initvalu_33);
# 593 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ek = (1/FoRT)*log(Ko/initvalu_35);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eca_junc = (1/FoRT/2)*log(Cao/initvalu_36);
# 595 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eca_sl = (1/FoRT/2)*log(Cao/initvalu_37);
# 596 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ecl = (1/FoRT)*log(Cli/Clo);
# 597 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 598 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GNa = 16.0;
# 600 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GNaB = 0.297e-3;
# 601 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarNaK = 1.90719;
# 602 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNaip = 11;
# 603 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmKo = 1.5;
# 604 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10NaK = 1.63;
# 605 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10KmNai = 1.39;
# 606 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 607 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 608 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pNaK = 0.01833;
# 609 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GtoSlow = 0.06;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GtoFast = 0.02;
# 611 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gkp = 0.001;
# 612 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GClCa = 0.109625;
# 615 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GClB = 9e-3;
# 616 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KdClCa = 100e-3;
# 617 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 618 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 619 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pNa = 1.5e-8;
# 620 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pCa = 5.4e-4;
# 621 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pK = 2.7e-7;
# 622 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCa = 0.6e-3;
# 623 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10CaL = 1.8;
# 624 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 625 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 626 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarNCX = 9.0;
# 627 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCai = 3.59e-3;
# 628 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCao = 1.3;
# 629 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNai = 12.29;
# 630 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNao = 87.5;
# 631 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ksat = 0.27;
# 632 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 nu = 0.35;
# 633 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kdact = 0.256e-3;
# 634 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10NCX = 1.57;
# 635 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarSLCaP = 0.0673;
# 636 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmPCa = 0.5e-3;
# 637 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GCaB = 2.513e-4;
# 638 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10SLCaP = 2.35;
# 639 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 640 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 641 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10SRCaP = 2.6;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vmax_SRCaP = 2.86e-4;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kmf = 0.246e-3;
# 644 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kmr = 1.7;
# 645 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 hillSRCaP = 1.787;
# 646 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ks = 25;
# 647 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koCa = 10;
# 648 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kom = 0.06;
# 649 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiCa = 0.5;
# 650 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kim = 0.005;
# 651 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ec50SR = 0.45;
# 652 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 654 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Naj = 7.561;
# 655 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Nasl = 1.65;
# 656 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_na = 1e-3;
# 657 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_na = 0.1e-3;
# 658 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_TnClow = 70e-3;
# 659 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tncl = 19.6e-3;
# 660 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tncl = 32.7;
# 661 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_TnChigh = 140e-3;
# 662 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tnchca = 0.032e-3;
# 663 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tnchca = 2.37;
# 664 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tnchmg = 3.33e-3;
# 665 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tnchmg = 3e-3;
# 666 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_CaM = 24e-3;
# 667 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_cam = 238e-3;
# 668 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_cam = 34;
# 669 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_myosin = 140e-3;
# 670 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_myoca = 0.46e-3;
# 671 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_myoca = 13.8;
# 672 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_myomg = 0.057e-3;
# 673 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_myomg = 0.0157;
# 674 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SR = 19*0.9e-3;
# 675 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_sr = 60e-3;
# 676 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_sr = 100;
# 677 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLlowsl = 37.38e-3*Vmyo/Vsl;
# 678 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLlowj = 4.62e-3*Vmyo/Vjunc*0.1;
# 679 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_sll = 1300e-3;
# 680 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_sll = 100;
# 681 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLhighsl = 13.35e-3*Vmyo/Vsl;
# 682 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLhighj = 1.65e-3*Vmyo/Vjunc*0.1;
# 683 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_slh = 30e-3;
# 684 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_slh = 100;
# 685 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Csqn = 2.7;
# 686 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_csqn = 65;
# 687 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_csqn = 100;
# 688 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 689 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 690 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 am = 0.32*(initvalu_39+47.13)/(1-exp(-0.1*(initvalu_39+47.13)));
# 691 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 bm = 0.08*exp(-initvalu_39/11);
# 692 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 if(initvalu_39 >= -40){
# 693 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ah = 0; aj = 0;
# 694 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bh = 1/(0.13*(1+exp(-(initvalu_39+10.66)/11.1)));
# 695 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bj = 0.3*exp(-2.535e-7*initvalu_39)/(1+exp(-0.1*(initvalu_39+32)));
# 696 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 697 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 else{
# 698 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ah = 0.135*exp((80+initvalu_39)/-6.8);
# 699 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bh = 3.56*exp(0.079*initvalu_39)+3.1e5*exp(0.35*initvalu_39);
# 700 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  aj = (-127140*exp(0.2444*initvalu_39)-3.474e-5*exp(-0.04391*initvalu_39))*(initvalu_39+37.78)/(1+exp(0.311*(initvalu_39+79.23)));
# 701 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bj = 0.1212*exp(-0.01052*initvalu_39)/(1+exp(-0.1378*(initvalu_39+40.14)));
# 702 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 703 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_1] = am*(1-initvalu_1)-bm*initvalu_1;
# 704 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_2] = ah*(1-initvalu_2)-bh*initvalu_2;
# 705 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_3] = aj*(1-initvalu_3)-bj*initvalu_3;
# 706 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_junc = Fjunc*GNa*pow(initvalu_1,3)*initvalu_2*initvalu_3*(initvalu_39-ena_junc);
# 707 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_sl = Fsl*GNa*pow(initvalu_1,3)*initvalu_2*initvalu_3*(initvalu_39-ena_sl);
# 708 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na = I_Na_junc+I_Na_sl;
# 709 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 710 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 711 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk_junc = Fjunc*GNaB*(initvalu_39-ena_junc);
# 712 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk_sl = Fsl*GNaB*(initvalu_39-ena_sl);
# 713 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk = I_nabk_junc+I_nabk_sl;
# 714 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 715 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 716 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sigma = (exp(Nao/67.3)-1)/7;
# 717 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 fnak = 1/(1+0.1245*exp(-0.1*initvalu_39*FoRT)+0.0365*sigma*exp(-initvalu_39*FoRT));
# 718 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak_junc = Fjunc*IbarNaK*fnak*Ko /(1+pow((KmNaip/initvalu_32),4)) /(Ko+KmKo);
# 719 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak_sl = Fsl*IbarNaK*fnak*Ko /(1+pow((KmNaip/initvalu_33),4)) /(Ko+KmKo);
# 720 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak = I_nak_junc+I_nak_sl;
# 721 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 722 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 723 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gkr = 0.03*sqrt(Ko/5.4);
# 724 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xrss = 1/(1+exp(-(initvalu_39+50)/7.5));
# 725 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxr = 1/(0.00138*(initvalu_39+7)/(1-exp(-0.123*(initvalu_39+7)))+6.1e-4*(initvalu_39+10)/(exp(0.145*(initvalu_39+10))-1));
# 726 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_12] = (xrss-initvalu_12)/tauxr;
# 727 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 rkr = 1/(1+exp((initvalu_39+33)/22.4));
# 728 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kr = gkr*initvalu_12*rkr*(initvalu_39-ek);
# 729 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 730 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 731 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pcaks_junc = -log10(initvalu_36)+3.0;
# 732 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pcaks_sl = -log10(initvalu_37)+3.0;
# 733 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gks_junc = 0.07*(0.057 +0.19/(1+ exp((-7.2+pcaks_junc)/0.6)));
# 734 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gks_sl = 0.07*(0.057 +0.19/(1+ exp((-7.2+pcaks_sl)/0.6)));
# 735 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eks = (1/FoRT)*log((Ko+pNaK*Nao)/(initvalu_35+pNaK*initvalu_34));
# 736 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xsss = 1/(1+exp(-(initvalu_39-1.5)/16.7));
# 737 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxs = 1/(7.19e-5*(initvalu_39+30)/(1-exp(-0.148*(initvalu_39+30)))+1.31e-4*(initvalu_39+30)/(exp(0.0687*(initvalu_39+30))-1));
# 738 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_13] = (xsss-initvalu_13)/tauxs;
# 739 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks_junc = Fjunc*gks_junc*pow(initvalu_12,2)*(initvalu_39-eks);
# 740 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks_sl = Fsl*gks_sl*pow(initvalu_13,2)*(initvalu_39-eks);
# 741 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks = I_ks_junc+I_ks_sl;
# 742 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 743 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 744 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kp_kp = 1/(1+exp(7.488-initvalu_39/5.98));
# 745 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp_junc = Fjunc*gkp*kp_kp*(initvalu_39-ek);
# 746 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp_sl = Fsl*gkp*kp_kp*(initvalu_39-ek);
# 747 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp = I_kp_junc+I_kp_sl;
# 748 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 749 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 750 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xtoss = 1/(1+exp(-(initvalu_39+3.0)/15));
# 751 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ytoss = 1/(1+exp((initvalu_39+33.5)/10));
# 752 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 rtoss = 1/(1+exp((initvalu_39+33.5)/10));
# 753 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxtos = 9/(1+exp((initvalu_39+3.0)/15))+0.5;
# 754 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauytos = 3e3/(1+exp((initvalu_39+60.0)/10))+30;
# 755 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 taurtos = 2800/(1+exp((initvalu_39+60.0)/10))+220;
# 756 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_8] = (xtoss-initvalu_8)/tauxtos;
# 757 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_9] = (ytoss-initvalu_9)/tauytos;
# 758 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_40]= (rtoss-initvalu_40)/taurtos;
# 759 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tos = GtoSlow*initvalu_8*(initvalu_9+0.5*initvalu_40)*(initvalu_39-ek);
# 760 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 761 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 762 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxtof = 3.5*exp(-initvalu_39*initvalu_39/30/30)+1.5;
# 763 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauytof = 20.0/(1+exp((initvalu_39+33.5)/10))+20.0;
# 764 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_10] = (xtoss-initvalu_10)/tauxtof;
# 765 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_11] = (ytoss-initvalu_11)/tauytof;
# 766 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tof = GtoFast*initvalu_10*initvalu_11*(initvalu_39-ek);
# 767 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_to = I_tos + I_tof;
# 768 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 769 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 770 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 aki = 1.02/(1+exp(0.2385*(initvalu_39-ek-59.215)));
# 771 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 bki =(0.49124*exp(0.08032*(initvalu_39+5.476-ek)) + exp(0.06175*(initvalu_39-ek-594.31))) /(1 + exp(-0.5143*(initvalu_39-ek+4.753)));
# 772 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiss = aki/(aki+bki);
# 773 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ki = 0.9*sqrt(Ko/5.4)*kiss*(initvalu_39-ek);
# 774 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 775 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 776 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa_junc = Fjunc*GClCa/(1+KdClCa/initvalu_36)*(initvalu_39-ecl);
# 777 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa_sl = Fsl*GClCa/(1+KdClCa/initvalu_37)*(initvalu_39-ecl);
# 778 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa = I_ClCa_junc+I_ClCa_sl;
# 779 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Clbk = GClB*(initvalu_39-ecl);
# 780 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 781 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 782 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 dss = 1/(1+exp(-(initvalu_39+14.5)/6.0));
# 783 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 taud = dss*(1-exp(-(initvalu_39+14.5)/6.0))/(0.035*(initvalu_39+14.5));
# 784 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 fss = 1/(1+exp((initvalu_39+35.06)/3.6))+0.6/(1+exp((50-initvalu_39)/20));
# 785 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauf = 1/(0.0197*exp(-pow(0.0337*(initvalu_39+14.5),2))+0.02);
# 786 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_4] = (dss-initvalu_4)/taud;
# 787 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_5] = (fss-initvalu_5)/tauf;
# 788 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_6] = 1.7*initvalu_36*(1-initvalu_6)-11.9e-3*initvalu_6;
# 789 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_7] = 1.7*initvalu_37*(1-initvalu_7)-11.9e-3*initvalu_7;
# 790 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 791 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 792 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarca_j = pCa*4*(initvalu_39*Frdy*FoRT) * (0.341*initvalu_36*exp(2*initvalu_39*FoRT)-0.341*Cao) /(exp(2*initvalu_39*FoRT)-1);
# 793 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarca_sl = pCa*4*(initvalu_39*Frdy*FoRT) * (0.341*initvalu_37*exp(2*initvalu_39*FoRT)-0.341*Cao) /(exp(2*initvalu_39*FoRT)-1);
# 794 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibark = pK*(initvalu_39*Frdy*FoRT)*(0.75*initvalu_35*exp(initvalu_39*FoRT)-0.75*Ko) /(exp(initvalu_39*FoRT)-1);
# 795 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarna_j = pNa*(initvalu_39*Frdy*FoRT) *(0.75*initvalu_32*exp(initvalu_39*FoRT)-0.75*Nao) /(exp(initvalu_39*FoRT)-1);
# 796 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarna_sl = pNa*(initvalu_39*Frdy*FoRT) *(0.75*initvalu_33*exp(initvalu_39*FoRT)-0.75*Nao) /(exp(initvalu_39*FoRT)-1);
# 797 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_junc = (Fjunc_CaL*ibarca_j*initvalu_4*initvalu_5*(1-initvalu_6)*pow(Q10CaL,Qpow))*0.45;
# 798 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_sl = (Fsl_CaL*ibarca_sl*initvalu_4*initvalu_5*(1-initvalu_7)*pow(Q10CaL,Qpow))*0.45;
# 799 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca = I_Ca_junc+I_Ca_sl;
# 800 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_43]=-I_Ca*Cmem/(Vmyo*2*Frdy)*1e3;
# 801 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaK = (ibark*initvalu_4*initvalu_5*(Fjunc_CaL*(1-initvalu_6)+Fsl_CaL*(1-initvalu_7))*pow(Q10CaL,Qpow))*0.45;
# 802 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa_junc = (Fjunc_CaL*ibarna_j*initvalu_4*initvalu_5*(1-initvalu_6)*pow(Q10CaL,Qpow))*0.45;
# 803 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa_sl = (Fsl_CaL*ibarna_sl*initvalu_4*initvalu_5*(1-initvalu_7)*pow(Q10CaL,Qpow))*0.45;
# 804 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa = I_CaNa_junc+I_CaNa_sl;
# 805 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Catot = I_Ca+I_CaK+I_CaNa;
# 806 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 807 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 808 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ka_junc = 1/(1+pow((Kdact/initvalu_36),3));
# 809 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ka_sl = 1/(1+pow((Kdact/initvalu_37),3));
# 810 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s1_junc = exp(nu*initvalu_39*FoRT)*pow(initvalu_32,3)*Cao;
# 811 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s1_sl = exp(nu*initvalu_39*FoRT)*pow(initvalu_33,3)*Cao;
# 812 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s2_junc = exp((nu-1)*initvalu_39*FoRT)*pow(Nao,3)*initvalu_36;
# 813 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s3_junc = (KmCai*pow(Nao,3)*(1+pow((initvalu_32/KmNai),3))+pow(KmNao,3)*initvalu_36+ pow(KmNai,3)*Cao*(1+initvalu_36/KmCai)+KmCao*pow(initvalu_32,3)+pow(initvalu_32,3)*Cao+pow(Nao,3)*initvalu_36)*(1+ksat*exp((nu-1)*initvalu_39*FoRT));
# 814 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s2_sl = exp((nu-1)*initvalu_39*FoRT)*pow(Nao,3)*initvalu_37;
# 815 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s3_sl = (KmCai*pow(Nao,3)*(1+pow((initvalu_33/KmNai),3)) + pow(KmNao,3)*initvalu_37+pow(KmNai,3)*Cao*(1+initvalu_37/KmCai)+KmCao*pow(initvalu_33,3)+pow(initvalu_33,3)*Cao+pow(Nao,3)*initvalu_37)*(1+ksat*exp((nu-1)*initvalu_39*FoRT));
# 816 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx_junc = Fjunc*IbarNCX*pow(Q10NCX,Qpow)*Ka_junc*(s1_junc-s2_junc)/s3_junc;
# 817 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx_sl = Fsl*IbarNCX*pow(Q10NCX,Qpow)*Ka_sl*(s1_sl-s2_sl)/s3_sl;
# 818 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx = I_ncx_junc+I_ncx_sl;
# 819 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_45]=2*I_ncx*Cmem/(Vmyo*2*Frdy)*1e3;
# 820 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 821 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 822 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca_junc = Fjunc *
# 823 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     pow(Q10SLCaP,Qpow) *
# 824 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     IbarSLCaP *
# 825 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     pow(initvalu_36,1.6) /
# 826 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     (pow(KmPCa,1.6) + pow(initvalu_36,1.6));
# 827 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca_sl = Fsl *
# 828 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    pow(Q10SLCaP,Qpow) *
# 829 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    IbarSLCaP *
# 830 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    pow(initvalu_37,1.6) /
# 831 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    (pow(KmPCa,1.6) + pow(initvalu_37,1.6));
# 832 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca = I_pca_junc+I_pca_sl;
# 833 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_44]=-I_pca*Cmem/(Vmyo*2*Frdy)*1e3;
# 834 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 835 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 836 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk_junc = Fjunc*GCaB*(initvalu_39-eca_junc);
# 837 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk_sl = Fsl*GCaB*(initvalu_39-eca_sl);
# 838 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk = I_cabk_junc+I_cabk_sl;
# 839 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_46]=-I_cabk*Cmem/(Vmyo*2*Frdy)*1e3;
# 840 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 841 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 842 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 MaxSR = 15;
# 843 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 MinSR = 1;
# 844 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kCaSR = MaxSR - (MaxSR-MinSR)/(1+pow(ec50SR/initvalu_31,2.5));
# 845 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koSRCa = koCa/kCaSR;
# 846 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiSRCa = kiCa*kCaSR;
# 847 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 RI = 1-initvalu_14-initvalu_15-initvalu_16;
# 848 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_14] = (kim*RI-kiSRCa*initvalu_36*initvalu_14)-(koSRCa*pow(initvalu_36,2)*initvalu_14-kom*initvalu_15);
# 849 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_15] = (koSRCa*pow(initvalu_36,2)*initvalu_14-kom*initvalu_15)-(kiSRCa*initvalu_36*initvalu_15-kim*initvalu_16);
# 850 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_16] = (kiSRCa*initvalu_36*initvalu_15-kim*initvalu_16)-(kom*initvalu_16-koSRCa*pow(initvalu_36,2)*RI);
# 851 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_SRCarel = ks*initvalu_15*(initvalu_31-initvalu_36);
# 852 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_serca = pow(Q10SRCaP,Qpow)*Vmax_SRCaP*(pow((initvalu_38/Kmf),hillSRCaP)-pow((initvalu_31/Kmr),hillSRCaP))
# 853 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
           /(1+pow((initvalu_38/Kmf),hillSRCaP)+pow((initvalu_31/Kmr),hillSRCaP));
# 854 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_SRleak = 5.348e-6*(initvalu_31-initvalu_36);
# 855 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 856 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 857 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_17] = kon_na*initvalu_32*(Bmax_Naj-initvalu_17)-koff_na*initvalu_17;
# 858 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_18] = kon_na*initvalu_33*(Bmax_Nasl-initvalu_18)-koff_na*initvalu_18;
# 859 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 860 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 861 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_19] = kon_tncl*initvalu_38*(Bmax_TnClow-initvalu_19)-koff_tncl*initvalu_19;
# 862 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_20] = kon_tnchca*initvalu_38*(Bmax_TnChigh-initvalu_20-initvalu_21)-koff_tnchca*initvalu_20;
# 863 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_21] = kon_tnchmg*Mgi*(Bmax_TnChigh-initvalu_20-initvalu_21)-koff_tnchmg*initvalu_21;
# 864 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_22] = 0;
# 865 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_23] = kon_myoca*initvalu_38*(Bmax_myosin-initvalu_23-initvalu_24)-koff_myoca*initvalu_23;
# 866 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_24] = kon_myomg*Mgi*(Bmax_myosin-initvalu_23-initvalu_24)-koff_myomg*initvalu_24;
# 867 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_25] = kon_sr*initvalu_38*(Bmax_SR-initvalu_25)-koff_sr*initvalu_25;
# 868 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_cytosol = finavalu[offset_19] + finavalu[offset_20] + finavalu[offset_21] + finavalu[offset_22] + finavalu[offset_23] + finavalu[offset_24] + finavalu[offset_25];
# 869 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 870 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 871 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_26] = kon_sll*initvalu_36*(Bmax_SLlowj-initvalu_26)-koff_sll*initvalu_26;
# 872 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_27] = kon_sll*initvalu_37*(Bmax_SLlowsl-initvalu_27)-koff_sll*initvalu_27;
# 873 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_28] = kon_slh*initvalu_36*(Bmax_SLhighj-initvalu_28)-koff_slh*initvalu_28;
# 874 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_29] = kon_slh*initvalu_37*(Bmax_SLhighsl-initvalu_29)-koff_slh*initvalu_29;
# 875 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_junction = finavalu[offset_26]+finavalu[offset_28];
# 876 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_sl = finavalu[offset_27]+finavalu[offset_29];
# 877 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 878 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 879 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_30] = kon_csqn*initvalu_31*(Bmax_Csqn-initvalu_30)-koff_csqn*initvalu_30;
# 880 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 oneovervsr = 1/Vsr;
# 881 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_31] = J_serca*Vmyo*oneovervsr-(J_SRleak*Vmyo*oneovervsr+J_SRCarel)-finavalu[offset_30];
# 882 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 883 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 884 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot_junc = I_Na_junc+I_nabk_junc+3*I_ncx_junc+3*I_nak_junc+I_CaNa_junc;
# 885 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot_sl = I_Na_sl+I_nabk_sl+3*I_ncx_sl+3*I_nak_sl+I_CaNa_sl;
# 886 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_32] = -I_Na_tot_junc*Cmem/(Vjunc*Frdy)+J_na_juncsl/Vjunc*(initvalu_33-initvalu_32)-finavalu[offset_17];
# 887 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 oneovervsl = 1/Vsl;
# 888 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_33] = -I_Na_tot_sl*Cmem*oneovervsl/Frdy+J_na_juncsl*oneovervsl*(initvalu_32-initvalu_33)+J_na_slmyo*oneovervsl*(initvalu_34-initvalu_33)-finavalu[offset_18];
# 889 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_34] = J_na_slmyo/Vmyo*(initvalu_33-initvalu_34);
# 890 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 891 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 892 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_K_tot = I_to+I_kr+I_ks+I_ki-2*I_nak+I_CaK+I_kp;
# 893 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_35] = 0;
# 894 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 895 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 896 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot_junc = I_Ca_junc+I_cabk_junc+I_pca_junc-2*I_ncx_junc;
# 897 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot_sl = I_Ca_sl+I_cabk_sl+I_pca_sl-2*I_ncx_sl;
# 898 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_36] = -I_Ca_tot_junc*Cmem/(Vjunc*2*Frdy)+J_ca_juncsl/Vjunc*(initvalu_37-initvalu_36)
# 899 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
          - J_CaB_junction+(J_SRCarel)*Vsr/Vjunc+J_SRleak*Vmyo/Vjunc;
# 900 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_37] = -I_Ca_tot_sl*Cmem/(Vsl*2*Frdy)+J_ca_juncsl/Vsl*(initvalu_36-initvalu_37)
# 901 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
          + J_ca_slmyo/Vsl*(initvalu_38-initvalu_37)-J_CaB_sl;
# 902 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_38] = -J_serca-J_CaB_cytosol +J_ca_slmyo/Vmyo*(initvalu_37-initvalu_38);
# 903 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junc_sl=J_ca_juncsl/Vsl*(initvalu_36-initvalu_37);
# 904 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sl_junc=J_ca_juncsl/Vjunc*(initvalu_37-initvalu_36);
# 905 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sl_myo=J_ca_slmyo/Vsl*(initvalu_38-initvalu_37);
# 906 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 myo_sl=J_ca_slmyo/Vmyo*(initvalu_37-initvalu_38);
# 907 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 908 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 909 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 state = 1;
# 910 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 switch(state){
# 911 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 0:
# 912 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   I_app = 0;
# 913 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 914 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 1:
# 915 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    call_lbl_0: if(alias_group_changed(____alias_loc_id_0) || ({ calling((void*)fmod, 0, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); (fmod)(timeinst, parameter_1); }) <= 5){
# 916 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    I_app = 9.5;
# 917 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 918 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   else{
# 919 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    I_app = 0.0;
# 920 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 921 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 922 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 2:
# 923 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   V_hold = -55;
# 924 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   V_test = 0;
# 925 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   if(timeinst>0.5 & timeinst<200.5){
# 926 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    V_clamp = V_test;
# 927 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 928 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   else{
# 929 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    V_clamp = V_hold;
# 930 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 931 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   R_clamp = 0.04;
# 932 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   I_app = (V_clamp-initvalu_39)/R_clamp;
# 933 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 934 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 935 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 936 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 937 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot = I_Na_tot_junc + I_Na_tot_sl;
# 938 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Cl_tot = I_ClCa+I_Clbk;
# 939 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot = I_Ca_tot_junc+I_Ca_tot_sl;
# 940 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tot = I_Na_tot+I_Cl_tot+I_Ca_tot+I_K_tot;
# 941 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_39] = -(I_tot-I_app);
# 942 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 943 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 944 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_41] = 0;
# 945 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_42] = 0;
# 946 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 947 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
rm_stack(false, 0UL, "ecc", &____must_manage_ecc, ____alias_loc_id_1, ____chimes_did_disable0, false); }

void ecc( float timeinst,
# 7 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *initvalu,
# 8 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int initvalu_offset,
# 9 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *parameter,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int parameter_offset,
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *finavalu) { (____chimes_replaying ? ecc_resumable(timeinst, initvalu, initvalu_offset, parameter, parameter_offset, finavalu) : ecc_quick(timeinst, initvalu, initvalu_offset, parameter, parameter_offset, finavalu)); }
# 6 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
void ecc_npm( float timeinst,
# 7 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *initvalu,
# 8 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int initvalu_offset,
# 9 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *parameter,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    int parameter_offset,
# 11 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    float *finavalu){
# 12 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 17 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 18 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_1;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_2;
# 20 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_3;
# 21 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_4;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_5;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_6;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_7;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_8;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_9;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_10;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_11;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_12;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_13;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_14;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_15;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_16;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_17;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_18;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_19;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_20;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_21;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_22;
# 40 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_23;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_24;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_25;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_26;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_27;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_28;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_29;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_30;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_31;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_32;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_33;
# 51 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_34;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_35;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_36;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_37;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_38;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_39;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_40;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_41;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_42;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_43;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_44;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_45;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int offset_46;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 65 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 66 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int parameter_offset_1;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_1;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_2;
# 71 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_3;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_4;
# 73 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_5;
# 74 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_6;
# 75 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_7;
# 76 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_8;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_9;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_10;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_11;
# 80 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_12;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_13;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_14;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_15;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_16;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_17;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_18;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_19;
# 88 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_20;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_21;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_22;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_23;
# 92 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_24;
# 93 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_25;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_26;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_27;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_28;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_29;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_30;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_31;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_32;
# 101 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_33;
# 102 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_34;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_35;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_36;
# 105 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_37;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_38;
# 107 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_39;
# 108 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_40;
# 109 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_41;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_42;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_43;
# 112 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_44;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_45;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float initvalu_46;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float parameter_1;
# 118 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pi;
# 121 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float R;
# 124 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Frdy;
# 125 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Temp;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float FoRT;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cmem;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Qpow;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float cellLength;
# 132 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float cellRadius;
# 133 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junctionLength;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junctionRadius;
# 135 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float distSLcyto;
# 136 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float distJuncSL;
# 137 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DcaJuncSL;
# 138 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DcaSLcyto;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DnaJuncSL;
# 140 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float DnaSLcyto;
# 141 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vcell;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vmyo;
# 143 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vsr;
# 144 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vsl;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vjunc;
# 146 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float SAjunc;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float SAsl;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_ca_juncsl;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_ca_slmyo;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_na_juncsl;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_na_slmyo;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fjunc;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fsl;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fjunc_CaL;
# 157 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Fsl_CaL;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cli;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Clo;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ko;
# 163 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Nao;
# 164 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Cao;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Mgi;
# 166 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 168 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ena_junc;
# 169 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ena_sl;
# 170 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ek;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eca_junc;
# 172 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eca_sl;
# 173 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ecl;
# 174 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 175 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GNa;
# 177 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GNaB;
# 178 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarNaK;
# 179 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNaip;
# 180 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmKo;
# 181 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10NaK;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10KmNai;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 184 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 185 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pNaK;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GtoSlow;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GtoFast;
# 188 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gkp;
# 189 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GClCa;
# 192 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GClB;
# 193 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KdClCa;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pNa;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pCa;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pK;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCa;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10CaL;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 202 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 203 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarNCX;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCai;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmCao;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNai;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmNao;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ksat;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float nu;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kdact;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10NCX;
# 212 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float IbarSLCaP;
# 213 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float KmPCa;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float GCaB;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10SLCaP;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 218 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Q10SRCaP;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Vmax_SRCaP;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kmf;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Kmr;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float hillSRCaP;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ks;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koCa;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kom;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiCa;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kim;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ec50SR;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Naj;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Nasl;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_na;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_na;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_TnClow;
# 236 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tncl;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tncl;
# 238 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_TnChigh;
# 239 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tnchca;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tnchca;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_tnchmg;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_tnchmg;
# 243 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_CaM;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_cam;
# 245 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_cam;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_myosin;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_myoca;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_myoca;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_myomg;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_myomg;
# 251 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SR;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_sr;
# 253 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_sr;
# 254 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLlowsl;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLlowj;
# 256 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_sll;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_sll;
# 258 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLhighsl;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_SLhighj;
# 260 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_slh;
# 261 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_slh;
# 262 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Bmax_Csqn;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koff_csqn;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kon_csqn;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float am;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bm;
# 269 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ah;
# 270 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bh;
# 271 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float aj;
# 272 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bj;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_junc;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_sl;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 278 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk_junc;
# 279 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk_sl;
# 280 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nabk;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sigma;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float fnak;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak_junc;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak_sl;
# 287 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_nak;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 289 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 290 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gkr;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xrss;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxr;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float rkr;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kr;
# 295 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 296 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 297 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pcaks_junc;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float pcaks_sl;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gks_junc;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float gks_sl;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float eks;
# 302 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xsss;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxs;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks_junc;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks_sl;
# 306 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ks;
# 307 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 308 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kp_kp;
# 310 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp_junc;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp_sl;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_kp;
# 313 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 315 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float xtoss;
# 316 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ytoss;
# 317 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float rtoss;
# 318 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxtos;
# 319 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauytos;
# 320 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float taurtos;
# 321 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tos;
# 322 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauxtof;
# 325 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauytof;
# 326 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tof;
# 327 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_to;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 329 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 330 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float aki;
# 331 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float bki;
# 332 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiss;
# 333 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ki;
# 334 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 335 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 336 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa_junc;
# 337 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa_sl;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ClCa;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Clbk;
# 340 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 341 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 342 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float dss;
# 343 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float taud;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float fss;
# 345 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float tauf;
# 346 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarca_j;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarca_sl;
# 350 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibark;
# 351 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarna_j;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float ibarna_sl;
# 353 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_junc;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_sl;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaK;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa_junc;
# 358 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa_sl;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_CaNa;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Catot;
# 361 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 362 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ka_junc;
# 364 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float Ka_sl;
# 365 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s1_junc;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s1_sl;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s2_junc;
# 368 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s3_junc;
# 369 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s2_sl;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float s3_sl;
# 371 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx_junc;
# 372 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx_sl;
# 373 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_ncx;
# 374 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 375 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 376 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca_junc;
# 377 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca_sl;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_pca;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 380 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk_junc;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk_sl;
# 383 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_cabk;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 385 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 386 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float MaxSR;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float MinSR;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kCaSR;
# 389 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float koSRCa;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float kiSRCa;
# 391 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float RI;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_SRCarel;
# 393 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_serca;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_SRleak;
# 395 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 396 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 397 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_cytosol;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 399 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_junction;
# 401 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float J_CaB_sl;
# 402 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 404 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float oneovervsr;
# 405 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 406 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_tot_junc;
# 408 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_tot_sl;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float oneovervsl;
# 410 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 411 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 412 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_K_tot;
# 413 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 415 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_tot_junc;
# 416 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_tot_sl;
# 417 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float junc_sl;
# 418 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sl_junc;
# 419 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float sl_myo;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float myo_sl;
# 421 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 422 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 423 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 int state;
# 424 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_app;
# 425 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_hold;
# 426 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_test;
# 427 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float V_clamp;
# 428 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float R_clamp;
# 429 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 430 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 431 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Na_tot;
# 432 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Cl_tot;
# 433 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_Ca_tot;
# 434 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 float I_tot;
# 435 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 437 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 438 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 439 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 441 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_1 = initvalu_offset;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_2 = initvalu_offset+1;
# 443 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_3 = initvalu_offset+2;
# 444 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_4 = initvalu_offset+3;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_5 = initvalu_offset+4;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_6 = initvalu_offset+5;
# 447 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_7 = initvalu_offset+6;
# 448 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_8 = initvalu_offset+7;
# 449 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_9 = initvalu_offset+8;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_10 = initvalu_offset+9;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_11 = initvalu_offset+10;
# 452 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_12 = initvalu_offset+11;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_13 = initvalu_offset+12;
# 454 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_14 = initvalu_offset+13;
# 455 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_15 = initvalu_offset+14;
# 456 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_16 = initvalu_offset+15;
# 457 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_17 = initvalu_offset+16;
# 458 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_18 = initvalu_offset+17;
# 459 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_19 = initvalu_offset+18;
# 460 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_20 = initvalu_offset+19;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_21 = initvalu_offset+20;
# 462 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_22 = initvalu_offset+21;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_23 = initvalu_offset+22;
# 464 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_24 = initvalu_offset+23;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_25 = initvalu_offset+24;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_26 = initvalu_offset+25;
# 467 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_27 = initvalu_offset+26;
# 468 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_28 = initvalu_offset+27;
# 469 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_29 = initvalu_offset+28;
# 470 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_30 = initvalu_offset+29;
# 471 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_31 = initvalu_offset+30;
# 472 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_32 = initvalu_offset+31;
# 473 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_33 = initvalu_offset+32;
# 474 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_34 = initvalu_offset+33;
# 475 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_35 = initvalu_offset+34;
# 476 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_36 = initvalu_offset+35;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_37 = initvalu_offset+36;
# 478 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_38 = initvalu_offset+37;
# 479 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_39 = initvalu_offset+38;
# 480 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_40 = initvalu_offset+39;
# 481 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_41 = initvalu_offset+40;
# 482 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_42 = initvalu_offset+41;
# 483 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_43 = initvalu_offset+42;
# 484 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_44 = initvalu_offset+43;
# 485 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_45 = initvalu_offset+44;
# 486 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 offset_46 = initvalu_offset+45;
# 487 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 489 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 parameter_offset_1 = parameter_offset;
# 490 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 491 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 492 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_1 = initvalu[offset_1 ];
# 493 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_2 = initvalu[offset_2 ];
# 494 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_3 = initvalu[offset_3 ];
# 495 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_4 = initvalu[offset_4 ];
# 496 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_5 = initvalu[offset_5 ];
# 497 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_6 = initvalu[offset_6 ];
# 498 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_7 = initvalu[offset_7 ];
# 499 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_8 = initvalu[offset_8 ];
# 500 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_9 = initvalu[offset_9 ];
# 501 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_10 = initvalu[offset_10];
# 502 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_11 = initvalu[offset_11];
# 503 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_12 = initvalu[offset_12];
# 504 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_13 = initvalu[offset_13];
# 505 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_14 = initvalu[offset_14];
# 506 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_15 = initvalu[offset_15];
# 507 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_16 = initvalu[offset_16];
# 508 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_17 = initvalu[offset_17];
# 509 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_18 = initvalu[offset_18];
# 510 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_19 = initvalu[offset_19];
# 511 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_20 = initvalu[offset_20];
# 512 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_21 = initvalu[offset_21];
# 513 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_22 = initvalu[offset_22];
# 514 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_23 = initvalu[offset_23];
# 515 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_24 = initvalu[offset_24];
# 516 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_25 = initvalu[offset_25];
# 517 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_26 = initvalu[offset_26];
# 518 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_27 = initvalu[offset_27];
# 519 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_28 = initvalu[offset_28];
# 520 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_29 = initvalu[offset_29];
# 521 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_30 = initvalu[offset_30];
# 522 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_31 = initvalu[offset_31];
# 523 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_32 = initvalu[offset_32];
# 524 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_33 = initvalu[offset_33];
# 525 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_34 = initvalu[offset_34];
# 526 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_35 = initvalu[offset_35];
# 527 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_36 = initvalu[offset_36];
# 528 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_37 = initvalu[offset_37];
# 529 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_38 = initvalu[offset_38];
# 530 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_39 = initvalu[offset_39];
# 531 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_40 = initvalu[offset_40];
# 532 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_41 = initvalu[offset_41];
# 533 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_42 = initvalu[offset_42];
# 534 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_43 = initvalu[offset_43];
# 535 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_44 = initvalu[offset_44];
# 536 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_45 = initvalu[offset_45];
# 537 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 initvalu_46 = initvalu[offset_46];
# 538 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 parameter_1 = parameter[parameter_offset_1];
# 541 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 543 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pi = 3.1416;
# 544 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 545 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 546 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 R = 8314;
# 547 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Frdy = 96485;
# 548 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Temp = 310;
# 549 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 FoRT = Frdy/R/Temp;
# 550 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cmem = 1.3810e-10;
# 551 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Qpow = (Temp-310)/10;
# 552 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 cellLength = 100;
# 555 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 cellRadius = 10.25;
# 556 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junctionLength = 160e-3;
# 557 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junctionRadius = 15e-3;
# 558 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 distSLcyto = 0.45;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 distJuncSL = 0.5;
# 560 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DcaJuncSL = 1.64e-6;
# 561 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DcaSLcyto = 1.22e-6;
# 562 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DnaJuncSL = 1.09e-5;
# 563 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 DnaSLcyto = 1.79e-5;
# 564 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vcell = pi*pow(cellRadius,2)*cellLength*1e-15;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vmyo = 0.65*Vcell;
# 566 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vsr = 0.035*Vcell;
# 567 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vsl = 0.02*Vcell;
# 568 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vjunc = 0.0539*0.01*Vcell;
# 569 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 SAjunc = 20150*pi*2*junctionLength*junctionRadius;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 SAsl = pi*2*cellRadius*cellLength;
# 571 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_ca_juncsl = 1/1.2134e12;
# 572 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_ca_slmyo = 1/2.68510e11;
# 573 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_na_juncsl = 1/(1.6382e12/3*100);
# 574 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_na_slmyo = 1/(1.8308e10/3*100);
# 575 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 576 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 577 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fjunc = 0.11;
# 578 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fsl = 1-Fjunc;
# 579 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fjunc_CaL = 0.9;
# 580 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Fsl_CaL = 1-Fjunc_CaL;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 582 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cli = 15;
# 584 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Clo = 150;
# 585 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ko = 5.4;
# 586 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Nao = 140;
# 587 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Cao = 1.8;
# 588 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Mgi = 1;
# 589 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 590 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ena_junc = (1/FoRT)*log(Nao/initvalu_32);
# 592 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ena_sl = (1/FoRT)*log(Nao/initvalu_33);
# 593 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ek = (1/FoRT)*log(Ko/initvalu_35);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eca_junc = (1/FoRT/2)*log(Cao/initvalu_36);
# 595 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eca_sl = (1/FoRT/2)*log(Cao/initvalu_37);
# 596 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ecl = (1/FoRT)*log(Cli/Clo);
# 597 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 598 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GNa = 16.0;
# 600 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GNaB = 0.297e-3;
# 601 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarNaK = 1.90719;
# 602 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNaip = 11;
# 603 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmKo = 1.5;
# 604 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10NaK = 1.63;
# 605 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10KmNai = 1.39;
# 606 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 607 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 608 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pNaK = 0.01833;
# 609 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GtoSlow = 0.06;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GtoFast = 0.02;
# 611 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gkp = 0.001;
# 612 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GClCa = 0.109625;
# 615 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GClB = 9e-3;
# 616 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KdClCa = 100e-3;
# 617 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 618 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 619 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pNa = 1.5e-8;
# 620 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pCa = 5.4e-4;
# 621 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pK = 2.7e-7;
# 622 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCa = 0.6e-3;
# 623 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10CaL = 1.8;
# 624 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 625 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 626 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarNCX = 9.0;
# 627 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCai = 3.59e-3;
# 628 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmCao = 1.3;
# 629 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNai = 12.29;
# 630 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmNao = 87.5;
# 631 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ksat = 0.27;
# 632 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 nu = 0.35;
# 633 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kdact = 0.256e-3;
# 634 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10NCX = 1.57;
# 635 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 IbarSLCaP = 0.0673;
# 636 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 KmPCa = 0.5e-3;
# 637 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 GCaB = 2.513e-4;
# 638 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10SLCaP = 2.35;
# 639 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 640 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 641 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Q10SRCaP = 2.6;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Vmax_SRCaP = 2.86e-4;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kmf = 0.246e-3;
# 644 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Kmr = 1.7;
# 645 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 hillSRCaP = 1.787;
# 646 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ks = 25;
# 647 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koCa = 10;
# 648 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kom = 0.06;
# 649 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiCa = 0.5;
# 650 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kim = 0.005;
# 651 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ec50SR = 0.45;
# 652 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 654 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Naj = 7.561;
# 655 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Nasl = 1.65;
# 656 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_na = 1e-3;
# 657 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_na = 0.1e-3;
# 658 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_TnClow = 70e-3;
# 659 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tncl = 19.6e-3;
# 660 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tncl = 32.7;
# 661 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_TnChigh = 140e-3;
# 662 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tnchca = 0.032e-3;
# 663 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tnchca = 2.37;
# 664 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_tnchmg = 3.33e-3;
# 665 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_tnchmg = 3e-3;
# 666 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_CaM = 24e-3;
# 667 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_cam = 238e-3;
# 668 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_cam = 34;
# 669 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_myosin = 140e-3;
# 670 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_myoca = 0.46e-3;
# 671 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_myoca = 13.8;
# 672 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_myomg = 0.057e-3;
# 673 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_myomg = 0.0157;
# 674 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SR = 19*0.9e-3;
# 675 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_sr = 60e-3;
# 676 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_sr = 100;
# 677 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLlowsl = 37.38e-3*Vmyo/Vsl;
# 678 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLlowj = 4.62e-3*Vmyo/Vjunc*0.1;
# 679 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_sll = 1300e-3;
# 680 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_sll = 100;
# 681 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLhighsl = 13.35e-3*Vmyo/Vsl;
# 682 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_SLhighj = 1.65e-3*Vmyo/Vjunc*0.1;
# 683 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_slh = 30e-3;
# 684 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_slh = 100;
# 685 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Bmax_Csqn = 2.7;
# 686 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koff_csqn = 65;
# 687 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kon_csqn = 100;
# 688 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 689 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 690 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 am = 0.32*(initvalu_39+47.13)/(1-exp(-0.1*(initvalu_39+47.13)));
# 691 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 bm = 0.08*exp(-initvalu_39/11);
# 692 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 if(initvalu_39 >= -40){
# 693 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ah = 0; aj = 0;
# 694 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bh = 1/(0.13*(1+exp(-(initvalu_39+10.66)/11.1)));
# 695 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bj = 0.3*exp(-2.535e-7*initvalu_39)/(1+exp(-0.1*(initvalu_39+32)));
# 696 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 697 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 else{
# 698 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  ah = 0.135*exp((80+initvalu_39)/-6.8);
# 699 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bh = 3.56*exp(0.079*initvalu_39)+3.1e5*exp(0.35*initvalu_39);
# 700 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  aj = (-127140*exp(0.2444*initvalu_39)-3.474e-5*exp(-0.04391*initvalu_39))*(initvalu_39+37.78)/(1+exp(0.311*(initvalu_39+79.23)));
# 701 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  bj = 0.1212*exp(-0.01052*initvalu_39)/(1+exp(-0.1378*(initvalu_39+40.14)));
# 702 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 703 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_1] = am*(1-initvalu_1)-bm*initvalu_1;
# 704 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_2] = ah*(1-initvalu_2)-bh*initvalu_2;
# 705 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_3] = aj*(1-initvalu_3)-bj*initvalu_3;
# 706 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_junc = Fjunc*GNa*pow(initvalu_1,3)*initvalu_2*initvalu_3*(initvalu_39-ena_junc);
# 707 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_sl = Fsl*GNa*pow(initvalu_1,3)*initvalu_2*initvalu_3*(initvalu_39-ena_sl);
# 708 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na = I_Na_junc+I_Na_sl;
# 709 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 710 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 711 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk_junc = Fjunc*GNaB*(initvalu_39-ena_junc);
# 712 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk_sl = Fsl*GNaB*(initvalu_39-ena_sl);
# 713 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nabk = I_nabk_junc+I_nabk_sl;
# 714 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 715 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 716 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sigma = (exp(Nao/67.3)-1)/7;
# 717 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 fnak = 1/(1+0.1245*exp(-0.1*initvalu_39*FoRT)+0.0365*sigma*exp(-initvalu_39*FoRT));
# 718 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak_junc = Fjunc*IbarNaK*fnak*Ko /(1+pow((KmNaip/initvalu_32),4)) /(Ko+KmKo);
# 719 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak_sl = Fsl*IbarNaK*fnak*Ko /(1+pow((KmNaip/initvalu_33),4)) /(Ko+KmKo);
# 720 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_nak = I_nak_junc+I_nak_sl;
# 721 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 722 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 723 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gkr = 0.03*sqrt(Ko/5.4);
# 724 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xrss = 1/(1+exp(-(initvalu_39+50)/7.5));
# 725 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxr = 1/(0.00138*(initvalu_39+7)/(1-exp(-0.123*(initvalu_39+7)))+6.1e-4*(initvalu_39+10)/(exp(0.145*(initvalu_39+10))-1));
# 726 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_12] = (xrss-initvalu_12)/tauxr;
# 727 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 rkr = 1/(1+exp((initvalu_39+33)/22.4));
# 728 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kr = gkr*initvalu_12*rkr*(initvalu_39-ek);
# 729 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 730 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 731 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pcaks_junc = -log10(initvalu_36)+3.0;
# 732 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 pcaks_sl = -log10(initvalu_37)+3.0;
# 733 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gks_junc = 0.07*(0.057 +0.19/(1+ exp((-7.2+pcaks_junc)/0.6)));
# 734 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 gks_sl = 0.07*(0.057 +0.19/(1+ exp((-7.2+pcaks_sl)/0.6)));
# 735 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 eks = (1/FoRT)*log((Ko+pNaK*Nao)/(initvalu_35+pNaK*initvalu_34));
# 736 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xsss = 1/(1+exp(-(initvalu_39-1.5)/16.7));
# 737 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxs = 1/(7.19e-5*(initvalu_39+30)/(1-exp(-0.148*(initvalu_39+30)))+1.31e-4*(initvalu_39+30)/(exp(0.0687*(initvalu_39+30))-1));
# 738 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_13] = (xsss-initvalu_13)/tauxs;
# 739 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks_junc = Fjunc*gks_junc*pow(initvalu_12,2)*(initvalu_39-eks);
# 740 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks_sl = Fsl*gks_sl*pow(initvalu_13,2)*(initvalu_39-eks);
# 741 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ks = I_ks_junc+I_ks_sl;
# 742 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 743 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 744 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kp_kp = 1/(1+exp(7.488-initvalu_39/5.98));
# 745 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp_junc = Fjunc*gkp*kp_kp*(initvalu_39-ek);
# 746 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp_sl = Fsl*gkp*kp_kp*(initvalu_39-ek);
# 747 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_kp = I_kp_junc+I_kp_sl;
# 748 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 749 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 750 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 xtoss = 1/(1+exp(-(initvalu_39+3.0)/15));
# 751 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ytoss = 1/(1+exp((initvalu_39+33.5)/10));
# 752 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 rtoss = 1/(1+exp((initvalu_39+33.5)/10));
# 753 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxtos = 9/(1+exp((initvalu_39+3.0)/15))+0.5;
# 754 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauytos = 3e3/(1+exp((initvalu_39+60.0)/10))+30;
# 755 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 taurtos = 2800/(1+exp((initvalu_39+60.0)/10))+220;
# 756 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_8] = (xtoss-initvalu_8)/tauxtos;
# 757 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_9] = (ytoss-initvalu_9)/tauytos;
# 758 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_40]= (rtoss-initvalu_40)/taurtos;
# 759 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tos = GtoSlow*initvalu_8*(initvalu_9+0.5*initvalu_40)*(initvalu_39-ek);
# 760 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 761 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 762 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauxtof = 3.5*exp(-initvalu_39*initvalu_39/30/30)+1.5;
# 763 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauytof = 20.0/(1+exp((initvalu_39+33.5)/10))+20.0;
# 764 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_10] = (xtoss-initvalu_10)/tauxtof;
# 765 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_11] = (ytoss-initvalu_11)/tauytof;
# 766 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tof = GtoFast*initvalu_10*initvalu_11*(initvalu_39-ek);
# 767 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_to = I_tos + I_tof;
# 768 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 769 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 770 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 aki = 1.02/(1+exp(0.2385*(initvalu_39-ek-59.215)));
# 771 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 bki =(0.49124*exp(0.08032*(initvalu_39+5.476-ek)) + exp(0.06175*(initvalu_39-ek-594.31))) /(1 + exp(-0.5143*(initvalu_39-ek+4.753)));
# 772 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiss = aki/(aki+bki);
# 773 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ki = 0.9*sqrt(Ko/5.4)*kiss*(initvalu_39-ek);
# 774 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 775 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 776 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa_junc = Fjunc*GClCa/(1+KdClCa/initvalu_36)*(initvalu_39-ecl);
# 777 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa_sl = Fsl*GClCa/(1+KdClCa/initvalu_37)*(initvalu_39-ecl);
# 778 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ClCa = I_ClCa_junc+I_ClCa_sl;
# 779 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Clbk = GClB*(initvalu_39-ecl);
# 780 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 781 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 782 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 dss = 1/(1+exp(-(initvalu_39+14.5)/6.0));
# 783 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 taud = dss*(1-exp(-(initvalu_39+14.5)/6.0))/(0.035*(initvalu_39+14.5));
# 784 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 fss = 1/(1+exp((initvalu_39+35.06)/3.6))+0.6/(1+exp((50-initvalu_39)/20));
# 785 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 tauf = 1/(0.0197*exp(-pow(0.0337*(initvalu_39+14.5),2))+0.02);
# 786 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_4] = (dss-initvalu_4)/taud;
# 787 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_5] = (fss-initvalu_5)/tauf;
# 788 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_6] = 1.7*initvalu_36*(1-initvalu_6)-11.9e-3*initvalu_6;
# 789 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_7] = 1.7*initvalu_37*(1-initvalu_7)-11.9e-3*initvalu_7;
# 790 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 791 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 792 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarca_j = pCa*4*(initvalu_39*Frdy*FoRT) * (0.341*initvalu_36*exp(2*initvalu_39*FoRT)-0.341*Cao) /(exp(2*initvalu_39*FoRT)-1);
# 793 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarca_sl = pCa*4*(initvalu_39*Frdy*FoRT) * (0.341*initvalu_37*exp(2*initvalu_39*FoRT)-0.341*Cao) /(exp(2*initvalu_39*FoRT)-1);
# 794 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibark = pK*(initvalu_39*Frdy*FoRT)*(0.75*initvalu_35*exp(initvalu_39*FoRT)-0.75*Ko) /(exp(initvalu_39*FoRT)-1);
# 795 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarna_j = pNa*(initvalu_39*Frdy*FoRT) *(0.75*initvalu_32*exp(initvalu_39*FoRT)-0.75*Nao) /(exp(initvalu_39*FoRT)-1);
# 796 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 ibarna_sl = pNa*(initvalu_39*Frdy*FoRT) *(0.75*initvalu_33*exp(initvalu_39*FoRT)-0.75*Nao) /(exp(initvalu_39*FoRT)-1);
# 797 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_junc = (Fjunc_CaL*ibarca_j*initvalu_4*initvalu_5*(1-initvalu_6)*pow(Q10CaL,Qpow))*0.45;
# 798 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_sl = (Fsl_CaL*ibarca_sl*initvalu_4*initvalu_5*(1-initvalu_7)*pow(Q10CaL,Qpow))*0.45;
# 799 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca = I_Ca_junc+I_Ca_sl;
# 800 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_43]=-I_Ca*Cmem/(Vmyo*2*Frdy)*1e3;
# 801 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaK = (ibark*initvalu_4*initvalu_5*(Fjunc_CaL*(1-initvalu_6)+Fsl_CaL*(1-initvalu_7))*pow(Q10CaL,Qpow))*0.45;
# 802 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa_junc = (Fjunc_CaL*ibarna_j*initvalu_4*initvalu_5*(1-initvalu_6)*pow(Q10CaL,Qpow))*0.45;
# 803 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa_sl = (Fsl_CaL*ibarna_sl*initvalu_4*initvalu_5*(1-initvalu_7)*pow(Q10CaL,Qpow))*0.45;
# 804 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_CaNa = I_CaNa_junc+I_CaNa_sl;
# 805 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Catot = I_Ca+I_CaK+I_CaNa;
# 806 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 807 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 808 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ka_junc = 1/(1+pow((Kdact/initvalu_36),3));
# 809 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 Ka_sl = 1/(1+pow((Kdact/initvalu_37),3));
# 810 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s1_junc = exp(nu*initvalu_39*FoRT)*pow(initvalu_32,3)*Cao;
# 811 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s1_sl = exp(nu*initvalu_39*FoRT)*pow(initvalu_33,3)*Cao;
# 812 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s2_junc = exp((nu-1)*initvalu_39*FoRT)*pow(Nao,3)*initvalu_36;
# 813 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s3_junc = (KmCai*pow(Nao,3)*(1+pow((initvalu_32/KmNai),3))+pow(KmNao,3)*initvalu_36+ pow(KmNai,3)*Cao*(1+initvalu_36/KmCai)+KmCao*pow(initvalu_32,3)+pow(initvalu_32,3)*Cao+pow(Nao,3)*initvalu_36)*(1+ksat*exp((nu-1)*initvalu_39*FoRT));
# 814 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s2_sl = exp((nu-1)*initvalu_39*FoRT)*pow(Nao,3)*initvalu_37;
# 815 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 s3_sl = (KmCai*pow(Nao,3)*(1+pow((initvalu_33/KmNai),3)) + pow(KmNao,3)*initvalu_37+pow(KmNai,3)*Cao*(1+initvalu_37/KmCai)+KmCao*pow(initvalu_33,3)+pow(initvalu_33,3)*Cao+pow(Nao,3)*initvalu_37)*(1+ksat*exp((nu-1)*initvalu_39*FoRT));
# 816 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx_junc = Fjunc*IbarNCX*pow(Q10NCX,Qpow)*Ka_junc*(s1_junc-s2_junc)/s3_junc;
# 817 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx_sl = Fsl*IbarNCX*pow(Q10NCX,Qpow)*Ka_sl*(s1_sl-s2_sl)/s3_sl;
# 818 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_ncx = I_ncx_junc+I_ncx_sl;
# 819 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_45]=2*I_ncx*Cmem/(Vmyo*2*Frdy)*1e3;
# 820 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 821 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 822 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca_junc = Fjunc *
# 823 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     pow(Q10SLCaP,Qpow) *
# 824 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     IbarSLCaP *
# 825 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     pow(initvalu_36,1.6) /
# 826 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
     (pow(KmPCa,1.6) + pow(initvalu_36,1.6));
# 827 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca_sl = Fsl *
# 828 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    pow(Q10SLCaP,Qpow) *
# 829 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    IbarSLCaP *
# 830 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    pow(initvalu_37,1.6) /
# 831 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    (pow(KmPCa,1.6) + pow(initvalu_37,1.6));
# 832 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_pca = I_pca_junc+I_pca_sl;
# 833 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_44]=-I_pca*Cmem/(Vmyo*2*Frdy)*1e3;
# 834 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 835 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 836 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk_junc = Fjunc*GCaB*(initvalu_39-eca_junc);
# 837 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk_sl = Fsl*GCaB*(initvalu_39-eca_sl);
# 838 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_cabk = I_cabk_junc+I_cabk_sl;
# 839 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_46]=-I_cabk*Cmem/(Vmyo*2*Frdy)*1e3;
# 840 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 841 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 842 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 MaxSR = 15;
# 843 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 MinSR = 1;
# 844 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kCaSR = MaxSR - (MaxSR-MinSR)/(1+pow(ec50SR/initvalu_31,2.5));
# 845 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 koSRCa = koCa/kCaSR;
# 846 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 kiSRCa = kiCa*kCaSR;
# 847 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 RI = 1-initvalu_14-initvalu_15-initvalu_16;
# 848 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_14] = (kim*RI-kiSRCa*initvalu_36*initvalu_14)-(koSRCa*pow(initvalu_36,2)*initvalu_14-kom*initvalu_15);
# 849 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_15] = (koSRCa*pow(initvalu_36,2)*initvalu_14-kom*initvalu_15)-(kiSRCa*initvalu_36*initvalu_15-kim*initvalu_16);
# 850 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_16] = (kiSRCa*initvalu_36*initvalu_15-kim*initvalu_16)-(kom*initvalu_16-koSRCa*pow(initvalu_36,2)*RI);
# 851 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_SRCarel = ks*initvalu_15*(initvalu_31-initvalu_36);
# 852 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_serca = pow(Q10SRCaP,Qpow)*Vmax_SRCaP*(pow((initvalu_38/Kmf),hillSRCaP)-pow((initvalu_31/Kmr),hillSRCaP))
# 853 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
           /(1+pow((initvalu_38/Kmf),hillSRCaP)+pow((initvalu_31/Kmr),hillSRCaP));
# 854 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_SRleak = 5.348e-6*(initvalu_31-initvalu_36);
# 855 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 856 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 857 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_17] = kon_na*initvalu_32*(Bmax_Naj-initvalu_17)-koff_na*initvalu_17;
# 858 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_18] = kon_na*initvalu_33*(Bmax_Nasl-initvalu_18)-koff_na*initvalu_18;
# 859 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 860 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 861 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_19] = kon_tncl*initvalu_38*(Bmax_TnClow-initvalu_19)-koff_tncl*initvalu_19;
# 862 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_20] = kon_tnchca*initvalu_38*(Bmax_TnChigh-initvalu_20-initvalu_21)-koff_tnchca*initvalu_20;
# 863 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_21] = kon_tnchmg*Mgi*(Bmax_TnChigh-initvalu_20-initvalu_21)-koff_tnchmg*initvalu_21;
# 864 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_22] = 0;
# 865 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_23] = kon_myoca*initvalu_38*(Bmax_myosin-initvalu_23-initvalu_24)-koff_myoca*initvalu_23;
# 866 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_24] = kon_myomg*Mgi*(Bmax_myosin-initvalu_23-initvalu_24)-koff_myomg*initvalu_24;
# 867 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_25] = kon_sr*initvalu_38*(Bmax_SR-initvalu_25)-koff_sr*initvalu_25;
# 868 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_cytosol = finavalu[offset_19] + finavalu[offset_20] + finavalu[offset_21] + finavalu[offset_22] + finavalu[offset_23] + finavalu[offset_24] + finavalu[offset_25];
# 869 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 870 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 871 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_26] = kon_sll*initvalu_36*(Bmax_SLlowj-initvalu_26)-koff_sll*initvalu_26;
# 872 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_27] = kon_sll*initvalu_37*(Bmax_SLlowsl-initvalu_27)-koff_sll*initvalu_27;
# 873 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_28] = kon_slh*initvalu_36*(Bmax_SLhighj-initvalu_28)-koff_slh*initvalu_28;
# 874 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_29] = kon_slh*initvalu_37*(Bmax_SLhighsl-initvalu_29)-koff_slh*initvalu_29;
# 875 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_junction = finavalu[offset_26]+finavalu[offset_28];
# 876 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 J_CaB_sl = finavalu[offset_27]+finavalu[offset_29];
# 877 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 878 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 879 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_30] = kon_csqn*initvalu_31*(Bmax_Csqn-initvalu_30)-koff_csqn*initvalu_30;
# 880 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 oneovervsr = 1/Vsr;
# 881 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_31] = J_serca*Vmyo*oneovervsr-(J_SRleak*Vmyo*oneovervsr+J_SRCarel)-finavalu[offset_30];
# 882 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 883 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 884 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot_junc = I_Na_junc+I_nabk_junc+3*I_ncx_junc+3*I_nak_junc+I_CaNa_junc;
# 885 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot_sl = I_Na_sl+I_nabk_sl+3*I_ncx_sl+3*I_nak_sl+I_CaNa_sl;
# 886 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_32] = -I_Na_tot_junc*Cmem/(Vjunc*Frdy)+J_na_juncsl/Vjunc*(initvalu_33-initvalu_32)-finavalu[offset_17];
# 887 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 oneovervsl = 1/Vsl;
# 888 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_33] = -I_Na_tot_sl*Cmem*oneovervsl/Frdy+J_na_juncsl*oneovervsl*(initvalu_32-initvalu_33)+J_na_slmyo*oneovervsl*(initvalu_34-initvalu_33)-finavalu[offset_18];
# 889 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_34] = J_na_slmyo/Vmyo*(initvalu_33-initvalu_34);
# 890 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 891 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 892 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_K_tot = I_to+I_kr+I_ks+I_ki-2*I_nak+I_CaK+I_kp;
# 893 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_35] = 0;
# 894 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 895 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 896 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot_junc = I_Ca_junc+I_cabk_junc+I_pca_junc-2*I_ncx_junc;
# 897 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot_sl = I_Ca_sl+I_cabk_sl+I_pca_sl-2*I_ncx_sl;
# 898 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_36] = -I_Ca_tot_junc*Cmem/(Vjunc*2*Frdy)+J_ca_juncsl/Vjunc*(initvalu_37-initvalu_36)
# 899 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
          - J_CaB_junction+(J_SRCarel)*Vsr/Vjunc+J_SRleak*Vmyo/Vjunc;
# 900 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_37] = -I_Ca_tot_sl*Cmem/(Vsl*2*Frdy)+J_ca_juncsl/Vsl*(initvalu_36-initvalu_37)
# 901 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
          + J_ca_slmyo/Vsl*(initvalu_38-initvalu_37)-J_CaB_sl;
# 902 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_38] = -J_serca-J_CaB_cytosol +J_ca_slmyo/Vmyo*(initvalu_37-initvalu_38);
# 903 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 junc_sl=J_ca_juncsl/Vsl*(initvalu_36-initvalu_37);
# 904 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sl_junc=J_ca_juncsl/Vjunc*(initvalu_37-initvalu_36);
# 905 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 sl_myo=J_ca_slmyo/Vsl*(initvalu_38-initvalu_37);
# 906 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 myo_sl=J_ca_slmyo/Vmyo*(initvalu_37-initvalu_38);
# 907 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 908 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 909 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 state = 1;
# 910 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 switch(state){
# 911 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 0:
# 912 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   I_app = 0;
# 913 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 914 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 1:
# 915 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   if((*____chimes_extern_func_fmod)(timeinst, parameter_1) <= 5){
# 916 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    I_app = 9.5;
# 917 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 918 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   else{
# 919 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    I_app = 0.0;
# 920 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 921 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 922 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
  case 2:
# 923 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   V_hold = -55;
# 924 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   V_test = 0;
# 925 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   if(timeinst>0.5 & timeinst<200.5){
# 926 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    V_clamp = V_test;
# 927 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 928 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   else{
# 929 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
    V_clamp = V_hold;
# 930 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   }
# 931 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   R_clamp = 0.04;
# 932 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   I_app = (V_clamp-initvalu_39)/R_clamp;
# 933 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
   break;
# 934 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 }
# 935 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 936 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 937 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Na_tot = I_Na_tot_junc + I_Na_tot_sl;
# 938 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Cl_tot = I_ClCa+I_Clbk;
# 939 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_Ca_tot = I_Ca_tot_junc+I_Ca_tot_sl;
# 940 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 I_tot = I_Na_tot+I_Cl_tot+I_Ca_tot+I_K_tot;
# 941 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_39] = -(I_tot-I_app);
# 942 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 943 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 944 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_41] = 0;
# 945 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
 finavalu[offset_42] = 0;
# 946 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
# 947 "/scratch/jmg3/rodinia_3.0/openmp/myocyte/ecc.c"
}





static int module_init() {
    init_module(17020714764657567122UL, 3, 1, 11, 2, 1, 1, 2, 0, 0, 0,
                           &____alias_loc_id_0, (unsigned)335, (unsigned)0, (unsigned)0, (17020714764657567122UL + 1UL), (17020714764657567122UL + 2UL), (17020714764657567122UL + 3UL), (17020714764657567122UL + 4UL), (17020714764657567122UL + 5UL), (17020714764657567122UL + 6UL), (17020714764657567122UL + 7UL), (17020714764657567122UL + 8UL), (17020714764657567122UL + 9UL), (17020714764657567122UL + 10UL), (17020714764657567122UL + 11UL), (17020714764657567122UL + 12UL), (17020714764657567122UL + 13UL), (17020714764657567122UL + 14UL), (17020714764657567122UL + 15UL), (17020714764657567122UL + 16UL), (17020714764657567122UL + 17UL), (17020714764657567122UL + 18UL), (17020714764657567122UL + 19UL), (17020714764657567122UL + 20UL), (17020714764657567122UL + 21UL), (17020714764657567122UL + 22UL), (17020714764657567122UL + 23UL), (17020714764657567122UL + 24UL), (17020714764657567122UL + 25UL), (17020714764657567122UL + 26UL), (17020714764657567122UL + 27UL), (17020714764657567122UL + 28UL), (17020714764657567122UL + 29UL), (17020714764657567122UL + 30UL), (17020714764657567122UL + 31UL), (17020714764657567122UL + 32UL), (17020714764657567122UL + 33UL), (17020714764657567122UL + 34UL), (17020714764657567122UL + 35UL), (17020714764657567122UL + 36UL), (17020714764657567122UL + 37UL), (17020714764657567122UL + 38UL), (17020714764657567122UL + 39UL), (17020714764657567122UL + 40UL), (17020714764657567122UL + 41UL), (17020714764657567122UL + 42UL), (17020714764657567122UL + 43UL), (17020714764657567122UL + 44UL), (17020714764657567122UL + 45UL), (17020714764657567122UL + 46UL), (17020714764657567122UL + 47UL), (17020714764657567122UL + 48UL), (17020714764657567122UL + 49UL), (17020714764657567122UL + 50UL), (17020714764657567122UL + 51UL), (17020714764657567122UL + 52UL), (17020714764657567122UL + 53UL), (17020714764657567122UL + 54UL), (17020714764657567122UL + 55UL), (17020714764657567122UL + 56UL), (17020714764657567122UL + 57UL), (17020714764657567122UL + 58UL), (17020714764657567122UL + 59UL), (17020714764657567122UL + 60UL), (17020714764657567122UL + 61UL), (17020714764657567122UL + 62UL), (17020714764657567122UL + 63UL), (17020714764657567122UL + 64UL), (17020714764657567122UL + 65UL), (17020714764657567122UL + 66UL), (17020714764657567122UL + 67UL), (17020714764657567122UL + 68UL), (17020714764657567122UL + 69UL), (17020714764657567122UL + 70UL), (17020714764657567122UL + 71UL), (17020714764657567122UL + 72UL), (17020714764657567122UL + 73UL), (17020714764657567122UL + 74UL), (17020714764657567122UL + 75UL), (17020714764657567122UL + 76UL), (17020714764657567122UL + 77UL), (17020714764657567122UL + 78UL), (17020714764657567122UL + 79UL), (17020714764657567122UL + 80UL), (17020714764657567122UL + 81UL), (17020714764657567122UL + 82UL), (17020714764657567122UL + 83UL), (17020714764657567122UL + 84UL), (17020714764657567122UL + 85UL), (17020714764657567122UL + 86UL), (17020714764657567122UL + 87UL), (17020714764657567122UL + 88UL), (17020714764657567122UL + 89UL), (17020714764657567122UL + 90UL), (17020714764657567122UL + 91UL), (17020714764657567122UL + 92UL), (17020714764657567122UL + 93UL), (17020714764657567122UL + 94UL), (17020714764657567122UL + 95UL), (17020714764657567122UL + 96UL), (17020714764657567122UL + 97UL), (17020714764657567122UL + 98UL), (17020714764657567122UL + 99UL), (17020714764657567122UL + 100UL), (17020714764657567122UL + 101UL), (17020714764657567122UL + 102UL), (17020714764657567122UL + 103UL), (17020714764657567122UL + 104UL), (17020714764657567122UL + 105UL), (17020714764657567122UL + 106UL), (17020714764657567122UL + 107UL), (17020714764657567122UL + 108UL), (17020714764657567122UL + 109UL), (17020714764657567122UL + 110UL), (17020714764657567122UL + 111UL), (17020714764657567122UL + 112UL), (17020714764657567122UL + 113UL), (17020714764657567122UL + 114UL), (17020714764657567122UL + 115UL), (17020714764657567122UL + 116UL), (17020714764657567122UL + 117UL), (17020714764657567122UL + 118UL), (17020714764657567122UL + 119UL), (17020714764657567122UL + 120UL), (17020714764657567122UL + 121UL), (17020714764657567122UL + 122UL), (17020714764657567122UL + 123UL), (17020714764657567122UL + 124UL), (17020714764657567122UL + 125UL), (17020714764657567122UL + 126UL), (17020714764657567122UL + 127UL), (17020714764657567122UL + 128UL), (17020714764657567122UL + 129UL), (17020714764657567122UL + 130UL), (17020714764657567122UL + 131UL), (17020714764657567122UL + 132UL), (17020714764657567122UL + 133UL), (17020714764657567122UL + 134UL), (17020714764657567122UL + 135UL), (17020714764657567122UL + 136UL), (17020714764657567122UL + 137UL), (17020714764657567122UL + 138UL), (17020714764657567122UL + 139UL), (17020714764657567122UL + 140UL), (17020714764657567122UL + 141UL), (17020714764657567122UL + 142UL), (17020714764657567122UL + 143UL), (17020714764657567122UL + 144UL), (17020714764657567122UL + 145UL), (17020714764657567122UL + 146UL), (17020714764657567122UL + 147UL), (17020714764657567122UL + 148UL), (17020714764657567122UL + 149UL), (17020714764657567122UL + 150UL), (17020714764657567122UL + 151UL), (17020714764657567122UL + 152UL), (17020714764657567122UL + 153UL), (17020714764657567122UL + 154UL), (17020714764657567122UL + 155UL), (17020714764657567122UL + 156UL), (17020714764657567122UL + 157UL), (17020714764657567122UL + 158UL), (17020714764657567122UL + 159UL), (17020714764657567122UL + 160UL), (17020714764657567122UL + 161UL), (17020714764657567122UL + 162UL), (17020714764657567122UL + 163UL), (17020714764657567122UL + 164UL), (17020714764657567122UL + 165UL), (17020714764657567122UL + 166UL), (17020714764657567122UL + 167UL), (17020714764657567122UL + 168UL), (17020714764657567122UL + 169UL), (17020714764657567122UL + 170UL), (17020714764657567122UL + 171UL), (17020714764657567122UL + 172UL), (17020714764657567122UL + 173UL), (17020714764657567122UL + 174UL), (17020714764657567122UL + 175UL), (17020714764657567122UL + 176UL), (17020714764657567122UL + 177UL), (17020714764657567122UL + 178UL), (17020714764657567122UL + 179UL), (17020714764657567122UL + 180UL), (17020714764657567122UL + 181UL), (17020714764657567122UL + 182UL), (17020714764657567122UL + 183UL), (17020714764657567122UL + 184UL), (17020714764657567122UL + 185UL), (17020714764657567122UL + 186UL), (17020714764657567122UL + 187UL), (17020714764657567122UL + 188UL), (17020714764657567122UL + 189UL), (17020714764657567122UL + 190UL), (17020714764657567122UL + 191UL), (17020714764657567122UL + 192UL), (17020714764657567122UL + 193UL), (17020714764657567122UL + 194UL), (17020714764657567122UL + 195UL), (17020714764657567122UL + 196UL), (17020714764657567122UL + 197UL), (17020714764657567122UL + 198UL), (17020714764657567122UL + 199UL), (17020714764657567122UL + 200UL), (17020714764657567122UL + 201UL), (17020714764657567122UL + 202UL), (17020714764657567122UL + 203UL), (17020714764657567122UL + 204UL), (17020714764657567122UL + 205UL), (17020714764657567122UL + 206UL), (17020714764657567122UL + 207UL), (17020714764657567122UL + 208UL), (17020714764657567122UL + 209UL), (17020714764657567122UL + 210UL), (17020714764657567122UL + 211UL), (17020714764657567122UL + 212UL), (17020714764657567122UL + 213UL), (17020714764657567122UL + 214UL), (17020714764657567122UL + 215UL), (17020714764657567122UL + 216UL), (17020714764657567122UL + 217UL), (17020714764657567122UL + 218UL), (17020714764657567122UL + 219UL), (17020714764657567122UL + 220UL), (17020714764657567122UL + 221UL), (17020714764657567122UL + 222UL), (17020714764657567122UL + 223UL), (17020714764657567122UL + 224UL), (17020714764657567122UL + 225UL), (17020714764657567122UL + 226UL), (17020714764657567122UL + 227UL), (17020714764657567122UL + 228UL), (17020714764657567122UL + 229UL), (17020714764657567122UL + 230UL), (17020714764657567122UL + 231UL), (17020714764657567122UL + 232UL), (17020714764657567122UL + 233UL), (17020714764657567122UL + 234UL), (17020714764657567122UL + 235UL), (17020714764657567122UL + 236UL), (17020714764657567122UL + 237UL), (17020714764657567122UL + 238UL), (17020714764657567122UL + 239UL), (17020714764657567122UL + 240UL), (17020714764657567122UL + 241UL), (17020714764657567122UL + 242UL), (17020714764657567122UL + 243UL), (17020714764657567122UL + 244UL), (17020714764657567122UL + 245UL), (17020714764657567122UL + 246UL), (17020714764657567122UL + 247UL), (17020714764657567122UL + 248UL), (17020714764657567122UL + 249UL), (17020714764657567122UL + 250UL), (17020714764657567122UL + 251UL), (17020714764657567122UL + 252UL), (17020714764657567122UL + 253UL), (17020714764657567122UL + 254UL), (17020714764657567122UL + 255UL), (17020714764657567122UL + 256UL), (17020714764657567122UL + 257UL), (17020714764657567122UL + 258UL), (17020714764657567122UL + 259UL), (17020714764657567122UL + 260UL), (17020714764657567122UL + 261UL), (17020714764657567122UL + 262UL), (17020714764657567122UL + 263UL), (17020714764657567122UL + 264UL), (17020714764657567122UL + 265UL), (17020714764657567122UL + 266UL), (17020714764657567122UL + 267UL), (17020714764657567122UL + 268UL), (17020714764657567122UL + 269UL), (17020714764657567122UL + 270UL), (17020714764657567122UL + 271UL), (17020714764657567122UL + 272UL), (17020714764657567122UL + 273UL), (17020714764657567122UL + 274UL), (17020714764657567122UL + 275UL), (17020714764657567122UL + 276UL), (17020714764657567122UL + 277UL), (17020714764657567122UL + 278UL), (17020714764657567122UL + 279UL), (17020714764657567122UL + 280UL), (17020714764657567122UL + 281UL), (17020714764657567122UL + 282UL), (17020714764657567122UL + 283UL), (17020714764657567122UL + 284UL), (17020714764657567122UL + 285UL), (17020714764657567122UL + 286UL), (17020714764657567122UL + 287UL), (17020714764657567122UL + 288UL), (17020714764657567122UL + 289UL), (17020714764657567122UL + 290UL), (17020714764657567122UL + 291UL), (17020714764657567122UL + 292UL), (17020714764657567122UL + 293UL), (17020714764657567122UL + 294UL), (17020714764657567122UL + 295UL), (17020714764657567122UL + 296UL), (17020714764657567122UL + 297UL), (17020714764657567122UL + 298UL), (17020714764657567122UL + 299UL), (17020714764657567122UL + 300UL), (17020714764657567122UL + 301UL), (17020714764657567122UL + 302UL), (17020714764657567122UL + 303UL), (17020714764657567122UL + 304UL), (17020714764657567122UL + 305UL), (17020714764657567122UL + 306UL), (17020714764657567122UL + 307UL), (17020714764657567122UL + 308UL), (17020714764657567122UL + 309UL), (17020714764657567122UL + 310UL), (17020714764657567122UL + 311UL), (17020714764657567122UL + 312UL), (17020714764657567122UL + 313UL), (17020714764657567122UL + 314UL), (17020714764657567122UL + 315UL), (17020714764657567122UL + 316UL), (17020714764657567122UL + 317UL), (17020714764657567122UL + 318UL), (17020714764657567122UL + 319UL), (17020714764657567122UL + 320UL), (17020714764657567122UL + 321UL), (17020714764657567122UL + 322UL), (17020714764657567122UL + 323UL), (17020714764657567122UL + 324UL), (17020714764657567122UL + 325UL), (17020714764657567122UL + 326UL), (17020714764657567122UL + 327UL), (17020714764657567122UL + 328UL), (17020714764657567122UL + 329UL), (17020714764657567122UL + 330UL), (17020714764657567122UL + 331UL), (17020714764657567122UL + 332UL), (17020714764657567122UL + 333UL), (17020714764657567122UL + 334UL), (17020714764657567122UL + 3820UL),
                           &____alias_loc_id_1, (unsigned)344, (unsigned)0, (unsigned)0, (17020714764657567122UL + 1UL), (17020714764657567122UL + 2UL), (17020714764657567122UL + 3UL), (17020714764657567122UL + 4UL), (17020714764657567122UL + 5UL), (17020714764657567122UL + 6UL), (17020714764657567122UL + 7UL), (17020714764657567122UL + 8UL), (17020714764657567122UL + 9UL), (17020714764657567122UL + 10UL), (17020714764657567122UL + 11UL), (17020714764657567122UL + 12UL), (17020714764657567122UL + 13UL), (17020714764657567122UL + 14UL), (17020714764657567122UL + 15UL), (17020714764657567122UL + 16UL), (17020714764657567122UL + 17UL), (17020714764657567122UL + 18UL), (17020714764657567122UL + 19UL), (17020714764657567122UL + 20UL), (17020714764657567122UL + 21UL), (17020714764657567122UL + 22UL), (17020714764657567122UL + 23UL), (17020714764657567122UL + 24UL), (17020714764657567122UL + 25UL), (17020714764657567122UL + 26UL), (17020714764657567122UL + 27UL), (17020714764657567122UL + 28UL), (17020714764657567122UL + 29UL), (17020714764657567122UL + 30UL), (17020714764657567122UL + 31UL), (17020714764657567122UL + 32UL), (17020714764657567122UL + 33UL), (17020714764657567122UL + 34UL), (17020714764657567122UL + 35UL), (17020714764657567122UL + 36UL), (17020714764657567122UL + 37UL), (17020714764657567122UL + 38UL), (17020714764657567122UL + 39UL), (17020714764657567122UL + 40UL), (17020714764657567122UL + 41UL), (17020714764657567122UL + 42UL), (17020714764657567122UL + 43UL), (17020714764657567122UL + 44UL), (17020714764657567122UL + 45UL), (17020714764657567122UL + 46UL), (17020714764657567122UL + 47UL), (17020714764657567122UL + 48UL), (17020714764657567122UL + 49UL), (17020714764657567122UL + 50UL), (17020714764657567122UL + 51UL), (17020714764657567122UL + 52UL), (17020714764657567122UL + 53UL), (17020714764657567122UL + 54UL), (17020714764657567122UL + 55UL), (17020714764657567122UL + 56UL), (17020714764657567122UL + 57UL), (17020714764657567122UL + 58UL), (17020714764657567122UL + 59UL), (17020714764657567122UL + 60UL), (17020714764657567122UL + 61UL), (17020714764657567122UL + 62UL), (17020714764657567122UL + 63UL), (17020714764657567122UL + 64UL), (17020714764657567122UL + 65UL), (17020714764657567122UL + 66UL), (17020714764657567122UL + 67UL), (17020714764657567122UL + 68UL), (17020714764657567122UL + 69UL), (17020714764657567122UL + 70UL), (17020714764657567122UL + 71UL), (17020714764657567122UL + 72UL), (17020714764657567122UL + 73UL), (17020714764657567122UL + 74UL), (17020714764657567122UL + 75UL), (17020714764657567122UL + 76UL), (17020714764657567122UL + 77UL), (17020714764657567122UL + 78UL), (17020714764657567122UL + 79UL), (17020714764657567122UL + 80UL), (17020714764657567122UL + 81UL), (17020714764657567122UL + 82UL), (17020714764657567122UL + 83UL), (17020714764657567122UL + 84UL), (17020714764657567122UL + 85UL), (17020714764657567122UL + 86UL), (17020714764657567122UL + 87UL), (17020714764657567122UL + 88UL), (17020714764657567122UL + 89UL), (17020714764657567122UL + 90UL), (17020714764657567122UL + 91UL), (17020714764657567122UL + 92UL), (17020714764657567122UL + 93UL), (17020714764657567122UL + 94UL), (17020714764657567122UL + 95UL), (17020714764657567122UL + 96UL), (17020714764657567122UL + 97UL), (17020714764657567122UL + 98UL), (17020714764657567122UL + 99UL), (17020714764657567122UL + 100UL), (17020714764657567122UL + 101UL), (17020714764657567122UL + 102UL), (17020714764657567122UL + 103UL), (17020714764657567122UL + 104UL), (17020714764657567122UL + 105UL), (17020714764657567122UL + 106UL), (17020714764657567122UL + 107UL), (17020714764657567122UL + 108UL), (17020714764657567122UL + 109UL), (17020714764657567122UL + 110UL), (17020714764657567122UL + 111UL), (17020714764657567122UL + 112UL), (17020714764657567122UL + 113UL), (17020714764657567122UL + 114UL), (17020714764657567122UL + 115UL), (17020714764657567122UL + 116UL), (17020714764657567122UL + 117UL), (17020714764657567122UL + 118UL), (17020714764657567122UL + 119UL), (17020714764657567122UL + 120UL), (17020714764657567122UL + 121UL), (17020714764657567122UL + 122UL), (17020714764657567122UL + 123UL), (17020714764657567122UL + 124UL), (17020714764657567122UL + 125UL), (17020714764657567122UL + 126UL), (17020714764657567122UL + 127UL), (17020714764657567122UL + 128UL), (17020714764657567122UL + 129UL), (17020714764657567122UL + 130UL), (17020714764657567122UL + 131UL), (17020714764657567122UL + 132UL), (17020714764657567122UL + 133UL), (17020714764657567122UL + 134UL), (17020714764657567122UL + 135UL), (17020714764657567122UL + 136UL), (17020714764657567122UL + 137UL), (17020714764657567122UL + 138UL), (17020714764657567122UL + 139UL), (17020714764657567122UL + 140UL), (17020714764657567122UL + 141UL), (17020714764657567122UL + 142UL), (17020714764657567122UL + 143UL), (17020714764657567122UL + 144UL), (17020714764657567122UL + 145UL), (17020714764657567122UL + 146UL), (17020714764657567122UL + 147UL), (17020714764657567122UL + 148UL), (17020714764657567122UL + 149UL), (17020714764657567122UL + 150UL), (17020714764657567122UL + 151UL), (17020714764657567122UL + 152UL), (17020714764657567122UL + 153UL), (17020714764657567122UL + 154UL), (17020714764657567122UL + 155UL), (17020714764657567122UL + 156UL), (17020714764657567122UL + 157UL), (17020714764657567122UL + 158UL), (17020714764657567122UL + 159UL), (17020714764657567122UL + 160UL), (17020714764657567122UL + 161UL), (17020714764657567122UL + 162UL), (17020714764657567122UL + 163UL), (17020714764657567122UL + 164UL), (17020714764657567122UL + 165UL), (17020714764657567122UL + 166UL), (17020714764657567122UL + 167UL), (17020714764657567122UL + 168UL), (17020714764657567122UL + 169UL), (17020714764657567122UL + 170UL), (17020714764657567122UL + 171UL), (17020714764657567122UL + 172UL), (17020714764657567122UL + 173UL), (17020714764657567122UL + 174UL), (17020714764657567122UL + 175UL), (17020714764657567122UL + 176UL), (17020714764657567122UL + 177UL), (17020714764657567122UL + 178UL), (17020714764657567122UL + 179UL), (17020714764657567122UL + 180UL), (17020714764657567122UL + 181UL), (17020714764657567122UL + 182UL), (17020714764657567122UL + 183UL), (17020714764657567122UL + 184UL), (17020714764657567122UL + 185UL), (17020714764657567122UL + 186UL), (17020714764657567122UL + 187UL), (17020714764657567122UL + 188UL), (17020714764657567122UL + 189UL), (17020714764657567122UL + 190UL), (17020714764657567122UL + 191UL), (17020714764657567122UL + 192UL), (17020714764657567122UL + 193UL), (17020714764657567122UL + 194UL), (17020714764657567122UL + 195UL), (17020714764657567122UL + 196UL), (17020714764657567122UL + 197UL), (17020714764657567122UL + 198UL), (17020714764657567122UL + 199UL), (17020714764657567122UL + 200UL), (17020714764657567122UL + 201UL), (17020714764657567122UL + 202UL), (17020714764657567122UL + 203UL), (17020714764657567122UL + 204UL), (17020714764657567122UL + 205UL), (17020714764657567122UL + 206UL), (17020714764657567122UL + 207UL), (17020714764657567122UL + 208UL), (17020714764657567122UL + 209UL), (17020714764657567122UL + 210UL), (17020714764657567122UL + 211UL), (17020714764657567122UL + 212UL), (17020714764657567122UL + 213UL), (17020714764657567122UL + 214UL), (17020714764657567122UL + 215UL), (17020714764657567122UL + 216UL), (17020714764657567122UL + 217UL), (17020714764657567122UL + 218UL), (17020714764657567122UL + 219UL), (17020714764657567122UL + 220UL), (17020714764657567122UL + 221UL), (17020714764657567122UL + 222UL), (17020714764657567122UL + 223UL), (17020714764657567122UL + 224UL), (17020714764657567122UL + 225UL), (17020714764657567122UL + 226UL), (17020714764657567122UL + 227UL), (17020714764657567122UL + 228UL), (17020714764657567122UL + 229UL), (17020714764657567122UL + 230UL), (17020714764657567122UL + 231UL), (17020714764657567122UL + 232UL), (17020714764657567122UL + 233UL), (17020714764657567122UL + 234UL), (17020714764657567122UL + 235UL), (17020714764657567122UL + 236UL), (17020714764657567122UL + 237UL), (17020714764657567122UL + 238UL), (17020714764657567122UL + 239UL), (17020714764657567122UL + 240UL), (17020714764657567122UL + 241UL), (17020714764657567122UL + 242UL), (17020714764657567122UL + 243UL), (17020714764657567122UL + 244UL), (17020714764657567122UL + 245UL), (17020714764657567122UL + 246UL), (17020714764657567122UL + 247UL), (17020714764657567122UL + 248UL), (17020714764657567122UL + 249UL), (17020714764657567122UL + 250UL), (17020714764657567122UL + 251UL), (17020714764657567122UL + 252UL), (17020714764657567122UL + 253UL), (17020714764657567122UL + 254UL), (17020714764657567122UL + 255UL), (17020714764657567122UL + 256UL), (17020714764657567122UL + 257UL), (17020714764657567122UL + 258UL), (17020714764657567122UL + 259UL), (17020714764657567122UL + 260UL), (17020714764657567122UL + 261UL), (17020714764657567122UL + 262UL), (17020714764657567122UL + 263UL), (17020714764657567122UL + 264UL), (17020714764657567122UL + 265UL), (17020714764657567122UL + 266UL), (17020714764657567122UL + 267UL), (17020714764657567122UL + 268UL), (17020714764657567122UL + 269UL), (17020714764657567122UL + 270UL), (17020714764657567122UL + 271UL), (17020714764657567122UL + 272UL), (17020714764657567122UL + 273UL), (17020714764657567122UL + 274UL), (17020714764657567122UL + 275UL), (17020714764657567122UL + 276UL), (17020714764657567122UL + 277UL), (17020714764657567122UL + 278UL), (17020714764657567122UL + 279UL), (17020714764657567122UL + 280UL), (17020714764657567122UL + 281UL), (17020714764657567122UL + 282UL), (17020714764657567122UL + 283UL), (17020714764657567122UL + 284UL), (17020714764657567122UL + 285UL), (17020714764657567122UL + 286UL), (17020714764657567122UL + 287UL), (17020714764657567122UL + 288UL), (17020714764657567122UL + 289UL), (17020714764657567122UL + 290UL), (17020714764657567122UL + 291UL), (17020714764657567122UL + 292UL), (17020714764657567122UL + 293UL), (17020714764657567122UL + 294UL), (17020714764657567122UL + 295UL), (17020714764657567122UL + 296UL), (17020714764657567122UL + 297UL), (17020714764657567122UL + 298UL), (17020714764657567122UL + 299UL), (17020714764657567122UL + 300UL), (17020714764657567122UL + 301UL), (17020714764657567122UL + 302UL), (17020714764657567122UL + 303UL), (17020714764657567122UL + 304UL), (17020714764657567122UL + 305UL), (17020714764657567122UL + 306UL), (17020714764657567122UL + 307UL), (17020714764657567122UL + 308UL), (17020714764657567122UL + 309UL), (17020714764657567122UL + 310UL), (17020714764657567122UL + 311UL), (17020714764657567122UL + 312UL), (17020714764657567122UL + 313UL), (17020714764657567122UL + 314UL), (17020714764657567122UL + 315UL), (17020714764657567122UL + 316UL), (17020714764657567122UL + 317UL), (17020714764657567122UL + 318UL), (17020714764657567122UL + 319UL), (17020714764657567122UL + 320UL), (17020714764657567122UL + 321UL), (17020714764657567122UL + 322UL), (17020714764657567122UL + 323UL), (17020714764657567122UL + 324UL), (17020714764657567122UL + 325UL), (17020714764657567122UL + 326UL), (17020714764657567122UL + 327UL), (17020714764657567122UL + 328UL), (17020714764657567122UL + 329UL), (17020714764657567122UL + 330UL), (17020714764657567122UL + 331UL), (17020714764657567122UL + 332UL), (17020714764657567122UL + 333UL), (17020714764657567122UL + 334UL), (17020714764657567122UL + 335UL), (17020714764657567122UL + 336UL), (17020714764657567122UL + 337UL), (17020714764657567122UL + 338UL), (17020714764657567122UL + 339UL), (17020714764657567122UL + 340UL), (17020714764657567122UL + 341UL), (17020714764657567122UL + 342UL), (17020714764657567122UL + 343UL), (17020714764657567122UL + 3820UL),
                            "ecc", 0, "_Z3eccfPfiS_iS_", "_Z7ecc_npmfPfiS_iS_", 1, &____alias_loc_id_0, 6, 0UL, (17020714764657567122UL + 3816UL), 0UL, (17020714764657567122UL + 3818UL), 0UL, (17020714764657567122UL + 3820UL), 0UL, 123, "pow", 2, 0UL, 0UL, 0UL, "log", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "sqrt", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "log10", 1, 0UL, 0UL, "log10", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "exp", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "fmod", 2, 0UL, 0UL, 0UL,
                               "fmod", (void **)&(____chimes_extern_func_fmod),
                           "ecc", &(____chimes_does_checkpoint_ecc_npm),
                           "fmod", &(____chimes_does_checkpoint_fmod_npm),
                             (17020714764657567122UL + 2UL), (17020714764657567122UL + 3816UL),
                             (17020714764657567122UL + 4UL), (17020714764657567122UL + 3818UL),
                             (17020714764657567122UL + 6UL), (17020714764657567122UL + 3820UL),
                             "ecc", "_Z3eccfPfiS_iS_", 1, "fmod",
                        "ecc|finavalu|0", 1, "fmod",
                        "ecc|offset_39|0", 1, "fmod",
                        "ecc|offset_41|0", 1, "fmod",
                        "ecc|offset_42|0", 1, "fmod",
                        "ecc|I_ClCa|0", 1, "fmod",
                        "ecc|I_Clbk|0", 1, "fmod",
                        "ecc|I_Na_tot_junc|0", 1, "fmod",
                        "ecc|I_Na_tot_sl|0", 1, "fmod",
                        "ecc|I_K_tot|0", 1, "fmod",
                        "ecc|I_Ca_tot_junc|0", 1, "fmod",
                        "ecc|I_Ca_tot_sl|0", 1, "fmod");
    return 0;
}

static const int __libchimes_module_init = module_init();
