# 1 "kernel_cpu_2.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "kernel_cpu_2.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_kernel_cpu_2_npm = 1;
static int ____chimes_does_checkpoint_get_time_npm = 1;
static int ____chimes_does_checkpoint_omp_get_max_threads_npm = 1;
static int ____chimes_does_checkpoint_omp_set_num_threads_npm = 1;

static int ____must_checkpoint_kernel_cpu_2_cores_arg_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_knodes_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_knodes_elem_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_order_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_maxheight_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_count_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_currKnode_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_offset_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_lastKnode_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_offset_2_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_start_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_end_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_recstart_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_reclength_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_time0_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_time1_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_i_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_threadsPerBlock_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_thid_0 = 2;
static int ____must_checkpoint_kernel_cpu_2_bid_0 = 2;

static int ____must_manage_kernel_cpu_2 = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
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
        const char *funcname, int *conditional, unsigned loc_id, int disabled);
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
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void free_wrapper(void *ptr, size_t group);
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
# 67 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
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
# 14 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c" 2
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
# 15 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 16 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c" 2
# 16 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 17 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 18 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 19 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 20 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h" 1
# 16 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdint.h" 1 3 4
# 9 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdint.h" 3 4
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
# 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdint.h" 2 3 4
# 17 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h" 2
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdbool.h" 1 3 4
# 18 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h" 2
# 52 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h"
typedef struct list_item list_item_t;

typedef struct list_t {
  list_item_t *head, *tail;
  uint32_t length;
  int32_t (*compare)(const void *key, const void *with);
  void (*datum_delete)(void *);
} list_t;

typedef list_item_t *list_iterator_t;
typedef list_item_t *list_reverse_iterator_t;
# 74 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h"
typedef struct record {
 int value;
} record;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h"
typedef struct node {
 void ** pointers;
 int * keys;
 struct node * parent;
 bool is_leaf;
 int num_keys;
 struct node * next;
} node;


typedef struct knode {
 int location;
 int indices [508 + 1];
 int keys [508 + 1];
 bool is_leaf;
 int num_keys;
} knode;

struct list_item {
  struct list_item *pred, *next;
  void *datum;
};
# 137 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../common.h"
void
list_item_init( list_item_t *li,
    void *datum);

void
list_item_delete( list_item_t *li,
     void (*datum_delete)(void *datum));

void
list_insert_item_tail( list_t *l,
      list_item_t *i);

void
list_insert_item_before(list_t *l,
      list_item_t *next,
      list_item_t *i);

void
list_insert_item_after( list_t *l,
      list_item_t *pred,
      list_item_t *i);

void
list_insert_item_sorted(list_t *l,
      list_item_t *i);





void
list_init( list_t *l,
   int32_t (*compare)(const void *key, const void *with),
   void (*datum_delete)(void *datum));

void
list_delete(list_t *l);

void
list_reset(list_t *l);

void
list_insert_head( list_t *l,
     void *v);

void
list_insert_tail( list_t *l,
     void *v);

void
list_insert_before(list_t *l,
     list_item_t *next,
     void *v);

void
list_insert_after( list_t *l,
     list_item_t *pred,
     void *v);

void
list_insert_sorted( list_t *l,
     void *v);

void
list_insert_item_head( list_t *l,
      list_item_t *i);

void
list_remove_item( list_t *l,
     list_item_t *i);

void
list_remove_head(list_t *l);

void
list_remove_tail(list_t *l);

list_item_t *
list_find_item( list_t *l,
    void *datum);

list_item_t *
list_get_head_item(list_t *l);

list_item_t *
list_get_tail_item(list_t *l);

void *
list_find( list_t *l,
   void *datum);

void *
list_get_head(list_t *l);

void *
list_get_tail(list_t *l);

uint32_t
list_get_length(list_t *l);

bool
list_is_empty(list_t *l);

bool
list_not_empty(list_t *l);

void
list_visit_items( list_t *l,
     void (*visitor)(void *v));

void *
list_item_get_datum(list_item_t *li);

void
list_iterator_init( list_t *l,
     list_iterator_t *li);

void
list_iterator_delete(list_iterator_t *li);

void
list_iterator_next(list_iterator_t *li);

void
list_iterator_prev(list_iterator_t *li);

void *
list_iterator_get_datum(list_iterator_t *li);

bool
list_iterator_is_valid(list_iterator_t *li);

void
list_reverse_iterator_init( list_t *l,
       list_iterator_t *li);

void
list_reverse_iterator_delete(list_iterator_t *li);

void
list_reverse_iterator_next(list_iterator_t *li);

void
list_reverse_iterator_prev(list_iterator_t *li);

void *
list_reverse_iterator_get_datum(list_iterator_t *li);

bool
list_reverse_iterator_is_valid(list_reverse_iterator_t *li);





void *
kmalloc(int size);

long
transform_to_cuda( node *n,
     bool verbose);

void
usage_1( void );

void
usage_2( void );

void
enqueue( node * new_node );

node *
dequeue( void );

int
height( node * root );

int
path_to_root( node * root,
    node * child );

void
print_leaves( node * root );

void
print_tree( node * root );

node *
find_leaf( node * root,
   int key,
   bool verbose );

record *
find( node * root,
  int key,
  bool verbose );

int
cut( int length );





record *
make_record(int value);

node *
make_node( void );

node *
make_leaf( void );

int
get_left_index( node * parent,
    node * left);

node *
insert_into_leaf( node * leaf,
     int key, record * pointer );

node *
insert_into_leaf_after_splitting( node * root,
         node * leaf,
         int key,
         record * pointer);

node *
insert_into_node( node * root,
     node * parent,
     int left_index,
     int key,
     node * right);

node *
insert_into_node_after_splitting( node * root,
         node * parent,
         int left_index,
         int key,
         node * right);

node *
insert_into_parent( node * root,
     node * left,
     int key,
     node * right);

node *
insert_into_new_root( node * left,
      int key,
      node * right);

node *
start_new_tree( int key,
    record * pointer);

node *
insert( node * root,
  int key,
  int value );





int
get_neighbor_index(node * n );

node *
adjust_root(node * root);

node *
coalesce_nodes( node * root,
    node * n,
    node * neighbor,
    int neighbor_index,
    int k_prime);

node *
redistribute_nodes( node * root,
     node * n,
     node * neighbor,
     int neighbor_index,
     int k_prime_index,
     int k_prime);

node *
delete_entry( node * root,
    node * n,
    int key,
    void * pointer );

node *
deleteVal( node * root,
   int key );
# 22 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c" 2
# 22 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 23 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 25 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 26 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../util/timer/timer.h" 1

extern "C" {
# 13 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/../util/timer/timer.h"
long long
get_time();






}
# 28 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c" 2
# 28 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 29 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 32 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/./kernel_cpu_2.h" 1
# 9 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/./kernel_cpu_2.h"
void
kernel_cpu_2( int cores_arg,

    knode *knodes,
    long knodes_elem,

    int order,
    long maxheight,
    int count,

    long *currKnode,
    long *offset,
    long *lastKnode,
    long *offset_2,
    int *start,
    int *end,
    int *recstart,
    int *reclength);
# 34 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c" 2
# 34 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 35 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 36 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 38 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 39 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
void kernel_cpu_2_npm( int cores_arg, knode *knodes, long knodes_elem, int order, long maxheight, int count, long *currKnode, long *offset, long *lastKnode, long *offset_2, int *start, int *end, int *recstart, int *reclength);static long long (*____chimes_extern_func_get_time)(void) = get_time;static int (*____chimes_extern_func_omp_get_max_threads)(void) = omp_get_max_threads;static void (*____chimes_extern_func_omp_set_num_threads)(int) = omp_set_num_threads;
void kernel_cpu_2_quick( int cores_arg, knode *knodes, long knodes_elem, int order, long maxheight, int count, long *currKnode, long *offset, long *lastKnode, long *offset_2, int *start, int *end, int *recstart, int *reclength); void kernel_cpu_2( int cores_arg, knode *knodes, long knodes_elem, int order, long maxheight, int count, long *currKnode, long *offset, long *lastKnode, long *offset_2, int *start, int *end, int *recstart, int *reclength);
void
# 40 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
kernel_cpu_2_resumable( int cores_arg,
# 41 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    knode *knodes,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long knodes_elem,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int order,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long maxheight,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int count,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *currKnode,
# 50 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset,
# 51 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *lastKnode,
# 52 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset_2,
# 53 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *start,
# 54 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *end,
# 55 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *recstart,
# 56 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *reclength)
# 57 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&kernel_cpu_2), "kernel_cpu_2", &____must_manage_kernel_cpu_2, 14, 14, (size_t)(0UL), (size_t)(13240270965678849410UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13240270965678849415UL), (size_t)(13240270965678849416UL), (size_t)(13240270965678849417UL), (size_t)(13240270965678849418UL), (size_t)(13240270965678849419UL), (size_t)(13240270965678849420UL), (size_t)(13240270965678849421UL), (size_t)(13240270965678849422UL), "kernel_cpu_2|cores_arg|0", &____must_checkpoint_kernel_cpu_2_cores_arg_0, "i32", (void *)(&cores_arg), (size_t)4, 0, 0, 0, "kernel_cpu_2|knodes|0", &____must_checkpoint_kernel_cpu_2_knodes_0, "%struct.knode*", (void *)(&knodes), (size_t)8, 1, 0, 0, "kernel_cpu_2|knodes_elem|0", &____must_checkpoint_kernel_cpu_2_knodes_elem_0, "i64", (void *)(&knodes_elem), (size_t)8, 0, 0, 0, "kernel_cpu_2|order|0", &____must_checkpoint_kernel_cpu_2_order_0, "i32", (void *)(&order), (size_t)4, 0, 0, 0, "kernel_cpu_2|maxheight|0", &____must_checkpoint_kernel_cpu_2_maxheight_0, "i64", (void *)(&maxheight), (size_t)8, 0, 0, 0, "kernel_cpu_2|count|0", &____must_checkpoint_kernel_cpu_2_count_0, "i32", (void *)(&count), (size_t)4, 0, 0, 0, "kernel_cpu_2|currKnode|0", &____must_checkpoint_kernel_cpu_2_currKnode_0, "i64*", (void *)(&currKnode), (size_t)8, 1, 0, 0, "kernel_cpu_2|offset|0", &____must_checkpoint_kernel_cpu_2_offset_0, "i64*", (void *)(&offset), (size_t)8, 1, 0, 0, "kernel_cpu_2|lastKnode|0", &____must_checkpoint_kernel_cpu_2_lastKnode_0, "i64*", (void *)(&lastKnode), (size_t)8, 1, 0, 0, "kernel_cpu_2|offset_2|0", &____must_checkpoint_kernel_cpu_2_offset_2_0, "i64*", (void *)(&offset_2), (size_t)8, 1, 0, 0, "kernel_cpu_2|start|0", &____must_checkpoint_kernel_cpu_2_start_0, "i32*", (void *)(&start), (size_t)8, 1, 0, 0, "kernel_cpu_2|end|0", &____must_checkpoint_kernel_cpu_2_end_0, "i32*", (void *)(&end), (size_t)8, 1, 0, 0, "kernel_cpu_2|recstart|0", &____must_checkpoint_kernel_cpu_2_recstart_0, "i32*", (void *)(&recstart), (size_t)8, 1, 0, 0, "kernel_cpu_2|reclength|0", &____must_checkpoint_kernel_cpu_2_reclength_0, "i32*", (void *)(&reclength), (size_t)8, 1, 0, 0) ; int bid;
int thid;
int threadsPerBlock;
int i;
long long time1;
long long time0;
 if (____must_checkpoint_kernel_cpu_2_bid_0 || ____must_checkpoint_kernel_cpu_2_thid_0 || ____must_checkpoint_kernel_cpu_2_threadsPerBlock_0 || ____must_checkpoint_kernel_cpu_2_i_0 || ____must_checkpoint_kernel_cpu_2_time1_0 || ____must_checkpoint_kernel_cpu_2_time0_0) { register_stack_vars(6, "kernel_cpu_2|bid|0", &____must_checkpoint_kernel_cpu_2_bid_0, "i32", (void *)(&bid), (size_t)4, 0, 0, 0, "kernel_cpu_2|thid|0", &____must_checkpoint_kernel_cpu_2_thid_0, "i32", (void *)(&thid), (size_t)4, 0, 0, 0, "kernel_cpu_2|threadsPerBlock|0", &____must_checkpoint_kernel_cpu_2_threadsPerBlock_0, "i32", (void *)(&threadsPerBlock), (size_t)4, 0, 0, 0, "kernel_cpu_2|i|0", &____must_checkpoint_kernel_cpu_2_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "kernel_cpu_2|time1|0", &____must_checkpoint_kernel_cpu_2_time1_0, "i64", (void *)(&time1), (size_t)8, 0, 0, 0, "kernel_cpu_2|time0|0", &____must_checkpoint_kernel_cpu_2_time0_0, "i64", (void *)(&time0), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 62 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 64 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 66 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 long long time2; ;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_1: time0 = ({ calling((void*)get_time, 1, ____alias_loc_id_4, 0UL, 0); (get_time)(); }) ;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 74 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 77 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int max_nthreads; ;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_2: max_nthreads = ({ calling((void*)omp_get_max_threads, 2, ____alias_loc_id_3, 0UL, 0); (omp_get_max_threads)(); }) ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_3: ({ calling((void*)omp_set_num_threads, 3, ____alias_loc_id_2, 0UL, 1, (size_t)(0UL)); (omp_set_num_threads)(cores_arg); }) ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 threadsPerBlock = order < 1024 ? order : 1024;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 86 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_4: time1 = ({ calling((void*)get_time, 4, ____alias_loc_id_1, 0UL, 0); (get_time)(); }) ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 89 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 90 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 91 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;; { call_lbl_12: ; bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(12, &____chimes_region_id0, 2, &i, &thid); int ____chimes_first_iter0 = 1;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 96 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
#pragma omp parallel for private (i, thid) firstprivate(____chimes_first_iter0)
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 for(bid = 0; bid < count; bid++){ { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 2, &i, &thid); ____chimes_first_iter0 = 0; }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(i = 0; i < maxheight; i++){
# 102 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   for(thid = 0; thid < threadsPerBlock; thid++){
# 105 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    if((knodes[currKnode[bid]].keys[thid] <= start[bid]) && (knodes[currKnode[bid]].keys[thid+1] > start[bid])){
# 107 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     if(knodes[currKnode[bid]].indices[thid] < knodes_elem){
# 111 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
      offset[bid] = knodes[currKnode[bid]].indices[thid];
# 112 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     }
# 113 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    }
# 114 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    if((knodes[lastKnode[bid]].keys[thid] <= end[bid]) && (knodes[lastKnode[bid]].keys[thid+1] > end[bid])){
# 115 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     if(knodes[lastKnode[bid]].indices[thid] < knodes_elem){
# 119 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
      offset_2[bid] = knodes[lastKnode[bid]].indices[thid];
# 120 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    }
# 122 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 124 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   currKnode[bid] = offset[bid];
# 127 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   lastKnode[bid] = offset_2[bid];
# 128 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(thid = 0; thid < threadsPerBlock; thid++){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   if(knodes[currKnode[bid]].keys[thid] == start[bid]){
# 136 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    recstart[bid] = knodes[currKnode[bid]].indices[thid];
# 137 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 138 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 139 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(thid = 0; thid < threadsPerBlock; thid++){
# 143 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   if(knodes[lastKnode[bid]].keys[thid] == end[bid]){
# 146 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    reclength[bid] = knodes[lastKnode[bid]].indices[thid] - recstart[bid]+1;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 148 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 150 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 152 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_5: time2 = ({ calling((void*)get_time, 5, ____alias_loc_id_0, 0UL, 0); (get_time)(); }) ;
# 154 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("Time spent in different stages of CPU/MCPU KERNEL:\n");
# 160 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%15.12f s, %15.12f % : MCPU: SET DEVICE\n", (float) (time1-time0) / 1000000, (float) (time1-time0) / (float) (time2-time0) * 100);
# 162 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%15.12f s, %15.12f % : CPU/MCPU: KERNEL\n", (float) (time2-time1) / 1000000, (float) (time2-time1) / (float) (time2-time0) * 100);
# 163 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("Total time:\n");
# 165 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%.12f s\n", (float) (time2-time0) / 1000000);
# 166 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
rm_stack(false, 0UL, "kernel_cpu_2", &____must_manage_kernel_cpu_2, ____alias_loc_id_5, ____chimes_did_disable0); }
void
# 40 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
kernel_cpu_2_quick( int cores_arg,
# 41 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    knode *knodes,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long knodes_elem,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int order,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long maxheight,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int count,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *currKnode,
# 50 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset,
# 51 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *lastKnode,
# 52 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset_2,
# 53 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *start,
# 54 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *end,
# 55 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *recstart,
# 56 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *reclength)
# 57 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&kernel_cpu_2), "kernel_cpu_2", &____must_manage_kernel_cpu_2, 14, 14, (size_t)(0UL), (size_t)(13240270965678849410UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13240270965678849415UL), (size_t)(13240270965678849416UL), (size_t)(13240270965678849417UL), (size_t)(13240270965678849418UL), (size_t)(13240270965678849419UL), (size_t)(13240270965678849420UL), (size_t)(13240270965678849421UL), (size_t)(13240270965678849422UL), "kernel_cpu_2|cores_arg|0", &____must_checkpoint_kernel_cpu_2_cores_arg_0, "i32", (void *)(&cores_arg), (size_t)4, 0, 0, 0, "kernel_cpu_2|knodes|0", &____must_checkpoint_kernel_cpu_2_knodes_0, "%struct.knode*", (void *)(&knodes), (size_t)8, 1, 0, 0, "kernel_cpu_2|knodes_elem|0", &____must_checkpoint_kernel_cpu_2_knodes_elem_0, "i64", (void *)(&knodes_elem), (size_t)8, 0, 0, 0, "kernel_cpu_2|order|0", &____must_checkpoint_kernel_cpu_2_order_0, "i32", (void *)(&order), (size_t)4, 0, 0, 0, "kernel_cpu_2|maxheight|0", &____must_checkpoint_kernel_cpu_2_maxheight_0, "i64", (void *)(&maxheight), (size_t)8, 0, 0, 0, "kernel_cpu_2|count|0", &____must_checkpoint_kernel_cpu_2_count_0, "i32", (void *)(&count), (size_t)4, 0, 0, 0, "kernel_cpu_2|currKnode|0", &____must_checkpoint_kernel_cpu_2_currKnode_0, "i64*", (void *)(&currKnode), (size_t)8, 1, 0, 0, "kernel_cpu_2|offset|0", &____must_checkpoint_kernel_cpu_2_offset_0, "i64*", (void *)(&offset), (size_t)8, 1, 0, 0, "kernel_cpu_2|lastKnode|0", &____must_checkpoint_kernel_cpu_2_lastKnode_0, "i64*", (void *)(&lastKnode), (size_t)8, 1, 0, 0, "kernel_cpu_2|offset_2|0", &____must_checkpoint_kernel_cpu_2_offset_2_0, "i64*", (void *)(&offset_2), (size_t)8, 1, 0, 0, "kernel_cpu_2|start|0", &____must_checkpoint_kernel_cpu_2_start_0, "i32*", (void *)(&start), (size_t)8, 1, 0, 0, "kernel_cpu_2|end|0", &____must_checkpoint_kernel_cpu_2_end_0, "i32*", (void *)(&end), (size_t)8, 1, 0, 0, "kernel_cpu_2|recstart|0", &____must_checkpoint_kernel_cpu_2_recstart_0, "i32*", (void *)(&recstart), (size_t)8, 1, 0, 0, "kernel_cpu_2|reclength|0", &____must_checkpoint_kernel_cpu_2_reclength_0, "i32*", (void *)(&reclength), (size_t)8, 1, 0, 0) ; int bid;
int thid;
int threadsPerBlock;
int i;
long long time1;
long long time0;
 if (____must_checkpoint_kernel_cpu_2_bid_0 || ____must_checkpoint_kernel_cpu_2_thid_0 || ____must_checkpoint_kernel_cpu_2_threadsPerBlock_0 || ____must_checkpoint_kernel_cpu_2_i_0 || ____must_checkpoint_kernel_cpu_2_time1_0 || ____must_checkpoint_kernel_cpu_2_time0_0) { register_stack_vars(6, "kernel_cpu_2|bid|0", &____must_checkpoint_kernel_cpu_2_bid_0, "i32", (void *)(&bid), (size_t)4, 0, 0, 0, "kernel_cpu_2|thid|0", &____must_checkpoint_kernel_cpu_2_thid_0, "i32", (void *)(&thid), (size_t)4, 0, 0, 0, "kernel_cpu_2|threadsPerBlock|0", &____must_checkpoint_kernel_cpu_2_threadsPerBlock_0, "i32", (void *)(&threadsPerBlock), (size_t)4, 0, 0, 0, "kernel_cpu_2|i|0", &____must_checkpoint_kernel_cpu_2_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0, "kernel_cpu_2|time1|0", &____must_checkpoint_kernel_cpu_2_time1_0, "i64", (void *)(&time1), (size_t)8, 0, 0, 0, "kernel_cpu_2|time0|0", &____must_checkpoint_kernel_cpu_2_time0_0, "i64", (void *)(&time0), (size_t)8, 0, 0, 0); } ; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 62 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 64 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 66 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 long long time2; ;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_1: time0 = ({ calling((void*)get_time, 1, ____alias_loc_id_4, 0UL, 0); (get_time)(); }) ;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 74 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 77 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int max_nthreads; ;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_2: max_nthreads = ({ calling((void*)omp_get_max_threads, 2, ____alias_loc_id_3, 0UL, 0); (omp_get_max_threads)(); }) ;
# 79 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_3: ({ calling((void*)omp_set_num_threads, 3, ____alias_loc_id_2, 0UL, 1, (size_t)(0UL)); (omp_set_num_threads)(cores_arg); }) ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 threadsPerBlock = order < 1024 ? order : 1024;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 86 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_4: time1 = ({ calling((void*)get_time, 4, ____alias_loc_id_1, 0UL, 0); (get_time)(); }) ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 89 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 90 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 91 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  ;; { call_lbl_12: ; bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(12, &____chimes_region_id0, 2, &i, &thid); int ____chimes_first_iter0 = 1;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 96 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
#pragma omp parallel for private (i, thid) firstprivate(____chimes_first_iter0)
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 for(bid = 0; bid < count; bid++){ { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 2, &i, &thid); ____chimes_first_iter0 = 0; }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(i = 0; i < maxheight; i++){
# 102 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   for(thid = 0; thid < threadsPerBlock; thid++){
# 105 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    if((knodes[currKnode[bid]].keys[thid] <= start[bid]) && (knodes[currKnode[bid]].keys[thid+1] > start[bid])){
# 107 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     if(knodes[currKnode[bid]].indices[thid] < knodes_elem){
# 111 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
      offset[bid] = knodes[currKnode[bid]].indices[thid];
# 112 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     }
# 113 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    }
# 114 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    if((knodes[lastKnode[bid]].keys[thid] <= end[bid]) && (knodes[lastKnode[bid]].keys[thid+1] > end[bid])){
# 115 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     if(knodes[lastKnode[bid]].indices[thid] < knodes_elem){
# 119 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
      offset_2[bid] = knodes[lastKnode[bid]].indices[thid];
# 120 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    }
# 122 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 124 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   currKnode[bid] = offset[bid];
# 127 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   lastKnode[bid] = offset_2[bid];
# 128 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(thid = 0; thid < threadsPerBlock; thid++){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   if(knodes[currKnode[bid]].keys[thid] == start[bid]){
# 136 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    recstart[bid] = knodes[currKnode[bid]].indices[thid];
# 137 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 138 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 139 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(thid = 0; thid < threadsPerBlock; thid++){
# 143 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   if(knodes[lastKnode[bid]].keys[thid] == end[bid]){
# 146 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    reclength[bid] = knodes[lastKnode[bid]].indices[thid] - recstart[bid]+1;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 148 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 150 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 152 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  call_lbl_5: time2 = ({ calling((void*)get_time, 5, ____alias_loc_id_0, 0UL, 0); (get_time)(); }) ;
# 154 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("Time spent in different stages of CPU/MCPU KERNEL:\n");
# 160 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%15.12f s, %15.12f % : MCPU: SET DEVICE\n", (float) (time1-time0) / 1000000, (float) (time1-time0) / (float) (time2-time0) * 100);
# 162 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%15.12f s, %15.12f % : CPU/MCPU: KERNEL\n", (float) (time2-time1) / 1000000, (float) (time2-time1) / (float) (time2-time0) * 100);
# 163 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("Total time:\n");
# 165 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%.12f s\n", (float) (time2-time0) / 1000000);
# 166 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
rm_stack(false, 0UL, "kernel_cpu_2", &____must_manage_kernel_cpu_2, ____alias_loc_id_5, ____chimes_did_disable0); }

void
# 40 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
kernel_cpu_2( int cores_arg,
# 41 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    knode *knodes,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long knodes_elem,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int order,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long maxheight,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int count,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *currKnode,
# 50 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset,
# 51 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *lastKnode,
# 52 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset_2,
# 53 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *start,
# 54 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *end,
# 55 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *recstart,
# 56 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *reclength) { (____chimes_replaying ? kernel_cpu_2_resumable(cores_arg, knodes, knodes_elem, order, maxheight, count, currKnode, offset, lastKnode, offset_2, start, end, recstart, reclength) : kernel_cpu_2_quick(cores_arg, knodes, knodes_elem, order, maxheight, count, currKnode, offset, lastKnode, offset_2, start, end, recstart, reclength)); }



void
# 40 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
kernel_cpu_2_npm( int cores_arg,
# 41 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    knode *knodes,
# 43 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long knodes_elem,
# 44 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int order,
# 46 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long maxheight,
# 47 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int count,
# 48 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *currKnode,
# 50 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset,
# 51 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *lastKnode,
# 52 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    long *offset_2,
# 53 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *start,
# 54 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *end,
# 55 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *recstart,
# 56 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    int *reclength)
# 57 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
{
# 58 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 59 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 61 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 62 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 64 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 long long time0;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 long long time1;
# 66 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 long long time2;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int i;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 time0 = (*____chimes_extern_func_get_time)();
# 72 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 74 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 77 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int max_nthreads;
# 78 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 max_nthreads = (*____chimes_extern_func_omp_get_max_threads)();
# 79 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 (*____chimes_extern_func_omp_set_num_threads)(cores_arg);
# 81 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int threadsPerBlock;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 threadsPerBlock = order < 1024 ? order : 1024;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 86 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 time1 = (*____chimes_extern_func_get_time)();
# 87 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 89 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 90 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 91 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int thid;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 int bid;
# 95 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 96 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
#pragma omp parallel for private (i, thid)
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 97 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 for(bid = 0; bid < count; bid++){
# 99 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(i = 0; i < maxheight; i++){
# 102 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   for(thid = 0; thid < threadsPerBlock; thid++){
# 105 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    if((knodes[currKnode[bid]].keys[thid] <= start[bid]) && (knodes[currKnode[bid]].keys[thid+1] > start[bid])){
# 107 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 110 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     if(knodes[currKnode[bid]].indices[thid] < knodes_elem){
# 111 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
      offset[bid] = knodes[currKnode[bid]].indices[thid];
# 112 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     }
# 113 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    }
# 114 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    if((knodes[lastKnode[bid]].keys[thid] <= end[bid]) && (knodes[lastKnode[bid]].keys[thid+1] > end[bid])){
# 115 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     if(knodes[lastKnode[bid]].indices[thid] < knodes_elem){
# 119 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
      offset_2[bid] = knodes[lastKnode[bid]].indices[thid];
# 120 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
     }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    }
# 122 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 124 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   currKnode[bid] = offset[bid];
# 127 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   lastKnode[bid] = offset_2[bid];
# 128 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 129 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 130 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 131 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(thid = 0; thid < threadsPerBlock; thid++){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   if(knodes[currKnode[bid]].keys[thid] == start[bid]){
# 136 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    recstart[bid] = knodes[currKnode[bid]].indices[thid];
# 137 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 138 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 139 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 140 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 141 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  for(thid = 0; thid < threadsPerBlock; thid++){
# 143 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   if(knodes[lastKnode[bid]].keys[thid] == end[bid]){
# 146 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
    reclength[bid] = knodes[lastKnode[bid]].indices[thid] - recstart[bid]+1;
# 147 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
   }
# 148 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
  }
# 150 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 151 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 }
# 152 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 time2 = (*____chimes_extern_func_get_time)();
# 154 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 155 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 156 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 157 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 159 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("Time spent in different stages of CPU/MCPU KERNEL:\n");
# 160 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%15.12f s, %15.12f % : MCPU: SET DEVICE\n", (float) (time1-time0) / 1000000, (float) (time1-time0) / (float) (time2-time0) * 100);
# 162 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%15.12f s, %15.12f % : CPU/MCPU: KERNEL\n", (float) (time2-time1) / 1000000, (float) (time2-time1) / (float) (time2-time0) * 100);
# 163 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("Total time:\n");
# 165 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
 printf("%.12f s\n", (float) (time2-time0) / 1000000);
# 166 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
# 167 "/scratch/jmg3/rodinia_3.0/openmp/b+tree/kernel/kernel_cpu_2.c"
}





static int module_init() {
    init_module(13240270965678848979UL, 9, 1, 20, 6, 1, 3, 4, 0, 0, 1,
                           &____alias_loc_id_0, (unsigned)10, (unsigned)0, (unsigned)0, (13240270965678848979UL + 16UL), (13240270965678848979UL + 18UL), (13240270965678848979UL + 21UL), (13240270965678848979UL + 22UL), (13240270965678848979UL + 436UL), (13240270965678848979UL + 437UL), (13240270965678848979UL + 438UL), (13240270965678848979UL + 439UL), (13240270965678848979UL + 442UL), (13240270965678848979UL + 443UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)0, (13240270965678848979UL + 20UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)0, (unsigned)0, (13240270965678848979UL + 19UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)0, (13240270965678848979UL + 15UL),
                           &____alias_loc_id_4, (unsigned)14, (unsigned)0, (unsigned)0, (13240270965678848979UL + 1UL), (13240270965678848979UL + 2UL), (13240270965678848979UL + 3UL), (13240270965678848979UL + 4UL), (13240270965678848979UL + 5UL), (13240270965678848979UL + 6UL), (13240270965678848979UL + 7UL), (13240270965678848979UL + 8UL), (13240270965678848979UL + 9UL), (13240270965678848979UL + 10UL), (13240270965678848979UL + 11UL), (13240270965678848979UL + 12UL), (13240270965678848979UL + 13UL), (13240270965678848979UL + 14UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (unsigned)0, (13240270965678848979UL + 17UL),
                            "kernel_cpu_2", (void *)(&kernel_cpu_2_npm), (void *)__null, 5, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_2, &____alias_loc_id_3, &____alias_loc_id_4, 14, 0UL, (13240270965678848979UL + 431UL), 0UL, 0UL, 0UL, 0UL, (13240270965678848979UL + 436UL), (13240270965678848979UL + 437UL), (13240270965678848979UL + 438UL), (13240270965678848979UL + 439UL), (13240270965678848979UL + 440UL), (13240270965678848979UL + 441UL), (13240270965678848979UL + 442UL), (13240270965678848979UL + 443UL), 0UL, 10, "get_time", 0, 0UL, "omp_get_max_threads", 0, 0UL, "omp_set_num_threads", 1, 0UL, 0UL, "get_time", 0, 0UL, "get_time", 0, 0UL, "printf", 1, (13240270965678848979UL + 448UL), 0UL, "printf", 3, (13240270965678848979UL + 449UL), 0UL, 0UL, 0UL, "printf", 3, (13240270965678848979UL + 449UL), 0UL, 0UL, 0UL, "printf", 1, (13240270965678848979UL + 451UL), 0UL, "printf", 2, (13240270965678848979UL + 452UL), 0UL, 0UL,
                               "get_time", (void **)&(____chimes_extern_func_get_time),
                               "omp_get_max_threads", (void **)&(____chimes_extern_func_omp_get_max_threads),
                               "omp_set_num_threads", (void **)&(____chimes_extern_func_omp_set_num_threads),
                           "kernel_cpu_2", &(____chimes_does_checkpoint_kernel_cpu_2_npm),
                           "get_time", &(____chimes_does_checkpoint_get_time_npm),
                           "omp_get_max_threads", &(____chimes_does_checkpoint_omp_get_max_threads_npm),
                           "omp_set_num_threads", &(____chimes_does_checkpoint_omp_set_num_threads_npm),
                             (13240270965678848979UL + 11UL), (13240270965678848979UL + 440UL),
                             (13240270965678848979UL + 10UL), (13240270965678848979UL + 439UL),
                             (13240270965678848979UL + 13UL), (13240270965678848979UL + 442UL),
                             (13240270965678848979UL + 12UL), (13240270965678848979UL + 441UL),
                             (13240270965678848979UL + 14UL), (13240270965678848979UL + 443UL),
                             (13240270965678848979UL + 2UL), (13240270965678848979UL + 431UL),
                             (13240270965678848979UL + 7UL), (13240270965678848979UL + 436UL),
                             (13240270965678848979UL + 9UL), (13240270965678848979UL + 438UL),
                             (13240270965678848979UL + 8UL), (13240270965678848979UL + 437UL),
                     "knode", 5, "int", (int)__builtin_offsetof (struct knode, location), "[ 509 x int ]", (int)__builtin_offsetof (struct knode, indices), "[ 509 x int ]", (int)__builtin_offsetof (struct knode, keys), "bool", (int)__builtin_offsetof (struct knode, is_leaf), "int", (int)__builtin_offsetof (struct knode, num_keys),
                             "kernel_cpu_2", "_Z12kernel_cpu_2iP5knodeliliPlS1_S1_S1_PiS2_S2_S2_", 5, "get_time", "omp_get_max_threads", "omp_set_num_threads", "get_time", "get_time",
                        "kernel_cpu_2|cores_arg|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|knodes|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|knodes_elem|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|order|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|maxheight|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|count|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|currKnode|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|offset|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|lastKnode|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|offset_2|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|start|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|end|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|recstart|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|reclength|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|time0|0", 3, "omp_set_num_threads", "omp_get_max_threads", "get_time",
                        "kernel_cpu_2|time1|0", 1, "get_time",
                        "kernel_cpu_2|i|0", 1, "get_time",
                        "kernel_cpu_2|threadsPerBlock|0", 1, "get_time",
                        "kernel_cpu_2|thid|0", 1, "get_time",
                        "kernel_cpu_2|bid|0", 1, "get_time");
    return 0;
}

static const int __libchimes_module_init = module_init();
