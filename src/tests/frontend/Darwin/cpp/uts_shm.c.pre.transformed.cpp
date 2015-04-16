# 1 "uts_shm.c.pre.transformed.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 175 "<built-in>" 3
# 1 "<command line>" 1


# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 4 "<command line>" 2
# 1 "<built-in>" 2
# 1 "uts_shm.c.pre.transformed.cpp" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 175 "<built-in>" 3
# 1 "<command line>" 1


# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 5 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2

extern void init_chimes();
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned naliases, ...);
extern int get_next_call();
extern void new_stack(void *func_ptr, unsigned n_local_arg_aliases,
        unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nstructs,
        ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias);
extern void register_stack_var(const char *mangled_name,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, unsigned nlocals, ...);
extern void leaving_omp_parallel();

extern void chimes_error();
# 50 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }


extern int ____chimes_replaying;
# 4 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c" 2
# 15 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 61 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 151 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 152 "/usr/include/Availability.h" 2 3 4
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
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 1 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


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
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








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

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit") ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit") ;
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

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
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
pid_t wait(int *) __asm("_" "wait") ;
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid") ;

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid") ;


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 29 "/usr/include/alloca.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/alloca.h" 2 3 4

extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 74 "/usr/include/stdlib.h" 2 3 4


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
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod") ;
float strtof(const char *, char **) __asm("_" "strtof") ;
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system") __attribute__((availability(macosx,introduced=10.0)));
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
int putenv(char *) __asm("_" "putenv") ;
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv") ;

void setkey(const char *) __asm("_" "setkey") ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv") ;








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
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



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

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

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
# 16 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 71 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
extern "C" {

int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));

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



FILE *fopen(const char * , const char * ) __asm("_" "fopen");

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs") ;
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen") ;
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite") ;
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





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
}
# 314 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");

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

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
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
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** , size_t * , int, FILE * ) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** , size_t * , FILE * ) __attribute__((availability(macosx,introduced=10.7)));
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
# 17 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 64 "/usr/include/string.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 65 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/usr/include/string.h" 2 3 4



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
char *strerror(int) __asm("_" "strerror") ;
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
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
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
errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
}







extern "C" {
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * , void * , ssize_t);
}








# 1 "/usr/include/strings.h" 1 3 4
# 65 "/usr/include/strings.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 66 "/usr/include/strings.h" 2 3 4

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
int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));
}



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 18 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 33 "/usr/include/math.h" 3 4
extern "C" {
# 44 "/usr/include/math.h" 3 4
 typedef float float_t;
    typedef double double_t;
# 111 "/usr/include/math.h" 3 4
extern int __math_errhandling(void);
# 144 "/usr/include/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 188 "/usr/include/math.h" 3 4
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
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 322 "/usr/include/math.h" 3 4
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
# 565 "/usr/include/math.h" 3 4
extern float __inff(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
extern double __inf(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
extern long double __infl(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern float __nan(void) __attribute__((availability(macosx,introduced=10.0)));
# 597 "/usr/include/math.h" 3 4
extern float __exp10f(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __exp10(double) __attribute__((availability(macosx,introduced=10.9)));





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) __attribute__((availability(macosx,introduced=10.9)));
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) __attribute__((availability(macosx,introduced=10.9)));
# 614 "/usr/include/math.h" 3 4
extern float __cospif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __cospi(double) __attribute__((availability(macosx,introduced=10.9)));
extern float __sinpif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __sinpi(double) __attribute__((availability(macosx,introduced=10.9)));
extern float __tanpif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __tanpi(double) __attribute__((availability(macosx,introduced=10.9)));






inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) __attribute__((availability(macosx,introduced=10.9)));
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) __attribute__((availability(macosx,introduced=10.9)));






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






extern double j0(double) __attribute__((availability(macosx,introduced=10.0)));
extern double j1(double) __attribute__((availability(macosx,introduced=10.0)));
extern double jn(int, double) __attribute__((availability(macosx,introduced=10.0)));
extern double y0(double) __attribute__((availability(macosx,introduced=10.0)));
extern double y1(double) __attribute__((availability(macosx,introduced=10.0)));
extern double yn(int, double) __attribute__((availability(macosx,introduced=10.0)));
extern double scalb(double, double);
extern int signgam;
# 712 "/usr/include/math.h" 3 4
extern long int rinttol(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern long int roundtol(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double drem(double, double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern int finite(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double gamma(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double significand(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
# 737 "/usr/include/math.h" 3 4
}
# 19 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c" 2
# 19 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts.h" 1
# 18 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts.h"
# 1 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/rng.h" 1
# 16 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/rng.h"
# 1 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_sha1.h" 1
# 37 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_sha1.h"
# 1 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h" 1
# 45 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h"
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
# 161 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 162 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 163 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 165 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 167 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 168 "/usr/include/sys/types.h" 2 3 4
# 180 "/usr/include/sys/types.h" 3 4
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
# 181 "/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;
# 194 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 194 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 195 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 196 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 197 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 198 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 201 "/usr/include/sys/types.h" 2 3 4
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
# 46 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h" 2


extern "C" {




# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h" 1 3 4
# 38 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h" 3 4
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
# 39 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/limits.h" 2 3 4
# 52 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h" 2
# 70 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h"
 typedef unsigned char uint_8t;
# 79 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h"
 typedef unsigned short uint_16t;
# 89 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h"
 typedef unsigned int uint_32t;
# 123 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h"
 typedef unsigned long uint_64t;
# 197 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_types.h"
}
# 38 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_sha1.h" 2





extern "C"
{
# 54 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_sha1.h"
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
# 95 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/brg_sha1.h"
void sha1_compile(sha1_ctx ctx[1]);

void sha1_begin(sha1_ctx ctx[1]);
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);
void sha1_end(unsigned char hval[], sha1_ctx ctx[1]);
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);


}
# 17 "/Users/jmg3/num-debug/src/examples/cpp/uts/rng/rng.h" 2
# 19 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts.h" 2
# 28 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts.h"
struct node_t {
  int type;
  int height;
  int numChildren;
# 44 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts.h"
 struct state_t state;
};

typedef struct node_t Node;
# 59 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts.h"
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
# 21 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c" 2
# 180 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 180 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int doSteal = 0;
# 181 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int chunkSize = 20;
# 182 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int cbint = 1;
# 183 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int pollint = 1;
# 226 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 226 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int stats = 0;
# 227 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int unbType = -1;
# 243 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 243 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
struct sessionRecord_t {
# 244 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 double startTime, endTime;
# 245 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
};
# 246 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
typedef struct sessionRecord_t SessionRecord;
# 247 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 248 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 249 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
struct stealRecord_t {
# 250 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 long int nodeCount;
# 251 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int victimThread;
# 252 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
};
# 253 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
typedef struct stealRecord_t StealRecord;
# 254 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 255 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 256 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
struct metaData_t {
# 257 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 SessionRecord sessionRecords[5][20000];
# 258 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 StealRecord stealRecords[20000];
# 259 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
};
# 260 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
typedef struct metaData_t MetaData;
# 261 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 262 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 263 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
char debug_str[1000];
# 273 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 273 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
struct stealStack_t
# 274 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
{
# 275 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int stackSize;
# 276 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int workAvail;
# 277 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int sharedStart;
# 278 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int local;
# 279 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int top;
# 280 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int maxStackDepth;
# 281 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int nNodes, maxTreeDepth;
# 282 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int nLeaves;
# 283 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int nAcquire, nRelease, nSteal, nFail;
# 284 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int wakeups, falseWakeups, nNodes_last;
# 285 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 double time[5], timeLast;
# 286 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int entries[5], curState;
# 287 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 void * stackLock;
# 288 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 Node * stack;
# 289 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 Node * stack_g;
# 290 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 291 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 292 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 293 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
};
# 294 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
typedef struct stealStack_t StealStack;
# 295 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 296 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
typedef StealStack * SharedStealStackPtr;
# 297 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 298 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 299 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 300 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 301 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 302 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 303 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 304 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 SharedStealStackPtr stealStack[1];
# 305 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 306 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 307 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int cb_cancel;
# 308 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int cb_count;
# 309 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int cb_done;
# 310 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void * cb_lock;
# 311 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 312 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 double startTime[1];
# 313 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 314 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 315 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 316 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 317 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 318 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 319 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 320 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
char * impl_getName() {new_stack((void *)(&impl_getName), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 321 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 char *name[] = { "Sequential C", "C/OpenMP", "UPC", "SHMEM", "PThreads" }; ;
# 322 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679872946UL)); rm_stack(true, 5273863086679874741UL); return name[0];
# 323 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 324 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 325 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 326 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 327 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int impl_paramsToStr(char *strBuf, int ind) {new_stack((void *)(&impl_paramsToStr), 2, 2, (size_t)(5273863086679872995UL), (size_t)(0UL), "impl_paramsToStr|strBuf|0", "i8*", (void *)(&strBuf), (size_t)8, 1, 0, 0, "impl_paramsToStr|ind|0", "i32", (void *)(&ind), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 328 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679872971UL), (size_t)(5273863086679872972UL)); ind += sprintf(strBuf+ind, "Execution strategy:  ");
# 329 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (0) {{ ind += sprintf(strBuf + ind, "Parallel search using %d threads\n", 1); if (doSteal) { ind += sprintf(strBuf + ind, "   Load balance by work stealing, chunk size = %d nodes\n", chunkSize); ind += sprintf(strBuf + ind, "  CBarrier Interval: %d\n", cbint); ind += sprintf(strBuf + ind, "   Polling Interval: %d\n", pollint); } else ind += sprintf(strBuf + ind, "   No load balancing.\n"); }; } else {ind += sprintf(strBuf + ind, "Iterative sequential search\n"); } ;
# 341 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 342 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679872972UL)); rm_stack(false, 0UL); return ind;
# 343 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 344 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 345 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 346 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int impl_parseParam(char *param, char *value) {new_stack((void *)(&impl_parseParam), 2, 0, (size_t)(5273863086679873017UL), (size_t)(5273863086679873018UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 347 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int err; err = (0) ;
# 348 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 349 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 switch (param[1]) {
# 388 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 388 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 default:
# 389 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 err = 1;
# 390 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 break;
# 391 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 392 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 393 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(3, (size_t)(5273863086679872999UL), (size_t)(5273863086679873000UL), (size_t)(5273863086679873001UL)); rm_stack(false, 0UL); return err;
# 394 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 395 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 396 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void impl_helpMessage() {new_stack((void *)(&impl_helpMessage), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 397 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (0) {
# 398 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("   -s  int   zero/nonzero to disable/enable work stealing\n");
# 399 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("   -c  int   chunksize for work stealing\n");
# 400 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("   -i  int   set cancellable barrier polling interval\n");
# 401 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 402 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 403 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 404 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 405 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 406 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 407 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 } else {
# 408 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 409 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 410 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 411 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("   none.\n");
# 412 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 413 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 414 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
rm_stack(false, 0UL); }
# 415 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 416 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void impl_abort(int err) {new_stack((void *)(&impl_abort), 1, 1, (size_t)(0UL), "impl_abort|err|0", "i32", (void *)(&err), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 417 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 418 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 419 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 420 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 421 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 422 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 423 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 424 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679873022UL)); exit(err);
# 425 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 426 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
rm_stack(false, 0UL); }
# 461 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 461 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_mkEmpty(StealStack *s) {new_stack((void *)(&ss_mkEmpty), 1, 0, (size_t)(5273863086679873047UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 462 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 463 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->sharedStart = 0;
# 464 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->local = 0;
# 465 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->top = 0;
# 466 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->workAvail = 0;
# 467 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 468 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(2, (size_t)(5273863086679873031UL), (size_t)(5273863086679873047UL)); rm_stack(false, 0UL); }
# 469 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 470 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 471 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_error(char *str) {new_stack((void *)(&ss_error), 1, 1, (size_t)(5273863086679873056UL), "ss_error|str|0", "i8*", (void *)(&str), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 472 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("*** [Thread %i] %s\n",0, str);
# 473 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679873048UL)); exit(4);
# 474 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
rm_stack(false, 0UL); }
# 475 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 476 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 477 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_init(StealStack *s, int nelts) {new_stack((void *)(&ss_init), 2, 2, (size_t)(5273863086679873148UL), (size_t)(0UL), "ss_init|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0, "ss_init|nelts|0", "i32", (void *)(&nelts), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 478 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int nbytes; register_stack_var("ss_init|nbytes|0", "i32", (void *)(&nbytes), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } nbytes = (nelts * sizeof(Node)) ;
# 479 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 480 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 1) {printf("Thread %d intializing stealStack %p, sizeof(Node) = %X\n", 0, s, (int)(sizeof(Node))); };
# 483 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 484 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 485 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 486 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->stack_g = ( Node *) malloc_wrapper (nbytes, 5273863086679873079UL, 0, 1, (int)sizeof(struct node_t), 0);
# 487 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->stack = (Node *) s->stack_g;
# 488 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 489 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 490 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 491 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 492 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 493 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->stack == __null) {
# 494 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("Request for %d bytes for stealStack on thread %d failed\n",
# 495 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 nbytes, 0);
# 496 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(4, (size_t)(5273863086679873057UL), (size_t)(5273863086679873058UL), (size_t)(5273863086679873059UL), (size_t)(5273863086679873148UL)); call_lbl_5: calling((void*)&ss_error, 5, 0UL, 1, (size_t)(5273863086679874753UL)); ss_error("ss_init: unable to allocate space for stealstack");
# 497 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 498 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 499 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 1) {printf("Thread %d init stackLock %p\n", 0, (void *)s->stackLock); };
# 501 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->stackSize = nelts;
# 502 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nNodes = 0;
# 503 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->maxStackDepth = 0;
# 504 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->maxTreeDepth = 0;
# 505 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nLeaves = 0;
# 506 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nAcquire = 0;
# 507 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nRelease = 0;
# 508 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nSteal = 0;
# 509 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nFail = 0;
# 510 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->wakeups = 0;
# 511 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->falseWakeups = 0;
# 512 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nNodes_last = 0;
# 513 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_7: calling((void*)&ss_mkEmpty, 7, 0UL, 1, (size_t)(5273863086679873148UL)); ss_mkEmpty(s);
# 514 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(4, (size_t)(5273863086679873057UL), (size_t)(5273863086679873058UL), (size_t)(5273863086679873059UL), (size_t)(5273863086679873148UL)); rm_stack(false, 0UL); }
# 515 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 516 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 517 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 518 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_push(StealStack *s, Node *c) {new_stack((void *)(&ss_push), 2, 2, (size_t)(5273863086679873223UL), (size_t)(5273863086679873229UL), "ss_push|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0, "ss_push|c|0", "%struct.node_t*", (void *)(&c), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } default: { chimes_error(); } } }
# 519 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->top >= s->stackSize) {alias_group_changed(2, (size_t)(5273863086679873151UL), (size_t)(5273863086679873152UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874755UL)); ss_error("ss_push: overflow"); };
# 521 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 1) {alias_group_changed(2, (size_t)(5273863086679873151UL), (size_t)(5273863086679873152UL)); call_lbl_5: calling((void*)&rng_showstate, 5, 5273863086679873178UL, 2, (size_t)(5273863086679873229UL), (size_t)(5273863086679874734UL)); printf("ss_push: Thread %d, posn %d: node %s [%d]\n", 0, s->top, rng_showstate(c->state.state, debug_str), c->height); };
# 524 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_6: calling((void*)&memcpy, 6, 0UL, 3, (size_t)(5273863086679873190UL), (size_t)(5273863086679873229UL), (size_t)(0UL)); memcpy(&(s->stack[s->top]), c, sizeof(Node));
# 525 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->top++;
# 526 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nNodes++;
# 527 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->maxStackDepth = (((s->top) > (s->maxStackDepth)) ? (s->top) : (s->maxStackDepth));
# 528 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->maxTreeDepth = (((s->maxTreeDepth) > (c->height)) ? (s->maxTreeDepth) : (c->height));
# 529 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(3, (size_t)(5273863086679873151UL), (size_t)(5273863086679873152UL), (size_t)(5273863086679873223UL)); rm_stack(false, 0UL); }
# 530 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 531 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 532 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
Node * ss_top(StealStack *s) {new_stack((void *)(&ss_top), 1, 1, (size_t)(5273863086679873304UL), "ss_top|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 533 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: Node *r; register_stack_var("ss_top|r|0", "%struct.node_t*", (void *)(&r), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ;
# 534 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->top <= s->local) {alias_group_changed(2, (size_t)(5273863086679873256UL), (size_t)(5273863086679873257UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874757UL)); ss_error("ss_top: empty local stack"); };
# 536 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 r = &(s->stack[(s->top) - 1]);
# 537 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 1) {alias_group_changed(2, (size_t)(5273863086679873256UL), (size_t)(5273863086679873257UL)); call_lbl_5: calling((void*)&rng_showstate, 5, 5273863086679873293UL, 2, (size_t)(5273863086679873278UL), (size_t)(5273863086679874734UL)); printf("ss_top: Thread %d, posn %d: node %s [%d] nchild = %d\n", 0, s->top - 1, rng_showstate(r->state.state, debug_str), r->height, r->numChildren); };
# 541 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679873256UL), (size_t)(5273863086679873257UL)); rm_stack(true, 5273863086679873278UL); return r;
# 542 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 543 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 544 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 545 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_pop(StealStack *s) {new_stack((void *)(&ss_pop), 1, 1, (size_t)(5273863086679873355UL), "ss_pop|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 546 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: Node *r; register_stack_var("ss_pop|r|0", "%struct.node_t*", (void *)(&r), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ;
# 547 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->top <= s->local) {alias_group_changed(3, (size_t)(5273863086679873305UL), (size_t)(5273863086679873306UL), (size_t)(5273863086679873355UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874757UL)); ss_error("ss_pop: empty local stack"); };
# 549 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->top--;
# 550 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 r = &(s->stack[s->top]);
# 551 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 1) {alias_group_changed(3, (size_t)(5273863086679873305UL), (size_t)(5273863086679873306UL), (size_t)(5273863086679873355UL)); call_lbl_5: calling((void*)&rng_showstate, 5, 5273863086679873345UL, 2, (size_t)(5273863086679873331UL), (size_t)(5273863086679874734UL)); printf("ss_pop: Thread %d, posn %d: node %s [%d] nchild = %d\n", 0, s->top, rng_showstate(r->state.state, debug_str), r->height, r->numChildren); };
# 555 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(3, (size_t)(5273863086679873305UL), (size_t)(5273863086679873306UL), (size_t)(5273863086679873355UL)); rm_stack(false, 0UL); }
# 556 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 557 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 558 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int ss_topPosn(StealStack *s)
# 559 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
{new_stack((void *)(&ss_topPosn), 1, 1, (size_t)(5273863086679873374UL), "ss_topPosn|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 560 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->top <= s->local) {alias_group_changed(1, (size_t)(5273863086679873356UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874761UL)); ss_error("ss_topPosn: empty local stack"); };
# 562 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679873356UL)); rm_stack(false, 0UL); return s->top - 1;
# 563 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 564 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 565 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 566 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int ss_localDepth(StealStack *s) {new_stack((void *)(&ss_localDepth), 1, 0, (size_t)(5273863086679873386UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 567 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679873375UL)); rm_stack(false, 0UL); return (s->top - s->local);
# 568 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 569 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 570 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 571 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_release(StealStack *s, int k) {new_stack((void *)(&ss_release), 2, 2, (size_t)(5273863086679873424UL), (size_t)(0UL), "ss_release|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0, "ss_release|k|0", "i32", (void *)(&k), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 572 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 573 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->top - s->local >= k) {{ s->local += k; s->workAvail += k; s->nRelease++; }; } else {alias_group_changed(2, (size_t)(5273863086679873387UL), (size_t)(5273863086679873388UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874756UL)); ss_error("ss_release:  do not have k vals to release"); } ;
# 580 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 581 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(3, (size_t)(5273863086679873387UL), (size_t)(5273863086679873388UL), (size_t)(5273863086679873424UL)); rm_stack(false, 0UL); }
# 582 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 583 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 584 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 585 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 586 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int ss_acquire(StealStack *s, int k) {new_stack((void *)(&ss_acquire), 2, 0, (size_t)(5273863086679873469UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 587 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int avail; ;
# 588 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 589 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 avail = s->local - s->sharedStart;
# 590 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (avail >= k) {
# 591 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->local -= k;
# 592 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->workAvail -= k;
# 593 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nAcquire++;
# 594 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 595 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 596 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(4, (size_t)(5273863086679873426UL), (size_t)(5273863086679873427UL), (size_t)(5273863086679873428UL), (size_t)(5273863086679873469UL)); rm_stack(false, 0UL); return (avail >= k);
# 597 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 598 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 599 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 600 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 601 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 602 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 603 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int ss_steal(StealStack *s, int victim, int k) {new_stack((void *)(&ss_steal), 3, 3, (size_t)(5273863086679873706UL), (size_t)(0UL), (size_t)(0UL), "ss_steal|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0, "ss_steal|victim|0", "i32", (void *)(&victim), (size_t)4, 0, 0, 0, "ss_steal|k|0", "i32", (void *)(&k), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 604 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int victimLocal; register_stack_var("ss_steal|victimLocal|0", "i32", (void *)(&victimLocal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: int victimShared; register_stack_var("ss_steal|victimShared|0", "i32", (void *)(&victimShared), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: int victimWorkAvail; register_stack_var("ss_steal|victimWorkAvail|0", "i32", (void *)(&victimWorkAvail), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } ;
# 605 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_3: int ok; register_stack_var("ss_steal|ok|0", "i32", (void *)(&ok), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } ;
# 606 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 607 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->sharedStart != s->top) {alias_group_changed(13, (size_t)(5273863086679873471UL), (size_t)(5273863086679873472UL), (size_t)(5273863086679873473UL), (size_t)(5273863086679873474UL), (size_t)(5273863086679873475UL), (size_t)(5273863086679873476UL), (size_t)(5273863086679873477UL), (size_t)(5273863086679873478UL), (size_t)(5273863086679873479UL), (size_t)(5273863086679873480UL), (size_t)(5273863086679873481UL), (size_t)(5273863086679873706UL), (size_t)(5273863086679874079UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874763UL)); ss_error("ss_steal: thief attempts to steal onto non-empty stack"); };
# 609 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 610 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (s->top + k >= s->stackSize) {alias_group_changed(13, (size_t)(5273863086679873471UL), (size_t)(5273863086679873472UL), (size_t)(5273863086679873473UL), (size_t)(5273863086679873474UL), (size_t)(5273863086679873475UL), (size_t)(5273863086679873476UL), (size_t)(5273863086679873477UL), (size_t)(5273863086679873478UL), (size_t)(5273863086679873479UL), (size_t)(5273863086679873480UL), (size_t)(5273863086679873481UL), (size_t)(5273863086679873706UL), (size_t)(5273863086679874079UL)); call_lbl_4: calling((void*)&ss_error, 4, 0UL, 1, (size_t)(5273863086679874764UL)); ss_error("ss_steal: steal will overflow thief's stack"); };
# 612 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 613 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 614 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 32) {printf("Thread %d wants    SS %d\n", 0, victim); };
# 616 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 617 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 618 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 619 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 620 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 621 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 622 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 623 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 624 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 32) {printf("Thread %d acquires SS %d\n", 0, victim); };
# 626 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 627 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 victimLocal = stealStack[victim]->local;
# 628 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 victimShared = stealStack[victim]->sharedStart;
# 629 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 victimWorkAvail = stealStack[victim]->workAvail;
# 630 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 631 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (victimLocal - victimShared != victimWorkAvail) {alias_group_changed(13, (size_t)(5273863086679873471UL), (size_t)(5273863086679873472UL), (size_t)(5273863086679873473UL), (size_t)(5273863086679873474UL), (size_t)(5273863086679873475UL), (size_t)(5273863086679873476UL), (size_t)(5273863086679873477UL), (size_t)(5273863086679873478UL), (size_t)(5273863086679873479UL), (size_t)(5273863086679873480UL), (size_t)(5273863086679873481UL), (size_t)(5273863086679873706UL), (size_t)(5273863086679874079UL)); call_lbl_8: calling((void*)&ss_error, 8, 0UL, 1, (size_t)(5273863086679874767UL)); ss_error("ss_steal: stealStack invariant violated"); };
# 633 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 634 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ok = victimWorkAvail >= k;
# 635 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (ok) {
# 636 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 637 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[victim]->sharedStart = victimShared + k;
# 638 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[victim]->workAvail = victimWorkAvail - k;
# 647 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 647 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 648 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 649 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 650 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 32) {printf("Thread %d releases SS %d\n", 0, victim); };
# 652 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 653 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 654 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (ok) {
# 655 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_4: Node *victimStackBase; register_stack_var("ss_steal|victimStackBase|0", "%struct.node_t*", (void *)(&victimStackBase), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_5; } victimStackBase = (stealStack[victim]->stack_g) ;
# 656 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_5: Node *victimSharedStart; register_stack_var("ss_steal|victimSharedStart|0", "%struct.node_t*", (void *)(&victimSharedStart), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_6; } victimSharedStart = (victimStackBase + victimShared) ;
# 657 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 658 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 659 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 660 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 661 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_10: calling((void*)&memcpy, 10, 0UL, 3, (size_t)(5273863086679873648UL), (size_t)(5273863086679873671UL), (size_t)(0UL)); memcpy(&(s->stack[s->top]), victimSharedStart, k * sizeof(Node));
# 662 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 663 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 664 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nSteal++;
# 665 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 4) {
# 666 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_6: int i; register_stack_var("ss_steal|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } ;
# 667 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (i = 0; i < k; i ++) {
# 668 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_7: Node *r; register_stack_var("ss_steal|r|0", "%struct.node_t*", (void *)(&r), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(13): { goto call_lbl_13; } default: { chimes_error(); } } } r = (&(s->stack[s->top + i])) ;
# 669 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(13, (size_t)(5273863086679873471UL), (size_t)(5273863086679873472UL), (size_t)(5273863086679873473UL), (size_t)(5273863086679873474UL), (size_t)(5273863086679873475UL), (size_t)(5273863086679873476UL), (size_t)(5273863086679873477UL), (size_t)(5273863086679873478UL), (size_t)(5273863086679873479UL), (size_t)(5273863086679873480UL), (size_t)(5273863086679873481UL), (size_t)(5273863086679873706UL), (size_t)(5273863086679874079UL)); call_lbl_13: calling((void*)&rng_showstate, 13, 5273863086679873663UL, 2, (size_t)(5273863086679873648UL), (size_t)(5273863086679874734UL)); printf("ss_steal:  Thread %2d posn %d (steal #%d) receives %s [%d] from thread %d posn %d (%p)\n",
# 670 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 0, s->top + i, s->nSteal,
# 671 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 rng_showstate(r->state.state, debug_str),
# 672 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 r->height, victim, victimShared + i,
# 673 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 (void *) victimSharedStart);
# 674 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 675 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 676 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->top += k;
# 677 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 678 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 679 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 680 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 681 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 682 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 683 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 else {
# 684 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->nFail++;
# 685 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 4) {
# 686 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("Thread %d failed to steal %d nodes from thread %d, ActAv = %d, sh = %d, loc =%d\n",
# 687 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 0, k, victim, victimWorkAvail, victimShared, victimLocal);
# 688 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 689 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 690 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(12, (size_t)(5273863086679873471UL), (size_t)(5273863086679873472UL), (size_t)(5273863086679873473UL), (size_t)(5273863086679873474UL), (size_t)(5273863086679873475UL), (size_t)(5273863086679873476UL), (size_t)(5273863086679873477UL), (size_t)(5273863086679873478UL), (size_t)(5273863086679873479UL), (size_t)(5273863086679873480UL), (size_t)(5273863086679873706UL), (size_t)(5273863086679874079UL)); rm_stack(false, 0UL); return (ok);
# 691 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 692 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 693 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 694 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int findwork(int k) {new_stack((void *)(&findwork), 1, 0, (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 695 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 int i; int v; ;
# 696 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (i = 1; i < 1; i++) {
# 697 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 v = (0 + i) % 1;
# 698 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 699 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 700 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 701 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (stealStack[v]->workAvail >= k) {alias_group_changed(4, (size_t)(5273863086679873709UL), (size_t)(5273863086679873710UL), (size_t)(5273863086679873711UL), (size_t)(5273863086679873712UL)); rm_stack(false, 0UL); return v;; };
# 703 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 704 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(4, (size_t)(5273863086679873709UL), (size_t)(5273863086679873710UL), (size_t)(5273863086679873711UL), (size_t)(5273863086679873712UL)); rm_stack(false, 0UL); return -1;
# 705 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 706 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 707 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 708 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 709 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 710 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 711 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 712 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_initState(StealStack *s) {new_stack((void *)(&ss_initState), 1, 1, (size_t)(5273863086679873795UL), "ss_initState|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 713 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int i; register_stack_var("ss_initState|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ;
# 714 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679873748UL)); call_lbl_2: calling((void*)&uts_wctime, 2, 0UL, 0); s->timeLast = uts_wctime();
# 715 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (i = 0; i < 5; i++) {
# 716 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->time[i] = 0.0;
# 717 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->entries[i] = 0;
# 718 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 719 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->curState = 2;
# 720 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 8) {printf("Thread %d start state %d (t = %f)\n", 0, s->curState, s->timeLast); };
# 723 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(2, (size_t)(5273863086679873749UL), (size_t)(5273863086679873795UL)); rm_stack(false, 0UL); }
# 724 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 725 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void ss_setState(StealStack *s, int state){new_stack((void *)(&ss_setState), 2, 2, (size_t)(5273863086679873867UL), (size_t)(0UL), "ss_setState|s|0", "%struct.stealStack_t*", (void *)(&s), (size_t)8, 1, 0, 0, "ss_setState|state|0", "i32", (void *)(&state), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 726 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: double time; register_stack_var("ss_setState|time|0", "double", (void *)(&time), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(6): { goto call_lbl_6; } default: { chimes_error(); } } } ;
# 727 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (state < 0 || state >= 5) {alias_group_changed(2, (size_t)(5273863086679873796UL), (size_t)(5273863086679873797UL)); call_lbl_2: calling((void*)&ss_error, 2, 0UL, 1, (size_t)(5273863086679874772UL)); ss_error("ss_setState: thread state out of range"); };
# 729 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (state == s->curState) {alias_group_changed(4, (size_t)(5273863086679873796UL), (size_t)(5273863086679873797UL), (size_t)(5273863086679873798UL), (size_t)(5273863086679873867UL)); rm_stack(false, 0UL); return;; };
# 731 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679873796UL), (size_t)(5273863086679873797UL)); call_lbl_6: calling((void*)&uts_wctime, 6, 0UL, 0); time = uts_wctime();
# 732 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->time[s->curState] += time - s->timeLast;
# 751 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 751 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->entries[state]++;
# 752 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->timeLast = time;
# 753 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 s->curState = state;
# 754 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 755 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 8) {printf("Thread %d enter state %d [#%d] (t = %f)\n", 0, state, s->entries[state], time); };
# 758 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(4, (size_t)(5273863086679873796UL), (size_t)(5273863086679873797UL), (size_t)(5273863086679873798UL), (size_t)(5273863086679873867UL)); rm_stack(false, 0UL); }
# 928 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 928 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void initNode(Node * child)
# 929 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
{new_stack((void *)(&initNode), 1, 0, (size_t)(5273863086679873882UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 930 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 child->type = -1;
# 931 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 child->height = -1;
# 932 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 child->numChildren = -1;
# 947 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 947 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(2, (size_t)(5273863086679873869UL), (size_t)(5273863086679873882UL)); rm_stack(false, 0UL); }
# 948 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 949 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 950 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void initRootNode(Node * root, int type)
# 951 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
{new_stack((void *)(&initRootNode), 2, 2, (size_t)(5273863086679873893UL), (size_t)(0UL), "initRootNode|root|0", "%struct.node_t*", (void *)(&root), (size_t)8, 1, 0, 0, "initRootNode|type|0", "i32", (void *)(&type), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 952 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679873883UL), (size_t)(5273863086679873884UL)); call_lbl_2: calling((void*)&uts_initRoot, 2, 0UL, 2, (size_t)(5273863086679873893UL), (size_t)(0UL)); uts_initRoot(root, type);
# 983 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 983 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
rm_stack(false, 0UL); }
# 984 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 985 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 986 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 987 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void releaseNodes(StealStack *ss);
# 988 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 989 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 990 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 991 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 992 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 993 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 994 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 995 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void genChildren(Node * parent, Node * child, StealStack * ss) {new_stack((void *)(&genChildren), 3, 3, (size_t)(5273863086679874002UL), (size_t)(5273863086679874003UL), (size_t)(5273863086679874004UL), "genChildren|parent|0", "%struct.node_t*", (void *)(&parent), (size_t)8, 1, 0, 0, "genChildren|child|0", "%struct.node_t*", (void *)(&child), (size_t)8, 1, 0, 0, "genChildren|ss|0", "%struct.stealStack_t*", (void *)(&ss), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 996 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int parentHeight; register_stack_var("genChildren|parentHeight|0", "i32", (void *)(&parentHeight), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } parentHeight = (parent->height) ;
# 997 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_1: int numChildren; register_stack_var("genChildren|numChildren|0", "i32", (void *)(&numChildren), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: int childType; register_stack_var("genChildren|childType|0", "i32", (void *)(&childType), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } ;
# 998 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 999 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(4, (size_t)(5273863086679873897UL), (size_t)(5273863086679873898UL), (size_t)(5273863086679873899UL), (size_t)(5273863086679873900UL)); call_lbl_2: calling((void*)&uts_numChildren, 2, 0UL, 1, (size_t)(5273863086679874002UL)); numChildren = uts_numChildren(parent);
# 1000 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679873901UL)); call_lbl_4: calling((void*)&uts_childType, 4, 0UL, 1, (size_t)(5273863086679874002UL)); childType = uts_childType(parent);
# 1001 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1002 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1003 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 parent->numChildren = numChildren;
# 1004 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 2) {
# 1005 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(5, (size_t)(5273863086679873902UL), (size_t)(5273863086679873903UL), (size_t)(5273863086679873904UL), (size_t)(5273863086679874002UL), (size_t)(5273863086679874003UL)); call_lbl_7: calling((void*)&ss_topPosn, 7, 0UL, 1, (size_t)(5273863086679874004UL)); call_lbl_8: calling((void*)&rng_showstate, 8, 5273863086679873938UL, 2, (size_t)(5273863086679874002UL), (size_t)(5273863086679874734UL)); printf("Gen:  Thread %d, posn %2d: node %s [%d] has %2d children\n",
# 1006 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 0, ss_topPosn(ss),
# 1007 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 rng_showstate(parent->state.state, debug_str),
# 1008 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 parentHeight, numChildren);
# 1009 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1010 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1011 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1012 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (numChildren > 0) {
# 1013 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_3: int i; register_stack_var("genChildren|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: int j; register_stack_var("genChildren|j|0", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } default: { chimes_error(); } } } ;
# 1014 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 child->type = childType;
# 1015 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 child->height = parentHeight + 1;
# 1016 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1017 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1018 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1019 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1020 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1021 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1022 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (i = 0; i < numChildren; i++) {
# 1023 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (j = 0; j < computeGranularity; j++) {
# 1024 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1025 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1026 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(5, (size_t)(5273863086679873902UL), (size_t)(5273863086679873903UL), (size_t)(5273863086679873904UL), (size_t)(5273863086679874002UL), (size_t)(5273863086679874003UL)); call_lbl_10: calling((void*)&rng_spawn, 10, 0UL, 3, (size_t)(5273863086679874002UL), (size_t)(5273863086679874003UL), (size_t)(0UL)); rng_spawn(parent->state.state, child->state.state, i);
# 1027 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1028 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(5, (size_t)(5273863086679873902UL), (size_t)(5273863086679873903UL), (size_t)(5273863086679873904UL), (size_t)(5273863086679874002UL), (size_t)(5273863086679874003UL)); call_lbl_12: calling((void*)&ss_push, 12, 0UL, 2, (size_t)(5273863086679874004UL), (size_t)(5273863086679874003UL)); ss_push(ss, child);
# 1029 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_13: calling((void*)&releaseNodes, 13, 0UL, 1, (size_t)(5273863086679874004UL)); releaseNodes(ss);
# 1030 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1031 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 } else {
# 1032 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ss->nLeaves++;
# 1033 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1034 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(5, (size_t)(5273863086679873902UL), (size_t)(5273863086679873903UL), (size_t)(5273863086679874002UL), (size_t)(5273863086679874003UL), (size_t)(5273863086679874004UL)); rm_stack(false, 0UL); }
# 1046 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1046 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void cb_init(){new_stack((void *)(&cb_init), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 1047 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1048 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 4) {printf("Thread %d, cb lock at %p\n", 0, (void *)cb_lock); };
# 1050 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1051 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1052 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1053 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_count = 0;
# 1054 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_cancel = 0;
# 1055 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_done = 0;
# 1056 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1057 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(1, (size_t)(5273863086679874728UL)); rm_stack(false, 0UL); }
# 1058 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1059 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1060 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1061 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int cbarrier_wait() {new_stack((void *)(&cbarrier_wait), 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1062 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int l_count; register_stack_var("cbarrier_wait|l_count|0", "i32", (void *)(&l_count), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: int l_done; register_stack_var("cbarrier_wait|l_done|0", "i32", (void *)(&l_done), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: int l_cancel; register_stack_var("cbarrier_wait|l_cancel|0", "i32", (void *)(&l_cancel), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } ;
# 1063 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_3: int pe; register_stack_var("cbarrier_wait|pe|0", "i32", (void *)(&pe), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } pe = (0) ;
# 1064 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1065 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1066 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_count++;
# 1067 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1068 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1069 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1070 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (cb_count == 1) {
# 1071 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_done = 1;
# 1072 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1073 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1074 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1075 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1076 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_count = cb_count;
# 1077 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_done = cb_done;
# 1078 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (stealStack[pe]->nNodes_last == stealStack[pe]->nNodes) {
# 1079 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ++stealStack[pe]->falseWakeups;
# 1080 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1081 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[0]->nNodes_last = stealStack[pe]->nNodes;
# 1082 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1083 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1084 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 16) {printf("Thread %d enter spin-wait, count = %d, done = %d\n", 0, l_count, l_done); };
# 1087 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1088 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1089 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 do {
# 1090 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1091 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1092 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1093 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_count = cb_count;
# 1094 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_cancel = cb_cancel;
# 1095 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_done = cb_done;
# 1096 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1097 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 while (!l_cancel && !l_done);
# 1098 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1099 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 16) {printf("Thread %d exit  spin-wait, count = %d, done = %d, cancel = %d\n", 0, l_count, l_done, l_cancel); };
# 1102 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1103 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1104 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1105 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_count--;
# 1106 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_count = cb_count;
# 1107 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1108 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1109 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1110 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_cancel = 0;
# 1111 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 l_done = cb_done;
# 1112 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ++stealStack[0]->wakeups;
# 1113 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ;
# 1114 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1115 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (debug & 16) {printf("Thread %d exit idle state, count = %d, done = %d\n", 0, l_count, cb_done); };
# 1118 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1119 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(6, (size_t)(5273863086679874055UL), (size_t)(5273863086679874056UL), (size_t)(5273863086679874057UL), (size_t)(5273863086679874058UL), (size_t)(5273863086679874079UL), (size_t)(5273863086679874728UL)); rm_stack(false, 0UL); return cb_done;
# 1120 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}
# 1121 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1122 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1123 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1124 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void cbarrier_cancel() {new_stack((void *)(&cbarrier_cancel), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 1125 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1126 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1127 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1128 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1129 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1130 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1131 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1132 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 cb_cancel = 1;
# 1133 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1134 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(1, (size_t)(5273863086679874728UL)); rm_stack(false, 0UL); }
# 1135 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1136 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void releaseNodes(StealStack *ss){new_stack((void *)(&releaseNodes), 1, 1, (size_t)(5273863086679874043UL), "releaseNodes|ss|0", "%struct.stealStack_t*", (void *)(&ss), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } }
# 1137 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (doSteal) {
# 1138 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_1: calling((void*)&ss_localDepth, 1, 0UL, 1, (size_t)(5273863086679874043UL)); if (ss_localDepth(ss) > 2 * chunkSize) {
# 1139 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1140 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679874010UL)); call_lbl_3: calling((void*)&ss_setState, 3, 0UL, 2, (size_t)(5273863086679874043UL), (size_t)(0UL)); ss_setState(ss, 3);
# 1141 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_4: calling((void*)&ss_release, 4, 0UL, 2, (size_t)(5273863086679874043UL), (size_t)(0UL)); ss_release(ss, chunkSize);
# 1142 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1143 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (ss->nNodes % cbint == 0) {
# 1144 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_5: calling((void*)&ss_setState, 5, 0UL, 2, (size_t)(5273863086679874043UL), (size_t)(0UL)); ss_setState(ss, 4);
# 1145 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_6: calling((void*)&cbarrier_cancel, 6, 0UL, 0); cbarrier_cancel();
# 1146 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1147 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1148 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1149 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1150 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1151 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1152 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1153 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1154 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_7: calling((void*)&ss_setState, 7, 0UL, 2, (size_t)(5273863086679874043UL), (size_t)(0UL)); ss_setState(ss, 0);
# 1155 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1156 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1157 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(1, (size_t)(5273863086679874010UL)); rm_stack(false, 0UL); }
# 1158 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1159 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1160 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1161 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1162 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1163 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1164 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1165 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void parTreeSearch(StealStack *ss) {new_stack((void *)(&parTreeSearch), 1, 1, (size_t)(5273863086679874267UL), "parTreeSearch|ss|0", "%struct.stealStack_t*", (void *)(&ss), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1166 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int done; register_stack_var("parTreeSearch|done|0", "i32", (void *)(&done), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } done = (0) ;
# 1167 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_1: Node *parent; register_stack_var("parTreeSearch|parent|0", "%struct.node_t*", (void *)(&parent), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } ;
# 1168 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_2: Node child; register_stack_var("parTreeSearch|child|0", "%struct.node_t = type { i32, i32, i32, %struct.state_t }", (void *)(&child), (size_t)32, 0, 1, 0); if (____chimes_replaying) { goto lbl_3; } ;
# 1169 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1170 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1171 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_1: calling((void*)&initNode, 1, 0UL, 1, (size_t)(5273863086679874170UL)); initNode(&child);
# 1172 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1173 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1174 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 while (done == 0) {
# 1175 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1176 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_3: int localDepth; register_stack_var("parTreeSearch|localDepth|0", "i32", (void *)(&localDepth), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } call_lbl_2: calling((void*)&ss_localDepth, 2, 0UL, 1, (size_t)(5273863086679874267UL)); localDepth = (ss_localDepth(ss)) ;
# 1177 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1178 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 while (localDepth > 0) {
# 1179 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1180 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(5, (size_t)(5273863086679874167UL), (size_t)(5273863086679874168UL), (size_t)(5273863086679874171UL), (size_t)(5273863086679874172UL), (size_t)(5273863086679874173UL)); call_lbl_4: calling((void*)&ss_setState, 4, 0UL, 2, (size_t)(5273863086679874267UL), (size_t)(0UL)); ss_setState(ss, 0);
# 1181 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1182 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1183 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_5: calling((void*)&ss_top, 5, 5273863086679874203UL, 1, (size_t)(5273863086679874267UL)); parent = ss_top(ss);
# 1184 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (parent->numChildren < 0){
# 1185 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1186 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679874169UL)); call_lbl_7: calling((void*)&genChildren, 7, 0UL, 3, (size_t)(5273863086679874203UL), (size_t)(5273863086679874170UL), (size_t)(5273863086679874267UL)); genChildren(parent,&child,ss);
# 1187 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1188 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1189 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 else {
# 1190 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1191 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1192 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1193 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1194 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1195 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679874169UL)); call_lbl_9: calling((void*)&ss_pop, 9, 0UL, 1, (size_t)(5273863086679874267UL)); ss_pop(ss);
# 1196 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1197 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1198 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1199 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1200 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_10: calling((void*)&releaseNodes, 10, 0UL, 1, (size_t)(5273863086679874267UL)); releaseNodes(ss);
# 1201 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_11: calling((void*)&ss_localDepth, 11, 0UL, 1, (size_t)(5273863086679874267UL)); localDepth = ss_localDepth(ss);
# 1202 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1203 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1204 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1205 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1206 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1207 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_12: calling((void*)&ss_acquire, 12, 0UL, 2, (size_t)(5273863086679874267UL), (size_t)(0UL)); if (ss_acquire(ss, chunkSize)) {continue;; };
# 1209 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1210 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1211 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1212 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (doSteal) {
# 1213 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_4: int goodSteal; register_stack_var("parTreeSearch|goodSteal|0", "i32", (void *)(&goodSteal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } goodSteal = (0) ;
# 1214 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_5: int victimId; register_stack_var("parTreeSearch|victimId|0", "i32", (void *)(&victimId), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(17): { goto call_lbl_17; } case(18): { goto call_lbl_18; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } default: { chimes_error(); } } } ;
# 1215 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1216 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(5, (size_t)(5273863086679874167UL), (size_t)(5273863086679874168UL), (size_t)(5273863086679874171UL), (size_t)(5273863086679874172UL), (size_t)(5273863086679874173UL)); call_lbl_14: calling((void*)&ss_setState, 14, 0UL, 2, (size_t)(5273863086679874267UL), (size_t)(0UL)); ss_setState(ss, 1);
# 1217 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_15: calling((void*)&findwork, 15, 0UL, 1, (size_t)(0UL)); victimId = findwork(chunkSize);
# 1218 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 while (victimId != -1 && !goodSteal) {
# 1219 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1220 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679874172UL), (size_t)(5273863086679874173UL)); call_lbl_17: calling((void*)&ss_steal, 17, 0UL, 3, (size_t)(5273863086679874267UL), (size_t)(0UL), (size_t)(0UL)); goodSteal = ss_steal(ss, victimId, chunkSize);
# 1221 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (!goodSteal) { call_lbl_18: calling((void*)&findwork, 18, 0UL, 1, (size_t)(0UL)); victimId = findwork(chunkSize); };
# 1223 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1224 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (goodSteal) {continue;; };
# 1226 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1227 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1228 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1229 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1230 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1231 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1232 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1233 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(5, (size_t)(5273863086679874167UL), (size_t)(5273863086679874168UL), (size_t)(5273863086679874171UL), (size_t)(5273863086679874172UL), (size_t)(5273863086679874173UL)); call_lbl_20: calling((void*)&ss_setState, 20, 0UL, 2, (size_t)(5273863086679874267UL), (size_t)(0UL)); ss_setState(ss, 2);
# 1234 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_21: calling((void*)&cbarrier_wait, 21, 0UL, 0); done = cbarrier_wait();
# 1235 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1236 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1237 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1238 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(5, (size_t)(5273863086679874167UL), (size_t)(5273863086679874168UL), (size_t)(5273863086679874171UL), (size_t)(5273863086679874172UL), (size_t)(5273863086679874173UL)); rm_stack(false, 0UL); }
# 1283 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1283 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
void showStats(double elapsedSecs) {new_stack((void *)(&showStats), 1, 1, (size_t)(0UL), "showStats|elapsedSecs|0", "double", (void *)(&elapsedSecs), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1284 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: int i; register_stack_var("showStats|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 1285 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_1: int tnodes; register_stack_var("showStats|tnodes|0", "i32", (void *)(&tnodes), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: int tleaves; register_stack_var("showStats|tleaves|0", "i32", (void *)(&tleaves), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: int trel; register_stack_var("showStats|trel|0", "i32", (void *)(&trel), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: int tacq; register_stack_var("showStats|tacq|0", "i32", (void *)(&tacq), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: int tsteal; register_stack_var("showStats|tsteal|0", "i32", (void *)(&tsteal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } lbl_6: int tfail; register_stack_var("showStats|tfail|0", "i32", (void *)(&tfail), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } tnodes = (0) ; tleaves = (0) ; trel = (0) ; tacq = (0) ; tsteal = (0) ; tfail = (0) ;
# 1286 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_7: int mdepth; register_stack_var("showStats|mdepth|0", "i32", (void *)(&mdepth), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } lbl_8: int mheight; register_stack_var("showStats|mheight|0", "i32", (void *)(&mheight), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } mdepth = (0) ; mheight = (0) ;
# 1287 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_9: double twork; register_stack_var("showStats|twork|0", "double", (void *)(&twork), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } lbl_10: double tsearch; register_stack_var("showStats|tsearch|0", "double", (void *)(&tsearch), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } lbl_11: double tidle; register_stack_var("showStats|tidle|0", "double", (void *)(&tidle), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } lbl_12: double tovh; register_stack_var("showStats|tovh|0", "double", (void *)(&tovh), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } lbl_13: double tcbovh; register_stack_var("showStats|tcbovh|0", "double", (void *)(&tcbovh), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } } twork = (0.) ; tsearch = (0.) ; tidle = (0.) ; tovh = (0.) ; tcbovh = (0.) ;
# 1306 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1306 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (i = 0; i < 1; i++) {
# 1307 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tnodes += stealStack[i]->nNodes;
# 1308 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tleaves += stealStack[i]->nLeaves;
# 1309 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 trel += stealStack[i]->nRelease;
# 1310 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tacq += stealStack[i]->nAcquire;
# 1311 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tsteal += stealStack[i]->nSteal;
# 1312 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tfail += stealStack[i]->nFail;
# 1313 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 twork += stealStack[i]->time[0];
# 1314 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tsearch += stealStack[i]->time[1];
# 1315 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tidle += stealStack[i]->time[2];
# 1316 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tovh += stealStack[i]->time[3];
# 1317 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 tcbovh += stealStack[i]->time[4];
# 1318 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 mdepth = (((mdepth) > (stealStack[i]->maxStackDepth)) ? (mdepth) : (stealStack[i]->maxStackDepth));
# 1319 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 mheight = (((mheight) > (stealStack[i]->maxTreeDepth)) ? (mheight) : (stealStack[i]->maxTreeDepth));
# 1320 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1321 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (trel != tacq + tsteal) {
# 1322 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("*** error! total released != total acquired + total stolen\n");
# 1323 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1324 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1325 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(15, (size_t)(5273863086679874268UL), (size_t)(5273863086679874269UL), (size_t)(5273863086679874270UL), (size_t)(5273863086679874271UL), (size_t)(5273863086679874272UL), (size_t)(5273863086679874273UL), (size_t)(5273863086679874274UL), (size_t)(5273863086679874275UL), (size_t)(5273863086679874276UL), (size_t)(5273863086679874277UL), (size_t)(5273863086679874278UL), (size_t)(5273863086679874279UL), (size_t)(5273863086679874280UL), (size_t)(5273863086679874281UL), (size_t)(5273863086679874282UL)); call_lbl_3: calling((void*)&uts_showStats, 3, 0UL, 6, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); uts_showStats(1, chunkSize, elapsedSecs, tnodes, tleaves, mheight);
# 1326 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1327 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (verbose > 1) {
# 1328 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (doSteal) {
# 1329 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("Total chunks released = %d, of which %d reacquired and %d stolen\n",
# 1330 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 trel, tacq, tsteal);
# 1331 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("Failed steal operations = %d, ", tfail);
# 1332 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1333 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1334 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("Max stealStack size = %d\n", mdepth);
# 1335 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("Avg time per thread: Work = %.6f, Search = %.6f, Idle = %.6f\n", (twork / 1),
# 1336 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 (tsearch / 1), (tidle / 1));
# 1337 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("                     Overhead = %6f, CB_Overhead = %6f\n\n", (tovh / 1),
# 1338 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 (tcbovh/1));
# 1339 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1340 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1341 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1342 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (verbose > 2) {
# 1343 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 for (i = 0; i < 1; i++) {
# 1344 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("** Thread %d\n", i);
# 1345 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  # nodes explored    = %d\n", stealStack[i]->nNodes);
# 1346 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  # chunks released   = %d\n", stealStack[i]->nRelease);
# 1347 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  # chunks reacquired = %d\n", stealStack[i]->nAcquire);
# 1348 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  # chunks stolen     = %d\n", stealStack[i]->nSteal);
# 1349 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  # failed steals     = %d\n", stealStack[i]->nFail);
# 1350 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  maximum stack depth = %d\n", stealStack[i]->maxStackDepth);
# 1351 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  work time           = %.6f secs (%d sessions)\n",
# 1352 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[i]->time[0], stealStack[i]->entries[0]);
# 1353 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  overhead time       = %.6f secs (%d sessions)\n",
# 1354 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[i]->time[3], stealStack[i]->entries[3]);
# 1355 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  search time         = %.6f secs (%d sessions)\n",
# 1356 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[i]->time[1], stealStack[i]->entries[1]);
# 1357 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  idle time           = %.6f secs (%d sessions)\n",
# 1358 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[i]->time[2], stealStack[i]->entries[2]);
# 1359 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("  wakeups             = %d, false wakeups = %d (%.2f%%)",
# 1360 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[i]->wakeups, stealStack[i]->falseWakeups,
# 1361 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 (stealStack[i]->wakeups == 0) ? 0.00 : ((((double)stealStack[i]->falseWakeups)/stealStack[i]->wakeups)*100.0));
# 1362 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 printf("\n");
# 1363 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1364 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1404 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1404 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
alias_group_changed(1, (size_t)(5273863086679874269UL)); rm_stack(false, 0UL); }
# 1475 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1475 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
int main(int argc, char *argv[]) {init_chimes(); new_stack((void *)(&main), 2, 2, (size_t)(0UL), (size_t)(5273863086679874725UL), "main|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1476 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_0: Node root; register_stack_var("main|root|0", "%struct.node_t = type { i32, i32, i32, %struct.state_t }", (void *)(&root), (size_t)32, 0, 1, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 1487 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1487 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(3, (size_t)(5273863086679874675UL), (size_t)(5273863086679874676UL), (size_t)(5273863086679874677UL)); call_lbl_3: calling((void*)&uts_parseParams, 3, 0UL, 2, (size_t)(0UL), (size_t)(5273863086679874725UL)); uts_parseParams(argc, argv);
# 1488 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1489 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1490 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1491 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1492 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1493 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1494 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1495 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_4: calling((void*)&cb_init, 4, 0UL, 0); cb_init();
# 1496 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1497 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1498 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
#pragma omp parallel
# 1499 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 {
# 1500 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_1: double t1; register_stack_var("main|t1|0", "double", (void *)(&t1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: double t2; register_stack_var("main|t2|0", "double", (void *)(&t2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: double et; register_stack_var("main|et|0", "double", (void *)(&et), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } ;
# 1501 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 lbl_4: StealStack *ss; register_stack_var("main|ss|0", "%struct.stealStack_t*", (void *)(&ss), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(17): { goto call_lbl_17; } default: { chimes_error(); } } } ;
# 1502 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1503 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1504 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (0 == 0) {
# 1505 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_5: calling((void*)&uts_printParams, 5, 0UL, 0); uts_printParams();
# 1506 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1528 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1528 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 stealStack[0] = ( StealStack *) malloc_wrapper (sizeof(StealStack), 5273863086679874079UL, 0, 1, (int)sizeof(struct stealStack_t), 3, (int)__builtin_offsetof(struct stealStack_t, stackLock), (int)__builtin_offsetof(struct stealStack_t, stack), (int)__builtin_offsetof(struct stealStack_t, stack_g));
# 1529 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 ss = (StealStack *) stealStack[0];
# 1530 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679874682UL), (size_t)(5273863086679874735UL)); call_lbl_8: calling((void*)&ss_init, 8, 0UL, 2, (size_t)(5273863086679874079UL), (size_t)(0UL)); ss_init(ss, 500000);
# 1531 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1532 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1533 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1534 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (0 == 0) {
# 1535 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_9: calling((void*)&initRootNode, 9, 0UL, 2, (size_t)(5273863086679874678UL), (size_t)(0UL)); initRootNode(&root, type);
# 1536 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_10: calling((void*)&ss_push, 10, 0UL, 2, (size_t)(5273863086679874079UL), (size_t)(5273863086679874678UL)); ss_push(ss, &root);
# 1537 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1538 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1539 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1540 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
#pragma omp barrier
# 1541 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1542 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1543 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1544 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_11: calling((void*)&ss_initState, 11, 0UL, 1, (size_t)(5273863086679874079UL)); ss_initState(ss);
# 1545 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_12: calling((void*)&uts_wctime, 12, 0UL, 0); t1 = uts_wctime();
# 1546 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(1, (size_t)(5273863086679874679UL)); call_lbl_14: calling((void*)&parTreeSearch, 14, 0UL, 1, (size_t)(5273863086679874079UL)); parTreeSearch(ss);
# 1547 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 call_lbl_15: calling((void*)&uts_wctime, 15, 0UL, 0); t2 = uts_wctime();
# 1548 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 et = t2 - t1;
# 1549 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1550 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1551 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1552 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1553 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1554 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1555 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
#pragma omp barrier
# 1556 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1557 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1558 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1559 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 if (0 == 0) {
# 1560 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 alias_group_changed(2, (size_t)(5273863086679874680UL), (size_t)(5273863086679874681UL)); call_lbl_17: calling((void*)&showStats, 17, 0UL, 1, (size_t)(0UL)); showStats(et);
# 1561 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1562 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 }
# 1563 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1564 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
# 1565 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
 rm_stack(false, 0UL); return 0;
# 1566 "/Users/jmg3/num-debug/src/examples/cpp/uts/uts_shm.c"
}


static int module_init() {
    init_module(5273863086679872945UL, 41, 3, 5273863086679872945UL + 1732UL, 5273863086679872945UL + 1780UL, 5273863086679872945UL + 1224UL, 5273863086679872945UL + 1258UL, 5273863086679872945UL + 1222UL, 5273863086679872945UL + 1322UL, 5273863086679872945UL + 312UL, 5273863086679872945UL + 333UL, 5273863086679872945UL + 311UL, 5273863086679872945UL + 359UL, 5273863086679872945UL + 761UL, 5273863086679872945UL + 703UL, 5273863086679872945UL + 112UL, 5273863086679872945UL + 203UL, 5273863086679872945UL + 278UL, 5273863086679872945UL + 245UL, 5273863086679872945UL + 86UL, 5273863086679872945UL + 102UL, 5273863086679872945UL + 26UL, 5273863086679872945UL + 50UL, 5273863086679872945UL + 851UL, 5273863086679872945UL + 922UL, 5273863086679872945UL + 953UL, 5273863086679872945UL + 1058UL, 5273863086679872945UL + 952UL, 5273863086679872945UL + 1057UL, 5273863086679872945UL + 954UL, 5273863086679872945UL + 1059UL, 5273863086679872945UL + 1737UL, 5273863086679872945UL + 1134UL, 5273863086679872945UL + 1UL, 5273863086679872945UL + 1796UL, 5273863086679872945UL + 526UL, 5273863086679872945UL + 761UL, 5273863086679872945UL + 938UL, 5273863086679872945UL + 948UL, 5273863086679872945UL + 359UL, 5273863086679872945UL + 333UL, 5273863086679872945UL + 360UL, 5273863086679872945UL + 410UL, 5273863086679872945UL + 361UL, 5273863086679872945UL + 386UL, 5273863086679872945UL + 203UL, 5273863086679872945UL + 134UL, 5273863086679872945UL + 207UL, 5273863086679872945UL + 284UL, 5273863086679872945UL + 206UL, 5273863086679872945UL + 278UL, 5273863086679872945UL + 442UL, 5273863086679872945UL + 479UL, 5273863086679872945UL + 1790UL, 5273863086679872945UL + 1134UL, 5273863086679872945UL + 1134UL, 5273863086679872945UL + 726UL, 5273863086679872945UL + 533UL, 5273863086679872945UL + 726UL, 5273863086679872945UL + 103UL, 5273863086679872945UL + 111UL, 5273863086679872945UL + 1794UL, 5273863086679872945UL + 1103UL, 5273863086679872945UL + 481UL, 5273863086679872945UL + 524UL, 5273863086679872945UL + 55UL, 5273863086679872945UL + 73UL, 5273863086679872945UL + 54UL, 5273863086679872945UL + 72UL, 5273863086679872945UL + 1065UL, 5273863086679872945UL + 1098UL, 5273863086679872945UL + 536UL, 5273863086679872945UL + 703UL, 5273863086679872945UL + 534UL, 5273863086679872945UL + 726UL, 5273863086679872945UL + 410UL, 5273863086679872945UL + 386UL, 5273863086679872945UL + 411UL, 5273863086679872945UL + 429UL, 5273863086679872945UL + 803UL, 5273863086679872945UL + 850UL, 5273863086679872945UL + 924UL, 5273863086679872945UL + 937UL, 5273863086679872945UL + 430UL, 5273863086679872945UL + 441UL, "node_t", 4, (int)__builtin_offsetof(struct node_t, type), (int)__builtin_offsetof(struct node_t, height), (int)__builtin_offsetof(struct node_t, numChildren), (int)__builtin_offsetof(struct node_t, state), "state_t", 1, (int)__builtin_offsetof(struct state_t, state), "stealStack_t", 23, (int)__builtin_offsetof(struct stealStack_t, stackSize), (int)__builtin_offsetof(struct stealStack_t, workAvail), (int)__builtin_offsetof(struct stealStack_t, sharedStart), (int)__builtin_offsetof(struct stealStack_t, local), (int)__builtin_offsetof(struct stealStack_t, top), (int)__builtin_offsetof(struct stealStack_t, maxStackDepth), (int)__builtin_offsetof(struct stealStack_t, nNodes), (int)__builtin_offsetof(struct stealStack_t, maxTreeDepth), (int)__builtin_offsetof(struct stealStack_t, nLeaves), (int)__builtin_offsetof(struct stealStack_t, nAcquire), (int)__builtin_offsetof(struct stealStack_t, nRelease), (int)__builtin_offsetof(struct stealStack_t, nSteal), (int)__builtin_offsetof(struct stealStack_t, nFail), (int)__builtin_offsetof(struct stealStack_t, wakeups), (int)__builtin_offsetof(struct stealStack_t, falseWakeups), (int)__builtin_offsetof(struct stealStack_t, nNodes_last), (int)__builtin_offsetof(struct stealStack_t, time), (int)__builtin_offsetof(struct stealStack_t, timeLast), (int)__builtin_offsetof(struct stealStack_t, entries), (int)__builtin_offsetof(struct stealStack_t, curState), (int)__builtin_offsetof(struct stealStack_t, stackLock), (int)__builtin_offsetof(struct stealStack_t, stack), (int)__builtin_offsetof(struct stealStack_t, stack_g));
    register_global_var("global|doSteal", "i32*", (void *)(&doSteal), 8, 1, 0, 0);
    register_global_var("global|chunkSize", "i32*", (void *)(&chunkSize), 8, 1, 0, 0);
    register_global_var("global|cbint", "i32*", (void *)(&cbint), 8, 1, 0, 0);
    register_global_var("global|pollint", "i32*", (void *)(&pollint), 8, 1, 0, 0);
    register_global_var("global|stats", "i32*", (void *)(&stats), 8, 1, 0, 0);
    register_global_var("global|unbType", "i32*", (void *)(&unbType), 8, 1, 0, 0);
    register_global_var("global|debug_str", "[1000 x i8]*", (void *)(&debug_str), 8, 1, 0, 0);
    register_global_var("global|stealStack", "[1 x %struct.stealStack_t*]*", (void *)(&stealStack), 8, 1, 0, 0);
    register_global_var("global|cb_cancel", "i32*", (void *)(&cb_cancel), 8, 1, 0, 0);
    register_global_var("global|cb_count", "i32*", (void *)(&cb_count), 8, 1, 0, 0);
    register_global_var("global|cb_done", "i32*", (void *)(&cb_done), 8, 1, 0, 0);
    register_global_var("global|cb_lock", "i8**", (void *)(&cb_lock), 8, 1, 0, 0);
    register_global_var("global|startTime", "[1 x double]*", (void *)(&startTime), 8, 1, 0, 0);
    return 0;
}

static int __libchimes_module_init = module_init();
