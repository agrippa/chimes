# 1 "ex_particle_OPENMP_seq.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "ex_particle_OPENMP_seq.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_findIndex_npm = 1;
static int ____chimes_does_checkpoint_randn_npm = 1;
static int ____chimes_does_checkpoint_calcLikelihoodSum_npm = 1;
static int ____chimes_does_checkpoint_roundDouble_npm = 1;
static int ____chimes_does_checkpoint_findIndexBin_npm = 1;
static int ____chimes_does_checkpoint_elapsed_time_npm = 1;
static int ____chimes_does_checkpoint_setIf_npm = 1;
static int ____chimes_does_checkpoint_dilate_matrix_npm = 1;
static int ____chimes_does_checkpoint_imdilate_disk_npm = 1;
static int ____chimes_does_checkpoint_get_time_npm = 1;
static int ____chimes_does_checkpoint_getneighbors_npm = 1;
static int ____chimes_does_checkpoint_strelDisk_npm = 1;
static int ____chimes_does_checkpoint_addNoise_npm = 1;
static int ____chimes_does_checkpoint_randu_npm = 1;

static int ____must_checkpoint_videoSequence_IszX_0 = 2;
static int ____must_checkpoint_main_IszX_0 = 2;
static int ____must_checkpoint_main_IszY_0 = 2;
static int ____must_checkpoint_main_Nfr_0 = 2;
static int ____must_checkpoint_main_Nparticles_0 = 2;
static int ____must_checkpoint_main_seed_0 = 2;
static int ____must_checkpoint_main_I_0 = 2;
static int ____must_checkpoint_main_start_0 = 2;
static int ____must_checkpoint_main_endVideoSequence_0 = 2;

static int ____must_manage_findIndex = 2;
static int ____must_manage_calcLikelihoodSum = 2;
static int ____must_manage_randn = 2;
static int ____must_manage_roundDouble = 2;
static int ____must_manage_findIndexBin = 2;
static int ____must_manage_elapsed_time = 2;
static int ____must_manage_setIf = 2;
static int ____must_manage_dilate_matrix = 2;
static int ____must_manage_imdilate_disk = 2;
static int ____must_manage_get_time = 2;
static int ____must_manage_getneighbors = 2;
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
static unsigned ____alias_loc_id_20;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
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
# 7 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 11 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 12 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 13 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
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
# 14 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 14 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"

# 1 "/home/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 16 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c" 2
# 16 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 17 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 18 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 19 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 20 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 21 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long M = 2147483647;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 23 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 25 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int A = 1103515245;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 27 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 28 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 29 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int C = 12345;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 32 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 33 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 34 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long long get_time_npm();
long long get_time_quick(); long long get_time();
long long get_time_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&get_time), "get_time", &____must_manage_get_time, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  struct timeval tv; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 gettimeofday(&tv, __null);
# 37 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long ____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((tv.tv_sec * 1000000) + tv.tv_usec); rm_stack(false, 0UL, "get_time", &____must_manage_get_time, ____alias_loc_id_5, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "get_time", &____must_manage_get_time, ____alias_loc_id_5, ____chimes_did_disable0, false); }
# 39 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
float elapsed_time_npm(long long start_time, long long end_time);
float elapsed_time_quick(long long start_time, long long end_time); float elapsed_time(long long start_time, long long end_time);
float elapsed_time_resumable(long long start_time, long long end_time) {const int ____chimes_did_disable1 = new_stack((void *)(&elapsed_time), "elapsed_time", &____must_manage_elapsed_time, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         float ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((float) (end_time - start_time) / (1000 * 1000)); rm_stack(false, 0UL, "elapsed_time", &____must_manage_elapsed_time, ____alias_loc_id_6, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "elapsed_time", &____must_manage_elapsed_time, ____alias_loc_id_6, ____chimes_did_disable1, false); }
# 43 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 44 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 46 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 47 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double roundDouble_npm(double value);
double roundDouble_quick(double value); double roundDouble(double value);
double roundDouble_resumable(double value){const int ____chimes_did_disable2 = new_stack((void *)(&roundDouble), "roundDouble", &____must_manage_roundDouble, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int newValue; newValue = ((int)(value)) ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (value - newValue < .5) { double ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (newValue); rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_7, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; } else { double ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (newValue++); rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_7, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ; } ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_7, ____chimes_did_disable2, false); }
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void setIf_npm(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ);
void setIf_quick(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ); void setIf(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ);
void setIf_resumable(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ){const int ____chimes_did_disable3 = new_stack((void *)(&setIf), "setIf", &____must_manage_setIf, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910309662UL), (size_t)(7756533236910309663UL), (size_t)(7756533236910309664UL), (size_t)(7756533236910309665UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 66 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 67 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 68 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (array3D[x * *dimY * *dimZ+y * *dimZ + z] == testValue) {array3D[x * *dimY * *dimZ + y * *dimZ + z] = newValue; };
# 70 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 71 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 72 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 73 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "setIf", &____must_manage_setIf, ____alias_loc_id_8, ____chimes_did_disable3, false); }
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randu_npm(int * seed, int index);
double randu_quick(int * seed, int index); double randu(int * seed, int index);
double randu_resumable(int * seed, int index)
# 83 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&randu), "randu", &____must_manage_randu, 2, 0, (size_t)(7756533236910309709UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int num; num = (A*seed[index] + C) ;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 seed[index] = num % M;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (fabs(seed[index]/((double) M))); rm_stack(false, 0UL, "randu", &____must_manage_randu, ____alias_loc_id_9, ____chimes_did_disable4, false); return ____chimes_ret_var_4; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "randu", &____must_manage_randu, ____alias_loc_id_9, ____chimes_did_disable4, false); }
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randn_npm(int * seed, int index);
double randn_quick(int * seed, int index); double randn(int * seed, int index);
double randn_resumable(int * seed, int index){const int ____chimes_did_disable5 = new_stack((void *)(&randn), "randn", &____must_manage_randn, 2, 0, (size_t)(7756533236910309751UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double u; call_lbl_0: u = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double v; call_lbl_1: v = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double cosine; cosine = (cos(2*3.1415926535897932*v)) ;
# 101 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double rt; rt = (-2*log(u)) ;
# 102 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (sqrt(rt)*cosine); rm_stack(false, 0UL, "randn", &____must_manage_randn, ____alias_loc_id_10, ____chimes_did_disable5, false); return ____chimes_ret_var_5; ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "randn", &____must_manage_randn, ____alias_loc_id_10, ____chimes_did_disable5, false); }
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void addNoise_npm(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed);
void addNoise_quick(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed); void addNoise(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed);
void addNoise_resumable(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed){const int ____chimes_did_disable6 = new_stack((void *)(&addNoise), "addNoise", &____must_manage_addNoise, 5, 0, (size_t)(7756533236910309855UL), (size_t)(7756533236910309856UL), (size_t)(7756533236910309857UL), (size_t)(7756533236910309858UL), (size_t)(7756533236910309859UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 115 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 116 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 117 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_0: array3D[x * *dimY * *dimZ + y * *dimZ + z] = array3D[x * *dimY * *dimZ + y * *dimZ + z] + (int)(5*({ calling_npm("randn", 0); randn_npm(seed, 0); }));
# 118 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 120 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "addNoise", &____must_manage_addNoise, ____alias_loc_id_11, ____chimes_did_disable6, false); }
# 122 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 123 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 124 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 127 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void strelDisk_npm(int * disk, int radius);
void strelDisk_quick(int * disk, int radius); void strelDisk(int * disk, int radius);
void strelDisk_resumable(int * disk, int radius)
# 128 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&strelDisk), "strelDisk", &____must_manage_strelDisk, 2, 0, (size_t)(7756533236910309931UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius*2 - 1) ;
# 130 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 132 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt(pow((double)(x-radius+1),2) + pow((double)(y-radius+1),2))) ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < radius) {disk[x*diameter + y] = 1; };
# 136 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 137 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 138 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "strelDisk", &____must_manage_strelDisk, ____alias_loc_id_12, ____chimes_did_disable7, false); }
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void dilate_matrix_npm(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error);
void dilate_matrix_quick(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error); void dilate_matrix(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error);
void dilate_matrix_resumable(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error)
# 151 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&dilate_matrix), "dilate_matrix", &____must_manage_dilate_matrix, 8, 0, (size_t)(7756533236910310082UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startX; startX = (posX - error) ;
# 153 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startX < 0)
# 154 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startX++;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startY; startY = (posY - error) ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startY < 0)
# 157 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startY++;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endX; endX = (posX + error) ;
# 159 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endX > dimX)
# 160 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endX--;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endY; endY = (posY + error) ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endY > dimY)
# 163 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endY--;
# 164 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = startX; x < endX; x++){
# 166 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = startY; y < endY; y++){
# 167 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt( pow((double)(x-posX),2) + pow((double)(y-posY),2) )) ;
# 168 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < error) {matrix[x*dimY*dimZ + y*dimZ + posZ] = 1; };
# 170 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 171 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 172 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "dilate_matrix", &____must_manage_dilate_matrix, ____alias_loc_id_13, ____chimes_did_disable8, false); }
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void imdilate_disk_npm(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix);
void imdilate_disk_quick(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix); void imdilate_disk(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix);
void imdilate_disk_resumable(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix)
# 184 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&imdilate_disk), "imdilate_disk", &____must_manage_imdilate_disk, 6, 0, (size_t)(7756533236910310175UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310180UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 185 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(z = 0; z < dimZ; z++){
# 187 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < dimX; x++){
# 188 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < dimY; y++){
# 189 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if(matrix[x*dimY*dimZ + y*dimZ + z] == 1){
# 190 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
      call_lbl_0: ({ calling_npm("dilate_matrix", 0); dilate_matrix_npm(newMatrix, x, y, z, dimX, dimY, dimZ, error); });
# 191 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 193 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 194 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 195 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "imdilate_disk", &____must_manage_imdilate_disk, ____alias_loc_id_14, ____chimes_did_disable9, false); }
# 196 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 197 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 198 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 199 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 200 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 201 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 202 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 203 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void getneighbors_npm(int * se, double * neighbors, int radius);
void getneighbors_quick(int * se, double * neighbors, int radius); void getneighbors(int * se, double * neighbors, int radius);
void getneighbors_resumable(int * se, double * neighbors, int radius){const int ____chimes_did_disable10 = new_stack((void *)(&getneighbors), "getneighbors", &____must_manage_getneighbors, 3, 0, (size_t)(7756533236910310267UL), (size_t)(7756533236910310268UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int neighY; neighY = (0) ;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int center; center = (radius - 1) ;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius*2 -1) ;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 209 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 210 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(se[x*diameter + y]){
# 211 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2] = (int)(y - center);
# 212 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2 + 1] = (int)(x - center);
# 213 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighY++;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 215 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 216 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 217 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "getneighbors", &____must_manage_getneighbors, ____alias_loc_id_15, ____chimes_did_disable10, false); }
# 230 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void videoSequence_quick(int * I, int IszX, int IszY, int Nfr, int * seed); void videoSequence(int * I, int IszX, int IszY, int Nfr, int * seed);
void videoSequence_resumable(int * I, int IszX, int IszY, int Nfr, int * seed){const int ____chimes_did_disable11 = new_stack((void *)(&videoSequence), "videoSequence", (int *)0, 5, 5, (size_t)(7756533236910310478UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310482UL), "videoSequence|I|0", (int *)0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "videoSequence|IszX|0", (int *)0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0, "videoSequence|IszY|0", (int *)0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "videoSequence|Nfr|0", (int *)0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "videoSequence|seed|0", (int *)0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ; ;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int k; ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int max_size; max_size = (IszX*IszY*Nfr) ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 234 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int x0; call_lbl_0: x0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszY/2.0); })) ;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int y0; call_lbl_1: y0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszX/2.0); })) ;
# 236 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 I[x0 *IszY *Nfr + y0 * Nfr + 0] = 1;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 238 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 239 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int xk; int yk; int pos; ;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 241 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xk = abs(x0 + (k-1));
# 242 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  yk = abs(y0 - 2*(k-1));
# 243 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  pos = yk * IszY * Nfr + xk *Nfr + k;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (pos >= max_size) {pos = 0; };
# 246 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  I[pos] = 1;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 248 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 249 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 250 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         call_lbl_2: checkpoint_transformed(2, ____alias_loc_id_1);
# 251 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 252 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *newMatrix; newMatrix = ((int *) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * IszX * IszY * Nfr); malloc_helper(____chimes_tmp_ptr, sizeof(int)*IszX*IszY*Nfr, 7756533236910310433UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_3: ({ calling_npm("imdilate_disk", 0); imdilate_disk_npm(I, IszX, IszY, Nfr, 5, newMatrix); });
# 256 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < IszX; x++){
# 258 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < IszY; y++){
# 259 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(k = 0; k < Nfr; k++){
# 260 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I[x*IszY*Nfr + y*Nfr + k] = newMatrix[x*IszY*Nfr + y*Nfr + k];
# 261 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 262 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 263 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 264 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(newMatrix); free_helper(newMatrix, 7756533236910310433UL); }) ;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         call_lbl_4: checkpoint_transformed(4, ____alias_loc_id_0);
# 268 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 269 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 270 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 271 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_5: ({ calling_npm("setIf", 0); setIf_npm(0, 100, I, &IszX, &IszY, &Nfr); });
# 272 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_6: ({ calling_npm("setIf", 0); setIf_npm(1, 228, I, &IszX, &IszY, &Nfr); });
# 273 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 274 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_7: ({ calling_npm("addNoise", 0); addNoise_npm(I, &IszX, &IszY, &Nfr, seed); });
# 275 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "videoSequence", (int *)0x0, 0, ____chimes_did_disable11, false); }
# 276 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 278 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 279 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 281 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double calcLikelihoodSum_npm(int * I, int * ind, int numOnes);
double calcLikelihoodSum_quick(int * I, int * ind, int numOnes); double calcLikelihoodSum(int * I, int * ind, int numOnes);
double calcLikelihoodSum_resumable(int * I, int * ind, int numOnes){const int ____chimes_did_disable12 = new_stack((void *)(&calcLikelihoodSum), "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, 3, 0, (size_t)(7756533236910310546UL), (size_t)(7756533236910310547UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double likelihoodSum; likelihoodSum = (0.0) ;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y; ;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (y = 0; y < numOnes; y++) { likelihoodSum += (pow((I[ind[y]] - 100),2) - pow((I[ind[y]]-228),2))/50.0; };
# 288 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_6; ; ____chimes_ret_var_6 = (likelihoodSum); rm_stack(false, 0UL, "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, ____alias_loc_id_16, ____chimes_did_disable12, false); return ____chimes_ret_var_6; ;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, ____alias_loc_id_16, ____chimes_did_disable12, false); }
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndex_npm(double * CDF, int lengthCDF, double value);
int findIndex_quick(double * CDF, int lengthCDF, double value); int findIndex(double * CDF, int lengthCDF, double value);
int findIndex_resumable(double * CDF, int lengthCDF, double value){const int ____chimes_did_disable13 = new_stack((void *)(&findIndex), "findIndex", &____must_manage_findIndex, 3, 0, (size_t)(7756533236910310606UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int index; index = (-1) ;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; ;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < lengthCDF; x++){
# 302 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if(CDF[x] >= value){
# 303 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   index = x;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   break;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 306 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 307 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(index == -1){
# 308 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = (lengthCDF-1); rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_17, ____chimes_did_disable13, false); return ____chimes_ret_var_7; ;
# 309 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 310 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (index); rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_17, ____chimes_did_disable13, false); return ____chimes_ret_var_8; ;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_17, ____chimes_did_disable13, false); }
# 322 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 322 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndexBin_npm(double * CDF, int beginIndex, int endIndex, double value);
int findIndexBin_quick(double * CDF, int beginIndex, int endIndex, double value); int findIndexBin(double * CDF, int beginIndex, int endIndex, double value);
int findIndexBin_resumable(double * CDF, int beginIndex, int endIndex, double value){const int ____chimes_did_disable14 = new_stack((void *)(&findIndexBin), "findIndexBin", &____must_manage_findIndexBin, 4, 0, (size_t)(7756533236910310747UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 323 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (endIndex < beginIndex) { int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = (-1); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_9; ; };
# 325 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int middleIndex; middleIndex = (beginIndex + ((endIndex - beginIndex)/2)) ;
# 326 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 327 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(CDF[middleIndex] >= value)
# 328 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 329 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 330 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (middleIndex == 0) { int ____chimes_ret_var_10; ; ____chimes_ret_var_10 = (middleIndex); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_10; ; } else if (CDF[middleIndex-1] < value) { int ____chimes_ret_var_11; ; ____chimes_ret_var_11 = (middleIndex); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_11; ; } else if(CDF[middleIndex-1] == value)
# 335 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  {
# 336 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   while(middleIndex > 0 && CDF[middleIndex-1] == value)
# 337 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   middleIndex--;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    int ____chimes_ret_var_12; ; ____chimes_ret_var_12 = (middleIndex); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_12; ;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 340 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 341 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (CDF[middleIndex] > value) { int ____chimes_ret_var_13; ; call_lbl_0: ____chimes_ret_var_13 = (({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, beginIndex, middleIndex+1, value); })); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_13; ; };
# 343 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_14; ; call_lbl_1: ____chimes_ret_var_14 = (({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, middleIndex-1, endIndex, value); })); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_14; ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); }
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void particleFilter_quick(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles); void particleFilter(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles);
void particleFilter_resumable(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles){const int ____chimes_did_disable15 = new_stack((void *)(&particleFilter), "particleFilter", (int *)0, 6, 6, (size_t)(7756533236910311726UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311730UL), (size_t)(0UL), "particleFilter|I|0", (int *)0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "particleFilter|IszX|0", (int *)0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0, "particleFilter|IszY|0", (int *)0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "particleFilter|Nfr|0", (int *)0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "particleFilter|seed|0", (int *)0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0, "particleFilter|Nparticles|0", (int *)0, "i32", (void *)(&Nparticles), (size_t)4, 0, 0, 0) ; int k;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *ind;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *u;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *CDF;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *yj;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *xj;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *arrayY;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *arrayX;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *likelihood;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *weights;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *objxy;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int countOnes;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *disk;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int max_size;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 register_stack_vars(14, "particleFilter|k|0", (int *)0x0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "particleFilter|ind|0", (int *)0x0, "i32*", (void *)(&ind), (size_t)8, 1, 0, 0, "particleFilter|u|0", (int *)0x0, "double*", (void *)(&u), (size_t)8, 1, 0, 0, "particleFilter|CDF|0", (int *)0x0, "double*", (void *)(&CDF), (size_t)8, 1, 0, 0, "particleFilter|yj|0", (int *)0x0, "double*", (void *)(&yj), (size_t)8, 1, 0, 0, "particleFilter|xj|0", (int *)0x0, "double*", (void *)(&xj), (size_t)8, 1, 0, 0, "particleFilter|arrayY|0", (int *)0x0, "double*", (void *)(&arrayY), (size_t)8, 1, 0, 0, "particleFilter|arrayX|0", (int *)0x0, "double*", (void *)(&arrayX), (size_t)8, 1, 0, 0, "particleFilter|likelihood|0", (int *)0x0, "double*", (void *)(&likelihood), (size_t)8, 1, 0, 0, "particleFilter|weights|0", (int *)0x0, "double*", (void *)(&weights), (size_t)8, 1, 0, 0, "particleFilter|objxy|0", (int *)0x0, "double*", (void *)(&objxy), (size_t)8, 1, 0, 0, "particleFilter|countOnes|0", (int *)0x0, "i32", (void *)(&countOnes), (size_t)4, 0, 0, 0, "particleFilter|disk|0", (int *)0x0, "i32*", (void *)(&disk), (size_t)8, 1, 0, 0, "particleFilter|max_size|0", (int *)0x0, "i32", (void *)(&max_size), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(40): { goto call_lbl_40; } default: { chimes_error(); } } } ; ;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 358 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    max_size = (IszX*IszY*Nfr) ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long start; call_lbl_0: start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double xe; call_lbl_1: xe = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY/2.0); })) ;
# 362 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ye; call_lbl_2: ye = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX/2.0); })) ;
# 363 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 365 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int radius; radius = (5) ;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius*2 - 1) ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    disk = ((int *) ({ void *____chimes_tmp_ptr = malloc(diameter * diameter * sizeof(int)); malloc_helper(____chimes_tmp_ptr, diameter*diameter*sizeof(int), 7756533236910310861UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 368 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_3: ({ calling_npm("strelDisk", 0); strelDisk_npm(disk, radius); });
# 369 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    countOnes = (0) ;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 371 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 372 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(disk[x*diameter + y]) {
# 374 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    countOnes++;
# 375 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
            }
# 376 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 377 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 378 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    objxy = ((double *) ({ void *____chimes_tmp_ptr = malloc(countOnes * 2 * sizeof(double)); malloc_helper(____chimes_tmp_ptr, countOnes*2*sizeof(double), 7756533236910311141UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_4: ({ calling_npm("getneighbors", 0); getneighbors_npm(disk, objxy, radius); });
# 380 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_neighbors; call_lbl_5: get_neighbors = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_0; call_lbl_6: ____chimes_unroll_var_0 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, get_neighbors); })) ; printf("TIME TO GET NEIGHBORS TOOK: %f\n", ____chimes_unroll_var_0);
# 383 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 384 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    weights = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311306UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 385 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(weights, Nparticles) private(x)
# 386 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){
# 387 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  weights[x] = 1/((double)(Nparticles));
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 389 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_weights; call_lbl_7: get_weights = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_1; call_lbl_8: ____chimes_unroll_var_1 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_neighbors, get_weights); })) ; printf("TIME TO GET WEIGHTSTOOK: %f\n", ____chimes_unroll_var_1);
# 391 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 392 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    likelihood = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311259UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 393 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    arrayX = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311133UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    arrayY = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311149UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 395 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    xj = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311644UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 396 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    yj = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311654UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    CDF = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311509UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    u = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311557UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 399 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind = ((int*) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * countOnes * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(int)*countOnes*Nparticles, 7756533236910311182UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 400 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, xe, ye) private(x)
# 401 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayX[x] = xe;
# 403 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayY[x] = ye;
# 404 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 405 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ;
# 406 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long ____chimes_unroll_var_2; call_lbl_9: ____chimes_unroll_var_2 = (({ calling_npm("get_time", 0); get_time_npm(); })) ; float ____chimes_unroll_var_3; call_lbl_10: ____chimes_unroll_var_3 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_weights, ____chimes_unroll_var_2); })) ; printf("TIME TO SET ARRAYS TOOK: %f\n", ____chimes_unroll_var_3);
# 408 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int indX; int indY; ;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long set_arrays; call_lbl_11: set_arrays = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 411 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 412 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 413 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, Nparticles, seed) private(x)
# 415 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 416 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    call_lbl_12: arrayX[x] += 1 + 5*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 417 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    call_lbl_13: arrayY[x] += -2 + 2*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 418 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 419 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long error; call_lbl_14: error = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_4; call_lbl_15: ____chimes_unroll_var_4 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(set_arrays, error); })) ; printf("TIME TO SET ERROR TOOK: %f\n", ____chimes_unroll_var_4);
# 421 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 422 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(likelihood, I, arrayX, arrayY, objxy, ind) private(x, y, indX, indY)
# 423 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 424 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 425 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 426 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 427 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 428 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 429 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < countOnes; y++){
# 430 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_16: indX = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayX[x]); }) + objxy[y*2 + 1];
# 431 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_17: indY = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayY[x]); }) + objxy[y*2];
# 432 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind[x*countOnes + y] = fabs(indX*IszY*Nfr + indY*Nfr + k);
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (ind[x*countOnes + y] >= max_size) {ind[x*countOnes + y] = 0; };
# 435 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 436 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = 0;
# 437 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for (y = 0; y < countOnes; y++) { likelihood[x] += (pow((I[ind[x*countOnes + y]] - 100),2) - pow((I[ind[x*countOnes + y]]-228),2))/50.0; };
# 439 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = likelihood[x]/((double) countOnes);
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 441 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long likelihood_time; call_lbl_18: likelihood_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_5; call_lbl_19: ____chimes_unroll_var_5 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(error, likelihood_time); })) ; printf("TIME TO GET LIKELIHOODS TOOK: %f\n", ____chimes_unroll_var_5);
# 443 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 444 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 445 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(Nparticles, weights, likelihood) private(x)
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 447 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x] * exp(likelihood[x]);
# 448 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 449 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long exponential; call_lbl_20: exponential = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_6; call_lbl_21: ____chimes_unroll_var_6 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(likelihood_time, exponential); })) ; printf("TIME TO GET EXP TOOK: %f\n", ____chimes_unroll_var_6);
# 451 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double sumWeights; sumWeights = (0) ;
# 452 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:sumWeights)
# 453 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 454 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   sumWeights += weights[x];
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 456 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long sum_time; call_lbl_22: sum_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 457 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_7; call_lbl_23: ____chimes_unroll_var_7 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(exponential, sum_time); })) ; printf("TIME TO SUM WEIGHTS TOOK: %f\n", ____chimes_unroll_var_7);
# 458 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(sumWeights, weights) private(x)
# 459 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 460 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x]/sumWeights;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 462 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long normalize; call_lbl_24: normalize = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_8; call_lbl_25: ____chimes_unroll_var_8 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(sum_time, normalize); })) ; printf("TIME TO NORMALIZE WEIGHTS TOOK: %f\n", ____chimes_unroll_var_8);
# 464 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xe = 0;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ye = 0;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 467 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:xe, ye)
# 468 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 469 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xe += arrayX[x] * weights[x];
# 470 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ye += arrayY[x] * weights[x];
# 471 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 472 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long move_time; call_lbl_26: move_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 473 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_9; call_lbl_27: ____chimes_unroll_var_9 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(normalize, move_time); })) ; printf("TIME TO MOVE OBJECT TOOK: %f\n", ____chimes_unroll_var_9);
# 474 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("XE: %lf\n", xe);
# 475 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("YE: %lf\n", ye);
# 476 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double ____chimes_unroll_var_10; call_lbl_28: ____chimes_unroll_var_10 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY/2.0); })) ; double ____chimes_unroll_var_11; call_lbl_29: ____chimes_unroll_var_11 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX/2.0); })) ; double distance; distance = (sqrt( pow((double)(xe-(int)____chimes_unroll_var_10),2) + pow((double)(ye-(int)____chimes_unroll_var_11),2) )) ;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%lf\n", distance);
# 478 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 479 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 481 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 482 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 483 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 484 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 485 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  CDF[0] = weights[0];
# 486 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 1; x < Nparticles; x++){
# 487 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   CDF[x] = weights[x] + CDF[x-1];
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 489 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long cum_sum; call_lbl_30: cum_sum = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 490 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_12; call_lbl_31: ____chimes_unroll_var_12 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(move_time, cum_sum); })) ; printf("TIME TO CALC CUM SUM TOOK: %f\n", ____chimes_unroll_var_12);
# 491 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double u1; call_lbl_32: u1 = ((1/((double)(Nparticles)))*({ calling_npm("randu", 0); randu_npm(seed, 0); })) ;
# 492 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(u, u1, Nparticles) private(x)
# 493 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 494 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   u[x] = u1 + x/((double)(Nparticles));
# 495 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 496 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long u_time; call_lbl_33: u_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 497 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_13; call_lbl_34: ____chimes_unroll_var_13 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(cum_sum, u_time); })) ; printf("TIME TO CALC U TOOK: %f\n", ____chimes_unroll_var_13);
# 498 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int j; int i; ;
# 499 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(CDF, Nparticles, xj, yj, u, arrayX, arrayY) private(i, j)
# 501 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(j = 0; j < Nparticles; j++){
# 502 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    call_lbl_35: i = ({ calling_npm("findIndex", 0); findIndex_npm(CDF, Nparticles, u[j]); });
# 503 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (i == -1) {i = Nparticles-1; };
# 505 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xj[j] = arrayX[i];
# 506 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   yj[j] = arrayY[i];
# 507 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 508 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 509 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long xyj_time; call_lbl_36: xyj_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 510 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_14; call_lbl_37: ____chimes_unroll_var_14 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(u_time, xyj_time); })) ; printf("TIME TO CALC NEW ARRAY X AND Y TOOK: %f\n", ____chimes_unroll_var_14);
# 511 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 512 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 513 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 514 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 515 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] = xj[x];
# 516 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] = yj[x];
# 517 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = 1/((double)(Nparticles));
# 518 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 519 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long reset; call_lbl_38: reset = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 520 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_15; call_lbl_39: ____chimes_unroll_var_15 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(xyj_time, reset); })) ; printf("TIME TO RESET WEIGHTS TOOK: %f\n", ____chimes_unroll_var_15);
# 521 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 522 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 523 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         call_lbl_40: checkpoint_transformed(40, ____alias_loc_id_2);
# 524 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 525 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 526 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(disk); free_helper(disk, 7756533236910310861UL); }) ;
# 527 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(objxy); free_helper(objxy, 7756533236910311141UL); }) ;
# 528 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(weights); free_helper(weights, 7756533236910311306UL); }) ;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(likelihood); free_helper(likelihood, 7756533236910311259UL); }) ;
# 530 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(xj); free_helper(xj, 7756533236910311644UL); }) ;
# 531 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(yj); free_helper(yj, 7756533236910311654UL); }) ;
# 532 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(arrayX); free_helper(arrayX, 7756533236910311133UL); }) ;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(arrayY); free_helper(arrayY, 7756533236910311149UL); }) ;
# 534 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(CDF); free_helper(CDF, 7756533236910311509UL); }) ;
# 535 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(u); free_helper(u, 7756533236910311557UL); }) ;
# 536 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(ind); free_helper(ind, 7756533236910311182UL); }) ;
# 537 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "particleFilter", (int *)0x0, ____alias_loc_id_19, ____chimes_did_disable15, false); }
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int main_quick(int argc, char * argv[]); int main(int argc, char * argv[]);
int main_resumable(int argc, char * argv[]){const int ____chimes_did_disable16 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(7756533236910312000UL)) ; long long endVideoSequence;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long long start;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *I;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *seed;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int Nparticles;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int Nfr;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int IszY;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int IszX;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 register_stack_vars(8, "main|endVideoSequence|0", (int *)0x0, "i64", (void *)(&endVideoSequence), (size_t)8, 0, 0, 0, "main|start|0", (int *)0x0, "i64", (void *)(&start), (size_t)8, 0, 0, 0, "main|I|0", (int *)0x0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "main|seed|0", (int *)0x0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0, "main|Nparticles|0", (int *)0x0, "i32", (void *)(&Nparticles), (size_t)4, 0, 0, 0, "main|Nfr|0", (int *)0x0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "main|IszY|0", (int *)0x0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "main|IszX|0", (int *)0x0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ; ;
# 539 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  char *usage; usage = ("openmp.out -x <dimX> -y <dimY> -z <Nfr> -np <Nparticles>") ;
# 541 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(argc != 9)
# 543 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 544 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%s\n", usage);
# 545 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_15; ; ____chimes_ret_var_15 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_15; ;
# 546 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 547 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( strcmp( argv[1], "-x" ) || strcmp( argv[3], "-y" ) || strcmp( argv[5], "-z" ) || strcmp( argv[7], "-np" ) ) {
# 549 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf( "%s\n",usage );
# 550 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_16; ; ____chimes_ret_var_16 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_16; ;
# 551 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 552 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     ;
# 554 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 555 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 556 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[2], "%d", &IszX ) == (-1) ) {
# 557 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimX input is incorrect");
# 558 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_17; ; ____chimes_ret_var_17 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_17; ;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 561 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszX <= 0 ) {
# 562 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimX must be > 0\n");
# 563 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_18; ; ____chimes_ret_var_18 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_18; ;
# 564 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 565 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 566 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[4], "%d", &IszY ) == (-1) ) {
# 568 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimY input is incorrect");
# 569 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_19; ; ____chimes_ret_var_19 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_19; ;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 571 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 572 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszY <= 0 ) {
# 573 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimY must be > 0\n");
# 574 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_20; ; ____chimes_ret_var_20 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_20; ;
# 575 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 576 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 577 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[6], "%d", &Nfr ) == (-1) ) {
# 579 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of frames input is incorrect");
# 580 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_21; ; ____chimes_ret_var_21 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_21; ;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 582 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nfr <= 0 ) {
# 584 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("number of frames must be > 0\n");
# 585 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_22; ; ____chimes_ret_var_22 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_22; ;
# 586 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 587 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 588 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 589 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[8], "%d", &Nparticles ) == (-1) ) {
# 590 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of particles input is incorrect");
# 591 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_23; ; ____chimes_ret_var_23 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_23; ;
# 592 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 593 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 594 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nparticles <= 0 ) {
# 595 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("Number of particles must be > 0\n");
# 596 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_24; ; ____chimes_ret_var_24 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_24; ;
# 597 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 598 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    seed = ((int *) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(int)*Nparticles, 7756533236910311919UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 600 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int i; ;
# 601 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (i = 0; i < Nparticles; i++) { seed[i] = time(0)*i; };
# 603 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I = ((int *) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * IszX * IszY * Nfr); malloc_helper(____chimes_tmp_ptr, sizeof(int)*IszX*IszY*Nfr, 7756533236910311937UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 605 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_0: start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 606 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 607 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_1: ({ calling((void*)videoSequence, 1, ____alias_loc_id_4, 0UL, 5, (size_t)(7756533236910311937UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311919UL)); (videoSequence)(I, IszX, IszY, Nfr, seed); }) ;
# 608 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_2: endVideoSequence = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 609 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 610 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 611 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 612 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_16; call_lbl_3: ____chimes_unroll_var_16 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endVideoSequence); })) ; printf("VIDEO SEQUENCE TOOK %f\n", ____chimes_unroll_var_16);
# 615 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 616 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_4: ({ calling((void*)particleFilter, 4, ____alias_loc_id_3, 0UL, 6, (size_t)(7756533236910311937UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311919UL), (size_t)(0UL)); (particleFilter)(I, IszX, IszY, Nfr, seed, Nparticles); }) ;
# 617 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long endParticleFilter; call_lbl_5: endParticleFilter = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 618 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_17; call_lbl_6: ____chimes_unroll_var_17 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(endVideoSequence, endParticleFilter); })) ; printf("PARTICLE FILTER TOOK %f\n", ____chimes_unroll_var_17);
# 619 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_18; call_lbl_7: ____chimes_unroll_var_18 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endParticleFilter); })) ; printf("ENTIRE PROGRAM TOOK %f\n", ____chimes_unroll_var_18);
# 620 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 621 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(seed); free_helper(seed, 7756533236910311919UL); }) ;
# 622 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(I); free_helper(I, 7756533236910311937UL); }) ;
# 623 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_25; ; ____chimes_ret_var_25 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_25; ;
# 624 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); }
# 34 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long long get_time_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&get_time), "get_time", &____must_manage_get_time, 0, 0) ; ; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  struct timeval tv; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 gettimeofday(&tv, __null);
# 37 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long ____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((tv.tv_sec * 1000000) + tv.tv_usec); rm_stack(false, 0UL, "get_time", &____must_manage_get_time, ____alias_loc_id_5, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "get_time", &____must_manage_get_time, ____alias_loc_id_5, ____chimes_did_disable0, false); }

long long get_time() { return (____chimes_replaying ? get_time_resumable() : get_time_quick()); }
# 40 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
float elapsed_time_quick(long long start_time, long long end_time) {const int ____chimes_did_disable1 = new_stack((void *)(&elapsed_time), "elapsed_time", &____must_manage_elapsed_time, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         float ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((float) (end_time - start_time) / (1000 * 1000)); rm_stack(false, 0UL, "elapsed_time", &____must_manage_elapsed_time, ____alias_loc_id_6, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "elapsed_time", &____must_manage_elapsed_time, ____alias_loc_id_6, ____chimes_did_disable1, false); }

float elapsed_time(long long start_time, long long end_time) { return (____chimes_replaying ? elapsed_time_resumable(start_time, end_time) : elapsed_time_quick(start_time, end_time)); }
# 47 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double roundDouble_quick(double value){const int ____chimes_did_disable2 = new_stack((void *)(&roundDouble), "roundDouble", &____must_manage_roundDouble, 1, 0, (size_t)(0UL)) ; ; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int newValue; newValue = ((int)(value)) ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (value - newValue < .5) { double ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (newValue); rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_7, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; } else { double ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (newValue++); rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_7, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ; } ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "roundDouble", &____must_manage_roundDouble, ____alias_loc_id_7, ____chimes_did_disable2, false); }

double roundDouble(double value) { return (____chimes_replaying ? roundDouble_resumable(value) : roundDouble_quick(value)); }
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void setIf_quick(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ){const int ____chimes_did_disable3 = new_stack((void *)(&setIf), "setIf", &____must_manage_setIf, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910309662UL), (size_t)(7756533236910309663UL), (size_t)(7756533236910309664UL), (size_t)(7756533236910309665UL)) ; ; ;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 66 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 67 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 68 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (array3D[x * *dimY * *dimZ+y * *dimZ + z] == testValue) {array3D[x * *dimY * *dimZ + y * *dimZ + z] = newValue; };
# 70 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 71 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 72 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 73 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "setIf", &____must_manage_setIf, ____alias_loc_id_8, ____chimes_did_disable3, false); }

void setIf(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ) { (____chimes_replaying ? setIf_resumable(testValue, newValue, array3D, dimX, dimY, dimZ) : setIf_quick(testValue, newValue, array3D, dimX, dimY, dimZ)); }
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randu_quick(int * seed, int index)
# 83 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&randu), "randu", &____must_manage_randu, 2, 0, (size_t)(7756533236910309709UL), (size_t)(0UL)) ; ; ;
# 84 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int num; num = (A*seed[index] + C) ;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 seed[index] = num % M;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (fabs(seed[index]/((double) M))); rm_stack(false, 0UL, "randu", &____must_manage_randu, ____alias_loc_id_9, ____chimes_did_disable4, false); return ____chimes_ret_var_4; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "randu", &____must_manage_randu, ____alias_loc_id_9, ____chimes_did_disable4, false); }

double randu(int * seed, int index) { return (____chimes_replaying ? randu_resumable(seed, index) : randu_quick(seed, index)); }
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randn_quick(int * seed, int index){const int ____chimes_did_disable5 = new_stack((void *)(&randn), "randn", &____must_manage_randn, 2, 0, (size_t)(7756533236910309751UL), (size_t)(0UL)) ; ; ;
# 97 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double u; call_lbl_0: u = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 99 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double v; call_lbl_1: v = (({ calling_npm("randu", 0); randu_npm(seed, index); })) ;
# 100 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double cosine; cosine = (cos(2*3.1415926535897932*v)) ;
# 101 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double rt; rt = (-2*log(u)) ;
# 102 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_5; ; ____chimes_ret_var_5 = (sqrt(rt)*cosine); rm_stack(false, 0UL, "randn", &____must_manage_randn, ____alias_loc_id_10, ____chimes_did_disable5, false); return ____chimes_ret_var_5; ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "randn", &____must_manage_randn, ____alias_loc_id_10, ____chimes_did_disable5, false); }

double randn(int * seed, int index) { return (____chimes_replaying ? randn_resumable(seed, index) : randn_quick(seed, index)); }
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void addNoise_quick(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed){const int ____chimes_did_disable6 = new_stack((void *)(&addNoise), "addNoise", &____must_manage_addNoise, 5, 0, (size_t)(7756533236910309855UL), (size_t)(7756533236910309856UL), (size_t)(7756533236910309857UL), (size_t)(7756533236910309858UL), (size_t)(7756533236910309859UL)) ; ; ;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 115 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 116 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 117 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_0: array3D[x * *dimY * *dimZ + y * *dimZ + z] = array3D[x * *dimY * *dimZ + y * *dimZ + z] + (int)(5*({ calling_npm("randn", 0); randn_npm(seed, 0); }));
# 118 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 120 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "addNoise", &____must_manage_addNoise, ____alias_loc_id_11, ____chimes_did_disable6, false); }

void addNoise(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed) { (____chimes_replaying ? addNoise_resumable(array3D, dimX, dimY, dimZ, seed) : addNoise_quick(array3D, dimX, dimY, dimZ, seed)); }
# 127 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void strelDisk_quick(int * disk, int radius)
# 128 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&strelDisk), "strelDisk", &____must_manage_strelDisk, 2, 0, (size_t)(7756533236910309931UL), (size_t)(0UL)) ; ; ;
# 129 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius*2 - 1) ;
# 130 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 132 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt(pow((double)(x-radius+1),2) + pow((double)(y-radius+1),2))) ;
# 134 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < radius) {disk[x*diameter + y] = 1; };
# 136 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 137 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 138 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "strelDisk", &____must_manage_strelDisk, ____alias_loc_id_12, ____chimes_did_disable7, false); }

void strelDisk(int * disk, int radius) { (____chimes_replaying ? strelDisk_resumable(disk, radius) : strelDisk_quick(disk, radius)); }
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void dilate_matrix_quick(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error)
# 151 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&dilate_matrix), "dilate_matrix", &____must_manage_dilate_matrix, 8, 0, (size_t)(7756533236910310082UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startX; startX = (posX - error) ;
# 153 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startX < 0)
# 154 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startX++;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int startY; startY = (posY - error) ;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startY < 0)
# 157 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startY++;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endX; endX = (posX + error) ;
# 159 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endX > dimX)
# 160 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endX--;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int endY; endY = (posY + error) ;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endY > dimY)
# 163 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endY--;
# 164 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = startX; x < endX; x++){
# 166 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = startY; y < endY; y++){
# 167 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double distance; distance = (sqrt( pow((double)(x-posX),2) + pow((double)(y-posY),2) )) ;
# 168 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < error) {matrix[x*dimY*dimZ + y*dimZ + posZ] = 1; };
# 170 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 171 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 172 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "dilate_matrix", &____must_manage_dilate_matrix, ____alias_loc_id_13, ____chimes_did_disable8, false); }

void dilate_matrix(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error) { (____chimes_replaying ? dilate_matrix_resumable(matrix, posX, posY, posZ, dimX, dimY, dimZ, error) : dilate_matrix_quick(matrix, posX, posY, posZ, dimX, dimY, dimZ, error)); }
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void imdilate_disk_quick(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix)
# 184 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&imdilate_disk), "imdilate_disk", &____must_manage_imdilate_disk, 6, 0, (size_t)(7756533236910310175UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310180UL)) ; ; ;
# 185 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; int z; ;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(z = 0; z < dimZ; z++){
# 187 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < dimX; x++){
# 188 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < dimY; y++){
# 189 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if(matrix[x*dimY*dimZ + y*dimZ + z] == 1){
# 190 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
      call_lbl_0: ({ calling_npm("dilate_matrix", 0); dilate_matrix_npm(newMatrix, x, y, z, dimX, dimY, dimZ, error); });
# 191 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 193 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 194 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 195 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "imdilate_disk", &____must_manage_imdilate_disk, ____alias_loc_id_14, ____chimes_did_disable9, false); }

void imdilate_disk(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix) { (____chimes_replaying ? imdilate_disk_resumable(matrix, dimX, dimY, dimZ, error, newMatrix) : imdilate_disk_quick(matrix, dimX, dimY, dimZ, error, newMatrix)); }
# 203 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void getneighbors_quick(int * se, double * neighbors, int radius){const int ____chimes_did_disable10 = new_stack((void *)(&getneighbors), "getneighbors", &____must_manage_getneighbors, 3, 0, (size_t)(7756533236910310267UL), (size_t)(7756533236910310268UL), (size_t)(0UL)) ; ; ;
# 204 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int neighY; neighY = (0) ;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int center; center = (radius - 1) ;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius*2 -1) ;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 209 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 210 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(se[x*diameter + y]){
# 211 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2] = (int)(y - center);
# 212 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2 + 1] = (int)(x - center);
# 213 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighY++;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 215 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 216 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 217 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "getneighbors", &____must_manage_getneighbors, ____alias_loc_id_15, ____chimes_did_disable10, false); }

void getneighbors(int * se, double * neighbors, int radius) { (____chimes_replaying ? getneighbors_resumable(se, neighbors, radius) : getneighbors_quick(se, neighbors, radius)); }
# 230 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void videoSequence_quick(int * I, int IszX, int IszY, int Nfr, int * seed){const int ____chimes_did_disable11 = new_stack((void *)(&videoSequence), "videoSequence", (int *)0, 5, 5, (size_t)(7756533236910310478UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910310482UL), "videoSequence|I|0", (int *)0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "videoSequence|IszX|0", (int *)0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0, "videoSequence|IszY|0", (int *)0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "videoSequence|Nfr|0", (int *)0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "videoSequence|seed|0", (int *)0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0) ; ; ;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int k; ;
# 232 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int max_size; max_size = (IszX*IszY*Nfr) ;
# 233 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 234 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int x0; call_lbl_0: x0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszY/2.0); })) ;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int y0; call_lbl_1: y0 = ((int)({ calling_npm("roundDouble", 0); roundDouble_npm(IszX/2.0); })) ;
# 236 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 I[x0 *IszY *Nfr + y0 * Nfr + 0] = 1;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 238 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 239 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int xk; int yk; int pos; ;
# 240 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 241 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xk = abs(x0 + (k-1));
# 242 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  yk = abs(y0 - 2*(k-1));
# 243 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  pos = yk * IszY * Nfr + xk *Nfr + k;
# 244 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (pos >= max_size) {pos = 0; };
# 246 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  I[pos] = 1;
# 247 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 248 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 249 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 250 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         call_lbl_2: checkpoint_transformed(2, ____alias_loc_id_1);
# 251 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 252 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 253 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int *newMatrix; newMatrix = ((int *) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * IszX * IszY * Nfr); malloc_helper(____chimes_tmp_ptr, sizeof(int)*IszX*IszY*Nfr, 7756533236910310433UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 255 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_3: ({ calling_npm("imdilate_disk", 0); imdilate_disk_npm(I, IszX, IszY, Nfr, 5, newMatrix); });
# 256 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 257 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < IszX; x++){
# 258 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < IszY; y++){
# 259 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(k = 0; k < Nfr; k++){
# 260 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I[x*IszY*Nfr + y*Nfr + k] = newMatrix[x*IszY*Nfr + y*Nfr + k];
# 261 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 262 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 263 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 264 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(newMatrix); free_helper(newMatrix, 7756533236910310433UL); }) ;
# 265 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 266 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 267 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         call_lbl_4: checkpoint_transformed(4, ____alias_loc_id_0);
# 268 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 269 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 270 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 271 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_5: ({ calling_npm("setIf", 0); setIf_npm(0, 100, I, &IszX, &IszY, &Nfr); });
# 272 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_6: ({ calling_npm("setIf", 0); setIf_npm(1, 228, I, &IszX, &IszY, &Nfr); });
# 273 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 274 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_7: ({ calling_npm("addNoise", 0); addNoise_npm(I, &IszX, &IszY, &Nfr, seed); });
# 275 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "videoSequence", (int *)0x0, 0, ____chimes_did_disable11, false); }

void videoSequence(int * I, int IszX, int IszY, int Nfr, int * seed) { (____chimes_replaying ? videoSequence_resumable(I, IszX, IszY, Nfr, seed) : videoSequence_quick(I, IszX, IszY, Nfr, seed)); }
# 283 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double calcLikelihoodSum_quick(int * I, int * ind, int numOnes){const int ____chimes_did_disable12 = new_stack((void *)(&calcLikelihoodSum), "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, 3, 0, (size_t)(7756533236910310546UL), (size_t)(7756533236910310547UL), (size_t)(0UL)) ; ; ;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double likelihoodSum; likelihoodSum = (0.0) ;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y; ;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (y = 0; y < numOnes; y++) { likelihoodSum += (pow((I[ind[y]] - 100),2) - pow((I[ind[y]]-228),2))/50.0; };
# 288 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_6; ; ____chimes_ret_var_6 = (likelihoodSum); rm_stack(false, 0UL, "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, ____alias_loc_id_16, ____chimes_did_disable12, false); return ____chimes_ret_var_6; ;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "calcLikelihoodSum", &____must_manage_calcLikelihoodSum, ____alias_loc_id_16, ____chimes_did_disable12, false); }

double calcLikelihoodSum(int * I, int * ind, int numOnes) { return (____chimes_replaying ? calcLikelihoodSum_resumable(I, ind, numOnes) : calcLikelihoodSum_quick(I, ind, numOnes)); }
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndex_quick(double * CDF, int lengthCDF, double value){const int ____chimes_did_disable13 = new_stack((void *)(&findIndex), "findIndex", &____must_manage_findIndex, 3, 0, (size_t)(7756533236910310606UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 299 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int index; index = (-1) ;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; ;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < lengthCDF; x++){
# 302 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if(CDF[x] >= value){
# 303 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   index = x;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   break;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 306 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 307 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(index == -1){
# 308 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_7; ; ____chimes_ret_var_7 = (lengthCDF-1); rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_17, ____chimes_did_disable13, false); return ____chimes_ret_var_7; ;
# 309 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 310 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (index); rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_17, ____chimes_did_disable13, false); return ____chimes_ret_var_8; ;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "findIndex", &____must_manage_findIndex, ____alias_loc_id_17, ____chimes_did_disable13, false); }

int findIndex(double * CDF, int lengthCDF, double value) { return (____chimes_replaying ? findIndex_resumable(CDF, lengthCDF, value) : findIndex_quick(CDF, lengthCDF, value)); }
# 322 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndexBin_quick(double * CDF, int beginIndex, int endIndex, double value){const int ____chimes_did_disable14 = new_stack((void *)(&findIndexBin), "findIndexBin", &____must_manage_findIndexBin, 4, 0, (size_t)(7756533236910310747UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 323 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (endIndex < beginIndex) { int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = (-1); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_9; ; };
# 325 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int middleIndex; middleIndex = (beginIndex + ((endIndex - beginIndex)/2)) ;
# 326 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 327 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(CDF[middleIndex] >= value)
# 328 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 329 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 330 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (middleIndex == 0) { int ____chimes_ret_var_10; ; ____chimes_ret_var_10 = (middleIndex); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_10; ; } else if (CDF[middleIndex-1] < value) { int ____chimes_ret_var_11; ; ____chimes_ret_var_11 = (middleIndex); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_11; ; } else if(CDF[middleIndex-1] == value)
# 335 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  {
# 336 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   while(middleIndex > 0 && CDF[middleIndex-1] == value)
# 337 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   middleIndex--;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    int ____chimes_ret_var_12; ; ____chimes_ret_var_12 = (middleIndex); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_12; ;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 340 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 341 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (CDF[middleIndex] > value) { int ____chimes_ret_var_13; ; call_lbl_0: ____chimes_ret_var_13 = (({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, beginIndex, middleIndex+1, value); })); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_13; ; };
# 343 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_14; ; call_lbl_1: ____chimes_ret_var_14 = (({ calling_npm("findIndexBin", 0); findIndexBin_npm(CDF, middleIndex-1, endIndex, value); })); rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); return ____chimes_ret_var_14; ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "findIndexBin", &____must_manage_findIndexBin, ____alias_loc_id_18, ____chimes_did_disable14, false); }

int findIndexBin(double * CDF, int beginIndex, int endIndex, double value) { return (____chimes_replaying ? findIndexBin_resumable(CDF, beginIndex, endIndex, value) : findIndexBin_quick(CDF, beginIndex, endIndex, value)); }
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void particleFilter_quick(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles){const int ____chimes_did_disable15 = new_stack((void *)(&particleFilter), "particleFilter", (int *)0, 6, 6, (size_t)(7756533236910311726UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311730UL), (size_t)(0UL), "particleFilter|I|0", (int *)0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "particleFilter|IszX|0", (int *)0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0, "particleFilter|IszY|0", (int *)0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "particleFilter|Nfr|0", (int *)0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "particleFilter|seed|0", (int *)0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0, "particleFilter|Nparticles|0", (int *)0, "i32", (void *)(&Nparticles), (size_t)4, 0, 0, 0) ; int k;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *ind;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *u;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *CDF;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *yj;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *xj;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *arrayY;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *arrayX;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *likelihood;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *weights;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double *objxy;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int countOnes;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *disk;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int max_size;
# 356 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 register_stack_vars(14, "particleFilter|k|0", (int *)0x0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "particleFilter|ind|0", (int *)0x0, "i32*", (void *)(&ind), (size_t)8, 1, 0, 0, "particleFilter|u|0", (int *)0x0, "double*", (void *)(&u), (size_t)8, 1, 0, 0, "particleFilter|CDF|0", (int *)0x0, "double*", (void *)(&CDF), (size_t)8, 1, 0, 0, "particleFilter|yj|0", (int *)0x0, "double*", (void *)(&yj), (size_t)8, 1, 0, 0, "particleFilter|xj|0", (int *)0x0, "double*", (void *)(&xj), (size_t)8, 1, 0, 0, "particleFilter|arrayY|0", (int *)0x0, "double*", (void *)(&arrayY), (size_t)8, 1, 0, 0, "particleFilter|arrayX|0", (int *)0x0, "double*", (void *)(&arrayX), (size_t)8, 1, 0, 0, "particleFilter|likelihood|0", (int *)0x0, "double*", (void *)(&likelihood), (size_t)8, 1, 0, 0, "particleFilter|weights|0", (int *)0x0, "double*", (void *)(&weights), (size_t)8, 1, 0, 0, "particleFilter|objxy|0", (int *)0x0, "double*", (void *)(&objxy), (size_t)8, 1, 0, 0, "particleFilter|countOnes|0", (int *)0x0, "i32", (void *)(&countOnes), (size_t)4, 0, 0, 0, "particleFilter|disk|0", (int *)0x0, "i32*", (void *)(&disk), (size_t)8, 1, 0, 0, "particleFilter|max_size|0", (int *)0x0, "i32", (void *)(&max_size), (size_t)4, 0, 0, 0); ; ;
# 357 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 358 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    max_size = (IszX*IszY*Nfr) ;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long start; call_lbl_0: start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 360 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double xe; call_lbl_1: xe = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY/2.0); })) ;
# 362 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ye; call_lbl_2: ye = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX/2.0); })) ;
# 363 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 365 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int radius; radius = (5) ;
# 366 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int diameter; diameter = (radius*2 - 1) ;
# 367 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    disk = ((int *) ({ void *____chimes_tmp_ptr = malloc(diameter * diameter * sizeof(int)); malloc_helper(____chimes_tmp_ptr, diameter*diameter*sizeof(int), 7756533236910310861UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 368 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_3: ({ calling_npm("strelDisk", 0); strelDisk_npm(disk, radius); });
# 369 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    countOnes = (0) ;
# 370 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x; int y; ;
# 371 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 372 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 373 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(disk[x*diameter + y]) {
# 374 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    countOnes++;
# 375 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
            }
# 376 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 377 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 378 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    objxy = ((double *) ({ void *____chimes_tmp_ptr = malloc(countOnes * 2 * sizeof(double)); malloc_helper(____chimes_tmp_ptr, countOnes*2*sizeof(double), 7756533236910311141UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 379 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_4: ({ calling_npm("getneighbors", 0); getneighbors_npm(disk, objxy, radius); });
# 380 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_neighbors; call_lbl_5: get_neighbors = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 382 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_0; call_lbl_6: ____chimes_unroll_var_0 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, get_neighbors); })) ; printf("TIME TO GET NEIGHBORS TOOK: %f\n", ____chimes_unroll_var_0);
# 383 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 384 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    weights = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311306UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 385 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(weights, Nparticles) private(x)
# 386 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){
# 387 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  weights[x] = 1/((double)(Nparticles));
# 388 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 389 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long get_weights; call_lbl_7: get_weights = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 390 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_1; call_lbl_8: ____chimes_unroll_var_1 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_neighbors, get_weights); })) ; printf("TIME TO GET WEIGHTSTOOK: %f\n", ____chimes_unroll_var_1);
# 391 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 392 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    likelihood = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311259UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 393 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    arrayX = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311133UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 394 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    arrayY = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311149UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 395 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    xj = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311644UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 396 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    yj = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311654UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 397 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    CDF = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311509UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 398 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    u = ((double *) ({ void *____chimes_tmp_ptr = malloc(sizeof(double) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(double)*Nparticles, 7756533236910311557UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 399 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind = ((int*) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * countOnes * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(int)*countOnes*Nparticles, 7756533236910311182UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 400 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, xe, ye) private(x)
# 401 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < Nparticles; x++){
# 402 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayX[x] = xe;
# 403 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  arrayY[x] = ye;
# 404 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 405 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ;
# 406 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long ____chimes_unroll_var_2; call_lbl_9: ____chimes_unroll_var_2 = (({ calling_npm("get_time", 0); get_time_npm(); })) ; float ____chimes_unroll_var_3; call_lbl_10: ____chimes_unroll_var_3 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(get_weights, ____chimes_unroll_var_2); })) ; printf("TIME TO SET ARRAYS TOOK: %f\n", ____chimes_unroll_var_3);
# 408 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int indX; int indY; ;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(k = 1; k < Nfr; k++){
# 410 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long set_arrays; call_lbl_11: set_arrays = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 411 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 412 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 413 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(arrayX, arrayY, Nparticles, seed) private(x)
# 415 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 416 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    call_lbl_12: arrayX[x] += 1 + 5*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 417 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    call_lbl_13: arrayY[x] += -2 + 2*({ calling_npm("randn", 0); randn_npm(seed, x); });
# 418 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 419 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long error; call_lbl_14: error = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 420 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_4; call_lbl_15: ____chimes_unroll_var_4 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(set_arrays, error); })) ; printf("TIME TO SET ERROR TOOK: %f\n", ____chimes_unroll_var_4);
# 421 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 422 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(likelihood, I, arrayX, arrayY, objxy, ind) private(x, y, indX, indY)
# 423 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 424 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 425 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 426 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 427 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 428 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 429 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < countOnes; y++){
# 430 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_16: indX = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayX[x]); }) + objxy[y*2 + 1];
# 431 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_17: indY = ({ calling_npm("roundDouble", 0); roundDouble_npm(arrayY[x]); }) + objxy[y*2];
# 432 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    ind[x*countOnes + y] = fabs(indX*IszY*Nfr + indY*Nfr + k);
# 433 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (ind[x*countOnes + y] >= max_size) {ind[x*countOnes + y] = 0; };
# 435 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 436 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = 0;
# 437 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for (y = 0; y < countOnes; y++) { likelihood[x] += (pow((I[ind[x*countOnes + y]] - 100),2) - pow((I[ind[x*countOnes + y]]-228),2))/50.0; };
# 439 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   likelihood[x] = likelihood[x]/((double) countOnes);
# 440 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 441 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long likelihood_time; call_lbl_18: likelihood_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 442 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_5; call_lbl_19: ____chimes_unroll_var_5 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(error, likelihood_time); })) ; printf("TIME TO GET LIKELIHOODS TOOK: %f\n", ____chimes_unroll_var_5);
# 443 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 444 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 445 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(Nparticles, weights, likelihood) private(x)
# 446 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 447 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x] * exp(likelihood[x]);
# 448 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 449 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long exponential; call_lbl_20: exponential = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_6; call_lbl_21: ____chimes_unroll_var_6 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(likelihood_time, exponential); })) ; printf("TIME TO GET EXP TOOK: %f\n", ____chimes_unroll_var_6);
# 451 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double sumWeights; sumWeights = (0) ;
# 452 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:sumWeights)
# 453 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 454 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   sumWeights += weights[x];
# 455 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 456 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long sum_time; call_lbl_22: sum_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 457 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_7; call_lbl_23: ____chimes_unroll_var_7 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(exponential, sum_time); })) ; printf("TIME TO SUM WEIGHTS TOOK: %f\n", ____chimes_unroll_var_7);
# 458 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(sumWeights, weights) private(x)
# 459 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 460 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = weights[x]/sumWeights;
# 461 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 462 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long normalize; call_lbl_24: normalize = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 463 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_8; call_lbl_25: ____chimes_unroll_var_8 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(sum_time, normalize); })) ; printf("TIME TO NORMALIZE WEIGHTS TOOK: %f\n", ____chimes_unroll_var_8);
# 464 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  xe = 0;
# 465 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ye = 0;
# 466 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 467 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for private(x) reduction(+:xe, ye)
# 468 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 469 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xe += arrayX[x] * weights[x];
# 470 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   ye += arrayY[x] * weights[x];
# 471 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 472 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long move_time; call_lbl_26: move_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 473 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_9; call_lbl_27: ____chimes_unroll_var_9 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(normalize, move_time); })) ; printf("TIME TO MOVE OBJECT TOOK: %f\n", ____chimes_unroll_var_9);
# 474 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("XE: %lf\n", xe);
# 475 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("YE: %lf\n", ye);
# 476 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    double ____chimes_unroll_var_10; call_lbl_28: ____chimes_unroll_var_10 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszY/2.0); })) ; double ____chimes_unroll_var_11; call_lbl_29: ____chimes_unroll_var_11 = (({ calling_npm("roundDouble", 0); roundDouble_npm(IszX/2.0); })) ; double distance; distance = (sqrt( pow((double)(xe-(int)____chimes_unroll_var_10),2) + pow((double)(ye-(int)____chimes_unroll_var_11),2) )) ;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%lf\n", distance);
# 478 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 479 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 481 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 482 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 483 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 484 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 485 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  CDF[0] = weights[0];
# 486 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 1; x < Nparticles; x++){
# 487 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   CDF[x] = weights[x] + CDF[x-1];
# 488 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 489 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long cum_sum; call_lbl_30: cum_sum = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 490 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_12; call_lbl_31: ____chimes_unroll_var_12 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(move_time, cum_sum); })) ; printf("TIME TO CALC CUM SUM TOOK: %f\n", ____chimes_unroll_var_12);
# 491 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double u1; call_lbl_32: u1 = ((1/((double)(Nparticles)))*({ calling_npm("randu", 0); randu_npm(seed, 0); })) ;
# 492 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(u, u1, Nparticles) private(x)
# 493 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 494 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   u[x] = u1 + x/((double)(Nparticles));
# 495 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 496 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long u_time; call_lbl_33: u_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 497 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_13; call_lbl_34: ____chimes_unroll_var_13 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(cum_sum, u_time); })) ; printf("TIME TO CALC U TOOK: %f\n", ____chimes_unroll_var_13);
# 498 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int j; int i; ;
# 499 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
#pragma omp parallel for shared(CDF, Nparticles, xj, yj, u, arrayX, arrayY) private(i, j)
# 501 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(j = 0; j < Nparticles; j++){
# 502 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    call_lbl_35: i = ({ calling_npm("findIndex", 0); findIndex_npm(CDF, Nparticles, u[j]); });
# 503 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (i == -1) {i = Nparticles-1; };
# 505 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   xj[j] = arrayX[i];
# 506 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   yj[j] = arrayY[i];
# 507 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 508 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 509 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long xyj_time; call_lbl_36: xyj_time = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 510 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_14; call_lbl_37: ____chimes_unroll_var_14 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(u_time, xyj_time); })) ; printf("TIME TO CALC NEW ARRAY X AND Y TOOK: %f\n", ____chimes_unroll_var_14);
# 511 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 512 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 513 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < Nparticles; x++){
# 514 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 515 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayX[x] = xj[x];
# 516 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   arrayY[x] = yj[x];
# 517 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   weights[x] = 1/((double)(Nparticles));
# 518 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 519 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   long long reset; call_lbl_38: reset = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 520 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    float ____chimes_unroll_var_15; call_lbl_39: ____chimes_unroll_var_15 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(xyj_time, reset); })) ; printf("TIME TO RESET WEIGHTS TOOK: %f\n", ____chimes_unroll_var_15);
# 521 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 522 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 523 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         call_lbl_40: checkpoint_transformed(40, ____alias_loc_id_2);
# 524 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 525 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 526 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(disk); free_helper(disk, 7756533236910310861UL); }) ;
# 527 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(objxy); free_helper(objxy, 7756533236910311141UL); }) ;
# 528 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(weights); free_helper(weights, 7756533236910311306UL); }) ;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(likelihood); free_helper(likelihood, 7756533236910311259UL); }) ;
# 530 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(xj); free_helper(xj, 7756533236910311644UL); }) ;
# 531 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(yj); free_helper(yj, 7756533236910311654UL); }) ;
# 532 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(arrayX); free_helper(arrayX, 7756533236910311133UL); }) ;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(arrayY); free_helper(arrayY, 7756533236910311149UL); }) ;
# 534 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(CDF); free_helper(CDF, 7756533236910311509UL); }) ;
# 535 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(u); free_helper(u, 7756533236910311557UL); }) ;
# 536 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(ind); free_helper(ind, 7756533236910311182UL); }) ;
# 537 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "particleFilter", (int *)0x0, ____alias_loc_id_19, ____chimes_did_disable15, false); }

void particleFilter(int * I, int IszX, int IszY, int Nfr, int * seed, int Nparticles) { (____chimes_replaying ? particleFilter_resumable(I, IszX, IszY, Nfr, seed, Nparticles) : particleFilter_quick(I, IszX, IszY, Nfr, seed, Nparticles)); }
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int main_quick(int argc, char * argv[]){const int ____chimes_did_disable16 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(7756533236910312000UL)) ; long long endVideoSequence;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long long start;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *I;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int *seed;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int Nparticles;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int Nfr;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int IszY;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int IszX;
# 538 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 register_stack_vars(8, "main|endVideoSequence|0", (int *)0x0, "i64", (void *)(&endVideoSequence), (size_t)8, 0, 0, 0, "main|start|0", (int *)0x0, "i64", (void *)(&start), (size_t)8, 0, 0, 0, "main|I|0", (int *)0x0, "i32*", (void *)(&I), (size_t)8, 1, 0, 0, "main|seed|0", (int *)0x0, "i32*", (void *)(&seed), (size_t)8, 1, 0, 0, "main|Nparticles|0", (int *)0x0, "i32", (void *)(&Nparticles), (size_t)4, 0, 0, 0, "main|Nfr|0", (int *)0x0, "i32", (void *)(&Nfr), (size_t)4, 0, 0, 0, "main|IszY|0", (int *)0x0, "i32", (void *)(&IszY), (size_t)4, 0, 0, 0, "main|IszX|0", (int *)0x0, "i32", (void *)(&IszX), (size_t)4, 0, 0, 0); ; ;
# 539 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 540 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  char *usage; usage = ("openmp.out -x <dimX> -y <dimY> -z <Nfr> -np <Nparticles>") ;
# 541 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 542 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(argc != 9)
# 543 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 544 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("%s\n", usage);
# 545 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_15; ; ____chimes_ret_var_15 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_15; ;
# 546 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 547 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( strcmp( argv[1], "-x" ) || strcmp( argv[3], "-y" ) || strcmp( argv[5], "-z" ) || strcmp( argv[7], "-np" ) ) {
# 549 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf( "%s\n",usage );
# 550 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_16; ; ____chimes_ret_var_16 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_16; ;
# 551 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 552 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 553 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     ;
# 554 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 555 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 556 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[2], "%d", &IszX ) == (-1) ) {
# 557 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimX input is incorrect");
# 558 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_17; ; ____chimes_ret_var_17 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_17; ;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 561 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszX <= 0 ) {
# 562 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimX must be > 0\n");
# 563 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_18; ; ____chimes_ret_var_18 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_18; ;
# 564 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 565 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 566 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[4], "%d", &IszY ) == (-1) ) {
# 568 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: dimY input is incorrect");
# 569 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_19; ; ____chimes_ret_var_19 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_19; ;
# 570 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 571 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 572 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( IszY <= 0 ) {
# 573 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("dimY must be > 0\n");
# 574 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_20; ; ____chimes_ret_var_20 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_20; ;
# 575 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 576 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 577 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[6], "%d", &Nfr ) == (-1) ) {
# 579 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of frames input is incorrect");
# 580 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_21; ; ____chimes_ret_var_21 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_21; ;
# 581 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 582 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 583 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nfr <= 0 ) {
# 584 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("number of frames must be > 0\n");
# 585 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_22; ; ____chimes_ret_var_22 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_22; ;
# 586 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 587 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 588 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 589 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( sscanf( argv[8], "%d", &Nparticles ) == (-1) ) {
# 590 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    printf("ERROR: Number of particles input is incorrect");
# 591 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     int ____chimes_ret_var_23; ; ____chimes_ret_var_23 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_23; ;
# 592 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 593 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 594 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if( Nparticles <= 0 ) {
# 595 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  printf("Number of particles must be > 0\n");
# 596 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_24; ; ____chimes_ret_var_24 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_24; ;
# 597 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 598 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 599 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    seed = ((int *) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * Nparticles); malloc_helper(____chimes_tmp_ptr, sizeof(int)*Nparticles, 7756533236910311919UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 600 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int i; ;
# 601 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (i = 0; i < Nparticles; i++) { seed[i] = time(0)*i; };
# 603 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    I = ((int *) ({ void *____chimes_tmp_ptr = malloc(sizeof(int) * IszX * IszY * Nfr); malloc_helper(____chimes_tmp_ptr, sizeof(int)*IszX*IszY*Nfr, 7756533236910311937UL, 0, 0); ____chimes_tmp_ptr; })) ;
# 605 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_0: start = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 606 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 607 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_1: ({ calling((void*)videoSequence, 1, ____alias_loc_id_4, 0UL, 5, (size_t)(7756533236910311937UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311919UL)); videoSequence_quick(I, IszX, IszY, Nfr, seed); }) ;
# 608 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     call_lbl_2: endVideoSequence = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 609 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 610 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 611 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 612 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_16; call_lbl_3: ____chimes_unroll_var_16 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endVideoSequence); })) ; printf("VIDEO SEQUENCE TOOK %f\n", ____chimes_unroll_var_16);
# 615 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 616 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  call_lbl_4: ({ calling((void*)particleFilter, 4, ____alias_loc_id_3, 0UL, 6, (size_t)(7756533236910311937UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7756533236910311919UL), (size_t)(0UL)); particleFilter_quick(I, IszX, IszY, Nfr, seed, Nparticles); }) ;
# 617 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long endParticleFilter; call_lbl_5: endParticleFilter = (({ calling_npm("get_time", 0); get_time_npm(); })) ;
# 618 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_17; call_lbl_6: ____chimes_unroll_var_17 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(endVideoSequence, endParticleFilter); })) ; printf("PARTICLE FILTER TOOK %f\n", ____chimes_unroll_var_17);
# 619 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   float ____chimes_unroll_var_18; call_lbl_7: ____chimes_unroll_var_18 = (({ calling_npm("elapsed_time", 0); elapsed_time_npm(start, endParticleFilter); })) ; printf("ENTIRE PROGRAM TOOK %f\n", ____chimes_unroll_var_18);
# 620 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 621 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(seed); free_helper(seed, 7756533236910311919UL); }) ;
# 622 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  ({ free(I); free_helper(I, 7756533236910311937UL); }) ;
# 623 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_25; ; ____chimes_ret_var_25 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); return ____chimes_ret_var_25; ;
# 624 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_20, ____chimes_did_disable16, false); }

int main(int argc, char * argv[]) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 34 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
long long get_time_npm() {
# 35 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 struct timeval tv;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 gettimeofday(&tv, __null);
# 37 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  long long ____chimes_ret_var_0; ____chimes_ret_var_0 = ((tv.tv_sec * 1000000) + tv.tv_usec); return ____chimes_ret_var_0; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 40 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
float elapsed_time_npm(long long start_time, long long end_time) {
# 41 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
         float ____chimes_ret_var_1; ____chimes_ret_var_1 = ((float) (end_time - start_time) / (1000 * 1000)); return ____chimes_ret_var_1; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 47 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double roundDouble_npm(double value){
# 48 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int newValue = (int)(value);
# 49 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (value - newValue < .5) { double ____chimes_ret_var_2; ____chimes_ret_var_2 = (newValue); return ____chimes_ret_var_2; ; } else { double ____chimes_ret_var_3; ____chimes_ret_var_3 = (newValue++); return ____chimes_ret_var_3; ; } ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 63 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void setIf_npm(int testValue, int newValue, int * array3D, int * dimX, int * dimY, int * dimZ){
# 64 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y, z;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 66 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 67 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 68 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if (array3D[x * *dimY * *dimZ+y * *dimZ + z] == testValue) {array3D[x * *dimY * *dimZ + y * *dimZ + z] = newValue; };
# 70 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 71 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 72 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 73 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 82 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randu_npm(int * seed, int index)
# 83 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 84 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int num = A*seed[index] + C;
# 85 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 seed[index] = num % M;
# 86 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_4; ____chimes_ret_var_4 = (fabs(seed[index]/((double) M))); return ____chimes_ret_var_4; ;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 96 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double randn_npm(int * seed, int index){
# 97 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double u = randu_npm(seed, index);
# 99 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double v = randu_npm(seed, index);
# 100 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double cosine = cos(2*3.1415926535897932*v);
# 101 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double rt = -2*log(u);
# 102 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_5; ____chimes_ret_var_5 = (sqrt(rt)*cosine); return ____chimes_ret_var_5; ;
# 103 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 112 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void addNoise_npm(int * array3D, int * dimX, int * dimY, int * dimZ, int * seed){
# 113 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y, z;
# 114 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < *dimX; x++){
# 115 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < *dimY; y++){
# 116 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(z = 0; z < *dimZ; z++){
# 117 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    array3D[x * *dimY * *dimZ + y * *dimZ + z] = array3D[x * *dimY * *dimZ + y * *dimZ + z] + (int)(5*randn_npm(seed, 0));
# 118 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 119 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 120 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 121 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 127 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void strelDisk_npm(int * disk, int radius)
# 128 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 129 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int diameter = radius*2 - 1;
# 130 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 132 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 133 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double distance = sqrt(pow((double)(x-radius+1),2) + pow((double)(y-radius+1),2));
# 134 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < radius) {disk[x*diameter + y] = 1; };
# 136 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 137 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 138 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 150 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void dilate_matrix_npm(int * matrix, int posX, int posY, int posZ, int dimX, int dimY, int dimZ, int error)
# 151 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 152 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int startX = posX - error;
# 153 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startX < 0)
# 154 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startX++;
# 155 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int startY = posY - error;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(startY < 0)
# 157 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 startY++;
# 158 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int endX = posX + error;
# 159 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endX > dimX)
# 160 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endX--;
# 161 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int endY = posY + error;
# 162 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 while(endY > dimY)
# 163 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 endY--;
# 164 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x,y;
# 165 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = startX; x < endX; x++){
# 166 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = startY; y < endY; y++){
# 167 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   double distance = sqrt( pow((double)(x-posX),2) + pow((double)(y-posY),2) );
# 168 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if (distance < error) {matrix[x*dimY*dimZ + y*dimZ + posZ] = 1; };
# 170 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 171 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 172 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 183 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void imdilate_disk_npm(int * matrix, int dimX, int dimY, int dimZ, int error, int * newMatrix)
# 184 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
{
# 185 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y, z;
# 186 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(z = 0; z < dimZ; z++){
# 187 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(x = 0; x < dimX; x++){
# 188 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   for(y = 0; y < dimY; y++){
# 189 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    if(matrix[x*dimY*dimZ + y*dimZ + z] == 1){
# 190 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
     dilate_matrix_npm(newMatrix, x, y, z, dimX, dimY, dimZ, error);
# 191 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    }
# 192 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 193 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 194 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 195 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 203 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
void getneighbors_npm(int * se, double * neighbors, int radius){
# 204 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x, y;
# 205 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int neighY = 0;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int center = radius - 1;
# 207 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int diameter = radius*2 -1;
# 208 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < diameter; x++){
# 209 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  for(y = 0; y < diameter; y++){
# 210 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   if(se[x*diameter + y]){
# 211 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2] = (int)(y - center);
# 212 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighbors[neighY*2 + 1] = (int)(x - center);
# 213 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    neighY++;
# 214 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   }
# 215 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 216 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 217 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 283 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
double calcLikelihoodSum_npm(int * I, int * ind, int numOnes){
# 284 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 double likelihoodSum = 0.0;
# 285 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int y;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for (y = 0; y < numOnes; y++) { likelihoodSum += (pow((I[ind[y]] - 100),2) - pow((I[ind[y]]-228),2))/50.0; };
# 288 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  double ____chimes_ret_var_6; ____chimes_ret_var_6 = (likelihoodSum); return ____chimes_ret_var_6; ;
# 289 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 298 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndex_npm(double * CDF, int lengthCDF, double value){
# 299 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int index = -1;
# 300 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int x;
# 301 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 for(x = 0; x < lengthCDF; x++){
# 302 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if(CDF[x] >= value){
# 303 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   index = x;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   break;
# 305 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 306 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 307 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(index == -1){
# 308 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   int ____chimes_ret_var_7; ____chimes_ret_var_7 = (lengthCDF-1); return ____chimes_ret_var_7; ;
# 309 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 310 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_8; ____chimes_ret_var_8 = (index); return ____chimes_ret_var_8; ;
# 311 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}
# 322 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
int findIndexBin_npm(double * CDF, int beginIndex, int endIndex, double value){
# 323 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (endIndex < beginIndex) { int ____chimes_ret_var_9; ____chimes_ret_var_9 = (-1); return ____chimes_ret_var_9; ; };
# 325 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 int middleIndex = beginIndex + ((endIndex - beginIndex)/2);
# 326 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 327 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if(CDF[middleIndex] >= value)
# 328 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 {
# 329 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
# 330 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  if (middleIndex == 0) { int ____chimes_ret_var_10; ____chimes_ret_var_10 = (middleIndex); return ____chimes_ret_var_10; ; } else if (CDF[middleIndex-1] < value) { int ____chimes_ret_var_11; ____chimes_ret_var_11 = (middleIndex); return ____chimes_ret_var_11; ; } else if(CDF[middleIndex-1] == value)
# 335 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  {
# 336 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   while(middleIndex > 0 && CDF[middleIndex-1] == value)
# 337 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
   middleIndex--;
# 338 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
    int ____chimes_ret_var_12; ____chimes_ret_var_12 = (middleIndex); return ____chimes_ret_var_12; ;
# 339 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  }
# 340 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 }
# 341 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
 if (CDF[middleIndex] > value) { int ____chimes_ret_var_13; ____chimes_ret_var_13 = (findIndexBin_npm(CDF, beginIndex, middleIndex+1, value)); return ____chimes_ret_var_13; ; };
# 343 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
  int ____chimes_ret_var_14; ____chimes_ret_var_14 = (findIndexBin_npm(CDF, middleIndex-1, endIndex, value)); return ____chimes_ret_var_14; ;
# 344 "/scratch/jmg3/rodinia_3.0/openmp/particlefilter/ex_particle_OPENMP_seq.c"
}





static int module_init() {
    init_module(7756533236910309485UL, 42, 17, 9, 21, 14, 0, 14, 58, 0, 1,
                           &____alias_loc_id_0, (unsigned)5, (unsigned)0, (unsigned)0, (7756533236910309485UL + 790UL), (7756533236910309485UL + 797UL), (7756533236910309485UL + 798UL), (7756533236910309485UL + 799UL), (7756533236910309485UL + 993UL),
                           &____alias_loc_id_1, (unsigned)13, (unsigned)0, (unsigned)0, (7756533236910309485UL + 785UL), (7756533236910309485UL + 786UL), (7756533236910309485UL + 787UL), (7756533236910309485UL + 788UL), (7756533236910309485UL + 789UL), (7756533236910309485UL + 790UL), (7756533236910309485UL + 791UL), (7756533236910309485UL + 792UL), (7756533236910309485UL + 793UL), (7756533236910309485UL + 794UL), (7756533236910309485UL + 795UL), (7756533236910309485UL + 796UL), (7756533236910309485UL + 993UL),
                           &____alias_loc_id_2, (unsigned)72, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1266UL), (7756533236910309485UL + 1267UL), (7756533236910309485UL + 1268UL), (7756533236910309485UL + 1269UL), (7756533236910309485UL + 1270UL), (7756533236910309485UL + 1271UL), (7756533236910309485UL + 1272UL), (7756533236910309485UL + 1273UL), (7756533236910309485UL + 1274UL), (7756533236910309485UL + 1275UL), (7756533236910309485UL + 1276UL), (7756533236910309485UL + 1277UL), (7756533236910309485UL + 1278UL), (7756533236910309485UL + 1279UL), (7756533236910309485UL + 1280UL), (7756533236910309485UL + 1281UL), (7756533236910309485UL + 1282UL), (7756533236910309485UL + 1283UL), (7756533236910309485UL + 1284UL), (7756533236910309485UL + 1285UL), (7756533236910309485UL + 1286UL), (7756533236910309485UL + 1287UL), (7756533236910309485UL + 1288UL), (7756533236910309485UL + 1289UL), (7756533236910309485UL + 1290UL), (7756533236910309485UL + 1291UL), (7756533236910309485UL + 1292UL), (7756533236910309485UL + 1293UL), (7756533236910309485UL + 1294UL), (7756533236910309485UL + 1295UL), (7756533236910309485UL + 1296UL), (7756533236910309485UL + 1297UL), (7756533236910309485UL + 1298UL), (7756533236910309485UL + 1299UL), (7756533236910309485UL + 1300UL), (7756533236910309485UL + 1301UL), (7756533236910309485UL + 1302UL), (7756533236910309485UL + 1303UL), (7756533236910309485UL + 1304UL), (7756533236910309485UL + 1305UL), (7756533236910309485UL + 1306UL), (7756533236910309485UL + 1307UL), (7756533236910309485UL + 1308UL), (7756533236910309485UL + 1309UL), (7756533236910309485UL + 1310UL), (7756533236910309485UL + 1311UL), (7756533236910309485UL + 1312UL), (7756533236910309485UL + 1313UL), (7756533236910309485UL + 1314UL), (7756533236910309485UL + 1315UL), (7756533236910309485UL + 1316UL), (7756533236910309485UL + 1317UL), (7756533236910309485UL + 1318UL), (7756533236910309485UL + 1319UL), (7756533236910309485UL + 1320UL), (7756533236910309485UL + 1321UL), (7756533236910309485UL + 1322UL), (7756533236910309485UL + 1323UL), (7756533236910309485UL + 1324UL), (7756533236910309485UL + 1325UL), (7756533236910309485UL + 1326UL), (7756533236910309485UL + 1327UL), (7756533236910309485UL + 1328UL), (7756533236910309485UL + 1648UL), (7756533236910309485UL + 1664UL), (7756533236910309485UL + 1697UL), (7756533236910309485UL + 1774UL), (7756533236910309485UL + 1821UL), (7756533236910309485UL + 2024UL), (7756533236910309485UL + 2072UL), (7756533236910309485UL + 2159UL), (7756533236910309485UL + 2169UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (unsigned)0, (7756533236910309485UL + 2271UL), (7756533236910309485UL + 2272UL),
                           &____alias_loc_id_4, (unsigned)6, (unsigned)0, (unsigned)0, (7756533236910309485UL + 2267UL), (7756533236910309485UL + 2268UL), (7756533236910309485UL + 2269UL), (7756533236910309485UL + 2270UL), (7756533236910309485UL + 2434UL), (7756533236910309485UL + 2559UL),
                           &____alias_loc_id_5, (unsigned)2, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1UL), (7756533236910309485UL + 2UL),
                           &____alias_loc_id_6, (unsigned)3, (unsigned)0, (unsigned)0, (7756533236910309485UL + 19UL), (7756533236910309485UL + 20UL), (7756533236910309485UL + 21UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (unsigned)0, (7756533236910309485UL + 37UL), (7756533236910309485UL + 38UL), (7756533236910309485UL + 39UL), (7756533236910309485UL + 40UL), (7756533236910309485UL + 41UL),
                           &____alias_loc_id_8, (unsigned)10, (unsigned)0, (unsigned)0, (7756533236910309485UL + 73UL), (7756533236910309485UL + 74UL), (7756533236910309485UL + 75UL), (7756533236910309485UL + 76UL), (7756533236910309485UL + 77UL), (7756533236910309485UL + 78UL), (7756533236910309485UL + 79UL), (7756533236910309485UL + 80UL), (7756533236910309485UL + 81UL), (7756533236910309485UL + 177UL),
                           &____alias_loc_id_9, (unsigned)5, (unsigned)0, (unsigned)0, (7756533236910309485UL + 181UL), (7756533236910309485UL + 182UL), (7756533236910309485UL + 183UL), (7756533236910309485UL + 184UL), (7756533236910309485UL + 224UL),
                            &____alias_loc_id_10, (unsigned)7, (unsigned)0, (unsigned)0, (7756533236910309485UL + 227UL), (7756533236910309485UL + 228UL), (7756533236910309485UL + 229UL), (7756533236910309485UL + 230UL), (7756533236910309485UL + 231UL), (7756533236910309485UL + 232UL), (7756533236910309485UL + 233UL),
                            &____alias_loc_id_11, (unsigned)9, (unsigned)0, (unsigned)0, (7756533236910309485UL + 271UL), (7756533236910309485UL + 272UL), (7756533236910309485UL + 273UL), (7756533236910309485UL + 274UL), (7756533236910309485UL + 275UL), (7756533236910309485UL + 276UL), (7756533236910309485UL + 277UL), (7756533236910309485UL + 278UL), (7756533236910309485UL + 370UL),
                            &____alias_loc_id_12, (unsigned)7, (unsigned)0, (unsigned)0, (7756533236910309485UL + 375UL), (7756533236910309485UL + 376UL), (7756533236910309485UL + 377UL), (7756533236910309485UL + 378UL), (7756533236910309485UL + 379UL), (7756533236910309485UL + 380UL), (7756533236910309485UL + 446UL),
                            &____alias_loc_id_13, (unsigned)16, (unsigned)0, (unsigned)0, (7756533236910309485UL + 450UL), (7756533236910309485UL + 451UL), (7756533236910309485UL + 452UL), (7756533236910309485UL + 453UL), (7756533236910309485UL + 454UL), (7756533236910309485UL + 455UL), (7756533236910309485UL + 456UL), (7756533236910309485UL + 457UL), (7756533236910309485UL + 458UL), (7756533236910309485UL + 459UL), (7756533236910309485UL + 460UL), (7756533236910309485UL + 461UL), (7756533236910309485UL + 462UL), (7756533236910309485UL + 463UL), (7756533236910309485UL + 464UL), (7756533236910309485UL + 597UL),
                            &____alias_loc_id_14, (unsigned)9, (unsigned)0, (unsigned)0, (7756533236910309485UL + 605UL), (7756533236910309485UL + 606UL), (7756533236910309485UL + 607UL), (7756533236910309485UL + 608UL), (7756533236910309485UL + 609UL), (7756533236910309485UL + 610UL), (7756533236910309485UL + 611UL), (7756533236910309485UL + 612UL), (7756533236910309485UL + 613UL),
                            &____alias_loc_id_15, (unsigned)9, (unsigned)0, (unsigned)0, (7756533236910309485UL + 696UL), (7756533236910309485UL + 697UL), (7756533236910309485UL + 698UL), (7756533236910309485UL + 699UL), (7756533236910309485UL + 700UL), (7756533236910309485UL + 701UL), (7756533236910309485UL + 702UL), (7756533236910309485UL + 703UL), (7756533236910309485UL + 783UL),
                            &____alias_loc_id_16, (unsigned)6, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1001UL), (7756533236910309485UL + 1002UL), (7756533236910309485UL + 1003UL), (7756533236910309485UL + 1004UL), (7756533236910309485UL + 1005UL), (7756533236910309485UL + 1006UL),
                            &____alias_loc_id_17, (unsigned)8, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1064UL), (7756533236910309485UL + 1065UL), (7756533236910309485UL + 1066UL), (7756533236910309485UL + 1067UL), (7756533236910309485UL + 1068UL), (7756533236910309485UL + 1069UL), (7756533236910309485UL + 1070UL), (7756533236910309485UL + 1071UL),
                            &____alias_loc_id_18, (unsigned)12, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1124UL), (7756533236910309485UL + 1125UL), (7756533236910309485UL + 1126UL), (7756533236910309485UL + 1127UL), (7756533236910309485UL + 1128UL), (7756533236910309485UL + 1129UL), (7756533236910309485UL + 1130UL), (7756533236910309485UL + 1131UL), (7756533236910309485UL + 1132UL), (7756533236910309485UL + 1133UL), (7756533236910309485UL + 1134UL), (7756533236910309485UL + 1135UL),
                            &____alias_loc_id_19, (unsigned)36, (unsigned)0, (unsigned)0, (7756533236910309485UL + 1266UL), (7756533236910309485UL + 1267UL), (7756533236910309485UL + 1268UL), (7756533236910309485UL + 1269UL), (7756533236910309485UL + 1270UL), (7756533236910309485UL + 1271UL), (7756533236910309485UL + 1272UL), (7756533236910309485UL + 1273UL), (7756533236910309485UL + 1274UL), (7756533236910309485UL + 1275UL), (7756533236910309485UL + 1276UL), (7756533236910309485UL + 1277UL), (7756533236910309485UL + 1278UL), (7756533236910309485UL + 1279UL), (7756533236910309485UL + 1280UL), (7756533236910309485UL + 1281UL), (7756533236910309485UL + 1282UL), (7756533236910309485UL + 1283UL), (7756533236910309485UL + 1284UL), (7756533236910309485UL + 1285UL), (7756533236910309485UL + 1286UL), (7756533236910309485UL + 1287UL), (7756533236910309485UL + 1288UL), (7756533236910309485UL + 1289UL), (7756533236910309485UL + 1290UL), (7756533236910309485UL + 1291UL), (7756533236910309485UL + 1292UL), (7756533236910309485UL + 1293UL), (7756533236910309485UL + 1294UL), (7756533236910309485UL + 1295UL), (7756533236910309485UL + 1296UL), (7756533236910309485UL + 1297UL), (7756533236910309485UL + 1298UL), (7756533236910309485UL + 1648UL), (7756533236910309485UL + 1664UL), (7756533236910309485UL + 1821UL),
                            &____alias_loc_id_20, (unsigned)18, (unsigned)0, (unsigned)0, (7756533236910309485UL + 2249UL), (7756533236910309485UL + 2250UL), (7756533236910309485UL + 2251UL), (7756533236910309485UL + 2252UL), (7756533236910309485UL + 2253UL), (7756533236910309485UL + 2254UL), (7756533236910309485UL + 2259UL), (7756533236910309485UL + 2260UL), (7756533236910309485UL + 2261UL), (7756533236910309485UL + 2262UL), (7756533236910309485UL + 2263UL), (7756533236910309485UL + 2264UL), (7756533236910309485UL + 2265UL), (7756533236910309485UL + 2266UL), (7756533236910309485UL + 2273UL), (7756533236910309485UL + 2274UL), (7756533236910309485UL + 2275UL), (7756533236910309485UL + 2276UL),
                            "findIndex", 0, "_Z9findIndexPdid", "_Z13findIndex_npmPdid", 0, 3, (7756533236910309485UL + 1121UL), 0UL, 0UL, 0UL, 0,
                            "randn", 0, "_Z5randnPii", "_Z9randn_npmPii", 0, 2, (7756533236910309485UL + 266UL), 0UL, 0UL, 5, "randu", 2, (7756533236910309485UL + 266UL), 0UL, 0UL, "randu", 2, (7756533236910309485UL + 266UL), 0UL, 0UL, "cos", 1, 0UL, 0UL, "log", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "calcLikelihoodSum", 0, "_Z17calcLikelihoodSumPiS_i", "_Z21calcLikelihoodSum_npmPiS_i", 0, 3, (7756533236910309485UL + 1061UL), (7756533236910309485UL + 1062UL), 0UL, 0UL, 2, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL,
                            "roundDouble", 0, "_Z11roundDoubled", "_Z15roundDouble_npmd", 0, 1, 0UL, 0UL, 0,
                            "findIndexBin", 0, "_Z12findIndexBinPdiid", "_Z16findIndexBin_npmPdiid", 0, 4, (7756533236910309485UL + 1262UL), 0UL, 0UL, 0UL, 0UL, 2, "findIndexBin", 4, (7756533236910309485UL + 1262UL), 0UL, 0UL, 0UL, 0UL, "findIndexBin", 4, (7756533236910309485UL + 1262UL), 0UL, 0UL, 0UL, 0UL,
                            "elapsed_time", 0, "_Z12elapsed_timexx", "_Z16elapsed_time_npmxx", 0, 2, 0UL, 0UL, 0UL, 0,
                            "setIf", 0, "_Z5setIfiiPiS_S_S_", "_Z9setIf_npmiiPiS_S_S_", 0, 6, 0UL, 0UL, (7756533236910309485UL + 177UL), (7756533236910309485UL + 178UL), (7756533236910309485UL + 179UL), (7756533236910309485UL + 180UL), 0UL, 0,
                            "dilate_matrix", 0, "_Z13dilate_matrixPiiiiiiii", "_Z17dilate_matrix_npmPiiiiiiii", 0, 8, (7756533236910309485UL + 597UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 3, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "imdilate_disk", 0, "_Z13imdilate_diskPiiiiiS_", "_Z17imdilate_disk_npmPiiiiiS_", 0, 6, (7756533236910309485UL + 690UL), 0UL, 0UL, 0UL, 0UL, (7756533236910309485UL + 695UL), 0UL, 1, "dilate_matrix", 8, (7756533236910309485UL + 695UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
                            "get_time", 0, "_Z8get_timev", "_Z12get_time_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (7756533236910309485UL + 1UL), (7756533236910309485UL + 2558UL), 0UL,
                            "getneighbors", 0, "_Z12getneighborsPiPdi", "_Z16getneighbors_npmPiPdi", 0, 3, (7756533236910309485UL + 782UL), (7756533236910309485UL + 783UL), 0UL, 0UL, 0,
                            "strelDisk", 0, "_Z9strelDiskPii", "_Z13strelDisk_npmPii", 0, 2, (7756533236910309485UL + 446UL), 0UL, 0UL, 3, "pow", 2, 0UL, 0UL, 0UL, "pow", 2, 0UL, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "addNoise", 0, "_Z8addNoisePiS_S_S_S_", "_Z12addNoise_npmPiS_S_S_S_", 0, 5, (7756533236910309485UL + 370UL), (7756533236910309485UL + 371UL), (7756533236910309485UL + 372UL), (7756533236910309485UL + 373UL), (7756533236910309485UL + 374UL), 0UL, 1, "randn", 2, (7756533236910309485UL + 374UL), 0UL, 0UL,
                            "randu", 0, "_Z5randuPii", "_Z9randu_npmPii", 0, 2, (7756533236910309485UL + 224UL), 0UL, 0UL, 1, "fabs", 1, 0UL, 0UL,
                           "findIndex", &(____chimes_does_checkpoint_findIndex_npm),
                           "randn", &(____chimes_does_checkpoint_randn_npm),
                           "calcLikelihoodSum", &(____chimes_does_checkpoint_calcLikelihoodSum_npm),
                           "roundDouble", &(____chimes_does_checkpoint_roundDouble_npm),
                           "findIndexBin", &(____chimes_does_checkpoint_findIndexBin_npm),
                           "elapsed_time", &(____chimes_does_checkpoint_elapsed_time_npm),
                           "setIf", &(____chimes_does_checkpoint_setIf_npm),
                           "dilate_matrix", &(____chimes_does_checkpoint_dilate_matrix_npm),
                           "imdilate_disk", &(____chimes_does_checkpoint_imdilate_disk_npm),
                           "get_time", &(____chimes_does_checkpoint_get_time_npm),
                           "getneighbors", &(____chimes_does_checkpoint_getneighbors_npm),
                           "strelDisk", &(____chimes_does_checkpoint_strelDisk_npm),
                           "addNoise", &(____chimes_does_checkpoint_addNoise_npm),
                           "randu", &(____chimes_does_checkpoint_randu_npm),
                             (7756533236910309485UL + 605UL), (7756533236910309485UL + 690UL),
                             (7756533236910309485UL + 2269UL), (7756533236910309485UL + 2452UL),
                             (7756533236910309485UL + 450UL), (7756533236910309485UL + 597UL),
                             (7756533236910309485UL + 1289UL), (7756533236910309485UL + 1648UL),
                             (7756533236910309485UL + 1125UL), (7756533236910309485UL + 1262UL),
                             (7756533236910309485UL + 1288UL), (7756533236910309485UL + 1774UL),
                             (7756533236910309485UL + 271UL), (7756533236910309485UL + 370UL),
                             (7756533236910309485UL + 272UL), (7756533236910309485UL + 371UL),
                             (7756533236910309485UL + 273UL), (7756533236910309485UL + 372UL),
                             (7756533236910309485UL + 274UL), (7756533236910309485UL + 373UL),
                             (7756533236910309485UL + 275UL), (7756533236910309485UL + 374UL),
                             (7756533236910309485UL + 797UL), (7756533236910309485UL + 948UL),
                             (7756533236910309485UL + 696UL), (7756533236910309485UL + 782UL),
                             (7756533236910309485UL + 697UL), (7756533236910309485UL + 783UL),
                             (7756533236910309485UL + 181UL), (7756533236910309485UL + 224UL),
                             (7756533236910309485UL + 1292UL), (7756533236910309485UL + 2169UL),
                             (7756533236910309485UL + 1293UL), (7756533236910309485UL + 2024UL),
                             (7756533236910309485UL + 1290UL), (7756533236910309485UL + 1664UL),
                             (7756533236910309485UL + 1291UL), (7756533236910309485UL + 2159UL),
                             (7756533236910309485UL + 2267UL), (7756533236910309485UL + 2434UL),
                             (7756533236910309485UL + 1294UL), (7756533236910309485UL + 2072UL),
                             (7756533236910309485UL + 1295UL), (7756533236910309485UL + 1697UL),
                             (7756533236910309485UL + 1278UL), (7756533236910309485UL + 1376UL),
                             (7756533236910309485UL + 1270UL), (7756533236910309485UL + 2245UL),
                             (7756533236910309485UL + 610UL), (7756533236910309485UL + 695UL),
                             (7756533236910309485UL + 1266UL), (7756533236910309485UL + 2241UL),
                             (7756533236910309485UL + 77UL), (7756533236910309485UL + 179UL),
                             (7756533236910309485UL + 76UL), (7756533236910309485UL + 178UL),
                             (7756533236910309485UL + 75UL), (7756533236910309485UL + 177UL),
                             (7756533236910309485UL + 227UL), (7756533236910309485UL + 266UL),
                             (7756533236910309485UL + 78UL), (7756533236910309485UL + 180UL),
                             (7756533236910309485UL + 1285UL), (7756533236910309485UL + 1821UL),
                             (7756533236910309485UL + 785UL), (7756533236910309485UL + 993UL),
                             (7756533236910309485UL + 1282UL), (7756533236910309485UL + 1656UL),
                             (7756533236910309485UL + 1065UL), (7756533236910309485UL + 1121UL),
                             (7756533236910309485UL + 789UL), (7756533236910309485UL + 997UL),
                             (7756533236910309485UL + 2252UL), (7756533236910309485UL + 2540UL),
                             (7756533236910309485UL + 2251UL), (7756533236910309485UL + 2515UL),
                             (7756533236910309485UL + 2515UL), (7756533236910309485UL + 2296UL),
                             (7756533236910309485UL + 375UL), (7756533236910309485UL + 446UL),
                             (7756533236910309485UL + 1002UL), (7756533236910309485UL + 1062UL),
                             (7756533236910309485UL + 1001UL), (7756533236910309485UL + 1061UL),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "findIndex", "_Z9findIndexPdid", 0,
                             "calcLikelihoodSum", "_Z17calcLikelihoodSumPiS_i", 0,
                             "randn", "_Z5randnPii", 2, "randu", "randu",
                             "particleFilter", "_Z14particleFilterPiiiiS_i", 41, "get_time", "roundDouble", "roundDouble", "strelDisk", "getneighbors", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "randn", "randn", "get_time", "elapsed_time", "roundDouble", "roundDouble", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "get_time", "elapsed_time", "roundDouble", "roundDouble", "get_time", "elapsed_time", "randu", "get_time", "elapsed_time", "findIndex", "get_time", "elapsed_time", "get_time", "elapsed_time", "checkpoint",
                             "videoSequence", "_Z13videoSequencePiiiiS_", 8, "roundDouble", "roundDouble", "checkpoint", "imdilate_disk", "checkpoint", "setIf", "setIf", "addNoise",
                             "roundDouble", "_Z11roundDoubled", 0,
                             "findIndexBin", "_Z12findIndexBinPdiid", 2, "findIndexBin", "findIndexBin",
                             "elapsed_time", "_Z12elapsed_timexx", 0,
                             "setIf", "_Z5setIfiiPiS_S_S_", 0,
                             "dilate_matrix", "_Z13dilate_matrixPiiiiiiii", 0,
                             "imdilate_disk", "_Z13imdilate_diskPiiiiiS_", 1, "dilate_matrix",
                             "get_time", "_Z8get_timev", 0,
                             "getneighbors", "_Z12getneighborsPiPdi", 0,
                             "main", "main", 8, "get_time", "videoSequence", "get_time", "elapsed_time", "particleFilter", "get_time", "elapsed_time", "elapsed_time",
                             "strelDisk", "_Z9strelDiskPii", 0,
                             "addNoise", "_Z8addNoisePiS_S_S_S_", 1, "randn",
                             "randu", "_Z5randuPii", 0,
                        "videoSequence|IszX|0", 1, "videoSequence",
                        "main|IszX|0", 1, "videoSequence",
                        "main|IszY|0", 1, "videoSequence",
                        "main|Nfr|0", 1, "videoSequence",
                        "main|Nparticles|0", 1, "videoSequence",
                        "main|seed|0", 2, "videoSequence", "particleFilter",
                        "main|I|0", 2, "videoSequence", "particleFilter",
                        "main|start|0", 2, "videoSequence", "particleFilter",
                        "main|endVideoSequence|0", 1, "particleFilter",
        "randu", 0UL, (int)2, 7756533236910309751UL, 0UL,
        "randu", 0UL, (int)2, 7756533236910309751UL, 0UL,
        "randn", 0UL, (int)2, 7756533236910309859UL, 0UL,
        "dilate_matrix", 0UL, (int)8, 7756533236910310180UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "imdilate_disk", 0UL, (int)6, 7756533236910310478UL, 0UL, 0UL, 0UL, 0UL, 7756533236910310433UL,
        "setIf", 0UL, (int)6, 0UL, 0UL, 7756533236910310478UL, 7756533236910310271UL, 7756533236910310272UL, 7756533236910310273UL,
        "setIf", 0UL, (int)6, 0UL, 0UL, 7756533236910310478UL, 7756533236910310271UL, 7756533236910310272UL, 7756533236910310273UL,
        "addNoise", 0UL, (int)5, 7756533236910310478UL, 7756533236910310271UL, 7756533236910310272UL, 7756533236910310273UL, 7756533236910310482UL,
        "findIndexBin", 0UL, (int)4, 7756533236910310747UL, 0UL, 0UL, 0UL,
        "findIndexBin", 0UL, (int)4, 7756533236910310747UL, 0UL, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "roundDouble", 0UL, (int)1, 0UL,
        "roundDouble", 0UL, (int)1, 0UL,
        "strelDisk", 0UL, (int)2, 7756533236910310861UL, 0UL,
        "getneighbors", 0UL, (int)3, 7756533236910310861UL, 7756533236910311141UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "randn", 0UL, (int)2, 7756533236910311730UL, 0UL,
        "randn", 0UL, (int)2, 7756533236910311730UL, 0UL,
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
        "randu", 0UL, (int)2, 7756533236910311730UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "findIndex", 0UL, (int)3, 7756533236910311509UL, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "get_time", 0UL, (int)0,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL,
        "elapsed_time", 0UL, (int)2, 0UL, 0UL);
    register_global_var("global|M", "i64", (void *)(&M), 8, 0, 0, 0UL, 0);
    register_global_var("global|A", "i32", (void *)(&A), 4, 0, 0, 0UL, 0);
    register_global_var("global|C", "i32", (void *)(&C), 4, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
