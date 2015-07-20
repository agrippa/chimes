# 1 "main.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "main.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_write_data_npm = 1;
static int ____chimes_does_checkpoint_AVI_close_npm = 1;
static int ____chimes_does_checkpoint_AVI_open_input_file_npm = 1;
static int ____chimes_does_checkpoint_AVI_print_error_npm = 1;
static int ____chimes_does_checkpoint_AVI_video_frames_npm = 1;
static int ____chimes_does_checkpoint_AVI_video_height_npm = 1;
static int ____chimes_does_checkpoint_AVI_video_width_npm = 1;
static int ____chimes_does_checkpoint_get_frame_npm = 1;
static int ____chimes_does_checkpoint_kernel_npm = 1;

static int ____must_checkpoint_main_argv_0 = 2;
static int ____must_checkpoint_main_pub_0 = 2;
static int ____must_checkpoint_main_priv_0 = 2;
static int ____must_checkpoint_main_d_frames_0 = 2;

static int ____must_manage_seconds = 2;
static int ____must_manage_write_data = 2;

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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
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
# 69 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 2 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 3 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 4 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 5 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"

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
# 8 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
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
# 9 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
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
# 10 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 11 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
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
# 12 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 3 4
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
# 13 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 13 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 1

extern "C" {
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
# 1 "/usr/include/sys/stat.h" 1 3 4
# 105 "/usr/include/sys/stat.h" 3 4
extern "C" {

# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 167 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];



  };
# 108 "/usr/include/sys/stat.h" 2 3 4
# 211 "/usr/include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) throw () __attribute__ ((__nonnull__ (2)));
# 230 "/usr/include/sys/stat.h" 3 4
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) throw () __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));
# 255 "/usr/include/sys/stat.h" 3 4
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
# 278 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (__const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) throw ();





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) throw ();




extern __mode_t getumask (void) throw ();



extern int mkdir (__const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) throw () __attribute__ ((__nonnull__ (2)));





extern int mkfifo (__const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     throw () __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, __const struct timespec __times[2]) throw ();
# 401 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));
# 434 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) throw () __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     throw () __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
stat (__const char *__path, struct stat *__statbuf) throw ()
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
lstat (__const char *__path, struct stat *__statbuf) throw ()
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstat (int __fd, struct stat *__statbuf) throw ()
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstatat (int __fd, __const char *__filename, struct stat *__statbuf, int __flag) throw ()

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
mknod (__const char *__path, __mode_t __mode, __dev_t __dev) throw ()
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
mknodat (int __fd, __const char *__path, __mode_t __mode, __dev_t __dev) throw ()

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
stat64 (__const char *__path, struct stat64 *__statbuf) throw ()
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
lstat64 (__const char *__path, struct stat64 *__statbuf) throw ()
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstat64 (int __fd, struct stat64 *__statbuf) throw ()
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstatat64 (int __fd, __const char *__filename, struct stat64 *__statbuf, int __flag) throw ()

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}






}
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
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
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4
extern "C" {



# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 26 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/fcntl.h" 2 3 4

# 1 "/usr/include/bits/uio.h" 1 3 4
# 44 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 29 "/usr/include/bits/fcntl.h" 2 3 4
# 165 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };




enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 250 "/usr/include/bits/fcntl.h" 3 4
extern "C" {




extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    throw ();



extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);



extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);


extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);


extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);



extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 290 "/usr/include/bits/fcntl.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);



}
# 35 "/usr/include/fcntl.h" 2 3 4






# 1 "/usr/include/bits/stat.h" 1 3 4
# 42 "/usr/include/fcntl.h" 2 3 4
# 122 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 131 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/fcntl.h" 3 4
extern int open64 (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 155 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 166 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 177 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 187 "/usr/include/fcntl.h" 3 4
extern int creat64 (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len);
# 215 "/usr/include/fcntl.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len);







extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
     int __advise) throw ();
# 235 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, __off64_t __offset, __off64_t __len,
       int __advise) throw ();
# 245 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
# 256 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, __off64_t __offset, __off64_t __len);
# 267 "/usr/include/fcntl.h" 3 4
}
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
extern "C" {
# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 401 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 187 "/usr/include/getopt.h" 3 4
}
# 891 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1036 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) throw ();
# 1160 "/usr/include/unistd.h" 3 4
}
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2

# 1 "/usr/include/inttypes.h" 1 3 4
# 28 "/usr/include/inttypes.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdint.h" 1 3 4
# 9 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 123 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdint.h" 2 3 4
# 29 "/usr/include/inttypes.h" 2 3 4
# 274 "/usr/include/inttypes.h" 3 4
extern "C" {




typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 298 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) throw () __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      throw () __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) throw ();


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) throw ();


extern intmax_t wcstoimax (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();


extern uintmax_t wcstoumax (__const wchar_t *__restrict __nptr,
       wchar_t ** __restrict __endptr, int __base)
     throw ();





extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
strtoimax (__const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (__const char *
          __restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
strtoumax (__const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (__const wchar_t * __restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
wcstoimax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (__const wchar_t *
          __restrict __nptr,
          wchar_t **
          __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
wcstoumax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 442 "/usr/include/inttypes.h" 3 4
}
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 1 3 4
# 34 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/syslimits.h" 1 3 4






# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 1 3 4
# 168 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 169 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 2 3 4
# 8 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/syslimits.h" 2 3 4
# 35 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 2 3 4
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2


# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4
extern "C" {



# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 47 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 69 "/usr/include/errno.h" 3 4
typedef int error_t;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2






 typedef struct
 {
   unsigned long key;
   unsigned long pos;
   unsigned long len;
 } video_index_entry;

 typedef struct
 {
    unsigned long pos;
    unsigned long len;
    unsigned long tot;
 } audio_index_entry;

 typedef struct track_s
 {

  long a_fmt;
  long a_chans;
  long a_rate;
  long a_bits;
  long mp3rate;

  long audio_strn;
  long audio_bytes;
  long audio_chunks;

  char audio_tag[4];
  long audio_posc;
  long audio_posb;

  long a_codech_off;
  long a_codecf_off;

  audio_index_entry *audio_index;

 } track_t;

 typedef struct
 {

   long fdes;
   long mode;

   long width;
   long height;
   double fps;
   char compressor[8];
   char compressor2[8];
   long video_strn;
   long video_frames;
   char video_tag[4];
   long video_pos;


   unsigned long max_len;

   track_t track[8];

   unsigned long pos;
   long n_idx;
   long max_idx;

   long v_codech_off;
   long v_codecf_off;

   unsigned char (*idx)[16];
   video_index_entry *video_index;

   unsigned long last_pos;
   unsigned long last_len;
   int must_use_index;
   unsigned long movi_start;

   int anum;
   int aptr;

 } avi_t;
# 195 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
 avi_t* AVI_open_output_file(char * filename);
 void AVI_set_video(avi_t *AVI, int width, int height, double fps, char *compressor);
 void AVI_set_audio(avi_t *AVI, int channels, long rate, int bits, int format, long mp3rate);
 int AVI_write_frame(avi_t *AVI, char *data, long bytes, int keyframe);
 int AVI_dup_frame(avi_t *AVI);
 int AVI_write_audio(avi_t *AVI, char *data, long bytes);
 int AVI_append_audio(avi_t *AVI, char *data, long bytes);
 long AVI_bytes_remain(avi_t *AVI);
 int AVI_close(avi_t *AVI);
 long AVI_bytes_written(avi_t *AVI);

 avi_t *AVI_open_input_file(char *filename, int getIndex);
 avi_t *AVI_open_fd(int fd, int getIndex);
 int avi_parse_input_file(avi_t *AVI, int getIndex);
 long AVI_audio_mp3rate(avi_t *AVI);
 long AVI_video_frames(avi_t *AVI);
 int AVI_video_width(avi_t *AVI);
 int AVI_video_height(avi_t *AVI);
 double AVI_frame_rate(avi_t *AVI);
 char* AVI_video_compressor(avi_t *AVI);

 int AVI_audio_channels(avi_t *AVI);
 int AVI_audio_bits(avi_t *AVI);
 int AVI_audio_format(avi_t *AVI);
 long AVI_audio_rate(avi_t *AVI);
 long AVI_audio_bytes(avi_t *AVI);
 long AVI_audio_chunks(avi_t *AVI);

 long AVI_max_video_chunk(avi_t *AVI);

 long AVI_frame_size(avi_t *AVI, long frame);
 long AVI_audio_size(avi_t *AVI, long frame);
 int AVI_seek_start(avi_t *AVI);
 int AVI_set_video_position(avi_t *AVI, long frame);
 long AVI_get_video_position(avi_t *AVI, long frame);
 long AVI_read_frame(avi_t *AVI, char *vidbuf, int *keyframe);

 int AVI_set_audio_position(avi_t *AVI, long byte);
 int AVI_set_audio_bitrate(avi_t *AVI, long bitrate);

 long AVI_read_audio(avi_t *AVI, char *audbuf, long bytes);

 long AVI_audio_codech_offset(avi_t *AVI);
 long AVI_audio_codecf_offset(avi_t *AVI);
 long AVI_video_codech_offset(avi_t *AVI);
 long AVI_video_codecf_offset(avi_t *AVI);

 int AVI_read_data(avi_t *AVI, char *vidbuf, long max_vidbuf,
           char *audbuf, long max_audbuf,
           long *len);

 void AVI_print_error(char *str);
 char *AVI_strerror();
 char *AVI_syserror();

 int AVI_scan(char *name);
 int AVI_dump(char *name, int mode);

 char *AVI_codec2str(short cc);
 int AVI_file_check(char *import_file);

 void AVI_info(avi_t *avifile);
 uint64_t AVI_max_size();
 int avi_update_header(avi_t *AVI);

 int AVI_set_audio_track(avi_t *AVI, int track);
 int AVI_get_audio_track(avi_t *AVI);
 int AVI_audio_tracks(avi_t *AVI);

 struct riff_struct
 {
   unsigned char id[4];
   unsigned long len;
   unsigned char wave_id[4];
 };


 struct chunk_struct
 {
  unsigned char id[4];
  unsigned long len;
 };

 struct common_struct
 {
  unsigned short wFormatTag;
  unsigned short wChannels;
  unsigned long dwSamplesPerSec;
  unsigned long dwAvgBytesPerSec;
  unsigned short wBlockAlign;
  unsigned short wBitsPerSample;
 };

 struct wave_header
 {
  struct riff_struct riff;
  struct chunk_struct format;
  struct common_struct common;
  struct chunk_struct data;
 };



 struct AVIStreamHeader {
   long fccType;
   long fccHandler;
   long dwFlags;
   long dwPriority;
   long dwInitialFrames;
   long dwScale;
   long dwRate;
   long dwStart;
   long dwLength;
   long dwSuggestedBufferSize;
   long dwQuality;
   long dwSampleSize;
 };




}
# 15 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.h" 1

extern "C" {







# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 1

extern "C" {
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 1 3 4
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2


# 1 "/usr/include/errno.h" 1 3 4
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
}
# 11 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.h" 2





float* chop_flip_image( char *image,
        int height,
        int width,
        int cropped,
        int scaled,
        int converted) ;

float* get_frame( avi_t* cell_file,
      int frame_num,
      int cropped,
      int scaled,
      int converted) ;


}
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
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
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h" 1







# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 1

extern "C" {
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include-fixed/limits.h" 1 3 4
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2


# 1 "/usr/include/errno.h" 1 3 4
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
}
# 9 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h" 2
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
typedef struct _public_struct{





 int tSize;
 int sSize;
 int maxMove;
 float alpha;

 int endoPoints;
 int d_endo_mem;
 int* d_endoRow;
 int* d_endoCol;
 int* d_tEndoRowLoc;
 int* d_tEndoColLoc;
 float* d_endoT;

 int epiPoints;
 int d_epi_mem;
 int* d_epiRow;
 int* d_epiCol;
 int* d_tEpiRowLoc;
 int* d_tEpiColLoc;
 float* d_epiT;

 int allPoints;






 int frames;
 int frame_no;
 float* d_frame;
 int frame_rows;
 int frame_cols;
 int frame_elem;
 int frame_mem;





 int in2_rows;
 int in2_cols;
 int in2_elem;
 int in2_mem;





 int in_mod_rows;
 int in_mod_cols;
 int in_mod_elem;
 int in_mod_mem;





 int ioffset;
 int joffset;

 int conv_rows;
 int conv_cols;
 int conv_elem;
 int conv_mem;
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 int in2_pad_add_rows;
 int in2_pad_add_cols;

 int in2_pad_rows;
 int in2_pad_cols;
 int in2_pad_elem;
 int in2_pad_mem;
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 int in2_pad_cumv_sel_rowlow;
 int in2_pad_cumv_sel_rowhig;
 int in2_pad_cumv_sel_collow;
 int in2_pad_cumv_sel_colhig;

 int in2_pad_cumv_sel2_rowlow;
 int in2_pad_cumv_sel2_rowhig;
 int in2_pad_cumv_sel2_collow;
 int in2_pad_cumv_sel2_colhig;

 int in2_sub_rows;
 int in2_sub_cols;
 int in2_sub_elem;
 int in2_sub_mem;





 int in2_sub_cumh_sel_rowlow;
 int in2_sub_cumh_sel_rowhig;
 int in2_sub_cumh_sel_collow;
 int in2_sub_cumh_sel_colhig;

 int in2_sub_cumh_sel2_rowlow;
 int in2_sub_cumh_sel2_rowhig;
 int in2_sub_cumh_sel2_collow;
 int in2_sub_cumh_sel2_colhig;

 int in2_sub2_sqr_rows;
 int in2_sub2_sqr_cols;
 int in2_sub2_sqr_elem;
 int in2_sub2_sqr_mem;
# 179 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 int tMask_rows;
 int tMask_cols;
 int tMask_elem;
 int tMask_mem;





 int mask_rows;
 int mask_cols;
 int mask_elem;
 int mask_mem;





 int mask_conv_rows;
 int mask_conv_cols;
 int mask_conv_elem;
 int mask_conv_mem;
 int mask_conv_ioffset;
 int mask_conv_joffset;

}public_struct;







typedef struct _private_struct{





 int point_no;
 int in_pointer;

 int* d_Row;
 int* d_Col;
 int* d_tRowLoc;
 int* d_tColLoc;
 float* d_T;





 float* d_in2;
 float* d_in2_sqr;





 float* d_in_mod;
 float* d_in_sqr;





 float* d_conv;
# 258 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 float* d_in2_pad;
# 267 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 float* d_in2_sub;





 float* d_in2_sub2_sqr;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 float* d_tMask;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h"
 float* d_mask_conv;





 float* in_partial_sum;
 float* in_sqr_partial_sum;
 float* par_max_val;
 int* par_max_coo;

} private_struct;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c" 2
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     struct timeval tp; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     struct timezone tzp; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_10, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_10, ____chimes_did_disable0, false); }
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
extern void kernel(public_struct pub,
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    private_struct *priv);
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
void write_data_npm( char* filename, int frameNo, int frames_processed, int endoPoints, int* input_a, int* input_b, int epiPoints, int* input_2a, int* input_2b);
void write_data_quick( char* filename, int frameNo, int frames_processed, int endoPoints, int* input_a, int* input_b, int epiPoints, int* input_2a, int* input_2b); void write_data( char* filename, int frameNo, int frames_processed, int endoPoints, int* input_a, int* input_b, int epiPoints, int* input_2a, int* input_2b);
void write_data_resumable( char* filename,
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frameNo,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frames_processed,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int endoPoints,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_a,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_b,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int epiPoints,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2a,
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2b){const int ____chimes_did_disable1 = new_stack((void *)(&write_data), "write_data", &____must_manage_write_data, 9, 0, (size_t)(762051829673678567UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(762051829673678571UL), (size_t)(762051829673678572UL), (size_t)(0UL), (size_t)(762051829673678574UL), (size_t)(762051829673678575UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 FILE *fid; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 int i; int j; ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 char c; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fid = fopen(filename, "w+");
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if( fid == __null ){
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf( "The file was not opened for writing\n" );
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  rm_stack(false, 0UL, "write_data", &____must_manage_write_data, ____alias_loc_id_11, ____chimes_did_disable1, false); return;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "Total AVI Frames: %d\n", frameNo);
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "Frames Processed: %d\n", frames_processed);
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "endoPoints: %d\n", endoPoints);
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "epiPoints: %d", epiPoints);
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(j=0; j<frames_processed;j++)
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   {
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n---Frame %d---",j);
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n--endo--\n",j);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<endoPoints; i++){
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_a[j+i*frameNo]);
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n");
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<endoPoints; i++){
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_b[j+i*frameNo]);
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n--epi--\n",j);
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<epiPoints; i++){
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_2a[j+i*frameNo]);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n");
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<epiPoints; i++){
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_2b[j+i*frameNo]);
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   }
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fclose(fid);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
rm_stack(false, 0UL, "write_data", &____must_manage_write_data, ____alias_loc_id_11, ____chimes_did_disable1, false); }
# 107 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 111 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 112 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 113 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
static int (*____chimes_extern_func_AVI_close)(avi_t *) = AVI_close;static avi_t *(*____chimes_extern_func_AVI_open_input_file)(char *, int) = AVI_open_input_file;static void (*____chimes_extern_func_AVI_print_error)(char *) = AVI_print_error;static long (*____chimes_extern_func_AVI_video_frames)(avi_t *) = AVI_video_frames;static int (*____chimes_extern_func_AVI_video_height)(avi_t *) = AVI_video_height;static int (*____chimes_extern_func_AVI_video_width)(avi_t *) = AVI_video_width;static float *(*____chimes_extern_func_get_frame)(avi_t *, int, int, int, int) = get_frame;static void (*____chimes_extern_func_kernel)(struct _public_struct, struct _private_struct *) = kernel;
int main_quick(int argc, char *argv []); int main(int argc, char *argv []);
int main_resumable(int argc, char *argv []){const int ____chimes_did_disable2 = new_stack((void *)(&main), "main", (int *)0, 2, 1, (size_t)(0UL), (size_t)(762051829673680207UL), "main|argv|0", &____must_checkpoint_main_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; int omp_num_threads;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
avi_t *d_frames;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
char *video_file_name;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
double start_time;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
private_struct priv[51];
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
public_struct pub;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
int frames_processed;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 register_stack_vars(7, "main|omp_num_threads|0", (int *)0x0, "i32", (void *)(&omp_num_threads), (size_t)4, 0, 0, 0, "main|d_frames|0", &____must_checkpoint_main_d_frames_0, "%struct.avi_t*", (void *)(&d_frames), (size_t)8, 1, 0, 0, "main|video_file_name|0", (int *)0x0, "i8*", (void *)(&video_file_name), (size_t)8, 1, 0, 0, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|priv|0", (int *)0x0, "[51 x %struct._private_struct]", (void *)(priv), (size_t)8160, 0, 0, 0, "main|pub|0", (int *)0x0, "%struct._public_struct = type { i32, i32, i32, float, i32, i32, i32*, i32*, i32*, i32*, float*, i32, i32, i32*, i32*, i32*, i32*, float*, i32, i32, i32, float*, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }", (void *)(&pub), (size_t)384, 0, 1, 11, (int)__builtin_offsetof(struct _public_struct, d_endoRow), (int)__builtin_offsetof(struct _public_struct, d_endoCol), (int)__builtin_offsetof(struct _public_struct, d_tEndoRowLoc), (int)__builtin_offsetof(struct _public_struct, d_tEndoColLoc), (int)__builtin_offsetof(struct _public_struct, d_endoT), (int)__builtin_offsetof(struct _public_struct, d_epiRow), (int)__builtin_offsetof(struct _public_struct, d_epiCol), (int)__builtin_offsetof(struct _public_struct, d_tEpiRowLoc), (int)__builtin_offsetof(struct _public_struct, d_tEpiColLoc), (int)__builtin_offsetof(struct _public_struct, d_epiT), (int)__builtin_offsetof(struct _public_struct, d_frame), "main|frames_processed|0", (int *)0x0, "i32", (void *)(&frames_processed), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } default: { chimes_error(); } } } ; ;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 int i; ;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ;
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 128 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
        call_lbl_0: start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if(argc!=4){
# 137 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf("ERROR: usage: heartwall <inputfile> <num of frames> <num of threads>\n");
# 138 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  exit(1);
# 139 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 video_file_name = argv[1];
# 143 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     call_lbl_1: d_frames = ((avi_t*)(____chimes_does_checkpoint_AVI_open_input_file_npm ? ( ({ calling((void*)AVI_open_input_file, 1, ____alias_loc_id_4, 762051829673680010UL, 2, (size_t)(762051829673680000UL), (size_t)(0UL)); (AVI_open_input_file)(video_file_name, 1); }) ) : (({ calling_npm("AVI_open_input_file", ____alias_loc_id_4); (*____chimes_extern_func_AVI_open_input_file)(video_file_name, 1); })))) ;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if (d_frames == __null) {
# 146 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      call_lbl_2: (____chimes_does_checkpoint_AVI_print_error_npm ? ( ({ char * ____chimes_arg2; if (!____chimes_replaying) { ____chimes_arg2 = ((char *)"Error with AVI_open_input_file"); } calling((void*)AVI_print_error, 2, ____alias_loc_id_1, 0UL, 1, (size_t)(762051829673680249UL)); (AVI_print_error)(____chimes_arg2); }) ) : (({ calling_npm("AVI_print_error", ____alias_loc_id_1); (*____chimes_extern_func_AVI_print_error)((char *) "Error with AVI_open_input_file"); })));
# 147 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (-1); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 149 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 150 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 alias_group_changed(____alias_loc_id_7); call_lbl_3: pub.frames = (____chimes_does_checkpoint_AVI_video_frames_npm ? ( ({ calling((void*)AVI_video_frames, 3, ____alias_loc_id_7, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_video_frames)(d_frames); }) ) : (({ calling_npm("AVI_video_frames", ____alias_loc_id_7); (*____chimes_extern_func_AVI_video_frames)(d_frames); })));
# 152 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  call_lbl_4: pub.frame_rows = (____chimes_does_checkpoint_AVI_video_height_npm ? ( ({ calling((void*)AVI_video_height, 4, ____alias_loc_id_5, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_video_height)(d_frames); }) ) : (({ calling_npm("AVI_video_height", ____alias_loc_id_5); (*____chimes_extern_func_AVI_video_height)(d_frames); })));
# 153 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  call_lbl_5: pub.frame_cols = (____chimes_does_checkpoint_AVI_video_width_npm ? ( ({ calling((void*)AVI_video_width, 5, ____alias_loc_id_2, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_video_width)(d_frames); }) ) : (({ calling_npm("AVI_video_width", ____alias_loc_id_2); (*____chimes_extern_func_AVI_video_width)(d_frames); })));
# 154 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.frame_elem = pub.frame_rows * pub.frame_cols;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.frame_mem = sizeof(float) * pub.frame_elem;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     call_lbl_6: (____chimes_does_checkpoint_AVI_close_npm ? ( ({ calling((void*)AVI_close, 6, ____alias_loc_id_0, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_close)(d_frames); }) ) : (({ calling_npm("AVI_close", ____alias_loc_id_0); (*____chimes_extern_func_AVI_close)(d_frames); })));
# 158 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 frames_processed = atoi(argv[2]);
# 165 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if(frames_processed<0 || frames_processed>pub.frames){
# 166 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf("ERROR: %d is an incorrect number of frames specified, select in the range of 0-%d\n", frames_processed, pub.frames);
# 167 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ;
# 168 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 170 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 omp_num_threads = atoi(argv[3]);
# 172 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if (omp_num_threads <=0){
# 173 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    printf ("num of threads must be a positive integer");
# 174 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ;
# 175 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 176 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 177 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 printf("num of threads: %d\n", omp_num_threads);
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.endoPoints = 20;
# 188 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endo_mem = sizeof(int) * pub.endoPoints;
# 189 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 190 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 0] = 369;
# 191 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 1] = 400;
# 192 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 2] = 429;
# 193 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 3] = 452;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 4] = 476;
# 195 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 5] = 486;
# 196 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 6] = 479;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 7] = 458;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 8] = 433;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 9] = 404;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[10] = 374;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[11] = 346;
# 202 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[12] = 318;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[13] = 294;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[14] = 277;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[15] = 269;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[16] = 275;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[17] = 287;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[18] = 311;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[19] = 339;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 0] = 408;
# 212 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 1] = 406;
# 213 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 2] = 397;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 3] = 383;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 4] = 354;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 5] = 322;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 6] = 294;
# 218 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 7] = 270;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 8] = 250;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 9] = 237;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[10] = 235;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[11] = 241;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[12] = 254;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[13] = 273;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[14] = 300;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[15] = 328;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[16] = 356;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[17] = 383;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[18] = 401;
# 230 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[19] = 411;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEndoRowLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEndoColLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 234 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 237 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 238 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.epiPoints = 31;
# 239 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epi_mem = sizeof(int) * pub.epiPoints;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 0] = 390;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 1] = 419;
# 243 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 2] = 448;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 3] = 474;
# 245 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 4] = 501;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 5] = 519;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 6] = 535;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 7] = 542;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 8] = 543;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 9] = 538;
# 251 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[10] = 528;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[11] = 511;
# 253 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[12] = 491;
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[13] = 466;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[14] = 438;
# 256 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[15] = 406;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[16] = 376;
# 258 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[17] = 347;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[18] = 318;
# 260 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[19] = 291;
# 261 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[20] = 275;
# 262 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[21] = 259;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[22] = 256;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[23] = 252;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[24] = 252;
# 266 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[25] = 257;
# 267 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[26] = 266;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[27] = 283;
# 269 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[28] = 305;
# 270 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[29] = 331;
# 271 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[30] = 360;
# 272 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 0] = 457;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 1] = 454;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 2] = 446;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 3] = 431;
# 277 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 4] = 411;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 5] = 388;
# 279 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 6] = 361;
# 280 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 7] = 331;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 8] = 301;
# 282 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 9] = 273;
# 283 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[10] = 243;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[11] = 218;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[12] = 196;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[13] = 178;
# 287 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[14] = 166;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[15] = 157;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[16] = 155;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[17] = 165;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[18] = 177;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[19] = 197;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[20] = 218;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[21] = 248;
# 295 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[22] = 276;
# 296 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[23] = 304;
# 297 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[24] = 333;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[25] = 361;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[26] = 391;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[27] = 415;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[28] = 434;
# 302 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[29] = 448;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[30] = 455;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEpiRowLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEpiColLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 306 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 307 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 308 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 310 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 311 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.allPoints = 51;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 313 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 315 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 317 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tSize = 25;
# 318 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.sSize = 40;
# 319 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.maxMove = 10;
# 320 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.alpha = 0.87;
# 321 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 322 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 325 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 326 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 327 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_partial_sum = (float *) ({ void *____chimes_tmp_ptr = malloc((sizeof(float) * 2 * pub.tSize + 1) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(float) * 2*pub.tSize+1, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_sqr_partial_sum = (float *) ({ void *____chimes_tmp_ptr = malloc((sizeof(float) * 2 * pub.tSize + 1) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(float) * 2*pub.tSize+1, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 329 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].par_max_val = (float *) ({ void *____chimes_tmp_ptr = malloc((sizeof(float) * (2 * pub.tSize + 2 * pub.sSize + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(float) * (2*pub.tSize+2*pub.sSize+1), 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 330 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].par_max_coo = (int *) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * (2 * pub.tSize + 2 * pub.sSize + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(int) * (2*pub.tSize+2*pub.sSize+1), 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 331 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 332 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 333 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 334 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 335 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 336 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 337 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_rows = 2 * pub.sSize + 1;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_cols = 2 * pub.sSize + 1;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_elem = pub.in2_rows * pub.in2_cols;
# 340 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_mem = sizeof(float) * pub.in2_elem;
# 341 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 342 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 343 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2 = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_sqr = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 345 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 346 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 349 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 350 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 351 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_rows = pub.tSize+1+pub.tSize;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_cols = pub.in_mod_rows;
# 353 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_elem = pub.in_mod_rows * pub.in_mod_cols;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_mem = sizeof(float) * pub.in_mod_elem;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 356 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 357 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in_mod = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 358 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in_sqr = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 360 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 362 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 365 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoT = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem * pub.endoPoints) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem * pub.endoPoints, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiT = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem * pub.epiPoints) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem * pub.epiPoints, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 368 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 369 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 370 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 371 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 372 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.endoPoints; i++){
# 373 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].point_no = i;
# 374 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_pointer = priv[i].point_no * pub.in_mod_elem;
# 375 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Row = pub.d_endoRow;
# 376 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Col = pub.d_endoCol;
# 377 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tRowLoc = pub.d_tEndoRowLoc;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tColLoc = pub.d_tEndoColLoc;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_T = pub.d_endoT;
# 380 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 381 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 382 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=pub.endoPoints; i<pub.allPoints; i++){
# 383 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].point_no = i-pub.endoPoints;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_pointer = priv[i].point_no * pub.in_mod_elem;
# 385 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Row = pub.d_epiRow;
# 386 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Col = pub.d_epiCol;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tRowLoc = pub.d_tEpiRowLoc;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tColLoc = pub.d_tEpiColLoc;
# 389 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_T = pub.d_epiT;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 391 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 392 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 393 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 394 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 395 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 396 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.ioffset = 0;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.joffset = 0;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_rows = pub.in_mod_rows + pub.in2_rows - 1;
# 399 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_cols = pub.in_mod_cols + pub.in2_cols - 1;
# 400 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_elem = pub.conv_rows * pub.conv_cols;
# 401 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_mem = sizeof(float) * pub.conv_elem;
# 402 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 404 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_conv = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.conv_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.conv_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 405 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 418 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 418 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_add_rows = pub.in_mod_rows;
# 419 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_add_cols = pub.in_mod_cols;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_rows = pub.in2_rows + 2*pub.in2_pad_add_rows;
# 421 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cols = pub.in2_cols + 2*pub.in2_pad_add_cols;
# 422 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_elem = pub.in2_pad_rows * pub.in2_pad_cols;
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_mem = sizeof(float) * pub.in2_pad_elem;
# 424 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 425 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 426 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_pad = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_pad_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_pad_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 427 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_rowlow = 1 + pub.in_mod_rows;
# 437 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_rowhig = pub.in2_pad_rows - 1;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_collow = 1;
# 439 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_colhig = pub.in2_pad_cols;
# 440 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_rowlow = 1;
# 441 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_rowhig = pub.in2_pad_rows - pub.in_mod_rows - 1;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_collow = 1;
# 443 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_colhig = pub.in2_pad_cols;
# 444 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_rows = pub.in2_pad_cumv_sel_rowhig - pub.in2_pad_cumv_sel_rowlow + 1;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cols = pub.in2_pad_cumv_sel_colhig - pub.in2_pad_cumv_sel_collow + 1;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_elem = pub.in2_sub_rows * pub.in2_sub_cols;
# 447 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_mem = sizeof(float) * pub.in2_sub_elem;
# 448 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 449 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 450 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_sub = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_sub_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_sub_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 452 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 453 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 454 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 456 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 457 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_rowlow = 1;
# 458 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_rowhig = pub.in2_sub_rows;
# 459 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_collow = 1 + pub.in_mod_cols;
# 460 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_colhig = pub.in2_sub_cols - 1;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_rowlow = 1;
# 462 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_rowhig = pub.in2_sub_rows;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_collow = 1;
# 464 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_colhig = pub.in2_sub_cols - pub.in_mod_cols - 1;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_rows = pub.in2_sub_cumh_sel_rowhig - pub.in2_sub_cumh_sel_rowlow + 1;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_cols = pub.in2_sub_cumh_sel_colhig - pub.in2_sub_cumh_sel_collow + 1;
# 467 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_elem = pub.in2_sub2_sqr_rows * pub.in2_sub2_sqr_cols;
# 468 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_mem = sizeof(float) * pub.in2_sub2_sqr_elem;
# 469 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 470 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_sub2_sqr = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_sub2_sqr_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_sub2_sqr_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 472 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_rows = pub.in_mod_rows + (pub.sSize+1+pub.sSize) - 1;
# 501 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_cols = pub.tMask_rows;
# 502 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_elem = pub.tMask_rows * pub.tMask_cols;
# 503 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_mem = sizeof(float) * pub.tMask_elem;
# 504 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 505 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 506 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tMask = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.tMask_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.tMask_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 507 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 508 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 509 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 510 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 511 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 512 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 513 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_rows = pub.maxMove;
# 514 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_cols = pub.mask_rows;
# 515 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_elem = pub.mask_rows * pub.mask_cols;
# 516 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_mem = sizeof(float) * pub.mask_elem;
# 517 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 518 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 519 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 520 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 521 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 522 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_rows = pub.tMask_rows;
# 523 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_cols = pub.tMask_cols;
# 524 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_elem = pub.mask_conv_rows * pub.mask_conv_cols;
# 525 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_mem = sizeof(float) * pub.mask_conv_elem;
# 526 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_ioffset = (pub.mask_rows-1)/2;
# 527 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if((pub.mask_rows-1) % 2 > 0.5){
# 528 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  pub.mask_conv_ioffset = pub.mask_conv_ioffset + 1;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 530 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_joffset = (pub.mask_cols-1)/2;
# 531 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if((pub.mask_cols-1) % 2 > 0.5){
# 532 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  pub.mask_conv_joffset = pub.mask_conv_joffset + 1;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 534 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 535 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 536 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_mask_conv = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.mask_conv_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.mask_conv_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 537 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 538 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 541 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 543 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 printf("frame progress: ");
# 544 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fflush(__null);
# 545 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 546 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 547 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 549 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(pub.frame_no=0; pub.frame_no<frames_processed; pub.frame_no++){
# 551 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 552 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 555 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 556 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 557 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
         call_lbl_7: d_frames = (avi_t*)(____chimes_does_checkpoint_AVI_open_input_file_npm ? ( ({ calling((void*)AVI_open_input_file, 7, ____alias_loc_id_9, 762051829673680010UL, 2, (size_t)(762051829673680000UL), (size_t)(0UL)); (AVI_open_input_file)(video_file_name, 1); }) ) : (({ calling_npm("AVI_open_input_file", ____alias_loc_id_9); (*____chimes_extern_func_AVI_open_input_file)(video_file_name, 1); })));
# 558 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
        ((d_frames) ? static_cast<void> (0) : __assert_fail ("d_frames", "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c", 558, __PRETTY_FUNCTION__));
# 559 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   call_lbl_8: pub.d_frame = (____chimes_does_checkpoint_get_frame_npm ? ( ({ int ____chimes_arg10; if (!____chimes_replaying) { ____chimes_arg10 = (pub.frame_no); } calling((void*)get_frame, 8, ____alias_loc_id_8, 762051829673679219UL, 5, (size_t)(762051829673680010UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (get_frame)(d_frames, ____chimes_arg10, 0, 0, 1); }) ) : (({ calling_npm("get_frame", ____alias_loc_id_8); (*____chimes_extern_func_get_frame)(d_frames, pub.frame_no, 0, 0, 1); })));
# 564 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
         call_lbl_9: (____chimes_does_checkpoint_AVI_close_npm ? ( ({ calling((void*)AVI_close, 9, ____alias_loc_id_6, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_close)(d_frames); }) ) : (({ calling_npm("AVI_close", ____alias_loc_id_6); (*____chimes_extern_func_AVI_close)(d_frames); })));
# 565 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 566 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 568 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 569 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 570 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 571 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  omp_set_num_threads(omp_num_threads);
# 572 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 573 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 574 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 575 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
         call_lbl_10: (____chimes_does_checkpoint_kernel_npm ? ( ({ public_struct ____chimes_arg15; if (!____chimes_replaying) { ____chimes_arg15 = (pub); } calling((void*)kernel, 10, ____alias_loc_id_3, 0UL, 2, (size_t)(762051829673678596UL), (size_t)(762051829673678588UL)); (kernel)(____chimes_arg15, priv); }) ) : (({ calling_npm("kernel", ____alias_loc_id_3); (*____chimes_extern_func_kernel)(pub, priv); })));
# 587 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 587 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)pub.d_frame) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_frame) - sizeof(void *))); }) ;
# 588 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 589 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 590 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 593 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf("%d ", pub.frame_no);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  fflush(__null);
# 595 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 596 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 597 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     call_lbl_11: checkpoint_transformed(11, 0);
# 598 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 600 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 601 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 602 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 603 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 605 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 606 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 printf("\n");
# 607 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fflush(__null);
# 608 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 609 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     double end_time; call_lbl_12: end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    printf("execution took %f s\n", end_time - start_time);
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_endoRow) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_endoRow) - sizeof(void *))); }) ;
# 639 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_endoCol) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_endoCol) - sizeof(void *))); }) ;
# 640 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEndoRowLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEndoRowLoc) - sizeof(void *))); }) ;
# 641 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEndoColLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEndoColLoc) - sizeof(void *))); }) ;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_endoT) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_endoT) - sizeof(void *))); }) ;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 644 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_epiRow) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_epiRow) - sizeof(void *))); }) ;
# 645 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_epiCol) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_epiCol) - sizeof(void *))); }) ;
# 646 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEpiRowLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEpiRowLoc) - sizeof(void *))); }) ;
# 647 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEpiColLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEpiColLoc) - sizeof(void *))); }) ;
# 648 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_epiT) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_epiT) - sizeof(void *))); }) ;
# 649 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 650 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 651 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 652 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 654 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 655 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].in_partial_sum) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].in_partial_sum) - sizeof(void *))); }) ;
# 656 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].in_sqr_partial_sum) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].in_sqr_partial_sum) - sizeof(void *))); }) ;
# 657 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].par_max_val) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].par_max_val) - sizeof(void *))); }) ;
# 658 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].par_max_coo) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].par_max_coo) - sizeof(void *))); }) ;
# 659 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 660 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2) - sizeof(void *))); }) ;
# 661 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_sqr) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_sqr) - sizeof(void *))); }) ;
# 662 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 663 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in_mod) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in_mod) - sizeof(void *))); }) ;
# 664 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in_sqr) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in_sqr) - sizeof(void *))); }) ;
# 665 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 666 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_conv) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_conv) - sizeof(void *))); }) ;
# 667 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 668 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_pad) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_pad) - sizeof(void *))); }) ;
# 669 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 670 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_sub) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_sub) - sizeof(void *))); }) ;
# 671 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 672 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_sub2_sqr) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_sub2_sqr) - sizeof(void *))); }) ;
# 673 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 674 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_tMask) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_tMask) - sizeof(void *))); }) ;
# 675 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_mask_conv) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_mask_conv) - sizeof(void *))); }) ;
# 676 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 677 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_4; ;
# 678 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); }
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; ; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     struct timeval tp; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     struct timezone tzp; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_10, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_10, ____chimes_did_disable0, false); }

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
void write_data_quick( char* filename,
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frameNo,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frames_processed,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int endoPoints,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_a,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_b,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int epiPoints,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2a,
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2b){const int ____chimes_did_disable1 = new_stack((void *)(&write_data), "write_data", &____must_manage_write_data, 9, 0, (size_t)(762051829673678567UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(762051829673678571UL), (size_t)(762051829673678572UL), (size_t)(0UL), (size_t)(762051829673678574UL), (size_t)(762051829673678575UL)) ; ; ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 FILE *fid; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 int i; int j; ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 char c; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fid = fopen(filename, "w+");
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if( fid == __null ){
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf( "The file was not opened for writing\n" );
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  rm_stack(false, 0UL, "write_data", &____must_manage_write_data, ____alias_loc_id_11, ____chimes_did_disable1, false); return;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "Total AVI Frames: %d\n", frameNo);
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "Frames Processed: %d\n", frames_processed);
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "endoPoints: %d\n", endoPoints);
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "epiPoints: %d", epiPoints);
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(j=0; j<frames_processed;j++)
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   {
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n---Frame %d---",j);
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n--endo--\n",j);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<endoPoints; i++){
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_a[j+i*frameNo]);
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n");
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<endoPoints; i++){
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_b[j+i*frameNo]);
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n--epi--\n",j);
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<epiPoints; i++){
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_2a[j+i*frameNo]);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n");
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<epiPoints; i++){
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_2b[j+i*frameNo]);
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   }
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fclose(fid);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
rm_stack(false, 0UL, "write_data", &____must_manage_write_data, ____alias_loc_id_11, ____chimes_did_disable1, false); }

void write_data( char* filename,
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frameNo,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frames_processed,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int endoPoints,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_a,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_b,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int epiPoints,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2a,
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2b) { (____chimes_replaying ? write_data_resumable(filename, frameNo, frames_processed, endoPoints, input_a, input_b, epiPoints, input_2a, input_2b) : write_data_quick(filename, frameNo, frames_processed, endoPoints, input_a, input_b, epiPoints, input_2a, input_2b)); }
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
int main_quick(int argc, char *argv []){const int ____chimes_did_disable2 = new_stack((void *)(&main), "main", (int *)0, 2, 1, (size_t)(0UL), (size_t)(762051829673680207UL), "main|argv|0", &____must_checkpoint_main_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; int omp_num_threads;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
avi_t *d_frames;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
char *video_file_name;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
double start_time;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
private_struct priv[51];
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
public_struct pub;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
int frames_processed;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 register_stack_vars(7, "main|omp_num_threads|0", (int *)0x0, "i32", (void *)(&omp_num_threads), (size_t)4, 0, 0, 0, "main|d_frames|0", &____must_checkpoint_main_d_frames_0, "%struct.avi_t*", (void *)(&d_frames), (size_t)8, 1, 0, 0, "main|video_file_name|0", (int *)0x0, "i8*", (void *)(&video_file_name), (size_t)8, 1, 0, 0, "main|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "main|priv|0", (int *)0x0, "[51 x %struct._private_struct]", (void *)(priv), (size_t)8160, 0, 0, 0, "main|pub|0", (int *)0x0, "%struct._public_struct = type { i32, i32, i32, float, i32, i32, i32*, i32*, i32*, i32*, float*, i32, i32, i32*, i32*, i32*, i32*, float*, i32, i32, i32, float*, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }", (void *)(&pub), (size_t)384, 0, 1, 11, (int)__builtin_offsetof(struct _public_struct, d_endoRow), (int)__builtin_offsetof(struct _public_struct, d_endoCol), (int)__builtin_offsetof(struct _public_struct, d_tEndoRowLoc), (int)__builtin_offsetof(struct _public_struct, d_tEndoColLoc), (int)__builtin_offsetof(struct _public_struct, d_endoT), (int)__builtin_offsetof(struct _public_struct, d_epiRow), (int)__builtin_offsetof(struct _public_struct, d_epiCol), (int)__builtin_offsetof(struct _public_struct, d_tEpiRowLoc), (int)__builtin_offsetof(struct _public_struct, d_tEpiColLoc), (int)__builtin_offsetof(struct _public_struct, d_epiT), (int)__builtin_offsetof(struct _public_struct, d_frame), "main|frames_processed|0", (int *)0x0, "i32", (void *)(&frames_processed), (size_t)4, 0, 0, 0); ; ;
# 115 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 int i; ;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ;
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 128 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 130 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
        call_lbl_0: start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 136 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if(argc!=4){
# 137 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf("ERROR: usage: heartwall <inputfile> <num of frames> <num of threads>\n");
# 138 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  exit(1);
# 139 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ;
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 video_file_name = argv[1];
# 143 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     call_lbl_1: d_frames = ((avi_t*)(____chimes_does_checkpoint_AVI_open_input_file_npm ? ( ({ calling((void*)AVI_open_input_file, 1, ____alias_loc_id_4, 762051829673680010UL, 2, (size_t)(762051829673680000UL), (size_t)(0UL)); (AVI_open_input_file)(video_file_name, 1); }) ) : (({ calling_npm("AVI_open_input_file", ____alias_loc_id_4); (*____chimes_extern_func_AVI_open_input_file)(video_file_name, 1); })))) ;
# 145 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if (d_frames == __null) {
# 146 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      call_lbl_2: (____chimes_does_checkpoint_AVI_print_error_npm ? ( ({ calling((void*)AVI_print_error, 2, ____alias_loc_id_1, 0UL, 1, (size_t)(762051829673680249UL)); (AVI_print_error)((char *)"Error with AVI_open_input_file"); }) ) : (({ calling_npm("AVI_print_error", ____alias_loc_id_1); (*____chimes_extern_func_AVI_print_error)((char *) "Error with AVI_open_input_file"); })));
# 147 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (-1); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 148 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 149 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 150 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 alias_group_changed(____alias_loc_id_7); call_lbl_3: pub.frames = (____chimes_does_checkpoint_AVI_video_frames_npm ? ( ({ calling((void*)AVI_video_frames, 3, ____alias_loc_id_7, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_video_frames)(d_frames); }) ) : (({ calling_npm("AVI_video_frames", ____alias_loc_id_7); (*____chimes_extern_func_AVI_video_frames)(d_frames); })));
# 152 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  call_lbl_4: pub.frame_rows = (____chimes_does_checkpoint_AVI_video_height_npm ? ( ({ calling((void*)AVI_video_height, 4, ____alias_loc_id_5, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_video_height)(d_frames); }) ) : (({ calling_npm("AVI_video_height", ____alias_loc_id_5); (*____chimes_extern_func_AVI_video_height)(d_frames); })));
# 153 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  call_lbl_5: pub.frame_cols = (____chimes_does_checkpoint_AVI_video_width_npm ? ( ({ calling((void*)AVI_video_width, 5, ____alias_loc_id_2, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_video_width)(d_frames); }) ) : (({ calling_npm("AVI_video_width", ____alias_loc_id_2); (*____chimes_extern_func_AVI_video_width)(d_frames); })));
# 154 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.frame_elem = pub.frame_rows * pub.frame_cols;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.frame_mem = sizeof(float) * pub.frame_elem;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     call_lbl_6: (____chimes_does_checkpoint_AVI_close_npm ? ( ({ calling((void*)AVI_close, 6, ____alias_loc_id_0, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_close)(d_frames); }) ) : (({ calling_npm("AVI_close", ____alias_loc_id_0); (*____chimes_extern_func_AVI_close)(d_frames); })));
# 158 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 160 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 frames_processed = atoi(argv[2]);
# 165 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if(frames_processed<0 || frames_processed>pub.frames){
# 166 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf("ERROR: %d is an incorrect number of frames specified, select in the range of 0-%d\n", frames_processed, pub.frames);
# 167 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ;
# 168 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 170 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ;
# 171 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 omp_num_threads = atoi(argv[3]);
# 172 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if (omp_num_threads <=0){
# 173 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    printf ("num of threads must be a positive integer");
# 174 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ;
# 175 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 176 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 177 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 printf("num of threads: %d\n", omp_num_threads);
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.endoPoints = 20;
# 188 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endo_mem = sizeof(int) * pub.endoPoints;
# 189 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 190 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 0] = 369;
# 191 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 1] = 400;
# 192 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 2] = 429;
# 193 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 3] = 452;
# 194 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 4] = 476;
# 195 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 5] = 486;
# 196 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 6] = 479;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 7] = 458;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 8] = 433;
# 199 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[ 9] = 404;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[10] = 374;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[11] = 346;
# 202 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[12] = 318;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[13] = 294;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[14] = 277;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[15] = 269;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[16] = 275;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[17] = 287;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[18] = 311;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoRow[19] = 339;
# 210 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 0] = 408;
# 212 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 1] = 406;
# 213 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 2] = 397;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 3] = 383;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 4] = 354;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 5] = 322;
# 217 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 6] = 294;
# 218 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 7] = 270;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 8] = 250;
# 220 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[ 9] = 237;
# 221 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[10] = 235;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[11] = 241;
# 223 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[12] = 254;
# 224 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[13] = 273;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[14] = 300;
# 226 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[15] = 328;
# 227 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[16] = 356;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[17] = 383;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[18] = 401;
# 230 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoCol[19] = 411;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEndoRowLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEndoColLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_endo_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_endo_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 234 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 237 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 238 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.epiPoints = 31;
# 239 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epi_mem = sizeof(int) * pub.epiPoints;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 0] = 390;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 1] = 419;
# 243 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 2] = 448;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 3] = 474;
# 245 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 4] = 501;
# 246 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 5] = 519;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 6] = 535;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 7] = 542;
# 249 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 8] = 543;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[ 9] = 538;
# 251 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[10] = 528;
# 252 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[11] = 511;
# 253 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[12] = 491;
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[13] = 466;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[14] = 438;
# 256 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[15] = 406;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[16] = 376;
# 258 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[17] = 347;
# 259 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[18] = 318;
# 260 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[19] = 291;
# 261 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[20] = 275;
# 262 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[21] = 259;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[22] = 256;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[23] = 252;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[24] = 252;
# 266 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[25] = 257;
# 267 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[26] = 266;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[27] = 283;
# 269 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[28] = 305;
# 270 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[29] = 331;
# 271 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiRow[30] = 360;
# 272 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 0] = 457;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 1] = 454;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 2] = 446;
# 276 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 3] = 431;
# 277 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 4] = 411;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 5] = 388;
# 279 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 6] = 361;
# 280 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 7] = 331;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 8] = 301;
# 282 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[ 9] = 273;
# 283 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[10] = 243;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[11] = 218;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[12] = 196;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[13] = 178;
# 287 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[14] = 166;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[15] = 157;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[16] = 155;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[17] = 165;
# 291 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[18] = 177;
# 292 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[19] = 197;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[20] = 218;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[21] = 248;
# 295 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[22] = 276;
# 296 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[23] = 304;
# 297 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[24] = 333;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[25] = 361;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[26] = 391;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[27] = 415;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[28] = 434;
# 302 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[29] = 448;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiCol[30] = 455;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEpiRowLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_tEpiColLoc = (int *) ({ void *____chimes_tmp_ptr = malloc((pub.d_epi_mem * pub.frames) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.d_epi_mem * pub.frames, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 306 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 307 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 308 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 309 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 310 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 311 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.allPoints = 51;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 313 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 315 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 317 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tSize = 25;
# 318 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.sSize = 40;
# 319 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.maxMove = 10;
# 320 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.alpha = 0.87;
# 321 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 322 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 325 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 326 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 327 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_partial_sum = (float *) ({ void *____chimes_tmp_ptr = malloc((sizeof(float) * 2 * pub.tSize + 1) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(float) * 2*pub.tSize+1, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_sqr_partial_sum = (float *) ({ void *____chimes_tmp_ptr = malloc((sizeof(float) * 2 * pub.tSize + 1) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(float) * 2*pub.tSize+1, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 329 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].par_max_val = (float *) ({ void *____chimes_tmp_ptr = malloc((sizeof(float) * (2 * pub.tSize + 2 * pub.sSize + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(float) * (2*pub.tSize+2*pub.sSize+1), 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 330 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].par_max_coo = (int *) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * (2 * pub.tSize + 2 * pub.sSize + 1)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(int) * (2*pub.tSize+2*pub.sSize+1), 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 331 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 332 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 333 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 334 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 335 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 336 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 337 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_rows = 2 * pub.sSize + 1;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_cols = 2 * pub.sSize + 1;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_elem = pub.in2_rows * pub.in2_cols;
# 340 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_mem = sizeof(float) * pub.in2_elem;
# 341 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 342 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 343 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2 = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_sqr = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 345 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 346 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 349 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 350 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 351 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_rows = pub.tSize+1+pub.tSize;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_cols = pub.in_mod_rows;
# 353 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_elem = pub.in_mod_rows * pub.in_mod_cols;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in_mod_mem = sizeof(float) * pub.in_mod_elem;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 356 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 357 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in_mod = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 358 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in_sqr = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 360 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 362 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 365 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_endoT = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem * pub.endoPoints) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem * pub.endoPoints, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.d_epiT = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in_mod_mem * pub.epiPoints) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in_mod_mem * pub.epiPoints, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 368 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 369 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 370 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 371 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 372 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.endoPoints; i++){
# 373 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].point_no = i;
# 374 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_pointer = priv[i].point_no * pub.in_mod_elem;
# 375 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Row = pub.d_endoRow;
# 376 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Col = pub.d_endoCol;
# 377 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tRowLoc = pub.d_tEndoRowLoc;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tColLoc = pub.d_tEndoColLoc;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_T = pub.d_endoT;
# 380 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 381 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 382 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=pub.endoPoints; i<pub.allPoints; i++){
# 383 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].point_no = i-pub.endoPoints;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].in_pointer = priv[i].point_no * pub.in_mod_elem;
# 385 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Row = pub.d_epiRow;
# 386 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_Col = pub.d_epiCol;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tRowLoc = pub.d_tEpiRowLoc;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tColLoc = pub.d_tEpiColLoc;
# 389 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_T = pub.d_epiT;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 391 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 392 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 393 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 394 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 395 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 396 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.ioffset = 0;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.joffset = 0;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_rows = pub.in_mod_rows + pub.in2_rows - 1;
# 399 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_cols = pub.in_mod_cols + pub.in2_cols - 1;
# 400 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_elem = pub.conv_rows * pub.conv_cols;
# 401 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.conv_mem = sizeof(float) * pub.conv_elem;
# 402 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 404 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_conv = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.conv_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.conv_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 405 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 418 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 418 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_add_rows = pub.in_mod_rows;
# 419 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_add_cols = pub.in_mod_cols;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_rows = pub.in2_rows + 2*pub.in2_pad_add_rows;
# 421 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cols = pub.in2_cols + 2*pub.in2_pad_add_cols;
# 422 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_elem = pub.in2_pad_rows * pub.in2_pad_cols;
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_mem = sizeof(float) * pub.in2_pad_elem;
# 424 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 425 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 426 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_pad = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_pad_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_pad_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 427 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_rowlow = 1 + pub.in_mod_rows;
# 437 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_rowhig = pub.in2_pad_rows - 1;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_collow = 1;
# 439 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel_colhig = pub.in2_pad_cols;
# 440 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_rowlow = 1;
# 441 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_rowhig = pub.in2_pad_rows - pub.in_mod_rows - 1;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_collow = 1;
# 443 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_pad_cumv_sel2_colhig = pub.in2_pad_cols;
# 444 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_rows = pub.in2_pad_cumv_sel_rowhig - pub.in2_pad_cumv_sel_rowlow + 1;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cols = pub.in2_pad_cumv_sel_colhig - pub.in2_pad_cumv_sel_collow + 1;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_elem = pub.in2_sub_rows * pub.in2_sub_cols;
# 447 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_mem = sizeof(float) * pub.in2_sub_elem;
# 448 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 449 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 450 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_sub = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_sub_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_sub_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 452 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 453 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 454 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 456 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 457 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_rowlow = 1;
# 458 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_rowhig = pub.in2_sub_rows;
# 459 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_collow = 1 + pub.in_mod_cols;
# 460 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel_colhig = pub.in2_sub_cols - 1;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_rowlow = 1;
# 462 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_rowhig = pub.in2_sub_rows;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_collow = 1;
# 464 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub_cumh_sel2_colhig = pub.in2_sub_cols - pub.in_mod_cols - 1;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_rows = pub.in2_sub_cumh_sel_rowhig - pub.in2_sub_cumh_sel_rowlow + 1;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_cols = pub.in2_sub_cumh_sel_colhig - pub.in2_sub_cumh_sel_collow + 1;
# 467 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_elem = pub.in2_sub2_sqr_rows * pub.in2_sub2_sqr_cols;
# 468 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.in2_sub2_sqr_mem = sizeof(float) * pub.in2_sub2_sqr_elem;
# 469 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 470 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_in2_sub2_sqr = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.in2_sub2_sqr_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.in2_sub2_sqr_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 472 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_rows = pub.in_mod_rows + (pub.sSize+1+pub.sSize) - 1;
# 501 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_cols = pub.tMask_rows;
# 502 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_elem = pub.tMask_rows * pub.tMask_cols;
# 503 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.tMask_mem = sizeof(float) * pub.tMask_elem;
# 504 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 505 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 506 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_tMask = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.tMask_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.tMask_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 507 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 508 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 509 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 510 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 511 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 512 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 513 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_rows = pub.maxMove;
# 514 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_cols = pub.mask_rows;
# 515 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_elem = pub.mask_rows * pub.mask_cols;
# 516 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_mem = sizeof(float) * pub.mask_elem;
# 517 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 518 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 519 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 520 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 521 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 522 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_rows = pub.tMask_rows;
# 523 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_cols = pub.tMask_cols;
# 524 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_elem = pub.mask_conv_rows * pub.mask_conv_cols;
# 525 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_mem = sizeof(float) * pub.mask_conv_elem;
# 526 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_ioffset = (pub.mask_rows-1)/2;
# 527 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if((pub.mask_rows-1) % 2 > 0.5){
# 528 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  pub.mask_conv_ioffset = pub.mask_conv_ioffset + 1;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 530 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 pub.mask_conv_joffset = (pub.mask_cols-1)/2;
# 531 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if((pub.mask_cols-1) % 2 > 0.5){
# 532 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  pub.mask_conv_joffset = pub.mask_conv_joffset + 1;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 534 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 535 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 536 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  priv[i].d_mask_conv = (float *) ({ void *____chimes_tmp_ptr = malloc((pub.mask_conv_mem) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, pub.mask_conv_mem, 762051829673679219UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 537 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 538 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 541 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 543 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 printf("frame progress: ");
# 544 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fflush(__null);
# 545 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 546 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 547 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 549 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(pub.frame_no=0; pub.frame_no<frames_processed; pub.frame_no++){
# 551 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 552 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 555 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 556 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 557 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
         call_lbl_7: d_frames = (avi_t*)(____chimes_does_checkpoint_AVI_open_input_file_npm ? ( ({ calling((void*)AVI_open_input_file, 7, ____alias_loc_id_9, 762051829673680010UL, 2, (size_t)(762051829673680000UL), (size_t)(0UL)); (AVI_open_input_file)(video_file_name, 1); }) ) : (({ calling_npm("AVI_open_input_file", ____alias_loc_id_9); (*____chimes_extern_func_AVI_open_input_file)(video_file_name, 1); })));
# 558 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
        ((d_frames) ? static_cast<void> (0) : __assert_fail ("d_frames", "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c", 558, __PRETTY_FUNCTION__));
# 559 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   call_lbl_8: pub.d_frame = (____chimes_does_checkpoint_get_frame_npm ? ( ({ calling((void*)get_frame, 8, ____alias_loc_id_8, 762051829673679219UL, 5, (size_t)(762051829673680010UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (get_frame)(d_frames, pub.frame_no, 0, 0, 1); }) ) : (({ calling_npm("get_frame", ____alias_loc_id_8); (*____chimes_extern_func_get_frame)(d_frames, pub.frame_no, 0, 0, 1); })));
# 564 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
         call_lbl_9: (____chimes_does_checkpoint_AVI_close_npm ? ( ({ calling((void*)AVI_close, 9, ____alias_loc_id_6, 0UL, 1, (size_t)(762051829673680010UL)); (AVI_close)(d_frames); }) ) : (({ calling_npm("AVI_close", ____alias_loc_id_6); (*____chimes_extern_func_AVI_close)(d_frames); })));
# 565 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 566 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 568 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 569 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 570 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 571 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  omp_set_num_threads(omp_num_threads);
# 572 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 573 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 574 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 575 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
         call_lbl_10: (____chimes_does_checkpoint_kernel_npm ? ( ({ calling((void*)kernel, 10, ____alias_loc_id_3, 0UL, 2, (size_t)(762051829673678596UL), (size_t)(762051829673678588UL)); (kernel)(pub, priv); }) ) : (({ calling_npm("kernel", ____alias_loc_id_3); (*____chimes_extern_func_kernel)(pub, priv); })));
# 587 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 587 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)pub.d_frame) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_frame) - sizeof(void *))); }) ;
# 588 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 589 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 590 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 593 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf("%d ", pub.frame_no);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  fflush(__null);
# 595 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 596 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 597 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     call_lbl_11: checkpoint_transformed(11, 0);
# 598 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 600 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 601 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 602 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 603 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 605 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 606 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 printf("\n");
# 607 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fflush(__null);
# 608 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 609 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     double end_time; call_lbl_12: end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    printf("execution took %f s\n", end_time - start_time);
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_endoRow) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_endoRow) - sizeof(void *))); }) ;
# 639 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_endoCol) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_endoCol) - sizeof(void *))); }) ;
# 640 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEndoRowLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEndoRowLoc) - sizeof(void *))); }) ;
# 641 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEndoColLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEndoColLoc) - sizeof(void *))); }) ;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_endoT) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_endoT) - sizeof(void *))); }) ;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 644 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_epiRow) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_epiRow) - sizeof(void *))); }) ;
# 645 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_epiCol) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_epiCol) - sizeof(void *))); }) ;
# 646 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEpiRowLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEpiRowLoc) - sizeof(void *))); }) ;
# 647 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_tEpiColLoc) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_tEpiColLoc) - sizeof(void *))); }) ;
# 648 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  ({ free_helper((((unsigned char *)pub.d_epiT) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)pub.d_epiT) - sizeof(void *))); }) ;
# 649 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 650 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 651 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 652 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 654 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(i=0; i<pub.allPoints; i++){
# 655 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].in_partial_sum) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].in_partial_sum) - sizeof(void *))); }) ;
# 656 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].in_sqr_partial_sum) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].in_sqr_partial_sum) - sizeof(void *))); }) ;
# 657 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].par_max_val) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].par_max_val) - sizeof(void *))); }) ;
# 658 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].par_max_coo) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].par_max_coo) - sizeof(void *))); }) ;
# 659 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 660 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2) - sizeof(void *))); }) ;
# 661 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_sqr) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_sqr) - sizeof(void *))); }) ;
# 662 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 663 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in_mod) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in_mod) - sizeof(void *))); }) ;
# 664 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in_sqr) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in_sqr) - sizeof(void *))); }) ;
# 665 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 666 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_conv) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_conv) - sizeof(void *))); }) ;
# 667 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 668 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_pad) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_pad) - sizeof(void *))); }) ;
# 669 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 670 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_sub) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_sub) - sizeof(void *))); }) ;
# 671 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 672 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_in2_sub2_sqr) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_in2_sub2_sqr) - sizeof(void *))); }) ;
# 673 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 674 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_tMask) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_tMask) - sizeof(void *))); }) ;
# 675 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   ({ free_helper((((unsigned char *)priv[i].d_mask_conv) - sizeof(void *)), 762051829673679219UL);free((((unsigned char *)priv[i].d_mask_conv) - sizeof(void *))); }) ;
# 676 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 677 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); return ____chimes_ret_var_4; ;
# 678 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable2, false); }

int main(int argc, char *argv []) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
double seconds_npm() {
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    struct timeval tp;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    struct timezone tzp;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
    int i = gettimeofday(&tp, &tzp);
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); return ____chimes_ret_var_0; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
}
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
void write_data_npm( char* filename,
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frameNo,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int frames_processed,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int endoPoints,
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_a,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_b,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int epiPoints,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2a,
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   int* input_2b){
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 FILE* fid;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 int i,j;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 char c;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fid = fopen(filename, "w+");
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 if( fid == __null ){
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  printf( "The file was not opened for writing\n" );
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
  return;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "Total AVI Frames: %d\n", frameNo);
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "Frames Processed: %d\n", frames_processed);
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "endoPoints: %d\n", endoPoints);
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
      fprintf(fid, "epiPoints: %d", epiPoints);
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 for(j=0; j<frames_processed;j++)
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   {
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n---Frame %d---",j);
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n--endo--\n",j);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<endoPoints; i++){
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_a[j+i*frameNo]);
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n");
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<endoPoints; i++){
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_b[j+i*frameNo]);
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n--epi--\n",j);
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<epiPoints; i++){
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_2a[j+i*frameNo]);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     fprintf(fid, "\n");
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     for(i=0; i<epiPoints; i++){
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
       fprintf(fid, "%d\t", input_2b[j+i*frameNo]);
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
     }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
   }
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
 fclose(fid);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/main.c"
}





static int module_init() {
    init_module(762051829673678370UL, 12, 3, 4, 13, 2, 8, 10, 2, 10, 10,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 217UL), "AVI_close", (unsigned)1, (762051829673678370UL + 1640UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 221UL), "AVI_print_error", (unsigned)1, (762051829673678370UL + 1879UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 217UL), "AVI_video_width", (unsigned)1, (762051829673678370UL + 1640UL),
                           &____alias_loc_id_3, (unsigned)0, (unsigned)0, (unsigned)1, "kernel", (unsigned)2, (762051829673678370UL + 218UL), (762051829673678370UL + 226UL),
                           &____alias_loc_id_4, (unsigned)5, (unsigned)0, (unsigned)1, (762051829673678370UL + 212UL), (762051829673678370UL + 213UL), (762051829673678370UL + 214UL), (762051829673678370UL + 219UL), (762051829673678370UL + 220UL), "AVI_open_input_file", (unsigned)2, (762051829673678370UL + 1630UL), (762051829673678370UL + 1640UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 217UL), "AVI_video_height", (unsigned)1, (762051829673678370UL + 1640UL),
                           &____alias_loc_id_6, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 217UL), "AVI_close", (unsigned)1, (762051829673678370UL + 1640UL),
                           &____alias_loc_id_7, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 221UL), "AVI_video_frames", (unsigned)1, (762051829673678370UL + 1640UL),
                           &____alias_loc_id_8, (unsigned)1, (unsigned)0, (unsigned)1, (762051829673678370UL + 221UL), "get_frame", (unsigned)2, (762051829673678370UL + 849UL), (762051829673678370UL + 1640UL),
                           &____alias_loc_id_9, (unsigned)6, (unsigned)0, (unsigned)1, (762051829673678370UL + 215UL), (762051829673678370UL + 216UL), (762051829673678370UL + 217UL), (762051829673678370UL + 218UL), (762051829673678370UL + 224UL), (762051829673678370UL + 849UL), "AVI_open_input_file", (unsigned)2, (762051829673678370UL + 1630UL), (762051829673678370UL + 1640UL),
                            &____alias_loc_id_10, (unsigned)3, (unsigned)0, (unsigned)0, (762051829673678370UL + 1UL), (762051829673678370UL + 3UL), (762051829673678370UL + 4UL),
                            &____alias_loc_id_11, (unsigned)13, (unsigned)0, (unsigned)0, (762051829673678370UL + 26UL), (762051829673678370UL + 27UL), (762051829673678370UL + 28UL), (762051829673678370UL + 29UL), (762051829673678370UL + 30UL), (762051829673678370UL + 31UL), (762051829673678370UL + 32UL), (762051829673678370UL + 33UL), (762051829673678370UL + 34UL), (762051829673678370UL + 35UL), (762051829673678370UL + 36UL), (762051829673678370UL + 37UL), (762051829673678370UL + 62UL),
                            &____alias_loc_id_12, (unsigned)12, (unsigned)0, (unsigned)0, (762051829673678370UL + 212UL), (762051829673678370UL + 215UL), (762051829673678370UL + 216UL), (762051829673678370UL + 217UL), (762051829673678370UL + 218UL), (762051829673678370UL + 222UL), (762051829673678370UL + 223UL), (762051829673678370UL + 224UL), (762051829673678370UL + 225UL), (762051829673678370UL + 227UL), (762051829673678370UL + 228UL), (762051829673678370UL + 849UL),
                            "seconds", 0, "_Z7secondsv", "_Z11seconds_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (762051829673678370UL + 1UL), (762051829673678370UL + 2UL), 0UL,
                            "write_data", 0, "_Z10write_dataPciiiPiS0_iS0_S0_", "_Z14write_data_npmPciiiPiS0_iS0_S0_", 0, 9, (762051829673678370UL + 197UL), 0UL, 0UL, 0UL, (762051829673678370UL + 201UL), (762051829673678370UL + 202UL), 0UL, (762051829673678370UL + 204UL), (762051829673678370UL + 205UL), 0UL, 16, "fopen", 2, (762051829673678370UL + 197UL), (762051829673678370UL + 1867UL), (762051829673678370UL + 62UL), "printf", 1, (762051829673678370UL + 1868UL), 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1869UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1869UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1871UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1872UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1871UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1874UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1875UL), 0UL, 0UL, "fprintf", 2, (762051829673678370UL + 62UL), (762051829673678370UL + 1876UL), 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1875UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1877UL), 0UL, 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1875UL), 0UL, 0UL, "fprintf", 2, (762051829673678370UL + 62UL), (762051829673678370UL + 1876UL), 0UL, "fprintf", 3, (762051829673678370UL + 62UL), (762051829673678370UL + 1875UL), 0UL, 0UL, "fclose", 1, (762051829673678370UL + 62UL), 0UL,
                               "AVI_close", (void **)&(____chimes_extern_func_AVI_close),
                               "AVI_open_input_file", (void **)&(____chimes_extern_func_AVI_open_input_file),
                               "AVI_print_error", (void **)&(____chimes_extern_func_AVI_print_error),
                               "AVI_video_frames", (void **)&(____chimes_extern_func_AVI_video_frames),
                               "AVI_video_height", (void **)&(____chimes_extern_func_AVI_video_height),
                               "AVI_video_width", (void **)&(____chimes_extern_func_AVI_video_width),
                               "get_frame", (void **)&(____chimes_extern_func_get_frame),
                               "kernel", (void **)&(____chimes_extern_func_kernel),
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "write_data", &(____chimes_does_checkpoint_write_data_npm),
                           "AVI_close", &(____chimes_does_checkpoint_AVI_close_npm),
                           "AVI_open_input_file", &(____chimes_does_checkpoint_AVI_open_input_file_npm),
                           "AVI_print_error", &(____chimes_does_checkpoint_AVI_print_error_npm),
                           "AVI_video_frames", &(____chimes_does_checkpoint_AVI_video_frames_npm),
                           "AVI_video_height", &(____chimes_does_checkpoint_AVI_video_height_npm),
                           "AVI_video_width", &(____chimes_does_checkpoint_AVI_video_width_npm),
                           "get_frame", &(____chimes_does_checkpoint_get_frame_npm),
                           "kernel", &(____chimes_does_checkpoint_kernel_npm),
                             (762051829673678370UL + 217UL), (762051829673678370UL + 849UL),
                             (762051829673678370UL + 26UL), (762051829673678370UL + 197UL),
                             (762051829673678370UL + 1837UL), (762051829673678370UL + 1630UL),
                             (762051829673678370UL + 33UL), (762051829673678370UL + 204UL),
                             (762051829673678370UL + 31UL), (762051829673678370UL + 202UL),
                             (762051829673678370UL + 30UL), (762051829673678370UL + 201UL),
                             (762051829673678370UL + 214UL), (762051829673678370UL + 1837UL),
                             (762051829673678370UL + 35UL), (762051829673678370UL + 62UL),
                             (762051829673678370UL + 34UL), (762051829673678370UL + 205UL),
                             (762051829673678370UL + 218UL), (762051829673678370UL + 849UL),
                             (762051829673678370UL + 221UL), (762051829673678370UL + 1640UL),
                             (762051829673678370UL + 220UL), (762051829673678370UL + 1630UL),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "_private_struct", 1280UL, 21, "int", (int)__builtin_offsetof (struct _private_struct, point_no), "int", (int)__builtin_offsetof (struct _private_struct, in_pointer), "int*", (int)__builtin_offsetof (struct _private_struct, d_Row), "int*", (int)__builtin_offsetof (struct _private_struct, d_Col), "int*", (int)__builtin_offsetof (struct _private_struct, d_tRowLoc), "int*", (int)__builtin_offsetof (struct _private_struct, d_tColLoc), "float*", (int)__builtin_offsetof (struct _private_struct, d_T), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_sqr), "float*", (int)__builtin_offsetof (struct _private_struct, d_in_mod), "float*", (int)__builtin_offsetof (struct _private_struct, d_in_sqr), "float*", (int)__builtin_offsetof (struct _private_struct, d_conv), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_pad), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_sub), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_sub2_sqr), "float*", (int)__builtin_offsetof (struct _private_struct, d_tMask), "float*", (int)__builtin_offsetof (struct _private_struct, d_mask_conv), "float*", (int)__builtin_offsetof (struct _private_struct, in_partial_sum), "float*", (int)__builtin_offsetof (struct _private_struct, in_sqr_partial_sum), "float*", (int)__builtin_offsetof (struct _private_struct, par_max_val), "int*", (int)__builtin_offsetof (struct _private_struct, par_max_coo),
                     "_public_struct", 3072UL, 84, "int", (int)__builtin_offsetof (struct _public_struct, tSize), "int", (int)__builtin_offsetof (struct _public_struct, sSize), "int", (int)__builtin_offsetof (struct _public_struct, maxMove), "float", (int)__builtin_offsetof (struct _public_struct, alpha), "int", (int)__builtin_offsetof (struct _public_struct, endoPoints), "int", (int)__builtin_offsetof (struct _public_struct, d_endo_mem), "int*", (int)__builtin_offsetof (struct _public_struct, d_endoRow), "int*", (int)__builtin_offsetof (struct _public_struct, d_endoCol), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEndoRowLoc), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEndoColLoc), "float*", (int)__builtin_offsetof (struct _public_struct, d_endoT), "int", (int)__builtin_offsetof (struct _public_struct, epiPoints), "int", (int)__builtin_offsetof (struct _public_struct, d_epi_mem), "int*", (int)__builtin_offsetof (struct _public_struct, d_epiRow), "int*", (int)__builtin_offsetof (struct _public_struct, d_epiCol), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEpiRowLoc), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEpiColLoc), "float*", (int)__builtin_offsetof (struct _public_struct, d_epiT), "int", (int)__builtin_offsetof (struct _public_struct, allPoints), "int", (int)__builtin_offsetof (struct _public_struct, frames), "int", (int)__builtin_offsetof (struct _public_struct, frame_no), "float*", (int)__builtin_offsetof (struct _public_struct, d_frame), "int", (int)__builtin_offsetof (struct _public_struct, frame_rows), "int", (int)__builtin_offsetof (struct _public_struct, frame_cols), "int", (int)__builtin_offsetof (struct _public_struct, frame_elem), "int", (int)__builtin_offsetof (struct _public_struct, frame_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_mem), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_rows), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_cols), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_elem), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_mem), "int", (int)__builtin_offsetof (struct _public_struct, ioffset), "int", (int)__builtin_offsetof (struct _public_struct, joffset), "int", (int)__builtin_offsetof (struct _public_struct, conv_rows), "int", (int)__builtin_offsetof (struct _public_struct, conv_cols), "int", (int)__builtin_offsetof (struct _public_struct, conv_elem), "int", (int)__builtin_offsetof (struct _public_struct, conv_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_add_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_add_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_mem), "int", (int)__builtin_offsetof (struct _public_struct, tMask_rows), "int", (int)__builtin_offsetof (struct _public_struct, tMask_cols), "int", (int)__builtin_offsetof (struct _public_struct, tMask_elem), "int", (int)__builtin_offsetof (struct _public_struct, tMask_mem), "int", (int)__builtin_offsetof (struct _public_struct, mask_rows), "int", (int)__builtin_offsetof (struct _public_struct, mask_cols), "int", (int)__builtin_offsetof (struct _public_struct, mask_elem), "int", (int)__builtin_offsetof (struct _public_struct, mask_mem), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_rows), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_cols), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_elem), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_mem), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_ioffset), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_joffset),
                     "audio_index_entry", 0UL, 0,
                     "avi_t", 8704UL, 26, "long int", (int)__builtin_offsetof (avi_t, fdes), "long int", (int)__builtin_offsetof (avi_t, mode), "long int", (int)__builtin_offsetof (avi_t, width), "long int", (int)__builtin_offsetof (avi_t, height), "double", (int)__builtin_offsetof (avi_t, fps), "[ 8 x char ]", (int)__builtin_offsetof (avi_t, compressor), "[ 8 x char ]", (int)__builtin_offsetof (avi_t, compressor2), "long int", (int)__builtin_offsetof (avi_t, video_strn), "long int", (int)__builtin_offsetof (avi_t, video_frames), "[ 4 x char ]", (int)__builtin_offsetof (avi_t, video_tag), "long int", (int)__builtin_offsetof (avi_t, video_pos), "long unsigned int", (int)__builtin_offsetof (avi_t, max_len), "[ 8 x %struct.track_s ]", (int)__builtin_offsetof (avi_t, track), "long unsigned int", (int)__builtin_offsetof (avi_t, pos), "long int", (int)__builtin_offsetof (avi_t, n_idx), "long int", (int)__builtin_offsetof (avi_t, max_idx), "long int", (int)__builtin_offsetof (avi_t, v_codech_off), "long int", (int)__builtin_offsetof (avi_t, v_codecf_off), "[ 16 x unsigned char ]*", (int)__builtin_offsetof (avi_t, idx), "%struct.video_index_entry*", (int)__builtin_offsetof (avi_t, video_index), "long unsigned int", (int)__builtin_offsetof (avi_t, last_pos), "long unsigned int", (int)__builtin_offsetof (avi_t, last_len), "int", (int)__builtin_offsetof (avi_t, must_use_index), "long unsigned int", (int)__builtin_offsetof (avi_t, movi_start), "int", (int)__builtin_offsetof (avi_t, anum), "int", (int)__builtin_offsetof (avi_t, aptr),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 64UL, 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                     "track_s", 896UL, 14, "long int", (int)__builtin_offsetof (struct track_s, a_fmt), "long int", (int)__builtin_offsetof (struct track_s, a_chans), "long int", (int)__builtin_offsetof (struct track_s, a_rate), "long int", (int)__builtin_offsetof (struct track_s, a_bits), "long int", (int)__builtin_offsetof (struct track_s, mp3rate), "long int", (int)__builtin_offsetof (struct track_s, audio_strn), "long int", (int)__builtin_offsetof (struct track_s, audio_bytes), "long int", (int)__builtin_offsetof (struct track_s, audio_chunks), "[ 4 x char ]", (int)__builtin_offsetof (struct track_s, audio_tag), "long int", (int)__builtin_offsetof (struct track_s, audio_posc), "long int", (int)__builtin_offsetof (struct track_s, audio_posb), "long int", (int)__builtin_offsetof (struct track_s, a_codech_off), "long int", (int)__builtin_offsetof (struct track_s, a_codecf_off), "%struct.audio_index_entry*", (int)__builtin_offsetof (struct track_s, audio_index),
                     "video_index_entry", 0UL, 0,
                             "seconds", "_Z7secondsv", 0, 0,
                             "write_data", "_Z10write_dataPciiiPiS0_iS0_S0_", 0, 0,
                             "main", "main", 0, 13, "seconds", "AVI_open_input_file", "AVI_print_error", "AVI_video_frames", "AVI_video_height", "AVI_video_width", "AVI_close", "AVI_open_input_file", "get_frame", "AVI_close", "kernel", "checkpoint", "seconds",
                        "main|argv|0", 5, "AVI_video_width", "AVI_video_height", "AVI_video_frames", "AVI_open_input_file", "AVI_close",
                        "main|pub|0", 1, "main",
                        "main|priv|0", 1, "main",
                        "main|d_frames|0", 4, "get_frame", "AVI_video_width", "AVI_video_height", "AVI_video_frames",
        "seconds", 0UL, (int)0,
        "seconds", 0UL, (int)0,
        "AVI_open_input_file", 762051829673680010UL, (int)2, 762051829673680000UL, 0UL,
        "AVI_print_error", 0UL, (int)1, 762051829673680249UL,
        "AVI_video_frames", 0UL, (int)1, 762051829673680010UL,
        "AVI_video_height", 0UL, (int)1, 762051829673680010UL,
        "AVI_video_width", 0UL, (int)1, 762051829673680010UL,
        "AVI_close", 0UL, (int)1, 762051829673680010UL,
        "AVI_open_input_file", 762051829673680010UL, (int)2, 762051829673680000UL, 0UL,
        "get_frame", 762051829673679219UL, (int)5, 762051829673680010UL, 0UL, 0UL, 0UL, 0UL,
        "AVI_close", 0UL, (int)1, 762051829673680010UL,
        "kernel", 0UL, (int)2, 762051829673678596UL, 762051829673678588UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
