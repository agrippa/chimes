# 1 "linkCells.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "linkCells.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_getNeighborBoxes_npm = 1;
static int ____chimes_does_checkpoint_initLinkCells_npm = 1;
static int ____chimes_does_checkpoint_getBoxFromCoord_npm = 1;
static int ____chimes_does_checkpoint_getTuple_npm = 1;
static int ____chimes_does_checkpoint_copyAtom_npm = 1;
static int ____chimes_does_checkpoint_updateLinkCells_npm = 1;
static int ____chimes_does_checkpoint_emptyHaloCells_npm = 1;
static int ____chimes_does_checkpoint_maxOccupancy_npm = 1;
static int ____chimes_does_checkpoint_putAtomInBox_npm = 1;
static int ____chimes_does_checkpoint_destroyLinkCells_npm = 1;
static int ____chimes_does_checkpoint_getBoxFromTuple_npm = 1;
static int ____chimes_does_checkpoint_moveAtom_npm = 1;
static int ____chimes_does_checkpoint_maxIntParallel_npm = 1;
static int ____chimes_does_checkpoint_profileStart_npm = 1;
static int ____chimes_does_checkpoint_profileStop_npm = 1;

static int ____must_checkpoint_getNeighborBoxes_ix_0 = 2;
static int ____must_checkpoint_putAtomInBox_xyz_0 = 2;
static int ____must_checkpoint_maxOccupancy_localMax_0 = 2;
static int ____must_checkpoint_maxOccupancy_globalMax_0 = 2;

static int ____must_manage_getNeighborBoxes = 2;
static int ____must_manage_initLinkCells = 2;
static int ____must_manage_getBoxFromCoord = 2;
static int ____must_manage_getTuple = 2;
static int ____must_manage_copyAtom = 2;
static int ____must_manage_updateLinkCells = 2;
static int ____must_manage_emptyHaloCells = 2;
static int ____must_manage_maxOccupancy = 2;
static int ____must_manage_putAtomInBox = 2;
static int ____must_manage_destroyLinkCells = 2;
static int ____must_manage_getBoxFromTuple = 2;
static int ____must_manage_moveAtom = 2;

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
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h"
typedef long int ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h"
typedef long unsigned int size_t;
# 5 "/home/mg1/chimes/src/libchimes/libchimes.h" 2


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
# 69 "/home/mg1/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 62 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 25 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

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




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
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
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


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
    __extension__ unsigned long long int __a;

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
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
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
# 606 "/usr/include/stdlib.h" 3 4
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


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 760 "/usr/include/stdlib.h" 2 3 4




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
# 811 "/usr/include/stdlib.h" 3 4
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






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 887 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
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


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
}
# 63 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.h" 1






# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 8 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.h" 2




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
   int** nbrBoxes;
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
# 64 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 64 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"

# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
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
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
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
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
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
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
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
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 526 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 933 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
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
__attribute__ ((__leaf__)) feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 934 "/usr/include/stdio.h" 2 3 4
# 942 "/usr/include/stdio.h" 3 4
}
# 66 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const void *
memchr (const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 105 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 129 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strchr (const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strrchr (const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strpbrk (char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strpbrk (const char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strstr (char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strstr (const char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 381 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 437 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
index (const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
rindex (const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 643 "/usr/include/string.h" 3 4
}
# 67 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4
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
# 68 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


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


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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






extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));





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
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));




extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


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


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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






extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));





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
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));




extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 89 "/usr/include/math.h" 2 3 4
# 133 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


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


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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






extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));





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
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));




extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 134 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
extern int signgam;
# 190 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 302 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 325 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 427 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 1 3 4
# 123 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbitf (float __x) throw ()
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x8) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbit (double __x) throw ()
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x80) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 428 "/usr/include/math.h" 2 3 4
# 489 "/usr/include/math.h" 3 4
}
# 69 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 69 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"

# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h"
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
# 71 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.h" 1
# 10 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.h"
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
# 72 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1
# 9 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
enum TimerHandle{
   totalTimer,
   loopTimer,
   timestepTimer,
   positionTimer,
   velocityTimer,
   redistributeTimer,
   atomHaloTimer,
   computeForceTimer,
   eamHaloTimer,
   commHaloTimer,
   commReduceTimer,
   numberOfTimers};
# 57 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 73 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 1
# 9 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   int (*loadBuffer)(void* parms, void* data, int face, char* buf) __attribute__((nocheckpoint));
# 61 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
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
# 10 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2


# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 1
# 9 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/initAtoms.h"
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
# 13 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
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
# 74 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 74 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 75 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 76 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 77 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 78 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
# 79 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static int getBoxFromCoord(LinkCell* boxes, real_t rr[3]);
# 80 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static void emptyHaloCells(LinkCell* boxes);
# 81 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
# 82 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 83 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
LinkCell* initLinkCells_npm(const Domain* domain, real_t cutoff);int getNeighborBoxes_npm(LinkCell* boxes, int iBox, int* nbrBoxes);
LinkCell* initLinkCells_quick(const Domain* domain, real_t cutoff); LinkCell* initLinkCells(const Domain* domain, real_t cutoff);int getNeighborBoxes_quick(LinkCell* boxes, int iBox, int* nbrBoxes); int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes);
LinkCell* initLinkCells_resumable(const Domain* domain, real_t cutoff)
# 84 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initLinkCells), "initLinkCells", &____must_manage_initLinkCells, 2, 0, (size_t)(3003916670316397367UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 85 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((domain) ? static_cast<void> (0) : __assert_fail ("domain", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 85, __PRETTY_FUNCTION__));
# 86 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell *ll; ll = ((LinkCell*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LinkCell)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LinkCell), 3003916670316397107UL, 0, 1, (int)sizeof(struct LinkCellSt), 2, (int)__builtin_offsetof(struct LinkCellSt, nAtoms), (int)__builtin_offsetof(struct LinkCellSt, nbrBoxes)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 87 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 88 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 89 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 90 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 96 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 97 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 99 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 103 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 105 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nAtoms = (int*) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int), 3003916670316397308UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 106 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; } };
# 108 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 109 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)) ? static_cast<void> (0) : __assert_fail ("(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 109, __PRETTY_FUNCTION__));
# 110 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 111 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 112 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nbrBoxes = (int**) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int*), 3003916670316397308UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 113 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nTotalBoxes; ++iBox)
# 114 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 115 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->nbrBoxes[iBox] = (int*) ({ void *____chimes_tmp_ptr = malloc((27 * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, 27*sizeof(int), 3003916670316397354UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 116 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 117 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 118 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nLocalBoxes; ++iBox)
# 119 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 120 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int nNbrBoxes; call_lbl_0: nNbrBoxes = (({ calling_npm("getNeighborBoxes", 0); getNeighborBoxes_npm(ll, iBox, ll->nbrBoxes[iBox]); })) ;
# 121 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 122 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 123 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (ll); rm_stack(true, 3003916670316397107UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 124 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(true, 3003916670316397107UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 125 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 126 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void destroyLinkCells_npm(LinkCell** boxes);
void destroyLinkCells_quick(LinkCell** boxes); void destroyLinkCells(LinkCell** boxes);
void destroyLinkCells_resumable(LinkCell** boxes)
# 127 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&destroyLinkCells), "destroyLinkCells", &____must_manage_destroyLinkCells, 1, 0, (size_t)(3003916670316397492UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 128 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_4, ____chimes_did_disable1, false); return; };
# 129 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! *boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_4, ____chimes_did_disable1, false); return; };
# 130 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 131 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ({ free_helper((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *)), 3003916670316397481UL);free((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *))); }) ;
# 132 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ({ free_helper((((unsigned char *)*boxes) - sizeof(void *)), 3003916670316397474UL);free((((unsigned char *)*boxes) - sizeof(void *))); }) ;
# 133 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *boxes = __null;
# 134 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 135 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_4, ____chimes_did_disable1, false); return;
# 136 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 137 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 138 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 139 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 140 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 141 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 142 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 143 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 144 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromTuple_npm(LinkCell* boxes, int ix, int iy, int iz);void getTuple_npm(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
int getBoxFromTuple_quick(LinkCell* boxes, int ix, int iy, int iz); int getBoxFromTuple(LinkCell* boxes, int ix, int iy, int iz);void getTuple_quick(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp); void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
int getNeighborBoxes_resumable(LinkCell* boxes, int iBox, int* nbrBoxes)
# 145 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getNeighborBoxes), "getNeighborBoxes", &____must_manage_getNeighborBoxes, 3, 0, (size_t)(3003916670316397463UL), (size_t)(0UL), (size_t)(3003916670316397465UL)) ; int ix;
# 145 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
 if (____must_checkpoint_getNeighborBoxes_ix_0) { register_stack_vars(1, "getNeighborBoxes|ix|0", &____must_checkpoint_getNeighborBoxes_ix_0, "i32", (void *)(&ix), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 146 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; int iz; ;
# 147 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_0: ({ calling_npm("getTuple", 0); getTuple_npm(boxes, iBox, &ix, &iy, &iz); });
# 148 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 149 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int count; count = (0) ;
# 150 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (ix-1) ; i<=ix+1; i++) {
# 151 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      { int j; for ( j = (iy-1) ; j<=iy+1; j++) {
# 152 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         { int k; for ( k = (iz-1) ; k<=iz+1; k++) {
# 153 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
             call_lbl_1: nbrBoxes[count++] = ({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, i, j, k); });
# 154 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         } }
# 155 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      } }
# 156 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 157 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 158 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (count); rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 159 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_3, ____chimes_did_disable2, false); }
# 172 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 172 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void putAtomInBox_npm(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz);int getBoxFromCoord_npm(LinkCell* boxes, real_t rr[3]);
void putAtomInBox_quick(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz); void putAtomInBox(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz);int getBoxFromCoord_quick(LinkCell* boxes, real_t rr[3]); int getBoxFromCoord(LinkCell* boxes, real_t rr[3]);
void putAtomInBox_resumable(LinkCell* boxes, Atoms* atoms,
# 173 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 176 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&putAtomInBox), "putAtomInBox", &____must_manage_putAtomInBox, 10, 0, (size_t)(3003916670316398200UL), (size_t)(3003916670316398201UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; real_t xyz[3];
# 176 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
 if (____must_checkpoint_putAtomInBox_xyz_0) { register_stack_vars(1, "putAtomInBox|xyz|0", &____must_checkpoint_putAtomInBox_xyz_0, "[3 x double]", (void *)(xyz), (size_t)24, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 177 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 178 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 179 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 180 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; call_lbl_0: iBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, xyz); })) ;
# 181 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (iBox*64) ;
# 182 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 183 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 184 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 185 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 187 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]++;
# 188 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[iOff] = gid;
# 189 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 190 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 191 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][0] = x;
# 192 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][1] = y;
# 193 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][2] = z;
# 194 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 195 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][0] = px;
# 196 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][1] = py;
# 197 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][2] = pz;
# 198 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "putAtomInBox", &____must_manage_putAtomInBox, ____alias_loc_id_7, ____chimes_did_disable3, false); }
# 199 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 200 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 201 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 202 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 203 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 204 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 205 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 206 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromTuple_resumable(LinkCell* boxes, int ix, int iy, int iz)
# 207 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&getBoxFromTuple), "getBoxFromTuple", &____must_manage_getBoxFromTuple, 4, 0, (size_t)(3003916670316398028UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 208 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; iBox = (0) ;
# 209 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 210 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 211 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 212 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iz == gridSize[2]) {{
# 214 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 215 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 216 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iz == -1) {{
# 220 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 221 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 222 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 226 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 227 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 228 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == -1) {{
# 232 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 233 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 237 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 238 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == -1)
# 241 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 242 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 243 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 244 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 245 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 246 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 247 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 248 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 249 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((iBox >= 0) ? static_cast<void> (0) : __assert_fail ("iBox >= 0", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 249, __PRETTY_FUNCTION__));
# 250 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((iBox < boxes->nTotalBoxes) ? static_cast<void> (0) : __assert_fail ("iBox < boxes->nTotalBoxes", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 250, __PRETTY_FUNCTION__));
# 251 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 252 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (iBox); rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); return ____chimes_ret_var_2; ;
# 253 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); }
# 254 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 255 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 256 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 257 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 258 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 259 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void moveAtom_npm(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox);void copyAtom_npm(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
void moveAtom_quick(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox); void moveAtom(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox);void copyAtom_quick(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox); void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
void moveAtom_resumable(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 260 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&moveAtom), "moveAtom", &____must_manage_moveAtom, 5, 0, (size_t)(3003916670316398436UL), (size_t)(3003916670316398477UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 261 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int nj; nj = (boxes->nAtoms[jBox]) ;
# 262 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_0: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox); });
# 263 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[jBox]++;
# 264 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 265 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((boxes->nAtoms[jBox] < 64) ? static_cast<void> (0) : __assert_fail ("boxes->nAtoms[jBox] < 64", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 265, __PRETTY_FUNCTION__));
# 266 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 267 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]--;
# 268 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ni; ni = (boxes->nAtoms[iBox]) ;
# 269 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (ni) { call_lbl_1: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); }); };
# 270 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 271 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 273 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 274 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "moveAtom", &____must_manage_moveAtom, ____alias_loc_id_9, ____chimes_did_disable5, false); return;
# 275 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 290 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 290 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void updateLinkCells_npm(LinkCell* boxes, Atoms* atoms);void emptyHaloCells_npm(LinkCell* boxes);
void updateLinkCells_quick(LinkCell* boxes, Atoms* atoms); void updateLinkCells(LinkCell* boxes, Atoms* atoms);void emptyHaloCells_quick(LinkCell* boxes); void emptyHaloCells(LinkCell* boxes);
void updateLinkCells_resumable(LinkCell* boxes, Atoms* atoms)
# 291 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&updateLinkCells), "updateLinkCells", &____must_manage_updateLinkCells, 2, 0, (size_t)(3003916670316398681UL), (size_t)(3003916670316398682UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 292 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_0: ({ calling_npm("emptyHaloCells", 0); emptyHaloCells_npm(boxes); });
# 293 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 294 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<boxes->nLocalBoxes; ++iBox)
# 295 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 296 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int iOff; iOff = (iBox*64) ;
# 297 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int ii; ii = (0) ;
# 298 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 299 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 300 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
          int jBox; call_lbl_1: jBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]); })) ;
# 301 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (jBox != iBox) { call_lbl_2: ({ calling_npm("moveAtom", 0); moveAtom_npm(boxes, atoms, ii, iBox, jBox); }); } else {++ii; } ;
# 305 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 306 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 307 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "updateLinkCells", &____must_manage_updateLinkCells, ____alias_loc_id_11, ____chimes_did_disable6, false); }
# 308 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 309 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 310 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int maxOccupancy_npm(LinkCell* boxes);static void (*____chimes_extern_func_maxIntParallel)(int *, int *, int) = maxIntParallel;static void (*____chimes_extern_func_profileStart)(enum TimerHandle) = profileStart;static void (*____chimes_extern_func_profileStop)(enum TimerHandle) = profileStop;
int maxOccupancy_quick(LinkCell* boxes); int maxOccupancy(LinkCell* boxes);
int maxOccupancy_resumable(LinkCell* boxes)
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&maxOccupancy), "maxOccupancy", &____must_manage_maxOccupancy, 1, 0, (size_t)(3003916670316398745UL)) ; int globalMax;
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int localMax;
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
 if (____must_checkpoint_maxOccupancy_globalMax_0 || ____must_checkpoint_maxOccupancy_localMax_0) { register_stack_vars(2, "maxOccupancy|globalMax|0", &____must_checkpoint_maxOccupancy_globalMax_0, "i32", (void *)(&globalMax), (size_t)4, 0, 0, 0, "maxOccupancy|localMax|0", &____must_checkpoint_maxOccupancy_localMax_0, "i32", (void *)(&localMax), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 312 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      localMax = (0) ;
# 313 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (0) ;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); } };
# 315 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 316 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ;
# 317 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 318 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_0: ({ calling((void*)profileStart, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 319 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_1: ({ calling((void*)maxIntParallel, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(3003916670316398714UL), (size_t)(3003916670316398716UL), (size_t)(0UL)); (maxIntParallel)(&localMax, &globalMax, 1); }) ;
# 320 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_2: ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 321 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 322 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (globalMax); rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); return ____chimes_ret_var_3; ;
# 323 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); }
# 324 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 325 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 326 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 327 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 328 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void copyAtom_resumable(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 329 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&copyAtom), "copyAtom", &____must_manage_copyAtom, 6, 0, (size_t)(3003916670316398602UL), (size_t)(3003916670316398603UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 330 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (64*iBox+iAtom) ;
# 331 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int jOff; jOff = (64*jBox+jAtom) ;
# 332 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 333 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 334 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 335 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 336 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 337 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 338 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "copyAtom", &____must_manage_copyAtom, ____alias_loc_id_10, ____chimes_did_disable8, false); }
# 350 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 350 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromCoord_resumable(LinkCell* boxes, real_t rr[3])
# 351 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&getBoxFromCoord), "getBoxFromCoord", &____must_manage_getBoxFromCoord, 2, 0, (size_t)(3003916670316398377UL), (size_t)(3003916670316398378UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 352 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMin; localMin = (boxes->localMin) ;
# 353 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMax; localMax = (boxes->localMax) ;
# 354 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 355 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ix; ix = ((int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]))) ;
# 356 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; iy = ((int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]))) ;
# 357 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iz; iz = ((int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]))) ;
# 358 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 359 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 360 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 361 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 362 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 364 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 365 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 368 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 370 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 371 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 374 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 376 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 377 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 380 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 381 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int result; call_lbl_0: result = (({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, ix, iy, iz); })) ;
# 382 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (result); rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); return ____chimes_ret_var_4; ;
# 383 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); }
# 384 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 385 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 386 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void emptyHaloCells_resumable(LinkCell* boxes)
# 387 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&emptyHaloCells), "emptyHaloCells", &____must_manage_emptyHaloCells, 1, 0, (size_t)(3003916670316398712UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 388 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (boxes->nLocalBoxes) ;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; } };
# 390 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "emptyHaloCells", &____must_manage_emptyHaloCells, ____alias_loc_id_12, ____chimes_did_disable10, false); }
# 400 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 400 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void getTuple_resumable(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 401 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&getTuple), "getTuple", &____must_manage_getTuple, 5, 0, (size_t)(3003916670316397771UL), (size_t)(0UL), (size_t)(3003916670316397773UL), (size_t)(3003916670316397774UL), (size_t)(3003916670316397775UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 402 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix; int iy; int iz; ;
# 403 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 404 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 405 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 406 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 407 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 408 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix = iBox % gridSize[0];
# 409 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox /= gridSize[0];
# 410 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy = iBox % gridSize[1];
# 411 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz = iBox / gridSize[1];
# 412 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 413 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 414 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 415 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 416 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ink; ;
# 417 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 418 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 420 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 421 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 422 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = 0;
# 423 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 424 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 425 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 426 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 427 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = gridSize[0] + 1;
# 428 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 429 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 430 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 431 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 433 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 434 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 435 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 436 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 437 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = 0;
# 438 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 439 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 440 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 441 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 442 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = gridSize[1] + 1;
# 443 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 444 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 445 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 446 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 447 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      else
# 448 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 449 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 450 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 451 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 452 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = 0;
# 453 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 454 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 455 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 456 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 457 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = gridSize[2] + 1;
# 458 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 459 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 460 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 461 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 462 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 463 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 464 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix--;
# 465 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy--;
# 466 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz--;
# 467 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 468 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 469 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *ixp = ix;
# 470 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *iyp = iy;
# 471 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *izp = iz;
# 472 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getTuple", &____must_manage_getTuple, ____alias_loc_id_5, ____chimes_did_disable11, false); }
# 83 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
LinkCell* initLinkCells_quick(const Domain* domain, real_t cutoff)
# 84 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initLinkCells), "initLinkCells", &____must_manage_initLinkCells, 2, 0, (size_t)(3003916670316397367UL), (size_t)(0UL)) ; ; ;
# 85 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((domain) ? static_cast<void> (0) : __assert_fail ("domain", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 85, __PRETTY_FUNCTION__));
# 86 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell *ll; ll = ((LinkCell*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LinkCell)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LinkCell), 3003916670316397107UL, 0, 1, (int)sizeof(struct LinkCellSt), 2, (int)__builtin_offsetof(struct LinkCellSt, nAtoms), (int)__builtin_offsetof(struct LinkCellSt, nbrBoxes)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 87 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 88 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 89 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 90 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 96 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 97 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 99 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 103 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 105 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nAtoms = (int*) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int), 3003916670316397308UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 106 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; } };
# 108 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 109 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)) ? static_cast<void> (0) : __assert_fail ("(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 109, __PRETTY_FUNCTION__));
# 110 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 111 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 112 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nbrBoxes = (int**) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int*), 3003916670316397308UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 113 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nTotalBoxes; ++iBox)
# 114 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 115 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->nbrBoxes[iBox] = (int*) ({ void *____chimes_tmp_ptr = malloc((27 * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, 27*sizeof(int), 3003916670316397354UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 116 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 117 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 118 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nLocalBoxes; ++iBox)
# 119 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 120 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int nNbrBoxes; call_lbl_0: nNbrBoxes = (({ calling_npm("getNeighborBoxes", 0); getNeighborBoxes_npm(ll, iBox, ll->nbrBoxes[iBox]); })) ;
# 121 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 122 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 123 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (ll); rm_stack(true, 3003916670316397107UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 124 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(true, 3003916670316397107UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); }

LinkCell* initLinkCells(const Domain* domain, real_t cutoff) { return (____chimes_replaying ? initLinkCells_resumable(domain, cutoff) : initLinkCells_quick(domain, cutoff)); }
# 126 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void destroyLinkCells_quick(LinkCell** boxes)
# 127 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&destroyLinkCells), "destroyLinkCells", &____must_manage_destroyLinkCells, 1, 0, (size_t)(3003916670316397492UL)) ; ; ;
# 128 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_4, ____chimes_did_disable1, false); return; };
# 129 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! *boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_4, ____chimes_did_disable1, false); return; };
# 130 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 131 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ({ free_helper((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *)), 3003916670316397481UL);free((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *))); }) ;
# 132 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ({ free_helper((((unsigned char *)*boxes) - sizeof(void *)), 3003916670316397474UL);free((((unsigned char *)*boxes) - sizeof(void *))); }) ;
# 133 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *boxes = __null;
# 134 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 135 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_4, ____chimes_did_disable1, false); return;
# 136 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void destroyLinkCells(LinkCell** boxes) { (____chimes_replaying ? destroyLinkCells_resumable(boxes) : destroyLinkCells_quick(boxes)); }
# 144 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getNeighborBoxes_quick(LinkCell* boxes, int iBox, int* nbrBoxes)
# 145 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getNeighborBoxes), "getNeighborBoxes", &____must_manage_getNeighborBoxes, 3, 0, (size_t)(3003916670316397463UL), (size_t)(0UL), (size_t)(3003916670316397465UL)) ; int ix;
# 145 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
 if (____must_checkpoint_getNeighborBoxes_ix_0) { register_stack_vars(1, "getNeighborBoxes|ix|0", &____must_checkpoint_getNeighborBoxes_ix_0, "i32", (void *)(&ix), (size_t)4, 0, 0, 0); } ; ;
# 146 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; int iz; ;
# 147 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_0: ({ calling_npm("getTuple", 0); getTuple_npm(boxes, iBox, &ix, &iy, &iz); });
# 148 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 149 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int count; count = (0) ;
# 150 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (ix-1) ; i<=ix+1; i++) {
# 151 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      { int j; for ( j = (iy-1) ; j<=iy+1; j++) {
# 152 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         { int k; for ( k = (iz-1) ; k<=iz+1; k++) {
# 153 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
             call_lbl_1: nbrBoxes[count++] = ({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, i, j, k); });
# 154 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         } }
# 155 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      } }
# 156 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 157 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 158 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (count); rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 159 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_3, ____chimes_did_disable2, false); }

int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes) { return (____chimes_replaying ? getNeighborBoxes_resumable(boxes, iBox, nbrBoxes) : getNeighborBoxes_quick(boxes, iBox, nbrBoxes)); }
# 172 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void putAtomInBox_quick(LinkCell* boxes, Atoms* atoms,
# 173 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 176 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&putAtomInBox), "putAtomInBox", &____must_manage_putAtomInBox, 10, 0, (size_t)(3003916670316398200UL), (size_t)(3003916670316398201UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; real_t xyz[3];
# 176 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
 if (____must_checkpoint_putAtomInBox_xyz_0) { register_stack_vars(1, "putAtomInBox|xyz|0", &____must_checkpoint_putAtomInBox_xyz_0, "[3 x double]", (void *)(xyz), (size_t)24, 0, 0, 0); } ; ;
# 177 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 178 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 179 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 180 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; call_lbl_0: iBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, xyz); })) ;
# 181 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (iBox*64) ;
# 182 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 183 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 184 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 185 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 187 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]++;
# 188 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[iOff] = gid;
# 189 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 190 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 191 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][0] = x;
# 192 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][1] = y;
# 193 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][2] = z;
# 194 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 195 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][0] = px;
# 196 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][1] = py;
# 197 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][2] = pz;
# 198 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "putAtomInBox", &____must_manage_putAtomInBox, ____alias_loc_id_7, ____chimes_did_disable3, false); }

void putAtomInBox(LinkCell* boxes, Atoms* atoms,
# 173 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz) { (____chimes_replaying ? putAtomInBox_resumable(boxes, atoms, gid, iType, x, y, z, px, py, pz) : putAtomInBox_quick(boxes, atoms, gid, iType, x, y, z, px, py, pz)); }
# 206 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromTuple_quick(LinkCell* boxes, int ix, int iy, int iz)
# 207 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&getBoxFromTuple), "getBoxFromTuple", &____must_manage_getBoxFromTuple, 4, 0, (size_t)(3003916670316398028UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 208 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; iBox = (0) ;
# 209 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 210 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 211 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 212 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iz == gridSize[2]) {{
# 214 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 215 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 216 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iz == -1) {{
# 220 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 221 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 222 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 226 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 227 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 228 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == -1) {{
# 232 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 233 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 237 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 238 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == -1)
# 241 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 242 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 243 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 244 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 245 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 246 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 247 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 248 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 249 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((iBox >= 0) ? static_cast<void> (0) : __assert_fail ("iBox >= 0", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 249, __PRETTY_FUNCTION__));
# 250 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((iBox < boxes->nTotalBoxes) ? static_cast<void> (0) : __assert_fail ("iBox < boxes->nTotalBoxes", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 250, __PRETTY_FUNCTION__));
# 251 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 252 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (iBox); rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); return ____chimes_ret_var_2; ;
# 253 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); }

int getBoxFromTuple(LinkCell* boxes, int ix, int iy, int iz) { return (____chimes_replaying ? getBoxFromTuple_resumable(boxes, ix, iy, iz) : getBoxFromTuple_quick(boxes, ix, iy, iz)); }
# 259 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void moveAtom_quick(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 260 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&moveAtom), "moveAtom", &____must_manage_moveAtom, 5, 0, (size_t)(3003916670316398436UL), (size_t)(3003916670316398477UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 261 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int nj; nj = (boxes->nAtoms[jBox]) ;
# 262 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_0: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox); });
# 263 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[jBox]++;
# 264 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 265 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((boxes->nAtoms[jBox] < 64) ? static_cast<void> (0) : __assert_fail ("boxes->nAtoms[jBox] < 64", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 265, __PRETTY_FUNCTION__));
# 266 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 267 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]--;
# 268 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ni; ni = (boxes->nAtoms[iBox]) ;
# 269 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (ni) { call_lbl_1: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); }); };
# 270 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 271 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 273 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 274 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "moveAtom", &____must_manage_moveAtom, ____alias_loc_id_9, ____chimes_did_disable5, false); return;
# 275 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void moveAtom(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox) { (____chimes_replaying ? moveAtom_resumable(boxes, atoms, iId, iBox, jBox) : moveAtom_quick(boxes, atoms, iId, iBox, jBox)); }
# 290 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void updateLinkCells_quick(LinkCell* boxes, Atoms* atoms)
# 291 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&updateLinkCells), "updateLinkCells", &____must_manage_updateLinkCells, 2, 0, (size_t)(3003916670316398681UL), (size_t)(3003916670316398682UL)) ; ; ;
# 292 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_0: ({ calling_npm("emptyHaloCells", 0); emptyHaloCells_npm(boxes); });
# 293 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 294 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<boxes->nLocalBoxes; ++iBox)
# 295 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 296 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int iOff; iOff = (iBox*64) ;
# 297 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int ii; ii = (0) ;
# 298 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 299 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 300 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
          int jBox; call_lbl_1: jBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]); })) ;
# 301 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (jBox != iBox) { call_lbl_2: ({ calling_npm("moveAtom", 0); moveAtom_npm(boxes, atoms, ii, iBox, jBox); }); } else {++ii; } ;
# 305 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 306 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 307 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "updateLinkCells", &____must_manage_updateLinkCells, ____alias_loc_id_11, ____chimes_did_disable6, false); }

void updateLinkCells(LinkCell* boxes, Atoms* atoms) { (____chimes_replaying ? updateLinkCells_resumable(boxes, atoms) : updateLinkCells_quick(boxes, atoms)); }
# 310 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int maxOccupancy_quick(LinkCell* boxes)
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&maxOccupancy), "maxOccupancy", &____must_manage_maxOccupancy, 1, 0, (size_t)(3003916670316398745UL)) ; int globalMax;
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int localMax;
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
 if (____must_checkpoint_maxOccupancy_globalMax_0 || ____must_checkpoint_maxOccupancy_localMax_0) { register_stack_vars(2, "maxOccupancy|globalMax|0", &____must_checkpoint_maxOccupancy_globalMax_0, "i32", (void *)(&globalMax), (size_t)4, 0, 0, 0, "maxOccupancy|localMax|0", &____must_checkpoint_maxOccupancy_localMax_0, "i32", (void *)(&localMax), (size_t)4, 0, 0, 0); } ; ;
# 312 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      localMax = (0) ;
# 313 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (0) ;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); } };
# 315 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 316 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ;
# 317 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 318 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_0: ({ calling((void*)profileStart, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 319 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_1: ({ calling((void*)maxIntParallel, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(3003916670316398714UL), (size_t)(3003916670316398716UL), (size_t)(0UL)); (maxIntParallel)(&localMax, &globalMax, 1); }) ;
# 320 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_2: ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 321 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 322 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (globalMax); rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); return ____chimes_ret_var_3; ;
# 323 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); }

int maxOccupancy(LinkCell* boxes) { return (____chimes_replaying ? maxOccupancy_resumable(boxes) : maxOccupancy_quick(boxes)); }
# 328 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void copyAtom_quick(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 329 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&copyAtom), "copyAtom", &____must_manage_copyAtom, 6, 0, (size_t)(3003916670316398602UL), (size_t)(3003916670316398603UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 330 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (64*iBox+iAtom) ;
# 331 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int jOff; jOff = (64*jBox+jAtom) ;
# 332 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 333 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 334 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 335 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 336 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 337 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 338 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "copyAtom", &____must_manage_copyAtom, ____alias_loc_id_10, ____chimes_did_disable8, false); }

void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox) { (____chimes_replaying ? copyAtom_resumable(boxes, atoms, iAtom, iBox, jAtom, jBox) : copyAtom_quick(boxes, atoms, iAtom, iBox, jAtom, jBox)); }
# 350 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromCoord_quick(LinkCell* boxes, real_t rr[3])
# 351 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&getBoxFromCoord), "getBoxFromCoord", &____must_manage_getBoxFromCoord, 2, 0, (size_t)(3003916670316398377UL), (size_t)(3003916670316398378UL)) ; ; ;
# 352 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMin; localMin = (boxes->localMin) ;
# 353 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMax; localMax = (boxes->localMax) ;
# 354 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 355 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ix; ix = ((int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]))) ;
# 356 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; iy = ((int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]))) ;
# 357 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iz; iz = ((int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]))) ;
# 358 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 359 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 360 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 361 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 362 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 364 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 365 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 368 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 370 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 371 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 374 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 376 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 377 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 380 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 381 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int result; call_lbl_0: result = (({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, ix, iy, iz); })) ;
# 382 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (result); rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); return ____chimes_ret_var_4; ;
# 383 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); }

int getBoxFromCoord(LinkCell* boxes, real_t rr[3]) { return (____chimes_replaying ? getBoxFromCoord_resumable(boxes, rr) : getBoxFromCoord_quick(boxes, rr)); }
# 386 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void emptyHaloCells_quick(LinkCell* boxes)
# 387 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&emptyHaloCells), "emptyHaloCells", &____must_manage_emptyHaloCells, 1, 0, (size_t)(3003916670316398712UL)) ; ; ;
# 388 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (boxes->nLocalBoxes) ;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; } };
# 390 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "emptyHaloCells", &____must_manage_emptyHaloCells, ____alias_loc_id_12, ____chimes_did_disable10, false); }

void emptyHaloCells(LinkCell* boxes) { (____chimes_replaying ? emptyHaloCells_resumable(boxes) : emptyHaloCells_quick(boxes)); }
# 400 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void getTuple_quick(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 401 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&getTuple), "getTuple", &____must_manage_getTuple, 5, 0, (size_t)(3003916670316397771UL), (size_t)(0UL), (size_t)(3003916670316397773UL), (size_t)(3003916670316397774UL), (size_t)(3003916670316397775UL)) ; ; ;
# 402 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix; int iy; int iz; ;
# 403 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 404 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 405 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 406 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 407 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 408 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix = iBox % gridSize[0];
# 409 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox /= gridSize[0];
# 410 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy = iBox % gridSize[1];
# 411 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz = iBox / gridSize[1];
# 412 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 413 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 414 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 415 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 416 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ink; ;
# 417 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 418 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 420 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 421 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 422 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = 0;
# 423 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 424 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 425 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 426 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 427 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = gridSize[0] + 1;
# 428 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 429 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 430 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 431 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 433 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 434 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 435 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 436 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 437 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = 0;
# 438 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 439 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 440 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 441 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 442 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = gridSize[1] + 1;
# 443 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 444 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 445 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 446 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 447 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      else
# 448 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 449 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 450 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 451 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 452 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = 0;
# 453 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 454 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 455 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 456 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 457 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = gridSize[2] + 1;
# 458 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 459 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 460 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 461 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 462 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 463 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 464 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix--;
# 465 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy--;
# 466 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz--;
# 467 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 468 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 469 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *ixp = ix;
# 470 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *iyp = iy;
# 471 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *izp = iz;
# 472 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getTuple", &____must_manage_getTuple, ____alias_loc_id_5, ____chimes_did_disable11, false); }

void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp) { (____chimes_replaying ? getTuple_resumable(boxes, iBox, ixp, iyp, izp) : getTuple_quick(boxes, iBox, ixp, iyp, izp)); }
# 83 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
LinkCell* initLinkCells_npm(const Domain* domain, real_t cutoff)
# 84 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 85 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((domain) ? static_cast<void> (0) : __assert_fail ("domain", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 85, __PRETTY_FUNCTION__));
# 86 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   LinkCell* ll = (LinkCell*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LinkCell)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LinkCell), 3003916670316397107UL, 0, 1, (int)sizeof(struct LinkCellSt), 2, (int)__builtin_offsetof(struct LinkCellSt, nAtoms), (int)__builtin_offsetof(struct LinkCellSt, nbrBoxes)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 87 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 88 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int i = 0; i < 3; i++)
# 89 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 90 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 96 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 97 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 99 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 103 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 105 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nAtoms = (int*) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int), 3003916670316397308UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 106 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; };
# 108 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 109 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)) ? static_cast<void> (0) : __assert_fail ("(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 109, __PRETTY_FUNCTION__));
# 110 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 111 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 112 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nbrBoxes = (int**) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int*), 3003916670316397308UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 113 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0; iBox<ll->nTotalBoxes; ++iBox)
# 114 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 115 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->nbrBoxes[iBox] = (int*) ({ void *____chimes_tmp_ptr = malloc((27 * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, 27*sizeof(int), 3003916670316397354UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 116 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 117 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 118 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0; iBox<ll->nLocalBoxes; ++iBox)
# 119 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 120 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int nNbrBoxes = getNeighborBoxes_npm(ll, iBox, ll->nbrBoxes[iBox]);
# 121 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 122 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 123 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell * ____chimes_ret_var_0; ____chimes_ret_var_0 = (ll); return ____chimes_ret_var_0; ;
# 124 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 126 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void destroyLinkCells_npm(LinkCell** boxes)
# 127 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 128 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! boxes) {return; };
# 129 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! *boxes) {return; };
# 130 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 131 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ({ free_helper((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *)), 3003916670316397481UL);free((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *))); }) ;
# 132 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ({ free_helper((((unsigned char *)*boxes) - sizeof(void *)), 3003916670316397474UL);free((((unsigned char *)*boxes) - sizeof(void *))); }) ;
# 133 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *boxes = __null;
# 134 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 135 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return;
# 136 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 144 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getNeighborBoxes_npm(LinkCell* boxes, int iBox, int* nbrBoxes)
# 145 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 146 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix, iy, iz;
# 147 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   getTuple_npm(boxes, iBox, &ix, &iy, &iz);
# 148 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 149 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int count = 0;
# 150 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int i=ix-1; i<=ix+1; i++) {
# 151 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      for (int j=iy-1; j<=iy+1; j++) {
# 152 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         for (int k=iz-1; k<=iz+1; k++) {
# 153 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            nbrBoxes[count++] = getBoxFromTuple_npm(boxes, i, j, k);
# 154 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 155 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 156 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 157 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 158 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_1; ____chimes_ret_var_1 = (count); return ____chimes_ret_var_1; ;
# 159 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 172 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void putAtomInBox_npm(LinkCell* boxes, Atoms* atoms,
# 173 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 176 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 177 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   real_t xyz[3]; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 178 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 179 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 180 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iBox = getBoxFromCoord_npm(boxes, xyz);
# 181 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iOff = iBox*64;
# 182 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 183 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 184 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 185 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 187 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]++;
# 188 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[iOff] = gid;
# 189 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 190 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 191 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][0] = x;
# 192 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][1] = y;
# 193 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][2] = z;
# 194 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 195 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][0] = px;
# 196 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][1] = py;
# 197 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][2] = pz;
# 198 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 206 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromTuple_npm(LinkCell* boxes, int ix, int iy, int iz)
# 207 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 208 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iBox = 0;
# 209 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 210 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 211 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 212 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iz == gridSize[2]) {{
# 214 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 215 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 216 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iz == -1) {{
# 220 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 221 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 222 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 226 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 227 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 228 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == -1) {{
# 232 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 233 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 237 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 238 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == -1)
# 241 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 242 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 243 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 244 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 245 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 246 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 247 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 248 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 249 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((iBox >= 0) ? static_cast<void> (0) : __assert_fail ("iBox >= 0", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 249, __PRETTY_FUNCTION__));
# 250 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((iBox < boxes->nTotalBoxes) ? static_cast<void> (0) : __assert_fail ("iBox < boxes->nTotalBoxes", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 250, __PRETTY_FUNCTION__));
# 251 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 252 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_2; ____chimes_ret_var_2 = (iBox); return ____chimes_ret_var_2; ;
# 253 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 259 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void moveAtom_npm(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 260 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 261 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int nj = boxes->nAtoms[jBox];
# 262 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox);
# 263 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[jBox]++;
# 264 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 265 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ((boxes->nAtoms[jBox] < 64) ? static_cast<void> (0) : __assert_fail ("boxes->nAtoms[jBox] < 64", "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 265, __PRETTY_FUNCTION__));
# 266 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 267 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]--;
# 268 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ni = boxes->nAtoms[iBox];
# 269 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (ni) {copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); };
# 270 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 271 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 273 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 274 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return;
# 275 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 290 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void updateLinkCells_npm(LinkCell* boxes, Atoms* atoms)
# 291 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 292 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   emptyHaloCells_npm(boxes);
# 293 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 294 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0; iBox<boxes->nLocalBoxes; ++iBox)
# 295 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 296 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int iOff = iBox*64;
# 297 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ii=0;
# 298 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 299 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 300 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         int jBox = getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]);
# 301 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (jBox != iBox) {moveAtom_npm(boxes, atoms, ii, iBox, jBox); } else {++ii; } ;
# 305 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 306 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 307 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 310 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int maxOccupancy_npm(LinkCell* boxes)
# 311 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 312 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int localMax = 0;
# 313 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int ii=0;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); };
# 315 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 316 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int globalMax;
# 317 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 318 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { (*____chimes_extern_func_profileStart)(commReduceTimer); } while(0);
# 319 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (*____chimes_extern_func_maxIntParallel)(&localMax, &globalMax, 1);
# 320 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { (*____chimes_extern_func_profileStop)(commReduceTimer); } while(0);
# 321 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 322 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_3; ____chimes_ret_var_3 = (globalMax); return ____chimes_ret_var_3; ;
# 323 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 328 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void copyAtom_npm(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 329 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 330 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iOff = 64*iBox+iAtom;
# 331 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int jOff = 64*jBox+jAtom;
# 332 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 333 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 334 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 335 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 336 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 337 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 338 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 350 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromCoord_npm(LinkCell* boxes, real_t rr[3])
# 351 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 352 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const real_t* localMin = boxes->localMin;
# 353 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const real_t* localMax = boxes->localMax;
# 354 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 355 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix = (int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]));
# 356 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iy = (int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]));
# 357 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iz = (int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]));
# 358 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 359 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 360 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 361 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 362 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 364 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 365 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 368 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 370 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 371 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 374 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 376 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 377 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 380 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 381 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int result = getBoxFromTuple_npm(boxes, ix, iy, iz);
# 382 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ____chimes_ret_var_4; ____chimes_ret_var_4 = (result); return ____chimes_ret_var_4; ;
# 383 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 386 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void emptyHaloCells_npm(LinkCell* boxes)
# 387 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 388 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int ii=boxes->nLocalBoxes;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; };
# 390 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 400 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void getTuple_npm(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 401 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 402 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix, iy, iz;
# 403 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 404 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 405 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 406 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 407 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 408 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix = iBox % gridSize[0];
# 409 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox /= gridSize[0];
# 410 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy = iBox % gridSize[1];
# 411 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz = iBox / gridSize[1];
# 412 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 413 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 414 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 415 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 416 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ink;
# 417 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 418 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 420 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 421 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 422 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = 0;
# 423 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 424 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 425 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 426 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 427 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = gridSize[0] + 1;
# 428 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 429 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 430 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 431 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 433 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 434 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 435 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 436 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 437 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = 0;
# 438 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 439 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 440 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 441 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 442 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = gridSize[1] + 1;
# 443 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 444 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 445 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 446 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 447 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      else
# 448 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 449 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 450 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 451 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 452 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = 0;
# 453 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 454 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 455 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 456 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 457 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = gridSize[2] + 1;
# 458 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 459 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 460 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 461 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 462 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 463 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 464 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix--;
# 465 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy--;
# 466 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz--;
# 467 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 468 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 469 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *ixp = ix;
# 470 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *iyp = iy;
# 471 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *izp = iz;
# 472 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}





static int module_init() {
    init_module(3003916670316397085UL, 40, 12, 4, 14, 12, 3, 15, 10, 0, 4,
                           &____alias_loc_id_0, (unsigned)0, (unsigned)0, (unsigned)1, "maxIntParallel", (unsigned)2, (3003916670316397085UL + 1629UL), (3003916670316397085UL + 1631UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1628UL), (3003916670316397085UL + 1629UL), (3003916670316397085UL + 1630UL),
                           &____alias_loc_id_2, (unsigned)11, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1UL), (3003916670316397085UL + 2UL), (3003916670316397085UL + 3UL), (3003916670316397085UL + 4UL), (3003916670316397085UL + 5UL), (3003916670316397085UL + 6UL), (3003916670316397085UL + 7UL), (3003916670316397085UL + 8UL), (3003916670316397085UL + 9UL), (3003916670316397085UL + 22UL), (3003916670316397085UL + 223UL),
                           &____alias_loc_id_3, (unsigned)9, (unsigned)0, (unsigned)0, (3003916670316397085UL + 291UL), (3003916670316397085UL + 292UL), (3003916670316397085UL + 293UL), (3003916670316397085UL + 297UL), (3003916670316397085UL + 298UL), (3003916670316397085UL + 299UL), (3003916670316397085UL + 300UL), (3003916670316397085UL + 301UL), (3003916670316397085UL + 380UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)0, (unsigned)0, (3003916670316397085UL + 381UL), (3003916670316397085UL + 407UL),
                           &____alias_loc_id_5, (unsigned)13, (unsigned)0, (unsigned)0, (3003916670316397085UL + 409UL), (3003916670316397085UL + 410UL), (3003916670316397085UL + 411UL), (3003916670316397085UL + 412UL), (3003916670316397085UL + 413UL), (3003916670316397085UL + 414UL), (3003916670316397085UL + 415UL), (3003916670316397085UL + 416UL), (3003916670316397085UL + 417UL), (3003916670316397085UL + 418UL), (3003916670316397085UL + 688UL), (3003916670316397085UL + 689UL), (3003916670316397085UL + 690UL),
                           &____alias_loc_id_6, (unsigned)7, (unsigned)0, (unsigned)0, (3003916670316397085UL + 691UL), (3003916670316397085UL + 692UL), (3003916670316397085UL + 693UL), (3003916670316397085UL + 694UL), (3003916670316397085UL + 695UL), (3003916670316397085UL + 696UL), (3003916670316397085UL + 697UL),
                           &____alias_loc_id_7, (unsigned)16, (unsigned)0, (unsigned)0, (3003916670316397085UL + 961UL), (3003916670316397085UL + 962UL), (3003916670316397085UL + 963UL), (3003916670316397085UL + 964UL), (3003916670316397085UL + 965UL), (3003916670316397085UL + 966UL), (3003916670316397085UL + 967UL), (3003916670316397085UL + 968UL), (3003916670316397085UL + 969UL), (3003916670316397085UL + 970UL), (3003916670316397085UL + 971UL), (3003916670316397085UL + 972UL), (3003916670316397085UL + 973UL), (3003916670316397085UL + 1017UL), (3003916670316397085UL + 1049UL), (3003916670316397085UL + 1116UL),
                           &____alias_loc_id_8, (unsigned)10, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1125UL), (3003916670316397085UL + 1126UL), (3003916670316397085UL + 1127UL), (3003916670316397085UL + 1128UL), (3003916670316397085UL + 1129UL), (3003916670316397085UL + 1130UL), (3003916670316397085UL + 1131UL), (3003916670316397085UL + 1132UL), (3003916670316397085UL + 1133UL), (3003916670316397085UL + 1134UL),
                           &____alias_loc_id_9, (unsigned)9, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1294UL), (3003916670316397085UL + 1295UL), (3003916670316397085UL + 1296UL), (3003916670316397085UL + 1297UL), (3003916670316397085UL + 1298UL), (3003916670316397085UL + 1299UL), (3003916670316397085UL + 1300UL), (3003916670316397085UL + 1353UL), (3003916670316397085UL + 1392UL),
                            &____alias_loc_id_10, (unsigned)9, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1396UL), (3003916670316397085UL + 1397UL), (3003916670316397085UL + 1398UL), (3003916670316397085UL + 1399UL), (3003916670316397085UL + 1400UL), (3003916670316397085UL + 1401UL), (3003916670316397085UL + 1402UL), (3003916670316397085UL + 1403UL), (3003916670316397085UL + 1432UL),
                            &____alias_loc_id_11, (unsigned)6, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1523UL), (3003916670316397085UL + 1524UL), (3003916670316397085UL + 1525UL), (3003916670316397085UL + 1526UL), (3003916670316397085UL + 1527UL), (3003916670316397085UL + 1528UL),
                            &____alias_loc_id_12, (unsigned)3, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1598UL), (3003916670316397085UL + 1599UL), (3003916670316397085UL + 1618UL),
                            &____alias_loc_id_13, (unsigned)1, (unsigned)0, (unsigned)0, (3003916670316397085UL + 1632UL),
                            "getNeighborBoxes", 0, "_Z16getNeighborBoxesP10LinkCellStiPi", "_Z20getNeighborBoxes_npmP10LinkCellStiPi", 0, 3, (3003916670316397085UL + 378UL), 0UL, (3003916670316397085UL + 380UL), 0UL, 2, "getTuple", 5, (3003916670316397085UL + 378UL), 0UL, (3003916670316397085UL + 294UL), (3003916670316397085UL + 295UL), (3003916670316397085UL + 296UL), 0UL, "getBoxFromTuple", 4, (3003916670316397085UL + 378UL), 0UL, 0UL, 0UL, 0UL,
                            "initLinkCells", 0, "_Z13initLinkCellsPK8DomainStd", "_Z17initLinkCells_npmPK8DomainStd", 0, 2, (3003916670316397085UL + 282UL), 0UL, (3003916670316397085UL + 22UL), 7, "__assert_fail", 4, (3003916670316397085UL + 1698UL), (3003916670316397085UL + 1699UL), 0UL, (3003916670316397085UL + 1700UL), 0UL, "malloc", 1, 0UL, (3003916670316397085UL + 22UL), "malloc", 1, 0UL, (3003916670316397085UL + 223UL), "__assert_fail", 4, (3003916670316397085UL + 1701UL), (3003916670316397085UL + 1699UL), 0UL, (3003916670316397085UL + 1700UL), 0UL, "malloc", 1, 0UL, (3003916670316397085UL + 223UL), "malloc", 1, 0UL, (3003916670316397085UL + 269UL), "getNeighborBoxes", 3, (3003916670316397085UL + 22UL), 0UL, (3003916670316397085UL + 269UL), 0UL,
                            "getBoxFromCoord", 1, (void *)(&getBoxFromCoord_npm), (void *)__null, 0, 2, (3003916670316397085UL + 1292UL), (3003916670316397085UL + 1293UL), 0UL, 4, "floor", 1, 0UL, 0UL, "floor", 1, 0UL, 0UL, "floor", 1, 0UL, 0UL, "getBoxFromTuple", 4, (3003916670316397085UL + 1292UL), 0UL, 0UL, 0UL, 0UL,
                            "getTuple", 1, (void *)(&getTuple_npm), (void *)__null, 0, 5, (3003916670316397085UL + 686UL), 0UL, (3003916670316397085UL + 688UL), (3003916670316397085UL + 689UL), (3003916670316397085UL + 690UL), 0UL, 0,
                            "copyAtom", 1, (void *)(&copyAtom_npm), (void *)__null, 0, 6, (3003916670316397085UL + 1517UL), (3003916670316397085UL + 1518UL), 0UL, 0UL, 0UL, 0UL, 0UL, 4, "memcpy", 3, (3003916670316397085UL + 1432UL), (3003916670316397085UL + 1432UL), 0UL, 0UL, "memcpy", 3, (3003916670316397085UL + 1432UL), (3003916670316397085UL + 1432UL), 0UL, 0UL, "memcpy", 3, (3003916670316397085UL + 1432UL), (3003916670316397085UL + 1432UL), 0UL, 0UL, "memcpy", 3, (3003916670316397085UL + 1432UL), (3003916670316397085UL + 1432UL), 0UL, 0UL,
                            "updateLinkCells", 0, "_Z15updateLinkCellsP10LinkCellStP7AtomsSt", "_Z19updateLinkCells_npmP10LinkCellStP7AtomsSt", 0, 2, (3003916670316397085UL + 1596UL), (3003916670316397085UL + 1597UL), 0UL, 3, "emptyHaloCells", 1, (3003916670316397085UL + 1596UL), 0UL, "getBoxFromCoord", 2, (3003916670316397085UL + 1596UL), (3003916670316397085UL + 1569UL), 0UL, "moveAtom", 5, (3003916670316397085UL + 1596UL), (3003916670316397085UL + 1597UL), 0UL, 0UL, 0UL, 0UL,
                            "emptyHaloCells", 1, (void *)(&emptyHaloCells_npm), (void *)__null, 0, 1, (3003916670316397085UL + 1627UL), 0UL, 0,
                            "maxOccupancy", 0, "_Z12maxOccupancyP10LinkCellSt", "_Z16maxOccupancy_npmP10LinkCellSt", 2, &____alias_loc_id_0, &____alias_loc_id_1, 1, (3003916670316397085UL + 1660UL), 0UL, 3, "profileStart", 1, 0UL, 0UL, "maxIntParallel", 3, (3003916670316397085UL + 1629UL), (3003916670316397085UL + 1631UL), 0UL, 0UL, "profileStop", 1, 0UL, 0UL,
                            "putAtomInBox", 0, "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z16putAtomInBox_npmP10LinkCellStP7AtomsStiidddddd", 0, 10, (3003916670316397085UL + 1115UL), (3003916670316397085UL + 1116UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 1, "getBoxFromCoord", 2, (3003916670316397085UL + 1115UL), (3003916670316397085UL + 971UL), 0UL,
                            "destroyLinkCells", 0, "_Z16destroyLinkCellsPP10LinkCellSt", "_Z20destroyLinkCells_npmPP10LinkCellSt", 0, 1, (3003916670316397085UL + 407UL), 0UL, 2, "free", 1, (3003916670316397085UL + 396UL), 0UL, "free", 1, (3003916670316397085UL + 389UL), 0UL,
                            "getBoxFromTuple", 0, "_Z15getBoxFromTupleP10LinkCellStiii", "_Z19getBoxFromTuple_npmP10LinkCellStiii", 0, 4, (3003916670316397085UL + 943UL), 0UL, 0UL, 0UL, 0UL, 2, "__assert_fail", 4, (3003916670316397085UL + 1702UL), (3003916670316397085UL + 1699UL), 0UL, (3003916670316397085UL + 1703UL), 0UL, "__assert_fail", 4, (3003916670316397085UL + 1704UL), (3003916670316397085UL + 1699UL), 0UL, (3003916670316397085UL + 1703UL), 0UL,
                            "moveAtom", 0, "_Z8moveAtomP10LinkCellStP7AtomsStiii", "_Z12moveAtom_npmP10LinkCellStP7AtomsStiii", 0, 5, (3003916670316397085UL + 1351UL), (3003916670316397085UL + 1392UL), 0UL, 0UL, 0UL, 0UL, 3, "copyAtom", 6, (3003916670316397085UL + 1351UL), (3003916670316397085UL + 1392UL), 0UL, 0UL, 0UL, 0UL, 0UL, "__assert_fail", 4, (3003916670316397085UL + 1705UL), (3003916670316397085UL + 1699UL), 0UL, (3003916670316397085UL + 1706UL), 0UL, "copyAtom", 6, (3003916670316397085UL + 1351UL), (3003916670316397085UL + 1392UL), 0UL, 0UL, 0UL, 0UL, 0UL,
                               "maxIntParallel", (void **)&(____chimes_extern_func_maxIntParallel),
                               "profileStart", (void **)&(____chimes_extern_func_profileStart),
                               "profileStop", (void **)&(____chimes_extern_func_profileStop),
                           "getNeighborBoxes", &(____chimes_does_checkpoint_getNeighborBoxes_npm),
                           "initLinkCells", &(____chimes_does_checkpoint_initLinkCells_npm),
                           "getBoxFromCoord", &(____chimes_does_checkpoint_getBoxFromCoord_npm),
                           "getTuple", &(____chimes_does_checkpoint_getTuple_npm),
                           "copyAtom", &(____chimes_does_checkpoint_copyAtom_npm),
                           "updateLinkCells", &(____chimes_does_checkpoint_updateLinkCells_npm),
                           "emptyHaloCells", &(____chimes_does_checkpoint_emptyHaloCells_npm),
                           "maxOccupancy", &(____chimes_does_checkpoint_maxOccupancy_npm),
                           "putAtomInBox", &(____chimes_does_checkpoint_putAtomInBox_npm),
                           "destroyLinkCells", &(____chimes_does_checkpoint_destroyLinkCells_npm),
                           "getBoxFromTuple", &(____chimes_does_checkpoint_getBoxFromTuple_npm),
                           "moveAtom", &(____chimes_does_checkpoint_moveAtom_npm),
                           "maxIntParallel", &(____chimes_does_checkpoint_maxIntParallel_npm),
                           "profileStart", &(____chimes_does_checkpoint_profileStart_npm),
                           "profileStop", &(____chimes_does_checkpoint_profileStop_npm),
                             (3003916670316397085UL + 1128UL), (3003916670316397085UL + 1292UL),
                             (3003916670316397085UL + 1129UL), (3003916670316397085UL + 1292UL),
                             (3003916670316397085UL + 1125UL), (3003916670316397085UL + 1292UL),
                             (3003916670316397085UL + 1126UL), (3003916670316397085UL + 1293UL),
                             (3003916670316397085UL + 1127UL), (3003916670316397085UL + 1292UL),
                             (3003916670316397085UL + 1UL), (3003916670316397085UL + 282UL),
                             (3003916670316397085UL + 691UL), (3003916670316397085UL + 943UL),
                             (3003916670316397085UL + 696UL), (3003916670316397085UL + 943UL),
                             (3003916670316397085UL + 22UL), (3003916670316397085UL + 223UL),
                             (3003916670316397085UL + 1518UL), (3003916670316397085UL + 1432UL),
                             (3003916670316397085UL + 1523UL), (3003916670316397085UL + 1596UL),
                             (3003916670316397085UL + 407UL), (3003916670316397085UL + 389UL),
                             (3003916670316397085UL + 3UL), (3003916670316397085UL + 22UL),
                             (3003916670316397085UL + 1115UL), (3003916670316397085UL + 1017UL),
                             (3003916670316397085UL + 1116UL), (3003916670316397085UL + 1049UL),
                             (3003916670316397085UL + 9UL), (3003916670316397085UL + 22UL),
                             (3003916670316397085UL + 1396UL), (3003916670316397085UL + 1517UL),
                             (3003916670316397085UL + 409UL), (3003916670316397085UL + 686UL),
                             (3003916670316397085UL + 1295UL), (3003916670316397085UL + 1392UL),
                             (3003916670316397085UL + 1294UL), (3003916670316397085UL + 1351UL),
                             (3003916670316397085UL + 1351UL), (3003916670316397085UL + 1353UL),
                             (3003916670316397085UL + 1397UL), (3003916670316397085UL + 1518UL),
                             (3003916670316397085UL + 381UL), (3003916670316397085UL + 407UL),
                             (3003916670316397085UL + 1597UL), (3003916670316397085UL + 1569UL),
                             (3003916670316397085UL + 1596UL), (3003916670316397085UL + 1556UL),
                             (3003916670316397085UL + 389UL), (3003916670316397085UL + 396UL),
                             (3003916670316397085UL + 1524UL), (3003916670316397085UL + 1597UL),
                             (3003916670316397085UL + 223UL), (3003916670316397085UL + 269UL),
                             (3003916670316397085UL + 1598UL), (3003916670316397085UL + 1627UL),
                             (3003916670316397085UL + 1627UL), (3003916670316397085UL + 1618UL),
                             (3003916670316397085UL + 961UL), (3003916670316397085UL + 1115UL),
                             (3003916670316397085UL + 962UL), (3003916670316397085UL + 1116UL),
                             (3003916670316397085UL + 1628UL), (3003916670316397085UL + 1660UL),
                             (3003916670316397085UL + 417UL), (3003916670316397085UL + 686UL),
                             (3003916670316397085UL + 411UL), (3003916670316397085UL + 688UL),
                             (3003916670316397085UL + 412UL), (3003916670316397085UL + 689UL),
                             (3003916670316397085UL + 413UL), (3003916670316397085UL + 690UL),
                             (3003916670316397085UL + 1660UL), (3003916670316397085UL + 1662UL),
                             (3003916670316397085UL + 293UL), (3003916670316397085UL + 380UL),
                             (3003916670316397085UL + 291UL), (3003916670316397085UL + 378UL),
                     "AtomsSt", 448UL, 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U),
                     "DomainSt", 1344UL, 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent),
                     "LinkCellSt", 1088UL, 10, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms), "int**", (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes),
                     "TimerHandle", 32UL, 0,
                             "getNeighborBoxes", "_Z16getNeighborBoxesP10LinkCellStiPi", 0, 2, "getTuple", "getBoxFromTuple",
                             "initLinkCells", "_Z13initLinkCellsPK8DomainStd", 0, 1, "getNeighborBoxes",
                             "getBoxFromCoord", "_ZL15getBoxFromCoordP10LinkCellStPd", 0, 1, "getBoxFromTuple",
                             "getTuple", "_ZL8getTupleP10LinkCellStiPiS1_S1_", 0, 0,
                             "copyAtom", "_ZL8copyAtomP10LinkCellStP7AtomsStiiii", 0, 0,
                             "updateLinkCells", "_Z15updateLinkCellsP10LinkCellStP7AtomsSt", 0, 3, "emptyHaloCells", "getBoxFromCoord", "moveAtom",
                             "emptyHaloCells", "_ZL14emptyHaloCellsP10LinkCellSt", 0, 0,
                             "maxOccupancy", "_Z12maxOccupancyP10LinkCellSt", 0, 3, "profileStart", "maxIntParallel", "profileStop",
                             "putAtomInBox", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", 0, 1, "getBoxFromCoord",
                             "destroyLinkCells", "_Z16destroyLinkCellsPP10LinkCellSt", 0, 0,
                             "getBoxFromTuple", "_Z15getBoxFromTupleP10LinkCellStiii", 0, 0,
                             "moveAtom", "_Z8moveAtomP10LinkCellStP7AtomsStiii", 0, 2, "copyAtom", "copyAtom",
                        "getNeighborBoxes|ix|0", 1, "getNeighborBoxes",
                        "putAtomInBox|xyz|0", 1, "putAtomInBox",
                        "maxOccupancy|localMax|0", 1, "maxOccupancy",
                        "maxOccupancy|globalMax|0", 3, "profileStop", "profileStart", "maxIntParallel",
        "getNeighborBoxes", 0UL, (int)3, 3003916670316397107UL, 0UL, 3003916670316397354UL,
        "getTuple", 0UL, (int)5, 3003916670316397463UL, 0UL, 3003916670316397379UL, 3003916670316397380UL, 3003916670316397381UL,
        "getBoxFromTuple", 0UL, (int)4, 3003916670316397463UL, 0UL, 0UL, 0UL,
        "getBoxFromCoord", 0UL, (int)2, 3003916670316398200UL, 3003916670316398056UL,
        "copyAtom", 0UL, (int)6, 3003916670316398436UL, 3003916670316398477UL, 0UL, 0UL, 0UL, 0UL,
        "copyAtom", 0UL, (int)6, 3003916670316398436UL, 3003916670316398477UL, 0UL, 0UL, 0UL, 0UL,
        "emptyHaloCells", 0UL, (int)1, 3003916670316398681UL,
        "getBoxFromCoord", 0UL, (int)2, 3003916670316398681UL, 3003916670316398654UL,
        "moveAtom", 0UL, (int)5, 3003916670316398681UL, 3003916670316398682UL, 0UL, 0UL, 0UL,
        "getBoxFromTuple", 0UL, (int)4, 3003916670316398377UL, 0UL, 0UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();