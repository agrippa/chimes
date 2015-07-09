# 1 "avimod.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "avimod.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_chop_flip_image_npm = 1;
static int ____chimes_does_checkpoint_get_frame_npm = 1;
static int ____chimes_does_checkpoint_AVI_print_error_npm = 1;
static int ____chimes_does_checkpoint_AVI_read_frame_npm = 1;
static int ____chimes_does_checkpoint_AVI_set_video_position_npm = 1;
static int ____chimes_does_checkpoint_AVI_video_height_npm = 1;
static int ____chimes_does_checkpoint_AVI_video_width_npm = 1;

static int ____must_checkpoint_get_frame_cell_file_0 = 2;
static int ____must_checkpoint_get_frame_frame_num_0 = 2;
static int ____must_checkpoint_get_frame_cropped_0 = 2;
static int ____must_checkpoint_get_frame_scaled_0 = 2;
static int ____must_checkpoint_get_frame_converted_0 = 2;
static int ____must_checkpoint_get_frame_dummy_0 = 2;
static int ____must_checkpoint_get_frame_width_0 = 2;
static int ____must_checkpoint_get_frame_height_0 = 2;
static int ____must_checkpoint_get_frame_image_buf_0 = 2;

static int ____must_manage_chop_flip_image = 2;
static int ____must_manage_get_frame = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
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
# 68 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 2 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 3 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 4 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 5 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 6 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 7 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.h" 1

extern "C" {







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
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avilib.h" 2
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
# 9 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c" 2
# 9 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 10 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 11 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 12 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 13 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 14 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 15 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
float* chop_flip_image_npm( char *image, int height, int width, int cropped, int scaled, int converted);
float* chop_flip_image_quick( char *image, int height, int width, int cropped, int scaled, int converted); float* chop_flip_image( char *image, int height, int width, int cropped, int scaled, int converted);
float* chop_flip_image_resumable( char *image,
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int height,
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int width,
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int cropped,
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int scaled,
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int converted) {const int ____chimes_did_disable0 = new_stack((void *)(&chop_flip_image), "chop_flip_image", &____must_manage_chop_flip_image, 6, 0, (size_t)(17693923976101510202UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int top; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int bottom; ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int left; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int right; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(cropped==1){
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  top = 0;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  bottom = 0;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  left = 0;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  right = 0;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 else{
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  top = 0;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  bottom = height - 1;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  left = 0;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  right = width - 1;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  int height_new; height_new = (bottom - top + 1) ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  int width_new; width_new = (right - left + 1) ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int i; int j; ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *result; result = ((float *)malloc_wrapper(height_new * width_new * sizeof(float), 17693923976101510177UL, 0, 0)) ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float temp; ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if (scaled) {
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   float scale; scale = (1. / 255.) ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <height_new; i++){
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <width_new; j++){
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    temp = (float) image[((height - 1 - (i + top)) * width) + (j + left)] * scale;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    if(temp<0){
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp + 256;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    else{
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 } else {
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <height_new; i++){
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <width_new; j++){
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    temp = (float) image[((height - 1 - (i + top)) * width) + (j + left)] ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    if(temp<0){
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp + 256;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    else{
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp;
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *result_converted; result_converted = ((float *)malloc_wrapper(height_new * width_new * sizeof(float), 17693923976101510177UL, 0, 0)) ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(converted==1){
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <width_new; i++){
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <height_new; j++){
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    result_converted[i*height_new+j] = result[j*width_new+i];
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 else{
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  result_converted = result;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 free_wrapper(result, 17693923976101510177UL);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (result_converted); rm_stack(true, 17693923976101510177UL, "chop_flip_image", &____must_manage_chop_flip_image, ____alias_loc_id_4, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
rm_stack(true, 17693923976101510177UL, "chop_flip_image", &____must_manage_chop_flip_image, ____alias_loc_id_4, ____chimes_did_disable0, false); }
# 97 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 98 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 99 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 100 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
float* get_frame_npm( avi_t* cell_file, int frame_num, int cropped, int scaled, int converted);static void (*____chimes_extern_func_AVI_print_error)(char *) = AVI_print_error;static long (*____chimes_extern_func_AVI_read_frame)(avi_t *, char *, int *) = AVI_read_frame;static int (*____chimes_extern_func_AVI_set_video_position)(avi_t *, long) = AVI_set_video_position;static int (*____chimes_extern_func_AVI_video_height)(avi_t *) = AVI_video_height;static int (*____chimes_extern_func_AVI_video_width)(avi_t *) = AVI_video_width;
float* get_frame_quick( avi_t* cell_file, int frame_num, int cropped, int scaled, int converted); float* get_frame( avi_t* cell_file, int frame_num, int cropped, int scaled, int converted);
float* get_frame_resumable( avi_t* cell_file,
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int frame_num,
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int cropped,
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int scaled,
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int converted) {const int ____chimes_did_disable1 = new_stack((void *)(&get_frame), "get_frame", &____must_manage_get_frame, 5, 5, (size_t)(17693923976101510283UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "get_frame|cell_file|0", &____must_checkpoint_get_frame_cell_file_0, "%struct.avi_t*", (void *)(&cell_file), (size_t)8, 1, 0, 0, "get_frame|frame_num|0", &____must_checkpoint_get_frame_frame_num_0, "i32", (void *)(&frame_num), (size_t)4, 0, 0, 0, "get_frame|cropped|0", &____must_checkpoint_get_frame_cropped_0, "i32", (void *)(&cropped), (size_t)4, 0, 0, 0, "get_frame|scaled|0", &____must_checkpoint_get_frame_scaled_0, "i32", (void *)(&scaled), (size_t)4, 0, 0, 0, "get_frame|converted|0", &____must_checkpoint_get_frame_converted_0, "i32", (void *)(&converted), (size_t)4, 0, 0, 0) ; char *image_buf;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
int height;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
int width;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
int dummy;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if (____must_checkpoint_get_frame_image_buf_0 || ____must_checkpoint_get_frame_height_0 || ____must_checkpoint_get_frame_width_0 || ____must_checkpoint_get_frame_dummy_0) { register_stack_vars(4, "get_frame|image_buf|0", &____must_checkpoint_get_frame_image_buf_0, "i8*", (void *)(&image_buf), (size_t)8, 1, 0, 0, "get_frame|height|0", &____must_checkpoint_get_frame_height_0, "i32", (void *)(&height), (size_t)4, 0, 0, 0, "get_frame|width|0", &____must_checkpoint_get_frame_width_0, "i32", (void *)(&width), (size_t)4, 0, 0, 0, "get_frame|dummy|0", &____must_checkpoint_get_frame_dummy_0, "i32", (void *)(&dummy), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } ; ;
# 107 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  ;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     call_lbl_1: width = ( ({ calling((void*)AVI_video_width, 1, ____alias_loc_id_3, 0UL, 1, (size_t)(17693923976101510283UL)); (AVI_video_width)(cell_file); }) ) ;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     call_lbl_2: height = ( ({ calling((void*)AVI_video_height, 2, ____alias_loc_id_2, 0UL, 1, (size_t)(17693923976101510283UL)); (AVI_video_height)(cell_file); }) ) ;
# 112 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int status; ;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 115 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  call_lbl_3: ({ calling((void*)AVI_set_video_position, 3, ____alias_loc_id_1, 0UL, 2, (size_t)(17693923976101510283UL), (size_t)(0UL)); (AVI_set_video_position)(cell_file, frame_num); }) ;
# 116 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    image_buf = ((char *)malloc_wrapper(width * height * sizeof(char), 17693923976101510254UL, 0, 0)) ;
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 alias_group_changed(____alias_loc_id_0); call_lbl_6: status = ({ calling((void*)AVI_read_frame, 6, ____alias_loc_id_0, 0UL, 3, (size_t)(17693923976101510283UL), (size_t)(17693923976101510254UL), (size_t)(17693923976101510217UL)); (AVI_read_frame)(cell_file, image_buf, &dummy); }) ;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(status == -1) {
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   call_lbl_7: ({ char * ____chimes_arg7; if (!____chimes_replaying) { ____chimes_arg7 = ((char *)"Error with AVI_read_frame"); } calling((void*)AVI_print_error, 7, 0, 0UL, 1, (size_t)(17693923976101510297UL)); (AVI_print_error)(____chimes_arg7); }) ;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  exit(-1);
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float *image_chopped; ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 image_chopped = ({ calling_npm("chop_flip_image", 0); chop_flip_image_npm(image_buf, height, width, cropped, scaled, converted); });
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 free_wrapper(image_buf, 17693923976101510254UL);
# 136 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 137 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (image_chopped); rm_stack(true, 17693923976101510274UL, "get_frame", &____must_manage_get_frame, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 140 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
rm_stack(true, 17693923976101510274UL, "get_frame", &____must_manage_get_frame, ____alias_loc_id_5, ____chimes_did_disable1, false); }
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
float* chop_flip_image_quick( char *image,
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int height,
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int width,
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int cropped,
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int scaled,
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int converted) {const int ____chimes_did_disable0 = new_stack((void *)(&chop_flip_image), "chop_flip_image", &____must_manage_chop_flip_image, 6, 0, (size_t)(17693923976101510202UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 22 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int top; ;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int bottom; ;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int left; ;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int right; ;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(cropped==1){
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  top = 0;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  bottom = 0;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  left = 0;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  right = 0;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 else{
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  top = 0;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  bottom = height - 1;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  left = 0;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  right = width - 1;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  int height_new; height_new = (bottom - top + 1) ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  int width_new; width_new = (right - left + 1) ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int i; int j; ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *result; result = ((float *)malloc_wrapper(height_new * width_new * sizeof(float), 17693923976101510177UL, 0, 0)) ;
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float temp; ;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if (scaled) {
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   float scale; scale = (1. / 255.) ;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <height_new; i++){
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <width_new; j++){
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    temp = (float) image[((height - 1 - (i + top)) * width) + (j + left)] * scale;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    if(temp<0){
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp + 256;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    else{
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 } else {
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <height_new; i++){
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <width_new; j++){
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    temp = (float) image[((height - 1 - (i + top)) * width) + (j + left)] ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    if(temp<0){
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp + 256;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    else{
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp;
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *result_converted; result_converted = ((float *)malloc_wrapper(height_new * width_new * sizeof(float), 17693923976101510177UL, 0, 0)) ;
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(converted==1){
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <width_new; i++){
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <height_new; j++){
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    result_converted[i*height_new+j] = result[j*width_new+i];
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 else{
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  result_converted = result;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 free_wrapper(result, 17693923976101510177UL);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *____chimes_ret_var_0; ; ____chimes_ret_var_0 = (result_converted); rm_stack(true, 17693923976101510177UL, "chop_flip_image", &____must_manage_chop_flip_image, ____alias_loc_id_4, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
rm_stack(true, 17693923976101510177UL, "chop_flip_image", &____must_manage_chop_flip_image, ____alias_loc_id_4, ____chimes_did_disable0, false); }

float* chop_flip_image( char *image,
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int height,
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int width,
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int cropped,
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int scaled,
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int converted) { return (____chimes_replaying ? chop_flip_image_resumable(image, height, width, cropped, scaled, converted) : chop_flip_image_quick(image, height, width, cropped, scaled, converted)); }
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
float* get_frame_quick( avi_t* cell_file,
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int frame_num,
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int cropped,
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int scaled,
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int converted) {const int ____chimes_did_disable1 = new_stack((void *)(&get_frame), "get_frame", &____must_manage_get_frame, 5, 5, (size_t)(17693923976101510283UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "get_frame|cell_file|0", &____must_checkpoint_get_frame_cell_file_0, "%struct.avi_t*", (void *)(&cell_file), (size_t)8, 1, 0, 0, "get_frame|frame_num|0", &____must_checkpoint_get_frame_frame_num_0, "i32", (void *)(&frame_num), (size_t)4, 0, 0, 0, "get_frame|cropped|0", &____must_checkpoint_get_frame_cropped_0, "i32", (void *)(&cropped), (size_t)4, 0, 0, 0, "get_frame|scaled|0", &____must_checkpoint_get_frame_scaled_0, "i32", (void *)(&scaled), (size_t)4, 0, 0, 0, "get_frame|converted|0", &____must_checkpoint_get_frame_converted_0, "i32", (void *)(&converted), (size_t)4, 0, 0, 0) ; char *image_buf;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
int height;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
int width;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
int dummy;
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if (____must_checkpoint_get_frame_image_buf_0 || ____must_checkpoint_get_frame_height_0 || ____must_checkpoint_get_frame_width_0 || ____must_checkpoint_get_frame_dummy_0) { register_stack_vars(4, "get_frame|image_buf|0", &____must_checkpoint_get_frame_image_buf_0, "i8*", (void *)(&image_buf), (size_t)8, 1, 0, 0, "get_frame|height|0", &____must_checkpoint_get_frame_height_0, "i32", (void *)(&height), (size_t)4, 0, 0, 0, "get_frame|width|0", &____must_checkpoint_get_frame_width_0, "i32", (void *)(&width), (size_t)4, 0, 0, 0, "get_frame|dummy|0", &____must_checkpoint_get_frame_dummy_0, "i32", (void *)(&dummy), (size_t)4, 0, 0, 0); } ; ;
# 107 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  ;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     call_lbl_1: width = ( ({ calling((void*)AVI_video_width, 1, ____alias_loc_id_3, 0UL, 1, (size_t)(17693923976101510283UL)); (AVI_video_width)(cell_file); }) ) ;
# 111 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     call_lbl_2: height = ( ({ calling((void*)AVI_video_height, 2, ____alias_loc_id_2, 0UL, 1, (size_t)(17693923976101510283UL)); (AVI_video_height)(cell_file); }) ) ;
# 112 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int status; ;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 115 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  call_lbl_3: ({ calling((void*)AVI_set_video_position, 3, ____alias_loc_id_1, 0UL, 2, (size_t)(17693923976101510283UL), (size_t)(0UL)); (AVI_set_video_position)(cell_file, frame_num); }) ;
# 116 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    image_buf = ((char *)malloc_wrapper(width * height * sizeof(char), 17693923976101510254UL, 0, 0)) ;
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 alias_group_changed(____alias_loc_id_0); call_lbl_6: status = ({ calling((void*)AVI_read_frame, 6, ____alias_loc_id_0, 0UL, 3, (size_t)(17693923976101510283UL), (size_t)(17693923976101510254UL), (size_t)(17693923976101510217UL)); (AVI_read_frame)(cell_file, image_buf, &dummy); }) ;
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(status == -1) {
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   call_lbl_7: ({ calling((void*)AVI_print_error, 7, 0, 0UL, 1, (size_t)(17693923976101510297UL)); (AVI_print_error)((char *)"Error with AVI_read_frame"); }) ;
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  exit(-1);
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float *image_chopped; ;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 image_chopped = ({ calling_npm("chop_flip_image", 0); chop_flip_image_npm(image_buf, height, width, cropped, scaled, converted); });
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 free_wrapper(image_buf, 17693923976101510254UL);
# 136 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 137 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (image_chopped); rm_stack(true, 17693923976101510274UL, "get_frame", &____must_manage_get_frame, ____alias_loc_id_5, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 140 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
rm_stack(true, 17693923976101510274UL, "get_frame", &____must_manage_get_frame, ____alias_loc_id_5, ____chimes_did_disable1, false); }

float* get_frame( avi_t* cell_file,
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int frame_num,
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int cropped,
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int scaled,
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int converted) { return (____chimes_replaying ? get_frame_resumable(cell_file, frame_num, cropped, scaled, converted) : get_frame_quick(cell_file, frame_num, cropped, scaled, converted)); }
# 16 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
float* chop_flip_image_npm( char *image,
# 17 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int height,
# 18 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int width,
# 19 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int cropped,
# 20 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int scaled,
# 21 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
        int converted) {
# 22 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 23 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 24 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int top;
# 25 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int bottom;
# 26 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int left;
# 27 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int right;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(cropped==1){
# 29 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  top = 0;
# 30 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  bottom = 0;
# 31 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  left = 0;
# 32 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  right = 0;
# 33 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 34 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 else{
# 35 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  top = 0;
# 36 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  bottom = height - 1;
# 37 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  left = 0;
# 38 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  right = width - 1;
# 39 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 40 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 41 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 42 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int height_new = bottom - top + 1;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int width_new = right - left + 1;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 45 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 46 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int i, j;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 48 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 49 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float* result = (float *) malloc_wrapper(height_new * width_new * sizeof(float), 17693923976101510177UL, 0, 0);
# 50 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 51 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 52 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float temp;
# 53 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if (scaled) {
# 54 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float scale = 1.0 / 255.0;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <height_new; i++){
# 56 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <width_new; j++){
# 57 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    temp = (float) image[((height - 1 - (i + top)) * width) + (j + left)] * scale;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    if(temp<0){
# 59 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp + 256;
# 60 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 61 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    else{
# 62 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp;
# 63 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 64 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 65 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 66 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 } else {
# 67 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <height_new; i++){
# 68 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <width_new; j++){
# 69 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    temp = (float) image[((height - 1 - (i + top)) * width) + (j + left)] ;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    if(temp<0){
# 71 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp + 256;
# 72 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 73 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    else{
# 74 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
     result[i*width_new+j] = temp;
# 75 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 77 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 78 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 79 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 80 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 81 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float* result_converted = (float *) malloc_wrapper(height_new * width_new * sizeof(float), 17693923976101510177UL, 0, 0);
# 82 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(converted==1){
# 83 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  for(i = 0; i <width_new; i++){
# 84 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   for(j = 0; j <height_new; j++){
# 85 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
    result_converted[i*height_new+j] = result[j*width_new+i];
# 86 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
   }
# 87 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  }
# 88 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 89 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 else{
# 90 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  result_converted = result;
# 91 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 92 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 free_wrapper(result, 17693923976101510177UL);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 94 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float * ____chimes_ret_var_0; ____chimes_ret_var_0 = (result_converted); return ____chimes_ret_var_0; ;
# 96 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
}
# 102 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
float* get_frame_npm( avi_t* cell_file,
# 103 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int frame_num,
# 104 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int cropped,
# 105 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int scaled,
# 106 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
      int converted) {
# 107 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 108 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 109 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int dummy;
# 110 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int width = (*____chimes_extern_func_AVI_video_width)(cell_file);
# 111 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int height = (*____chimes_extern_func_AVI_video_height)(cell_file);
# 112 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 int status;
# 113 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 115 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 (*____chimes_extern_func_AVI_set_video_position)(cell_file, frame_num);
# 116 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 117 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 118 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 char* image_buf = (char*) malloc_wrapper(width * height * sizeof(char), 17693923976101510254UL, 0, 0);
# 119 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 status = (*____chimes_extern_func_AVI_read_frame)(cell_file, image_buf, &dummy);
# 120 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 if(status == -1) {
# 121 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  (*____chimes_extern_func_AVI_print_error)((char*) "Error with AVI_read_frame");
# 122 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  exit(-1);
# 123 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 }
# 124 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 125 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 126 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 float* image_chopped;
# 127 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 image_chopped = chop_flip_image_npm(image_buf, height, width, cropped, scaled, converted);
# 133 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 134 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 135 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
 free_wrapper(image_buf, 17693923976101510254UL);
# 136 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 137 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 138 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
  float * ____chimes_ret_var_1; ____chimes_ret_var_1 = (image_chopped); return ____chimes_ret_var_1; ;
# 139 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
# 140 "/scratch/jmg3/rodinia_3.0/openmp/heartwall/AVI/avimod.c"
}





static int module_init() {
    init_module(17693923976101509920UL, 8, 2, 9, 6, 2, 5, 7, 1, 0, 4,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (unsigned)1, (17693923976101509920UL + 301UL), "AVI_read_frame", (unsigned)3, (17693923976101509920UL + 297UL), (17693923976101509920UL + 334UL), (17693923976101509920UL + 363UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)0, (unsigned)1, (17693923976101509920UL + 299UL), "AVI_set_video_position", (unsigned)1, (17693923976101509920UL + 363UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)0, (unsigned)1, (17693923976101509920UL + 298UL), "AVI_video_height", (unsigned)1, (17693923976101509920UL + 363UL),
                           &____alias_loc_id_3, (unsigned)5, (unsigned)0, (unsigned)1, (17693923976101509920UL + 292UL), (17693923976101509920UL + 293UL), (17693923976101509920UL + 294UL), (17693923976101509920UL + 295UL), (17693923976101509920UL + 296UL), "AVI_video_width", (unsigned)1, (17693923976101509920UL + 363UL),
                           &____alias_loc_id_4, (unsigned)20, (unsigned)0, (unsigned)0, (17693923976101509920UL + 1UL), (17693923976101509920UL + 2UL), (17693923976101509920UL + 3UL), (17693923976101509920UL + 4UL), (17693923976101509920UL + 5UL), (17693923976101509920UL + 6UL), (17693923976101509920UL + 7UL), (17693923976101509920UL + 8UL), (17693923976101509920UL + 9UL), (17693923976101509920UL + 10UL), (17693923976101509920UL + 11UL), (17693923976101509920UL + 12UL), (17693923976101509920UL + 13UL), (17693923976101509920UL + 14UL), (17693923976101509920UL + 15UL), (17693923976101509920UL + 16UL), (17693923976101509920UL + 17UL), (17693923976101509920UL + 18UL), (17693923976101509920UL + 19UL), (17693923976101509920UL + 257UL),
                           &____alias_loc_id_5, (unsigned)3, (unsigned)0, (unsigned)0, (17693923976101509920UL + 300UL), (17693923976101509920UL + 302UL), (17693923976101509920UL + 303UL),
                            "chop_flip_image", 0, "chop_flip_image", "_Z19chop_flip_image_npmPciiiii", 0, 6, (17693923976101509920UL + 282UL), 0UL, 0UL, 0UL, 0UL, 0UL, (17693923976101509920UL + 257UL), 3, "malloc", 1, 0UL, (17693923976101509920UL + 257UL), "malloc", 1, 0UL, (17693923976101509920UL + 257UL), "free", 1, (17693923976101509920UL + 257UL), 0UL,
                            "get_frame", 0, "get_frame", "_Z13get_frame_npmP5avi_tiiii", 4, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_2, &____alias_loc_id_3, 5, (17693923976101509920UL + 363UL), 0UL, 0UL, 0UL, 0UL, (17693923976101509920UL + 354UL), 9, "AVI_video_width", 1, (17693923976101509920UL + 363UL), 0UL, "AVI_video_height", 1, (17693923976101509920UL + 363UL), 0UL, "AVI_set_video_position", 2, (17693923976101509920UL + 363UL), 0UL, 0UL, "malloc", 1, 0UL, (17693923976101509920UL + 334UL), "AVI_read_frame", 3, (17693923976101509920UL + 363UL), (17693923976101509920UL + 334UL), (17693923976101509920UL + 297UL), 0UL, "AVI_print_error", 1, (17693923976101509920UL + 377UL), 0UL, "exit", 1, 0UL, 0UL, "chop_flip_image", 6, (17693923976101509920UL + 334UL), 0UL, 0UL, 0UL, 0UL, 0UL, (17693923976101509920UL + 354UL), "free", 1, (17693923976101509920UL + 334UL), 0UL,
                               "AVI_print_error", (void **)&(____chimes_extern_func_AVI_print_error),
                               "AVI_read_frame", (void **)&(____chimes_extern_func_AVI_read_frame),
                               "AVI_set_video_position", (void **)&(____chimes_extern_func_AVI_set_video_position),
                               "AVI_video_height", (void **)&(____chimes_extern_func_AVI_video_height),
                               "AVI_video_width", (void **)&(____chimes_extern_func_AVI_video_width),
                           "chop_flip_image", &(____chimes_does_checkpoint_chop_flip_image_npm),
                           "get_frame", &(____chimes_does_checkpoint_get_frame_npm),
                           "AVI_print_error", &(____chimes_does_checkpoint_AVI_print_error_npm),
                           "AVI_read_frame", &(____chimes_does_checkpoint_AVI_read_frame_npm),
                           "AVI_set_video_position", &(____chimes_does_checkpoint_AVI_set_video_position_npm),
                           "AVI_video_height", &(____chimes_does_checkpoint_AVI_video_height_npm),
                           "AVI_video_width", &(____chimes_does_checkpoint_AVI_video_width_npm),
                             (17693923976101509920UL + 15UL), (17693923976101509920UL + 257UL),
                             (17693923976101509920UL + 19UL), (17693923976101509920UL + 257UL),
                             (17693923976101509920UL + 18UL), (17693923976101509920UL + 257UL),
                             (17693923976101509920UL + 302UL), (17693923976101509920UL + 354UL),
                             (17693923976101509920UL + 303UL), (17693923976101509920UL + 354UL),
                             (17693923976101509920UL + 1UL), (17693923976101509920UL + 282UL),
                             (17693923976101509920UL + 301UL), (17693923976101509920UL + 334UL),
                             (17693923976101509920UL + 292UL), (17693923976101509920UL + 363UL),
                     "audio_index_entry", 0UL, 0,
                     "avi_t", 8704UL, 26, "long int", (int)__builtin_offsetof (avi_t, fdes), "long int", (int)__builtin_offsetof (avi_t, mode), "long int", (int)__builtin_offsetof (avi_t, width), "long int", (int)__builtin_offsetof (avi_t, height), "double", (int)__builtin_offsetof (avi_t, fps), "[ 8 x char ]", (int)__builtin_offsetof (avi_t, compressor), "[ 8 x char ]", (int)__builtin_offsetof (avi_t, compressor2), "long int", (int)__builtin_offsetof (avi_t, video_strn), "long int", (int)__builtin_offsetof (avi_t, video_frames), "[ 4 x char ]", (int)__builtin_offsetof (avi_t, video_tag), "long int", (int)__builtin_offsetof (avi_t, video_pos), "long unsigned int", (int)__builtin_offsetof (avi_t, max_len), "[ 8 x %struct.track_s ]", (int)__builtin_offsetof (avi_t, track), "long unsigned int", (int)__builtin_offsetof (avi_t, pos), "long int", (int)__builtin_offsetof (avi_t, n_idx), "long int", (int)__builtin_offsetof (avi_t, max_idx), "long int", (int)__builtin_offsetof (avi_t, v_codech_off), "long int", (int)__builtin_offsetof (avi_t, v_codecf_off), "[ 16 x unsigned char ]*", (int)__builtin_offsetof (avi_t, idx), "%struct.video_index_entry*", (int)__builtin_offsetof (avi_t, video_index), "long unsigned int", (int)__builtin_offsetof (avi_t, last_pos), "long unsigned int", (int)__builtin_offsetof (avi_t, last_len), "int", (int)__builtin_offsetof (avi_t, must_use_index), "long unsigned int", (int)__builtin_offsetof (avi_t, movi_start), "int", (int)__builtin_offsetof (avi_t, anum), "int", (int)__builtin_offsetof (avi_t, aptr),
                     "track_s", 896UL, 14, "long int", (int)__builtin_offsetof (struct track_s, a_fmt), "long int", (int)__builtin_offsetof (struct track_s, a_chans), "long int", (int)__builtin_offsetof (struct track_s, a_rate), "long int", (int)__builtin_offsetof (struct track_s, a_bits), "long int", (int)__builtin_offsetof (struct track_s, mp3rate), "long int", (int)__builtin_offsetof (struct track_s, audio_strn), "long int", (int)__builtin_offsetof (struct track_s, audio_bytes), "long int", (int)__builtin_offsetof (struct track_s, audio_chunks), "[ 4 x char ]", (int)__builtin_offsetof (struct track_s, audio_tag), "long int", (int)__builtin_offsetof (struct track_s, audio_posc), "long int", (int)__builtin_offsetof (struct track_s, audio_posb), "long int", (int)__builtin_offsetof (struct track_s, a_codech_off), "long int", (int)__builtin_offsetof (struct track_s, a_codecf_off), "%struct.audio_index_entry*", (int)__builtin_offsetof (struct track_s, audio_index),
                     "video_index_entry", 0UL, 0,
                             "chop_flip_image", "chop_flip_image", 0,
                             "get_frame", "get_frame", 6, "AVI_video_width", "AVI_video_height", "AVI_set_video_position", "AVI_read_frame", "AVI_print_error", "chop_flip_image",
                        "get_frame|cell_file|0", 3, "AVI_video_width", "AVI_video_height", "AVI_set_video_position",
                        "get_frame|frame_num|0", 2, "AVI_video_width", "AVI_video_height",
                        "get_frame|cropped|0", 4, "AVI_video_width", "AVI_video_height", "AVI_set_video_position", "AVI_read_frame",
                        "get_frame|scaled|0", 4, "AVI_video_width", "AVI_video_height", "AVI_set_video_position", "AVI_read_frame",
                        "get_frame|converted|0", 4, "AVI_video_width", "AVI_video_height", "AVI_set_video_position", "AVI_read_frame",
                        "get_frame|dummy|0", 1, "get_frame",
                        "get_frame|width|0", 3, "AVI_video_height", "AVI_set_video_position", "AVI_read_frame",
                        "get_frame|height|0", 2, "AVI_set_video_position", "AVI_read_frame",
                        "get_frame|image_buf|0", 1, "AVI_read_frame",
        "chop_flip_image", 17693923976101510274UL, (int)6, 17693923976101510254UL, 0UL, 0UL, 0UL, 0UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
