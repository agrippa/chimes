# 1 "uts.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "uts.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2

extern void init_chimes();
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned naliases, ...);
extern int get_next_call();
extern void new_stack(void *func_ptr, unsigned n_local_arg_aliases,
        unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int nstructs, ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias);
extern void register_stack_var(const char *mangled_name,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, unsigned threads_in_region, bool spawns_threads,
        bool is_parallel_for, bool is_critical, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 53 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 15 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 61 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 32 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 33 "/usr/include/sys/_types.h" 2 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 64 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 148 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 150 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 151 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 154 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 155 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 156 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 268 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 330 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 347 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 366 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 388 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal(int, void (*)(int)))(int);
}
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 1 3 4
# 9 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;





# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 63 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 64 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 382 "/usr/include/sys/resource.h" 3 4
extern "C" {
int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
}
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{



    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;

}
# 91 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 247 "/usr/include/sys/wait.h" 3 4
extern "C" {
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 31 "/usr/include/alloca.h" 3 4
extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4
# 76 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;


# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 100 "/usr/include/stdlib.h" 2 3 4
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 127 "/usr/include/stdlib.h" 3 4
extern "C" {
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
int posix_memalign(void **, size_t, size_t) ;
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) ;
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );






# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) ;
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) ;







char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((deprecated));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));




int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));




void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) ;




void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) ;




void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);






}
# 16 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 69 "/usr/include/string.h" 3 4
extern "C" {
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
}
# 103 "/usr/include/string.h" 3 4
extern "C" {
char *strtok_r(char *, const char *, char **);
}
# 115 "/usr/include/string.h" 3 4
extern "C" {
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
}
# 129 "/usr/include/string.h" 3 4
extern "C" {
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) ;
char *strndup(const char *, size_t) ;
size_t strnlen(const char *, size_t) ;
char *strsignal(int sig);
}





# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4

extern "C" {
errno_t memset_s(void *, rsize_t, int, rsize_t) ;
}





# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/usr/include/string.h" 2 3 4

extern "C" {
void *memmem(const void *, size_t, const void *, size_t) ;
void memset_pattern4(void *, const void *, size_t) ;
void memset_pattern8(void *, const void *, size_t) ;
void memset_pattern16(void *, const void *, size_t) ;

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * , void * , ssize_t);
}






# 1 "/usr/include/strings.h" 1 3 4
# 67 "/usr/include/strings.h" 3 4
extern "C" {


int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);
}



extern "C" {
int ffsl(long) ;
int ffsll(long long) ;
int fls(int) ;
int flsl(long) ;
int flsll(long long) ;
}

# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 17 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 71 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
extern "C" {

int renameat(int, const char *, int, const char *) ;

}
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {
extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
}
# 230 "/usr/include/stdio.h" 3 4
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);



FILE *fopen(const char * , const char * ) __asm("_" "fopen" );

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" );
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen" );
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * , ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * , va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
}
# 292 "/usr/include/stdio.h" 3 4
extern "C" {



char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
}
# 314 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );

}
# 336 "/usr/include/stdio.h" 3 4
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
}







inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 373 "/usr/include/stdio.h" 3 4
extern "C" {
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
}
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4

extern "C" {
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
}



extern "C" {
int snprintf(char * , size_t, const char * , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * , va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * , size_t, const char * , va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
}
# 438 "/usr/include/stdio.h" 3 4
extern "C" {
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char ** , size_t * , int, FILE * ) ;
ssize_t getline(char ** , size_t * , FILE * ) ;
}







extern "C" {
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
}
# 18 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c" 2
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 1 3 4
# 48 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern "C" {
# 59 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 126 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 159 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 203 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750797e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= double(2.22507385850720138309e-308L);
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 337 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 580 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __inff(void) __attribute__((deprecated));
extern double __inf(void) __attribute__((deprecated));
extern long double __infl(void) __attribute__((deprecated));

extern float __nan(void) ;
# 612 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __exp10f(float) ;
extern double __exp10(double) ;





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) ;
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) ;
# 629 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;






inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) ;
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) ;






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}






extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double);
extern int signgam;
# 727 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern long int rinttol(double) __attribute__((deprecated));

extern long int roundtol(double) __attribute__((deprecated));

extern double drem(double, double) __attribute__((deprecated));

extern int finite(double) __attribute__((deprecated));

extern double gamma(double) __attribute__((deprecated));

extern double significand(double) __attribute__((deprecated));
# 752 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
}
# 19 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 75 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 45 "/usr/include/sys/_types/_fd_def.h" 3 4
extern "C" {
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;
}


static inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 76 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/time.h" 2 3 4


# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 80 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 81 "/usr/include/sys/time.h" 2 3 4





struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 105 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 106 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 107 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 108 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 109 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 110 "/usr/include/sys/time.h" 2 3 4



# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 114 "/usr/include/sys/time.h" 2 3 4
# 124 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 167 "/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};




# 1 "/usr/include/time.h" 1 3 4
# 67 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4





struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 96 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime" );
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );

}
# 179 "/usr/include/sys/time.h" 2 3 4


extern "C" {


int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * , void * );

# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )




  __asm("_" "select" "$1050")




  ;
# 194 "/usr/include/sys/time.h" 2 3 4

int setitimer(int, const struct itimerval * ,
  struct itimerval * );
int utimes(const char *, const struct timeval *);

}
# 20 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c" 2
# 32 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.h" 1
# 18 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.h"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/rng.h" 1
# 16 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/rng.h"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 1
# 37 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 1
# 45 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
# 1 "/usr/include/sys/types.h" 1 3 4
# 84 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;

# 1 "/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 107 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 108 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 109 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 110 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 111 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_ino_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 112 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 115 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_key_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 118 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 120 "/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 137 "/usr/include/sys/types.h" 3 4
static inline __int32_t major(__uint32_t _x)
{
 return (__int32_t)(((__uint32_t)_x >> 24) & 0xff);
}

static inline __int32_t minor(__uint32_t _x)
{
 return (__int32_t)((_x) & 0xffffff);
}

static inline dev_t makedev(__uint32_t _major, __uint32_t _minor)
{
 return (dev_t)(((_major) << 24) | (_minor));
}
# 166 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 167 "/usr/include/sys/types.h" 2 3 4
# 185 "/usr/include/sys/types.h" 3 4
typedef __int32_t fd_mask;
# 212 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 213 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 214 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 215 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 216 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 217 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 218 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 219 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 220 "/usr/include/sys/types.h" 2 3 4



# 1 "/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 224 "/usr/include/sys/types.h" 2 3 4




# 1 "/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 229 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 230 "/usr/include/sys/types.h" 2 3 4
# 46 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 2


extern "C" {


# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 1 3 4
# 168 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 64 "/usr/include/limits.h" 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4





# 1 "/usr/include/i386/limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
# 41 "/usr/include/i386/limits.h" 2 3 4
# 7 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 66 "/usr/include/limits.h" 2 3 4
# 169 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 2 3 4
# 52 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 2
# 70 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned char uint_8t;
# 79 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned short uint_16t;
# 89 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned int uint_32t;
# 123 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
       typedef unsigned long uint_64t;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
}
# 38 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 2





extern "C"
{
# 54 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
typedef u_int8_t RNG_state;
typedef u_int8_t uint8;
typedef u_int32_t uint32;





struct state_t {
  uint8 state[20];
};





void rng_init(RNG_state *state, int seed);
void rng_spawn(RNG_state *mystate, RNG_state *newstate, int spawnNumber);
int rng_rand(RNG_state *mystate);
int rng_nextrand(RNG_state *mystate);
char * rng_showstate(RNG_state *state, char *s);
int rng_showtype(char *strBuf, int ind);




struct sha1_ctx_s
{ uint_32t count[2];
    uint_32t hash[5];
    uint_32t wbuf[16];
};

typedef struct sha1_ctx_s sha1_ctx;
# 95 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
void sha1_compile(sha1_ctx ctx[1]);

void sha1_begin(sha1_ctx ctx[1]);
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);
void sha1_end(unsigned char hval[], sha1_ctx ctx[1]);
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);


}
# 17 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/rng.h" 2
# 19 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.h" 2
# 28 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.h"
struct node_t {
  int type;
  int height;
  int numChildren;
# 44 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.h"
  struct state_t state;
};

typedef struct node_t Node;
# 59 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.h"
enum uts_trees_e { BIN = 0, GEO, HYBRID };
enum uts_geoshape_e { LINEAR = 0, EXPDEC, CYCLIC, FIXED };

typedef enum uts_trees_e tree_t;
typedef enum uts_geoshape_e geoshape_t;


extern char * uts_trees_str[];
extern char * uts_geoshapes_str[];



extern tree_t type;
extern double b_0;
extern int rootId;
extern int nonLeafBF;
extern double nonLeafProb;
extern int gen_mx;
extern geoshape_t shape_fn;
extern double shiftDepth;


extern int computeGranularity;
extern int debug;
extern int verbose;






void uts_error(char *str);
void uts_parseParams(int argc, char **argv);
int uts_paramsToStr(char *strBuf, int ind);
void uts_printParams();
void uts_helpMessage();

void uts_showStats(int nPes, int chunkSize, double walltime, int nNodes, int nLeaves, int maxDepth);
double uts_wctime();

double rng_toProb(int n);


void uts_initRoot(Node * root, int type);
int uts_numChildren(Node *parent);
int uts_numChildren_bin(Node * parent);
int uts_numChildren_geo(Node * parent);
int uts_childType(Node *parent);


char * impl_getName();
int impl_paramsToStr(char *strBuf, int ind);
int impl_parseParam(char *param, char *value);
void impl_helpMessage();
void impl_abort(int err);
# 33 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c" 2
# 42 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 42 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
char * uts_trees_str[] = { "Binomial", "Geometric", "Hybrid" };
# 43 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
char * uts_geoshapes_str[] = { "Linear decrease", "Exponential decrease", "Cyclic",
# 44 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
                              "Fixed branching factor" };
# 56 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 56 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
tree_t type = GEO;
# 57 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
double b_0 = 4.0;
# 58 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int rootId = 0;
# 69 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 69 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int nonLeafBF = 4;
# 70 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
double nonLeafProb = 15.0 / 64.0;
# 86 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 86 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int gen_mx = 6;
# 87 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
geoshape_t shape_fn = LINEAR;
# 88 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 89 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 90 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 91 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 92 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 93 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
double shiftDepth = 0.5;
# 94 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 95 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 96 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int computeGranularity = 1;
# 97 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 98 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 99 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int debug = 0;
# 100 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int verbose = 1;
# 110 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 110 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
void uts_error(char *str) {new_stack((void *)(&uts_error), 1, 0, (size_t)(11896266734391819134UL)); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } }
# 111 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("*** Error: %s\n", str);
# 112 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819127UL)); call_lbl_3: calling((void*)&impl_abort, 3, 0UL, 1, (size_t)(0UL)); impl_abort(1);
# 113 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
rm_stack(false, 0UL); }
# 133 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 133 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
double uts_wctime() {new_stack((void *)(&uts_wctime), 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 134 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    lbl_0: struct timeval tv; register_stack_var("uts_wctime|tv|0", "%struct.timeval = type { i64, i32 }", (void *)(&tv), (size_t)16, 0, 1, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ;
# 135 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   call_lbl_1: calling((void*)&gettimeofday, 1, 0UL, 2, (size_t)(11896266734391819139UL), (size_t)(11896266734391820073UL)); gettimeofday(&tv, __null);
# 136 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  rm_stack(false, 0UL); return (tv.tv_sec + 1E-6 * tv.tv_usec);
# 137 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
}
# 138 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 139 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 140 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 141 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 142 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
double rng_toProb(int n) {new_stack((void *)(&rng_toProb), 1, 0, (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 143 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (n < 0) {
# 144 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("*** toProb: rand n = %d out of range\n",n);
# 145 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 146 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819153UL)); rm_stack(false, 0UL); return ((n<0)? 0.0 : ((double) n)/2147483648.0);
# 147 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
}
# 148 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 149 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 150 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
void uts_initRoot(Node * root, int type) {new_stack((void *)(&uts_initRoot), 2, 2, (size_t)(11896266734391819204UL), (size_t)(0UL), "uts_initRoot|root|0", "%struct.node_t*", (void *)(&root), (size_t)8, 1, 0, 0, "uts_initRoot|type|0", "i32", (void *)(&type), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 151 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  root->type = type;
# 152 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  root->height = 0;
# 153 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  root->numChildren = -1;
# 154 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(3, (size_t)(11896266734391819173UL), (size_t)(11896266734391819174UL), (size_t)(11896266734391819204UL)); call_lbl_2: calling((void*)&rng_init, 2, 0UL, 2, (size_t)(11896266734391819204UL), (size_t)(0UL)); rng_init(root->state.state, rootId);
# 155 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 156 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (debug & 1) {printf("root node of type %d at %p\n", type, root); };
# 158 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
rm_stack(false, 0UL); }
# 159 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 160 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 161 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int uts_numChildren_bin(Node * parent) {new_stack((void *)(&uts_numChildren_bin), 1, 0, (size_t)(11896266734391819233UL)); if (____chimes_replaying) { goto lbl_0; }
# 162 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 163 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819208UL)); lbl_0: int v; register_stack_var("uts_numChildren_bin|v|0", "i32", (void *)(&v), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } call_lbl_2: calling((void*)&rng_rand, 2, 0UL, 1, (size_t)(11896266734391819233UL)); v = (rng_rand(parent->state.state)) ;
# 164 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819209UL)); double d; call_lbl_4: calling((void*)&rng_toProb, 4, 0UL, 1, (size_t)(0UL)); d = (rng_toProb(v)) ;
# 165 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 166 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819210UL)); rm_stack(false, 0UL); return (d < nonLeafProb) ? nonLeafBF : 0;
# 167 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
}
# 168 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 169 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 170 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int uts_numChildren_geo(Node * parent) {new_stack((void *)(&uts_numChildren_geo), 1, 1, (size_t)(11896266734391819340UL), "uts_numChildren_geo|parent|0", "%struct.node_t*", (void *)(&parent), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 171 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    lbl_0: double b_i; register_stack_var("uts_numChildren_geo|b_i|0", "double", (void *)(&b_i), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } b_i = (b_0) ;
# 172 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   int depth; depth = (parent->height) ;
# 173 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  int numChildren; lbl_1: int h; register_stack_var("uts_numChildren_geo|h|0", "i32", (void *)(&h), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } ;
# 174 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   lbl_2: double p; register_stack_var("uts_numChildren_geo|p|0", "double", (void *)(&p), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(6): { goto call_lbl_6; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } default: { chimes_error(); } } } double u; ;
# 175 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 176 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 177 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (depth > 0){
# 178 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    switch (shape_fn) {
# 179 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 180 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 181 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case EXPDEC:
# 182 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
       call_lbl_2: calling((void*)&log, 2, 0UL, 1, (size_t)(0UL)); call_lbl_3: calling((void*)&log, 3, 0UL, 1, (size_t)(0UL)); b_i = b_0 * pow((double) depth, -log(b_0)/log((double) gen_mx));
# 183 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 184 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 185 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 186 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case CYCLIC:
# 187 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      if (depth > 5 * gen_mx){
# 188 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        b_i = 0.0;
# 189 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        break;
# 190 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      }
# 191 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      alias_group_changed(4, (size_t)(11896266734391819235UL), (size_t)(11896266734391819236UL), (size_t)(11896266734391819237UL), (size_t)(11896266734391819240UL)); call_lbl_6: calling((void*)&sin, 6, 0UL, 1, (size_t)(0UL)); b_i = pow(b_0,
# 192 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
                sin(2.0*3.141592653589793*(double) depth / (double) gen_mx));
# 193 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 194 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 195 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 196 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case FIXED:
# 197 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      b_i = (depth < gen_mx)? b_0 : 0;
# 198 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 199 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 200 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 201 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case LINEAR:
# 202 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    default:
# 203 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      b_i = b_0 * (1.0 - (double)depth / (double) gen_mx);
# 204 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 205 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    }
# 206 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 207 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 208 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 209 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 210 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  p = 1.0 / (1.0 + b_i);
# 211 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 212 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 213 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(4, (size_t)(11896266734391819235UL), (size_t)(11896266734391819236UL), (size_t)(11896266734391819237UL), (size_t)(11896266734391819240UL)); call_lbl_8: calling((void*)&rng_rand, 8, 0UL, 1, (size_t)(11896266734391819340UL)); h = rng_rand(parent->state.state);
# 214 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819239UL)); call_lbl_10: calling((void*)&rng_toProb, 10, 0UL, 1, (size_t)(0UL)); u = rng_toProb(h);
# 215 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 216 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 217 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 218 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   call_lbl_11: calling((void*)&floor, 11, 0UL, 1, (size_t)(0UL)); call_lbl_12: calling((void*)&log, 12, 0UL, 1, (size_t)(0UL)); call_lbl_13: calling((void*)&log, 13, 0UL, 1, (size_t)(0UL)); numChildren = floor(log(1 - u) / log(1 - p));
# 219 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 220 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(2, (size_t)(11896266734391819238UL), (size_t)(11896266734391819241UL)); rm_stack(false, 0UL); return numChildren;
# 221 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
}
# 222 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 223 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 224 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int uts_numChildren(Node *parent) {new_stack((void *)(&uts_numChildren), 1, 1, (size_t)(11896266734391819431UL), "uts_numChildren|parent|0", "%struct.node_t*", (void *)(&parent), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 225 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    lbl_0: int numChildren; register_stack_var("uts_numChildren|numChildren|0", "i32", (void *)(&numChildren), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } case(9): { goto call_lbl_9; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } default: { chimes_error(); } } } numChildren = (0) ;
# 226 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 227 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 228 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  switch (type) {
# 229 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case BIN:
# 230 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      if (parent->height == 0) { call_lbl_1: calling((void*)&floor, 1, 0UL, 1, (size_t)(0UL)); numChildren = (int)floor(b_0); } else {alias_group_changed(2, (size_t)(11896266734391819346UL), (size_t)(11896266734391819347UL)); call_lbl_3: calling((void*)&uts_numChildren_bin, 3, 0UL, 1, (size_t)(11896266734391819431UL)); numChildren = uts_numChildren_bin(parent); } ;
# 234 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 235 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 236 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case GEO:
# 237 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      alias_group_changed(2, (size_t)(11896266734391819346UL), (size_t)(11896266734391819347UL)); call_lbl_5: calling((void*)&uts_numChildren_geo, 5, 0UL, 1, (size_t)(11896266734391819431UL)); numChildren = uts_numChildren_geo(parent);
# 238 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 239 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 240 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case HYBRID:
# 241 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      if (parent->height < shiftDepth * gen_mx) {alias_group_changed(2, (size_t)(11896266734391819346UL), (size_t)(11896266734391819347UL)); call_lbl_7: calling((void*)&uts_numChildren_geo, 7, 0UL, 1, (size_t)(11896266734391819431UL)); numChildren = uts_numChildren_geo(parent); } else {alias_group_changed(2, (size_t)(11896266734391819346UL), (size_t)(11896266734391819347UL)); call_lbl_9: calling((void*)&uts_numChildren_bin, 9, 0UL, 1, (size_t)(11896266734391819431UL)); numChildren = uts_numChildren_bin(parent); } ;
# 245 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      break;
# 246 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    alias_group_changed(2, (size_t)(11896266734391819346UL), (size_t)(11896266734391819347UL)); call_lbl_11: calling((void*)&uts_error, 11, 0UL, 1, (size_t)(11896266734391820034UL)); default:
# 247 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      uts_error("parTreeSearch(): Unknown tree type");
# 248 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 249 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 250 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 251 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 252 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (parent->height == 0 && parent->type == BIN) {
# 253 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
     int rootBF; call_lbl_12: calling((void*)&ceil, 12, 0UL, 1, (size_t)(0UL)); rootBF = ((int)ceil(b_0)) ;
# 254 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    if (numChildren > rootBF) {
# 255 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      printf("*** Number of children of root truncated from %d to %d\n",
# 256 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
             numChildren, rootBF);
# 257 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      numChildren = rootBF;
# 258 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    }
# 259 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 260 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  else {
# 261 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    if (numChildren > 100) {
# 262 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      printf("*** Number of children truncated from %d to %d\n",
# 263 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
             numChildren, 100);
# 264 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      numChildren = 100;
# 265 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    }
# 266 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 267 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 268 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(3, (size_t)(11896266734391819346UL), (size_t)(11896266734391819347UL), (size_t)(11896266734391819348UL)); rm_stack(false, 0UL); return numChildren;
# 269 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
}
# 270 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 271 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 272 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int uts_childType(Node *parent) {new_stack((void *)(&uts_childType), 1, 0, (size_t)(11896266734391819462UL)); if (____chimes_replaying) { switch(get_next_call()) { case(10): { goto call_lbl_10; } default: { chimes_error(); } } }
# 273 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  switch (type) {
# 274 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case BIN:
# 275 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      alias_group_changed(2, (size_t)(11896266734391819433UL), (size_t)(11896266734391819434UL)); rm_stack(false, 0UL); return BIN;
# 276 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case GEO:
# 277 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      alias_group_changed(2, (size_t)(11896266734391819433UL), (size_t)(11896266734391819434UL)); rm_stack(false, 0UL); return GEO;
# 278 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    case HYBRID:
# 279 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      if (parent->height < shiftDepth * gen_mx) {alias_group_changed(2, (size_t)(11896266734391819433UL), (size_t)(11896266734391819434UL)); rm_stack(false, 0UL); return GEO;; } else {alias_group_changed(2, (size_t)(11896266734391819433UL), (size_t)(11896266734391819434UL)); rm_stack(false, 0UL); return BIN;; } ;
# 283 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    alias_group_changed(1, (size_t)(11896266734391819434UL)); call_lbl_10: calling((void*)&uts_error, 10, 0UL, 1, (size_t)(11896266734391820037UL)); default:
# 284 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      uts_error("uts_get_childtype(): Unknown tree type");
# 285 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      alias_group_changed(2, (size_t)(11896266734391819433UL), (size_t)(11896266734391819434UL)); rm_stack(false, 0UL); return -1;
# 286 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 287 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
alias_group_changed(2, (size_t)(11896266734391819433UL), (size_t)(11896266734391819434UL)); rm_stack(false, 0UL); }
# 288 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 289 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 290 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 291 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
int uts_paramsToStr(char *strBuf, int ind) {new_stack((void *)(&uts_paramsToStr), 2, 2, (size_t)(11896266734391819610UL), (size_t)(0UL), "uts_paramsToStr|strBuf|0", "i8*", (void *)(&strBuf), (size_t)8, 1, 0, 0, "uts_paramsToStr|ind|0", "i32", (void *)(&ind), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 292 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 293 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(2, (size_t)(11896266734391819463UL), (size_t)(11896266734391819464UL)); call_lbl_3: calling((void*)&impl_getName, 3, 11896266734391819476UL, 0); ind += sprintf(strBuf+ind, "UTS - Unbalanced Tree Search %s (%s)\n", "2.1", impl_getName());
# 294 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 295 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 296 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  ind += sprintf(strBuf+ind, "Tree type:  %d (%s)\n", type, uts_trees_str[type]);
# 297 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 298 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 299 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  ind += sprintf(strBuf+ind, "Tree shape parameters:\n");
# 300 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  ind += sprintf(strBuf+ind, "  root branching factor b_0 = %.1f, root seed = %d\n", b_0, rootId);
# 301 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 302 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (type == GEO || type == HYBRID) {
# 303 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    ind += sprintf(strBuf+ind, "  GEO parameters: gen_mx = %d, shape function = %d (%s)\n",
# 304 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
            gen_mx, shape_fn, uts_geoshapes_str[shape_fn]);
# 305 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 306 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 307 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (type == BIN || type == HYBRID) {
# 308 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      lbl_0: double q; register_stack_var("uts_paramsToStr|q|0", "double", (void *)(&q), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } q = (nonLeafProb) ;
# 309 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      lbl_1: int m; register_stack_var("uts_paramsToStr|m|0", "i32", (void *)(&m), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } m = (nonLeafBF) ;
# 310 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      lbl_2: double es; register_stack_var("uts_paramsToStr|es|0", "double", (void *)(&es), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(10): { goto call_lbl_10; } case(13): { goto call_lbl_13; } default: { chimes_error(); } } } es = ((1. / (1. - q * m))) ;
# 311 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    ind += sprintf(strBuf+ind, "  BIN parameters:  q = %f, m = %d, E(n) = %f, E(s) = %.2f\n",
# 312 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
            q, m, q * m, es);
# 313 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 314 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 315 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (type == HYBRID) {
# 316 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
     call_lbl_10: calling((void*)&ceil, 10, 0UL, 1, (size_t)(0UL)); ind += sprintf(strBuf+ind, "  HYBRID:  GEO from root to depth %d, then BIN\n",
# 317 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
            (int) ceil(shiftDepth * gen_mx));
# 318 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 319 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 320 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 321 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  ind += sprintf(strBuf+ind, "Random number generator: ");
# 322 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(4, (size_t)(11896266734391819464UL), (size_t)(11896266734391819465UL), (size_t)(11896266734391819466UL), (size_t)(11896266734391819467UL)); call_lbl_13: calling((void*)&rng_showtype, 13, 0UL, 2, (size_t)(11896266734391819610UL), (size_t)(0UL)); ind = rng_showtype(strBuf, ind);
# 323 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  ind += sprintf(strBuf+ind, "\nCompute granularity: %d\n", computeGranularity);
# 324 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 325 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  alias_group_changed(1, (size_t)(11896266734391819464UL)); rm_stack(false, 0UL); return ind;
# 326 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
}
# 327 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 328 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 329 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
void uts_printParams() {new_stack((void *)(&uts_printParams), 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 330 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   lbl_0: char strBuf[5000]; register_stack_var("uts_printParams|strBuf|0", "[5000 x i8]", (void *)(strBuf), (size_t)5000, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 331 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  strBuf[0] = '\0';
# 332 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    lbl_1: int ind; register_stack_var("uts_printParams|ind|0", "i32", (void *)(&ind), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ind = (0) ;
# 333 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 334 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (verbose > 0) {
# 335 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    alias_group_changed(2, (size_t)(11896266734391819616UL), (size_t)(11896266734391819617UL)); call_lbl_2: calling((void*)&uts_paramsToStr, 2, 0UL, 2, (size_t)(11896266734391819616UL), (size_t)(0UL)); ind = uts_paramsToStr(strBuf, ind);
# 336 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    alias_group_changed(1, (size_t)(11896266734391819617UL)); call_lbl_4: calling((void*)&impl_paramsToStr, 4, 0UL, 2, (size_t)(11896266734391819616UL), (size_t)(0UL)); ind = impl_paramsToStr(strBuf, ind);
# 337 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("%s\n",strBuf);
# 338 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 339 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
alias_group_changed(2, (size_t)(11896266734391819616UL), (size_t)(11896266734391819617UL)); rm_stack(false, 0UL); }
# 340 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 341 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
void uts_parseParams(int argc, char *argv[]){new_stack((void *)(&uts_parseParams), 2, 2, (size_t)(0UL), (size_t)(11896266734391819884UL), "uts_parseParams|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "uts_parseParams|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 342 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    lbl_0: int i; register_stack_var("uts_parseParams|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } i = (1) ;
# 343 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    lbl_1: int err; register_stack_var("uts_parseParams|err|0", "i32", (void *)(&err), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(6): { goto call_lbl_6; } case(22): { goto call_lbl_22; } default: { chimes_error(); } } } err = (-1) ;
# 344 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  while (i < argc && err == -1) {
# 345 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
     call_lbl_4: calling((void*)&strlen, 4, 0UL, 1, (size_t)(11896266734391819886UL)); if (argv[i][0] == '-' && argv[i][1] == 'h') {{ alias_group_changed(6, (size_t)(11896266734391819640UL), (size_t)(11896266734391819641UL), (size_t)(11896266734391819642UL), (size_t)(11896266734391819643UL), (size_t)(11896266734391820020UL), (size_t)(11896266734391820021UL)); call_lbl_2: calling((void*)&uts_helpMessage, 2, 0UL, 0); uts_helpMessage(); call_lbl_3: calling((void*)&impl_abort, 3, 0UL, 1, (size_t)(0UL)); impl_abort(0); }; } else if (argv[i][0] != '-' || strlen(argv[i]) != 2 || argc <= i + 1) { err = i; break; }
# 352 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 353 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 354 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 355 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    alias_group_changed(6, (size_t)(11896266734391819640UL), (size_t)(11896266734391819641UL), (size_t)(11896266734391819642UL), (size_t)(11896266734391819643UL), (size_t)(11896266734391820020UL), (size_t)(11896266734391820021UL)); call_lbl_6: calling((void*)&impl_parseParam, 6, 0UL, 2, (size_t)(11896266734391819886UL), (size_t)(11896266734391819886UL)); if (!impl_parseParam(argv[i], argv[i+1])) {
# 356 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      i += 2;
# 357 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      continue;
# 358 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    }
# 359 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 360 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    switch (argv[i][1]) {
# 361 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'q':
# 362 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        nonLeafProb = atof(argv[i+1]); break;
# 363 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'm':
# 364 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        nonLeafBF = atoi(argv[i+1]); break;
# 365 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'r':
# 366 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        rootId = atoi(argv[i+1]); break;
# 367 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'x':
# 368 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        debug = atoi(argv[i+1]); break;
# 369 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'v':
# 370 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        verbose = atoi(argv[i+1]); break;
# 371 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 't':
# 372 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        type = (tree_t) atoi(argv[i+1]);
# 373 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        if (type != BIN && type != GEO && type != HYBRID) {err = i; };
# 375 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        break;
# 376 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'a':
# 377 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        shape_fn = (geoshape_t) atoi(argv[i+1]);
# 378 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        if (shape_fn > FIXED) {err = i; };
# 379 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        break;
# 380 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'b':
# 381 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        b_0 = atof(argv[i+1]); break;
# 382 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'd':
# 383 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        gen_mx = atoi(argv[i+1]); break;
# 384 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'f':
# 385 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        shiftDepth = atof(argv[i+1]); break;
# 386 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      case 'g':
# 387 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        computeGranularity = (((1) > (atoi(argv[i+1]))) ? (1) : (atoi(argv[i+1]))); break;
# 388 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
      default:
# 389 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        err = i;
# 390 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    }
# 391 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 392 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    if (err != -1) {break;; };
# 393 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 394 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    i += 2;
# 395 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 396 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 397 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (err != -1) {
# 398 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("Unrecognized parameter or incorrect/missing value: '%s %s'\n", argv[i], (i+1 < argc) ? argv[i+1] : "[none]");
# 399 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("Try -h for help.\n");
# 400 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    alias_group_changed(6, (size_t)(11896266734391819640UL), (size_t)(11896266734391819641UL), (size_t)(11896266734391819642UL), (size_t)(11896266734391819643UL), (size_t)(11896266734391820020UL), (size_t)(11896266734391820021UL)); call_lbl_22: calling((void*)&impl_abort, 22, 0UL, 1, (size_t)(0UL)); impl_abort(4);
# 401 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 402 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
alias_group_changed(6, (size_t)(11896266734391819640UL), (size_t)(11896266734391819641UL), (size_t)(11896266734391819642UL), (size_t)(11896266734391819643UL), (size_t)(11896266734391820020UL), (size_t)(11896266734391820021UL)); rm_stack(false, 0UL); }
# 403 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 404 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
void uts_helpMessage() {new_stack((void *)(&uts_helpMessage), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(19): { goto call_lbl_19; } default: { chimes_error(); } } }
# 405 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   call_lbl_2: calling((void*)&impl_getName, 2, 11896266734391819908UL, 0); printf("  UTS - Unbalanced Tree Search %s (%s)\n\n", "2.1", impl_getName());
# 406 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("    usage:  uts-bin [parameter value] ...\n\n");
# 407 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("  parm type  description\n");
# 408 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("  ==== ====  =========================================\n");
# 409 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("\n  Benchmark Parameters:\n");
# 410 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -t  int   tree type (0: BIN, 1: GEO, 2: HYBRID)\n");
# 411 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -b  dble  root branching factor\n");
# 412 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -r  int   root seed 0 <= r < 2^31 \n");
# 413 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -a  int   GEO: tree shape function \n");
# 414 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -d  int   GEO: tree depth\n");
# 415 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -q  dble  BIN: probability of non-leaf node\n");
# 416 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -m  int   BIN: number of children for non-leaf node\n");
# 417 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -f  dble  HYBRID: fraction of depth for GEO -> BIN transition\n");
# 418 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -g  int   compute granularity: number of rng_spawns per node\n");
# 419 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -v  int   nonzero to set verbose output\n");
# 420 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("   -x  int   debug level\n");
# 421 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 422 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 423 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("\n  Additional Implementation Parameters:\n");
# 424 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
   call_lbl_19: calling((void*)&impl_helpMessage, 19, 0UL, 0); impl_helpMessage();
# 425 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  printf("\n");
# 426 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
rm_stack(false, 0UL); }
# 427 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 428 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 429 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
void uts_showStats(int nPes, int chunkSize, double walltime, int nNodes, int nLeaves, int maxDepth) {new_stack((void *)(&uts_showStats), 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 430 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 431 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  if (verbose == 0) {
# 432 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("%4d %7.3f %9d %7.0f %7.0f %d %d %.2f %d %d %1d %f %3d\n",
# 433 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        nPes, walltime, nNodes, nNodes/walltime, (nNodes/walltime)/nPes, chunkSize,
# 434 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        type, b_0, rootId, gen_mx, shape_fn, nonLeafProb, nonLeafBF);
# 435 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 436 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 437 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
# 438 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  else {
# 439 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("Tree size = %d, tree depth = %d, num leaves = %d (%.2f%%)\n", nNodes, maxDepth, nLeaves, nLeaves/(float)nNodes*100.0);
# 440 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
    printf("Wallclock time = %.3f sec, performance = %.0f nodes/sec (%.0f nodes/sec per PE)\n\n",
# 441 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
        walltime, (nNodes / walltime), (nNodes / walltime / nPes));
# 442 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
  }
# 443 "/Users/jmg3/num-debug/src/examples/openmp/uts/uts.c"
alias_group_changed(6, (size_t)(11896266734391819934UL), (size_t)(11896266734391819935UL), (size_t)(11896266734391819936UL), (size_t)(11896266734391819937UL), (size_t)(11896266734391819938UL), (size_t)(11896266734391819939UL)); rm_stack(false, 0UL); }


static int module_init() {
    init_module(11896266734391819126UL, 11, 13, 19, 5, 11896266734391819126UL + 308UL, 11896266734391819126UL + 336UL, 11896266734391819126UL + 888UL, 11896266734391819126UL + 363UL, 11896266734391819126UL + 47UL, 11896266734391819126UL + 78UL, 11896266734391819126UL + 337UL, 11896266734391819126UL + 484UL, 11896266734391819126UL + 758UL, 11896266734391819126UL + 760UL, 11896266734391819126UL + 893UL, 11896266734391819126UL + 401UL, 11896266734391819126UL + 1UL, 11896266734391819126UL + 8UL, 11896266734391819126UL + 109UL, 11896266734391819126UL + 214UL, 11896266734391819126UL + 82UL, 11896266734391819126UL + 107UL, 11896266734391819126UL + 515UL, 11896266734391819126UL + 758UL, 11896266734391819126UL + 220UL, 11896266734391819126UL + 305UL, "node_t", 4, "int", (int)__builtin_offsetof (struct node_t, type), "int", (int)__builtin_offsetof (struct node_t, height), "int", (int)__builtin_offsetof (struct node_t, numChildren), "%struct.state_t", (int)__builtin_offsetof (struct node_t, state), "state_t", 1, "[ 20 x unsigned char ]", (int)__builtin_offsetof (struct state_t, state), "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "int", (int)__builtin_offsetof (struct timeval, tv_usec), "uts_geoshape_e", 0, "uts_trees_e", 0, "_Z9uts_errorPc", 2, "_Z10impl_aborti", "printf", "_Z10uts_wctimev", 1, "gettimeofday", "_Z10rng_toProbi", 1, "printf", "_Z12uts_initRootP6node_ti", 2, "printf", "rng_init", "_Z19uts_numChildren_binP6node_t", 2, "_Z10rng_toProbi", "rng_rand", "_Z19uts_numChildren_geoP6node_t", 5, "_Z10rng_toProbi", "floor", "log", "rng_rand", "sin", "_Z15uts_numChildrenP6node_t", 6, "_Z19uts_numChildren_binP6node_t", "_Z19uts_numChildren_geoP6node_t", "_Z9uts_errorPc", "ceil", "floor", "printf", "_Z13uts_childTypeP6node_t", 1, "_Z9uts_errorPc", "_Z15uts_paramsToStrPci", 4, "_Z12impl_getNamev", "ceil", "rng_showtype", "sprintf", "_Z15uts_printParamsv", 3, "_Z15uts_paramsToStrPci", "_Z16impl_paramsToStrPci", "printf", "_Z15uts_parseParamsiPPc", 7, "_Z10impl_aborti", "_Z15impl_parseParamPcS_", "_Z15uts_helpMessagev", "atof", "atoi", "printf", "strlen", "_Z15uts_helpMessagev", 3, "_Z12impl_getNamev", "_Z16impl_helpMessagev", "printf", "_Z13uts_showStatsiidiii", 1, "printf", "uts_initRoot|root|0", 1, "rng_init", "uts_initRoot|type|0", 1, "rng_init", "uts_numChildren_bin|v|0", 1, "_Z10rng_toProbi", "uts_numChildren_geo|parent|0", 3, "sin", "rng_rand", "_Z10rng_toProbi", "uts_numChildren_geo|b_i|0", 3, "sin", "rng_rand", "_Z10rng_toProbi", "uts_numChildren_geo|h|0", 1, "_Z10rng_toProbi", "uts_numChildren_geo|p|0", 2, "rng_rand", "_Z10rng_toProbi", "uts_numChildren|parent|0", 3, "_Z9uts_errorPc", "_Z19uts_numChildren_geoP6node_t", "_Z19uts_numChildren_binP6node_t", "uts_numChildren|numChildren|0", 3, "_Z9uts_errorPc", "_Z19uts_numChildren_geoP6node_t", "_Z19uts_numChildren_binP6node_t", "uts_paramsToStr|strBuf|0", 2, "rng_showtype", "_Z12impl_getNamev", "uts_paramsToStr|ind|0", 2, "rng_showtype", "_Z12impl_getNamev", "uts_paramsToStr|q|0", 1, "rng_showtype", "uts_paramsToStr|m|0", 1, "rng_showtype", "uts_paramsToStr|es|0", 1, "rng_showtype", "uts_printParams|ind|0", 2, "_Z16impl_paramsToStrPci", "_Z15uts_paramsToStrPci", "uts_parseParams|argc|0", 5, "atoi", "atof", "_Z15uts_helpMessagev", "_Z15impl_parseParamPcS_", "_Z10impl_aborti", "uts_parseParams|argv|0", 5, "atoi", "atof", "_Z15uts_helpMessagev", "_Z15impl_parseParamPcS_", "_Z10impl_aborti", "uts_parseParams|i|0", 5, "atoi", "atof", "_Z15uts_helpMessagev", "_Z15impl_parseParamPcS_", "_Z10impl_aborti", "uts_parseParams|err|0", 5, "atoi", "atof", "_Z15uts_helpMessagev", "_Z15impl_parseParamPcS_", "_Z10impl_aborti");
    register_global_var("global|uts_trees_str", "[3 x i8*]", (void *)(&uts_trees_str), 24, 0, 0, 0);
    register_global_var("global|uts_geoshapes_str", "[4 x i8*]", (void *)(&uts_geoshapes_str), 32, 0, 0, 0);
    register_global_var("global|type", "i32", (void *)(&type), 4, 0, 0, 0);
    register_global_var("global|b_0", "double", (void *)(&b_0), 8, 0, 0, 0);
    register_global_var("global|rootId", "i32", (void *)(&rootId), 4, 0, 0, 0);
    register_global_var("global|nonLeafBF", "i32", (void *)(&nonLeafBF), 4, 0, 0, 0);
    register_global_var("global|nonLeafProb", "double", (void *)(&nonLeafProb), 8, 0, 0, 0);
    register_global_var("global|gen_mx", "i32", (void *)(&gen_mx), 4, 0, 0, 0);
    register_global_var("global|shape_fn", "i32", (void *)(&shape_fn), 4, 0, 0, 0);
    register_global_var("global|shiftDepth", "double", (void *)(&shiftDepth), 8, 0, 0, 0);
    register_global_var("global|computeGranularity", "i32", (void *)(&computeGranularity), 4, 0, 0, 0);
    register_global_var("global|debug", "i32", (void *)(&debug), 4, 0, 0, 0);
    register_global_var("global|verbose", "i32", (void *)(&verbose), 4, 0, 0, 0);
    register_constant(11896266734391819126UL + 0UL, (void *)((uts_trees_str)[0]), 9);
    register_constant(11896266734391819126UL + 1UL, (void *)((uts_trees_str)[1]), 10);
    register_constant(11896266734391819126UL + 2UL, (void *)((uts_trees_str)[2]), 7);
    register_constant(11896266734391819126UL + 3UL, (void *)((uts_geoshapes_str)[0]), 16);
    register_constant(11896266734391819126UL + 4UL, (void *)((uts_geoshapes_str)[1]), 21);
    register_constant(11896266734391819126UL + 5UL, (void *)((uts_geoshapes_str)[2]), 7);
    register_constant(11896266734391819126UL + 6UL, (void *)((uts_geoshapes_str)[3]), 23);
    return 0;
}

static int __libchimes_module_init = module_init();
