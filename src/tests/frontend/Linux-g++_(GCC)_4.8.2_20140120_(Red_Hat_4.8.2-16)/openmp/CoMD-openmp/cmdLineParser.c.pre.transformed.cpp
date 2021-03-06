# 1 "cmdLineParser.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "cmdLineParser.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_myOptionAlloc_npm = 1;
static int ____chimes_does_checkpoint_myOptionFree_npm = 1;
static int ____chimes_does_checkpoint_freeArgs_npm = 1;
static int ____chimes_does_checkpoint_lastOption_npm = 1;
static int ____chimes_does_checkpoint_dupString_npm = 1;
static int ____chimes_does_checkpoint_addArg_npm = 1;
static int ____chimes_does_checkpoint_processArgs_npm = 1;
static int ____chimes_does_checkpoint_findOption_npm = 1;
static int ____chimes_does_checkpoint_printArgs_npm = 1;


static int ____must_manage_myOptionAlloc = 2;
static int ____must_manage_myOptionFree = 2;
static int ____must_manage_freeArgs = 2;
static int ____must_manage_lastOption = 2;
static int ____must_manage_addArg = 2;
static int ____must_manage_dupString = 2;
static int ____must_manage_processArgs = 2;
static int ____must_manage_findOption = 2;
static int ____must_manage_printArgs = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
static unsigned ____alias_loc_id_8;
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
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
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 10 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 1 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.h" 1
# 28 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.h"
int addArg(const char *longOption, const char shortOption,
           int has_arg, const char type, void *dataPtr, int dataSize,
           const char *help);


void processArgs(int argc, char **argv);


void printArgs(void);

void freeArgs(void);
# 11 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c" 2
# 11 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"

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
# 13 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
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
# 33 "/usr/include/libio.h" 2 3 4
# 50 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 51 "/usr/include/libio.h" 2 3 4
# 145 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 155 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 178 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 246 "/usr/include/libio.h" 3 4
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
# 294 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 303 "/usr/include/libio.h" 3 4
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
# 339 "/usr/include/libio.h" 3 4
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
# 435 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 527 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
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






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 873 "/usr/include/stdio.h" 3 4
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
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 35 "/usr/include/bits/stdio.h" 3 4
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
# 935 "/usr/include/stdio.h" 2 3 4
# 943 "/usr/include/stdio.h" 3 4
}
# 14 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c" 2
# 1 "/usr/include/getopt.h" 1 3 4
# 49 "/usr/include/getopt.h" 3 4
extern "C" {
# 58 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 72 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 105 "/usr/include/getopt.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
# 151 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 174 "/usr/include/getopt.h" 3 4
extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       throw ();
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       throw ();




}
# 15 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
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
# 101 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 125 "/usr/include/string.h" 3 4
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
# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/string.h" 3 4



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
# 268 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 281 "/usr/include/string.h" 3 4
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
# 378 "/usr/include/string.h" 3 4
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
# 434 "/usr/include/string.h" 3 4
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
# 642 "/usr/include/string.h" 3 4
}
# 16 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c" 2
# 16 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"

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
# 18 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c" 2
# 18 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 19 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 20 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 21 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
typedef struct MyOptionSt
# 22 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 23 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char* help;
# 24 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char* longArg;
# 25 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   unsigned char shortArg[2];
# 26 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int argFlag;
# 27 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char type;
# 28 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int sz;
# 29 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   void* ptr;
# 30 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   void* next;
# 31 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
} MyOption;
# 32 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 33 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static int longest = 1;
# 34 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myargs=__null;
# 35 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 36 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static char* dupString_npm(const char* s);
static char* dupString_quick(const char* s); static char* dupString(const char* s);
static char* dupString_resumable(const char* s)
# 37 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&dupString), "dupString", &____must_manage_dupString, 1, 0, (size_t)(4461972309412152495UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 38 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char *d; ;
# 39 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! s) {s = ""; };
# 40 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   d = (char*) ({ void *____chimes_tmp_ptr = calloc(((strlen(s) + 1)) + ((sizeof(void *) + sizeof(char) - 1) / sizeof(char)), sizeof(char)); ; calloc_helper(____chimes_tmp_ptr, (strlen(s)+1), sizeof(char), 4461972309412152485UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 41 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   strcpy(d, s);
# 42 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    char *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (d); rm_stack(true, 4461972309412152485UL, "dupString", &____must_manage_dupString, ____alias_loc_id_8, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 43 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152485UL, "dupString", &____must_manage_dupString, ____alias_loc_id_8, ____chimes_did_disable0, false); }
# 44 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 45 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myOptionAlloc_npm( const char* longOption, const char shortOption, int has_arg, const char type, void* dataPtr, int dataSize, const char* help);
static MyOption* myOptionAlloc_quick( const char* longOption, const char shortOption, int has_arg, const char type, void* dataPtr, int dataSize, const char* help); static MyOption* myOptionAlloc( const char* longOption, const char shortOption, int has_arg, const char type, void* dataPtr, int dataSize, const char* help);
static MyOption* myOptionAlloc_resumable(
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   const char* longOption, const char shortOption,
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int has_arg, const char type, void* dataPtr, int dataSize, const char* help)
# 48 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&myOptionAlloc), "myOptionAlloc", &____must_manage_myOptionAlloc, 7, 0, (size_t)(4461972309412152005UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(4461972309412151949UL), (size_t)(0UL), (size_t)(4461972309412152023UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 49 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    static int iBase; iBase = (129) ;
# 50 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *o; o = ((MyOption*) ({ void *____chimes_tmp_ptr = calloc((1) + ((sizeof(void *) + sizeof(MyOption) - 1) / sizeof(MyOption)), sizeof(MyOption)); calloc_helper(____chimes_tmp_ptr, 1, sizeof(MyOption), 4461972309412151945UL, 0, 1, (int)sizeof(struct MyOptionSt), 4, (int)__builtin_offsetof(struct MyOptionSt, help), (int)__builtin_offsetof(struct MyOptionSt, longArg), (int)__builtin_offsetof(struct MyOptionSt, ptr), (int)__builtin_offsetof(struct MyOptionSt, next)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 51 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    call_lbl_0: o->help = ({ calling_npm("dupString", 0); dupString_npm(help); });
# 52 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    call_lbl_1: o->longArg = ({ calling_npm("dupString", 0); dupString_npm(longOption); });
# 53 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (shortOption) {o->shortArg[0] = (unsigned char)shortOption; } else {{
# 56 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o->shortArg[0] = iBase;
# 57 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      iBase++;
# 58 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }; }
# 59 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->argFlag = has_arg;
# 60 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->type = type;
# 61 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->ptr = dataPtr;
# 62 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->sz = dataSize;
# 63 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (longOption) {longest = (longest>strlen(longOption)?longest:strlen(longOption)); };
# 64 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (o); rm_stack(true, 4461972309412151945UL, "myOptionAlloc", &____must_manage_myOptionAlloc, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 65 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412151945UL, "myOptionAlloc", &____must_manage_myOptionAlloc, ____alias_loc_id_1, ____chimes_did_disable1, false); }
# 66 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 67 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myOptionFree_npm(MyOption* o);
static MyOption* myOptionFree_quick(MyOption* o); static MyOption* myOptionFree(MyOption* o);
static MyOption* myOptionFree_resumable(MyOption* o)
# 68 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&myOptionFree), "myOptionFree", &____must_manage_myOptionFree, 1, 0, (size_t)(4461972309412152122UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 69 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *r; ;
# 70 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (!o) { MyOption *____chimes_ret_var_2; ; ____chimes_ret_var_2 = (__null); rm_stack(true, 4461972309412152088UL, "myOptionFree", &____must_manage_myOptionFree, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; };
# 71 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   r = ((MyOption*) o->next);
# 72 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (o->longArg) { ({ free_helper((((unsigned char *)o->longArg) - sizeof(void *)), 4461972309412152088UL);free((((unsigned char *)o->longArg) - sizeof(void *))); }) ; };
# 73 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (o->help) { ({ free_helper((((unsigned char *)o->help) - sizeof(void *)), 4461972309412152088UL);free((((unsigned char *)o->help) - sizeof(void *))); }) ; };
# 74 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)o) - sizeof(void *)), 4461972309412152122UL);free((((unsigned char *)o) - sizeof(void *))); }) ;
# 75 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_3; ; ____chimes_ret_var_3 = (r); rm_stack(true, 4461972309412152088UL, "myOptionFree", &____must_manage_myOptionFree, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ;
# 76 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152088UL, "myOptionFree", &____must_manage_myOptionFree, ____alias_loc_id_4, ____chimes_did_disable2, false); }
# 77 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 78 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* lastOption_npm(MyOption* o);
static MyOption* lastOption_quick(MyOption* o); static MyOption* lastOption(MyOption* o);
static MyOption* lastOption_resumable(MyOption* o)
# 79 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&lastOption), "lastOption", &____must_manage_lastOption, 1, 0, (size_t)(4461972309412152060UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 80 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! o) { MyOption *____chimes_ret_var_4; ; ____chimes_ret_var_4 = (o); rm_stack(true, 4461972309412152060UL, "lastOption", &____must_manage_lastOption, ____alias_loc_id_2, ____chimes_did_disable3, false); return ____chimes_ret_var_4; ; };
# 81 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(((MyOption*) o->next)) o = ((MyOption*) o->next);
# 82 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_5; ; ____chimes_ret_var_5 = (o); rm_stack(true, 4461972309412152060UL, "lastOption", &____must_manage_lastOption, ____alias_loc_id_2, ____chimes_did_disable3, false); return ____chimes_ret_var_5; ;
# 83 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152060UL, "lastOption", &____must_manage_lastOption, ____alias_loc_id_2, ____chimes_did_disable3, false); }
# 84 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 85 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* findOption_npm(MyOption* o, unsigned char shortArg);
static MyOption* findOption_quick(MyOption* o, unsigned char shortArg); static MyOption* findOption(MyOption* o, unsigned char shortArg);
static MyOption* findOption_resumable(MyOption* o, unsigned char shortArg)
# 86 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&findOption), "findOption", &____must_manage_findOption, 2, 0, (size_t)(4461972309412152463UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 87 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 88 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 89 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->shortArg[0] == shortArg) { MyOption *____chimes_ret_var_6; ; ____chimes_ret_var_6 = (o); rm_stack(true, 4461972309412152463UL, "findOption", &____must_manage_findOption, ____alias_loc_id_7, ____chimes_did_disable4, false); return ____chimes_ret_var_6; ; };
# 90 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 91 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 92 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_7; ; ____chimes_ret_var_7 = (o); rm_stack(true, 4461972309412152463UL, "findOption", &____must_manage_findOption, ____alias_loc_id_7, ____chimes_did_disable4, false); return ____chimes_ret_var_7; ;
# 93 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152463UL, "findOption", &____must_manage_findOption, ____alias_loc_id_7, ____chimes_did_disable4, false); }
# 94 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 95 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 96 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
int addArg_npm(const char* longOption, const char shortOption, int has_arg, const char type, void* dataPtr, int dataSize, const char* help);
int addArg_quick(const char* longOption, const char shortOption, int has_arg, const char type, void* dataPtr, int dataSize, const char* help); int addArg(const char* longOption, const char shortOption, int has_arg, const char type, void* dataPtr, int dataSize, const char* help);
int addArg_resumable(const char* longOption, const char shortOption,
# 97 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           int has_arg, const char type, void* dataPtr, int dataSize,
# 98 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           const char* help)
# 99 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&addArg), "addArg", &____must_manage_addArg, 7, 0, (size_t)(4461972309412151912UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(4461972309412151916UL), (size_t)(0UL), (size_t)(4461972309412151918UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 100 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *o; ;
# 101 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *p; ;
# 102 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    call_lbl_0: o = ({ calling_npm("myOptionAlloc", 0); myOptionAlloc_npm(longOption, shortOption, has_arg, type, dataPtr, dataSize, help); });
# 103 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! o) { int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (1); rm_stack(false, 0UL, "addArg", &____must_manage_addArg, ____alias_loc_id_0, ____chimes_did_disable5, false); return ____chimes_ret_var_8; ; };
# 104 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! myargs) {myargs = o; } else {{
# 107 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       call_lbl_1: p = ({ calling_npm("lastOption", 0); lastOption_npm(myargs); });
# 108 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      p->next = (void *)o;
# 109 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }; }
# 110 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = (0); rm_stack(false, 0UL, "addArg", &____must_manage_addArg, ____alias_loc_id_0, ____chimes_did_disable5, false); return ____chimes_ret_var_9; ;
# 111 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(false, 0UL, "addArg", &____must_manage_addArg, ____alias_loc_id_0, ____chimes_did_disable5, false); }
# 112 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 113 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 114 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void freeArgs_npm();
void freeArgs_quick(); void freeArgs();
void freeArgs_resumable()
# 115 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&freeArgs), "freeArgs", &____must_manage_freeArgs, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 116 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(myargs)
# 117 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 118 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       call_lbl_0: myargs = ({ calling_npm("myOptionFree", 0); myOptionFree_npm(myargs); });
# 119 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 120 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   rm_stack(false, 0UL, "freeArgs", &____must_manage_freeArgs, ____alias_loc_id_3, ____chimes_did_disable6, false); return;
# 121 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 122 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 123 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void printArgs_npm();
void printArgs_quick(); void printArgs();
void printArgs_resumable()
# 124 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&printArgs), "printArgs", &____must_manage_printArgs, 0, 0) ; char s[4096];
# 124 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
 if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 125 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *o; o = (myargs) ;
# 126 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ;
# 127 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   unsigned char *shortArg; ;
# 128 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   fprintf(stdout,"\n"
# 129 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      "  Arguments are: \n");
# 130 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   sprintf(s,"   --%%-%ds",longest);
# 131 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 132 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 133 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->shortArg[0]<0xFF) {shortArg = o->shortArg; } else {shortArg = (unsigned char *) "---"; } ;
# 135 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      fprintf(stdout,s,o->longArg);
# 136 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      fprintf(stdout," -%c  arg=%1d type=%c  %s\n",shortArg[0],o->argFlag,o->type,o->help);
# 137 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 138 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 139 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 140 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   fprintf(stdout,"\n\n");
# 141 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   rm_stack(false, 0UL, "printArgs", &____must_manage_printArgs, ____alias_loc_id_5, ____chimes_did_disable7, false); return;
# 142 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 143 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 144 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void processArgs_npm(int argc, char** argv);
void processArgs_quick(int argc, char** argv); void processArgs(int argc, char** argv);
void processArgs_resumable(int argc, char** argv)
# 145 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&processArgs), "processArgs", &____must_manage_processArgs, 2, 0, (size_t)(0UL), (size_t)(4461972309412152411UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 146 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *o; ;
# 147 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    int n; n = (0) ;
# 148 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int i; ;
# 149 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   struct option *opts; ;
# 150 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char *sArgs; ;
# 151 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int c; ;
# 152 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 153 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! myargs) {rm_stack(false, 0UL, "processArgs", &____must_manage_processArgs, ____alias_loc_id_6, ____chimes_did_disable8, false); return; };
# 154 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myargs;
# 155 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 156 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {n++,o=((MyOption*) o->next);}
# 157 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 158 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myargs;
# 159 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   sArgs= (char*) ({ void *____chimes_tmp_ptr = calloc((2 * (n + 2)) + ((sizeof(void *) + sizeof(char) - 1) / sizeof(char)), sizeof(char)); ; calloc_helper(____chimes_tmp_ptr, 2*(n+2), sizeof(char), 4461972309412152283UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 160 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   opts = (struct option*) ({ void *____chimes_tmp_ptr = calloc((n) + ((sizeof(void *) + sizeof(struct option) - 1) / sizeof(struct option)), sizeof(struct option)); ; calloc_helper(____chimes_tmp_ptr, n, sizeof(struct option), 4461972309412152253UL, 0, 1, (int)sizeof(struct option), 2, (int)__builtin_offsetof(struct option, name), (int)__builtin_offsetof(struct option, flag)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 161 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   for (i=0; i<n; i++)
# 162 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 163 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].name = o->longArg;
# 164 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].has_arg = o->argFlag;
# 165 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].flag = 0;
# 166 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].val = o->shortArg[0];
# 167 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 168 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      strcat(sArgs,(char*) o->shortArg);
# 169 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->argFlag) {strcat(sArgs,":"); };
# 170 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 171 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 172 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 173 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(1)
# 174 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 175 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 176 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       int option_index; option_index = (0) ;
# 177 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 178 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      c = getopt_long (argc, argv, sArgs, opts, &option_index);
# 179 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (c == -1) {break; };
# 180 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       call_lbl_0: o = ({ calling_npm("findOption", 0); findOption_npm(myargs, c); });
# 181 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if ( ! o )
# 182 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 183 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         fprintf(stdout,"\n\n"
# 184 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            "    invalid switch : -%c in getopt()\n"
# 185 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            "\n\n",
# 186 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            c);
# 187 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         break;
# 188 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 189 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if(! o->argFlag)
# 190 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 191 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
          int *i; i = ((int*)o->ptr) ;
# 192 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         *i = 1;
# 193 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 194 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      else
# 195 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 196 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         switch(o->type)
# 197 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         {
# 198 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'i':
# 199 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%d",(int*)o->ptr);
# 200 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 201 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'f':
# 202 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%f",(float*)o->ptr);
# 203 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 204 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'd':
# 205 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%lf",(double*)o->ptr);
# 206 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 207 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 's':
# 208 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               strncpy((char*)o->ptr,(char*)optarg,o->sz);
# 209 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               ((char*)o->ptr)[o->sz-1] = '\0';
# 210 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 211 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'c':
# 212 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%c",(char*)o->ptr);
# 213 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 214 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            default:
# 215 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               fprintf(stdout,"\n\n"
# 216 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "    invalid type : %c in getopt()\n"
# 217 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "    valid values are 'e', 'z'. 'i','d','f','s', and 'c'\n"
# 218 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "\n\n",
# 219 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  c);
# 220 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         }
# 221 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 222 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 223 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 224 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)opts) - sizeof(void *)), 4461972309412152253UL);free((((unsigned char *)opts) - sizeof(void *))); }) ;
# 225 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)sArgs) - sizeof(void *)), 4461972309412152283UL);free((((unsigned char *)sArgs) - sizeof(void *))); }) ;
# 226 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 227 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   rm_stack(false, 0UL, "processArgs", &____must_manage_processArgs, ____alias_loc_id_6, ____chimes_did_disable8, false); return;
# 228 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 36 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static char* dupString_quick(const char* s)
# 37 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&dupString), "dupString", &____must_manage_dupString, 1, 0, (size_t)(4461972309412152495UL)) ; ; ;
# 38 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char *d; ;
# 39 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! s) {s = ""; };
# 40 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   d = (char*) ({ void *____chimes_tmp_ptr = calloc(((strlen(s) + 1)) + ((sizeof(void *) + sizeof(char) - 1) / sizeof(char)), sizeof(char)); ; calloc_helper(____chimes_tmp_ptr, (strlen(s)+1), sizeof(char), 4461972309412152485UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 41 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   strcpy(d, s);
# 42 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    char *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (d); rm_stack(true, 4461972309412152485UL, "dupString", &____must_manage_dupString, ____alias_loc_id_8, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 43 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152485UL, "dupString", &____must_manage_dupString, ____alias_loc_id_8, ____chimes_did_disable0, false); }

static char* dupString(const char* s) { return (____chimes_replaying ? dupString_resumable(s) : dupString_quick(s)); }
# 45 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myOptionAlloc_quick(
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   const char* longOption, const char shortOption,
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int has_arg, const char type, void* dataPtr, int dataSize, const char* help)
# 48 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&myOptionAlloc), "myOptionAlloc", &____must_manage_myOptionAlloc, 7, 0, (size_t)(4461972309412152005UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(4461972309412151949UL), (size_t)(0UL), (size_t)(4461972309412152023UL)) ; ; ;
# 49 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    static int iBase; iBase = (129) ;
# 50 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *o; o = ((MyOption*) ({ void *____chimes_tmp_ptr = calloc((1) + ((sizeof(void *) + sizeof(MyOption) - 1) / sizeof(MyOption)), sizeof(MyOption)); calloc_helper(____chimes_tmp_ptr, 1, sizeof(MyOption), 4461972309412151945UL, 0, 1, (int)sizeof(struct MyOptionSt), 4, (int)__builtin_offsetof(struct MyOptionSt, help), (int)__builtin_offsetof(struct MyOptionSt, longArg), (int)__builtin_offsetof(struct MyOptionSt, ptr), (int)__builtin_offsetof(struct MyOptionSt, next)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 51 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    call_lbl_0: o->help = ({ calling_npm("dupString", 0); dupString_npm(help); });
# 52 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    call_lbl_1: o->longArg = ({ calling_npm("dupString", 0); dupString_npm(longOption); });
# 53 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (shortOption) {o->shortArg[0] = (unsigned char)shortOption; } else {{
# 56 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o->shortArg[0] = iBase;
# 57 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      iBase++;
# 58 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }; }
# 59 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->argFlag = has_arg;
# 60 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->type = type;
# 61 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->ptr = dataPtr;
# 62 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->sz = dataSize;
# 63 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (longOption) {longest = (longest>strlen(longOption)?longest:strlen(longOption)); };
# 64 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (o); rm_stack(true, 4461972309412151945UL, "myOptionAlloc", &____must_manage_myOptionAlloc, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 65 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412151945UL, "myOptionAlloc", &____must_manage_myOptionAlloc, ____alias_loc_id_1, ____chimes_did_disable1, false); }

static MyOption* myOptionAlloc(
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   const char* longOption, const char shortOption,
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int has_arg, const char type, void* dataPtr, int dataSize, const char* help) { return (____chimes_replaying ? myOptionAlloc_resumable(longOption, shortOption, has_arg, type, dataPtr, dataSize, help) : myOptionAlloc_quick(longOption, shortOption, has_arg, type, dataPtr, dataSize, help)); }
# 67 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myOptionFree_quick(MyOption* o)
# 68 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&myOptionFree), "myOptionFree", &____must_manage_myOptionFree, 1, 0, (size_t)(4461972309412152122UL)) ; ; ;
# 69 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *r; ;
# 70 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (!o) { MyOption *____chimes_ret_var_2; ; ____chimes_ret_var_2 = (__null); rm_stack(true, 4461972309412152088UL, "myOptionFree", &____must_manage_myOptionFree, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ; };
# 71 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   r = ((MyOption*) o->next);
# 72 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (o->longArg) { ({ free_helper((((unsigned char *)o->longArg) - sizeof(void *)), 4461972309412152088UL);free((((unsigned char *)o->longArg) - sizeof(void *))); }) ; };
# 73 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (o->help) { ({ free_helper((((unsigned char *)o->help) - sizeof(void *)), 4461972309412152088UL);free((((unsigned char *)o->help) - sizeof(void *))); }) ; };
# 74 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)o) - sizeof(void *)), 4461972309412152122UL);free((((unsigned char *)o) - sizeof(void *))); }) ;
# 75 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_3; ; ____chimes_ret_var_3 = (r); rm_stack(true, 4461972309412152088UL, "myOptionFree", &____must_manage_myOptionFree, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_3; ;
# 76 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152088UL, "myOptionFree", &____must_manage_myOptionFree, ____alias_loc_id_4, ____chimes_did_disable2, false); }

static MyOption* myOptionFree(MyOption* o) { return (____chimes_replaying ? myOptionFree_resumable(o) : myOptionFree_quick(o)); }
# 78 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* lastOption_quick(MyOption* o)
# 79 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&lastOption), "lastOption", &____must_manage_lastOption, 1, 0, (size_t)(4461972309412152060UL)) ; ; ;
# 80 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! o) { MyOption *____chimes_ret_var_4; ; ____chimes_ret_var_4 = (o); rm_stack(true, 4461972309412152060UL, "lastOption", &____must_manage_lastOption, ____alias_loc_id_2, ____chimes_did_disable3, false); return ____chimes_ret_var_4; ; };
# 81 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(((MyOption*) o->next)) o = ((MyOption*) o->next);
# 82 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_5; ; ____chimes_ret_var_5 = (o); rm_stack(true, 4461972309412152060UL, "lastOption", &____must_manage_lastOption, ____alias_loc_id_2, ____chimes_did_disable3, false); return ____chimes_ret_var_5; ;
# 83 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152060UL, "lastOption", &____must_manage_lastOption, ____alias_loc_id_2, ____chimes_did_disable3, false); }

static MyOption* lastOption(MyOption* o) { return (____chimes_replaying ? lastOption_resumable(o) : lastOption_quick(o)); }
# 85 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* findOption_quick(MyOption* o, unsigned char shortArg)
# 86 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&findOption), "findOption", &____must_manage_findOption, 2, 0, (size_t)(4461972309412152463UL), (size_t)(0UL)) ; ; ;
# 87 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 88 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 89 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->shortArg[0] == shortArg) { MyOption *____chimes_ret_var_6; ; ____chimes_ret_var_6 = (o); rm_stack(true, 4461972309412152463UL, "findOption", &____must_manage_findOption, ____alias_loc_id_7, ____chimes_did_disable4, false); return ____chimes_ret_var_6; ; };
# 90 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 91 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 92 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *____chimes_ret_var_7; ; ____chimes_ret_var_7 = (o); rm_stack(true, 4461972309412152463UL, "findOption", &____must_manage_findOption, ____alias_loc_id_7, ____chimes_did_disable4, false); return ____chimes_ret_var_7; ;
# 93 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(true, 4461972309412152463UL, "findOption", &____must_manage_findOption, ____alias_loc_id_7, ____chimes_did_disable4, false); }

static MyOption* findOption(MyOption* o, unsigned char shortArg) { return (____chimes_replaying ? findOption_resumable(o, shortArg) : findOption_quick(o, shortArg)); }
# 96 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
int addArg_quick(const char* longOption, const char shortOption,
# 97 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           int has_arg, const char type, void* dataPtr, int dataSize,
# 98 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           const char* help)
# 99 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&addArg), "addArg", &____must_manage_addArg, 7, 0, (size_t)(4461972309412151912UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(4461972309412151916UL), (size_t)(0UL), (size_t)(4461972309412151918UL)) ; ; ;
# 100 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *o; ;
# 101 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *p; ;
# 102 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    call_lbl_0: o = ({ calling_npm("myOptionAlloc", 0); myOptionAlloc_npm(longOption, shortOption, has_arg, type, dataPtr, dataSize, help); });
# 103 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! o) { int ____chimes_ret_var_8; ; ____chimes_ret_var_8 = (1); rm_stack(false, 0UL, "addArg", &____must_manage_addArg, ____alias_loc_id_0, ____chimes_did_disable5, false); return ____chimes_ret_var_8; ; };
# 104 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! myargs) {myargs = o; } else {{
# 107 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       call_lbl_1: p = ({ calling_npm("lastOption", 0); lastOption_npm(myargs); });
# 108 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      p->next = (void *)o;
# 109 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }; }
# 110 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    int ____chimes_ret_var_9; ; ____chimes_ret_var_9 = (0); rm_stack(false, 0UL, "addArg", &____must_manage_addArg, ____alias_loc_id_0, ____chimes_did_disable5, false); return ____chimes_ret_var_9; ;
# 111 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
rm_stack(false, 0UL, "addArg", &____must_manage_addArg, ____alias_loc_id_0, ____chimes_did_disable5, false); }

int addArg(const char* longOption, const char shortOption,
# 97 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           int has_arg, const char type, void* dataPtr, int dataSize,
# 98 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           const char* help) { return (____chimes_replaying ? addArg_resumable(longOption, shortOption, has_arg, type, dataPtr, dataSize, help) : addArg_quick(longOption, shortOption, has_arg, type, dataPtr, dataSize, help)); }
# 114 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void freeArgs_quick()
# 115 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&freeArgs), "freeArgs", &____must_manage_freeArgs, 0, 0) ; ; ;
# 116 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(myargs)
# 117 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 118 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       call_lbl_0: myargs = ({ calling_npm("myOptionFree", 0); myOptionFree_npm(myargs); });
# 119 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 120 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   rm_stack(false, 0UL, "freeArgs", &____must_manage_freeArgs, ____alias_loc_id_3, ____chimes_did_disable6, false); return;
# 121 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}

void freeArgs() { (____chimes_replaying ? freeArgs_resumable() : freeArgs_quick()); }
# 123 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void printArgs_quick()
# 124 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&printArgs), "printArgs", &____must_manage_printArgs, 0, 0) ; char s[4096];
# 124 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
 ; ;
# 125 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption *o; o = (myargs) ;
# 126 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ;
# 127 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   unsigned char *shortArg; ;
# 128 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   fprintf(stdout,"\n"
# 129 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      "  Arguments are: \n");
# 130 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   sprintf(s,"   --%%-%ds",longest);
# 131 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 132 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 133 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->shortArg[0]<0xFF) {shortArg = o->shortArg; } else {shortArg = (unsigned char *) "---"; } ;
# 135 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      fprintf(stdout,s,o->longArg);
# 136 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      fprintf(stdout," -%c  arg=%1d type=%c  %s\n",shortArg[0],o->argFlag,o->type,o->help);
# 137 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 138 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 139 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 140 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   fprintf(stdout,"\n\n");
# 141 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   rm_stack(false, 0UL, "printArgs", &____must_manage_printArgs, ____alias_loc_id_5, ____chimes_did_disable7, false); return;
# 142 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}

void printArgs() { (____chimes_replaying ? printArgs_resumable() : printArgs_quick()); }
# 144 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void processArgs_quick(int argc, char** argv)
# 145 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&processArgs), "processArgs", &____must_manage_processArgs, 2, 0, (size_t)(0UL), (size_t)(4461972309412152411UL)) ; ; ;
# 146 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption *o; ;
# 147 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    int n; n = (0) ;
# 148 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int i; ;
# 149 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   struct option *opts; ;
# 150 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char *sArgs; ;
# 151 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int c; ;
# 152 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 153 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! myargs) {rm_stack(false, 0UL, "processArgs", &____must_manage_processArgs, ____alias_loc_id_6, ____chimes_did_disable8, false); return; };
# 154 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myargs;
# 155 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 156 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {n++,o=((MyOption*) o->next);}
# 157 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 158 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myargs;
# 159 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   sArgs= (char*) ({ void *____chimes_tmp_ptr = calloc((2 * (n + 2)) + ((sizeof(void *) + sizeof(char) - 1) / sizeof(char)), sizeof(char)); ; calloc_helper(____chimes_tmp_ptr, 2*(n+2), sizeof(char), 4461972309412152283UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 160 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   opts = (struct option*) ({ void *____chimes_tmp_ptr = calloc((n) + ((sizeof(void *) + sizeof(struct option) - 1) / sizeof(struct option)), sizeof(struct option)); ; calloc_helper(____chimes_tmp_ptr, n, sizeof(struct option), 4461972309412152253UL, 0, 1, (int)sizeof(struct option), 2, (int)__builtin_offsetof(struct option, name), (int)__builtin_offsetof(struct option, flag)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 161 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   for (i=0; i<n; i++)
# 162 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 163 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].name = o->longArg;
# 164 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].has_arg = o->argFlag;
# 165 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].flag = 0;
# 166 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].val = o->shortArg[0];
# 167 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 168 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      strcat(sArgs,(char*) o->shortArg);
# 169 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->argFlag) {strcat(sArgs,":"); };
# 170 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 171 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 172 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 173 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(1)
# 174 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 175 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 176 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       int option_index; option_index = (0) ;
# 177 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 178 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      c = getopt_long (argc, argv, sArgs, opts, &option_index);
# 179 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (c == -1) {break; };
# 180 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
       call_lbl_0: o = ({ calling_npm("findOption", 0); findOption_npm(myargs, c); });
# 181 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if ( ! o )
# 182 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 183 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         fprintf(stdout,"\n\n"
# 184 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            "    invalid switch : -%c in getopt()\n"
# 185 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            "\n\n",
# 186 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            c);
# 187 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         break;
# 188 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 189 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if(! o->argFlag)
# 190 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 191 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
          int *i; i = ((int*)o->ptr) ;
# 192 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         *i = 1;
# 193 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 194 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      else
# 195 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 196 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         switch(o->type)
# 197 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         {
# 198 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'i':
# 199 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%d",(int*)o->ptr);
# 200 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 201 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'f':
# 202 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%f",(float*)o->ptr);
# 203 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 204 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'd':
# 205 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%lf",(double*)o->ptr);
# 206 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 207 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 's':
# 208 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               strncpy((char*)o->ptr,(char*)optarg,o->sz);
# 209 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               ((char*)o->ptr)[o->sz-1] = '\0';
# 210 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 211 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'c':
# 212 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%c",(char*)o->ptr);
# 213 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 214 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            default:
# 215 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               fprintf(stdout,"\n\n"
# 216 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "    invalid type : %c in getopt()\n"
# 217 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "    valid values are 'e', 'z'. 'i','d','f','s', and 'c'\n"
# 218 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "\n\n",
# 219 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  c);
# 220 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         }
# 221 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 222 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 223 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 224 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)opts) - sizeof(void *)), 4461972309412152253UL);free((((unsigned char *)opts) - sizeof(void *))); }) ;
# 225 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)sArgs) - sizeof(void *)), 4461972309412152283UL);free((((unsigned char *)sArgs) - sizeof(void *))); }) ;
# 226 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 227 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   rm_stack(false, 0UL, "processArgs", &____must_manage_processArgs, ____alias_loc_id_6, ____chimes_did_disable8, false); return;
# 228 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}

void processArgs(int argc, char** argv) { (____chimes_replaying ? processArgs_resumable(argc, argv) : processArgs_quick(argc, argv)); }
# 36 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static char* dupString_npm(const char* s)
# 37 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 38 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char* d;
# 39 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! s) {s = ""; };
# 40 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   d = (char*) ({ void *____chimes_tmp_ptr = calloc(((strlen(s) + 1)) + ((sizeof(void *) + sizeof(char) - 1) / sizeof(char)), sizeof(char)); calloc_helper(____chimes_tmp_ptr, (strlen(s)+1), sizeof(char), 4461972309412152485UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 41 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   strcpy(d, s);
# 42 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    char * ____chimes_ret_var_0; ____chimes_ret_var_0 = (d); return ____chimes_ret_var_0; ;
# 43 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 45 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myOptionAlloc_npm(
# 46 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   const char* longOption, const char shortOption,
# 47 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int has_arg, const char type, void* dataPtr, int dataSize, const char* help)
# 48 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 49 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   static int iBase=129;
# 50 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption* o = (MyOption*) ({ void *____chimes_tmp_ptr = calloc((1) + ((sizeof(void *) + sizeof(MyOption) - 1) / sizeof(MyOption)), sizeof(MyOption)); calloc_helper(____chimes_tmp_ptr, 1, sizeof(MyOption), 4461972309412151945UL, 0, 1, (int)sizeof(struct MyOptionSt), 4, (int)__builtin_offsetof(struct MyOptionSt, help), (int)__builtin_offsetof(struct MyOptionSt, longArg), (int)__builtin_offsetof(struct MyOptionSt, ptr), (int)__builtin_offsetof(struct MyOptionSt, next)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 51 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->help = dupString_npm(help);
# 52 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->longArg = dupString_npm(longOption);
# 53 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (shortOption) {o->shortArg[0] = (unsigned char)shortOption; } else {{
# 56 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o->shortArg[0] = iBase;
# 57 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      iBase++;
# 58 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }; }
# 59 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->argFlag = has_arg;
# 60 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->type = type;
# 61 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->ptr = dataPtr;
# 62 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o->sz = dataSize;
# 63 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (longOption) {longest = (longest>strlen(longOption)?longest:strlen(longOption)); };
# 64 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption * ____chimes_ret_var_1; ____chimes_ret_var_1 = (o); return ____chimes_ret_var_1; ;
# 65 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 67 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* myOptionFree_npm(MyOption* o)
# 68 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 69 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption* r;
# 70 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (!o) { MyOption * ____chimes_ret_var_2; ____chimes_ret_var_2 = (__null); return ____chimes_ret_var_2; ; };
# 71 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   r = ((MyOption*) o->next);
# 72 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (o->longArg) { ({ free_helper((((unsigned char *)o->longArg) - sizeof(void *)), 4461972309412152088UL);free((((unsigned char *)o->longArg) - sizeof(void *))); }) ; };
# 73 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (o->help) { ({ free_helper((((unsigned char *)o->help) - sizeof(void *)), 4461972309412152088UL);free((((unsigned char *)o->help) - sizeof(void *))); }) ; };
# 74 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)o) - sizeof(void *)), 4461972309412152122UL);free((((unsigned char *)o) - sizeof(void *))); }) ;
# 75 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption * ____chimes_ret_var_3; ____chimes_ret_var_3 = (r); return ____chimes_ret_var_3; ;
# 76 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 78 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* lastOption_npm(MyOption* o)
# 79 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 80 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! o) { MyOption * ____chimes_ret_var_4; ____chimes_ret_var_4 = (o); return ____chimes_ret_var_4; ; };
# 81 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(((MyOption*) o->next)) o = ((MyOption*) o->next);
# 82 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption * ____chimes_ret_var_5; ____chimes_ret_var_5 = (o); return ____chimes_ret_var_5; ;
# 83 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 85 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
static MyOption* findOption_npm(MyOption* o, unsigned char shortArg)
# 86 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 87 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 88 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 89 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->shortArg[0] == shortArg) { MyOption * ____chimes_ret_var_6; ____chimes_ret_var_6 = (o); return ____chimes_ret_var_6; ; };
# 90 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 91 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 92 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    MyOption * ____chimes_ret_var_7; ____chimes_ret_var_7 = (o); return ____chimes_ret_var_7; ;
# 93 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 96 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
int addArg_npm(const char* longOption, const char shortOption,
# 97 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           int has_arg, const char type, void* dataPtr, int dataSize,
# 98 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
           const char* help)
# 99 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 100 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption* o;
# 101 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption* p;
# 102 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myOptionAlloc_npm(longOption, shortOption, has_arg, type, dataPtr, dataSize, help);
# 103 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! o) { int ____chimes_ret_var_8; ____chimes_ret_var_8 = (1); return ____chimes_ret_var_8; ; };
# 104 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! myargs) {myargs = o; } else {{
# 107 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      p = lastOption_npm(myargs);
# 108 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      p->next = (void *)o;
# 109 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }; }
# 110 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    int ____chimes_ret_var_9; ____chimes_ret_var_9 = (0); return ____chimes_ret_var_9; ;
# 111 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 114 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void freeArgs_npm()
# 115 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 116 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(myargs)
# 117 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 118 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      myargs = myOptionFree_npm(myargs);
# 119 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 120 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   return;
# 121 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 123 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void printArgs_npm()
# 124 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 125 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption* o = myargs;
# 126 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char s[4096];
# 127 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   unsigned char *shortArg;
# 128 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   fprintf(stdout,"\n"
# 129 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      "  Arguments are: \n");
# 130 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   sprintf(s,"   --%%-%ds",longest);
# 131 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 132 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 133 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->shortArg[0]<0xFF) {shortArg = o->shortArg; } else {shortArg = (unsigned char *) "---"; } ;
# 135 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      fprintf(stdout,s,o->longArg);
# 136 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      fprintf(stdout," -%c  arg=%1d type=%c  %s\n",shortArg[0],o->argFlag,o->type,o->help);
# 137 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 138 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 139 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 140 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   fprintf(stdout,"\n\n");
# 141 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   return;
# 142 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}
# 144 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
void processArgs_npm(int argc, char** argv)
# 145 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
{
# 146 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   MyOption* o;
# 147 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int n=0;
# 148 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int i;
# 149 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   struct option* opts;
# 150 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   char* sArgs;
# 151 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   int c;
# 152 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 153 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   if (! myargs) {return; };
# 154 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myargs;
# 155 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(o)
# 156 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {n++,o=((MyOption*) o->next);}
# 157 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 158 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   o = myargs;
# 159 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   sArgs= (char*) ({ void *____chimes_tmp_ptr = calloc((2 * (n + 2)) + ((sizeof(void *) + sizeof(char) - 1) / sizeof(char)), sizeof(char)); calloc_helper(____chimes_tmp_ptr, 2*(n+2), sizeof(char), 4461972309412152283UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 160 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   opts = (struct option*) ({ void *____chimes_tmp_ptr = calloc((n) + ((sizeof(void *) + sizeof(struct option) - 1) / sizeof(struct option)), sizeof(struct option)); calloc_helper(____chimes_tmp_ptr, n, sizeof(struct option), 4461972309412152253UL, 0, 1, (int)sizeof(struct option), 2, (int)__builtin_offsetof(struct option, name), (int)__builtin_offsetof(struct option, flag)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 161 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   for (i=0; i<n; i++)
# 162 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 163 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].name = o->longArg;
# 164 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].has_arg = o->argFlag;
# 165 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].flag = 0;
# 166 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      opts[i].val = o->shortArg[0];
# 167 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 168 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      strcat(sArgs,(char*) o->shortArg);
# 169 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (o->argFlag) {strcat(sArgs,":"); };
# 170 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = ((MyOption*) o->next);
# 171 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 172 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 173 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   while(1)
# 174 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   {
# 175 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 176 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      int option_index = 0;
# 177 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 178 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      c = getopt_long (argc, argv, sArgs, opts, &option_index);
# 179 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if (c == -1) {break; };
# 180 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      o = findOption_npm(myargs, c);
# 181 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if ( ! o )
# 182 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 183 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         fprintf(stdout,"\n\n"
# 184 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            "    invalid switch : -%c in getopt()\n"
# 185 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            "\n\n",
# 186 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            c);
# 187 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         break;
# 188 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 189 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      if(! o->argFlag)
# 190 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 191 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         int* i = (int*)o->ptr;
# 192 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         *i = 1;
# 193 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 194 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      else
# 195 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      {
# 196 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         switch(o->type)
# 197 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         {
# 198 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'i':
# 199 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%d",(int*)o->ptr);
# 200 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 201 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'f':
# 202 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%f",(float*)o->ptr);
# 203 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 204 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'd':
# 205 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%lf",(double*)o->ptr);
# 206 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 207 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 's':
# 208 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               strncpy((char*)o->ptr,(char*)optarg,o->sz);
# 209 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               ((char*)o->ptr)[o->sz-1] = '\0';
# 210 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 211 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            case 'c':
# 212 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               sscanf(optarg,"%c",(char*)o->ptr);
# 213 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               break;
# 214 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
            default:
# 215 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
               fprintf(stdout,"\n\n"
# 216 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "    invalid type : %c in getopt()\n"
# 217 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "    valid values are 'e', 'z'. 'i','d','f','s', and 'c'\n"
# 218 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  "\n\n",
# 219 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
                  c);
# 220 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
         }
# 221 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
      }
# 222 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   }
# 223 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 224 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)opts) - sizeof(void *)), 4461972309412152253UL);free((((unsigned char *)opts) - sizeof(void *))); }) ;
# 225 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
    ({ free_helper((((unsigned char *)sArgs) - sizeof(void *)), 4461972309412152283UL);free((((unsigned char *)sArgs) - sizeof(void *))); }) ;
# 226 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
# 227 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
   return;
# 228 "/home/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/cmdLineParser.c"
}





static int module_init() {
    init_module(4461972309412151844UL, 43, 9, 0, 9, 9, 0, 9, 6, 0, 2,
                           &____alias_loc_id_0, (unsigned)14, (unsigned)0, (unsigned)0, (4461972309412151844UL + 1UL), (4461972309412151844UL + 2UL), (4461972309412151844UL + 3UL), (4461972309412151844UL + 4UL), (4461972309412151844UL + 5UL), (4461972309412151844UL + 6UL), (4461972309412151844UL + 7UL), (4461972309412151844UL + 8UL), (4461972309412151844UL + 9UL), (4461972309412151844UL + 10UL), (4461972309412151844UL + 11UL), (4461972309412151844UL + 12UL), (4461972309412151844UL + 53UL), (4461972309412151844UL + 655UL),
                           &____alias_loc_id_1, (unsigned)11, (unsigned)0, (unsigned)0, (4461972309412151844UL + 77UL), (4461972309412151844UL + 78UL), (4461972309412151844UL + 79UL), (4461972309412151844UL + 80UL), (4461972309412151844UL + 81UL), (4461972309412151844UL + 82UL), (4461972309412151844UL + 83UL), (4461972309412151844UL + 84UL), (4461972309412151844UL + 85UL), (4461972309412151844UL + 101UL), (4461972309412151844UL + 659UL),
                           &____alias_loc_id_2, (unsigned)4, (unsigned)0, (unsigned)0, (4461972309412151844UL + 180UL), (4461972309412151844UL + 181UL), (4461972309412151844UL + 182UL), (4461972309412151844UL + 183UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (unsigned)0, (4461972309412151844UL + 655UL),
                           &____alias_loc_id_4, (unsigned)5, (unsigned)0, (unsigned)0, (4461972309412151844UL + 226UL), (4461972309412151844UL + 227UL), (4461972309412151844UL + 228UL), (4461972309412151844UL + 229UL), (4461972309412151844UL + 230UL),
                           &____alias_loc_id_5, (unsigned)2, (unsigned)0, (unsigned)0, (4461972309412151844UL + 279UL), (4461972309412151844UL + 281UL),
                           &____alias_loc_id_6, (unsigned)13, (unsigned)0, (unsigned)0, (4461972309412151844UL + 345UL), (4461972309412151844UL + 346UL), (4461972309412151844UL + 347UL), (4461972309412151844UL + 348UL), (4461972309412151844UL + 349UL), (4461972309412151844UL + 350UL), (4461972309412151844UL + 351UL), (4461972309412151844UL + 352UL), (4461972309412151844UL + 353UL), (4461972309412151844UL + 354UL), (4461972309412151844UL + 409UL), (4461972309412151844UL + 439UL), (4461972309412151844UL + 660UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (unsigned)0, (4461972309412151844UL + 577UL), (4461972309412151844UL + 578UL), (4461972309412151844UL + 579UL), (4461972309412151844UL + 580UL), (4461972309412151844UL + 581UL),
                           &____alias_loc_id_8, (unsigned)4, (unsigned)0, (unsigned)0, (4461972309412151844UL + 627UL), (4461972309412151844UL + 628UL), (4461972309412151844UL + 629UL), (4461972309412151844UL + 641UL),
                            "myOptionAlloc", 1, (void *)(&myOptionAlloc_npm), (void *)__null, 0, 7, (4461972309412151844UL + 161UL), 0UL, 0UL, 0UL, (4461972309412151844UL + 105UL), 0UL, (4461972309412151844UL + 179UL), (4461972309412151844UL + 101UL), 5, "calloc", 2, 0UL, 0UL, (4461972309412151844UL + 101UL), "dupString", 1, (4461972309412151844UL + 179UL), (4461972309412151844UL + 105UL), "dupString", 1, (4461972309412151844UL + 161UL), (4461972309412151844UL + 105UL), "strlen", 1, (4461972309412151844UL + 161UL), 0UL, "strlen", 1, (4461972309412151844UL + 161UL), 0UL,
                            "myOptionFree", 1, (void *)(&myOptionFree_npm), (void *)__null, 0, 1, (4461972309412151844UL + 278UL), (4461972309412151844UL + 244UL), 3, "free", 1, (4461972309412151844UL + 244UL), 0UL, "free", 1, (4461972309412151844UL + 244UL), 0UL, "free", 1, (4461972309412151844UL + 278UL), 0UL,
                            "freeArgs", 0, "_Z8freeArgsv", "_Z12freeArgs_npmv", 0, 0, 0UL, 1, "myOptionFree", 1, (4461972309412151844UL + 660UL), (4461972309412151844UL + 660UL),
                            "lastOption", 1, (void *)(&lastOption_npm), (void *)__null, 0, 1, (4461972309412151844UL + 216UL), (4461972309412151844UL + 216UL), 0,
                            "dupString", 1, (void *)(&dupString_npm), (void *)__null, 0, 1, (4461972309412151844UL + 651UL), (4461972309412151844UL + 641UL), 3, "strlen", 1, (4461972309412151844UL + 651UL), 0UL, "calloc", 2, 0UL, 0UL, (4461972309412151844UL + 641UL), "strcpy", 2, (4461972309412151844UL + 641UL), (4461972309412151844UL + 651UL), (4461972309412151844UL + 645UL),
                            "addArg", 0, "_Z6addArgPKccicPviS0_", "_Z10addArg_npmPKccicPviS0_", 0, 7, (4461972309412151844UL + 68UL), 0UL, 0UL, 0UL, (4461972309412151844UL + 72UL), 0UL, (4461972309412151844UL + 74UL), 0UL, 2, "myOptionAlloc", 7, (4461972309412151844UL + 68UL), 0UL, 0UL, 0UL, (4461972309412151844UL + 72UL), 0UL, (4461972309412151844UL + 74UL), (4461972309412151844UL + 660UL), "lastOption", 1, (4461972309412151844UL + 660UL), (4461972309412151844UL + 53UL),
                            "processArgs", 0, "_Z11processArgsiPPc", "_Z15processArgs_npmiPPc", 0, 2, 0UL, (4461972309412151844UL + 567UL), 0UL, 15, "calloc", 2, 0UL, 0UL, (4461972309412151844UL + 439UL), "calloc", 2, 0UL, 0UL, (4461972309412151844UL + 409UL), "strcat", 2, (4461972309412151844UL + 439UL), (4461972309412151844UL + 660UL), (4461972309412151844UL + 443UL), "strcat", 2, (4461972309412151844UL + 439UL), (4461972309412151844UL + 663UL), (4461972309412151844UL + 450UL), "getopt_long", 5, 0UL, (4461972309412151844UL + 567UL), (4461972309412151844UL + 439UL), (4461972309412151844UL + 409UL), (4461972309412151844UL + 353UL), 0UL, "findOption", 2, (4461972309412151844UL + 660UL), 0UL, (4461972309412151844UL + 660UL), "fprintf", 3, (4461972309412151844UL + 483UL), (4461972309412151844UL + 664UL), 0UL, 0UL, "sscanf", 3, (4461972309412151844UL + 506UL), (4461972309412151844UL + 662UL), (4461972309412151844UL + 660UL), 0UL, "sscanf", 3, (4461972309412151844UL + 506UL), (4461972309412151844UL + 662UL), (4461972309412151844UL + 660UL), 0UL, "sscanf", 3, (4461972309412151844UL + 506UL), (4461972309412151844UL + 660UL), (4461972309412151844UL + 660UL), 0UL, "strncpy", 3, (4461972309412151844UL + 660UL), (4461972309412151844UL + 506UL), 0UL, (4461972309412151844UL + 535UL), "sscanf", 3, (4461972309412151844UL + 506UL), (4461972309412151844UL + 662UL), (4461972309412151844UL + 660UL), 0UL, "fprintf", 3, (4461972309412151844UL + 483UL), (4461972309412151844UL + 670UL), 0UL, 0UL, "free", 1, (4461972309412151844UL + 409UL), 0UL, "free", 1, (4461972309412151844UL + 439UL), 0UL,
                            "findOption", 1, (void *)(&findOption_npm), (void *)__null, 0, 2, (4461972309412151844UL + 619UL), 0UL, (4461972309412151844UL + 619UL), 0,
                            "printArgs", 0, "_Z9printArgsv", "_Z13printArgs_npmv", 0, 0, 0UL, 5, "fprintf", 2, (4461972309412151844UL + 483UL), (4461972309412151844UL + 657UL), 0UL, "sprintf", 3, (4461972309412151844UL + 280UL), (4461972309412151844UL + 658UL), 0UL, 0UL, "fprintf", 3, (4461972309412151844UL + 483UL), (4461972309412151844UL + 280UL), (4461972309412151844UL + 660UL), 0UL, "fprintf", 6, (4461972309412151844UL + 483UL), (4461972309412151844UL + 661UL), 0UL, 0UL, 0UL, (4461972309412151844UL + 660UL), 0UL, "fprintf", 2, (4461972309412151844UL + 483UL), (4461972309412151844UL + 662UL), 0UL,
                           "myOptionAlloc", &(____chimes_does_checkpoint_myOptionAlloc_npm),
                           "myOptionFree", &(____chimes_does_checkpoint_myOptionFree_npm),
                           "freeArgs", &(____chimes_does_checkpoint_freeArgs_npm),
                           "lastOption", &(____chimes_does_checkpoint_lastOption_npm),
                           "dupString", &(____chimes_does_checkpoint_dupString_npm),
                           "addArg", &(____chimes_does_checkpoint_addArg_npm),
                           "processArgs", &(____chimes_does_checkpoint_processArgs_npm),
                           "findOption", &(____chimes_does_checkpoint_findOption_npm),
                           "printArgs", &(____chimes_does_checkpoint_printArgs_npm),
                             (4461972309412151844UL + 216UL), (4461972309412151844UL + 216UL),
                             (4461972309412151844UL + 347UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 578UL), (4461972309412151844UL + 619UL),
                             (4461972309412151844UL + 627UL), (4461972309412151844UL + 651UL),
                             (4461972309412151844UL + 629UL), (4461972309412151844UL + 641UL),
                             (4461972309412151844UL + 628UL), (4461972309412151844UL + 641UL),
                             (4461972309412151844UL + 577UL), (4461972309412151844UL + 619UL),
                             (4461972309412151844UL + 660UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 279UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 278UL), (4461972309412151844UL + 244UL),
                             (4461972309412151844UL + 83UL), (4461972309412151844UL + 179UL),
                             (4461972309412151844UL + 81UL), (4461972309412151844UL + 105UL),
                             (4461972309412151844UL + 230UL), (4461972309412151844UL + 244UL),
                             (4461972309412151844UL + 84UL), (4461972309412151844UL + 101UL),
                             (4461972309412151844UL + 85UL), (4461972309412151844UL + 101UL),
                             (4461972309412151844UL + 656UL), (4461972309412151844UL + 483UL),
                             (4461972309412151844UL + 346UL), (4461972309412151844UL + 567UL),
                             (4461972309412151844UL + 182UL), (4461972309412151844UL + 216UL),
                             (4461972309412151844UL + 183UL), (4461972309412151844UL + 216UL),
                             (4461972309412151844UL + 180UL), (4461972309412151844UL + 216UL),
                             (4461972309412151844UL + 181UL), (4461972309412151844UL + 216UL),
                             (4461972309412151844UL + 6UL), (4461972309412151844UL + 72UL),
                             (4461972309412151844UL + 9UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 8UL), (4461972309412151844UL + 74UL),
                             (4461972309412151844UL + 665UL), (4461972309412151844UL + 506UL),
                             (4461972309412151844UL + 409UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 619UL), (4461972309412151844UL + 619UL),
                             (4461972309412151844UL + 580UL), (4461972309412151844UL + 619UL),
                             (4461972309412151844UL + 581UL), (4461972309412151844UL + 619UL),
                             (4461972309412151844UL + 77UL), (4461972309412151844UL + 161UL),
                             (4461972309412151844UL + 281UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 229UL), (4461972309412151844UL + 244UL),
                             (4461972309412151844UL + 228UL), (4461972309412151844UL + 244UL),
                             (4461972309412151844UL + 227UL), (4461972309412151844UL + 278UL),
                             (4461972309412151844UL + 226UL), (4461972309412151844UL + 244UL),
                             (4461972309412151844UL + 101UL), (4461972309412151844UL + 105UL),
                             (4461972309412151844UL + 655UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 2UL), (4461972309412151844UL + 68UL),
                             (4461972309412151844UL + 10UL), (4461972309412151844UL + 53UL),
                             (4461972309412151844UL + 53UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 354UL), (4461972309412151844UL + 660UL),
                             (4461972309412151844UL + 351UL), (4461972309412151844UL + 439UL),
                             (4461972309412151844UL + 350UL), (4461972309412151844UL + 409UL),
                     "MyOptionSt", 384UL, 8, "char*", (int)__builtin_offsetof (struct MyOptionSt, help), "char*", (int)__builtin_offsetof (struct MyOptionSt, longArg), "[ 2 x unsigned char ]", (int)__builtin_offsetof (struct MyOptionSt, shortArg), "int", (int)__builtin_offsetof (struct MyOptionSt, argFlag), "char", (int)__builtin_offsetof (struct MyOptionSt, type), "int", (int)__builtin_offsetof (struct MyOptionSt, sz), "void*", (int)__builtin_offsetof (struct MyOptionSt, ptr), "void*", (int)__builtin_offsetof (struct MyOptionSt, next),
                     "option", 256UL, 4, "char*", (int)__builtin_offsetof (struct option, name), "int", (int)__builtin_offsetof (struct option, has_arg), "int*", (int)__builtin_offsetof (struct option, flag), "int", (int)__builtin_offsetof (struct option, val),
                             "myOptionAlloc", "_ZL13myOptionAllocPKccicPviS0_", 0, 2, "dupString", "dupString",
                             "myOptionFree", "_ZL12myOptionFreeP10MyOptionSt", 0, 0,
                             "freeArgs", "_Z8freeArgsv", 0, 1, "myOptionFree",
                             "lastOption", "_ZL10lastOptionP10MyOptionSt", 0, 0,
                             "addArg", "_Z6addArgPKccicPviS0_", 0, 2, "myOptionAlloc", "lastOption",
                             "dupString", "_ZL9dupStringPKc", 0, 0,
                             "processArgs", "_Z11processArgsiPPc", 0, 1, "findOption",
                             "findOption", "_ZL10findOptionP10MyOptionSth", 0, 0,
                             "printArgs", "_Z9printArgsv", 0, 0,
        "dupString", 4461972309412151949UL, (int)1, 4461972309412152023UL,
        "dupString", 4461972309412151949UL, (int)1, 4461972309412152005UL,
        "myOptionAlloc", 4461972309412152504UL, (int)7, 4461972309412151912UL, 0UL, 0UL, 0UL, 4461972309412151916UL, 0UL, 4461972309412151918UL,
        "lastOption", 4461972309412151897UL, (int)1, 4461972309412152504UL,
        "myOptionFree", 4461972309412152504UL, (int)1, 4461972309412152504UL,
        "findOption", 4461972309412152504UL, (int)2, 4461972309412152504UL, 0UL);
    register_global_var("global|myargs", "%struct.MyOptionSt*", (void *)(&myargs), 8, 1, 0, (4461972309412151844UL + 655UL), 0);
    register_global_var("global|longest", "i32", (void *)(&longest), 4, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
