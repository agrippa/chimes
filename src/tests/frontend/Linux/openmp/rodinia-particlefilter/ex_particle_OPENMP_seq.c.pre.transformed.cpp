# 1 "ex_particle_OPENMP_seq.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "ex_particle_OPENMP_seq.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_get_time_npm = 1;
static int ____chimes_does_checkpoint_elapsed_time_npm = 1;
static int ____chimes_does_checkpoint_roundDouble_npm = 1;
static int ____chimes_does_checkpoint_setIf_npm = 1;
static int ____chimes_does_checkpoint_randu_npm = 1;
static int ____chimes_does_checkpoint_randn_npm = 1;
static int ____chimes_does_checkpoint_addNoise_npm = 1;
static int ____chimes_does_checkpoint_strelDisk_npm = 1;
static int ____chimes_does_checkpoint_dilate_matrix_npm = 1;
static int ____chimes_does_checkpoint_imdilate_disk_npm = 1;
static int ____chimes_does_checkpoint_getneighbors_npm = 1;
static int ____chimes_does_checkpoint_videoSequence_npm = 1;
static int ____chimes_does_checkpoint_calcLikelihoodSum_npm = 1;
static int ____chimes_does_checkpoint_findIndex_npm = 1;
static int ____chimes_does_checkpoint_findIndexBin_npm = 1;
static int ____chimes_does_checkpoint_particleFilter_npm = 1;
static int ____chimes_does_checkpoint_abs_npm = 1;

static int ____must_checkpoint_get_time_tv_0 = 2;
static int ____must_checkpoint_videoSequence_I_0 = 2;
static int ____must_checkpoint_videoSequence_IszX_0 = 2;
static int ____must_checkpoint_videoSequence_IszY_0 = 2;
static int ____must_checkpoint_videoSequence_Nfr_0 = 2;
static int ____must_checkpoint_videoSequence_seed_0 = 2;
static int ____must_checkpoint_videoSequence_k_0 = 2;
static int ____must_checkpoint_videoSequence_max_size_0 = 2;
static int ____must_checkpoint_videoSequence_x0_0 = 2;
static int ____must_checkpoint_videoSequence_y0_0 = 2;
static int ____must_checkpoint_videoSequence_xk_0 = 2;
static int ____must_checkpoint_videoSequence_yk_0 = 2;
static int ____must_checkpoint_videoSequence_pos_0 = 2;
static int ____must_checkpoint_main_IszX_0 = 2;
static int ____must_checkpoint_main_IszY_0 = 2;
static int ____must_checkpoint_main_Nfr_0 = 2;
static int ____must_checkpoint_main_Nparticles_0 = 2;
static int ____must_checkpoint_main_seed_0 = 2;
static int ____must_checkpoint_main_I_0 = 2;
static int ____must_checkpoint_main_start_0 = 2;

static int ____must_manage_findIndex = 2;
static int ____must_manage_calcLikelihoodSum = 2;
static int ____must_manage_randn = 2;
static int ____must_manage_particleFilter = 2;
static int ____must_manage_videoSequence = 2;
static int ____must_manage_roundDouble = 2;
static int ____must_manage_findIndexBin = 2;
static int ____must_manage_elapsed_time = 2;
static int ____must_manage_setIf = 2;
static int ____must_manage_dilate_matrix = 2;
static int ____must_manage_imdilate_disk = 2;
static int ____must_manage_get_time = 2;
static int ____must_manage_getneighbors = 2;
static int ____must_manage_main = 2;
static int ____must_manage_strelDisk = 2;
static int ____must_manage_addNoise = 2;
static int ____must_manage_randu = 2;

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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 2 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 3 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 4 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 5 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"

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
# 7 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 8 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 9 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4

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
# 10 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 11 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 1 3 4
# 34 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/syslimits.h" 1 3 4






# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 1 3 4
# 168 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 3 4
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
# 169 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 2 3 4
# 8 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/syslimits.h" 2 3 4
# 35 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 2 3 4
# 12 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 13 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 14 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 14 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 17 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 18 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long M = 2147483647;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 20 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 21 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 22 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int A = 1103515245;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 25 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 26 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int C = 12345;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 28 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 29 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 30 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long long get_time_npm();
long long get_time_quick(); long long get_time();
long long get_time_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&get_time), "get_time", &____must_manage_get_time, 0, 0) ; struct timeval tv;
 if (____must_checkpoint_get_time_tv_0) { register_stack_vars(1, "get_time|tv|0", &____must_checkpoint_get_time_tv_0, "%struct.timeval = type { i64, i64 }", (void *)(&tv), (size_t)16, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 gettimeofday(&tv, __null);
# 34 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "get_time", &____must_manage_get_time, ____alias_loc_id_3, ____chimes_did_disable0); return (tv.tv_sec * 1000000) + tv.tv_usec;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 36 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
float elapsed_time_npm(long long start_time, long long end_time);
float elapsed_time_quick(long long start_time, long long end_time); float elapsed_time(long long start_time, long long end_time);
float elapsed_time_resumable(long long start_time, long long end_time) {const int ____chimes_did_disable1 = new_stack((void *)(&elapsed_time), "elapsed_time", &____must_manage_elapsed_time, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
        rm_stack(false, 0UL, "elapsed_time", &____must_manage_elapsed_time, ____alias_loc_id_4, ____chimes_did_disable1); return (float) (end_time - start_time) / (1000 * 1000);
# 39 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 40 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 43 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 44 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double roundDouble_npm(double value);
double roundDouble_quick(double value); double roundDouble(double value);
double roundDouble_resumable(double value){const int ____chimes_did_disable2 = new_stack((void *)(&roundDouble), "roundDouble", &____must_manage_roundDouble, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int newValue; newValue = ((int)(value)) ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (value - newValue < .5) {rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_5, ____chimes_did_disable2); return newValue; } else {rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_5, ____chimes_did_disable2); return newValue++; } ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_5, ____chimes_did_disable2); }
# 60 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 60 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void setIf_npm(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ);
void setIf_quick(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ); void setIf(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ);
void setIf_resumable(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ){const int ____chimes_did_disable3 = new_stack((void *)(&setIf), "setIf", &____must_manage_setIf, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910309646UL), (size_t)(7756533236910309647UL), (size_t)(7756533236910309648UL), (size_t)(7756533236910309649UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 64 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 65 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (array3D[x * *dimY * *dimZ+y * *dimZ + z] == testValue) {array3D[x * *dimY * *dimZ + y * *dimZ + z] = newValue; };
# 67 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 69 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 70 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "setIf", &____must_manage_setIf, ____alias_loc_id_6, ____chimes_did_disable3); }
# 79 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 79 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randu_npm(int * seed, int index);
double randu_quick(int * seed, int index); double randu(int * seed, int index);
double randu_resumable(int * seed, int index)
# 80 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&randu), "randu", &____must_manage_randu, 2, 0, (size_t)(7756533236910309689UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int num; num = (A * seed[index] + C) ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 seed[index] = num % M;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "randu", &____must_manage_randu, ____alias_loc_id_7, ____chimes_did_disable4); return fabs(seed[index]/((double) M));
# 84 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 93 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randn_npm(int * seed, int index);
double randn_quick(int * seed, int index); double randn(int * seed, int index);
double randn_resumable(int * seed, int index){const int ____chimes_did_disable5 = new_stack((void *)(&randn), "randn", &____must_manage_randn, 2, 0, (size_t)(7756533236910309727UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double u; u = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double v; v = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double cosine; cosine = (cos(2 * 3.1415926535897931 * v)) ;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double rt; rt = (-2 * log(u)) ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "randn", &____must_manage_randn, ____alias_loc_id_8, ____chimes_did_disable5); return sqrt(rt)*cosine;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 109 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void addNoise_npm(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed);
void addNoise_quick(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed); void addNoise(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed);
void addNoise_resumable(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed){const int ____chimes_did_disable6 = new_stack((void *)(&addNoise), "addNoise", &____must_manage_addNoise, 5, 0, (size_t)(7756533236910309831UL), (size_t)(7756533236910309832UL), (size_t)(7756533236910309833UL), (size_t)(7756533236910309834UL), (size_t)(7756533236910309835UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 114 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    array3D[x * *dimY * *dimZ + y * *dimZ + z] = array3D[x * *dimY * *dimZ + y * *dimZ + z] + (int)(5*({ calling_npm("randn", 0); randn_npm(seed, 0); }));
# 115 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 116 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 117 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 118 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "addNoise", &____must_manage_addNoise, ____alias_loc_id_9, ____chimes_did_disable6); }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 120 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void strelDisk_npm(int * disk, int radius);
void strelDisk_quick(int * disk, int radius); void strelDisk(int * disk, int radius);
void strelDisk_resumable(int * disk, int radius)
# 125 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&strelDisk), "strelDisk", &____must_manage_strelDisk, 2, 0, (size_t)(7756533236910309907UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius * 2 - 1) ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 129 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 130 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt(pow((double)(x - radius + 1), 2) + pow((double)(y - radius + 1), 2))) ;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < radius) {disk[x*diameter + y] = 1; };
# 133 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 134 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "strelDisk", &____must_manage_strelDisk, ____alias_loc_id_10, ____chimes_did_disable7); }
# 147 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 147 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void dilate_matrix_npm(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error);
void dilate_matrix_quick(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error); void dilate_matrix(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error);
void dilate_matrix_resumable(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error)
# 148 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&dilate_matrix), "dilate_matrix", &____must_manage_dilate_matrix, 8, 0, (size_t)(7756533236910310058UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startX; startX = (posX - error) ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startX < 0)
# 151 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startX++;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startY; startY = (posY - error) ;
# 153 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startY < 0)
# 154 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startY++;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endX; endX = (posX + error) ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endX > dimX)
# 157 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endX--;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endY; endY = (posY + error) ;
# 159 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endY > dimY)
# 160 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endY--;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = startX; x < endX; x++){
# 163 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = startY; y < endY; y++){
# 164 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt(pow((double)(x - posX), 2) + pow((double)(y - posY), 2))) ;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < error) {matrix[x*dimY*dimZ + y*dimZ + posZ] = 1; };
# 167 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 168 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "dilate_matrix", &____must_manage_dilate_matrix, ____alias_loc_id_11, ____chimes_did_disable8); }
# 180 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 180 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void imdilate_disk_npm(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix);
void imdilate_disk_quick(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix); void imdilate_disk(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix);
void imdilate_disk_resumable(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix)
# 181 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&imdilate_disk), "imdilate_disk", &____must_manage_imdilate_disk, 6, 0, (size_t)(7756533236910310151UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310156UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(z = 0; z < dimZ; z++){
# 184 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < dimX; x++){
# 185 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < dimY; y++){
# 186 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if(matrix[x*dimY*dimZ + y*dimZ + z] == 1){
# 187 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     ({ calling_npm("dilate_matrix", 0); dilate_matrix_npm(newMatrix, x, y, z, dimX, dimY, dimZ, error); });
# 188 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    }
# 189 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 190 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 191 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "imdilate_disk", &____must_manage_imdilate_disk, ____alias_loc_id_12, ____chimes_did_disable9); }
# 193 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 194 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 200 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void getneighbors_npm(int * se, int numOnes, double * neighbors, int radius);
void getneighbors_quick(int * se, int numOnes, double * neighbors, int radius); void getneighbors(int * se, int numOnes, double * neighbors, int radius);
void getneighbors_resumable(int * se, int numOnes, double * neighbors, int radius){const int ____chimes_did_disable10 = new_stack((void *)(&getneighbors), "getneighbors", &____must_manage_getneighbors, 4, 0, (size_t)(7756533236910310246UL), (size_t)(0UL), (size_t)(7756533236910310248UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 202 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int neighY; neighY = (0) ;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int center; center = (radius - 1) ;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius * 2 - 1) ;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 206 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 207 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(se[x*diameter + y]){
# 208 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2] = (int)(y - center);
# 209 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2 + 1] = (int)(x - center);
# 210 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighY++;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 212 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 213 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 214 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "getneighbors", &____must_manage_getneighbors, ____alias_loc_id_13, ____chimes_did_disable10); }
# 227 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 227 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void videoSequence_npm(int * I, int IszX, int IszY, int Nfr, int * seed);static int (*____chimes_extern_func_abs)(int) = abs;
void videoSequence_quick(int * I, int IszX, int IszY, int Nfr, int * seed); void videoSequence(int * I, int IszX, int IszY, int Nfr, int * seed);
void videoSequence_resumable(int * I, int IszX, int IszY, int Nfr, int * seed){const int ____chimes_did_disable11 = new_stack((void *)(&videoSequence), "videoSequence", &____must_manage_videoSequence, 5, 5, (size_t)(7756533236910310456UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310460UL), "videoSequence|I|0", &____must_checkpoint_videoSequence_I_0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "videoSequence|IszX|0", &____must_checkpoint_videoSequence_IszX_0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0, "videoSequence|IszY|0", &____must_checkpoint_videoSequence_IszY_0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "videoSequence|Nfr|0", &____must_checkpoint_videoSequence_Nfr_0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "videoSequence|seed|0", &____must_checkpoint_videoSequence_seed_0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0) ; int pos;
int yk;
int xk;
int y0;
int x0;
int max_size;
int k;
 if (____must_checkpoint_videoSequence_pos_0 || ____must_checkpoint_videoSequence_yk_0 || ____must_checkpoint_videoSequence_xk_0 || ____must_checkpoint_videoSequence_y0_0 || ____must_checkpoint_videoSequence_x0_0 || ____must_checkpoint_videoSequence_max_size_0 || ____must_checkpoint_videoSequence_k_0) { register_stack_vars(7, "videoSequence|pos|0", &____must_checkpoint_videoSequence_pos_0, "i32", (void *)(&pos), (size_t)4, 0, 0, 0, "videoSequence|yk|0", &____must_checkpoint_videoSequence_yk_0, "i32", (void *)(&yk), (size_t)4, 0, 0, 0, "videoSequence|xk|0", &____must_checkpoint_videoSequence_xk_0, "i32", (void *)(&xk), (size_t)4, 0, 0, 0, "videoSequence|y0|0", &____must_checkpoint_videoSequence_y0_0, "i32", (void *)(&y0), (size_t)4, 0, 0, 0, "videoSequence|x0|0", &____must_checkpoint_videoSequence_x0_0, "i32", (void *)(&x0), (size_t)4, 0, 0, 0, "videoSequence|max_size|0", &____must_checkpoint_videoSequence_max_size_0, "i32", (void *)(&max_size), (size_t)4, 0, 0, 0, "videoSequence|k|0", &____must_checkpoint_videoSequence_k_0, "i32", (void *)(&k), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    max_size = (IszX * IszY * Nfr) ;
# 230 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    x0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszY / 2.); })) ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    y0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszX / 2.); })) ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 I[x0 *IszY *Nfr + y0 * Nfr + 0] = 1;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 238 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   call_lbl_1: xk = (____chimes_does_checkpoint_abs_npm ? ( ({ int ____chimes_arg0; if (!____chimes_replaying) { ____chimes_arg0 = (x0 + (k - 1)); } calling((void*)abs, 1, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (abs)(____chimes_arg0); }) ) : (({ calling_npm("abs", ____alias_loc_id_1); (*____chimes_extern_func_abs)(x0 + (k-1)); })));
# 239 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   call_lbl_2: yk = (____chimes_does_checkpoint_abs_npm ? ( ({ int ____chimes_arg1; if (!____chimes_replaying) { ____chimes_arg1 = (y0 - 2 * (k - 1)); } calling((void*)abs, 2, ____alias_loc_id_0, 0UL, 1, (size_t)(0UL)); (abs)(____chimes_arg1); }) ) : (({ calling_npm("abs", ____alias_loc_id_0); (*____chimes_extern_func_abs)(y0 - 2*(k-1)); })));
# 240 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  pos = yk * IszY * Nfr + xk *Nfr + k;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (pos >= max_size) {pos = 0; };
# 243 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  I[pos] = 1;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 245 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 246 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 247 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *newMatrix; newMatrix = ((int *)malloc_wrapper(sizeof(int) * IszX * IszY * Nfr, 7756533236910310412UL, 0, 0)) ;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("imdilate_disk", 0); imdilate_disk_npm(I, IszX, IszY, Nfr, 5, newMatrix); });
# 249 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < IszX; x++){
# 251 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < IszY; y++){
# 252 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(k = 0; k < Nfr; k++){
# 253 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I[x*IszY*Nfr + y*Nfr + k] = newMatrix[x*IszY*Nfr + y*Nfr + k];
# 254 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 255 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 256 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 257 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(newMatrix, 7756533236910310412UL);
# 258 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 259 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("setIf", 0); setIf_npm(0, 100, I, &IszX, &IszY, &Nfr); });
# 261 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("setIf", 0); setIf_npm(1, 228, I, &IszX, &IszY, &Nfr); });
# 262 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 263 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("addNoise", 0); addNoise_npm(I, &IszX, &IszY, &Nfr, seed); });
# 264 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "videoSequence", &____must_manage_videoSequence, ____alias_loc_id_14, ____chimes_did_disable11); }
# 265 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 268 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 269 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 270 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 271 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 272 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double calcLikelihoodSum_npm(int * I, int * ind, int numOnes);
double calcLikelihoodSum_quick(int * I, int * ind, int numOnes); double calcLikelihoodSum(int * I, int * ind, int numOnes);
double calcLikelihoodSum_resumable(int * I, int * ind, int numOnes){const int ____chimes_did_disable12 = new_stack((void *)(&calcLikelihoodSum), "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, 3, 0, (size_t)(7756533236910310520UL), (size_t)(7756533236910310521UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double likelihoodSum; likelihoodSum = (0.) ;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y; ;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (y = 0; y < numOnes; y++) { likelihoodSum += (pow((I[ind[y]] - 100),2) - pow((I[ind[y]]-228),2))/50.0; };
# 277 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, ____alias_loc_id_15, ____chimes_did_disable12); return likelihoodSum;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 287 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 287 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndex_npm(double * CDF, int lengthCDF, double value);
int findIndex_quick(double * CDF, int lengthCDF, double value); int findIndex(double * CDF, int lengthCDF, double value);
int findIndex_resumable(double * CDF, int lengthCDF, double value){const int ____chimes_did_disable13 = new_stack((void *)(&findIndex), "findIndex", &____must_manage_findIndex, 3, 0, (size_t)(7756533236910310572UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int index; index = (-1) ;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; ;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < lengthCDF; x++){
# 291 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if(CDF[x] >= value){
# 292 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   index = x;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   break;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 295 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 296 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(index == -1){
# 297 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_16, ____chimes_did_disable13); return lengthCDF-1;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 299 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_16, ____chimes_did_disable13); return index;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 311 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 311 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndexBin_npm(double * CDF, int beginIndex, int endIndex, double value);
int findIndexBin_quick(double * CDF, int beginIndex, int endIndex, double value); int findIndexBin(double * CDF, int beginIndex, int endIndex, double value);
int findIndexBin_resumable(double * CDF, int beginIndex, int endIndex, double value){const int ____chimes_did_disable14 = new_stack((void *)(&findIndexBin), "findIndexBin", &____must_manage_findIndexBin, 4, 0, (size_t)(7756533236910310689UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (endIndex < beginIndex) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return -1; };
# 314 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int middleIndex; middleIndex = (beginIndex + ((endIndex - beginIndex) / 2)) ;
# 315 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(CDF[middleIndex] >= value)
# 317 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 318 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (middleIndex == 0) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return middleIndex; } else if (CDF[middleIndex-1] < value) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return middleIndex; } else if(CDF[middleIndex-1] == value)
# 324 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  {
# 325 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   while(middleIndex > 0 && CDF[middleIndex-1] == value)
# 326 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   middleIndex--;
# 327 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return middleIndex;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 329 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 330 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (CDF[middleIndex] > value) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return ({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, beginIndex, middleIndex+1, value); }); };
# 332 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return ({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, middleIndex-1, endIndex, value); });
# 333 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 345 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 345 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void particleFilter_npm(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles);
void particleFilter_quick(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles); void particleFilter(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles);
void particleFilter_resumable(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles){const int ____chimes_did_disable15 = new_stack((void *)(&particleFilter), "particleFilter", &____must_manage_particleFilter, 6, 0, (size_t)(7756533236910311668UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311672UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 346 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int max_size; max_size = (IszX * IszY * Nfr) ;
# 348 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long start; start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 350 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double xe; xe = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY / 2.); })) ;
# 351 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ye; ye = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX / 2.); })) ;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 353 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 354 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int radius; radius = (5) ;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius * 2 - 1) ;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *disk; disk = ((int *)malloc_wrapper(diameter * diameter * sizeof(int), 7756533236910310803UL, 0, 0)) ;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("strelDisk", 0); strelDisk_npm(disk, radius); });
# 358 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int countOnes; countOnes = (0) ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 361 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 362 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (disk[x*diameter + y] == 1) {countOnes++; };
# 364 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 365 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 366 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *objxy; objxy = ((double *)malloc_wrapper(countOnes * 2 * sizeof(double), 7756533236910311084UL, 0, 0)) ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("getneighbors", 0); getneighbors_npm(disk, countOnes, objxy, radius); });
# 368 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 369 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_neighbors; get_neighbors = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_0; ____chimes_unroll_var_0 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, get_neighbors); })) ; printf("TIME TO GET NEIGHBORS TOOK: %f\n", ____chimes_unroll_var_0);
# 371 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 372 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *weights; weights = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311249UL, 0, 0)); { call_lbl_45: ; bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(45, &____chimes_region_id0, 1, &x); int ____chimes_first_iter0 = 1; ;
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(weights, Nparticles) private(x) firstprivate(____chimes_first_iter0)
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 374 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &x); ____chimes_first_iter0 = 0; }
# 375 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  weights[x] = 1/((double)(Nparticles));
# 376 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 377 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_weights; get_weights = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_1; ____chimes_unroll_var_1 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_neighbors, get_weights); })) ; printf("TIME TO GET WEIGHTSTOOK: %f\n", ____chimes_unroll_var_1);
# 379 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 380 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *likelihood; likelihood = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311202UL, 0, 0)) ;
# 381 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *arrayX; arrayX = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311076UL, 0, 0)) ;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *arrayY; arrayY = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311092UL, 0, 0)) ;
# 383 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *xj; xj = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311587UL, 0, 0)) ;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *yj; yj = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311597UL, 0, 0)) ;
# 385 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *CDF; CDF = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311452UL, 0, 0)) ;
# 386 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *u; u = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311500UL, 0, 0)) ;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *ind; ind = ((int *)malloc_wrapper(sizeof(int) * countOnes * Nparticles, 7756533236910311125UL, 0, 0)); { call_lbl_46: ; bool ____chimes_disable1 = disable_current_thread(); void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(46, &____chimes_region_id1, 1, &x); int ____chimes_first_iter1 = 1; ;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, xe, ye) private(x) firstprivate(____chimes_first_iter1)
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 389 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 1, &x); ____chimes_first_iter1 = 0; }
# 390 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayX[x] = xe;
# 391 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayY[x] = ye;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 1); reenable_current_thread(____chimes_disable1); }
# 393 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int k; ;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 395 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long ____chimes_unroll_var_2; ____chimes_unroll_var_2 = (({ calling_npm("get_time", 0); get_time_npm(); })) ; float ____chimes_unroll_var_3; ____chimes_unroll_var_3 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_weights, ____chimes_unroll_var_2); })) ; printf("TIME TO SET ARRAYS TOOK: %f\n", ____chimes_unroll_var_3);
# 396 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int indX; int indY; ;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 398 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long set_arrays; set_arrays = (({ calling_npm("get_time", 0); get_time_npm(); })); { call_lbl_47: ; bool ____chimes_disable2 = disable_current_thread(); void *____chimes_parent_ctx3 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth2 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth2 = get_thread_stack_depth(); size_t ____chimes_region_id2; unsigned ____chimes_parent_thread2 = entering_omp_parallel(47, &____chimes_region_id2, 1, &x); int ____chimes_first_iter2 = 1; ;
# 399 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 401 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, Nparticles, seed) private(x) firstprivate(____chimes_first_iter2)
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter2) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread2, ____chimes_parent_ctx3, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth2, ____chimes_region_id2, 1, &x); ____chimes_first_iter2 = 0; }
# 404 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] += 1 + 5*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 405 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] += -2 + 2*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 406 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth2, ____chimes_region_id2, 1); reenable_current_thread(____chimes_disable2); }
# 407 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long error; error = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 408 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_4; ____chimes_unroll_var_4 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(set_arrays, error); })) ; printf("TIME TO SET ERROR TOOK: %f\n", ____chimes_unroll_var_4); { call_lbl_48: ; bool ____chimes_disable3 = disable_current_thread(); void *____chimes_parent_ctx4 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth3 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth3 = get_thread_stack_depth(); size_t ____chimes_region_id3; unsigned ____chimes_parent_thread3 = entering_omp_parallel(48, &____chimes_region_id3, 4, &indX, &indY, &x, &y); int ____chimes_first_iter3 = 1; ;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(likelihood, I, arrayX, arrayY, objxy, ind) private(x, y, indX, indY) firstprivate(____chimes_first_iter3)
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 411 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter3) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread3, ____chimes_parent_ctx4, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth3, ____chimes_region_id3, 4, &indX, &indY, &x, &y); ____chimes_first_iter3 = 0; }
# 412 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 413 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 415 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 416 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 417 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < countOnes; y++){
# 418 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    indX = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayX[x]); }) + objxy[y*2 + 1];
# 419 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    indY = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayY[x]); }) + objxy[y*2];
# 420 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind[x*countOnes + y] = fabs(indX*IszY*Nfr + indY*Nfr + k);
# 421 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (ind[x*countOnes + y] >= max_size) {ind[x*countOnes + y] = 0; };
# 423 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 424 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = 0;
# 425 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for (y = 0; y < countOnes; y++) { likelihood[x] += (pow((I[ind[x*countOnes + y]] - 100),2) - pow((I[ind[x*countOnes + y]]-228),2))/50.0; };
# 427 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = likelihood[x]/((double) countOnes);
# 428 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth3, ____chimes_region_id3, 1); reenable_current_thread(____chimes_disable3); }
# 429 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long likelihood_time; likelihood_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 430 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_5; ____chimes_unroll_var_5 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(error, likelihood_time); })) ; printf("TIME TO GET LIKELIHOODS TOOK: %f\n", ____chimes_unroll_var_5); { call_lbl_49: ; bool ____chimes_disable4 = disable_current_thread(); void *____chimes_parent_ctx5 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth4 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth4 = get_thread_stack_depth(); size_t ____chimes_region_id4; unsigned ____chimes_parent_thread4 = entering_omp_parallel(49, &____chimes_region_id4, 1, &x); int ____chimes_first_iter4 = 1; ;
# 431 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 432 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(Nparticles, weights, likelihood) private(x) firstprivate(____chimes_first_iter4)
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 434 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter4) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread4, ____chimes_parent_ctx5, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth4, ____chimes_region_id4, 1, &x); ____chimes_first_iter4 = 0; }
# 435 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x] * exp(likelihood[x]);
# 436 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth4, ____chimes_region_id4, 1); reenable_current_thread(____chimes_disable4); }
# 437 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long exponential; exponential = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_6; ____chimes_unroll_var_6 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(likelihood_time, exponential); })) ; printf("TIME TO GET EXP TOOK: %f\n", ____chimes_unroll_var_6);
# 439 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double sumWeights; sumWeights = (0); { call_lbl_50: ; bool ____chimes_disable5 = disable_current_thread(); void *____chimes_parent_ctx6 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth5 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth5 = get_thread_stack_depth(); size_t ____chimes_region_id5; unsigned ____chimes_parent_thread5 = entering_omp_parallel(50, &____chimes_region_id5, 1, &x); int ____chimes_first_iter5 = 1; ;
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:sumWeights) firstprivate(____chimes_first_iter5)
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 441 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter5) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread5, ____chimes_parent_ctx6, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth5, ____chimes_region_id5, 1, &x); ____chimes_first_iter5 = 0; }
# 442 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   sumWeights += weights[x];
# 443 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth5, ____chimes_region_id5, 1); reenable_current_thread(____chimes_disable5); }
# 444 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long sum_time; sum_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_7; ____chimes_unroll_var_7 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(exponential, sum_time); })) ; printf("TIME TO SUM WEIGHTS TOOK: %f\n", ____chimes_unroll_var_7); { call_lbl_51: ; bool ____chimes_disable6 = disable_current_thread(); void *____chimes_parent_ctx7 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth6 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth6 = get_thread_stack_depth(); size_t ____chimes_region_id6; unsigned ____chimes_parent_thread6 = entering_omp_parallel(51, &____chimes_region_id6, 1, &x); int ____chimes_first_iter6 = 1; ;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(sumWeights, weights) private(x) firstprivate(____chimes_first_iter6)
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 447 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter6) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread6, ____chimes_parent_ctx7, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth6, ____chimes_region_id6, 1, &x); ____chimes_first_iter6 = 0; }
# 448 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x]/sumWeights;
# 449 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth6, ____chimes_region_id6, 1); reenable_current_thread(____chimes_disable6); }
# 450 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long normalize; normalize = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_8; ____chimes_unroll_var_8 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(sum_time, normalize); })) ; printf("TIME TO NORMALIZE WEIGHTS TOOK: %f\n", ____chimes_unroll_var_8);
# 452 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xe = 0;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ye = 0; { call_lbl_52: ; bool ____chimes_disable7 = disable_current_thread(); void *____chimes_parent_ctx8 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth7 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth7 = get_thread_stack_depth(); size_t ____chimes_region_id7; unsigned ____chimes_parent_thread7 = entering_omp_parallel(52, &____chimes_region_id7, 1, &x); int ____chimes_first_iter7 = 1; ;
# 454 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:xe, ye) firstprivate(____chimes_first_iter7)
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 456 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter7) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread7, ____chimes_parent_ctx8, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth7, ____chimes_region_id7, 1, &x); ____chimes_first_iter7 = 0; }
# 457 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xe += arrayX[x] * weights[x];
# 458 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ye += arrayY[x] * weights[x];
# 459 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth7, ____chimes_region_id7, 1); reenable_current_thread(____chimes_disable7); }
# 460 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long move_time; move_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_9; ____chimes_unroll_var_9 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(normalize, move_time); })) ; printf("TIME TO MOVE OBJECT TOOK: %f\n", ____chimes_unroll_var_9);
# 462 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("XE: %lf\n", xe);
# 463 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("YE: %lf\n", ye);
# 464 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double ____chimes_unroll_var_10; ____chimes_unroll_var_10 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY / 2.); })) ; double ____chimes_unroll_var_11; ____chimes_unroll_var_11 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX / 2.); })) ; double distance; distance = (sqrt(pow((double)(xe - (int)____chimes_unroll_var_10), 2) + pow((double)(ye - (int)____chimes_unroll_var_11), 2))) ;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%lf\n", distance);
# 466 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 467 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 468 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 469 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 470 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 471 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 472 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 473 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  CDF[0] = weights[0];
# 474 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 1; x < Nparticles; x++){
# 475 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   CDF[x] = weights[x] + CDF[x-1];
# 476 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 477 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long cum_sum; cum_sum = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 478 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_12; ____chimes_unroll_var_12 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(move_time, cum_sum); })) ; printf("TIME TO CALC CUM SUM TOOK: %f\n", ____chimes_unroll_var_12);
# 479 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double u1; u1 = ((1 / ((double)(Nparticles))) * ({ calling_npm("randu", 0); randu_npm(seed, 0); })); { call_lbl_53: ; bool ____chimes_disable8 = disable_current_thread(); void *____chimes_parent_ctx9 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth8 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth8 = get_thread_stack_depth(); size_t ____chimes_region_id8; unsigned ____chimes_parent_thread8 = entering_omp_parallel(53, &____chimes_region_id8, 1, &x); int ____chimes_first_iter8 = 1; ;
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(u, u1, Nparticles) private(x) firstprivate(____chimes_first_iter8)
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 481 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter8) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread8, ____chimes_parent_ctx9, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth8, ____chimes_region_id8, 1, &x); ____chimes_first_iter8 = 0; }
# 482 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   u[x] = u1 + x/((double)(Nparticles));
# 483 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth8, ____chimes_region_id8, 1); reenable_current_thread(____chimes_disable8); }
# 484 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long u_time; u_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 485 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_13; ____chimes_unroll_var_13 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(cum_sum, u_time); })) ; printf("TIME TO CALC U TOOK: %f\n", ____chimes_unroll_var_13);
# 486 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int j; int i; ;; { call_lbl_54: ; bool ____chimes_disable9 = disable_current_thread(); void *____chimes_parent_ctx10 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth9 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth9 = get_thread_stack_depth(); size_t ____chimes_region_id9; unsigned ____chimes_parent_thread9 = entering_omp_parallel(54, &____chimes_region_id9, 2, &i, &j); int ____chimes_first_iter9 = 1;
# 487 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(CDF, Nparticles, xj, yj, u, arrayX, arrayY) private(i, j) firstprivate(____chimes_first_iter9)
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 489 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(j = 0; j < Nparticles; j++){ { if (____chimes_first_iter9) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread9, ____chimes_parent_ctx10, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth9, ____chimes_region_id9, 2, &i, &j); ____chimes_first_iter9 = 0; }
# 490 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   i = ({ calling_npm("findIndex", 0); findIndex_npm(CDF, Nparticles, u[j]); });
# 491 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (i == -1) {i = Nparticles-1; };
# 493 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xj[j] = arrayX[i];
# 494 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   yj[j] = arrayY[i];
# 495 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 496 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth9, ____chimes_region_id9, 1); reenable_current_thread(____chimes_disable9); }
# 497 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long xyj_time; xyj_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 498 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_14; ____chimes_unroll_var_14 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(u_time, xyj_time); })) ; printf("TIME TO CALC NEW ARRAY X AND Y TOOK: %f\n", ____chimes_unroll_var_14);
# 499 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 501 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 502 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 503 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] = xj[x];
# 504 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] = yj[x];
# 505 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = 1/((double)(Nparticles));
# 506 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 507 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long reset; reset = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 508 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_15; ____chimes_unroll_var_15 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(xyj_time, reset); })) ; printf("TIME TO RESET WEIGHTS TOOK: %f\n", ____chimes_unroll_var_15);
# 509 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 510 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(disk, 7756533236910310803UL);
# 511 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(objxy, 7756533236910311084UL);
# 512 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(weights, 7756533236910311249UL);
# 513 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(likelihood, 7756533236910311202UL);
# 514 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(xj, 7756533236910311587UL);
# 515 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(yj, 7756533236910311597UL);
# 516 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(arrayX, 7756533236910311076UL);
# 517 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(arrayY, 7756533236910311092UL);
# 518 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(CDF, 7756533236910311452UL);
# 519 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(u, 7756533236910311500UL);
# 520 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(ind, 7756533236910311125UL);
# 521 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "particleFilter", &____must_manage_particleFilter, ____alias_loc_id_18, ____chimes_did_disable15); }
# 522 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int main_quick(int argc, char * argv[]); int main(int argc, char * argv[]);
int main_resumable(int argc, char * argv[]){const int ____chimes_did_disable16 = new_stack((void *)(&main), "main", &____must_manage_main, 2, 0, (size_t)(0UL), (size_t)(7756533236910311898UL)) ; long long start;
int *I;
int *seed;
int Nparticles;
int Nfr;
int IszY;
int IszX;
 if (____must_checkpoint_main_start_0 || ____must_checkpoint_main_I_0 || ____must_checkpoint_main_seed_0 || ____must_checkpoint_main_Nparticles_0 || ____must_checkpoint_main_Nfr_0 || ____must_checkpoint_main_IszY_0 || ____must_checkpoint_main_IszX_0) { register_stack_vars(7, "main|start|0", &____must_checkpoint_main_start_0, "i64", (void *)(&start), (size_t)8, 0, 0, 0, "main|I|0", &____must_checkpoint_main_I_0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "main|seed|0", &____must_checkpoint_main_seed_0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0, "main|Nparticles|0", &____must_checkpoint_main_Nparticles_0, "i32", (void *)(&Nparticles), (size_t)4, 0, 0, 0, "main|Nfr|0", &____must_checkpoint_main_Nfr_0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "main|IszY|0", &____must_checkpoint_main_IszY_0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "main|IszX|0", &____must_checkpoint_main_IszX_0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(32): { goto call_lbl_32; } default: { chimes_error(); } } } ; ;
# 523 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 524 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  char *usage; usage = ("openmp.out -x <dimX> -y <dimY> -z <Nfr> -np <Nparticles>") ;
# 525 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 526 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(argc != 9)
# 527 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 528 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%s\n", usage);
# 529 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 530 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 531 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 532 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( strcmp( argv[1], "-x" ) || strcmp( argv[3], "-y" ) || strcmp( argv[5], "-z" ) || strcmp( argv[7], "-np" ) ) {
# 533 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf( "%s\n",usage );
# 534 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 535 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 536 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 537 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     ;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[2], "%d", &IszX ) == (-1) ) {
# 541 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimX input is incorrect");
# 542 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 543 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 544 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 545 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszX <= 0 ) {
# 546 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimX must be > 0\n");
# 547 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 548 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 549 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 551 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[4], "%d", &IszY ) == (-1) ) {
# 552 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimY input is incorrect");
# 553 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 554 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 555 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 556 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszY <= 0 ) {
# 557 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimY must be > 0\n");
# 558 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 561 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 562 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[6], "%d", &Nfr ) == (-1) ) {
# 563 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of frames input is incorrect");
# 564 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 566 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nfr <= 0 ) {
# 568 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("number of frames must be > 0\n");
# 569 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 571 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 572 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 573 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[8], "%d", &Nparticles ) == (-1) ) {
# 574 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of particles input is incorrect");
# 575 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 576 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 577 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nparticles <= 0 ) {
# 579 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("Number of particles must be > 0\n");
# 580 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 582 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    seed = ((int *)malloc_wrapper(sizeof(int) * Nparticles, 7756533236910311820UL, 0, 0)) ;
# 584 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int i; ;
# 585 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (i = 0; i < Nparticles; i++) { seed[i] = time(0)*i; };
# 587 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 588 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I = ((int *)malloc_wrapper(sizeof(int) * IszX * IszY * Nfr, 7756533236910311838UL, 0, 0)) ;
# 589 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 590 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_32: (____chimes_does_checkpoint_videoSequence_npm ? ( ({ calling((void*)videoSequence, 32, ____alias_loc_id_2, 0UL, 5, (size_t)(7756533236910311838UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311820UL)); (videoSequence)(I, IszX, IszY, Nfr, seed); }) ) : (({ calling_npm("videoSequence", ____alias_loc_id_2); videoSequence_npm(I, IszX, IszY, Nfr, seed); })));
# 592 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long endVideoSequence; endVideoSequence = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 593 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_16; ____chimes_unroll_var_16 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endVideoSequence); })) ; printf("VIDEO SEQUENCE TOOK %f\n", ____chimes_unroll_var_16);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 595 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("particleFilter", 0); particleFilter_npm(I, IszX, IszY, Nfr, seed, Nparticles); });
# 596 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long endParticleFilter; endParticleFilter = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 597 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_17; ____chimes_unroll_var_17 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(endVideoSequence, endParticleFilter); })) ; printf("PARTICLE FILTER TOOK %f\n", ____chimes_unroll_var_17);
# 598 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_18; ____chimes_unroll_var_18 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endParticleFilter); })) ; printf("ENTIRE PROGRAM TOOK %f\n", ____chimes_unroll_var_18);
# 599 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 600 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(seed, 7756533236910311820UL);
# 601 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(I, 7756533236910311838UL);
# 602 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 603 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
long long get_time_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&get_time), "get_time", &____must_manage_get_time, 0, 0) ; struct timeval tv;
 if (____must_checkpoint_get_time_tv_0) { register_stack_vars(1, "get_time|tv|0", &____must_checkpoint_get_time_tv_0, "%struct.timeval = type { i64, i64 }", (void *)(&tv), (size_t)16, 0, 1, 0); } ; ;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 gettimeofday(&tv, __null);
# 34 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "get_time", &____must_manage_get_time, ____alias_loc_id_3, ____chimes_did_disable0); return (tv.tv_sec * 1000000) + tv.tv_usec;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

long long get_time() { return (____chimes_replaying ? get_time_resumable() : get_time_quick()); }

float elapsed_time_quick(long long start_time, long long end_time) {const int ____chimes_did_disable1 = new_stack((void *)(&elapsed_time), "elapsed_time", &____must_manage_elapsed_time, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
        rm_stack(false, 0UL, "elapsed_time", &____must_manage_elapsed_time, ____alias_loc_id_4, ____chimes_did_disable1); return (float) (end_time - start_time) / (1000 * 1000);
# 39 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

float elapsed_time(long long start_time, long long end_time) { return (____chimes_replaying ? elapsed_time_resumable(start_time, end_time) : elapsed_time_quick(start_time, end_time)); }

double roundDouble_quick(double value){const int ____chimes_did_disable2 = new_stack((void *)(&roundDouble), "roundDouble", &____must_manage_roundDouble, 1, 0, (size_t)(0UL)) ; ; ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int newValue; newValue = ((int)(value)) ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (value - newValue < .5) {rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_5, ____chimes_did_disable2); return newValue; } else {rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_5, ____chimes_did_disable2); return newValue++; } ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_5, ____chimes_did_disable2); }

double roundDouble(double value) { return (____chimes_replaying ? roundDouble_resumable(value) : roundDouble_quick(value)); }

void setIf_quick(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ){const int ____chimes_did_disable3 = new_stack((void *)(&setIf), "setIf", &____must_manage_setIf, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910309646UL), (size_t)(7756533236910309647UL), (size_t)(7756533236910309648UL), (size_t)(7756533236910309649UL)) ; ; ;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 64 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 65 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (array3D[x * *dimY * *dimZ+y * *dimZ + z] == testValue) {array3D[x * *dimY * *dimZ + y * *dimZ + z] = newValue; };
# 67 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 69 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 70 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "setIf", &____must_manage_setIf, ____alias_loc_id_6, ____chimes_did_disable3); }

void setIf(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ) { (____chimes_replaying ? setIf_resumable(testValue, newValue, array3D, dimX, dimY, dimZ) : setIf_quick(testValue, newValue, array3D, dimX, dimY, dimZ)); }

double randu_quick(int * seed, int index)
# 80 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&randu), "randu", &____must_manage_randu, 2, 0, (size_t)(7756533236910309689UL), (size_t)(0UL)) ; ; ;
# 81 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int num; num = (A * seed[index] + C) ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 seed[index] = num % M;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "randu", &____must_manage_randu, ____alias_loc_id_7, ____chimes_did_disable4); return fabs(seed[index]/((double) M));
# 84 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double randu(int * seed, int index) { return (____chimes_replaying ? randu_resumable(seed, index) : randu_quick(seed, index)); }

double randn_quick(int * seed, int index){const int ____chimes_did_disable5 = new_stack((void *)(&randn), "randn", &____must_manage_randn, 2, 0, (size_t)(7756533236910309727UL), (size_t)(0UL)) ; ; ;
# 94 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double u; u = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double v; v = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double cosine; cosine = (cos(2 * 3.1415926535897931 * v)) ;
# 98 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double rt; rt = (-2 * log(u)) ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "randn", &____must_manage_randn, ____alias_loc_id_8, ____chimes_did_disable5); return sqrt(rt)*cosine;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double randn(int * seed, int index) { return (____chimes_replaying ? randn_resumable(seed, index) : randn_quick(seed, index)); }

void addNoise_quick(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed){const int ____chimes_did_disable6 = new_stack((void *)(&addNoise), "addNoise", &____must_manage_addNoise, 5, 0, (size_t)(7756533236910309831UL), (size_t)(7756533236910309832UL), (size_t)(7756533236910309833UL), (size_t)(7756533236910309834UL), (size_t)(7756533236910309835UL)) ; ; ;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 114 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    array3D[x * *dimY * *dimZ + y * *dimZ + z] = array3D[x * *dimY * *dimZ + y * *dimZ + z] + (int)(5*({ calling_npm("randn", 0); randn_npm(seed, 0); }));
# 115 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 116 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 117 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 118 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "addNoise", &____must_manage_addNoise, ____alias_loc_id_9, ____chimes_did_disable6); }

void addNoise(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed) { (____chimes_replaying ? addNoise_resumable(array3D, dimX, dimY, dimZ, seed) : addNoise_quick(array3D, dimX, dimY, dimZ, seed)); }

void strelDisk_quick(int * disk, int radius)
# 125 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&strelDisk), "strelDisk", &____must_manage_strelDisk, 2, 0, (size_t)(7756533236910309907UL), (size_t)(0UL)) ; ; ;
# 126 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius * 2 - 1) ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 129 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 130 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt(pow((double)(x - radius + 1), 2) + pow((double)(y - radius + 1), 2))) ;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < radius) {disk[x*diameter + y] = 1; };
# 133 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 134 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "strelDisk", &____must_manage_strelDisk, ____alias_loc_id_10, ____chimes_did_disable7); }

void strelDisk(int * disk, int radius) { (____chimes_replaying ? strelDisk_resumable(disk, radius) : strelDisk_quick(disk, radius)); }

void dilate_matrix_quick(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error)
# 148 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&dilate_matrix), "dilate_matrix", &____must_manage_dilate_matrix, 8, 0, (size_t)(7756533236910310058UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 149 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startX; startX = (posX - error) ;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startX < 0)
# 151 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startX++;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startY; startY = (posY - error) ;
# 153 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startY < 0)
# 154 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startY++;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endX; endX = (posX + error) ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endX > dimX)
# 157 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endX--;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endY; endY = (posY + error) ;
# 159 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endY > dimY)
# 160 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endY--;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = startX; x < endX; x++){
# 163 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = startY; y < endY; y++){
# 164 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt(pow((double)(x - posX), 2) + pow((double)(y - posY), 2))) ;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < error) {matrix[x*dimY*dimZ + y*dimZ + posZ] = 1; };
# 167 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 168 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "dilate_matrix", &____must_manage_dilate_matrix, ____alias_loc_id_11, ____chimes_did_disable8); }

void dilate_matrix(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error) { (____chimes_replaying ? dilate_matrix_resumable(matrix, posX, posY, posZ, dimX, dimY, dimZ, error) : dilate_matrix_quick(matrix, posX, posY, posZ, dimX, dimY, dimZ, error)); }

void imdilate_disk_quick(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix)
# 181 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&imdilate_disk), "imdilate_disk", &____must_manage_imdilate_disk, 6, 0, (size_t)(7756533236910310151UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310156UL)) ; ; ;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(z = 0; z < dimZ; z++){
# 184 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < dimX; x++){
# 185 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < dimY; y++){
# 186 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if(matrix[x*dimY*dimZ + y*dimZ + z] == 1){
# 187 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     ({ calling_npm("dilate_matrix", 0); dilate_matrix_npm(newMatrix, x, y, z, dimX, dimY, dimZ, error); });
# 188 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    }
# 189 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 190 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 191 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "imdilate_disk", &____must_manage_imdilate_disk, ____alias_loc_id_12, ____chimes_did_disable9); }

void imdilate_disk(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix) { (____chimes_replaying ? imdilate_disk_resumable(matrix, dimX, dimY, dimZ, error, newMatrix) : imdilate_disk_quick(matrix, dimX, dimY, dimZ, error, newMatrix)); }

void getneighbors_quick(int * se, int numOnes, double * neighbors, int radius){const int ____chimes_did_disable10 = new_stack((void *)(&getneighbors), "getneighbors", &____must_manage_getneighbors, 4, 0, (size_t)(7756533236910310246UL), (size_t)(0UL), (size_t)(7756533236910310248UL), (size_t)(0UL)) ; ; ;
# 201 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 202 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int neighY; neighY = (0) ;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int center; center = (radius - 1) ;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius * 2 - 1) ;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 206 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 207 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(se[x*diameter + y]){
# 208 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2] = (int)(y - center);
# 209 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2 + 1] = (int)(x - center);
# 210 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighY++;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 212 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 213 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 214 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "getneighbors", &____must_manage_getneighbors, ____alias_loc_id_13, ____chimes_did_disable10); }

void getneighbors(int * se, int numOnes, double * neighbors, int radius) { (____chimes_replaying ? getneighbors_resumable(se, numOnes, neighbors, radius) : getneighbors_quick(se, numOnes, neighbors, radius)); }

void videoSequence_quick(int * I, int IszX, int IszY, int Nfr, int * seed){const int ____chimes_did_disable11 = new_stack((void *)(&videoSequence), "videoSequence", &____must_manage_videoSequence, 5, 5, (size_t)(7756533236910310456UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310460UL), "videoSequence|I|0", &____must_checkpoint_videoSequence_I_0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "videoSequence|IszX|0", &____must_checkpoint_videoSequence_IszX_0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0, "videoSequence|IszY|0", &____must_checkpoint_videoSequence_IszY_0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "videoSequence|Nfr|0", &____must_checkpoint_videoSequence_Nfr_0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "videoSequence|seed|0", &____must_checkpoint_videoSequence_seed_0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0) ; int pos;
int yk;
int xk;
int y0;
int x0;
int max_size;
int k;
 if (____must_checkpoint_videoSequence_pos_0 || ____must_checkpoint_videoSequence_yk_0 || ____must_checkpoint_videoSequence_xk_0 || ____must_checkpoint_videoSequence_y0_0 || ____must_checkpoint_videoSequence_x0_0 || ____must_checkpoint_videoSequence_max_size_0 || ____must_checkpoint_videoSequence_k_0) { register_stack_vars(7, "videoSequence|pos|0", &____must_checkpoint_videoSequence_pos_0, "i32", (void *)(&pos), (size_t)4, 0, 0, 0, "videoSequence|yk|0", &____must_checkpoint_videoSequence_yk_0, "i32", (void *)(&yk), (size_t)4, 0, 0, 0, "videoSequence|xk|0", &____must_checkpoint_videoSequence_xk_0, "i32", (void *)(&xk), (size_t)4, 0, 0, 0, "videoSequence|y0|0", &____must_checkpoint_videoSequence_y0_0, "i32", (void *)(&y0), (size_t)4, 0, 0, 0, "videoSequence|x0|0", &____must_checkpoint_videoSequence_x0_0, "i32", (void *)(&x0), (size_t)4, 0, 0, 0, "videoSequence|max_size|0", &____must_checkpoint_videoSequence_max_size_0, "i32", (void *)(&max_size), (size_t)4, 0, 0, 0, "videoSequence|k|0", &____must_checkpoint_videoSequence_k_0, "i32", (void *)(&k), (size_t)4, 0, 0, 0); } ; ;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    max_size = (IszX * IszY * Nfr) ;
# 230 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    x0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszY / 2.); })) ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    y0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszX / 2.); })) ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 I[x0 *IszY *Nfr + y0 * Nfr + 0] = 1;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 238 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   call_lbl_1: xk = (____chimes_does_checkpoint_abs_npm ? ( ({ calling((void*)abs, 1, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (abs)(x0 + (k - 1)); }) ) : (({ calling_npm("abs", ____alias_loc_id_1); (*____chimes_extern_func_abs)(x0 + (k-1)); })));
# 239 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   call_lbl_2: yk = (____chimes_does_checkpoint_abs_npm ? ( ({ calling((void*)abs, 2, ____alias_loc_id_0, 0UL, 1, (size_t)(0UL)); (abs)(y0 - 2 * (k - 1)); }) ) : (({ calling_npm("abs", ____alias_loc_id_0); (*____chimes_extern_func_abs)(y0 - 2*(k-1)); })));
# 240 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  pos = yk * IszY * Nfr + xk *Nfr + k;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (pos >= max_size) {pos = 0; };
# 243 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  I[pos] = 1;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 245 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 246 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 247 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *newMatrix; newMatrix = ((int *)malloc_wrapper(sizeof(int) * IszX * IszY * Nfr, 7756533236910310412UL, 0, 0)) ;
# 248 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("imdilate_disk", 0); imdilate_disk_npm(I, IszX, IszY, Nfr, 5, newMatrix); });
# 249 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < IszX; x++){
# 251 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < IszY; y++){
# 252 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(k = 0; k < Nfr; k++){
# 253 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I[x*IszY*Nfr + y*Nfr + k] = newMatrix[x*IszY*Nfr + y*Nfr + k];
# 254 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 255 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 256 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 257 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(newMatrix, 7756533236910310412UL);
# 258 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 259 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("setIf", 0); setIf_npm(0, 100, I, &IszX, &IszY, &Nfr); });
# 261 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("setIf", 0); setIf_npm(1, 228, I, &IszX, &IszY, &Nfr); });
# 262 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 263 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("addNoise", 0); addNoise_npm(I, &IszX, &IszY, &Nfr, seed); });
# 264 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "videoSequence", &____must_manage_videoSequence, ____alias_loc_id_14, ____chimes_did_disable11); }

void videoSequence(int * I, int IszX, int IszY, int Nfr, int * seed) { (____chimes_replaying ? videoSequence_resumable(I, IszX, IszY, Nfr, seed) : videoSequence_quick(I, IszX, IszY, Nfr, seed)); }

double calcLikelihoodSum_quick(int * I, int * ind, int numOnes){const int ____chimes_did_disable12 = new_stack((void *)(&calcLikelihoodSum), "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, 3, 0, (size_t)(7756533236910310520UL), (size_t)(7756533236910310521UL), (size_t)(0UL)) ; ; ;
# 273 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double likelihoodSum; likelihoodSum = (0.) ;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y; ;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (y = 0; y < numOnes; y++) { likelihoodSum += (pow((I[ind[y]] - 100),2) - pow((I[ind[y]]-228),2))/50.0; };
# 277 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, ____alias_loc_id_15, ____chimes_did_disable12); return likelihoodSum;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double calcLikelihoodSum(int * I, int * ind, int numOnes) { return (____chimes_replaying ? calcLikelihoodSum_resumable(I, ind, numOnes) : calcLikelihoodSum_quick(I, ind, numOnes)); }

int findIndex_quick(double * CDF, int lengthCDF, double value){const int ____chimes_did_disable13 = new_stack((void *)(&findIndex), "findIndex", &____must_manage_findIndex, 3, 0, (size_t)(7756533236910310572UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 288 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int index; index = (-1) ;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; ;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < lengthCDF; x++){
# 291 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if(CDF[x] >= value){
# 292 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   index = x;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   break;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 295 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 296 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(index == -1){
# 297 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_16, ____chimes_did_disable13); return lengthCDF-1;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 299 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_16, ____chimes_did_disable13); return index;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

int findIndex(double * CDF, int lengthCDF, double value) { return (____chimes_replaying ? findIndex_resumable(CDF, lengthCDF, value) : findIndex_quick(CDF, lengthCDF, value)); }

int findIndexBin_quick(double * CDF, int beginIndex, int endIndex, double value){const int ____chimes_did_disable14 = new_stack((void *)(&findIndexBin), "findIndexBin", &____must_manage_findIndexBin, 4, 0, (size_t)(7756533236910310689UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 312 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (endIndex < beginIndex) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return -1; };
# 314 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int middleIndex; middleIndex = (beginIndex + ((endIndex - beginIndex) / 2)) ;
# 315 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(CDF[middleIndex] >= value)
# 317 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 318 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (middleIndex == 0) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return middleIndex; } else if (CDF[middleIndex-1] < value) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return middleIndex; } else if(CDF[middleIndex-1] == value)
# 324 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  {
# 325 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   while(middleIndex > 0 && CDF[middleIndex-1] == value)
# 326 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   middleIndex--;
# 327 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return middleIndex;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 329 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 330 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (CDF[middleIndex] > value) {rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return ({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, beginIndex, middleIndex+1, value); }); };
# 332 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_17, ____chimes_did_disable14); return ({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, middleIndex-1, endIndex, value); });
# 333 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

int findIndexBin(double * CDF, int beginIndex, int endIndex, double value) { return (____chimes_replaying ? findIndexBin_resumable(CDF, beginIndex, endIndex, value) : findIndexBin_quick(CDF, beginIndex, endIndex, value)); }

void particleFilter_quick(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles){const int ____chimes_did_disable15 = new_stack((void *)(&particleFilter), "particleFilter", &____must_manage_particleFilter, 6, 0, (size_t)(7756533236910311668UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311672UL), (size_t)(0UL)) ; ; ;
# 346 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int max_size; max_size = (IszX * IszY * Nfr) ;
# 348 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long start; start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 350 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double xe; xe = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY / 2.); })) ;
# 351 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ye; ye = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX / 2.); })) ;
# 352 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 353 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 354 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int radius; radius = (5) ;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius * 2 - 1) ;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *disk; disk = ((int *)malloc_wrapper(diameter * diameter * sizeof(int), 7756533236910310803UL, 0, 0)) ;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("strelDisk", 0); strelDisk_npm(disk, radius); });
# 358 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int countOnes; countOnes = (0) ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 361 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 362 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (disk[x*diameter + y] == 1) {countOnes++; };
# 364 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 365 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 366 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *objxy; objxy = ((double *)malloc_wrapper(countOnes * 2 * sizeof(double), 7756533236910311084UL, 0, 0)) ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("getneighbors", 0); getneighbors_npm(disk, countOnes, objxy, radius); });
# 368 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 369 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_neighbors; get_neighbors = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_0; ____chimes_unroll_var_0 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, get_neighbors); })) ; printf("TIME TO GET NEIGHBORS TOOK: %f\n", ____chimes_unroll_var_0);
# 371 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 372 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *weights; weights = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311249UL, 0, 0)); { call_lbl_45: ; bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(45, &____chimes_region_id0, 1, &x); int ____chimes_first_iter0 = 1; ;
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(weights, Nparticles) private(x) firstprivate(____chimes_first_iter0)
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 374 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &x); ____chimes_first_iter0 = 0; }
# 375 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  weights[x] = 1/((double)(Nparticles));
# 376 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 377 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_weights; get_weights = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 378 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_1; ____chimes_unroll_var_1 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_neighbors, get_weights); })) ; printf("TIME TO GET WEIGHTSTOOK: %f\n", ____chimes_unroll_var_1);
# 379 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 380 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *likelihood; likelihood = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311202UL, 0, 0)) ;
# 381 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *arrayX; arrayX = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311076UL, 0, 0)) ;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *arrayY; arrayY = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311092UL, 0, 0)) ;
# 383 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *xj; xj = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311587UL, 0, 0)) ;
# 384 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *yj; yj = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311597UL, 0, 0)) ;
# 385 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *CDF; CDF = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311452UL, 0, 0)) ;
# 386 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double *u; u = ((double *)malloc_wrapper(sizeof(double) * Nparticles, 7756533236910311500UL, 0, 0)) ;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *ind; ind = ((int *)malloc_wrapper(sizeof(int) * countOnes * Nparticles, 7756533236910311125UL, 0, 0)); { call_lbl_46: ; bool ____chimes_disable1 = disable_current_thread(); void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(46, &____chimes_region_id1, 1, &x); int ____chimes_first_iter1 = 1; ;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, xe, ye) private(x) firstprivate(____chimes_first_iter1)
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 389 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 1, &x); ____chimes_first_iter1 = 0; }
# 390 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayX[x] = xe;
# 391 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayY[x] = ye;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 } } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 1); reenable_current_thread(____chimes_disable1); }
# 393 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int k; ;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 395 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long ____chimes_unroll_var_2; ____chimes_unroll_var_2 = (({ calling_npm("get_time", 0); get_time_npm(); })) ; float ____chimes_unroll_var_3; ____chimes_unroll_var_3 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_weights, ____chimes_unroll_var_2); })) ; printf("TIME TO SET ARRAYS TOOK: %f\n", ____chimes_unroll_var_3);
# 396 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int indX; int indY; ;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 398 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long set_arrays; set_arrays = (({ calling_npm("get_time", 0); get_time_npm(); })); { call_lbl_47: ; bool ____chimes_disable2 = disable_current_thread(); void *____chimes_parent_ctx3 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth2 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth2 = get_thread_stack_depth(); size_t ____chimes_region_id2; unsigned ____chimes_parent_thread2 = entering_omp_parallel(47, &____chimes_region_id2, 1, &x); int ____chimes_first_iter2 = 1; ;
# 399 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 401 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, Nparticles, seed) private(x) firstprivate(____chimes_first_iter2)
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter2) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread2, ____chimes_parent_ctx3, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth2, ____chimes_region_id2, 1, &x); ____chimes_first_iter2 = 0; }
# 404 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] += 1 + 5*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 405 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] += -2 + 2*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 406 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth2, ____chimes_region_id2, 1); reenable_current_thread(____chimes_disable2); }
# 407 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long error; error = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 408 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_4; ____chimes_unroll_var_4 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(set_arrays, error); })) ; printf("TIME TO SET ERROR TOOK: %f\n", ____chimes_unroll_var_4); { call_lbl_48: ; bool ____chimes_disable3 = disable_current_thread(); void *____chimes_parent_ctx4 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth3 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth3 = get_thread_stack_depth(); size_t ____chimes_region_id3; unsigned ____chimes_parent_thread3 = entering_omp_parallel(48, &____chimes_region_id3, 4, &indX, &indY, &x, &y); int ____chimes_first_iter3 = 1; ;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(likelihood, I, arrayX, arrayY, objxy, ind) private(x, y, indX, indY) firstprivate(____chimes_first_iter3)
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 411 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter3) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread3, ____chimes_parent_ctx4, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth3, ____chimes_region_id3, 4, &indX, &indY, &x, &y); ____chimes_first_iter3 = 0; }
# 412 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 413 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 415 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 416 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 417 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < countOnes; y++){
# 418 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    indX = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayX[x]); }) + objxy[y*2 + 1];
# 419 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    indY = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayY[x]); }) + objxy[y*2];
# 420 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind[x*countOnes + y] = fabs(indX*IszY*Nfr + indY*Nfr + k);
# 421 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (ind[x*countOnes + y] >= max_size) {ind[x*countOnes + y] = 0; };
# 423 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 424 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = 0;
# 425 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for (y = 0; y < countOnes; y++) { likelihood[x] += (pow((I[ind[x*countOnes + y]] - 100),2) - pow((I[ind[x*countOnes + y]]-228),2))/50.0; };
# 427 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = likelihood[x]/((double) countOnes);
# 428 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth3, ____chimes_region_id3, 1); reenable_current_thread(____chimes_disable3); }
# 429 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long likelihood_time; likelihood_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 430 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_5; ____chimes_unroll_var_5 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(error, likelihood_time); })) ; printf("TIME TO GET LIKELIHOODS TOOK: %f\n", ____chimes_unroll_var_5); { call_lbl_49: ; bool ____chimes_disable4 = disable_current_thread(); void *____chimes_parent_ctx5 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth4 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth4 = get_thread_stack_depth(); size_t ____chimes_region_id4; unsigned ____chimes_parent_thread4 = entering_omp_parallel(49, &____chimes_region_id4, 1, &x); int ____chimes_first_iter4 = 1; ;
# 431 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 432 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(Nparticles, weights, likelihood) private(x) firstprivate(____chimes_first_iter4)
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 434 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter4) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread4, ____chimes_parent_ctx5, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth4, ____chimes_region_id4, 1, &x); ____chimes_first_iter4 = 0; }
# 435 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x] * exp(likelihood[x]);
# 436 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth4, ____chimes_region_id4, 1); reenable_current_thread(____chimes_disable4); }
# 437 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long exponential; exponential = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_6; ____chimes_unroll_var_6 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(likelihood_time, exponential); })) ; printf("TIME TO GET EXP TOOK: %f\n", ____chimes_unroll_var_6);
# 439 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double sumWeights; sumWeights = (0); { call_lbl_50: ; bool ____chimes_disable5 = disable_current_thread(); void *____chimes_parent_ctx6 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth5 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth5 = get_thread_stack_depth(); size_t ____chimes_region_id5; unsigned ____chimes_parent_thread5 = entering_omp_parallel(50, &____chimes_region_id5, 1, &x); int ____chimes_first_iter5 = 1; ;
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:sumWeights) firstprivate(____chimes_first_iter5)
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 441 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter5) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread5, ____chimes_parent_ctx6, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth5, ____chimes_region_id5, 1, &x); ____chimes_first_iter5 = 0; }
# 442 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   sumWeights += weights[x];
# 443 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth5, ____chimes_region_id5, 1); reenable_current_thread(____chimes_disable5); }
# 444 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long sum_time; sum_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 445 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_7; ____chimes_unroll_var_7 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(exponential, sum_time); })) ; printf("TIME TO SUM WEIGHTS TOOK: %f\n", ____chimes_unroll_var_7); { call_lbl_51: ; bool ____chimes_disable6 = disable_current_thread(); void *____chimes_parent_ctx7 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth6 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth6 = get_thread_stack_depth(); size_t ____chimes_region_id6; unsigned ____chimes_parent_thread6 = entering_omp_parallel(51, &____chimes_region_id6, 1, &x); int ____chimes_first_iter6 = 1; ;
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(sumWeights, weights) private(x) firstprivate(____chimes_first_iter6)
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 447 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter6) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread6, ____chimes_parent_ctx7, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth6, ____chimes_region_id6, 1, &x); ____chimes_first_iter6 = 0; }
# 448 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x]/sumWeights;
# 449 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth6, ____chimes_region_id6, 1); reenable_current_thread(____chimes_disable6); }
# 450 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long normalize; normalize = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 451 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_8; ____chimes_unroll_var_8 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(sum_time, normalize); })) ; printf("TIME TO NORMALIZE WEIGHTS TOOK: %f\n", ____chimes_unroll_var_8);
# 452 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xe = 0;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ye = 0; { call_lbl_52: ; bool ____chimes_disable7 = disable_current_thread(); void *____chimes_parent_ctx8 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth7 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth7 = get_thread_stack_depth(); size_t ____chimes_region_id7; unsigned ____chimes_parent_thread7 = entering_omp_parallel(52, &____chimes_region_id7, 1, &x); int ____chimes_first_iter7 = 1; ;
# 454 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:xe, ye) firstprivate(____chimes_first_iter7)
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 456 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter7) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread7, ____chimes_parent_ctx8, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth7, ____chimes_region_id7, 1, &x); ____chimes_first_iter7 = 0; }
# 457 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xe += arrayX[x] * weights[x];
# 458 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ye += arrayY[x] * weights[x];
# 459 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth7, ____chimes_region_id7, 1); reenable_current_thread(____chimes_disable7); }
# 460 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long move_time; move_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_9; ____chimes_unroll_var_9 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(normalize, move_time); })) ; printf("TIME TO MOVE OBJECT TOOK: %f\n", ____chimes_unroll_var_9);
# 462 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("XE: %lf\n", xe);
# 463 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("YE: %lf\n", ye);
# 464 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double ____chimes_unroll_var_10; ____chimes_unroll_var_10 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY / 2.); })) ; double ____chimes_unroll_var_11; ____chimes_unroll_var_11 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX / 2.); })) ; double distance; distance = (sqrt(pow((double)(xe - (int)____chimes_unroll_var_10), 2) + pow((double)(ye - (int)____chimes_unroll_var_11), 2))) ;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%lf\n", distance);
# 466 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 467 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 468 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 469 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 470 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 471 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 472 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 473 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  CDF[0] = weights[0];
# 474 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 1; x < Nparticles; x++){
# 475 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   CDF[x] = weights[x] + CDF[x-1];
# 476 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 477 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long cum_sum; cum_sum = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 478 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_12; ____chimes_unroll_var_12 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(move_time, cum_sum); })) ; printf("TIME TO CALC CUM SUM TOOK: %f\n", ____chimes_unroll_var_12);
# 479 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double u1; u1 = ((1 / ((double)(Nparticles))) * ({ calling_npm("randu", 0); randu_npm(seed, 0); })); { call_lbl_53: ; bool ____chimes_disable8 = disable_current_thread(); void *____chimes_parent_ctx9 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth8 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth8 = get_thread_stack_depth(); size_t ____chimes_region_id8; unsigned ____chimes_parent_thread8 = entering_omp_parallel(53, &____chimes_region_id8, 1, &x); int ____chimes_first_iter8 = 1; ;
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(u, u1, Nparticles) private(x) firstprivate(____chimes_first_iter8)
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 481 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){ { if (____chimes_first_iter8) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread8, ____chimes_parent_ctx9, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth8, ____chimes_region_id8, 1, &x); ____chimes_first_iter8 = 0; }
# 482 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   u[x] = u1 + x/((double)(Nparticles));
# 483 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth8, ____chimes_region_id8, 1); reenable_current_thread(____chimes_disable8); }
# 484 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long u_time; u_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 485 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_13; ____chimes_unroll_var_13 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(cum_sum, u_time); })) ; printf("TIME TO CALC U TOOK: %f\n", ____chimes_unroll_var_13);
# 486 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int j; int i; ;; { call_lbl_54: ; bool ____chimes_disable9 = disable_current_thread(); void *____chimes_parent_ctx10 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth9 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth9 = get_thread_stack_depth(); size_t ____chimes_region_id9; unsigned ____chimes_parent_thread9 = entering_omp_parallel(54, &____chimes_region_id9, 2, &i, &j); int ____chimes_first_iter9 = 1;
# 487 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(CDF, Nparticles, xj, yj, u, arrayX, arrayY) private(i, j) firstprivate(____chimes_first_iter9)
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 489 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(j = 0; j < Nparticles; j++){ { if (____chimes_first_iter9) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread9, ____chimes_parent_ctx10, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth9, ____chimes_region_id9, 2, &i, &j); ____chimes_first_iter9 = 0; }
# 490 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   i = ({ calling_npm("findIndex", 0); findIndex_npm(CDF, Nparticles, u[j]); });
# 491 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (i == -1) {i = Nparticles-1; };
# 493 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xj[j] = arrayX[i];
# 494 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   yj[j] = arrayY[i];
# 495 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 496 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  } } leaving_omp_parallel(____chimes_call_stack_depth9, ____chimes_region_id9, 1); reenable_current_thread(____chimes_disable9); }
# 497 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long xyj_time; xyj_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 498 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_14; ____chimes_unroll_var_14 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(u_time, xyj_time); })) ; printf("TIME TO CALC NEW ARRAY X AND Y TOOK: %f\n", ____chimes_unroll_var_14);
# 499 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 501 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 502 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 503 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] = xj[x];
# 504 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] = yj[x];
# 505 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = 1/((double)(Nparticles));
# 506 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 507 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long reset; reset = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 508 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_15; ____chimes_unroll_var_15 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(xyj_time, reset); })) ; printf("TIME TO RESET WEIGHTS TOOK: %f\n", ____chimes_unroll_var_15);
# 509 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 510 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(disk, 7756533236910310803UL);
# 511 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(objxy, 7756533236910311084UL);
# 512 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(weights, 7756533236910311249UL);
# 513 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(likelihood, 7756533236910311202UL);
# 514 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(xj, 7756533236910311587UL);
# 515 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(yj, 7756533236910311597UL);
# 516 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(arrayX, 7756533236910311076UL);
# 517 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(arrayY, 7756533236910311092UL);
# 518 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(CDF, 7756533236910311452UL);
# 519 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(u, 7756533236910311500UL);
# 520 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(ind, 7756533236910311125UL);
# 521 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "particleFilter", &____must_manage_particleFilter, ____alias_loc_id_18, ____chimes_did_disable15); }

void particleFilter(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles) { (____chimes_replaying ? particleFilter_resumable(I, IszX, IszY, Nfr, seed, Nparticles) : particleFilter_quick(I, IszX, IszY, Nfr, seed, Nparticles)); }

int main_quick(int argc, char * argv[]){const int ____chimes_did_disable16 = new_stack((void *)(&main), "main", &____must_manage_main, 2, 0, (size_t)(0UL), (size_t)(7756533236910311898UL)) ; long long start;
int *I;
int *seed;
int Nparticles;
int Nfr;
int IszY;
int IszX;
 if (____must_checkpoint_main_start_0 || ____must_checkpoint_main_I_0 || ____must_checkpoint_main_seed_0 || ____must_checkpoint_main_Nparticles_0 || ____must_checkpoint_main_Nfr_0 || ____must_checkpoint_main_IszY_0 || ____must_checkpoint_main_IszX_0) { register_stack_vars(7, "main|start|0", &____must_checkpoint_main_start_0, "i64", (void *)(&start), (size_t)8, 0, 0, 0, "main|I|0", &____must_checkpoint_main_I_0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "main|seed|0", &____must_checkpoint_main_seed_0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0, "main|Nparticles|0", &____must_checkpoint_main_Nparticles_0, "i32", (void *)(&Nparticles), (size_t)4, 0, 0, 0, "main|Nfr|0", &____must_checkpoint_main_Nfr_0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "main|IszY|0", &____must_checkpoint_main_IszY_0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "main|IszX|0", &____must_checkpoint_main_IszX_0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0); } ; ;
# 523 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 524 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  char *usage; usage = ("openmp.out -x <dimX> -y <dimY> -z <Nfr> -np <Nparticles>") ;
# 525 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 526 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(argc != 9)
# 527 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 528 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%s\n", usage);
# 529 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 530 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 531 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 532 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( strcmp( argv[1], "-x" ) || strcmp( argv[3], "-y" ) || strcmp( argv[5], "-z" ) || strcmp( argv[7], "-np" ) ) {
# 533 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf( "%s\n",usage );
# 534 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 535 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 536 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 537 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     ;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 539 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[2], "%d", &IszX ) == (-1) ) {
# 541 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimX input is incorrect");
# 542 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 543 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 544 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 545 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszX <= 0 ) {
# 546 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimX must be > 0\n");
# 547 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 548 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 549 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 551 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[4], "%d", &IszY ) == (-1) ) {
# 552 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimY input is incorrect");
# 553 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 554 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 555 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 556 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszY <= 0 ) {
# 557 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimY must be > 0\n");
# 558 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 561 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 562 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[6], "%d", &Nfr ) == (-1) ) {
# 563 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of frames input is incorrect");
# 564 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 566 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nfr <= 0 ) {
# 568 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("number of frames must be > 0\n");
# 569 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 571 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 572 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 573 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[8], "%d", &Nparticles ) == (-1) ) {
# 574 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of particles input is incorrect");
# 575 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 576 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 577 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nparticles <= 0 ) {
# 579 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("Number of particles must be > 0\n");
# 580 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 582 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    seed = ((int *)malloc_wrapper(sizeof(int) * Nparticles, 7756533236910311820UL, 0, 0)) ;
# 584 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int i; ;
# 585 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (i = 0; i < Nparticles; i++) { seed[i] = time(0)*i; };
# 587 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 588 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I = ((int *)malloc_wrapper(sizeof(int) * IszX * IszY * Nfr, 7756533236910311838UL, 0, 0)) ;
# 589 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 590 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 591 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_32: (____chimes_does_checkpoint_videoSequence_npm ? ( ({ calling((void*)videoSequence, 32, ____alias_loc_id_2, 0UL, 5, (size_t)(7756533236910311838UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311820UL)); videoSequence_quick(I, IszX, IszY, Nfr, seed); }) ) : (({ calling_npm("videoSequence", ____alias_loc_id_2); videoSequence_npm(I, IszX, IszY, Nfr, seed); })));
# 592 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long endVideoSequence; endVideoSequence = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 593 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_16; ____chimes_unroll_var_16 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endVideoSequence); })) ; printf("VIDEO SEQUENCE TOOK %f\n", ____chimes_unroll_var_16);
# 594 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 595 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 ({ calling_npm("particleFilter", 0); particleFilter_npm(I, IszX, IszY, Nfr, seed, Nparticles); });
# 596 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long endParticleFilter; endParticleFilter = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 597 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_17; ____chimes_unroll_var_17 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(endVideoSequence, endParticleFilter); })) ; printf("PARTICLE FILTER TOOK %f\n", ____chimes_unroll_var_17);
# 598 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_18; ____chimes_unroll_var_18 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endParticleFilter); })) ; printf("ENTIRE PROGRAM TOOK %f\n", ____chimes_unroll_var_18);
# 599 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 600 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(seed, 7756533236910311820UL);
# 601 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(I, 7756533236910311838UL);
# 602 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_19, ____chimes_did_disable16); return 0;
# 603 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

int main(int argc, char * argv[]) { init_chimes(); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }



long long get_time_npm() {
# 32 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 struct timeval tv;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 gettimeofday(&tv, __null);
# 34 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 return (tv.tv_sec * 1000000) + tv.tv_usec;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

float elapsed_time_npm(long long start_time, long long end_time) {
# 38 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
        return (float) (end_time - start_time) / (1000 * 1000);
# 39 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double roundDouble_npm(double value){
# 45 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int newValue = (int)(value);
# 46 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (value - newValue < .5) {return newValue; } else {return newValue++; } ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void setIf_npm(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ){
# 61 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y, z;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 64 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 65 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (array3D[x * *dimY * *dimZ+y * *dimZ + z] == testValue) {array3D[x * *dimY * *dimZ + y * *dimZ + z] = newValue; };
# 67 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 68 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 69 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 70 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double randu_npm(int * seed, int index)
# 80 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 81 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int num = A*seed[index] + C;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 seed[index] = num % M;
# 83 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 return fabs(seed[index]/((double) M));
# 84 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double randn_npm(int * seed, int index){
# 94 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double u = randu_npm(seed, index);
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double v = randu_npm(seed, index);
# 97 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double cosine = cos(2*3.1415926535897932*v);
# 98 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double rt = -2*log(u);
# 99 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 return sqrt(rt)*cosine;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void addNoise_npm(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed){
# 110 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y, z;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 114 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    array3D[x * *dimY * *dimZ + y * *dimZ + z] = array3D[x * *dimY * *dimZ + y * *dimZ + z] + (int)(5*randn_npm(seed, 0));
# 115 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 116 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 117 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 118 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void strelDisk_npm(int * disk, int radius)
# 125 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 126 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int diameter = radius*2 - 1;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 129 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 130 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double distance = sqrt(pow((double)(x-radius+1),2) + pow((double)(y-radius+1),2));
# 131 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < radius) {disk[x*diameter + y] = 1; };
# 133 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 134 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 135 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void dilate_matrix_npm(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error)
# 148 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 149 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int startX = posX - error;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startX < 0)
# 151 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startX++;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int startY = posY - error;
# 153 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startY < 0)
# 154 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startY++;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int endX = posX + error;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endX > dimX)
# 157 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endX--;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int endY = posY + error;
# 159 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endY > dimY)
# 160 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endY--;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x,y;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = startX; x < endX; x++){
# 163 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = startY; y < endY; y++){
# 164 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double distance = sqrt( pow((double)(x-posX),2) + pow((double)(y-posY),2) );
# 165 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < error) {matrix[x*dimY*dimZ + y*dimZ + posZ] = 1; };
# 167 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 168 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 169 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void imdilate_disk_npm(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix)
# 181 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 182 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y, z;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(z = 0; z < dimZ; z++){
# 184 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < dimX; x++){
# 185 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < dimY; y++){
# 186 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if(matrix[x*dimY*dimZ + y*dimZ + z] == 1){
# 187 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     dilate_matrix_npm(newMatrix, x, y, z, dimX, dimY, dimZ, error);
# 188 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    }
# 189 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 190 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 191 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void getneighbors_npm(int * se, int numOnes, double * neighbors, int radius){
# 201 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y;
# 202 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int neighY = 0;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int center = radius - 1;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int diameter = radius*2 -1;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 206 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 207 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(se[x*diameter + y]){
# 208 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2] = (int)(y - center);
# 209 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2 + 1] = (int)(x - center);
# 210 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighY++;
# 211 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 212 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 213 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 214 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void videoSequence_npm(int * I, int IszX, int IszY, int Nfr, int * seed){
# 228 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int k;
# 229 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int max_size = IszX*IszY*Nfr;
# 230 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 231 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x0 = (int)roundDouble_npm(IszY/2.0);
# 232 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y0 = (int)roundDouble_npm(IszX/2.0);
# 233 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 I[x0 *IszY *Nfr + y0 * Nfr + 0] = 1;
# 234 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 235 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 236 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int xk, yk, pos;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 238 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xk = (*____chimes_extern_func_abs)(x0 + (k-1));
# 239 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  yk = (*____chimes_extern_func_abs)(y0 - 2*(k-1));
# 240 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  pos = yk * IszY * Nfr + xk *Nfr + k;
# 241 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (pos >= max_size) {pos = 0; };
# 243 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  I[pos] = 1;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 245 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 246 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 247 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int * newMatrix = (int *)malloc_wrapper(sizeof(int)*IszX*IszY*Nfr, 7756533236910310412UL, 0, 0);
# 248 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 imdilate_disk_npm(I, IszX, IszY, Nfr, 5, newMatrix);
# 249 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y;
# 250 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < IszX; x++){
# 251 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < IszY; y++){
# 252 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(k = 0; k < Nfr; k++){
# 253 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I[x*IszY*Nfr + y*Nfr + k] = newMatrix[x*IszY*Nfr + y*Nfr + k];
# 254 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 255 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 256 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 257 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(newMatrix, 7756533236910310412UL);
# 258 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 259 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 260 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 setIf_npm(0, 100, I, &IszX, &IszY, &Nfr);
# 261 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 setIf_npm(1, 228, I, &IszX, &IszY, &Nfr);
# 262 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 263 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 addNoise_npm(I, &IszX, &IszY, &Nfr, seed);
# 264 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

double calcLikelihoodSum_npm(int * I, int * ind, int numOnes){
# 273 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double likelihoodSum = 0.0;
# 274 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y;
# 275 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (y = 0; y < numOnes; y++) { likelihoodSum += (pow((I[ind[y]] - 100),2) - pow((I[ind[y]]-228),2))/50.0; };
# 277 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 return likelihoodSum;
# 278 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

int findIndex_npm(double * CDF, int lengthCDF, double value){
# 288 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int index = -1;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x;
# 290 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < lengthCDF; x++){
# 291 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if(CDF[x] >= value){
# 292 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   index = x;
# 293 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   break;
# 294 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 295 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 296 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(index == -1){
# 297 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  return lengthCDF-1;
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 299 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 return index;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

int findIndexBin_npm(double * CDF, int beginIndex, int endIndex, double value){
# 312 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (endIndex < beginIndex) {return -1; };
# 314 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int middleIndex = beginIndex + ((endIndex - beginIndex)/2);
# 315 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 316 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(CDF[middleIndex] >= value)
# 317 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 318 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (middleIndex == 0) {return middleIndex; } else if (CDF[middleIndex-1] < value) {return middleIndex; } else if(CDF[middleIndex-1] == value)
# 324 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  {
# 325 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   while(middleIndex > 0 && CDF[middleIndex-1] == value)
# 326 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   middleIndex--;
# 327 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   return middleIndex;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 329 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 330 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (CDF[middleIndex] > value) {return findIndexBin_npm(CDF, beginIndex, middleIndex+1, value); };
# 332 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 return findIndexBin_npm(CDF, middleIndex-1, endIndex, value);
# 333 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}

void particleFilter_npm(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles){
# 346 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int max_size = IszX*IszY*Nfr;
# 348 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 long long start = get_time_npm();
# 349 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 350 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double xe = roundDouble_npm(IszY/2.0);
# 351 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double ye = roundDouble_npm(IszX/2.0);
# 352 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 353 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 354 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int radius = 5;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int diameter = radius*2 - 1;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int * disk = (int *)malloc_wrapper(diameter*diameter*sizeof(int), 7756533236910310803UL, 0, 0);
# 357 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 strelDisk_npm(disk, radius);
# 358 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int countOnes = 0;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 361 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 362 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (disk[x*diameter + y] == 1) {countOnes++; };
# 364 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 365 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 366 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * objxy = (double *)malloc_wrapper(countOnes*2*sizeof(double), 7756533236910311084UL, 0, 0);
# 367 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 getneighbors_npm(disk, countOnes, objxy, radius);
# 368 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 369 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 long long get_neighbors = get_time_npm();
# 370 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  float ____chimes_unroll_var_0 = elapsed_time_npm(start, get_neighbors); printf("TIME TO GET NEIGHBORS TOOK: %f\n", ____chimes_unroll_var_0);
# 371 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 372 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * weights = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311249UL, 0, 0);
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(weights, Nparticles) private(x)
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 374 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){
# 375 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  weights[x] = 1/((double)(Nparticles));
# 376 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 377 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 long long get_weights = get_time_npm();
# 378 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  float ____chimes_unroll_var_1 = elapsed_time_npm(get_neighbors, get_weights); printf("TIME TO GET WEIGHTSTOOK: %f\n", ____chimes_unroll_var_1);
# 379 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 380 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * likelihood = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311202UL, 0, 0);
# 381 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * arrayX = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311076UL, 0, 0);
# 382 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * arrayY = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311092UL, 0, 0);
# 383 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * xj = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311587UL, 0, 0);
# 384 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * yj = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311597UL, 0, 0);
# 385 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * CDF = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311452UL, 0, 0);
# 386 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double * u = (double *)malloc_wrapper(sizeof(double)*Nparticles, 7756533236910311500UL, 0, 0);
# 387 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int * ind = (int*)malloc_wrapper(sizeof(int)*countOnes*Nparticles, 7756533236910311125UL, 0, 0);
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, xe, ye) private(x)
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 389 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){
# 390 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayX[x] = xe;
# 391 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayY[x] = ye;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 393 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int k;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 395 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long ____chimes_unroll_var_2 = get_time_npm(); float ____chimes_unroll_var_3 = elapsed_time_npm(get_weights, ____chimes_unroll_var_2); printf("TIME TO SET ARRAYS TOOK: %f\n", ____chimes_unroll_var_3);
# 396 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int indX, indY;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 398 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long set_arrays = get_time_npm();
# 399 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 401 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, Nparticles, seed) private(x)
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 403 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 404 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] += 1 + 5*randn_npm(seed, x);
# 405 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] += -2 + 2*randn_npm(seed, x);
# 406 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 407 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long error = get_time_npm();
# 408 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_4 = elapsed_time_npm(set_arrays, error); printf("TIME TO SET ERROR TOOK: %f\n", ____chimes_unroll_var_4);
# 409 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(likelihood, I, arrayX, arrayY, objxy, ind) private(x, y, indX, indY)
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 411 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 412 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 413 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 415 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 416 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 417 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < countOnes; y++){
# 418 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    indX = roundDouble_npm(arrayX[x]) + objxy[y*2 + 1];
# 419 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    indY = roundDouble_npm(arrayY[x]) + objxy[y*2];
# 420 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind[x*countOnes + y] = fabs(indX*IszY*Nfr + indY*Nfr + k);
# 421 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (ind[x*countOnes + y] >= max_size) {ind[x*countOnes + y] = 0; };
# 423 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 424 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = 0;
# 425 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for (y = 0; y < countOnes; y++) { likelihood[x] += (pow((I[ind[x*countOnes + y]] - 100),2) - pow((I[ind[x*countOnes + y]]-228),2))/50.0; };
# 427 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = likelihood[x]/((double) countOnes);
# 428 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 429 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long likelihood_time = get_time_npm();
# 430 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_5 = elapsed_time_npm(error, likelihood_time); printf("TIME TO GET LIKELIHOODS TOOK: %f\n", ____chimes_unroll_var_5);
# 431 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 432 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(Nparticles, weights, likelihood) private(x)
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 434 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 435 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x] * exp(likelihood[x]);
# 436 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 437 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long exponential = get_time_npm();
# 438 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_6 = elapsed_time_npm(likelihood_time, exponential); printf("TIME TO GET EXP TOOK: %f\n", ____chimes_unroll_var_6);
# 439 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double sumWeights = 0;
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:sumWeights)
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 441 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 442 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   sumWeights += weights[x];
# 443 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 444 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long sum_time = get_time_npm();
# 445 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_7 = elapsed_time_npm(exponential, sum_time); printf("TIME TO SUM WEIGHTS TOOK: %f\n", ____chimes_unroll_var_7);
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(sumWeights, weights) private(x)
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 447 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 448 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x]/sumWeights;
# 449 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 450 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long normalize = get_time_npm();
# 451 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_8 = elapsed_time_npm(sum_time, normalize); printf("TIME TO NORMALIZE WEIGHTS TOOK: %f\n", ____chimes_unroll_var_8);
# 452 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xe = 0;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ye = 0;
# 454 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:xe, ye)
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 456 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 457 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xe += arrayX[x] * weights[x];
# 458 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ye += arrayY[x] * weights[x];
# 459 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 460 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long move_time = get_time_npm();
# 461 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_9 = elapsed_time_npm(normalize, move_time); printf("TIME TO MOVE OBJECT TOOK: %f\n", ____chimes_unroll_var_9);
# 462 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("XE: %lf\n", xe);
# 463 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("YE: %lf\n", ye);
# 464 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double ____chimes_unroll_var_10 = roundDouble_npm(IszY/2.0); double ____chimes_unroll_var_11 = roundDouble_npm(IszX/2.0); double distance = sqrt( pow((double)(xe-(int)____chimes_unroll_var_10),2) + pow((double)(ye-(int)____chimes_unroll_var_11),2) );
# 465 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%lf\n", distance);
# 466 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 467 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 468 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 469 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 470 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 471 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 472 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 473 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  CDF[0] = weights[0];
# 474 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 1; x < Nparticles; x++){
# 475 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   CDF[x] = weights[x] + CDF[x-1];
# 476 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 477 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long cum_sum = get_time_npm();
# 478 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_12 = elapsed_time_npm(move_time, cum_sum); printf("TIME TO CALC CUM SUM TOOK: %f\n", ____chimes_unroll_var_12);
# 479 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double u1 = (1/((double)(Nparticles)))*randu_npm(seed, 0);
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(u, u1, Nparticles) private(x)
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 481 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 482 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   u[x] = u1 + x/((double)(Nparticles));
# 483 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 484 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long u_time = get_time_npm();
# 485 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_13 = elapsed_time_npm(cum_sum, u_time); printf("TIME TO CALC U TOOK: %f\n", ____chimes_unroll_var_13);
# 486 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int j, i;
# 487 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(CDF, Nparticles, xj, yj, u, arrayX, arrayY) private(i, j)
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 489 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(j = 0; j < Nparticles; j++){
# 490 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   i = findIndex_npm(CDF, Nparticles, u[j]);
# 491 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (i == -1) {i = Nparticles-1; };
# 493 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xj[j] = arrayX[i];
# 494 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   yj[j] = arrayY[i];
# 495 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 496 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 497 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long xyj_time = get_time_npm();
# 498 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_14 = elapsed_time_npm(u_time, xyj_time); printf("TIME TO CALC NEW ARRAY X AND Y TOOK: %f\n", ____chimes_unroll_var_14);
# 499 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 501 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 502 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 503 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] = xj[x];
# 504 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] = yj[x];
# 505 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = 1/((double)(Nparticles));
# 506 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 507 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long reset = get_time_npm();
# 508 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_15 = elapsed_time_npm(xyj_time, reset); printf("TIME TO RESET WEIGHTS TOOK: %f\n", ____chimes_unroll_var_15);
# 509 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 510 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(disk, 7756533236910310803UL);
# 511 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(objxy, 7756533236910311084UL);
# 512 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(weights, 7756533236910311249UL);
# 513 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(likelihood, 7756533236910311202UL);
# 514 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(xj, 7756533236910311587UL);
# 515 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(yj, 7756533236910311597UL);
# 516 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(arrayX, 7756533236910311076UL);
# 517 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(arrayY, 7756533236910311092UL);
# 518 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(CDF, 7756533236910311452UL);
# 519 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(u, 7756533236910311500UL);
# 520 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 free_wrapper(ind, 7756533236910311125UL);
# 521 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}





static int module_init() {
    init_module(7756533236910309485UL, 42, 17, 20, 20, 16, 1, 17, 60, 2, 1,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)0, (7756533236910309485UL + 774UL),
                           &____alias_loc_id_1, (unsigned)12, (unsigned)0, (unsigned)0, (7756533236910309485UL + 765UL), (7756533236910309485UL + 766UL), (7756533236910309485UL + 767UL), (7756533236910309485UL + 768UL), (7756533236910309485UL + 769UL), (7756533236910309485UL + 770UL), (7756533236910309485UL + 771UL), (7756533236910309485UL + 772UL), (7756533236910309485UL + 773UL), (7756533236910309485UL + 775UL), (7756533236910309485UL + 776UL), (7756533236910309485UL + 971UL),
                           &____alias_loc_id_2, (unsigned)6, (unsigned)0, (unsigned)0, (7756533236910309485UL + 2199UL), (7756533236910309485UL + 2200UL), (7756533236910309485UL + 2201UL), (7756533236910309485UL + 2202UL), (7756533236910309485UL + 2335UL), (7756533236910309485UL + 2457UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)0, (unsigned)0, (7756533236910309485UL + 15UL), (7756533236910309485UL + 16UL),
                           &____alias_loc_id_5, (unsigned)3, (unsigned)0, (unsigned)0, (7756533236910309485UL + 29UL), (7756533236910309485UL + 30UL), (7756533236910309485UL + 31UL),
                           &____alias_loc_id_6, (unsigned)10, (unsigned)0, (unsigned)0, (7756533236910309485UL + 57UL), (7756533236910309485UL + 58UL), (7756533236910309485UL + 59UL), (7756533236910309485UL + 60UL), (7756533236910309485UL + 61UL), (7756533236910309485UL + 62UL), (7756533236910309485UL + 63UL), (7756533236910309485UL + 64UL), (7756533236910309485UL + 65UL), (7756533236910309485UL + 161UL),
                           &____alias_loc_id_7, (unsigned)4, (unsigned)0, (unsigned)0, (7756533236910309485UL + 165UL), (7756533236910309485UL + 166UL), (7756533236910309485UL + 167UL), (7756533236910309485UL + 204UL),
                           &____alias_loc_id_8, (unsigned)6, (unsigned)0, (unsigned)0, (7756533236910309485UL + 207UL), (7756533236910309485UL + 208UL), (7756533236910309485UL + 209UL), (7756533236910309485UL + 210UL), (7756533236910309485UL + 211UL), (7756533236910309485UL + 212UL),
                           &____alias_loc_id_9, (unsigned)9, (unsigned)0, (unsigned)0, (7756533236910309485UL + 247UL), (7756533236910309485UL + 248UL), (7756533236910309485UL + 249UL), (7756533236910309485UL + 250UL), (7756533236910309485UL + 251UL), (7756533236910309485UL + 252UL), (7756533236910309485UL + 253UL), (7756533236910309485UL + 254UL), (7756533236910309485UL + 346UL),
                            &____alias_loc_id_10, (unsigned)7, (unsigned)0, (unsigned)0, (7756533236910309485UL + 351UL), (7756533236910309485UL + 352UL), (7756533236910309485UL + 353UL), (7756533236910309485UL + 354UL), (7756533236910309485UL + 355UL), (7756533236910309485UL + 356UL), (7756533236910309485UL + 422UL),
                            &____alias_loc_id_11, (unsigned)16, (unsigned)0, (unsigned)0, (7756533236910309485UL + 426UL), (7756533236910309485UL + 427UL), (7756533236910309485UL + 428UL), (7756533236910309485UL + 429UL), (7756533236910309485UL + 430UL), (7756533236910309485UL + 431UL), (7756533236910309485UL + 432UL), (7756533236910309485UL + 433UL), (7756533236910309485UL + 434UL), (7756533236910309485UL + 435UL), (7756533236910309485UL + 436UL), (7756533236910309485UL + 437UL), (7756533236910309485UL + 438UL), (7756533236910309485UL + 439UL), (7756533236910309485UL + 440UL), (7756533236910309485UL + 573UL),
                            &____alias_loc_id_12, (unsigned)9, (unsigned)0, (unsigned)0, (7756533236910309485UL + 581UL), (7756533236910309485UL + 582UL), (7756533236910309485UL + 583UL), (7756533236910309485UL + 584UL), (7756533236910309485UL + 585UL), (7756533236910309485UL + 586UL), (7756533236910309485UL + 587UL), (7756533236910309485UL + 588UL), (7756533236910309485UL + 589UL),
                            &____alias_loc_id_13, (unsigned)10, (unsigned)0, (unsigned)0, (7756533236910309485UL + 672UL), (7756533236910309485UL + 673UL), (7756533236910309485UL + 674UL), (7756533236910309485UL + 675UL), (7756533236910309485UL + 676UL), (7756533236910309485UL + 677UL), (7756533236910309485UL + 678UL), (7756533236910309485UL + 679UL), (7756533236910309485UL + 680UL), (7756533236910309485UL + 763UL),
                            &____alias_loc_id_14, (unsigned)15, (unsigned)0, (unsigned)0, (7756533236910309485UL + 765UL), (7756533236910309485UL + 766UL), (7756533236910309485UL + 767UL), (7756533236910309485UL + 768UL), (7756533236910309485UL + 769UL), (7756533236910309485UL + 770UL), (7756533236910309485UL + 771UL), (7756533236910309485UL + 772UL), (7756533236910309485UL + 773UL), (7756533236910309485UL + 775UL), (7756533236910309485UL + 776UL), (7756533236910309485UL + 777UL), (7756533236910309485UL + 778UL), (7756533236910309485UL + 779UL), (7756533236910309485UL + 971UL),
                            &____alias_loc_id_15, (unsigned)5, (unsigned)0, (unsigned)0, (7756533236910309485UL + 979UL), (7756533236910309485UL + 980UL), (7756533236910309485UL + 981UL), (7756533236910309485UL + 982UL), (7756533236910309485UL + 983UL),
                            &____alias_loc_id_16, (unsigned)6, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1038UL), (7756533236910309485UL + 1039UL), (7756533236910309485UL + 1040UL), (7756533236910309485UL + 1041UL), (7756533236910309485UL + 1042UL), (7756533236910309485UL + 1043UL),
                            &____alias_loc_id_17, (unsigned)6, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1090UL), (7756533236910309485UL + 1091UL), (7756533236910309485UL + 1092UL), (7756533236910309485UL + 1093UL), (7756533236910309485UL + 1094UL), (7756533236910309485UL + 1095UL),
                            &____alias_loc_id_18, (unsigned)72, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1208UL), (7756533236910309485UL + 1209UL), (7756533236910309485UL + 1210UL), (7756533236910309485UL + 1211UL), (7756533236910309485UL + 1212UL), (7756533236910309485UL + 1213UL), (7756533236910309485UL + 1214UL), (7756533236910309485UL + 1215UL), (7756533236910309485UL + 1216UL), (7756533236910309485UL + 1217UL), (7756533236910309485UL + 1218UL), (7756533236910309485UL + 1219UL), (7756533236910309485UL + 1220UL), (7756533236910309485UL + 1221UL), (7756533236910309485UL + 1222UL), (7756533236910309485UL + 1223UL), (7756533236910309485UL + 1224UL), (7756533236910309485UL + 1225UL), (7756533236910309485UL + 1226UL), (7756533236910309485UL + 1227UL), (7756533236910309485UL + 1228UL), (7756533236910309485UL + 1229UL), (7756533236910309485UL + 1230UL), (7756533236910309485UL + 1231UL), (7756533236910309485UL + 1232UL), (7756533236910309485UL + 1233UL), (7756533236910309485UL + 1234UL), (7756533236910309485UL + 1235UL), (7756533236910309485UL + 1236UL), (7756533236910309485UL + 1237UL), (7756533236910309485UL + 1238UL), (7756533236910309485UL + 1239UL), (7756533236910309485UL + 1240UL), (7756533236910309485UL + 1241UL), (7756533236910309485UL + 1242UL), (7756533236910309485UL + 1243UL), (7756533236910309485UL + 1244UL), (7756533236910309485UL + 1245UL), (7756533236910309485UL + 1246UL), (7756533236910309485UL + 1247UL), (7756533236910309485UL + 1248UL), (7756533236910309485UL + 1249UL), (7756533236910309485UL + 1250UL), (7756533236910309485UL + 1251UL), (7756533236910309485UL + 1252UL), (7756533236910309485UL + 1253UL), (7756533236910309485UL + 1254UL), (7756533236910309485UL + 1255UL), (7756533236910309485UL + 1256UL), (7756533236910309485UL + 1257UL), (7756533236910309485UL + 1258UL), (7756533236910309485UL + 1259UL), (7756533236910309485UL + 1260UL), (7756533236910309485UL + 1261UL), (7756533236910309485UL + 1262UL), (7756533236910309485UL + 1263UL), (7756533236910309485UL + 1264UL), (7756533236910309485UL + 1265UL), (7756533236910309485UL + 1266UL), (7756533236910309485UL + 1267UL), (7756533236910309485UL + 1268UL), (7756533236910309485UL + 1269UL), (7756533236910309485UL + 1270UL), (7756533236910309485UL + 1591UL), (7756533236910309485UL + 1607UL), (7756533236910309485UL + 1640UL), (7756533236910309485UL + 1717UL), (7756533236910309485UL + 1764UL), (7756533236910309485UL + 1967UL), (7756533236910309485UL + 2015UL), (7756533236910309485UL + 2102UL), (7756533236910309485UL + 2112UL),
                            &____alias_loc_id_19, (unsigned)9, (unsigned)0, (unsigned)0, (7756533236910309485UL + 2191UL), (7756533236910309485UL + 2192UL), (7756533236910309485UL + 2193UL), (7756533236910309485UL + 2194UL), (7756533236910309485UL + 2203UL), (7756533236910309485UL + 2204UL), (7756533236910309485UL + 2205UL), (7756533236910309485UL + 2206UL), (7756533236910309485UL + 2207UL),
                            "get_time", (void *)(&get_time_npm), (void *)__null, 0, 0, 0UL, 1, "gettimeofday", 2, (7756533236910309485UL + 1UL), (7756533236910309485UL + 2456UL), 0UL,
                            "elapsed_time", (void *)(&elapsed_time_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "roundDouble", (void *)(&roundDouble_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "setIf", (void *)(&setIf_npm), (void *)__null, 0, 6, 0UL, 0UL, (7756533236910309485UL + 161UL), (7756533236910309485UL + 162UL), (7756533236910309485UL + 163UL), (7756533236910309485UL + 164UL), 0UL, 0,
                            "randu", (void *)(&randu_npm), (void *)__null, 0, 2, (7756533236910309485UL + 204UL), 0UL, 0UL, 1, "fabs", 1, 0UL, 0UL,
                            "randn", (void *)(&randn_npm), (void *)__null, 0, 2, (7756533236910309485UL + 242UL), 0UL, 0UL, 5, "randu", 2, (7756533236910309485UL + 242UL), 0UL, 0UL, "randu", 2, (7756533236910309485UL + 242UL), 0UL, 0UL, "cos", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "addNoise", (void *)(&addNoise_npm), (void *)__null, 0, 5, (7756533236910309485UL + 346UL), (7756533236910309485UL + 347UL), (7756533236910309485UL + 348UL), (7756533236910309485UL + 349UL), (7756533236910309485UL + 350UL), 0UL, 1, "randn", 2, (7756533236910309485UL + 350UL), 0UL, 0UL,
                            "strelDisk", (void *)(&strelDisk_npm), (void *)__null, 0, 2, (7756533236910309485UL + 422UL), 0UL, 0UL, 3, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "dilate_matrix", (void *)(&dilate_matrix_npm), (void *)__null, 0, 8, (7756533236910309485UL + 573UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 3, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "imdilate_disk", (void *)(&imdilate_disk_npm), (void *)__null, 0, 6, (7756533236910309485UL + 666UL), 0UL, 0UL, 0UL, 0UL, (7756533236910309485UL + 671UL), 0UL, 1, "dilate_matrix", 8, (7756533236910309485UL + 671UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
                            "getneighbors", (void *)(&getneighbors_npm), (void *)__null, 0, 4, (7756533236910309485UL + 761UL), 0UL, (7756533236910309485UL + 763UL), 0UL, 0UL, 0,
                            "videoSequence", (void *)(&videoSequence_npm), (void *)__null, 2, &____alias_loc_id_0, &____alias_loc_id_1, 5, (7756533236910309485UL + 971UL), 0UL, 0UL, 0UL, (7756533236910309485UL + 975UL), 0UL, 10, "roundDouble", 1, 0UL, 0UL, "roundDouble", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "abs", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756533236910309485UL + 927UL), "imdilate_disk", 6, (7756533236910309485UL + 971UL), 0UL, 0UL, 0UL, 0UL, (7756533236910309485UL + 927UL), 0UL, "free", 1, (7756533236910309485UL + 927UL), 0UL, "setIf", 6, 0UL, 0UL, (7756533236910309485UL + 971UL), (7756533236910309485UL + 766UL), (7756533236910309485UL + 767UL), (7756533236910309485UL + 768UL), 0UL, "setIf", 6, 0UL, 0UL, (7756533236910309485UL + 971UL), (7756533236910309485UL + 766UL), (7756533236910309485UL + 767UL), (7756533236910309485UL + 768UL), 0UL, "addNoise", 5, (7756533236910309485UL + 971UL), (7756533236910309485UL + 766UL), (7756533236910309485UL + 767UL), (7756533236910309485UL + 768UL), (7756533236910309485UL + 975UL), 0UL,
                            "calcLikelihoodSum", (void *)(&calcLikelihoodSum_npm), (void *)__null, 0, 3, (7756533236910309485UL + 1035UL), (7756533236910309485UL + 1036UL), 0UL, 0UL, 2, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL,
                            "findIndex", (void *)(&findIndex_npm), (void *)__null, 0, 3, (7756533236910309485UL + 1087UL), 0UL, 0UL, 0UL, 0,
                            "findIndexBin", (void *)(&findIndexBin_npm), (void *)__null, 0, 4, (7756533236910309485UL + 1204UL), 0UL, 0UL, 0UL, 0UL, 2, "findIndexBin", 4, (7756533236910309485UL + 1204UL), 0UL, 0UL, 0UL, 0UL, "findIndexBin", 4, (7756533236910309485UL + 1204UL), 0UL, 0UL, 0UL, 0UL,
                            "particleFilter", (void *)(&particleFilter_npm), (void *)__null, 0, 6, (7756533236910309485UL + 2183UL), 0UL, 0UL, 0UL, (7756533236910309485UL + 2187UL), 0UL, 0UL, 85, "get_time", 0, 0UL, "roundDouble", 1, 0UL, 0UL, "roundDouble", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756533236910309485UL + 1318UL), "strelDisk", 2, (7756533236910309485UL + 1318UL), 0UL, 0UL, "malloc", 1, 0UL, (7756533236910309485UL + 1599UL), "getneighbors", 4, (7756533236910309485UL + 1318UL), 0UL, (7756533236910309485UL + 1599UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2422UL), 0UL, 0UL, "malloc", 1, 0UL, (7756533236910309485UL + 1764UL), "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2423UL), 0UL, 0UL, "malloc", 1, 0UL, (7756533236910309485UL + 1717UL), "malloc", 1, 0UL, (7756533236910309485UL + 1591UL), "malloc", 1, 0UL, (7756533236910309485UL + 1607UL), "malloc", 1, 0UL, (7756533236910309485UL + 2102UL), "malloc", 1, 0UL, (7756533236910309485UL + 2112UL), "malloc", 1, 0UL, (7756533236910309485UL + 1967UL), "malloc", 1, 0UL, (7756533236910309485UL + 2015UL), "malloc", 1, 0UL, (7756533236910309485UL + 1640UL), "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2423UL), 0UL, 0UL, "get_time", 0, 0UL, "randn", 2, (7756533236910309485UL + 2187UL), 0UL, 0UL, "randn", 2, (7756533236910309485UL + 2187UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2425UL), 0UL, 0UL, "roundDouble", 1, 0UL, 0UL, "roundDouble", 1, 0UL, 0UL, "fabs", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2426UL), 0UL, 0UL, "exp", 1, 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2427UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2428UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2429UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2428UL), 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2431UL), 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2431UL), 0UL, 0UL, "roundDouble", 1, 0UL, 0UL, "roundDouble", 1, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "sqrt", 1, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2433UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2434UL), 0UL, 0UL, "randu", 2, (7756533236910309485UL + 2187UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2435UL), 0UL, 0UL, "findIndex", 3, (7756533236910309485UL + 1967UL), 0UL, 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2436UL), 0UL, 0UL, "get_time", 0, 0UL, "elapsed_time", 2, 0UL, 0UL, 0UL, "printf", 2, (7756533236910309485UL + 2422UL), 0UL, 0UL, "free", 1, (7756533236910309485UL + 1318UL), 0UL, "free", 1, (7756533236910309485UL + 1599UL), 0UL, "free", 1, (7756533236910309485UL + 1764UL), 0UL, "free", 1, (7756533236910309485UL + 1717UL), 0UL, "free", 1, (7756533236910309485UL + 2102UL), 0UL, "free", 1, (7756533236910309485UL + 2112UL), 0UL, "free", 1, (7756533236910309485UL + 1591UL), 0UL, "free", 1, (7756533236910309485UL + 1607UL), 0UL, "free", 1, (7756533236910309485UL + 1967UL), 0UL, "free", 1, (7756533236910309485UL + 2015UL), 0UL, "free", 1, (7756533236910309485UL + 1640UL), 0UL,
                               "abs", (void **)&(____chimes_extern_func_abs),
                           "get_time", &(____chimes_does_checkpoint_get_time_npm),
                           "elapsed_time", &(____chimes_does_checkpoint_elapsed_time_npm),
                           "roundDouble", &(____chimes_does_checkpoint_roundDouble_npm),
                           "setIf", &(____chimes_does_checkpoint_setIf_npm),
                           "randu", &(____chimes_does_checkpoint_randu_npm),
                           "randn", &(____chimes_does_checkpoint_randn_npm),
                           "addNoise", &(____chimes_does_checkpoint_addNoise_npm),
                           "strelDisk", &(____chimes_does_checkpoint_strelDisk_npm),
                           "dilate_matrix", &(____chimes_does_checkpoint_dilate_matrix_npm),
                           "imdilate_disk", &(____chimes_does_checkpoint_imdilate_disk_npm),
                           "getneighbors", &(____chimes_does_checkpoint_getneighbors_npm),
                           "videoSequence", &(____chimes_does_checkpoint_videoSequence_npm),
                           "calcLikelihoodSum", &(____chimes_does_checkpoint_calcLikelihoodSum_npm),
                           "findIndex", &(____chimes_does_checkpoint_findIndex_npm),
                           "findIndexBin", &(____chimes_does_checkpoint_findIndexBin_npm),
                           "particleFilter", &(____chimes_does_checkpoint_particleFilter_npm),
                           "abs", &(____chimes_does_checkpoint_abs_npm),
                             (7756533236910309485UL + 1227UL), (7756533236910309485UL + 1764UL),
                             (7756533236910309485UL + 1212UL), (7756533236910309485UL + 2187UL),
                             (7756533236910309485UL + 769UL), (7756533236910309485UL + 975UL),
                             (7756533236910309485UL + 1208UL), (7756533236910309485UL + 2183UL),
                             (7756533236910309485UL + 1220UL), (7756533236910309485UL + 1318UL),
                             (7756533236910309485UL + 980UL), (7756533236910309485UL + 1036UL),
                             (7756533236910309485UL + 1236UL), (7756533236910309485UL + 2015UL),
                             (7756533236910309485UL + 765UL), (7756533236910309485UL + 971UL),
                             (7756533236910309485UL + 60UL), (7756533236910309485UL + 162UL),
                             (7756533236910309485UL + 61UL), (7756533236910309485UL + 163UL),
                             (7756533236910309485UL + 62UL), (7756533236910309485UL + 164UL),
                             (7756533236910309485UL + 1224UL), (7756533236910309485UL + 1599UL),
                             (7756533236910309485UL + 2194UL), (7756533236910309485UL + 2438UL),
                             (7756533236910309485UL + 2199UL), (7756533236910309485UL + 2335UL),
                             (7756533236910309485UL + 250UL), (7756533236910309485UL + 349UL),
                             (7756533236910309485UL + 251UL), (7756533236910309485UL + 350UL),
                             (7756533236910309485UL + 1231UL), (7756533236910309485UL + 1591UL),
                             (7756533236910309485UL + 2201UL), (7756533236910309485UL + 2353UL),
                             (7756533236910309485UL + 1232UL), (7756533236910309485UL + 1607UL),
                             (7756533236910309485UL + 1233UL), (7756533236910309485UL + 2102UL),
                             (7756533236910309485UL + 979UL), (7756533236910309485UL + 1035UL),
                             (7756533236910309485UL + 1039UL), (7756533236910309485UL + 1087UL),
                             (7756533236910309485UL + 426UL), (7756533236910309485UL + 573UL),
                             (7756533236910309485UL + 586UL), (7756533236910309485UL + 671UL),
                             (7756533236910309485UL + 1235UL), (7756533236910309485UL + 1967UL),
                             (7756533236910309485UL + 777UL), (7756533236910309485UL + 927UL),
                             (7756533236910309485UL + 1237UL), (7756533236910309485UL + 1640UL),
                             (7756533236910309485UL + 1230UL), (7756533236910309485UL + 1717UL),
                             (7756533236910309485UL + 1091UL), (7756533236910309485UL + 1204UL),
                             (7756533236910309485UL + 207UL), (7756533236910309485UL + 242UL),
                             (7756533236910309485UL + 581UL), (7756533236910309485UL + 666UL),
                             (7756533236910309485UL + 674UL), (7756533236910309485UL + 763UL),
                             (7756533236910309485UL + 1234UL), (7756533236910309485UL + 2112UL),
                             (7756533236910309485UL + 672UL), (7756533236910309485UL + 761UL),
                             (7756533236910309485UL + 247UL), (7756533236910309485UL + 346UL),
                             (7756533236910309485UL + 165UL), (7756533236910309485UL + 204UL),
                             (7756533236910309485UL + 249UL), (7756533236910309485UL + 348UL),
                             (7756533236910309485UL + 248UL), (7756533236910309485UL + 347UL),
                             (7756533236910309485UL + 59UL), (7756533236910309485UL + 161UL),
                             (7756533236910309485UL + 2413UL), (7756533236910309485UL + 2224UL),
                             (7756533236910309485UL + 2193UL), (7756533236910309485UL + 2413UL),
                             (7756533236910309485UL + 351UL), (7756533236910309485UL + 422UL),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "findIndex", "_Z9findIndexPdid", 0,
                             "calcLikelihoodSum", "_Z17calcLikelihoodSumPiS_i", 0,
                             "randn", "_Z5randnPii", 2, "randu", "randu",
                             "particleFilter", "_Z14particleFilterPiiiiS_i", 40, "get_time", "roundDouble", "roundDouble", "strelDisk", "getneighbors", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "randn", "randn", "get_time", "elapsed_time", "roundDouble", "roundDouble", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "roundDouble", "roundDouble", "get_time", "elapsed_time", "randu", "get_time", "elapsed_time", "findIndex", "get_time", "elapsed_time", "get_time", "elapsed_time",
                             "videoSequence", "_Z13videoSequencePiiiiS_", 8, "roundDouble", "roundDouble", "abs", "abs", "imdilate_disk", "setIf", "setIf", "addNoise",
                             "roundDouble", "_Z11roundDoubled", 0,
                             "findIndexBin", "_Z12findIndexBinPdiid", 2, "findIndexBin", "findIndexBin",
                             "elapsed_time", "_Z12elapsed_timexx", 0,
                             "setIf", "_Z5setIfiiPiS_S_S_", 0,
                             "dilate_matrix", "_Z13dilate_matrixPiiiiiiii", 0,
                             "imdilate_disk", "_Z13imdilate_diskPiiiiiS_", 1, "dilate_matrix",
                             "get_time", "_Z8get_timev", 0,
                             "getneighbors", "_Z12getneighborsPiiPdi", 0,
                             "main", "main", 8, "get_time", "videoSequence", "get_time", "elapsed_time", "particleFilter", "get_time", "elapsed_time", "elapsed_time",
                             "strelDisk", "_Z9strelDiskPii", 0,
                             "addNoise", "_Z8addNoisePiS_S_S_S_", 1, "randn",
                             "randu", "_Z5randuPii", 0,
                        "get_time|tv|0", 1, "get_time",
                        "videoSequence|I|0", 1, "abs",
                        "videoSequence|IszX|0", 1, "videoSequence",
                        "videoSequence|IszY|0", 1, "abs",
                        "videoSequence|Nfr|0", 1, "abs",
                        "videoSequence|seed|0", 1, "abs",
                        "videoSequence|k|0", 1, "abs",
                        "videoSequence|max_size|0", 1, "abs",
                        "videoSequence|x0|0", 1, "abs",
                        "videoSequence|y0|0", 1, "abs",
                        "videoSequence|xk|0", 1, "abs",
                        "videoSequence|yk|0", 1, "abs",
                        "videoSequence|pos|0", 1, "abs",
                        "main|IszX|0", 1, "main",
                        "main|IszY|0", 1, "main",
                        "main|Nfr|0", 1, "main",
                        "main|Nparticles|0", 1, "main",
                        "main|seed|0", 1, "videoSequence",
                        "main|I|0", 1, "videoSequence",
                        "main|start|0", 1, "videoSequence",
        "randu", 0UL, (int)2, 7756533236910309727UL, 0UL,
        "randu", 0UL, (int)2, 7756533236910309727UL, 0UL,
        "randn", 0UL, (int)2, 7756533236910309835UL, 0UL,
        "dilate_matrix", 0UL, (int)8, 7756533236910310156UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "imdilate_disk", 0UL, (int)6, 7756533236910310456UL, 0UL, 0UL, 0UL, 0UL, 7756533236910310412UL,
        "setIf", 0UL, (int)6, 0UL, 0UL, 7756533236910310456UL, 7756533236910310251UL, 7756533236910310252UL, 7756533236910310253UL,
        "setIf", 0UL, (int)6, 0UL, 0UL, 7756533236910310456UL, 7756533236910310251UL, 7756533236910310252UL, 7756533236910310253UL,
        "addNoise", 0UL, (int)5, 7756533236910310456UL, 7756533236910310251UL, 7756533236910310252UL, 7756533236910310253UL, 7756533236910310460UL,
        "findIndexBin", 0UL, (int)4, 7756533236910310689UL, 0UL, 0UL, 0UL,
        "findIndexBin", 0UL, (int)4, 7756533236910310689UL, 0UL, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "roundDouble", 0UL, (int)1, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "strelDisk", 0UL, (int)2, 7756533236910310803UL, 0UL,
        "getneighbors", 0UL, (int)4, 7756533236910310803UL, 0UL, 7756533236910311084UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "randn", 0UL, (int)2, 7756533236910311672UL, 0UL,
        "randn", 0UL, (int)2, 7756533236910311672UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "randu", 0UL, (int)2, 7756533236910311672UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "findIndex", 0UL, (int)3, 7756533236910311452UL, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "videoSequence", 0UL, (int)5, 7756533236910311838UL, 0UL, 0UL, 0UL, 7756533236910311820UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "particleFilter", 0UL, (int)6, 7756533236910311838UL, 0UL, 0UL, 0UL, 7756533236910311820UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "abs", 0UL, (int)1, 0UL,
        "abs", 0UL, (int)1, 0UL);
    register_global_var("global|M", "i64", (void *)(&M), 8.0, 0, 0, 0UL, 0);
    register_global_var("global|A", "i32", (void *)(&A), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|C", "i32", (void *)(&C), 4.0, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
