# 1 "initAtoms.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "initAtoms.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
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
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 2 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 3 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"

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
# 5 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 1






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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 2

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
# 6 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 6 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"

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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/constants.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/constants.h"
static const double amuToInternalMass =
         1.660538921e-27 * 1.0e-10 * 1.0e-10
         / (1.0e-15 * 1.0e-15 * 1.602176565e-19);


static const double kB_eV = 8.6173324e-5;


static const double hartreeToEv = 27.21138505;


static const double bohrToAngs = 0.52917721092;
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
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
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
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
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.h" 1
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.h"
real_t gasdev(uint64_t* seed);


double lcg61(uint64_t* seed);


uint64_t mkSeed(uint32_t id, uint32_t callSite);
# 14 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
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
# 15 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.h" 1






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
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4

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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.h" 2

double timestep(SimFlat* s, int n, real_t dt);
void computeForce(SimFlat* s);
void kineticEnergy(SimFlat* s);


void redistributeAtoms(struct SimFlatSt* sim);
# 16 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
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
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 17 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c" 2
# 17 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 18 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
static void computeVcm(SimFlat* s, real_t vcm[3]);
# 19 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 20 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 21 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 22 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 23 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
Atoms* initAtoms(LinkCell* boxes)
# 24 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&initAtoms), 1, 0, (size_t)(13706408354153104418UL)); if (____chimes_replaying) { switch(get_next_call()) { case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } default: { chimes_error(); } } }
# 25 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    Atoms *atoms; atoms = ((Atoms *)malloc_wrapper(sizeof(Atoms), 13706408354153104296UL, 0, 1, (int)sizeof(struct AtomsSt), 6, (int)__builtin_offsetof(struct AtomsSt, gid), (int)__builtin_offsetof(struct AtomsSt, iSpecies), (int)__builtin_offsetof(struct AtomsSt, r), (int)__builtin_offsetof(struct AtomsSt, p), (int)__builtin_offsetof(struct AtomsSt, f), (int)__builtin_offsetof(struct AtomsSt, U))) ;
# 26 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 27 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    int maxTotalAtoms; maxTotalAtoms = (64 * boxes->nTotalBoxes) ;
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 29 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->gid = (int*) malloc_wrapper(maxTotalAtoms*sizeof(int), 13706408354153104308UL, 0, 0);
# 30 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->iSpecies = (int*) malloc_wrapper(maxTotalAtoms*sizeof(int), 13706408354153104308UL, 0, 0);
# 31 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->r = (real3*) malloc_wrapper(maxTotalAtoms*sizeof(real3), 13706408354153104308UL, 0, 0);
# 32 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->p = (real3*) malloc_wrapper(maxTotalAtoms*sizeof(real3), 13706408354153104308UL, 0, 0);
# 33 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->f = (real3*) malloc_wrapper(maxTotalAtoms*sizeof(real3), 13706408354153104308UL, 0, 0);
# 34 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->U = (real_t*)malloc_wrapper(maxTotalAtoms*sizeof(real_t), 13706408354153104308UL, 0, 0);
# 35 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 36 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->nLocal = 0;
# 37 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->nGlobal = 0;
# 38 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 39 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   { int iOff; for ( iOff = (0) ; iOff < maxTotalAtoms; iOff++)
# 40 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {
# 41 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      atoms->gid[iOff] = 0;
# 42 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      atoms->iSpecies[iOff] = 0;
# 43 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
       call_lbl_8: calling((void*)&zeroReal3, 8, 0UL, 1, (size_t)(13706408354153104308UL)); zeroReal3(atoms->r[iOff]);
# 44 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
       call_lbl_9: calling((void*)&zeroReal3, 9, 0UL, 1, (size_t)(13706408354153104308UL)); zeroReal3(atoms->p[iOff]);
# 45 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
       call_lbl_10: calling((void*)&zeroReal3, 10, 0UL, 1, (size_t)(13706408354153104308UL)); zeroReal3(atoms->f[iOff]);
# 46 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      atoms->U[iOff] = 0.;
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } }
# 48 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 49 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   alias_group_changed(6, (size_t)(13706408354153104289UL), (size_t)(13706408354153104290UL), (size_t)(13706408354153104291UL), (size_t)(13706408354153104292UL), (size_t)(13706408354153104296UL), (size_t)(13706408354153104308UL)); rm_stack(true, 13706408354153104296UL); return atoms;
# 50 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
}
# 51 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 52 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
void destroyAtoms(Atoms *atoms)
# 53 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&destroyAtoms), 1, 0, (size_t)(13706408354153104527UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 54 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (atoms->gid) {free_wrapper(atoms->gid, 13706408354153104441UL); };
# 55 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->gid = __null;
# 56 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (atoms->iSpecies) {free_wrapper(atoms->iSpecies, 13706408354153104441UL); };
# 58 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->iSpecies = __null;
# 59 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 60 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (atoms->r) {free_wrapper(atoms->r, 13706408354153104441UL); };
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->r = __null;
# 62 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (atoms->p) {free_wrapper(atoms->p, 13706408354153104441UL); };
# 64 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->p = __null;
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (atoms->f) {free_wrapper(atoms->f, 13706408354153104441UL); };
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->f = __null;
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 69 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (atoms->U) {free_wrapper(atoms->U, 13706408354153104441UL); };
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   atoms->U = __null;
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 72 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   free_wrapper(atoms, 13706408354153104527UL);
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
alias_group_changed(2, (size_t)(13706408354153104436UL), (size_t)(13706408354153104527UL)); rm_stack(false, 0UL); }
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 76 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 77 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 78 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
void createFccLattice(int nx, int ny, int nz, real_t lat, SimFlat* s)
# 79 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&createFccLattice), 5, 5, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13706408354153104790UL), "createFccLattice|nx|0", "i32", (void *)(&nx), (size_t)4, 0, 0, 0, "createFccLattice|ny|0", "i32", (void *)(&ny), (size_t)4, 0, 0, 0, "createFccLattice|nz|0", "i32", (void *)(&nz), (size_t)4, 0, 0, 0, "createFccLattice|lat|0", "double", (void *)(&lat), (size_t)8, 0, 0, 0, "createFccLattice|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 80 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
     lbl_0: const real_t *localMin; register_stack_var("createFccLattice|localMin|0", "double*", (void *)(&localMin), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } localMin = (s->domain->localMin) ;
# 81 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
     lbl_1: const real_t *localMax; register_stack_var("createFccLattice|localMax|0", "double*", (void *)(&localMax), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } localMax = (s->domain->localMax) ;
# 82 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 83 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
     lbl_2: int nb; register_stack_var("createFccLattice|nb|0", "i32", (void *)(&nb), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } nb = (4) ;
# 84 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_3: real3 basis[4] = { { 0.25, 0.25, 0.25 }, { 0.25, 0.75, 0.75 }, { 0.75, 0.25, 0.75 }, { 0.75, 0.75, 0.25 } }; register_stack_var("createFccLattice|basis|0", "[4 x [3 x double]]", (void *)(basis), (size_t)96, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } ;
# 88 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 89 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 90 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_4: int begin[3]; register_stack_var("createFccLattice|begin|0", "[3 x i32]", (void *)(begin), (size_t)12, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } ;
# 91 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_5: int end[3]; register_stack_var("createFccLattice|end|0", "[3 x i32]", (void *)(end), (size_t)12, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } ;
# 92 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   { int ii; for ( ii = (0) ; ii<3; ++ii)
# 93 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {
# 94 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
       call_lbl_1: calling((void*)&floor, 1, 0UL, 1, (size_t)(0UL)); begin[ii] = floor(localMin[ii]/lat);
# 95 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
       call_lbl_2: calling((void*)&ceil, 2, 0UL, 1, (size_t)(0UL)); end[ii] = ceil (localMax[ii]/lat);
# 96 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } }
# 97 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 98 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_6: real_t px; register_stack_var("createFccLattice|px|0", "double", (void *)(&px), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } lbl_7: real_t py; register_stack_var("createFccLattice|py|0", "double", (void *)(&py), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } lbl_8: real_t pz; register_stack_var("createFccLattice|pz|0", "double", (void *)(&pz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } ;
# 99 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   px=py=pz=0.0;
# 100 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   { lbl_9: int ix; register_stack_var("createFccLattice|ix|0", "i32", (void *)(&ix), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } for ( ix = (begin[0]) ;ix < end[0]; ++ix) { { lbl_10: int iy; register_stack_var("createFccLattice|iy|0", "i32", (void *)(&iy), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } { lbl_11: int iz; register_stack_var("createFccLattice|iz|0", "i32", (void *)(&iz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } { lbl_12: int ib; register_stack_var("createFccLattice|ib|0", "i32", (void *)(&ib), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } for ( iy = (begin[1]) ; iy < end[1]; ++iy) for ( iz = (begin[2]) ; iz < end[2]; ++iz) for ( ib = (0) ; ib < nb; ++ib) { lbl_13: real_t rx; register_stack_var("createFccLattice|rx|0", "double", (void *)(&rx), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_14; } rx = ((ix + basis[ib][0]) * lat) ; lbl_14: real_t ry; register_stack_var("createFccLattice|ry|0", "double", (void *)(&ry), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_15; } ry = ((iy + basis[ib][1]) * lat) ; lbl_15: real_t rz; register_stack_var("createFccLattice|rz|0", "double", (void *)(&rz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_16; } rz = ((iz + basis[ib][2]) * lat) ; if (rx < localMin[0] || rx >= localMax[0]) continue; if (ry < localMin[1] || ry >= localMax[1]) continue; if (rz < localMin[2] || rz >= localMax[2]) continue; lbl_16: int id; register_stack_var("createFccLattice|id|0", "i32", (void *)(&id), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } id = (ib + nb * (iz + nz * (iy + ny * (ix)))) ; call_lbl_3: calling((void*)&putAtomInBox, 3, 0UL, 10, (size_t)(13706408354153104792UL), (size_t)(13706408354153104792UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); putAtomInBox(s->boxes, s->atoms, id, 0, rx, ry, rz, px, py, pz); } } } }; } }
# 114 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 115 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 116 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   do { alias_group_changed(22, (size_t)(13706408354153104529UL), (size_t)(13706408354153104530UL), (size_t)(13706408354153104531UL), (size_t)(13706408354153104532UL), (size_t)(13706408354153104533UL), (size_t)(13706408354153104534UL), (size_t)(13706408354153104535UL), (size_t)(13706408354153104536UL), (size_t)(13706408354153104538UL), (size_t)(13706408354153104539UL), (size_t)(13706408354153104540UL), (size_t)(13706408354153104541UL), (size_t)(13706408354153104542UL), (size_t)(13706408354153104543UL), (size_t)(13706408354153104544UL), (size_t)(13706408354153104545UL), (size_t)(13706408354153104546UL), (size_t)(13706408354153104547UL), (size_t)(13706408354153104548UL), (size_t)(13706408354153104549UL), (size_t)(13706408354153104550UL), (size_t)(13706408354153104551UL)); call_lbl_5: calling((void*)&profileStart, 5, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 117 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    call_lbl_6: calling((void*)&addIntParallel, 6, 0UL, 3, (size_t)(13706408354153104792UL), (size_t)(13706408354153104792UL), (size_t)(0UL)); addIntParallel(&s->atoms->nLocal, &s->atoms->nGlobal, 1);
# 118 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   do { call_lbl_7: calling((void*)&profileStop, 7, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 119 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 120 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   (__builtin_expect(!(s->atoms->nGlobal == nb*nx*ny*nz), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c", 120, "s->atoms->nGlobal == nb*nx*ny*nz") : (void)0);
# 121 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
rm_stack(false, 0UL); }
# 122 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 123 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 124 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 125 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
void setVcm(SimFlat* s, real_t newVcm[3])
# 126 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&setVcm), 2, 2, (size_t)(13706408354153105013UL), (size_t)(13706408354153105014UL), "setVcm|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "setVcm|newVcm|0", "double*", (void *)(&newVcm), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 127 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_0: real_t oldVcm[3]; register_stack_var("setVcm|oldVcm|0", "[3 x double]", (void *)(oldVcm), (size_t)24, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(5): { goto call_lbl_5; } case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ;
# 128 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   alias_group_changed(2, (size_t)(13706408354153104858UL), (size_t)(13706408354153104859UL)); call_lbl_2: calling((void*)&computeVcm, 2, 0UL, 2, (size_t)(13706408354153105013UL), (size_t)(13706408354153104860UL)); computeVcm(s, oldVcm);
# 129 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 130 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   real_t vShift[3]; ;
# 131 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   vShift[0] = (newVcm[0] - oldVcm[0]);
# 132 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   vShift[1] = (newVcm[1] - oldVcm[1]);
# 133 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   vShift[2] = (newVcm[2] - oldVcm[2]); { call_lbl_5: unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(5, &____chimes_region_id0, 0); int ____chimes_first_iter0 = 1; ;
# 134 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
#pragma omp parallel for firstprivate(____chimes_first_iter0)
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 136 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; ++iBox)
# 137 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth0, ____chimes_region_id0, 0); ____chimes_first_iter0 = 0; } if (____chimes_replaying) { chimes_error(); }
# 138 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ++ii, ++iOff)
# 139 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      {
# 140 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 141 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
          real_t mass; mass = (s->species[iSpecies].mass) ;
# 142 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 143 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         s->atoms->p[iOff][0] += mass * vShift[0];
# 144 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         s->atoms->p[iOff][1] += mass * vShift[1];
# 145 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         s->atoms->p[iOff][2] += mass * vShift[2];
# 146 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      } }
# 147 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0); }
# 148 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
alias_group_changed(7, (size_t)(13706408354153104861UL), (size_t)(13706408354153104862UL), (size_t)(13706408354153104863UL), (size_t)(13706408354153104864UL), (size_t)(13706408354153104865UL), (size_t)(13706408354153104866UL), (size_t)(13706408354153104937UL)); rm_stack(false, 0UL); }
# 160 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 160 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
void setTemperature(SimFlat* s, real_t temperature)
# 161 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&setTemperature), 2, 2, (size_t)(13706408354153105477UL), (size_t)(0UL), "setTemperature|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "setTemperature|temperature|0", "double", (void *)(&temperature), (size_t)8, 0, 0, 0); { call_lbl_20: unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(20, &____chimes_region_id1, 0); int ____chimes_first_iter1 = 1; ; if (____chimes_replaying) { goto lbl_0; }
# 162 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
#pragma omp parallel for firstprivate(____chimes_first_iter1)
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 164 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; ++iBox)
# 165 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth1, ____chimes_region_id1, 0); ____chimes_first_iter1 = 0; } if (____chimes_replaying) { chimes_error(); }
# 166 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ++ii, ++iOff)
# 167 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      {
# 168 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
          int iType; iType = (s->atoms->iSpecies[iOff]) ;
# 169 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
          real_t mass; mass = (s->species[iType].mass) ;
# 170 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
          real_t sigma; call_lbl_1: calling((void*)&sqrt, 1, 0UL, 1, (size_t)(0UL)); sigma = (sqrt(kB_eV * temperature / mass)) ;
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(9, (size_t)(13706408354153105199UL), (size_t)(13706408354153105200UL), (size_t)(13706408354153105201UL), (size_t)(13706408354153105202UL), (size_t)(13706408354153105203UL), (size_t)(13706408354153105204UL), (size_t)(13706408354153105205UL), (size_t)(13706408354153105206UL), (size_t)(13706408354153105255UL)); uint64_t seed; call_lbl_3: calling((void*)&mkSeed, 3, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); seed = (mkSeed(s->atoms->gid[iOff], 123)) ;
# 172 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(1, (size_t)(13706408354153105207UL)); call_lbl_5: calling((void*)&gasdev, 5, 0UL, 1, (size_t)(13706408354153105207UL)); s->atoms->p[iOff][0] = mass * sigma * gasdev(&seed);
# 173 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(1, (size_t)(13706408354153105255UL)); call_lbl_7: calling((void*)&gasdev, 7, 0UL, 1, (size_t)(13706408354153105207UL)); s->atoms->p[iOff][1] = mass * sigma * gasdev(&seed);
# 174 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(1, (size_t)(13706408354153105255UL)); call_lbl_9: calling((void*)&gasdev, 9, 0UL, 1, (size_t)(13706408354153105207UL)); s->atoms->p[iOff][2] = mass * sigma * gasdev(&seed);
# 175 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      } }
# 176 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1); }
# 177 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 178 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 179 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   if (temperature == 0.) {alias_group_changed(7, (size_t)(13706408354153105199UL), (size_t)(13706408354153105200UL), (size_t)(13706408354153105201UL), (size_t)(13706408354153105202UL), (size_t)(13706408354153105203UL), (size_t)(13706408354153105209UL), (size_t)(13706408354153105255UL)); rm_stack(false, 0UL); return;; };
# 180 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_0: real_t vZero[3] = { 0., 0., 0. }; register_stack_var("setTemperature|vZero|0", "[3 x double]", (void *)(vZero), (size_t)24, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 181 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   alias_group_changed(9, (size_t)(13706408354153105199UL), (size_t)(13706408354153105200UL), (size_t)(13706408354153105201UL), (size_t)(13706408354153105202UL), (size_t)(13706408354153105203UL), (size_t)(13706408354153105204UL), (size_t)(13706408354153105205UL), (size_t)(13706408354153105206UL), (size_t)(13706408354153105255UL)); call_lbl_13: calling((void*)&setVcm, 13, 0UL, 2, (size_t)(13706408354153105477UL), (size_t)(13706408354153105208UL)); setVcm(s, vZero);
# 182 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    call_lbl_14: calling((void*)&kineticEnergy, 14, 0UL, 1, (size_t)(13706408354153105477UL)); kineticEnergy(s);
# 183 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
     lbl_1: real_t temp; register_stack_var("setTemperature|temp|0", "double", (void *)(&temp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } temp = ((s->eKinetic / s->atoms->nGlobal) / kB_eV / 1.5) ;
# 184 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 185 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
     lbl_2: real_t scaleFactor; register_stack_var("setTemperature|scaleFactor|0", "double", (void *)(&scaleFactor), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(17): { goto call_lbl_17; } default: { chimes_error(); } } } call_lbl_15: calling((void*)&sqrt, 15, 0UL, 1, (size_t)(0UL)); scaleFactor = (sqrt(temperature / temp)); { call_lbl_21: unsigned ____chimes_parent_stack_depth2 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth2 = get_thread_stack_depth(); size_t ____chimes_region_id2; unsigned ____chimes_parent_thread2 = entering_omp_parallel(21, &____chimes_region_id2, 0); int ____chimes_first_iter2 = 1; ;
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
#pragma omp parallel for firstprivate(____chimes_first_iter2)
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; ++iBox)
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {if (____chimes_first_iter2) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread2, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth2, ____chimes_region_id2, 0); ____chimes_first_iter2 = 0; } if (____chimes_replaying) { chimes_error(); }
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ++ii, ++iOff)
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      {
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         s->atoms->p[iOff][0] *= scaleFactor;
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         s->atoms->p[iOff][1] *= scaleFactor;
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         s->atoms->p[iOff][2] *= scaleFactor;
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      } }
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } leaving_omp_parallel(____chimes_call_stack_depth2, ____chimes_region_id2); }
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   alias_group_changed(6, (size_t)(13706408354153105209UL), (size_t)(13706408354153105210UL), (size_t)(13706408354153105211UL), (size_t)(13706408354153105212UL), (size_t)(13706408354153105213UL), (size_t)(13706408354153105255UL)); call_lbl_17: calling((void*)&kineticEnergy, 17, 0UL, 1, (size_t)(13706408354153105477UL)); kineticEnergy(s);
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   temp = s->eKinetic/s->atoms->nGlobal/kB_eV/1.5;
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
alias_group_changed(7, (size_t)(13706408354153105199UL), (size_t)(13706408354153105200UL), (size_t)(13706408354153105201UL), (size_t)(13706408354153105202UL), (size_t)(13706408354153105203UL), (size_t)(13706408354153105209UL), (size_t)(13706408354153105255UL)); rm_stack(false, 0UL); }
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
void randomDisplacements(SimFlat* s, real_t delta)
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&randomDisplacements), 2, 2, (size_t)(13706408354153105606UL), (size_t)(0UL), "randomDisplacements|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "randomDisplacements|delta|0", "double", (void *)(&delta), (size_t)8, 0, 0, 0); { call_lbl_11: unsigned ____chimes_parent_stack_depth3 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth3 = get_thread_stack_depth(); size_t ____chimes_region_id3; unsigned ____chimes_parent_thread3 = entering_omp_parallel(11, &____chimes_region_id3, 0); int ____chimes_first_iter3 = 1; ; if (____chimes_replaying) { switch(get_next_call()) { case(11): { goto call_lbl_11; } default: { chimes_error(); } } }
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
#pragma omp parallel for firstprivate(____chimes_first_iter3)
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; ++iBox)
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {if (____chimes_first_iter3) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread3, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth3, ____chimes_region_id3, 0); ____chimes_first_iter3 = 0; } if (____chimes_replaying) { chimes_error(); }
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ++ii, ++iOff)
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      {
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(6, (size_t)(13706408354153105489UL), (size_t)(13706408354153105490UL), (size_t)(13706408354153105491UL), (size_t)(13706408354153105492UL), (size_t)(13706408354153105493UL), (size_t)(13706408354153105536UL)); uint64_t seed; call_lbl_2: calling((void*)&mkSeed, 2, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); seed = (mkSeed(s->atoms->gid[iOff], 457)) ;
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(1, (size_t)(13706408354153105494UL)); call_lbl_4: calling((void*)&lcg61, 4, 0UL, 1, (size_t)(13706408354153105494UL)); s->atoms->r[iOff][0] += (2.0*lcg61(&seed)-1.0) * delta;
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(1, (size_t)(13706408354153105536UL)); call_lbl_6: calling((void*)&lcg61, 6, 0UL, 1, (size_t)(13706408354153105494UL)); s->atoms->r[iOff][1] += (2.0*lcg61(&seed)-1.0) * delta;
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         alias_group_changed(1, (size_t)(13706408354153105536UL)); call_lbl_8: calling((void*)&lcg61, 8, 0UL, 1, (size_t)(13706408354153105494UL)); s->atoms->r[iOff][2] += (2.0*lcg61(&seed)-1.0) * delta;
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      } }
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } leaving_omp_parallel(____chimes_call_stack_depth3, ____chimes_region_id3); }
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
alias_group_changed(6, (size_t)(13706408354153105489UL), (size_t)(13706408354153105490UL), (size_t)(13706408354153105491UL), (size_t)(13706408354153105492UL), (size_t)(13706408354153105493UL), (size_t)(13706408354153105536UL)); rm_stack(false, 0UL); }
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
void computeVcm(SimFlat* s, real_t vcm[3])
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
{new_stack((void *)(&computeVcm), 2, 1, (size_t)(13706408354153105197UL), (size_t)(13706408354153105179UL), "computeVcm|vcm|0", "double*", (void *)(&vcm), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_0: real_t vcmLocal[4] = { 0., 0., 0., 0. }; register_stack_var("computeVcm|vcmLocal|0", "[4 x double]", (void *)(vcmLocal), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    lbl_1: real_t vcmSum[4] = { 0., 0., 0., 0. }; register_stack_var("computeVcm|vcmSum|0", "[4 x double]", (void *)(vcmSum), (size_t)32, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(7): { goto call_lbl_7; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ;
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    real_t v0; v0 = (0.) ;
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    real_t v1; v1 = (0.) ;
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    real_t v2; v2 = (0.) ;
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    real_t v3; v3 = (0.); { call_lbl_7: unsigned ____chimes_parent_stack_depth4 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth4 = get_thread_stack_depth(); size_t ____chimes_region_id4; unsigned ____chimes_parent_thread4 = entering_omp_parallel(7, &____chimes_region_id4, 0); int ____chimes_first_iter4 = 1; ;
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
#pragma omp parallel for reduction(+:v0) reduction(+:v1) reduction(+:v2) reduction(+:v3) firstprivate(____chimes_first_iter4)
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; ++iBox)
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   {if (____chimes_first_iter4) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread4, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth4, ____chimes_region_id4, 0); ____chimes_first_iter4 = 0; } if (____chimes_replaying) { chimes_error(); }
# 233 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ++ii, ++iOff)
# 234 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      {
# 235 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         v0 += s->atoms->p[iOff][0];
# 236 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         v1 += s->atoms->p[iOff][1];
# 237 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         v2 += s->atoms->p[iOff][2];
# 238 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 239 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 240 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
         v3 += s->species[iSpecies].mass;
# 241 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
      } }
# 242 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   } leaving_omp_parallel(____chimes_call_stack_depth4, ____chimes_region_id4); }
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
  vcmLocal[0] = v0;
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
  vcmLocal[1] = v1;
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
  vcmLocal[2] = v2;
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
  vcmLocal[3] = v3;
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   do { alias_group_changed(11, (size_t)(13706408354153105015UL), (size_t)(13706408354153105016UL), (size_t)(13706408354153105017UL), (size_t)(13706408354153105019UL), (size_t)(13706408354153105020UL), (size_t)(13706408354153105021UL), (size_t)(13706408354153105022UL), (size_t)(13706408354153105023UL), (size_t)(13706408354153105024UL), (size_t)(13706408354153105025UL), (size_t)(13706408354153105026UL)); call_lbl_2: calling((void*)&profileStart, 2, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    call_lbl_3: calling((void*)&addRealParallel, 3, 0UL, 3, (size_t)(13706408354153105017UL), (size_t)(13706408354153105018UL), (size_t)(0UL)); addRealParallel(vcmLocal, vcmSum, 4);
# 251 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   do { call_lbl_4: calling((void*)&profileStop, 4, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 252 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
    real_t totalMass; totalMass = (vcmSum[3]) ;
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   vcm[0] = vcmSum[0]/totalMass;
# 255 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   vcm[1] = vcmSum[1]/totalMass;
# 256 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
   vcm[2] = vcmSum[2]/totalMass;
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.c"
alias_group_changed(2, (size_t)(13706408354153105027UL), (size_t)(13706408354153105179UL)); rm_stack(false, 0UL); }


static int module_init() {
    init_module(13706408354153104288UL, 24, 8, 49, 11, 13706408354153104288UL + 571UL, 13706408354153104288UL + 726UL, 13706408354153104288UL + 570UL, 13706408354153104288UL + 725UL, 13706408354153104288UL + 1201UL, 13706408354153104288UL + 1318UL, 13706408354153104288UL + 239UL, 13706408354153104288UL + 153UL, 13706408354153104288UL + 134UL, 13706408354153104288UL + 147UL, 13706408354153104288UL + 792UL, 13706408354153104288UL + 794UL, 13706408354153104288UL + 1UL, 13706408354153104288UL + 130UL, 13706408354153104288UL + 2UL, 13706408354153104288UL + 8UL, 13706408354153104288UL + 8UL, 13706408354153104288UL + 20UL, 13706408354153104288UL + 911UL, 13706408354153104288UL + 1189UL, 13706408354153104288UL + 148UL, 13706408354153104288UL + 239UL, 13706408354153104288UL + 1318UL, 13706408354153104288UL + 1246UL, 13706408354153104288UL + 245UL, 13706408354153104288UL + 502UL, 13706408354153104288UL + 247UL, 13706408354153104288UL + 504UL, 13706408354153104288UL + 246UL, 13706408354153104288UL + 504UL, 13706408354153104288UL + 965UL, 13706408354153104288UL + 967UL, 13706408354153104288UL + 1189UL, 13706408354153104288UL + 965UL, 13706408354153104288UL + 502UL, 13706408354153104288UL + 504UL, 13706408354153104288UL + 909UL, 13706408354153104288UL + 792UL, 13706408354153104288UL + 727UL, 13706408354153104288UL + 909UL, 13706408354153104288UL + 725UL, 13706408354153104288UL + 647UL, 13706408354153104288UL + 647UL, 13706408354153104288UL + 649UL, 13706408354153104288UL + 1246UL, 13706408354153104288UL + 1248UL, 13706408354153104288UL + 728UL, 13706408354153104288UL + 891UL, "AtomsSt", 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U), "BasePotentialSt", 9, "double", (int)__builtin_offsetof (struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof (struct BasePotentialSt, mass), "double", (int)__builtin_offsetof (struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, name), "int", (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), "*", (int)__builtin_offsetof (struct BasePotentialSt, force), "*", (int)__builtin_offsetof (struct BasePotentialSt, print), "*", (int)__builtin_offsetof (struct BasePotentialSt, destroy), "DomainSt", 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent), "HaloExchangeSt", 5, "[ 6 x int ]", (int)__builtin_offsetof (struct HaloExchangeSt, nbrRank), "int", (int)__builtin_offsetof (struct HaloExchangeSt, bufCapacity), "*", (int)__builtin_offsetof (struct HaloExchangeSt, loadBuffer), "*", (int)__builtin_offsetof (struct HaloExchangeSt, unloadBuffer), "*", (int)__builtin_offsetof (struct HaloExchangeSt, destroy), "LinkCellSt", 10, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms), "int**", (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes), "SimFlatSt", 11, "int", (int)__builtin_offsetof (struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof (struct SimFlatSt, printRate), "double", (int)__builtin_offsetof (struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof (struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof (struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof (struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof (struct SimFlatSt, species), "double", (int)__builtin_offsetof (struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof (struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof (struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof (struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, "[ 3 x char ]", (int)__builtin_offsetof (struct SpeciesDataSt, name), "int", (int)__builtin_offsetof (struct SpeciesDataSt, atomicNo), "double", (int)__builtin_offsetof (struct SpeciesDataSt, mass), "TimerHandle", 0, "__sFILE", 19, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size), "_Z9initAtomsP10LinkCellSt", 2, "_ZL9zeroReal3Pd", "malloc", "_ZL9zeroReal3Pd", 0, "_Z12destroyAtomsP7AtomsSt", 1, "free", "_Z16createFccLatticeiiidP9SimFlatSt", 7, "_Z11profileStop11TimerHandle", "_Z12profileStart11TimerHandle", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z14addIntParallelPiS_i", "__assert_rtn", "ceil", "floor", "_Z6setVcmP9SimFlatStPd", 1, "_ZL10computeVcmP9SimFlatStPd", "_ZL10computeVcmP9SimFlatStPd", 3, "_Z11profileStop11TimerHandle", "_Z12profileStart11TimerHandle", "_Z15addRealParallelPdS_i", "_Z14setTemperatureP9SimFlatStd", 5, "_Z13kineticEnergyP9SimFlatSt", "_Z6gasdevPy", "_Z6mkSeedjj", "_Z6setVcmP9SimFlatStPd", "sqrt", "_Z19randomDisplacementsP9SimFlatStd", 2, "_Z5lcg61Py", "_Z6mkSeedjj", "createFccLattice|nx|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|ny|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|nz|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|lat|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|s|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|localMin|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|localMax|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|nb|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|basis|0", 1, "_Z16createFccLatticeiiidP9SimFlatSt", "createFccLattice|begin|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|end|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|px|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|py|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|pz|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|ix|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|iy|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|iz|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|ib|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|rx|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|ry|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|rz|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "createFccLattice|id|0", 4, "_Z14addIntParallelPiS_i", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "setVcm|s|0", 1, "_ZL10computeVcmP9SimFlatStPd", "setVcm|newVcm|0", 1, "_ZL10computeVcmP9SimFlatStPd", "setVcm|oldVcm|0", 1, "_Z6setVcmP9SimFlatStPd", "computeVcm|vcm|0", 3, "_Z15addRealParallelPdS_i", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "computeVcm|vcmLocal|0", 1, "_ZL10computeVcmP9SimFlatStPd", "computeVcm|vcmSum|0", 1, "_ZL10computeVcmP9SimFlatStPd", "setTemperature|s|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|temperature|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|iBox|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|iOff|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|ii|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|iType|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|mass|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|sigma|0", 4, "_Z6setVcmP9SimFlatStPd", "_Z6mkSeedjj", "_Z6gasdevPy", "_Z13kineticEnergyP9SimFlatSt", "setTemperature|seed|0", 1, "_Z14setTemperatureP9SimFlatStd", "setTemperature|vZero|0", 1, "_Z14setTemperatureP9SimFlatStd", "setTemperature|temp|0", 1, "_Z13kineticEnergyP9SimFlatSt", "setTemperature|scaleFactor|0", 1, "_Z13kineticEnergyP9SimFlatSt", "setTemperature|iBox|1", 1, "_Z13kineticEnergyP9SimFlatSt", "setTemperature|iOff|1", 1, "_Z13kineticEnergyP9SimFlatSt", "setTemperature|ii|1", 1, "_Z13kineticEnergyP9SimFlatSt", "randomDisplacements|s|0", 2, "_Z6mkSeedjj", "_Z5lcg61Py", "randomDisplacements|delta|0", 2, "_Z6mkSeedjj", "_Z5lcg61Py", "randomDisplacements|iBox|0", 2, "_Z6mkSeedjj", "_Z5lcg61Py", "randomDisplacements|iOff|0", 2, "_Z6mkSeedjj", "_Z5lcg61Py", "randomDisplacements|ii|0", 2, "_Z6mkSeedjj", "_Z5lcg61Py", "randomDisplacements|seed|0", 1, "_Z19randomDisplacementsP9SimFlatStd");
    return 0;
}

static int __libchimes_module_init = module_init();
