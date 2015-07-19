# 1 "linkCells.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
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
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 62 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
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
# 63 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h" 1






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
# 8 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h" 2




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
# 64 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 64 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"

# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
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
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
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
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stdarg.h" 1 3 4
# 40 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stdarg.h" 3 4
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
# 66 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
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
# 67 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
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
# 68 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
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
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 69 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"

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
# 71 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
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
# 72 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h" 1
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h"
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
# 57 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 73 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 1 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 1
# 9 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h"
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
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c" 2
# 74 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 75 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 76 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 77 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 78 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
static void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
# 79 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
static int getBoxFromCoord(LinkCell* boxes, real_t rr[3]);
# 80 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
static void emptyHaloCells(LinkCell* boxes);
# 81 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
static void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
# 82 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
LinkCell* initLinkCells_npm(const Domain* domain, real_t cutoff);
LinkCell* initLinkCells_quick(const Domain* domain, real_t cutoff); LinkCell* initLinkCells(const Domain* domain, real_t cutoff);
LinkCell* initLinkCells_resumable(const Domain* domain, real_t cutoff)
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initLinkCells), "initLinkCells", &____must_manage_initLinkCells, 2, 0, (size_t)(13307200203520302171UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 85 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((domain) ? static_cast<void> (0) : __assert_fail ("domain", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 85, __PRETTY_FUNCTION__));
# 86 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    LinkCell *ll; ll = ((LinkCell*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LinkCell)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LinkCell), 13307200203520301970UL, 0, 1, (int)sizeof(struct LinkCellSt), 1, (int)__builtin_offsetof(struct LinkCellSt, nAtoms)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 87 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 88 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 89 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 90 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   } }
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nAtoms = (int*) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int), 13307200203520302136UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int iBox; for ( iBox = (0) ;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; } };
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   (((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)) ? static_cast<void> (0) : __assert_fail ("(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 109, __PRETTY_FUNCTION__));
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    LinkCell *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (ll); rm_stack(true, 13307200203520301970UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(true, 13307200203520301970UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 112 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void destroyLinkCells_npm(LinkCell** boxes);
void destroyLinkCells_quick(LinkCell** boxes); void destroyLinkCells(LinkCell** boxes);
void destroyLinkCells_resumable(LinkCell** boxes)
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&destroyLinkCells), "destroyLinkCells", &____must_manage_destroyLinkCells, 1, 0, (size_t)(13307200203520302206UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (! boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1, false); return; };
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (! *boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1, false); return; };
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ({ free_helper((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *)), 13307200203520302195UL);free((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *))); }) ;
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ({ free_helper((((unsigned char *)*boxes) - sizeof(void *)), 13307200203520302188UL);free((((unsigned char *)*boxes) - sizeof(void *))); }) ;
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *boxes = __null;
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1, false); return;
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 124 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 125 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 126 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 127 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 128 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 129 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 130 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getNeighborBoxes_npm(LinkCell* boxes, int iBox, int* nbrBoxes);int getBoxFromTuple_npm(LinkCell* boxes, int ix, int iy, int iz);void getTuple_npm(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
int getNeighborBoxes_quick(LinkCell* boxes, int iBox, int* nbrBoxes); int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes);int getBoxFromTuple_quick(LinkCell* boxes, int ix, int iy, int iz); int getBoxFromTuple(LinkCell* boxes, int ix, int iy, int iz);void getTuple_quick(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp); void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
int getNeighborBoxes_resumable(LinkCell* boxes, int iBox, int* nbrBoxes)
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getNeighborBoxes), "getNeighborBoxes", &____must_manage_getNeighborBoxes, 3, 0, (size_t)(13307200203520302295UL), (size_t)(0UL), (size_t)(13307200203520302297UL)) ; int ix;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
 if (____must_checkpoint_getNeighborBoxes_ix_0) { register_stack_vars(1, "getNeighborBoxes|ix|0", &____must_checkpoint_getNeighborBoxes_ix_0, "i32", (void *)(&ix), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iy; int iz; ;
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_0: ({ calling_npm("getTuple", 0); getTuple_npm(boxes, iBox, &ix, &iy, &iz); });
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int count; count = (0) ;
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int i; for ( i = (ix-1) ; i<=ix+1; i++) {
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      { int j; for ( j = (iy-1) ; j<=iy+1; j++) {
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         { int k; for ( k = (iz-1) ; k<=iz+1; k++) {
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
             call_lbl_1: nbrBoxes[count++] = ({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, i, j, k); });
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         } }
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      } }
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   } }
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (count); rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_4, ____chimes_did_disable2, false); }
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void putAtomInBox_npm(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz);int getBoxFromCoord_npm(LinkCell* boxes, real_t rr[3]);
void putAtomInBox_quick(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz); void putAtomInBox(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz);int getBoxFromCoord_quick(LinkCell* boxes, real_t rr[3]); int getBoxFromCoord(LinkCell* boxes, real_t rr[3]);
void putAtomInBox_resumable(LinkCell* boxes, Atoms* atoms,
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const int gid, const int iType,
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&putAtomInBox), "putAtomInBox", &____must_manage_putAtomInBox, 10, 0, (size_t)(13307200203520303004UL), (size_t)(13307200203520303005UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; real_t xyz[3];
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
 if (____must_checkpoint_putAtomInBox_xyz_0) { register_stack_vars(1, "putAtomInBox|xyz|0", &____must_checkpoint_putAtomInBox_xyz_0, "[3 x double]", (void *)(xyz), (size_t)24, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iBox; call_lbl_0: iBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, xyz); })) ;
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iOff; iOff = (iBox*64) ;
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[iBox]++;
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->gid[iOff] = gid;
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][0] = x;
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][1] = y;
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][2] = z;
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][0] = px;
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][1] = py;
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][2] = pz;
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "putAtomInBox", &____must_manage_putAtomInBox, ____alias_loc_id_7, ____chimes_did_disable3, false); }
# 186 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 187 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 188 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 189 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 190 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 191 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 192 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getBoxFromTuple_resumable(LinkCell* boxes, int ix, int iy, int iz)
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&getBoxFromTuple), "getBoxFromTuple", &____must_manage_getBoxFromTuple, 4, 0, (size_t)(13307200203520302832UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iBox; iBox = (0) ;
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (iz == gridSize[2]) {{
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iz == -1) {{
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 214 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 215 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iy == -1) {{
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (ix == -1)
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   else
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 235 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 236 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((iBox >= 0) ? static_cast<void> (0) : __assert_fail ("iBox >= 0", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 236, __PRETTY_FUNCTION__));
# 237 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((iBox < boxes->nTotalBoxes) ? static_cast<void> (0) : __assert_fail ("iBox < boxes->nTotalBoxes", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 237, __PRETTY_FUNCTION__));
# 238 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 239 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (iBox); rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); return ____chimes_ret_var_2; ;
# 240 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); }
# 241 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 242 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 243 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 244 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 245 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 246 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void moveAtom_npm(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox);void copyAtom_npm(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
void moveAtom_quick(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox); void moveAtom(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox);void copyAtom_quick(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox); void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
void moveAtom_resumable(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 247 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&moveAtom), "moveAtom", &____must_manage_moveAtom, 5, 0, (size_t)(13307200203520303240UL), (size_t)(13307200203520303281UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 248 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int nj; nj = (boxes->nAtoms[jBox]) ;
# 249 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_0: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox); });
# 250 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[jBox]++;
# 251 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 252 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((boxes->nAtoms[jBox] < 64) ? static_cast<void> (0) : __assert_fail ("boxes->nAtoms[jBox] < 64", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 252, __PRETTY_FUNCTION__));
# 253 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 254 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[iBox]--;
# 255 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ni; ni = (boxes->nAtoms[iBox]) ;
# 256 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (ni) { call_lbl_1: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); }); };
# 257 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 258 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 260 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 261 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   rm_stack(false, 0UL, "moveAtom", &____must_manage_moveAtom, ____alias_loc_id_9, ____chimes_did_disable5, false); return;
# 262 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void updateLinkCells_npm(LinkCell* boxes, Atoms* atoms);void emptyHaloCells_npm(LinkCell* boxes);
void updateLinkCells_quick(LinkCell* boxes, Atoms* atoms); void updateLinkCells(LinkCell* boxes, Atoms* atoms);void emptyHaloCells_quick(LinkCell* boxes); void emptyHaloCells(LinkCell* boxes);
void updateLinkCells_resumable(LinkCell* boxes, Atoms* atoms)
# 278 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&updateLinkCells), "updateLinkCells", &____must_manage_updateLinkCells, 2, 0, (size_t)(13307200203520303485UL), (size_t)(13307200203520303486UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 279 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_0: ({ calling_npm("emptyHaloCells", 0); emptyHaloCells_npm(boxes); });
# 280 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 281 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<boxes->nLocalBoxes; ++iBox)
# 282 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 283 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
       int iOff; iOff = (iBox*64) ;
# 284 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
       int ii; ii = (0) ;
# 285 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 286 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 287 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
          int jBox; call_lbl_1: jBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]); })) ;
# 288 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (jBox != iBox) { call_lbl_2: ({ calling_npm("moveAtom", 0); moveAtom_npm(boxes, atoms, ii, iBox, jBox); }); } else {++ii; } ;
# 292 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 293 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   } }
# 294 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "updateLinkCells", &____must_manage_updateLinkCells, ____alias_loc_id_11, ____chimes_did_disable6, false); }
# 295 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 296 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 297 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int maxOccupancy_npm(LinkCell* boxes);static void (*____chimes_extern_func_maxIntParallel)(int *, int *, int) = maxIntParallel;static void (*____chimes_extern_func_profileStart)(enum TimerHandle) = profileStart;static void (*____chimes_extern_func_profileStop)(enum TimerHandle) = profileStop;
int maxOccupancy_quick(LinkCell* boxes); int maxOccupancy(LinkCell* boxes);
int maxOccupancy_resumable(LinkCell* boxes)
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&maxOccupancy), "maxOccupancy", &____must_manage_maxOccupancy, 1, 0, (size_t)(13307200203520303549UL)) ; int globalMax;
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int localMax;
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
 if (____must_checkpoint_maxOccupancy_globalMax_0 || ____must_checkpoint_maxOccupancy_localMax_0) { register_stack_vars(2, "maxOccupancy|globalMax|0", &____must_checkpoint_maxOccupancy_globalMax_0, "i32", (void *)(&globalMax), (size_t)4, 0, 0, 0, "maxOccupancy|localMax|0", &____must_checkpoint_maxOccupancy_localMax_0, "i32", (void *)(&localMax), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 299 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      localMax = (0) ;
# 300 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int ii; for ( ii = (0) ;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); } };
# 302 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 303 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ;
# 304 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 305 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   do { call_lbl_0: ({ calling((void*)profileStart, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 306 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_1: ({ calling((void*)maxIntParallel, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(13307200203520303518UL), (size_t)(13307200203520303520UL), (size_t)(0UL)); (maxIntParallel)(&localMax, &globalMax, 1); }) ;
# 307 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   do { call_lbl_2: ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 308 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 309 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (globalMax); rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); return ____chimes_ret_var_3; ;
# 310 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); }
# 311 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 312 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 313 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 314 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 315 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void copyAtom_resumable(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 316 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&copyAtom), "copyAtom", &____must_manage_copyAtom, 6, 0, (size_t)(13307200203520303406UL), (size_t)(13307200203520303407UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 317 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iOff; iOff = (64*iBox+iAtom) ;
# 318 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int jOff; jOff = (64*jBox+jAtom) ;
# 319 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 320 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 321 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 322 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 323 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 324 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 325 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "copyAtom", &____must_manage_copyAtom, ____alias_loc_id_10, ____chimes_did_disable8, false); }
# 337 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 337 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getBoxFromCoord_resumable(LinkCell* boxes, real_t rr[3])
# 338 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&getBoxFromCoord), "getBoxFromCoord", &____must_manage_getBoxFromCoord, 2, 0, (size_t)(13307200203520303181UL), (size_t)(13307200203520303182UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 339 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const real_t *localMin; localMin = (boxes->localMin) ;
# 340 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const real_t *localMax; localMax = (boxes->localMax) ;
# 341 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 342 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ix; ix = ((int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]))) ;
# 343 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iy; iy = ((int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]))) ;
# 344 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iz; iz = ((int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]))) ;
# 345 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 346 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 347 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 348 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 349 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 351 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 352 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 355 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 357 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 358 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 361 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 363 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 364 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 367 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 368 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int result; call_lbl_0: result = (({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, ix, iy, iz); })) ;
# 369 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (result); rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); return ____chimes_ret_var_4; ;
# 370 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); }
# 371 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 372 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 373 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void emptyHaloCells_resumable(LinkCell* boxes)
# 374 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&emptyHaloCells), "emptyHaloCells", &____must_manage_emptyHaloCells, 1, 0, (size_t)(13307200203520303516UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 375 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int ii; for ( ii = (boxes->nLocalBoxes) ;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; } };
# 377 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "emptyHaloCells", &____must_manage_emptyHaloCells, ____alias_loc_id_12, ____chimes_did_disable10, false); }
# 387 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 387 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void getTuple_resumable(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 388 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&getTuple), "getTuple", &____must_manage_getTuple, 5, 0, (size_t)(13307200203520302575UL), (size_t)(0UL), (size_t)(13307200203520302577UL), (size_t)(13307200203520302578UL), (size_t)(13307200203520302579UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 389 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int ix; int iy; int iz; ;
# 390 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 391 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 392 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 393 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 394 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 395 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ix = iBox % gridSize[0];
# 396 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox /= gridSize[0];
# 397 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iy = iBox % gridSize[1];
# 398 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iz = iBox / gridSize[1];
# 399 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 400 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 401 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   else
# 402 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 403 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      int ink; ;
# 404 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 405 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 407 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 408 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 409 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ix = 0;
# 410 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 411 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 412 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 413 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 414 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ix = gridSize[0] + 1;
# 415 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 416 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 417 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 418 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 420 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 421 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 422 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 423 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 424 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iy = 0;
# 425 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 426 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 427 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 428 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 429 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iy = gridSize[1] + 1;
# 430 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 431 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 432 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 433 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 434 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      else
# 435 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 436 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 437 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 438 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 439 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iz = 0;
# 440 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 441 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 442 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 443 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 444 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iz = gridSize[2] + 1;
# 445 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 446 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 447 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 448 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 449 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 450 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 451 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ix--;
# 452 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iy--;
# 453 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iz--;
# 454 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 455 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 456 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *ixp = ix;
# 457 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *iyp = iy;
# 458 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *izp = iz;
# 459 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getTuple", &____must_manage_getTuple, ____alias_loc_id_5, ____chimes_did_disable11, false); }
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
LinkCell* initLinkCells_quick(const Domain* domain, real_t cutoff)
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initLinkCells), "initLinkCells", &____must_manage_initLinkCells, 2, 0, (size_t)(13307200203520302171UL), (size_t)(0UL)) ; ; ;
# 85 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((domain) ? static_cast<void> (0) : __assert_fail ("domain", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 85, __PRETTY_FUNCTION__));
# 86 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    LinkCell *ll; ll = ((LinkCell*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LinkCell)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LinkCell), 13307200203520301970UL, 0, 1, (int)sizeof(struct LinkCellSt), 1, (int)__builtin_offsetof(struct LinkCellSt, nAtoms)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 87 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 88 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 89 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 90 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   } }
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nAtoms = (int*) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int), 13307200203520302136UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int iBox; for ( iBox = (0) ;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; } };
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   (((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)) ? static_cast<void> (0) : __assert_fail ("(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 109, __PRETTY_FUNCTION__));
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    LinkCell *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (ll); rm_stack(true, 13307200203520301970UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(true, 13307200203520301970UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_2, ____chimes_did_disable0, false); }

LinkCell* initLinkCells(const Domain* domain, real_t cutoff) { return (____chimes_replaying ? initLinkCells_resumable(domain, cutoff) : initLinkCells_quick(domain, cutoff)); }
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void destroyLinkCells_quick(LinkCell** boxes)
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&destroyLinkCells), "destroyLinkCells", &____must_manage_destroyLinkCells, 1, 0, (size_t)(13307200203520302206UL)) ; ; ;
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (! boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1, false); return; };
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (! *boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1, false); return; };
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ({ free_helper((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *)), 13307200203520302195UL);free((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *))); }) ;
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ({ free_helper((((unsigned char *)*boxes) - sizeof(void *)), 13307200203520302188UL);free((((unsigned char *)*boxes) - sizeof(void *))); }) ;
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *boxes = __null;
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1, false); return;
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}

void destroyLinkCells(LinkCell** boxes) { (____chimes_replaying ? destroyLinkCells_resumable(boxes) : destroyLinkCells_quick(boxes)); }
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getNeighborBoxes_quick(LinkCell* boxes, int iBox, int* nbrBoxes)
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getNeighborBoxes), "getNeighborBoxes", &____must_manage_getNeighborBoxes, 3, 0, (size_t)(13307200203520302295UL), (size_t)(0UL), (size_t)(13307200203520302297UL)) ; int ix;
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
 if (____must_checkpoint_getNeighborBoxes_ix_0) { register_stack_vars(1, "getNeighborBoxes|ix|0", &____must_checkpoint_getNeighborBoxes_ix_0, "i32", (void *)(&ix), (size_t)4, 0, 0, 0); } ; ;
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iy; int iz; ;
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_0: ({ calling_npm("getTuple", 0); getTuple_npm(boxes, iBox, &ix, &iy, &iz); });
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int count; count = (0) ;
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int i; for ( i = (ix-1) ; i<=ix+1; i++) {
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      { int j; for ( j = (iy-1) ; j<=iy+1; j++) {
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         { int k; for ( k = (iz-1) ; k<=iz+1; k++) {
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
             call_lbl_1: nbrBoxes[count++] = ({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, i, j, k); });
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         } }
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      } }
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   } }
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (count); rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_4, ____chimes_did_disable2, false); }

int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes) { return (____chimes_replaying ? getNeighborBoxes_resumable(boxes, iBox, nbrBoxes) : getNeighborBoxes_quick(boxes, iBox, nbrBoxes)); }
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void putAtomInBox_quick(LinkCell* boxes, Atoms* atoms,
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const int gid, const int iType,
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&putAtomInBox), "putAtomInBox", &____must_manage_putAtomInBox, 10, 0, (size_t)(13307200203520303004UL), (size_t)(13307200203520303005UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; real_t xyz[3];
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
 if (____must_checkpoint_putAtomInBox_xyz_0) { register_stack_vars(1, "putAtomInBox|xyz|0", &____must_checkpoint_putAtomInBox_xyz_0, "[3 x double]", (void *)(xyz), (size_t)24, 0, 0, 0); } ; ;
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iBox; call_lbl_0: iBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, xyz); })) ;
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iOff; iOff = (iBox*64) ;
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[iBox]++;
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->gid[iOff] = gid;
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][0] = x;
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][1] = y;
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][2] = z;
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][0] = px;
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][1] = py;
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][2] = pz;
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "putAtomInBox", &____must_manage_putAtomInBox, ____alias_loc_id_7, ____chimes_did_disable3, false); }

void putAtomInBox(LinkCell* boxes, Atoms* atoms,
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const int gid, const int iType,
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t px, const real_t py, const real_t pz) { (____chimes_replaying ? putAtomInBox_resumable(boxes, atoms, gid, iType, x, y, z, px, py, pz) : putAtomInBox_quick(boxes, atoms, gid, iType, x, y, z, px, py, pz)); }
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getBoxFromTuple_quick(LinkCell* boxes, int ix, int iy, int iz)
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&getBoxFromTuple), "getBoxFromTuple", &____must_manage_getBoxFromTuple, 4, 0, (size_t)(13307200203520302832UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iBox; iBox = (0) ;
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (iz == gridSize[2]) {{
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iz == -1) {{
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 214 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 215 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iy == -1) {{
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (ix == -1)
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   else
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 235 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 236 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((iBox >= 0) ? static_cast<void> (0) : __assert_fail ("iBox >= 0", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 236, __PRETTY_FUNCTION__));
# 237 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((iBox < boxes->nTotalBoxes) ? static_cast<void> (0) : __assert_fail ("iBox < boxes->nTotalBoxes", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 237, __PRETTY_FUNCTION__));
# 238 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 239 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (iBox); rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); return ____chimes_ret_var_2; ;
# 240 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_6, ____chimes_did_disable4, false); }

int getBoxFromTuple(LinkCell* boxes, int ix, int iy, int iz) { return (____chimes_replaying ? getBoxFromTuple_resumable(boxes, ix, iy, iz) : getBoxFromTuple_quick(boxes, ix, iy, iz)); }
# 246 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void moveAtom_quick(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 247 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&moveAtom), "moveAtom", &____must_manage_moveAtom, 5, 0, (size_t)(13307200203520303240UL), (size_t)(13307200203520303281UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 248 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int nj; nj = (boxes->nAtoms[jBox]) ;
# 249 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_0: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox); });
# 250 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[jBox]++;
# 251 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 252 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((boxes->nAtoms[jBox] < 64) ? static_cast<void> (0) : __assert_fail ("boxes->nAtoms[jBox] < 64", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 252, __PRETTY_FUNCTION__));
# 253 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 254 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[iBox]--;
# 255 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ni; ni = (boxes->nAtoms[iBox]) ;
# 256 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (ni) { call_lbl_1: ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); }); };
# 257 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 258 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 260 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 261 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   rm_stack(false, 0UL, "moveAtom", &____must_manage_moveAtom, ____alias_loc_id_9, ____chimes_did_disable5, false); return;
# 262 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}

void moveAtom(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox) { (____chimes_replaying ? moveAtom_resumable(boxes, atoms, iId, iBox, jBox) : moveAtom_quick(boxes, atoms, iId, iBox, jBox)); }
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void updateLinkCells_quick(LinkCell* boxes, Atoms* atoms)
# 278 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&updateLinkCells), "updateLinkCells", &____must_manage_updateLinkCells, 2, 0, (size_t)(13307200203520303485UL), (size_t)(13307200203520303486UL)) ; ; ;
# 279 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_0: ({ calling_npm("emptyHaloCells", 0); emptyHaloCells_npm(boxes); });
# 280 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 281 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<boxes->nLocalBoxes; ++iBox)
# 282 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 283 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
       int iOff; iOff = (iBox*64) ;
# 284 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
       int ii; ii = (0) ;
# 285 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 286 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 287 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
          int jBox; call_lbl_1: jBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]); })) ;
# 288 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (jBox != iBox) { call_lbl_2: ({ calling_npm("moveAtom", 0); moveAtom_npm(boxes, atoms, ii, iBox, jBox); }); } else {++ii; } ;
# 292 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 293 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   } }
# 294 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "updateLinkCells", &____must_manage_updateLinkCells, ____alias_loc_id_11, ____chimes_did_disable6, false); }

void updateLinkCells(LinkCell* boxes, Atoms* atoms) { (____chimes_replaying ? updateLinkCells_resumable(boxes, atoms) : updateLinkCells_quick(boxes, atoms)); }
# 297 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int maxOccupancy_quick(LinkCell* boxes)
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&maxOccupancy), "maxOccupancy", &____must_manage_maxOccupancy, 1, 0, (size_t)(13307200203520303549UL)) ; int globalMax;
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int localMax;
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
 if (____must_checkpoint_maxOccupancy_globalMax_0 || ____must_checkpoint_maxOccupancy_localMax_0) { register_stack_vars(2, "maxOccupancy|globalMax|0", &____must_checkpoint_maxOccupancy_globalMax_0, "i32", (void *)(&globalMax), (size_t)4, 0, 0, 0, "maxOccupancy|localMax|0", &____must_checkpoint_maxOccupancy_localMax_0, "i32", (void *)(&localMax), (size_t)4, 0, 0, 0); } ; ;
# 299 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      localMax = (0) ;
# 300 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int ii; for ( ii = (0) ;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); } };
# 302 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 303 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ;
# 304 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 305 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   do { call_lbl_0: ({ calling((void*)profileStart, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 306 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    call_lbl_1: ({ calling((void*)maxIntParallel, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(13307200203520303518UL), (size_t)(13307200203520303520UL), (size_t)(0UL)); (maxIntParallel)(&localMax, &globalMax, 1); }) ;
# 307 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   do { call_lbl_2: ({ calling((void*)profileStop, 2, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 308 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 309 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (globalMax); rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); return ____chimes_ret_var_3; ;
# 310 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, ____alias_loc_id_13, ____chimes_did_disable7, false); }

int maxOccupancy(LinkCell* boxes) { return (____chimes_replaying ? maxOccupancy_resumable(boxes) : maxOccupancy_quick(boxes)); }
# 315 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void copyAtom_quick(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 316 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&copyAtom), "copyAtom", &____must_manage_copyAtom, 6, 0, (size_t)(13307200203520303406UL), (size_t)(13307200203520303407UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 317 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iOff; iOff = (64*iBox+iAtom) ;
# 318 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int jOff; jOff = (64*jBox+jAtom) ;
# 319 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 320 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 321 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 322 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 323 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 324 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 325 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "copyAtom", &____must_manage_copyAtom, ____alias_loc_id_10, ____chimes_did_disable8, false); }

void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox) { (____chimes_replaying ? copyAtom_resumable(boxes, atoms, iAtom, iBox, jAtom, jBox) : copyAtom_quick(boxes, atoms, iAtom, iBox, jAtom, jBox)); }
# 337 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getBoxFromCoord_quick(LinkCell* boxes, real_t rr[3])
# 338 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&getBoxFromCoord), "getBoxFromCoord", &____must_manage_getBoxFromCoord, 2, 0, (size_t)(13307200203520303181UL), (size_t)(13307200203520303182UL)) ; ; ;
# 339 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const real_t *localMin; localMin = (boxes->localMin) ;
# 340 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const real_t *localMax; localMax = (boxes->localMax) ;
# 341 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 342 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ix; ix = ((int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]))) ;
# 343 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iy; iy = ((int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]))) ;
# 344 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int iz; iz = ((int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]))) ;
# 345 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 346 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 347 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 348 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 349 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 351 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 352 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 355 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 357 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 358 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 361 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 363 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 364 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 367 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 368 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int result; call_lbl_0: result = (({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, ix, iy, iz); })) ;
# 369 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = (result); rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); return ____chimes_ret_var_4; ;
# 370 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_8, ____chimes_did_disable9, false); }

int getBoxFromCoord(LinkCell* boxes, real_t rr[3]) { return (____chimes_replaying ? getBoxFromCoord_resumable(boxes, rr) : getBoxFromCoord_quick(boxes, rr)); }
# 373 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void emptyHaloCells_quick(LinkCell* boxes)
# 374 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&emptyHaloCells), "emptyHaloCells", &____must_manage_emptyHaloCells, 1, 0, (size_t)(13307200203520303516UL)) ; ; ;
# 375 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   { int ii; for ( ii = (boxes->nLocalBoxes) ;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; } };
# 377 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "emptyHaloCells", &____must_manage_emptyHaloCells, ____alias_loc_id_12, ____chimes_did_disable10, false); }

void emptyHaloCells(LinkCell* boxes) { (____chimes_replaying ? emptyHaloCells_resumable(boxes) : emptyHaloCells_quick(boxes)); }
# 387 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void getTuple_quick(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 388 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&getTuple), "getTuple", &____must_manage_getTuple, 5, 0, (size_t)(13307200203520302575UL), (size_t)(0UL), (size_t)(13307200203520302577UL), (size_t)(13307200203520302578UL), (size_t)(13307200203520302579UL)) ; ; ;
# 389 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int ix; int iy; int iz; ;
# 390 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 391 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 392 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 393 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 394 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 395 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ix = iBox % gridSize[0];
# 396 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox /= gridSize[0];
# 397 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iy = iBox % gridSize[1];
# 398 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iz = iBox / gridSize[1];
# 399 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 400 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 401 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   else
# 402 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 403 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      int ink; ;
# 404 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 405 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 407 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 408 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 409 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ix = 0;
# 410 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 411 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 412 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 413 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 414 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ix = gridSize[0] + 1;
# 415 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 416 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 417 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 418 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 420 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 421 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 422 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 423 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 424 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iy = 0;
# 425 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 426 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 427 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 428 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 429 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iy = gridSize[1] + 1;
# 430 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 431 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 432 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 433 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 434 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      else
# 435 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 436 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 437 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 438 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 439 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iz = 0;
# 440 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 441 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 442 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 443 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 444 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iz = gridSize[2] + 1;
# 445 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 446 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 447 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 448 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 449 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 450 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 451 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ix--;
# 452 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iy--;
# 453 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iz--;
# 454 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 455 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 456 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *ixp = ix;
# 457 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *iyp = iy;
# 458 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *izp = iz;
# 459 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
rm_stack(false, 0UL, "getTuple", &____must_manage_getTuple, ____alias_loc_id_5, ____chimes_did_disable11, false); }

void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp) { (____chimes_replaying ? getTuple_resumable(boxes, iBox, ixp, iyp, izp) : getTuple_quick(boxes, iBox, ixp, iyp, izp)); }
# 83 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
LinkCell* initLinkCells_npm(const Domain* domain, real_t cutoff)
# 84 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 85 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((domain) ? static_cast<void> (0) : __assert_fail ("domain", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 85, __PRETTY_FUNCTION__));
# 86 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   LinkCell* ll = (LinkCell*) ({ void *____chimes_tmp_ptr = malloc((sizeof(LinkCell)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(LinkCell), 13307200203520301970UL, 0, 1, (int)sizeof(struct LinkCellSt), 1, (int)__builtin_offsetof(struct LinkCellSt, nAtoms)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 87 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 88 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   for (int i = 0; i < 3; i++)
# 89 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 90 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 96 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 97 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 99 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 103 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 105 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ll->nAtoms = (int*) ({ void *____chimes_tmp_ptr = malloc((ll->nTotalBoxes * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ll->nTotalBoxes*sizeof(int), 13307200203520302136UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 106 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   for (int iBox=0;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; };
# 108 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 109 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   (((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)) ? static_cast<void> (0) : __assert_fail ("(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 109, __PRETTY_FUNCTION__));
# 110 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    LinkCell * ____chimes_ret_var_0; ____chimes_ret_var_0 = (ll); return ____chimes_ret_var_0; ;
# 111 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 113 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void destroyLinkCells_npm(LinkCell** boxes)
# 114 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 115 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (! boxes) {return; };
# 116 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (! *boxes) {return; };
# 117 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 118 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ({ free_helper((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *)), 13307200203520302195UL);free((((unsigned char *)(*boxes)->nAtoms) - sizeof(void *))); }) ;
# 119 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    ({ free_helper((((unsigned char *)*boxes) - sizeof(void *)), 13307200203520302188UL);free((((unsigned char *)*boxes) - sizeof(void *))); }) ;
# 120 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *boxes = __null;
# 121 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 122 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   return;
# 123 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 131 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getNeighborBoxes_npm(LinkCell* boxes, int iBox, int* nbrBoxes)
# 132 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 133 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int ix, iy, iz;
# 134 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   getTuple_npm(boxes, iBox, &ix, &iy, &iz);
# 135 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 136 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int count = 0;
# 137 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   for (int i=ix-1; i<=ix+1; i++) {
# 138 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      for (int j=iy-1; j<=iy+1; j++) {
# 139 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         for (int k=iz-1; k<=iz+1; k++) {
# 140 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            nbrBoxes[count++] = getBoxFromTuple_npm(boxes, i, j, k);
# 141 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 142 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 143 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 144 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 145 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_1; ____chimes_ret_var_1 = (count); return ____chimes_ret_var_1; ;
# 146 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 159 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void putAtomInBox_npm(LinkCell* boxes, Atoms* atoms,
# 160 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const int gid, const int iType,
# 161 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 162 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 163 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 164 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   real_t xyz[3]; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 165 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 166 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 167 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int iBox = getBoxFromCoord_npm(boxes, xyz);
# 168 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int iOff = iBox*64;
# 169 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 170 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 171 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 172 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 174 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[iBox]++;
# 175 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->gid[iOff] = gid;
# 176 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 177 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 178 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][0] = x;
# 179 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][1] = y;
# 180 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->r[iOff][2] = z;
# 181 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 182 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][0] = px;
# 183 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][1] = py;
# 184 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->p[iOff][2] = pz;
# 185 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 193 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getBoxFromTuple_npm(LinkCell* boxes, int ix, int iy, int iz)
# 194 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 195 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int iBox = 0;
# 196 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 197 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 198 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 199 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (iz == gridSize[2]) {{
# 201 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 202 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 203 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iz == -1) {{
# 207 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 208 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 209 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 213 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 214 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 215 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (iy == -1) {{
# 219 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 220 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 224 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 225 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else if (ix == -1)
# 228 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 229 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 230 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 231 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 232 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   else
# 233 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 234 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 235 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 236 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((iBox >= 0) ? static_cast<void> (0) : __assert_fail ("iBox >= 0", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 236, __PRETTY_FUNCTION__));
# 237 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((iBox < boxes->nTotalBoxes) ? static_cast<void> (0) : __assert_fail ("iBox < boxes->nTotalBoxes", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 237, __PRETTY_FUNCTION__));
# 238 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 239 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_2; ____chimes_ret_var_2 = (iBox); return ____chimes_ret_var_2; ;
# 240 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 246 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void moveAtom_npm(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 247 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 248 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int nj = boxes->nAtoms[jBox];
# 249 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox);
# 250 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[jBox]++;
# 251 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 252 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   ((boxes->nAtoms[jBox] < 64) ? static_cast<void> (0) : __assert_fail ("boxes->nAtoms[jBox] < 64", "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c", 252, __PRETTY_FUNCTION__));
# 253 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 254 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   boxes->nAtoms[iBox]--;
# 255 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int ni = boxes->nAtoms[iBox];
# 256 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (ni) {copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); };
# 257 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 258 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 260 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 261 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   return;
# 262 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 277 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void updateLinkCells_npm(LinkCell* boxes, Atoms* atoms)
# 278 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 279 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   emptyHaloCells_npm(boxes);
# 280 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 281 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   for (int iBox=0; iBox<boxes->nLocalBoxes; ++iBox)
# 282 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 283 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      int iOff = iBox*64;
# 284 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      int ii=0;
# 285 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 286 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 287 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         int jBox = getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]);
# 288 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (jBox != iBox) {moveAtom_npm(boxes, atoms, ii, iBox, jBox); } else {++ii; } ;
# 292 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 293 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 294 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 297 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int maxOccupancy_npm(LinkCell* boxes)
# 298 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 299 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int localMax = 0;
# 300 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   for (int ii=0;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); };
# 302 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 303 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int globalMax;
# 304 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 305 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   do { (*____chimes_extern_func_profileStart)(commReduceTimer); } while(0);
# 306 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   (*____chimes_extern_func_maxIntParallel)(&localMax, &globalMax, 1);
# 307 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   do { (*____chimes_extern_func_profileStop)(commReduceTimer); } while(0);
# 308 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 309 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_3; ____chimes_ret_var_3 = (globalMax); return ____chimes_ret_var_3; ;
# 310 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 315 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void copyAtom_npm(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 316 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 317 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int iOff = 64*iBox+iAtom;
# 318 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int jOff = 64*jBox+jAtom;
# 319 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 320 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 321 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 322 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 323 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 324 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 325 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 337 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
int getBoxFromCoord_npm(LinkCell* boxes, real_t rr[3])
# 338 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 339 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   const real_t* localMin = boxes->localMin;
# 340 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   const real_t* localMax = boxes->localMax;
# 341 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 342 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int ix = (int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]));
# 343 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int iy = (int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]));
# 344 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int iz = (int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]));
# 345 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 346 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 347 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 348 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 349 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 351 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 352 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 355 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 357 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 358 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 361 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 363 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 364 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 367 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 368 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int result = getBoxFromTuple_npm(boxes, ix, iy, iz);
# 369 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
    int ____chimes_ret_var_4; ____chimes_ret_var_4 = (result); return ____chimes_ret_var_4; ;
# 370 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 373 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void emptyHaloCells_npm(LinkCell* boxes)
# 374 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 375 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   for (int ii=boxes->nLocalBoxes;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; };
# 377 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}
# 387 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
void getTuple_npm(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 388 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
{
# 389 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   int ix, iy, iz;
# 390 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 391 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 392 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 393 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 394 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 395 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ix = iBox % gridSize[0];
# 396 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iBox /= gridSize[0];
# 397 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iy = iBox % gridSize[1];
# 398 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iz = iBox / gridSize[1];
# 399 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 400 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 401 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   else
# 402 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   {
# 403 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      int ink;
# 404 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 405 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 407 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 408 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 409 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ix = 0;
# 410 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 411 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 412 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 413 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 414 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ix = gridSize[0] + 1;
# 415 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 416 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 417 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 418 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 420 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 421 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 422 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 423 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 424 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iy = 0;
# 425 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 426 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 427 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 428 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 429 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iy = gridSize[1] + 1;
# 430 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 431 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 432 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 433 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 434 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      else
# 435 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      {
# 436 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 437 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 438 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 439 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iz = 0;
# 440 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 441 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         else
# 442 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         {
# 443 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 444 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
            iz = gridSize[2] + 1;
# 445 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         }
# 446 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 447 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 448 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      }
# 449 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 450 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 451 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      ix--;
# 452 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iy--;
# 453 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
      iz--;
# 454 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   }
# 455 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
# 456 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *ixp = ix;
# 457 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *iyp = iy;
# 458 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
   *izp = iz;
# 459 "/home/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.c"
}





static int module_init() {
    init_module(13307200203520301951UL, 39, 12, 4, 14, 12, 3, 15, 9, 0, 4,
                           &____alias_loc_id_0, (unsigned)0, (unsigned)0, (unsigned)1, "maxIntParallel", (unsigned)2, (13307200203520301951UL + 1567UL), (13307200203520301951UL + 1569UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1566UL), (13307200203520301951UL + 1567UL), (13307200203520301951UL + 1568UL),
                           &____alias_loc_id_2, (unsigned)8, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1UL), (13307200203520301951UL + 2UL), (13307200203520301951UL + 3UL), (13307200203520301951UL + 4UL), (13307200203520301951UL + 5UL), (13307200203520301951UL + 6UL), (13307200203520301951UL + 19UL), (13307200203520301951UL + 185UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (unsigned)0, (13307200203520301951UL + 229UL), (13307200203520301951UL + 255UL),
                           &____alias_loc_id_4, (unsigned)9, (unsigned)0, (unsigned)0, (13307200203520301951UL + 257UL), (13307200203520301951UL + 258UL), (13307200203520301951UL + 259UL), (13307200203520301951UL + 263UL), (13307200203520301951UL + 264UL), (13307200203520301951UL + 265UL), (13307200203520301951UL + 266UL), (13307200203520301951UL + 267UL), (13307200203520301951UL + 346UL),
                           &____alias_loc_id_5, (unsigned)13, (unsigned)0, (unsigned)0, (13307200203520301951UL + 347UL), (13307200203520301951UL + 348UL), (13307200203520301951UL + 349UL), (13307200203520301951UL + 350UL), (13307200203520301951UL + 351UL), (13307200203520301951UL + 352UL), (13307200203520301951UL + 353UL), (13307200203520301951UL + 354UL), (13307200203520301951UL + 355UL), (13307200203520301951UL + 356UL), (13307200203520301951UL + 626UL), (13307200203520301951UL + 627UL), (13307200203520301951UL + 628UL),
                           &____alias_loc_id_6, (unsigned)7, (unsigned)0, (unsigned)0, (13307200203520301951UL + 629UL), (13307200203520301951UL + 630UL), (13307200203520301951UL + 631UL), (13307200203520301951UL + 632UL), (13307200203520301951UL + 633UL), (13307200203520301951UL + 634UL), (13307200203520301951UL + 635UL),
                           &____alias_loc_id_7, (unsigned)16, (unsigned)0, (unsigned)0, (13307200203520301951UL + 899UL), (13307200203520301951UL + 900UL), (13307200203520301951UL + 901UL), (13307200203520301951UL + 902UL), (13307200203520301951UL + 903UL), (13307200203520301951UL + 904UL), (13307200203520301951UL + 905UL), (13307200203520301951UL + 906UL), (13307200203520301951UL + 907UL), (13307200203520301951UL + 908UL), (13307200203520301951UL + 909UL), (13307200203520301951UL + 910UL), (13307200203520301951UL + 911UL), (13307200203520301951UL + 955UL), (13307200203520301951UL + 987UL), (13307200203520301951UL + 1054UL),
                           &____alias_loc_id_8, (unsigned)10, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1063UL), (13307200203520301951UL + 1064UL), (13307200203520301951UL + 1065UL), (13307200203520301951UL + 1066UL), (13307200203520301951UL + 1067UL), (13307200203520301951UL + 1068UL), (13307200203520301951UL + 1069UL), (13307200203520301951UL + 1070UL), (13307200203520301951UL + 1071UL), (13307200203520301951UL + 1072UL),
                           &____alias_loc_id_9, (unsigned)9, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1232UL), (13307200203520301951UL + 1233UL), (13307200203520301951UL + 1234UL), (13307200203520301951UL + 1235UL), (13307200203520301951UL + 1236UL), (13307200203520301951UL + 1237UL), (13307200203520301951UL + 1238UL), (13307200203520301951UL + 1291UL), (13307200203520301951UL + 1330UL),
                            &____alias_loc_id_10, (unsigned)9, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1334UL), (13307200203520301951UL + 1335UL), (13307200203520301951UL + 1336UL), (13307200203520301951UL + 1337UL), (13307200203520301951UL + 1338UL), (13307200203520301951UL + 1339UL), (13307200203520301951UL + 1340UL), (13307200203520301951UL + 1341UL), (13307200203520301951UL + 1370UL),
                            &____alias_loc_id_11, (unsigned)6, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1461UL), (13307200203520301951UL + 1462UL), (13307200203520301951UL + 1463UL), (13307200203520301951UL + 1464UL), (13307200203520301951UL + 1465UL), (13307200203520301951UL + 1466UL),
                            &____alias_loc_id_12, (unsigned)3, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1536UL), (13307200203520301951UL + 1537UL), (13307200203520301951UL + 1556UL),
                            &____alias_loc_id_13, (unsigned)1, (unsigned)0, (unsigned)0, (13307200203520301951UL + 1570UL),
                            "getNeighborBoxes", 0, "_Z16getNeighborBoxesP10LinkCellStiPi", "_Z20getNeighborBoxes_npmP10LinkCellStiPi", 0, 3, (13307200203520301951UL + 344UL), 0UL, (13307200203520301951UL + 346UL), 0UL, 2, "getTuple", 5, (13307200203520301951UL + 344UL), 0UL, (13307200203520301951UL + 260UL), (13307200203520301951UL + 261UL), (13307200203520301951UL + 262UL), 0UL, "getBoxFromTuple", 4, (13307200203520301951UL + 344UL), 0UL, 0UL, 0UL, 0UL,
                            "initLinkCells", 0, "_Z13initLinkCellsPK8DomainStd", "_Z17initLinkCells_npmPK8DomainStd", 0, 2, (13307200203520301951UL + 220UL), 0UL, (13307200203520301951UL + 19UL), 4, "__assert_fail", 4, (13307200203520301951UL + 1636UL), (13307200203520301951UL + 1637UL), 0UL, (13307200203520301951UL + 1638UL), 0UL, "malloc", 1, 0UL, (13307200203520301951UL + 19UL), "malloc", 1, 0UL, (13307200203520301951UL + 185UL), "__assert_fail", 4, (13307200203520301951UL + 1639UL), (13307200203520301951UL + 1637UL), 0UL, (13307200203520301951UL + 1638UL), 0UL,
                            "getBoxFromCoord", 1, (void *)(&getBoxFromCoord_npm), (void *)__null, 0, 2, (13307200203520301951UL + 1230UL), (13307200203520301951UL + 1231UL), 0UL, 4, "floor", 1, 0UL, 0UL, "floor", 1, 0UL, 0UL, "floor", 1, 0UL, 0UL, "getBoxFromTuple", 4, (13307200203520301951UL + 1230UL), 0UL, 0UL, 0UL, 0UL,
                            "getTuple", 1, (void *)(&getTuple_npm), (void *)__null, 0, 5, (13307200203520301951UL + 624UL), 0UL, (13307200203520301951UL + 626UL), (13307200203520301951UL + 627UL), (13307200203520301951UL + 628UL), 0UL, 0,
                            "copyAtom", 1, (void *)(&copyAtom_npm), (void *)__null, 0, 6, (13307200203520301951UL + 1455UL), (13307200203520301951UL + 1456UL), 0UL, 0UL, 0UL, 0UL, 0UL, 4, "memcpy", 3, (13307200203520301951UL + 1370UL), (13307200203520301951UL + 1370UL), 0UL, 0UL, "memcpy", 3, (13307200203520301951UL + 1370UL), (13307200203520301951UL + 1370UL), 0UL, 0UL, "memcpy", 3, (13307200203520301951UL + 1370UL), (13307200203520301951UL + 1370UL), 0UL, 0UL, "memcpy", 3, (13307200203520301951UL + 1370UL), (13307200203520301951UL + 1370UL), 0UL, 0UL,
                            "updateLinkCells", 0, "_Z15updateLinkCellsP10LinkCellStP7AtomsSt", "_Z19updateLinkCells_npmP10LinkCellStP7AtomsSt", 0, 2, (13307200203520301951UL + 1534UL), (13307200203520301951UL + 1535UL), 0UL, 3, "emptyHaloCells", 1, (13307200203520301951UL + 1534UL), 0UL, "getBoxFromCoord", 2, (13307200203520301951UL + 1534UL), (13307200203520301951UL + 1507UL), 0UL, "moveAtom", 5, (13307200203520301951UL + 1534UL), (13307200203520301951UL + 1535UL), 0UL, 0UL, 0UL, 0UL,
                            "emptyHaloCells", 1, (void *)(&emptyHaloCells_npm), (void *)__null, 0, 1, (13307200203520301951UL + 1565UL), 0UL, 0,
                            "maxOccupancy", 0, "_Z12maxOccupancyP10LinkCellSt", "_Z16maxOccupancy_npmP10LinkCellSt", 2, &____alias_loc_id_0, &____alias_loc_id_1, 1, (13307200203520301951UL + 1598UL), 0UL, 3, "profileStart", 1, 0UL, 0UL, "maxIntParallel", 3, (13307200203520301951UL + 1567UL), (13307200203520301951UL + 1569UL), 0UL, 0UL, "profileStop", 1, 0UL, 0UL,
                            "putAtomInBox", 0, "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z16putAtomInBox_npmP10LinkCellStP7AtomsStiidddddd", 0, 10, (13307200203520301951UL + 1053UL), (13307200203520301951UL + 1054UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 1, "getBoxFromCoord", 2, (13307200203520301951UL + 1053UL), (13307200203520301951UL + 909UL), 0UL,
                            "destroyLinkCells", 0, "_Z16destroyLinkCellsPP10LinkCellSt", "_Z20destroyLinkCells_npmPP10LinkCellSt", 0, 1, (13307200203520301951UL + 255UL), 0UL, 2, "free", 1, (13307200203520301951UL + 244UL), 0UL, "free", 1, (13307200203520301951UL + 237UL), 0UL,
                            "getBoxFromTuple", 0, "_Z15getBoxFromTupleP10LinkCellStiii", "_Z19getBoxFromTuple_npmP10LinkCellStiii", 0, 4, (13307200203520301951UL + 881UL), 0UL, 0UL, 0UL, 0UL, 2, "__assert_fail", 4, (13307200203520301951UL + 1640UL), (13307200203520301951UL + 1637UL), 0UL, (13307200203520301951UL + 1641UL), 0UL, "__assert_fail", 4, (13307200203520301951UL + 1642UL), (13307200203520301951UL + 1637UL), 0UL, (13307200203520301951UL + 1641UL), 0UL,
                            "moveAtom", 0, "_Z8moveAtomP10LinkCellStP7AtomsStiii", "_Z12moveAtom_npmP10LinkCellStP7AtomsStiii", 0, 5, (13307200203520301951UL + 1289UL), (13307200203520301951UL + 1330UL), 0UL, 0UL, 0UL, 0UL, 3, "copyAtom", 6, (13307200203520301951UL + 1289UL), (13307200203520301951UL + 1330UL), 0UL, 0UL, 0UL, 0UL, 0UL, "__assert_fail", 4, (13307200203520301951UL + 1643UL), (13307200203520301951UL + 1637UL), 0UL, (13307200203520301951UL + 1644UL), 0UL, "copyAtom", 6, (13307200203520301951UL + 1289UL), (13307200203520301951UL + 1330UL), 0UL, 0UL, 0UL, 0UL, 0UL,
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
                             (13307200203520301951UL + 1289UL), (13307200203520301951UL + 1291UL),
                             (13307200203520301951UL + 629UL), (13307200203520301951UL + 881UL),
                             (13307200203520301951UL + 1565UL), (13307200203520301951UL + 1556UL),
                             (13307200203520301951UL + 259UL), (13307200203520301951UL + 346UL),
                             (13307200203520301951UL + 237UL), (13307200203520301951UL + 244UL),
                             (13307200203520301951UL + 257UL), (13307200203520301951UL + 344UL),
                             (13307200203520301951UL + 255UL), (13307200203520301951UL + 237UL),
                             (13307200203520301951UL + 1053UL), (13307200203520301951UL + 955UL),
                             (13307200203520301951UL + 1054UL), (13307200203520301951UL + 987UL),
                             (13307200203520301951UL + 1535UL), (13307200203520301951UL + 1507UL),
                             (13307200203520301951UL + 1456UL), (13307200203520301951UL + 1370UL),
                             (13307200203520301951UL + 1UL), (13307200203520301951UL + 220UL),
                             (13307200203520301951UL + 3UL), (13307200203520301951UL + 19UL),
                             (13307200203520301951UL + 347UL), (13307200203520301951UL + 624UL),
                             (13307200203520301951UL + 6UL), (13307200203520301951UL + 19UL),
                             (13307200203520301951UL + 1461UL), (13307200203520301951UL + 1534UL),
                             (13307200203520301951UL + 349UL), (13307200203520301951UL + 626UL),
                             (13307200203520301951UL + 1566UL), (13307200203520301951UL + 1598UL),
                             (13307200203520301951UL + 1462UL), (13307200203520301951UL + 1535UL),
                             (13307200203520301951UL + 634UL), (13307200203520301951UL + 881UL),
                             (13307200203520301951UL + 1232UL), (13307200203520301951UL + 1289UL),
                             (13307200203520301951UL + 1233UL), (13307200203520301951UL + 1330UL),
                             (13307200203520301951UL + 1335UL), (13307200203520301951UL + 1456UL),
                             (13307200203520301951UL + 899UL), (13307200203520301951UL + 1053UL),
                             (13307200203520301951UL + 229UL), (13307200203520301951UL + 255UL),
                             (13307200203520301951UL + 1334UL), (13307200203520301951UL + 1455UL),
                             (13307200203520301951UL + 1598UL), (13307200203520301951UL + 1600UL),
                             (13307200203520301951UL + 900UL), (13307200203520301951UL + 1054UL),
                             (13307200203520301951UL + 19UL), (13307200203520301951UL + 185UL),
                             (13307200203520301951UL + 1063UL), (13307200203520301951UL + 1230UL),
                             (13307200203520301951UL + 1065UL), (13307200203520301951UL + 1230UL),
                             (13307200203520301951UL + 1064UL), (13307200203520301951UL + 1231UL),
                             (13307200203520301951UL + 1067UL), (13307200203520301951UL + 1230UL),
                             (13307200203520301951UL + 1066UL), (13307200203520301951UL + 1230UL),
                             (13307200203520301951UL + 1536UL), (13307200203520301951UL + 1565UL),
                             (13307200203520301951UL + 355UL), (13307200203520301951UL + 624UL),
                             (13307200203520301951UL + 1534UL), (13307200203520301951UL + 1494UL),
                             (13307200203520301951UL + 351UL), (13307200203520301951UL + 628UL),
                             (13307200203520301951UL + 350UL), (13307200203520301951UL + 627UL),
                     "AtomsSt", 448UL, 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U),
                     "DomainSt", 1344UL, 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent),
                     "LinkCellSt", 1024UL, 9, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms),
                     "TimerHandle", 32UL, 0,
                             "getNeighborBoxes", "_Z16getNeighborBoxesP10LinkCellStiPi", 0, 2, "getTuple", "getBoxFromTuple",
                             "initLinkCells", "_Z13initLinkCellsPK8DomainStd", 0, 0,
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
        "getTuple", 0UL, (int)5, 13307200203520302295UL, 0UL, 13307200203520302211UL, 13307200203520302212UL, 13307200203520302213UL,
        "getBoxFromTuple", 0UL, (int)4, 13307200203520302295UL, 0UL, 0UL, 0UL,
        "getBoxFromCoord", 0UL, (int)2, 13307200203520303004UL, 13307200203520302860UL,
        "copyAtom", 0UL, (int)6, 13307200203520303240UL, 13307200203520303281UL, 0UL, 0UL, 0UL, 0UL,
        "copyAtom", 0UL, (int)6, 13307200203520303240UL, 13307200203520303281UL, 0UL, 0UL, 0UL, 0UL,
        "emptyHaloCells", 0UL, (int)1, 13307200203520303485UL,
        "getBoxFromCoord", 0UL, (int)2, 13307200203520303485UL, 13307200203520303458UL,
        "moveAtom", 0UL, (int)5, 13307200203520303485UL, 13307200203520303486UL, 0UL, 0UL, 0UL,
        "getBoxFromTuple", 0UL, (int)4, 13307200203520303181UL, 0UL, 0UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
