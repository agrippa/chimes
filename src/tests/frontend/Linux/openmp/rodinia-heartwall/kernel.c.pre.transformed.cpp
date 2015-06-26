# 1 "kernel.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "kernel.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_kernel_npm = 1;


static int ____must_manage_kernel = 2;

static unsigned ____alias_loc_id_0;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 2 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 3 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 4 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 5 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/heartwall_define.h" 1







# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 1

extern "C" {
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h"
# 1 "/usr/include/sys/types.h" 1 3 4
# 26 "/usr/include/sys/types.h" 3 4
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
# 27 "/usr/include/sys/types.h" 2 3 4

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
# 217 "/usr/include/sys/types.h" 3 4
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
# 218 "/usr/include/sys/types.h" 2 3 4


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
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 39 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 40 "/usr/include/sys/stat.h" 2 3 4
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





# 1 "/usr/include/time.h" 1 3 4
# 41 "/usr/include/fcntl.h" 2 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 123 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdint.h" 2 3 4
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
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
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
# 327 "/usr/include/stdlib.h" 3 4
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
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
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
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
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





 avi_t* d_frames;
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
# 7 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c" 2
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
# 8 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c" 2
# 8 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 9 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
void kernel_npm(public_struct pub, private_struct priv);
void kernel_quick(public_struct pub, private_struct priv); void kernel(public_struct pub, private_struct priv);
void kernel_resumable(public_struct pub,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    private_struct priv){const int ____chimes_did_disable0 = new_stack((void *)(&kernel), "kernel", &____must_manage_kernel, 2, 0, (size_t)(7611249383129672660UL), (size_t)(7611249383129672661UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 12 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ei_new; ;
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float *d_in; ;
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int rot_row; ;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int rot_col; ;
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int in2_rowlow; ;
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int in2_collow; ;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ic; ;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int jc; ;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int jp1; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ja1; int ja2; ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ip1; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ia1; int ia2; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ja; int jb; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ia; int ib; ;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float s; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int i; ;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int j; ;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int row; ;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int col; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_row; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_col; ;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int position; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float sum; ;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int pos_ori; ;
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float temp; ;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float temp2; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int location; ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int cent; ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int tMask_row; ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int tMask_col; ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  float largest_value_current; largest_value_current = (0) ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  float largest_value; largest_value = (0) ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  int largest_coordinate_current; largest_coordinate_current = (0) ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  int largest_coordinate; largest_coordinate = (0) ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  float fin_max_val; fin_max_val = (0) ;
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  int fin_max_coo; fin_max_coo = (0) ;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_row; ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_col; ;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int offset_row; ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int offset_col; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float in_final_sum; ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float in_sqr_final_sum; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float mean; ;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float mean_sqr; ;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float variance; ;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float deviation; ;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float denomT; ;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int pointer; ;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_pointer; ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int loc_pointer; ;
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ei_mod; ;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no == 0){
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = priv.point_no*pub.frames+pub.frame_no;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tRowLoc[pointer] = priv.d_Row[priv.point_no];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tColLoc[pointer] = priv.d_Col[priv.point_no];
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  d_in = &priv.d_T[priv.in_pointer];
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = priv.d_Row[priv.point_no] - 25 + row - 1;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = priv.d_Col[priv.point_no] - 25 + col - 1;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_pointer = ori_col*pub.frame_rows+ori_row;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    d_in[col*pub.in_mod_rows+row] = pub.d_frame[ori_pointer];
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no != 0){
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in2_rowlow = priv.d_Row[priv.point_no] - pub.sSize;
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in2_collow = priv.d_Col[priv.point_no] - pub.sSize;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_cols; col++){
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_rows; row++){
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + in2_rowlow - 1;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + in2_collow - 1;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = pub.d_frame[ori_col*pub.frame_rows+ori_row];
# 129 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2[col*pub.in2_rows+row] = temp;
# 130 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sqr[col*pub.in2_rows+row] = temp*temp;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  d_in = &priv.d_T[priv.in_pointer];
# 143 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 146 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 147 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 148 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   rot_row = (pub.in_mod_rows-1) - row;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   rot_col = (pub.in_mod_rows-1) - col;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pointer = rot_col*pub.in_mod_rows+rot_row;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = d_in[pointer];
# 155 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in_mod[col*pub.in_mod_rows+row] = temp;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in_sqr[pointer] = temp * temp;
# 157 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 159 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 160 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in_final_sum = 0;
# 167 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i = 0; i<pub.in_mod_elem; i++){
# 168 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   in_final_sum = in_final_sum + d_in[i];
# 169 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 170 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in_sqr_final_sum = 0;
# 172 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i = 0; i<pub.in_mod_elem; i++){
# 173 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   in_sqr_final_sum = in_sqr_final_sum + priv.d_in_sqr[i];
# 174 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 175 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 177 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 178 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 179 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 180 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 181 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  mean = in_final_sum / pub.in_mod_elem;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  mean_sqr = mean * mean;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  variance = (in_sqr_final_sum / pub.in_mod_elem) - mean_sqr;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  deviation = sqrt(variance);
# 185 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  denomT = sqrt((float)(pub.in_mod_elem-1))*deviation;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 188 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 189 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 192 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 193 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=1; col<=pub.conv_cols; col++){
# 194 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   j = col + pub.joffset;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   jp1 = j + 1;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.in2_cols < jp1){
# 199 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = jp1 - pub.in2_cols;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 201 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 202 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = 1;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 204 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.in_mod_cols < j){
# 205 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = pub.in_mod_cols;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 207 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 208 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = j;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 210 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 211 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=1; row<=pub.conv_rows; row++){
# 212 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 213 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 214 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    i = row + pub.ioffset;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ip1 = i + 1;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.in2_rows < ip1){
# 218 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = ip1 - pub.in2_rows;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 220 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 221 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = 1;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 223 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.in_mod_rows < i){
# 224 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = pub.in_mod_rows;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 226 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 227 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = i;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 229 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    s = 0;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    for(ja=ja1; ja<=ja2; ja++){
# 234 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     jb = jp1 - ja;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     for(ia=ia1; ia<=ia2; ia++){
# 236 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      ib = ip1 - ia;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      s = s + priv.d_in_mod[pub.in_mod_rows*(ja-1)+ia-1] * priv.d_in2[pub.in2_rows*(jb-1)+ib-1];
# 238 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     }
# 239 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 240 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 241 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_conv[(col-1)*pub.conv_rows+(row-1)] = s;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 243 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 244 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_pad_cols; col++){
# 255 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_pad_rows; row++){
# 256 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 257 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if( row > (pub.in2_pad_add_rows-1) &&
# 259 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    row < (pub.in2_pad_add_rows+pub.in2_rows) &&
# 260 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col > (pub.in2_pad_add_cols-1) &&
# 261 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col < (pub.in2_pad_add_cols+pub.in2_cols)){
# 262 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = row - pub.in2_pad_add_rows;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = col - pub.in2_pad_add_cols;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = priv.d_in2[ori_col*pub.in2_rows+ori_row];
# 265 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 266 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 267 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = 0;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 269 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 270 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 271 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 272 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 273 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 274 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 275 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 276 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_pad_cols; ei_new++){
# 278 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 279 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new*pub.in2_pad_rows;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_pad_rows; position = position + 1){
# 285 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[position] = priv.d_in2_pad[position] + sum;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_pad[position];
# 287 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 288 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 289 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub_cols; col++){
# 299 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub_rows; row++){
# 300 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 301 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 302 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel_rowlow - 1;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel_collow - 1;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 305 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 306 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 307 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel2_rowlow - 1;
# 308 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel2_collow - 1;
# 309 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 310 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 311 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 312 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub[col*pub.in2_sub_rows+row] = temp - temp2;
# 313 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 315 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 317 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 318 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 320 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 321 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_sub_rows; ei_new++){
# 322 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new;
# 325 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 326 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 327 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_sub_elem; position = position + pub.in2_sub_rows){
# 329 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_sub[position] = priv.d_in2_sub[position] + sum;
# 330 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_sub[position];
# 331 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 332 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 333 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub2_sqr_cols; col++){
# 345 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub2_sqr_rows; row++){
# 346 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel_rowlow - 1;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel_collow - 1;
# 350 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 351 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 352 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 353 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel2_rowlow - 1;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel2_collow - 1;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 356 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 357 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 358 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp - temp2;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 360 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub2_sqr[col*pub.in2_sub2_sqr_rows+row] = temp2 * temp2;
# 362 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_conv[col*pub.in2_sub2_sqr_rows+row] = priv.d_conv[col*pub.in2_sub2_sqr_rows+row] - temp2 * in_final_sum / pub.in_mod_elem;
# 365 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 366 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 367 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_pad_cols; col++){
# 379 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_pad_rows; row++){
# 380 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 382 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if( row > (pub.in2_pad_add_rows-1) &&
# 383 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    row < (pub.in2_pad_add_rows+pub.in2_rows) &&
# 384 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col > (pub.in2_pad_add_cols-1) &&
# 385 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col < (pub.in2_pad_add_cols+pub.in2_cols)){
# 386 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = row - pub.in2_pad_add_rows;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = col - pub.in2_pad_add_cols;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = priv.d_in2_sqr[ori_col*pub.in2_rows+ori_row];
# 389 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 390 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 391 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = 0;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 393 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 394 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 395 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 396 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 397 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 398 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 399 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 401 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_pad_cols; ei_new++){
# 403 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 404 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 405 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new*pub.in2_pad_rows;
# 406 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 408 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_pad_rows; position = position + 1){
# 410 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[position] = priv.d_in2_pad[position] + sum;
# 411 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_pad[position];
# 412 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 413 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub_cols; col++){
# 424 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub_rows; row++){
# 425 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 426 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 427 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel_rowlow - 1;
# 428 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel_collow - 1;
# 429 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 430 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 431 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 432 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel2_rowlow - 1;
# 433 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel2_collow - 1;
# 434 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 435 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 437 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub[col*pub.in2_sub_rows+row] = temp - temp2;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 439 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 440 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 441 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 442 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 443 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 444 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 445 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_sub_rows; ei_new++){
# 447 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 448 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 449 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 451 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 452 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_sub_elem; position = position + pub.in2_sub_rows){
# 454 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_sub[position] = priv.d_in2_sub[position] + sum;
# 455 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_sub[position];
# 456 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 457 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 458 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.conv_cols; col++){
# 472 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.conv_rows; row++){
# 473 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 474 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 475 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel_rowlow - 1;
# 476 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel_collow - 1;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 478 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 479 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel2_rowlow - 1;
# 481 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel2_collow - 1;
# 482 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 483 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 484 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 485 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp - temp2;
# 486 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 487 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp2 - (priv.d_in2_sub2_sqr[col*pub.conv_rows+row] / pub.in_mod_elem);
# 489 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 490 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 491 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(temp2 < 0){
# 492 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    temp2 = 0;
# 493 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 494 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = sqrt(temp2);
# 495 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 496 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 497 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = denomT * temp2;
# 498 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 499 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_conv[col*pub.conv_rows+row] = priv.d_conv[col*pub.conv_rows+row] / temp2;
# 501 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 502 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 503 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 504 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 505 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 506 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 507 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 508 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 509 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 510 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  cent = pub.sSize + pub.tSize + 1;
# 511 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = pub.frame_no-1+priv.point_no*pub.frames;
# 512 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  tMask_row = cent + priv.d_tRowLoc[pointer] - priv.d_Row[priv.point_no] - 1;
# 513 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  tMask_col = cent + priv.d_tColLoc[pointer] - priv.d_Col[priv.point_no] - 1;
# 514 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 515 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 516 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.tMask_elem; ei_new++){
# 517 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_tMask[ei_new] = 0;
# 518 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 519 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tMask[tMask_col*pub.tMask_rows + tMask_row] = 1;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=1; col<=pub.mask_conv_cols; col++){
# 530 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 531 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 532 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   j = col + pub.mask_conv_joffset;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   jp1 = j + 1;
# 534 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.mask_cols < jp1){
# 535 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = jp1 - pub.mask_cols;
# 536 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 537 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 538 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = 1;
# 539 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 540 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.tMask_cols < j){
# 541 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = pub.tMask_cols;
# 542 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 543 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 544 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = j;
# 545 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 546 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 547 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=1; row<=pub.mask_conv_rows; row++){
# 549 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 551 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    i = row + pub.mask_conv_ioffset;
# 552 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ip1 = i + 1;
# 553 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.mask_rows < ip1){
# 555 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = ip1 - pub.mask_rows;
# 556 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 557 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 558 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = 1;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.tMask_rows < i){
# 561 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = pub.tMask_rows;
# 562 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 563 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 564 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = i;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 566 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    s = 0;
# 568 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 569 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 570 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    for(ja=ja1; ja<=ja2; ja++){
# 571 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     jb = jp1 - ja;
# 572 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     for(ia=ia1; ia<=ia2; ia++){
# 573 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      ib = ip1 - ia;
# 574 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      s = s + priv.d_tMask[pub.tMask_rows*(ja-1)+ia-1] * 1;
# 575 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     }
# 576 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 577 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_mask_conv[(col-1)*pub.conv_rows+(row-1)] = priv.d_conv[(col-1)*pub.conv_rows+(row-1)] * s;
# 579 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 580 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 581 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 582 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  fin_max_val = 0;
# 593 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  fin_max_coo = 0;
# 594 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i=0; i<pub.mask_conv_elem; i++){
# 595 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(priv.d_mask_conv[i]>fin_max_val){
# 596 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    fin_max_val = priv.d_mask_conv[i];
# 597 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    fin_max_coo = i;
# 598 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 599 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 600 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 601 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 602 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 603 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 605 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 606 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_row = (fin_max_coo+1) % pub.mask_conv_rows - 1;
# 607 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_col = (fin_max_coo+1) / pub.mask_conv_rows;
# 608 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  if((fin_max_coo+1) % pub.mask_conv_rows == 0){
# 609 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   largest_row = pub.mask_conv_rows - 1;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   largest_col = largest_col - 1;
# 611 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 612 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_row = largest_row + 1;
# 615 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_col = largest_col + 1;
# 616 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  offset_row = largest_row - pub.in_mod_rows - (pub.sSize - pub.tSize);
# 617 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  offset_col = largest_col - pub.in_mod_cols - (pub.sSize - pub.tSize);
# 618 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = priv.point_no*pub.frames+pub.frame_no;
# 619 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tRowLoc[pointer] = priv.d_Row[priv.point_no] + offset_row;
# 620 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tColLoc[pointer] = priv.d_Col[priv.point_no] + offset_col;
# 621 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 622 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 623 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 624 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 625 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 626 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 627 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 628 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 629 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no != 0 && (pub.frame_no)%10 == 0){
# 630 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 631 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 632 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  loc_pointer = priv.point_no*pub.frames+pub.frame_no;
# 633 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_Row[priv.point_no] = priv.d_tRowLoc[loc_pointer];
# 634 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_Col[priv.point_no] = priv.d_tColLoc[loc_pointer];
# 635 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 636 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 637 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 639 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 640 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 641 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = priv.d_Row[priv.point_no] - 25 + row - 1;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = priv.d_Col[priv.point_no] - 25 + col - 1;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_pointer = ori_col*pub.frame_rows+ori_row;
# 644 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 645 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 646 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   d_in[col*pub.in_mod_rows+row] = pub.alpha*d_in[col*pub.in_mod_rows+row] + (1.00-pub.alpha)*pub.d_frame[ori_pointer];
# 647 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 648 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 649 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 650 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 651 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 652 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
rm_stack(false, 0UL, "kernel", &____must_manage_kernel, ____alias_loc_id_0, ____chimes_did_disable0); }
void kernel_quick(public_struct pub,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    private_struct priv){const int ____chimes_did_disable0 = new_stack((void *)(&kernel), "kernel", &____must_manage_kernel, 2, 0, (size_t)(7611249383129672660UL), (size_t)(7611249383129672661UL)) ; ; ;
# 11 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 12 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ei_new; ;
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float *d_in; ;
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int rot_row; ;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int rot_col; ;
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int in2_rowlow; ;
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int in2_collow; ;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ic; ;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int jc; ;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int jp1; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ja1; int ja2; ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ip1; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ia1; int ia2; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ja; int jb; ;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ia; int ib; ;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float s; ;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int i; ;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int j; ;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int row; ;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int col; ;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_row; ;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_col; ;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int position; ;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float sum; ;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int pos_ori; ;
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float temp; ;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float temp2; ;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int location; ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int cent; ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int tMask_row; ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int tMask_col; ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  float largest_value_current; largest_value_current = (0) ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  float largest_value; largest_value = (0) ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  int largest_coordinate_current; largest_coordinate_current = (0) ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  int largest_coordinate; largest_coordinate = (0) ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  float fin_max_val; fin_max_val = (0) ;
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  int fin_max_coo; fin_max_coo = (0) ;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_row; ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_col; ;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int offset_row; ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int offset_col; ;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float in_final_sum; ;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float in_sqr_final_sum; ;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float mean; ;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float mean_sqr; ;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float variance; ;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float deviation; ;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float denomT; ;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int pointer; ;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_pointer; ;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int loc_pointer; ;
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ei_mod; ;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no == 0){
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = priv.point_no*pub.frames+pub.frame_no;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tRowLoc[pointer] = priv.d_Row[priv.point_no];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tColLoc[pointer] = priv.d_Col[priv.point_no];
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  d_in = &priv.d_T[priv.in_pointer];
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = priv.d_Row[priv.point_no] - 25 + row - 1;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = priv.d_Col[priv.point_no] - 25 + col - 1;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_pointer = ori_col*pub.frame_rows+ori_row;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    d_in[col*pub.in_mod_rows+row] = pub.d_frame[ori_pointer];
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no != 0){
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in2_rowlow = priv.d_Row[priv.point_no] - pub.sSize;
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in2_collow = priv.d_Col[priv.point_no] - pub.sSize;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_cols; col++){
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_rows; row++){
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + in2_rowlow - 1;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + in2_collow - 1;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = pub.d_frame[ori_col*pub.frame_rows+ori_row];
# 129 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2[col*pub.in2_rows+row] = temp;
# 130 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sqr[col*pub.in2_rows+row] = temp*temp;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  d_in = &priv.d_T[priv.in_pointer];
# 143 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 146 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 147 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 148 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   rot_row = (pub.in_mod_rows-1) - row;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   rot_col = (pub.in_mod_rows-1) - col;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pointer = rot_col*pub.in_mod_rows+rot_row;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = d_in[pointer];
# 155 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in_mod[col*pub.in_mod_rows+row] = temp;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in_sqr[pointer] = temp * temp;
# 157 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 159 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 160 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in_final_sum = 0;
# 167 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i = 0; i<pub.in_mod_elem; i++){
# 168 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   in_final_sum = in_final_sum + d_in[i];
# 169 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 170 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in_sqr_final_sum = 0;
# 172 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i = 0; i<pub.in_mod_elem; i++){
# 173 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   in_sqr_final_sum = in_sqr_final_sum + priv.d_in_sqr[i];
# 174 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 175 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 177 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 178 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 179 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 180 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 181 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  mean = in_final_sum / pub.in_mod_elem;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  mean_sqr = mean * mean;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  variance = (in_sqr_final_sum / pub.in_mod_elem) - mean_sqr;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  deviation = sqrt(variance);
# 185 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  denomT = sqrt((float)(pub.in_mod_elem-1))*deviation;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 188 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 189 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 192 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 193 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=1; col<=pub.conv_cols; col++){
# 194 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   j = col + pub.joffset;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   jp1 = j + 1;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.in2_cols < jp1){
# 199 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = jp1 - pub.in2_cols;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 201 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 202 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = 1;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 204 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.in_mod_cols < j){
# 205 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = pub.in_mod_cols;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 207 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 208 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = j;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 210 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 211 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=1; row<=pub.conv_rows; row++){
# 212 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 213 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 214 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    i = row + pub.ioffset;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ip1 = i + 1;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.in2_rows < ip1){
# 218 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = ip1 - pub.in2_rows;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 220 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 221 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = 1;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 223 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.in_mod_rows < i){
# 224 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = pub.in_mod_rows;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 226 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 227 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = i;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 229 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    s = 0;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    for(ja=ja1; ja<=ja2; ja++){
# 234 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     jb = jp1 - ja;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     for(ia=ia1; ia<=ia2; ia++){
# 236 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      ib = ip1 - ia;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      s = s + priv.d_in_mod[pub.in_mod_rows*(ja-1)+ia-1] * priv.d_in2[pub.in2_rows*(jb-1)+ib-1];
# 238 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     }
# 239 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 240 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 241 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_conv[(col-1)*pub.conv_rows+(row-1)] = s;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 243 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 244 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_pad_cols; col++){
# 255 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_pad_rows; row++){
# 256 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 257 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if( row > (pub.in2_pad_add_rows-1) &&
# 259 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    row < (pub.in2_pad_add_rows+pub.in2_rows) &&
# 260 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col > (pub.in2_pad_add_cols-1) &&
# 261 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col < (pub.in2_pad_add_cols+pub.in2_cols)){
# 262 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = row - pub.in2_pad_add_rows;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = col - pub.in2_pad_add_cols;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = priv.d_in2[ori_col*pub.in2_rows+ori_row];
# 265 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 266 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 267 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = 0;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 269 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 270 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 271 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 272 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 273 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 274 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 275 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 276 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_pad_cols; ei_new++){
# 278 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 279 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new*pub.in2_pad_rows;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_pad_rows; position = position + 1){
# 285 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[position] = priv.d_in2_pad[position] + sum;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_pad[position];
# 287 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 288 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 289 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub_cols; col++){
# 299 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub_rows; row++){
# 300 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 301 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 302 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel_rowlow - 1;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel_collow - 1;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 305 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 306 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 307 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel2_rowlow - 1;
# 308 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel2_collow - 1;
# 309 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 310 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 311 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 312 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub[col*pub.in2_sub_rows+row] = temp - temp2;
# 313 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 315 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 317 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 318 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 320 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 321 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_sub_rows; ei_new++){
# 322 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new;
# 325 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 326 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 327 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_sub_elem; position = position + pub.in2_sub_rows){
# 329 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_sub[position] = priv.d_in2_sub[position] + sum;
# 330 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_sub[position];
# 331 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 332 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 333 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub2_sqr_cols; col++){
# 345 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub2_sqr_rows; row++){
# 346 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel_rowlow - 1;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel_collow - 1;
# 350 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 351 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 352 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 353 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel2_rowlow - 1;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel2_collow - 1;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 356 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 357 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 358 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp - temp2;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 360 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub2_sqr[col*pub.in2_sub2_sqr_rows+row] = temp2 * temp2;
# 362 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_conv[col*pub.in2_sub2_sqr_rows+row] = priv.d_conv[col*pub.in2_sub2_sqr_rows+row] - temp2 * in_final_sum / pub.in_mod_elem;
# 365 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 366 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 367 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_pad_cols; col++){
# 379 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_pad_rows; row++){
# 380 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 382 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if( row > (pub.in2_pad_add_rows-1) &&
# 383 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    row < (pub.in2_pad_add_rows+pub.in2_rows) &&
# 384 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col > (pub.in2_pad_add_cols-1) &&
# 385 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col < (pub.in2_pad_add_cols+pub.in2_cols)){
# 386 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = row - pub.in2_pad_add_rows;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = col - pub.in2_pad_add_cols;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = priv.d_in2_sqr[ori_col*pub.in2_rows+ori_row];
# 389 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 390 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 391 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = 0;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 393 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 394 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 395 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 396 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 397 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 398 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 399 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 401 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_pad_cols; ei_new++){
# 403 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 404 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 405 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new*pub.in2_pad_rows;
# 406 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 408 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_pad_rows; position = position + 1){
# 410 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[position] = priv.d_in2_pad[position] + sum;
# 411 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_pad[position];
# 412 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 413 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub_cols; col++){
# 424 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub_rows; row++){
# 425 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 426 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 427 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel_rowlow - 1;
# 428 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel_collow - 1;
# 429 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 430 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 431 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 432 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel2_rowlow - 1;
# 433 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel2_collow - 1;
# 434 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 435 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 437 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub[col*pub.in2_sub_rows+row] = temp - temp2;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 439 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 440 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 441 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 442 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 443 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 444 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 445 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_sub_rows; ei_new++){
# 447 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 448 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 449 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 451 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 452 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_sub_elem; position = position + pub.in2_sub_rows){
# 454 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_sub[position] = priv.d_in2_sub[position] + sum;
# 455 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_sub[position];
# 456 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 457 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 458 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.conv_cols; col++){
# 472 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.conv_rows; row++){
# 473 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 474 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 475 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel_rowlow - 1;
# 476 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel_collow - 1;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 478 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 479 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel2_rowlow - 1;
# 481 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel2_collow - 1;
# 482 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 483 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 484 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 485 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp - temp2;
# 486 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 487 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp2 - (priv.d_in2_sub2_sqr[col*pub.conv_rows+row] / pub.in_mod_elem);
# 489 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 490 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 491 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(temp2 < 0){
# 492 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    temp2 = 0;
# 493 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 494 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = sqrt(temp2);
# 495 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 496 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 497 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = denomT * temp2;
# 498 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 499 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_conv[col*pub.conv_rows+row] = priv.d_conv[col*pub.conv_rows+row] / temp2;
# 501 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 502 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 503 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 504 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 505 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 506 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 507 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 508 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 509 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 510 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  cent = pub.sSize + pub.tSize + 1;
# 511 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = pub.frame_no-1+priv.point_no*pub.frames;
# 512 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  tMask_row = cent + priv.d_tRowLoc[pointer] - priv.d_Row[priv.point_no] - 1;
# 513 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  tMask_col = cent + priv.d_tColLoc[pointer] - priv.d_Col[priv.point_no] - 1;
# 514 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 515 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 516 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.tMask_elem; ei_new++){
# 517 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_tMask[ei_new] = 0;
# 518 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 519 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tMask[tMask_col*pub.tMask_rows + tMask_row] = 1;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=1; col<=pub.mask_conv_cols; col++){
# 530 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 531 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 532 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   j = col + pub.mask_conv_joffset;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   jp1 = j + 1;
# 534 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.mask_cols < jp1){
# 535 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = jp1 - pub.mask_cols;
# 536 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 537 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 538 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = 1;
# 539 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 540 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.tMask_cols < j){
# 541 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = pub.tMask_cols;
# 542 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 543 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 544 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = j;
# 545 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 546 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 547 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=1; row<=pub.mask_conv_rows; row++){
# 549 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 551 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    i = row + pub.mask_conv_ioffset;
# 552 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ip1 = i + 1;
# 553 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.mask_rows < ip1){
# 555 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = ip1 - pub.mask_rows;
# 556 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 557 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 558 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = 1;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.tMask_rows < i){
# 561 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = pub.tMask_rows;
# 562 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 563 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 564 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = i;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 566 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    s = 0;
# 568 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 569 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 570 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    for(ja=ja1; ja<=ja2; ja++){
# 571 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     jb = jp1 - ja;
# 572 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     for(ia=ia1; ia<=ia2; ia++){
# 573 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      ib = ip1 - ia;
# 574 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      s = s + priv.d_tMask[pub.tMask_rows*(ja-1)+ia-1] * 1;
# 575 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     }
# 576 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 577 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_mask_conv[(col-1)*pub.conv_rows+(row-1)] = priv.d_conv[(col-1)*pub.conv_rows+(row-1)] * s;
# 579 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 580 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 581 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 582 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  fin_max_val = 0;
# 593 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  fin_max_coo = 0;
# 594 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i=0; i<pub.mask_conv_elem; i++){
# 595 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(priv.d_mask_conv[i]>fin_max_val){
# 596 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    fin_max_val = priv.d_mask_conv[i];
# 597 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    fin_max_coo = i;
# 598 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 599 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 600 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 601 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 602 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 603 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 605 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 606 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_row = (fin_max_coo+1) % pub.mask_conv_rows - 1;
# 607 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_col = (fin_max_coo+1) / pub.mask_conv_rows;
# 608 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  if((fin_max_coo+1) % pub.mask_conv_rows == 0){
# 609 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   largest_row = pub.mask_conv_rows - 1;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   largest_col = largest_col - 1;
# 611 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 612 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_row = largest_row + 1;
# 615 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_col = largest_col + 1;
# 616 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  offset_row = largest_row - pub.in_mod_rows - (pub.sSize - pub.tSize);
# 617 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  offset_col = largest_col - pub.in_mod_cols - (pub.sSize - pub.tSize);
# 618 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = priv.point_no*pub.frames+pub.frame_no;
# 619 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tRowLoc[pointer] = priv.d_Row[priv.point_no] + offset_row;
# 620 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tColLoc[pointer] = priv.d_Col[priv.point_no] + offset_col;
# 621 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 622 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 623 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 624 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 625 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 626 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 627 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 628 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 629 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no != 0 && (pub.frame_no)%10 == 0){
# 630 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 631 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 632 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  loc_pointer = priv.point_no*pub.frames+pub.frame_no;
# 633 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_Row[priv.point_no] = priv.d_tRowLoc[loc_pointer];
# 634 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_Col[priv.point_no] = priv.d_tColLoc[loc_pointer];
# 635 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 636 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 637 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 639 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 640 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 641 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = priv.d_Row[priv.point_no] - 25 + row - 1;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = priv.d_Col[priv.point_no] - 25 + col - 1;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_pointer = ori_col*pub.frame_rows+ori_row;
# 644 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 645 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 646 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   d_in[col*pub.in_mod_rows+row] = pub.alpha*d_in[col*pub.in_mod_rows+row] + (1.00-pub.alpha)*pub.d_frame[ori_pointer];
# 647 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 648 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 649 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 650 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 651 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 652 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
rm_stack(false, 0UL, "kernel", &____must_manage_kernel, ____alias_loc_id_0, ____chimes_did_disable0); }

void kernel(public_struct pub,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    private_struct priv) { (____chimes_replaying ? kernel_resumable(pub, priv) : kernel_quick(pub, priv)); }



void kernel_npm(public_struct pub,
# 10 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    private_struct priv){
# 11 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 12 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ei_new;
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float* d_in;
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int rot_row;
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int rot_col;
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int in2_rowlow;
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int in2_collow;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ic;
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int jc;
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int jp1;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ja1, ja2;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ip1;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ia1, ia2;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ja, jb;
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ia, ib;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float s;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int i;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int j;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int row;
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int col;
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_row;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_col;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int position;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float sum;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int pos_ori;
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float temp;
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float temp2;
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int location;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int cent;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int tMask_row;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int tMask_col;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float largest_value_current = 0;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float largest_value = 0;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_coordinate_current = 0;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_coordinate = 0;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float fin_max_val = 0;
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int fin_max_coo = 0;
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_row;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int largest_col;
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int offset_row;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int offset_col;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float in_final_sum;
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float in_sqr_final_sum;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float mean;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float mean_sqr;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float variance;
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float deviation;
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 float denomT;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int pointer;
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ori_pointer;
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int loc_pointer;
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 int ei_mod;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no == 0){
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = priv.point_no*pub.frames+pub.frame_no;
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tRowLoc[pointer] = priv.d_Row[priv.point_no];
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tColLoc[pointer] = priv.d_Col[priv.point_no];
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  d_in = &priv.d_T[priv.in_pointer];
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = priv.d_Row[priv.point_no] - 25 + row - 1;
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = priv.d_Col[priv.point_no] - 25 + col - 1;
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_pointer = ori_col*pub.frame_rows+ori_row;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    d_in[col*pub.in_mod_rows+row] = pub.d_frame[ori_pointer];
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no != 0){
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in2_rowlow = priv.d_Row[priv.point_no] - pub.sSize;
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in2_collow = priv.d_Col[priv.point_no] - pub.sSize;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_cols; col++){
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_rows; row++){
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + in2_rowlow - 1;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + in2_collow - 1;
# 128 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = pub.d_frame[ori_col*pub.frame_rows+ori_row];
# 129 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2[col*pub.in2_rows+row] = temp;
# 130 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sqr[col*pub.in2_rows+row] = temp*temp;
# 131 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 132 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 142 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  d_in = &priv.d_T[priv.in_pointer];
# 143 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 144 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 145 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 146 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 147 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 148 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 149 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   rot_row = (pub.in_mod_rows-1) - row;
# 150 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   rot_col = (pub.in_mod_rows-1) - col;
# 151 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pointer = rot_col*pub.in_mod_rows+rot_row;
# 152 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 153 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 154 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = d_in[pointer];
# 155 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in_mod[col*pub.in_mod_rows+row] = temp;
# 156 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in_sqr[pointer] = temp * temp;
# 157 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 158 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 159 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 160 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 161 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 162 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 163 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 164 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 165 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 166 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in_final_sum = 0;
# 167 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i = 0; i<pub.in_mod_elem; i++){
# 168 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   in_final_sum = in_final_sum + d_in[i];
# 169 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 170 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 171 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  in_sqr_final_sum = 0;
# 172 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i = 0; i<pub.in_mod_elem; i++){
# 173 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   in_sqr_final_sum = in_sqr_final_sum + priv.d_in_sqr[i];
# 174 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 175 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 176 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 177 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 178 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 179 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 180 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 181 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  mean = in_final_sum / pub.in_mod_elem;
# 182 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  mean_sqr = mean * mean;
# 183 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  variance = (in_sqr_final_sum / pub.in_mod_elem) - mean_sqr;
# 184 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  deviation = sqrt(variance);
# 185 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 186 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  denomT = sqrt((float)(pub.in_mod_elem-1))*deviation;
# 187 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 188 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 189 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 190 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 191 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 192 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 193 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=1; col<=pub.conv_cols; col++){
# 194 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 195 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 196 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   j = col + pub.joffset;
# 197 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   jp1 = j + 1;
# 198 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.in2_cols < jp1){
# 199 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = jp1 - pub.in2_cols;
# 200 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 201 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 202 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = 1;
# 203 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 204 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.in_mod_cols < j){
# 205 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = pub.in_mod_cols;
# 206 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 207 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 208 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = j;
# 209 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 210 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 211 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=1; row<=pub.conv_rows; row++){
# 212 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 213 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 214 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    i = row + pub.ioffset;
# 215 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ip1 = i + 1;
# 216 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 217 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.in2_rows < ip1){
# 218 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = ip1 - pub.in2_rows;
# 219 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 220 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 221 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = 1;
# 222 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 223 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.in_mod_rows < i){
# 224 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = pub.in_mod_rows;
# 225 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 226 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 227 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = i;
# 228 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 229 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 230 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    s = 0;
# 231 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 232 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 233 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    for(ja=ja1; ja<=ja2; ja++){
# 234 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     jb = jp1 - ja;
# 235 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     for(ia=ia1; ia<=ia2; ia++){
# 236 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      ib = ip1 - ia;
# 237 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      s = s + priv.d_in_mod[pub.in_mod_rows*(ja-1)+ia-1] * priv.d_in2[pub.in2_rows*(jb-1)+ib-1];
# 238 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     }
# 239 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 240 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 241 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_conv[(col-1)*pub.conv_rows+(row-1)] = s;
# 242 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 243 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 244 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 254 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_pad_cols; col++){
# 255 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_pad_rows; row++){
# 256 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 257 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 258 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if( row > (pub.in2_pad_add_rows-1) &&
# 259 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    row < (pub.in2_pad_add_rows+pub.in2_rows) &&
# 260 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col > (pub.in2_pad_add_cols-1) &&
# 261 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col < (pub.in2_pad_add_cols+pub.in2_cols)){
# 262 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = row - pub.in2_pad_add_rows;
# 263 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = col - pub.in2_pad_add_cols;
# 264 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = priv.d_in2[ori_col*pub.in2_rows+ori_row];
# 265 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 266 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 267 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = 0;
# 268 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 269 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 270 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 271 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 272 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 273 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 274 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 275 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 276 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 277 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_pad_cols; ei_new++){
# 278 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 279 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 280 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new*pub.in2_pad_rows;
# 281 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 282 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 283 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 284 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_pad_rows; position = position + 1){
# 285 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[position] = priv.d_in2_pad[position] + sum;
# 286 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_pad[position];
# 287 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 288 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 289 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 298 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub_cols; col++){
# 299 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub_rows; row++){
# 300 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 301 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 302 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel_rowlow - 1;
# 303 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel_collow - 1;
# 304 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 305 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 306 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 307 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel2_rowlow - 1;
# 308 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel2_collow - 1;
# 309 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 310 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 311 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 312 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub[col*pub.in2_sub_rows+row] = temp - temp2;
# 313 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 314 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 315 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 316 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 317 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 318 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 319 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 320 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 321 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_sub_rows; ei_new++){
# 322 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 323 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 324 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new;
# 325 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 326 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 327 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 328 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_sub_elem; position = position + pub.in2_sub_rows){
# 329 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_sub[position] = priv.d_in2_sub[position] + sum;
# 330 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_sub[position];
# 331 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 332 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 333 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 344 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub2_sqr_cols; col++){
# 345 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub2_sqr_rows; row++){
# 346 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 347 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 348 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel_rowlow - 1;
# 349 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel_collow - 1;
# 350 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 351 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 352 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 353 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel2_rowlow - 1;
# 354 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel2_collow - 1;
# 355 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 356 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 357 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 358 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp - temp2;
# 359 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 360 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 361 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub2_sqr[col*pub.in2_sub2_sqr_rows+row] = temp2 * temp2;
# 362 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 363 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 364 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_conv[col*pub.in2_sub2_sqr_rows+row] = priv.d_conv[col*pub.in2_sub2_sqr_rows+row] - temp2 * in_final_sum / pub.in_mod_elem;
# 365 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 366 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 367 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 378 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_pad_cols; col++){
# 379 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_pad_rows; row++){
# 380 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 381 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 382 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if( row > (pub.in2_pad_add_rows-1) &&
# 383 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    row < (pub.in2_pad_add_rows+pub.in2_rows) &&
# 384 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col > (pub.in2_pad_add_cols-1) &&
# 385 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    col < (pub.in2_pad_add_cols+pub.in2_cols)){
# 386 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_row = row - pub.in2_pad_add_rows;
# 387 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ori_col = col - pub.in2_pad_add_cols;
# 388 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = priv.d_in2_sqr[ori_col*pub.in2_rows+ori_row];
# 389 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 390 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 391 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[col*pub.in2_pad_rows+row] = 0;
# 392 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 393 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 394 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 395 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 396 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 397 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 398 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 399 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 400 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 401 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 402 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_pad_cols; ei_new++){
# 403 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 404 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 405 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new*pub.in2_pad_rows;
# 406 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 407 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 408 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 409 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_pad_rows; position = position + 1){
# 410 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_pad[position] = priv.d_in2_pad[position] + sum;
# 411 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_pad[position];
# 412 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 413 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 414 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 423 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in2_sub_cols; col++){
# 424 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in2_sub_rows; row++){
# 425 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 426 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 427 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel_rowlow - 1;
# 428 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel_collow - 1;
# 429 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 430 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 431 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 432 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_pad_cumv_sel2_rowlow - 1;
# 433 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_pad_cumv_sel2_collow - 1;
# 434 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_pad[ori_col*pub.in2_pad_rows+ori_row];
# 435 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 436 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 437 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_in2_sub[col*pub.in2_sub_rows+row] = temp - temp2;
# 438 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 439 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 440 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 441 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 442 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 443 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 444 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 445 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 446 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.in2_sub_rows; ei_new++){
# 447 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 448 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 449 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   pos_ori = ei_new;
# 450 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 451 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 452 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   sum = 0;
# 453 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(position = pos_ori; position < pos_ori+pub.in2_sub_elem; position = position + pub.in2_sub_rows){
# 454 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_in2_sub[position] = priv.d_in2_sub[position] + sum;
# 455 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    sum = priv.d_in2_sub[position];
# 456 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 457 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 458 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 471 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.conv_cols; col++){
# 472 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.conv_rows; row++){
# 473 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 474 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 475 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel_rowlow - 1;
# 476 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel_collow - 1;
# 477 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 478 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 479 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 480 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = row + pub.in2_sub_cumh_sel2_rowlow - 1;
# 481 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = col + pub.in2_sub_cumh_sel2_collow - 1;
# 482 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = priv.d_in2_sub[ori_col*pub.in2_sub_rows+ori_row];
# 483 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 484 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 485 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp - temp2;
# 486 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 487 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 488 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = temp2 - (priv.d_in2_sub2_sqr[col*pub.conv_rows+row] / pub.in_mod_elem);
# 489 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 490 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 491 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(temp2 < 0){
# 492 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    temp2 = 0;
# 493 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 494 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = sqrt(temp2);
# 495 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 496 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 497 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   temp2 = denomT * temp2;
# 498 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 499 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 500 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_conv[col*pub.conv_rows+row] = priv.d_conv[col*pub.conv_rows+row] / temp2;
# 501 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 502 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 503 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 504 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 505 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 506 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 507 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 508 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 509 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 510 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  cent = pub.sSize + pub.tSize + 1;
# 511 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = pub.frame_no-1+priv.point_no*pub.frames;
# 512 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  tMask_row = cent + priv.d_tRowLoc[pointer] - priv.d_Row[priv.point_no] - 1;
# 513 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  tMask_col = cent + priv.d_tColLoc[pointer] - priv.d_Col[priv.point_no] - 1;
# 514 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 515 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 516 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(ei_new = 0; ei_new < pub.tMask_elem; ei_new++){
# 517 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   priv.d_tMask[ei_new] = 0;
# 518 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 519 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tMask[tMask_col*pub.tMask_rows + tMask_row] = 1;
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 529 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=1; col<=pub.mask_conv_cols; col++){
# 530 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 531 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 532 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   j = col + pub.mask_conv_joffset;
# 533 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   jp1 = j + 1;
# 534 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.mask_cols < jp1){
# 535 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = jp1 - pub.mask_cols;
# 536 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 537 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 538 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja1 = 1;
# 539 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 540 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(pub.tMask_cols < j){
# 541 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = pub.tMask_cols;
# 542 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 543 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   else{
# 544 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ja2 = j;
# 545 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 546 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 547 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 548 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=1; row<=pub.mask_conv_rows; row++){
# 549 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 550 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 551 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    i = row + pub.mask_conv_ioffset;
# 552 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    ip1 = i + 1;
# 553 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 554 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.mask_rows < ip1){
# 555 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = ip1 - pub.mask_rows;
# 556 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 557 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 558 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia1 = 1;
# 559 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 560 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    if(pub.tMask_rows < i){
# 561 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = pub.tMask_rows;
# 562 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 563 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    else{
# 564 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     ia2 = i;
# 565 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 566 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 567 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    s = 0;
# 568 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 569 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 570 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    for(ja=ja1; ja<=ja2; ja++){
# 571 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     jb = jp1 - ja;
# 572 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     for(ia=ia1; ia<=ia2; ia++){
# 573 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      ib = ip1 - ia;
# 574 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
      s = s + priv.d_tMask[pub.tMask_rows*(ja-1)+ia-1] * 1;
# 575 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
     }
# 576 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    }
# 577 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 578 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    priv.d_mask_conv[(col-1)*pub.conv_rows+(row-1)] = priv.d_conv[(col-1)*pub.conv_rows+(row-1)] * s;
# 579 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 580 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 581 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 582 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 592 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  fin_max_val = 0;
# 593 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  fin_max_coo = 0;
# 594 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(i=0; i<pub.mask_conv_elem; i++){
# 595 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   if(priv.d_mask_conv[i]>fin_max_val){
# 596 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    fin_max_val = priv.d_mask_conv[i];
# 597 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
    fin_max_coo = i;
# 598 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 599 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 600 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 601 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 602 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 603 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 604 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 605 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 606 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_row = (fin_max_coo+1) % pub.mask_conv_rows - 1;
# 607 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_col = (fin_max_coo+1) / pub.mask_conv_rows;
# 608 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  if((fin_max_coo+1) % pub.mask_conv_rows == 0){
# 609 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   largest_row = pub.mask_conv_rows - 1;
# 610 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   largest_col = largest_col - 1;
# 611 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 612 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 613 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 614 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_row = largest_row + 1;
# 615 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  largest_col = largest_col + 1;
# 616 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  offset_row = largest_row - pub.in_mod_rows - (pub.sSize - pub.tSize);
# 617 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  offset_col = largest_col - pub.in_mod_cols - (pub.sSize - pub.tSize);
# 618 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  pointer = priv.point_no*pub.frames+pub.frame_no;
# 619 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tRowLoc[pointer] = priv.d_Row[priv.point_no] + offset_row;
# 620 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_tColLoc[pointer] = priv.d_Col[priv.point_no] + offset_col;
# 621 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 622 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 623 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 624 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 625 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 626 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 627 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 628 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 629 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 if(pub.frame_no != 0 && (pub.frame_no)%10 == 0){
# 630 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 631 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 632 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  loc_pointer = priv.point_no*pub.frames+pub.frame_no;
# 633 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_Row[priv.point_no] = priv.d_tRowLoc[loc_pointer];
# 634 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  priv.d_Col[priv.point_no] = priv.d_tColLoc[loc_pointer];
# 635 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 636 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 637 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  for(col=0; col<pub.in_mod_cols; col++){
# 638 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   for(row=0; row<pub.in_mod_rows; row++){
# 639 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 640 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 641 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_row = priv.d_Row[priv.point_no] - 25 + row - 1;
# 642 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_col = priv.d_Col[priv.point_no] - 25 + col - 1;
# 643 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   ori_pointer = ori_col*pub.frame_rows+ori_row;
# 644 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 645 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 646 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   d_in[col*pub.in_mod_rows+row] = pub.alpha*d_in[col*pub.in_mod_rows+row] + (1.00-pub.alpha)*pub.d_frame[ori_pointer];
# 647 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 648 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
   }
# 649 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
  }
# 650 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 651 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
 }
# 652 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
# 653 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/kernel.c"
}





static int module_init() {
    init_module(7611249383129670654UL, 3, 1, 0, 1, 1, 0, 1, 0, 0, 3,
                           &____alias_loc_id_0, (unsigned)52, (unsigned)0, (unsigned)0, (7611249383129670654UL + 1UL), (7611249383129670654UL + 2UL), (7611249383129670654UL + 3UL), (7611249383129670654UL + 4UL), (7611249383129670654UL + 5UL), (7611249383129670654UL + 6UL), (7611249383129670654UL + 9UL), (7611249383129670654UL + 10UL), (7611249383129670654UL + 11UL), (7611249383129670654UL + 12UL), (7611249383129670654UL + 13UL), (7611249383129670654UL + 14UL), (7611249383129670654UL + 15UL), (7611249383129670654UL + 16UL), (7611249383129670654UL + 17UL), (7611249383129670654UL + 18UL), (7611249383129670654UL + 19UL), (7611249383129670654UL + 20UL), (7611249383129670654UL + 21UL), (7611249383129670654UL + 22UL), (7611249383129670654UL + 23UL), (7611249383129670654UL + 24UL), (7611249383129670654UL + 25UL), (7611249383129670654UL + 26UL), (7611249383129670654UL + 27UL), (7611249383129670654UL + 28UL), (7611249383129670654UL + 29UL), (7611249383129670654UL + 30UL), (7611249383129670654UL + 32UL), (7611249383129670654UL + 33UL), (7611249383129670654UL + 34UL), (7611249383129670654UL + 35UL), (7611249383129670654UL + 36UL), (7611249383129670654UL + 37UL), (7611249383129670654UL + 38UL), (7611249383129670654UL + 39UL), (7611249383129670654UL + 40UL), (7611249383129670654UL + 41UL), (7611249383129670654UL + 42UL), (7611249383129670654UL + 43UL), (7611249383129670654UL + 44UL), (7611249383129670654UL + 45UL), (7611249383129670654UL + 46UL), (7611249383129670654UL + 47UL), (7611249383129670654UL + 48UL), (7611249383129670654UL + 49UL), (7611249383129670654UL + 50UL), (7611249383129670654UL + 51UL), (7611249383129670654UL + 52UL), (7611249383129670654UL + 53UL), (7611249383129670654UL + 54UL), (7611249383129670654UL + 423UL),
                            "kernel", (void *)(&kernel_npm), (void *)__null, 0, 2, (7611249383129670654UL + 2006UL), (7611249383129670654UL + 2007UL), 0UL, 3, "sqrt", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                           "kernel", &(____chimes_does_checkpoint_kernel_npm),
                             (7611249383129670654UL + 2UL), (7611249383129670654UL + 423UL),
                             (7611249383129670654UL + 2006UL), (7611249383129670654UL + 213UL),
                             (7611249383129670654UL + 2007UL), (7611249383129670654UL + 423UL),
                     "_private_struct", 21, "int", (int)__builtin_offsetof (struct _private_struct, point_no), "int", (int)__builtin_offsetof (struct _private_struct, in_pointer), "int*", (int)__builtin_offsetof (struct _private_struct, d_Row), "int*", (int)__builtin_offsetof (struct _private_struct, d_Col), "int*", (int)__builtin_offsetof (struct _private_struct, d_tRowLoc), "int*", (int)__builtin_offsetof (struct _private_struct, d_tColLoc), "float*", (int)__builtin_offsetof (struct _private_struct, d_T), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_sqr), "float*", (int)__builtin_offsetof (struct _private_struct, d_in_mod), "float*", (int)__builtin_offsetof (struct _private_struct, d_in_sqr), "float*", (int)__builtin_offsetof (struct _private_struct, d_conv), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_pad), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_sub), "float*", (int)__builtin_offsetof (struct _private_struct, d_in2_sub2_sqr), "float*", (int)__builtin_offsetof (struct _private_struct, d_tMask), "float*", (int)__builtin_offsetof (struct _private_struct, d_mask_conv), "float*", (int)__builtin_offsetof (struct _private_struct, in_partial_sum), "float*", (int)__builtin_offsetof (struct _private_struct, in_sqr_partial_sum), "float*", (int)__builtin_offsetof (struct _private_struct, par_max_val), "int*", (int)__builtin_offsetof (struct _private_struct, par_max_coo),
                     "_public_struct", 85, "int", (int)__builtin_offsetof (struct _public_struct, tSize), "int", (int)__builtin_offsetof (struct _public_struct, sSize), "int", (int)__builtin_offsetof (struct _public_struct, maxMove), "float", (int)__builtin_offsetof (struct _public_struct, alpha), "int", (int)__builtin_offsetof (struct _public_struct, endoPoints), "int", (int)__builtin_offsetof (struct _public_struct, d_endo_mem), "int*", (int)__builtin_offsetof (struct _public_struct, d_endoRow), "int*", (int)__builtin_offsetof (struct _public_struct, d_endoCol), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEndoRowLoc), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEndoColLoc), "float*", (int)__builtin_offsetof (struct _public_struct, d_endoT), "int", (int)__builtin_offsetof (struct _public_struct, epiPoints), "int", (int)__builtin_offsetof (struct _public_struct, d_epi_mem), "int*", (int)__builtin_offsetof (struct _public_struct, d_epiRow), "int*", (int)__builtin_offsetof (struct _public_struct, d_epiCol), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEpiRowLoc), "int*", (int)__builtin_offsetof (struct _public_struct, d_tEpiColLoc), "float*", (int)__builtin_offsetof (struct _public_struct, d_epiT), "int", (int)__builtin_offsetof (struct _public_struct, allPoints), "%struct.avi_t*", (int)__builtin_offsetof (struct _public_struct, d_frames), "int", (int)__builtin_offsetof (struct _public_struct, frames), "int", (int)__builtin_offsetof (struct _public_struct, frame_no), "float*", (int)__builtin_offsetof (struct _public_struct, d_frame), "int", (int)__builtin_offsetof (struct _public_struct, frame_rows), "int", (int)__builtin_offsetof (struct _public_struct, frame_cols), "int", (int)__builtin_offsetof (struct _public_struct, frame_elem), "int", (int)__builtin_offsetof (struct _public_struct, frame_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_mem), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_rows), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_cols), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_elem), "int", (int)__builtin_offsetof (struct _public_struct, in_mod_mem), "int", (int)__builtin_offsetof (struct _public_struct, ioffset), "int", (int)__builtin_offsetof (struct _public_struct, joffset), "int", (int)__builtin_offsetof (struct _public_struct, conv_rows), "int", (int)__builtin_offsetof (struct _public_struct, conv_cols), "int", (int)__builtin_offsetof (struct _public_struct, conv_elem), "int", (int)__builtin_offsetof (struct _public_struct, conv_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_add_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_add_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_pad_cumv_sel2_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_mem), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_rowlow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_rowhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_collow), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub_cumh_sel2_colhig), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_rows), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_cols), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_elem), "int", (int)__builtin_offsetof (struct _public_struct, in2_sub2_sqr_mem), "int", (int)__builtin_offsetof (struct _public_struct, tMask_rows), "int", (int)__builtin_offsetof (struct _public_struct, tMask_cols), "int", (int)__builtin_offsetof (struct _public_struct, tMask_elem), "int", (int)__builtin_offsetof (struct _public_struct, tMask_mem), "int", (int)__builtin_offsetof (struct _public_struct, mask_rows), "int", (int)__builtin_offsetof (struct _public_struct, mask_cols), "int", (int)__builtin_offsetof (struct _public_struct, mask_elem), "int", (int)__builtin_offsetof (struct _public_struct, mask_mem), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_rows), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_cols), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_elem), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_mem), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_ioffset), "int", (int)__builtin_offsetof (struct _public_struct, mask_conv_joffset),
                     "avi_t", 0,
                             "kernel", "_Z6kernel14_public_struct15_private_struct", 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
