# 1 "ljForce.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "ljForce.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
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
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 62 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.h" 1






struct BasePotentialSt;
struct BasePotentialSt* initLjPot(void);
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"

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
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
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
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/omp.h" 1 3 4
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/omp.h" 3 4
typedef struct
{
  unsigned char _x[64]
    __attribute__((__aligned__(8)));
} omp_lock_t;

typedef struct
{
  unsigned char _x[80]
    __attribute__((__aligned__(8)));
} omp_nest_lock_t;


typedef enum omp_sched_t
{
  omp_sched_static = 1,
  omp_sched_dynamic = 2,
  omp_sched_guided = 3,
  omp_sched_auto = 4
} omp_sched_t;

typedef enum omp_proc_bind_t
{
  omp_proc_bind_false = 0,
  omp_proc_bind_true = 1,
  omp_proc_bind_master = 2,
  omp_proc_bind_close = 3,
  omp_proc_bind_spread = 4
} omp_proc_bind_t;


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

extern void omp_set_schedule (omp_sched_t, int) throw ();
extern void omp_get_schedule (omp_sched_t *, int *) throw ();
extern int omp_get_thread_limit (void) throw ();
extern void omp_set_max_active_levels (int) throw ();
extern int omp_get_max_active_levels (void) throw ();
extern int omp_get_level (void) throw ();
extern int omp_get_ancestor_thread_num (int) throw ();
extern int omp_get_team_size (int) throw ();
extern int omp_get_active_level (void) throw ();

extern int omp_in_final (void) throw ();

extern int omp_get_cancellation (void) throw ();
extern omp_proc_bind_t omp_get_proc_bind (void) throw ();

extern void omp_set_default_device (int) throw ();
extern int omp_get_default_device (void) throw ();
extern int omp_get_num_devices (void) throw ();
extern int omp_get_num_teams (void) throw ();
extern int omp_get_team_num (void) throw ();

extern int omp_is_initial_device (void) throw ();


}
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/constants.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/constants.h"
static const double amuToInternalMass =
         1.660538921e-27 * 1.0e-10 * 1.0e-10
         / (1.0e-15 * 1.0e-15 * 1.602176565e-19);


static const double kB_eV = 8.6173324e-5;


static const double hartreeToEv = 27.21138505;


static const double bohrToAngs = 0.52917721092;
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h"
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
# 72 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/linkCells.h" 1
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/linkCells.h"
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
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 1






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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   void (*unloadBuffer)(void* parms, void* data, int face, int bufSize, char* buf);


   void (*destroy)(void* parms);


   void* parms;
}
HaloExchange;


HaloExchange* initAtomHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


HaloExchange* initForceHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


void destroyHaloExchange(HaloExchange** haloExchange);


void haloExchange(HaloExchange* haloExchange, void* data);


void sortAtomsInCell(struct AtomsSt* atoms, struct LinkCellSt* boxes, int iBox);
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/decomposition.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/decomposition.h"
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
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h"
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
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
typedef struct BasePotentialSt
{
   real_t cutoff;
   real_t mass;
   real_t lat;
   char latticeType[8];
   char name[3];
   int atomicNo;
   int (*force)(struct SimFlatSt* s);
   void (*print)(FILE* file, struct BasePotentialSt* pot);
   void (*destroy)(struct BasePotentialSt** pot);
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
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c" 2
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 76 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 77 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 78 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 79 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 80 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
typedef struct LjPotentialSt
# 81 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
{
# 82 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   real_t cutoff;
# 83 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   real_t mass;
# 84 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   real_t lat;
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   char latticeType[8];
# 86 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   char name[3];
# 87 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   int atomicNo;
# 88 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   int (*force)(SimFlat* s);
# 89 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   void (*print)(FILE* file, BasePotential* pot);
# 90 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   void (*destroy)(BasePotential** pot);
# 91 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   real_t sigma;
# 92 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   real_t epsilon;
# 93 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
} LjPotential;
# 94 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 95 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
static int ljForce(SimFlat* s);
# 96 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
static void ljPrint(FILE* file, BasePotential* pot);
# 97 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 98 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
void ljDestroy(BasePotential** inppot)
# 99 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
{new_stack((void *)(&ljDestroy), 1, 0, (size_t)(17518077371777717474UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 100 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   if (!inppot) {alias_group_changed(3, (size_t)(17518077371777717450UL), (size_t)(17518077371777717451UL), (size_t)(17518077371777717474UL)); rm_stack(false, 0UL); return;; };
# 101 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    LjPotential *pot; pot = ((LjPotential *)(*inppot)) ;
# 102 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   if (!pot) {alias_group_changed(3, (size_t)(17518077371777717450UL), (size_t)(17518077371777717451UL), (size_t)(17518077371777717474UL)); rm_stack(false, 0UL); return;; };
# 103 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   free_wrapper(pot, 17518077371777717460UL);
# 104 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   *inppot = __null;
# 105 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 106 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   alias_group_changed(3, (size_t)(17518077371777717450UL), (size_t)(17518077371777717451UL), (size_t)(17518077371777717474UL)); rm_stack(false, 0UL); return;
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
}
# 108 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 109 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 110 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
BasePotential* initLjPot(void)
# 111 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
{new_stack((void *)(&initLjPot), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } default: { chimes_error(); } } }
# 112 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    LjPotential *pot; pot = ((LjPotential *)malloc_wrapper(sizeof(LjPotential), 17518077371777717480UL, 0, 1, (int)sizeof(struct LjPotentialSt), 3, (int)__builtin_offsetof(struct LjPotentialSt, force), (int)__builtin_offsetof(struct LjPotentialSt, print), (int)__builtin_offsetof(struct LjPotentialSt, destroy))) ;
# 113 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->force = ljForce;
# 114 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->print = ljPrint;
# 115 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->destroy = ljDestroy;
# 116 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->sigma = 2.315;
# 117 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->epsilon = 0.167;
# 118 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->mass = 63.55 * amuToInternalMass;
# 119 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 120 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->lat = 3.615;
# 121 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    call_lbl_2: calling((void*)&strcpy, 2, 17518077371777717507UL, 2, (size_t)(17518077371777717480UL), (size_t)(17518077371777718002UL)); strcpy(pot->latticeType, "FCC");
# 122 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->cutoff = 2.5*pot->sigma;
# 123 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 124 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    call_lbl_3: calling((void*)&strcpy, 3, 17518077371777717518UL, 2, (size_t)(17518077371777717480UL), (size_t)(17518077371777718003UL)); strcpy(pot->name, "Cu");
# 125 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   pot->atomicNo = 29;
# 126 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 127 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   alias_group_changed(2, (size_t)(17518077371777717478UL), (size_t)(17518077371777717480UL)); rm_stack(true, 17518077371777717480UL); return (BasePotential*) pot;
# 128 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
}
# 129 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 130 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
void ljPrint(FILE* file, BasePotential* pot)
# 131 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
{new_stack((void *)(&ljPrint), 2, 0, (size_t)(17518077371777717976UL), (size_t)(17518077371777717977UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 132 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    LjPotential *ljPot; ljPot = ((LjPotential *)pot) ;
# 133 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Potential type   : Lennard-Jones\n");
# 134 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Species name     : %s\n", ljPot->name);
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Atomic number    : %d\n", ljPot->atomicNo);
# 136 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Mass             : ""%lg"" amu\n", ljPot->mass / amuToInternalMass);
# 137 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Lattice Type     : %s\n", ljPot->latticeType);
# 138 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Lattice spacing  : ""%lg"" Angstroms\n", ljPot->lat);
# 139 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Cutoff           : ""%lg"" Angstroms\n", ljPot->cutoff);
# 140 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Epsilon          : ""%lg"" eV\n", ljPot->epsilon);
# 141 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   fprintf(file, "  Sigma            : ""%lg"" Angstroms\n", ljPot->sigma);
# 142 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
alias_group_changed(3, (size_t)(17518077371777717921UL), (size_t)(17518077371777717922UL), (size_t)(17518077371777717923UL)); rm_stack(false, 0UL); }
# 143 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 144 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
int ljForce(SimFlat* s)
# 145 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
{new_stack((void *)(&ljForce), 1, 0, (size_t)(17518077371777717714UL)); if (____chimes_replaying) { switch(get_next_call()) { case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } }
# 146 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    LjPotential *pot; pot = ((LjPotential *)s->pot) ;
# 147 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t sigma; sigma = (pot->sigma) ;
# 148 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t epsilon; epsilon = (pot->epsilon) ;
# 149 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t rCut; rCut = (pot->cutoff) ;
# 150 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t rCut2; rCut2 = (rCut * rCut) ;
# 151 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 153 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t ePot; ePot = (0.) ;
# 154 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   s->ePotential = 0.0;
# 155 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    int fSize; fSize = (s->boxes->nTotalBoxes * 64); { call_lbl_6: unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(6, &____chimes_region_id0, 0); int ____chimes_first_iter0 = 1; ;
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
#pragma omp parallel for firstprivate(____chimes_first_iter0)
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 157 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   for (int ii=0; ii<fSize; ++ii)
# 158 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   {if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth0, ____chimes_region_id0, 0); ____chimes_first_iter0 = 0; } if (____chimes_replaying) { chimes_error(); }
# 159 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
       call_lbl_1: calling((void*)&zeroReal3, 1, 0UL, 1, (size_t)(17518077371777717718UL)); zeroReal3(s->atoms->f[ii]);
# 160 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
      s->atoms->U[ii] = 0.;
# 161 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0); }
# 162 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t s6; s6 = (sigma * sigma * sigma * sigma * sigma * sigma) ;
# 164 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 165 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t rCut6; rCut6 = (s6 / (rCut2 * rCut2 * rCut2)) ;
# 166 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    real_t eShift; eShift = (1. * rCut6 * (rCut6 - 1.)) ;
# 167 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 168 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
    int nNbrBoxes; nNbrBoxes = (27); { call_lbl_7: unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(7, &____chimes_region_id1, 0); int ____chimes_first_iter1 = 1; ;
# 169 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 170 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
#pragma omp parallel for reduction(+:ePot) firstprivate(____chimes_first_iter1)
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 172 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; iBox++)
# 173 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   {if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth1, ____chimes_region_id1, 0); ____chimes_first_iter1 = 0; } if (____chimes_replaying) { chimes_error(); }
# 174 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
       int nIBox; nIBox = (s->boxes->nAtoms[iBox]) ;
# 175 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 176 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 177 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
      { int jTmp; for ( jTmp = (0) ; jTmp<nNbrBoxes; jTmp++)
# 178 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
      {
# 179 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
          int jBox; jBox = (s->boxes->nbrBoxes[iBox][jTmp]) ;
# 180 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 181 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
         (__builtin_expect(!(jBox>=0), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c", 181, "jBox>=0") : (void)0);
# 182 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 183 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
          int nJBox; nJBox = (s->boxes->nAtoms[jBox]) ;
# 184 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 185 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
         { int iOff; for ( iOff = (64 * iBox) ; iOff<(iBox*64 +nIBox); iOff++)
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
         {
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
            { int jOff; for ( jOff = (jBox * 64) ; jOff<(jBox*64 +nJBox); jOff++)
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
            {
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               real3 dr; ;
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                real_t r2; r2 = (0.) ;
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               { int m; for ( m = (0) ; m<3; m++)
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               {
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  dr[m] = s->atoms->r[iOff][m]-s->atoms->r[jOff][m];
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  r2+=dr[m]*dr[m];
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               } }
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               if ( r2 <= rCut2 && r2 > 0.0)
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               {
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  r2 = 1.0/r2;
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                   real_t r6; r6 = (s6 * (r2 * r2 * r2)) ;
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                   real_t eLocal; eLocal = (r6 * (r6 - 1.) - eShift) ;
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  s->atoms->U[iOff] += 0.5*eLocal;
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  ePot += 0.5*eLocal;
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                   real_t fr; fr = (-4. * epsilon * r6 * r2 * (12. * r6 - 6.)) ;
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  { int m; for ( m = (0) ; m<3; m++)
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  {
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                     s->atoms->f[iOff][m] -= dr[m]*fr;
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
                  } }
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
               }
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
            } }
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
         } }
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
      } }
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1); }
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   ePot = ePot*4.0*epsilon;
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   s->ePotential = ePot;
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
   alias_group_changed(29, (size_t)(17518077371777717526UL), (size_t)(17518077371777717527UL), (size_t)(17518077371777717528UL), (size_t)(17518077371777717529UL), (size_t)(17518077371777717530UL), (size_t)(17518077371777717531UL), (size_t)(17518077371777717532UL), (size_t)(17518077371777717533UL), (size_t)(17518077371777717534UL), (size_t)(17518077371777717535UL), (size_t)(17518077371777717536UL), (size_t)(17518077371777717537UL), (size_t)(17518077371777717538UL), (size_t)(17518077371777717539UL), (size_t)(17518077371777717540UL), (size_t)(17518077371777717541UL), (size_t)(17518077371777717542UL), (size_t)(17518077371777717543UL), (size_t)(17518077371777717544UL), (size_t)(17518077371777717545UL), (size_t)(17518077371777717546UL), (size_t)(17518077371777717547UL), (size_t)(17518077371777717548UL), (size_t)(17518077371777717549UL), (size_t)(17518077371777717550UL), (size_t)(17518077371777717551UL), (size_t)(17518077371777717552UL), (size_t)(17518077371777717714UL), (size_t)(17518077371777717718UL)); rm_stack(false, 0UL); return 0;
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.c"
}


static int module_init() {
    init_module(17518077371777717449UL, 14, 5, 0, 11, 17518077371777717449UL + 25UL, 17518077371777717449UL + 11UL, 17518077371777717449UL + 77UL, 17518077371777717449UL + 265UL, 17518077371777717449UL + 472UL, 17518077371777717449UL + 527UL, 17518077371777717449UL + 31UL, 17518077371777717449UL + 567UL, 17518077371777717449UL + 531UL, 17518077371777717449UL + 544UL, 17518077371777717449UL + 29UL, 17518077371777717449UL + 31UL, 17518077371777717449UL + 1UL, 17518077371777717449UL + 25UL, 17518077371777717449UL + 473UL, 17518077371777717449UL + 528UL, 17518077371777717449UL + 2UL, 17518077371777717449UL + 11UL, 17518077371777717449UL + 267UL, 17518077371777717449UL + 269UL, 17518077371777717449UL + 265UL, 17518077371777717449UL + 267UL, 17518077371777717449UL + 474UL, 17518077371777717449UL + 528UL, 17518077371777717449UL + 269UL, 17518077371777717449UL + 247UL, 17518077371777717449UL + 78UL, 17518077371777717449UL + 267UL, "AtomsSt", 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U), "BasePotentialSt", 9, "double", (int)__builtin_offsetof (struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof (struct BasePotentialSt, mass), "double", (int)__builtin_offsetof (struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, name), "int", (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), "*", (int)__builtin_offsetof (struct BasePotentialSt, force), "*", (int)__builtin_offsetof (struct BasePotentialSt, print), "*", (int)__builtin_offsetof (struct BasePotentialSt, destroy), "DomainSt", 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent), "HaloExchangeSt", 5, "[ 6 x int ]", (int)__builtin_offsetof (struct HaloExchangeSt, nbrRank), "int", (int)__builtin_offsetof (struct HaloExchangeSt, bufCapacity), "*", (int)__builtin_offsetof (struct HaloExchangeSt, loadBuffer), "*", (int)__builtin_offsetof (struct HaloExchangeSt, unloadBuffer), "*", (int)__builtin_offsetof (struct HaloExchangeSt, destroy), "LinkCellSt", 10, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms), "int**", (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes), "LjPotentialSt", 11, "double", (int)__builtin_offsetof (struct LjPotentialSt, cutoff), "double", (int)__builtin_offsetof (struct LjPotentialSt, mass), "double", (int)__builtin_offsetof (struct LjPotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct LjPotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct LjPotentialSt, name), "int", (int)__builtin_offsetof (struct LjPotentialSt, atomicNo), "*", (int)__builtin_offsetof (struct LjPotentialSt, force), "*", (int)__builtin_offsetof (struct LjPotentialSt, print), "*", (int)__builtin_offsetof (struct LjPotentialSt, destroy), "double", (int)__builtin_offsetof (struct LjPotentialSt, sigma), "double", (int)__builtin_offsetof (struct LjPotentialSt, epsilon), "SimFlatSt", 11, "int", (int)__builtin_offsetof (struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof (struct SimFlatSt, printRate), "double", (int)__builtin_offsetof (struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof (struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof (struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof (struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof (struct SimFlatSt, species), "double", (int)__builtin_offsetof (struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof (struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof (struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof (struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, "[ 3 x char ]", (int)__builtin_offsetof (struct SpeciesDataSt, name), "int", (int)__builtin_offsetof (struct SpeciesDataSt, atomicNo), "double", (int)__builtin_offsetof (struct SpeciesDataSt, mass), "__sFILE", 19, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size), "_Z9ljDestroyPP15BasePotentialSt", 1, "free", "_Z9initLjPotv", 2, "malloc", "strcpy", "_ZL7ljForceP9SimFlatSt", 2, "_ZL9zeroReal3Pd", "__assert_rtn", "_ZL7ljPrintP7__sFILEP15BasePotentialSt", 1, "fprintf", "_ZL9zeroReal3Pd", 0);
    return 0;
}

static int __libchimes_module_init = module_init();
