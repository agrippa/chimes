# 1 "cmdLineParser.c.pre.transformed.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 175 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "cmdLineParser.c.pre.transformed.cpp" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
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
        unsigned parent, bool is_parallel_for, unsigned nlocals, ...);
extern void leaving_omp_parallel();

extern void chimes_error();
# 50 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }


extern int ____chimes_replaying;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.h"
int addArg(const char *longOption, const char shortOption,
           int has_arg, const char type, void *dataPtr, int dataSize,
           const char *help);


void processArgs(int argc, char **argv);


void printArgs(void);

void freeArgs(void);
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"

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
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
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
# 14 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
# 1 "/usr/include/getopt.h" 1 3 4
# 44 "/usr/include/getopt.h" 3 4
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 179 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 180 "/usr/include/sys/unistd.h" 2 3 4



extern "C" {

int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));

}








# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 195 "/usr/include/sys/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 199 "/usr/include/sys/unistd.h" 2 3 4


extern "C" {

int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));

}
# 73 "/usr/include/unistd.h" 2 3 4







# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 81 "/usr/include/unistd.h" 2 3 4


# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 85 "/usr/include/unistd.h" 2 3 4
# 423 "/usr/include/unistd.h" 3 4
extern "C" {
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close") ;

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause") ;

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read") ;

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep") ;

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r") ;




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write") ;
}
# 500 "/usr/include/unistd.h" 3 4
extern "C" {
size_t confstr(int, char *, size_t) __asm("_" "confstr") ;

int getopt(int, char * const [], const char *) __asm("_" "getopt") ;

extern char *optarg;
extern int optind, opterr, optopt;
}
# 525 "/usr/include/unistd.h" 3 4
 extern "C" {





__attribute__((deprecated))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt") ;



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown") ;

int lockf(int, int, off_t) __asm("_" "lockf") ;

int nice(int) __asm("_" "nice") ;

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread") ;

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite") ;






__attribute__((deprecated))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp") ;




int setregid(gid_t, gid_t) __asm("_" "setregid") ;

int setreuid(uid_t, uid_t) __asm("_" "setreuid") ;

void swab(const void * , void * , ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep") ;
pid_t vfork(void);


int fsync(int) __asm("_" "fsync") ;

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
}
# 618 "/usr/include/unistd.h" 3 4
extern "C" {
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * , char * , size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
}
# 634 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 75 "/usr/include/sys/select.h" 3 4
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
# 76 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/select.h" 2 3 4







# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/usr/include/sys/select.h" 2 3 4
# 100 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/usr/include/sys/select.h" 2 3 4



extern "C" {


int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )




  __asm("_" "pselect" "$1050")




  ;




# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )




  __asm("_" "select" "$1050")




  ;
# 130 "/usr/include/sys/select.h" 2 3 4

}
# 634 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 638 "/usr/include/unistd.h" 2 3 4

extern "C" {
void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);






# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
# 654 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey") ;



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode");
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist") ;
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist") ;
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 731 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;

}
# 45 "/usr/include/getopt.h" 2 3 4
# 54 "/usr/include/getopt.h" 3 4
struct option {

 const char *name;




 int has_arg;

 int *flag;

 int val;
};

extern "C" {
int getopt_long(int, char * const *, const char *,
 const struct option *, int *);
int getopt_long_only(int, char * const *, const char *,
 const struct option *, int *);


int getopt(int, char * const [], const char *) __asm("_" "getopt") ;

extern char *optarg;
extern int optind, opterr, optopt;



extern int optreset;

}
# 15 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
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
# 16 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
# 16 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mytype.h" 1
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 18 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c" 2
# 18 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 19 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 20 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 21 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
typedef struct MyOptionSt
# 22 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{
# 23 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 char* help;
# 24 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 char* longArg;
# 25 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 unsigned char shortArg[2];
# 26 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 int argFlag;
# 27 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 char type;
# 28 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 int sz;
# 29 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 void* ptr;
# 30 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 void* next;
# 31 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
} MyOption;
# 32 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 33 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static int longest = 1;
# 34 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static MyOption* myargs=__null;
# 35 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 36 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static char* dupString(const char* s)
# 37 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&dupString), 1, 1, (size_t)(8793756385240104839UL), "dupString|s|0", "i8*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 38 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_0: char *d; register_stack_var("dupString|d|0", "i8*", (void *)(&d), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ;
# 39 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (!s) {s = ""; };
# 40 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(1, (size_t)(8793756385240104819UL)); call_lbl_3: calling((void*)&strlen, 3, 0UL, 1, (size_t)(8793756385240104839UL)); d = (char*)calloc_wrapper((strlen(s)+1),sizeof(char), 8793756385240104832UL, 0, 0);
# 41 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(1, (size_t)(8793756385240104820UL)); call_lbl_5: calling((void*)&strcpy, 5, 8793756385240104836UL, 2, (size_t)(8793756385240104832UL), (size_t)(8793756385240104839UL)); strcpy(d, s);
# 42 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 rm_stack(true, 8793756385240104832UL); return d;
# 43 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 44 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 45 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static MyOption* myOptionAlloc(
# 46 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 const char* longOption, const char shortOption,
# 47 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 int has_arg, const char type, void* dataPtr, int dataSize, const char* help)
# 48 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&myOptionAlloc), 7, 7, (size_t)(8793756385240104380UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(8793756385240104324UL), (size_t)(0UL), (size_t)(8793756385240104395UL), "myOptionAlloc|longOption|0", "i8*", (void *)(&longOption), (size_t)8, 1, 0, 0, "myOptionAlloc|shortOption|0", "i8", (void *)(&shortOption), (size_t)1, 0, 0, 0, "myOptionAlloc|has_arg|0", "i32", (void *)(&has_arg), (size_t)4, 0, 0, 0, "myOptionAlloc|type|0", "i8", (void *)(&type), (size_t)1, 0, 0, 0, "myOptionAlloc|dataPtr|0", "i8*", (void *)(&dataPtr), (size_t)8, 1, 0, 0, "myOptionAlloc|dataSize|0", "i32", (void *)(&dataSize), (size_t)4, 0, 0, 0, "myOptionAlloc|help|0", "i8*", (void *)(&help), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 49 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 static int iBase; iBase = (129) ;
# 50 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_0: MyOption *o; register_stack_var("myOptionAlloc|o|0", "%struct.MyOptionSt*", (void *)(&o), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } default: { chimes_error(); } } } o = ((MyOption *)calloc_wrapper(1, sizeof(MyOption), 8793756385240104320UL, 0, 1, (int)sizeof(struct MyOptionSt), 4, (int)__builtin_offsetof(struct MyOptionSt, help), (int)__builtin_offsetof(struct MyOptionSt, longArg), (int)__builtin_offsetof(struct MyOptionSt, ptr), (int)__builtin_offsetof(struct MyOptionSt, next))) ;
# 51 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(8, (size_t)(8793756385240104297UL), (size_t)(8793756385240104298UL), (size_t)(8793756385240104299UL), (size_t)(8793756385240104300UL), (size_t)(8793756385240104301UL), (size_t)(8793756385240104302UL), (size_t)(8793756385240104303UL), (size_t)(8793756385240104304UL)); call_lbl_3: calling((void*)&dupString, 3, 8793756385240104324UL, 1, (size_t)(8793756385240104395UL)); o->help = dupString(help);
# 52 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(1, (size_t)(8793756385240104320UL)); call_lbl_5: calling((void*)&dupString, 5, 8793756385240104324UL, 1, (size_t)(8793756385240104380UL)); o->longArg = dupString(longOption);
# 53 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (shortOption) {o->shortArg[0] = (unsigned char)shortOption; } else {{ o->shortArg[0] = iBase; iBase++; }; }
# 59 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o->argFlag = has_arg;
# 60 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o->type = type;
# 61 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o->ptr = dataPtr;
# 62 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o->sz = dataSize;
# 63 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (longOption) {alias_group_changed(2, (size_t)(8793756385240104320UL), (size_t)(8793756385240104847UL)); call_lbl_7: calling((void*)&strlen, 7, 0UL, 1, (size_t)(8793756385240104380UL)); call_lbl_8: calling((void*)&strlen, 8, 0UL, 1, (size_t)(8793756385240104380UL)); longest = (longest > strlen(longOption) ? longest : strlen(longOption)); };
# 64 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104320UL), (size_t)(8793756385240104847UL)); rm_stack(true, 8793756385240104320UL); return o;
# 65 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 66 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 67 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static MyOption* myOptionFree(MyOption* o)
# 68 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&myOptionFree), 1, 1, (size_t)(8793756385240104478UL), "myOptionFree|o|0", "%struct.MyOptionSt*", (void *)(&o), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 69 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_0: MyOption *r; register_stack_var("myOptionFree|r|0", "%struct.MyOptionSt*", (void *)(&r), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ;
# 70 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (!o) {alias_group_changed(3, (size_t)(8793756385240104434UL), (size_t)(8793756385240104435UL), (size_t)(8793756385240104436UL)); rm_stack(true, 8793756385240104447UL); return __null;; };
# 71 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 r = ((MyOption*) o->next);
# 72 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (o->longArg) {free_wrapper(o->longArg, 8793756385240104447UL); };
# 73 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (o->help) {free_wrapper(o->help, 8793756385240104447UL); };
# 74 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 free_wrapper(o, 8793756385240104478UL);
# 75 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(3, (size_t)(8793756385240104434UL), (size_t)(8793756385240104435UL), (size_t)(8793756385240104436UL)); rm_stack(true, 8793756385240104447UL); return r;
# 76 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 77 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 78 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static MyOption* lastOption(MyOption* o)
# 79 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&lastOption), 1, 0, (size_t)(8793756385240104424UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 80 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (!o) {alias_group_changed(2, (size_t)(8793756385240104396UL), (size_t)(8793756385240104397UL)); rm_stack(true, 8793756385240104424UL); return o;; };
# 81 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 while(((MyOption*) o->next)) o = ((MyOption*) o->next);
# 82 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104396UL), (size_t)(8793756385240104397UL)); rm_stack(true, 8793756385240104424UL); return o;
# 83 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 84 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 85 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
static MyOption* findOption(MyOption* o, unsigned char shortArg)
# 86 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&findOption), 2, 0, (size_t)(8793756385240104811UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 87 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 while(o)
# 88 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 89 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (o->shortArg[0] == shortArg) {alias_group_changed(3, (size_t)(8793756385240104777UL), (size_t)(8793756385240104778UL), (size_t)(8793756385240104779UL)); rm_stack(true, 8793756385240104811UL); return o;; };
# 90 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o = ((MyOption*) o->next);
# 91 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 92 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(3, (size_t)(8793756385240104777UL), (size_t)(8793756385240104778UL), (size_t)(8793756385240104779UL)); rm_stack(true, 8793756385240104811UL); return o;
# 93 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 94 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 95 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 96 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
int addArg(const char* longOption, const char shortOption,
# 97 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 int has_arg, const char type, void* dataPtr, int dataSize,
# 98 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 const char* help)
# 99 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&addArg), 7, 7, (size_t)(8793756385240104288UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(8793756385240104292UL), (size_t)(0UL), (size_t)(8793756385240104294UL), "addArg|longOption|0", "i8*", (void *)(&longOption), (size_t)8, 1, 0, 0, "addArg|shortOption|0", "i8", (void *)(&shortOption), (size_t)1, 0, 0, 0, "addArg|has_arg|0", "i32", (void *)(&has_arg), (size_t)4, 0, 0, 0, "addArg|type|0", "i8", (void *)(&type), (size_t)1, 0, 0, 0, "addArg|dataPtr|0", "i8*", (void *)(&dataPtr), (size_t)8, 1, 0, 0, "addArg|dataSize|0", "i32", (void *)(&dataSize), (size_t)4, 0, 0, 0, "addArg|help|0", "i8*", (void *)(&help), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 100 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_0: MyOption *o; register_stack_var("addArg|o|0", "%struct.MyOptionSt*", (void *)(&o), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 101 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_1: MyOption *p; register_stack_var("addArg|p|0", "%struct.MyOptionSt*", (void *)(&p), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ;
# 102 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(7, (size_t)(8793756385240104230UL), (size_t)(8793756385240104231UL), (size_t)(8793756385240104232UL), (size_t)(8793756385240104233UL), (size_t)(8793756385240104234UL), (size_t)(8793756385240104235UL), (size_t)(8793756385240104236UL)); call_lbl_2: calling((void*)&myOptionAlloc, 2, 8793756385240104848UL, 7, (size_t)(8793756385240104288UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(8793756385240104292UL), (size_t)(0UL), (size_t)(8793756385240104294UL)); o = myOptionAlloc(longOption,shortOption,has_arg,type,dataPtr,dataSize, help);
# 103 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (!o) {alias_group_changed(5, (size_t)(8793756385240104229UL), (size_t)(8793756385240104237UL), (size_t)(8793756385240104238UL), (size_t)(8793756385240104276UL), (size_t)(8793756385240104843UL)); rm_stack(false, 0UL); return 1;; };
# 104 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (!myargs) {myargs = o; } else {{ call_lbl_5: calling((void*)&lastOption, 5, 8793756385240104276UL, 1, (size_t)(8793756385240104848UL)); p = lastOption(myargs); p->next = (void *)o; }; }
# 110 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(5, (size_t)(8793756385240104229UL), (size_t)(8793756385240104237UL), (size_t)(8793756385240104238UL), (size_t)(8793756385240104276UL), (size_t)(8793756385240104843UL)); rm_stack(false, 0UL); return 0;
# 111 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 112 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 113 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 114 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
void freeArgs()
# 115 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&freeArgs), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 116 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 while(myargs)
# 117 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 118 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(1, (size_t)(8793756385240104843UL)); call_lbl_2: calling((void*)&myOptionFree, 2, 8793756385240104848UL, 1, (size_t)(8793756385240104848UL)); myargs = myOptionFree(myargs);
# 119 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 120 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(1, (size_t)(8793756385240104843UL)); rm_stack(false, 0UL); return;
# 121 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 122 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 123 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
void printArgs()
# 124 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&printArgs), 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 125 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_0: MyOption *o; register_stack_var("printArgs|o|0", "%struct.MyOptionSt*", (void *)(&o), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } o = (myargs) ;
# 126 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_1: char s[4096]; register_stack_var("printArgs|s|0", "[4096 x i8]", (void *)(s), (size_t)4096, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } ;
# 127 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_2: unsigned char *shortArg; register_stack_var("printArgs|shortArg|0", "i8*", (void *)(&shortArg), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ;
# 128 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 fprintf(__stdoutp,"\n"
# 129 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 "  Arguments are: \n");
# 130 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(1, (size_t)(8793756385240104479UL)); sprintf(s,"   --%%-%ds",longest);
# 131 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 while(o)
# 132 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 133 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (o->shortArg[0] < 255) {shortArg = o->shortArg; } else {shortArg = (unsigned char *)"---"; } ;
# 135 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 fprintf(__stdoutp,s,o->longArg);
# 136 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 fprintf(__stdoutp," -%c  arg=%1d type=%c  %s\n",shortArg[0],o->argFlag,o->type,o->help);
# 137 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o = ((MyOption*) o->next);
# 138 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 139 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 140 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 fprintf(__stdoutp,"\n\n");
# 141 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104479UL), (size_t)(8793756385240104481UL)); rm_stack(false, 0UL); return;
# 142 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}
# 143 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 144 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
void processArgs(int argc, char** argv)
# 145 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
{new_stack((void *)(&processArgs), 2, 2, (size_t)(0UL), (size_t)(8793756385240104767UL), "processArgs|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "processArgs|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 146 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_0: MyOption *o; register_stack_var("processArgs|o|0", "%struct.MyOptionSt*", (void *)(&o), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 147 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_1: int n; register_stack_var("processArgs|n|0", "i32", (void *)(&n), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } n = (0) ;
# 148 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_2: int i; register_stack_var("processArgs|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } ;
# 149 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_3: struct option *opts; register_stack_var("processArgs|opts|0", "%struct.option*", (void *)(&opts), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_4; } ;
# 150 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_4: char *sArgs; register_stack_var("processArgs|sArgs|0", "i8*", (void *)(&sArgs), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_5; } ;
# 151 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_5: int c; register_stack_var("processArgs|c|0", "i32", (void *)(&c), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } ;
# 152 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 153 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (!myargs) {alias_group_changed(5, (size_t)(8793756385240104545UL), (size_t)(8793756385240104546UL), (size_t)(8793756385240104547UL), (size_t)(8793756385240104548UL), (size_t)(8793756385240104552UL)); rm_stack(false, 0UL); return;; };
# 154 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o = myargs;
# 155 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 while(o)
# 156 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {n++,o=((MyOption*) o->next);}
# 157 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 158 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o = myargs;
# 159 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 sArgs= (char*)calloc_wrapper(2*(n+2),sizeof(char), 8793756385240104639UL, 0, 0);
# 160 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 opts = (struct option*)calloc_wrapper(n,sizeof(struct option), 8793756385240104609UL, 0, 1, (int)sizeof(struct option), 2, (int)__builtin_offsetof(struct option, name), (int)__builtin_offsetof(struct option, flag));
# 161 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 for (i=0; i<n; i++)
# 162 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 163 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 opts[i].name = o->longArg;
# 164 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 opts[i].has_arg = o->argFlag;
# 165 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 opts[i].flag = 0;
# 166 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 opts[i].val = o->shortArg[0];
# 167 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 168 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(12, (size_t)(8793756385240104545UL), (size_t)(8793756385240104546UL), (size_t)(8793756385240104547UL), (size_t)(8793756385240104548UL), (size_t)(8793756385240104549UL), (size_t)(8793756385240104550UL), (size_t)(8793756385240104551UL), (size_t)(8793756385240104552UL), (size_t)(8793756385240104553UL), (size_t)(8793756385240104554UL), (size_t)(8793756385240104609UL), (size_t)(8793756385240104848UL)); call_lbl_6: calling((void*)&strcat, 6, 8793756385240104643UL, 2, (size_t)(8793756385240104639UL), (size_t)(8793756385240104848UL)); strcat(sArgs,(char*) o->shortArg);
# 169 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (o->argFlag) { call_lbl_7: calling((void*)&strcat, 7, 8793756385240104650UL, 2, (size_t)(8793756385240104639UL), (size_t)(8793756385240104851UL)); strcat(sArgs, ":"); };
# 170 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 o = ((MyOption*) o->next);
# 171 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 172 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 173 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 while(1)
# 174 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 175 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 176 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_6: int option_index; register_stack_var("processArgs|option_index|0", "i32", (void *)(&option_index), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } option_index = (0) ;
# 177 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 178 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(12, (size_t)(8793756385240104545UL), (size_t)(8793756385240104546UL), (size_t)(8793756385240104547UL), (size_t)(8793756385240104548UL), (size_t)(8793756385240104549UL), (size_t)(8793756385240104550UL), (size_t)(8793756385240104551UL), (size_t)(8793756385240104552UL), (size_t)(8793756385240104553UL), (size_t)(8793756385240104554UL), (size_t)(8793756385240104609UL), (size_t)(8793756385240104848UL)); call_lbl_9: calling((void*)&getopt_long, 9, 0UL, 5, (size_t)(0UL), (size_t)(8793756385240104767UL), (size_t)(8793756385240104639UL), (size_t)(8793756385240104609UL), (size_t)(8793756385240104553UL)); c = getopt_long (argc, argv, sArgs, opts, &option_index);
# 179 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if (c == -1) {break;; };
# 180 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 call_lbl_10: calling((void*)&findOption, 10, 8793756385240104848UL, 2, (size_t)(8793756385240104848UL), (size_t)(0UL)); o = findOption(myargs,c);
# 181 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if ( ! o )
# 182 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 183 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 fprintf(__stdoutp,"\n\n"
# 184 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 "    invalid switch : -%c in getopt()\n"
# 185 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 "\n\n",
# 186 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 c);
# 187 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 break;
# 188 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 189 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 if(! o->argFlag)
# 190 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 191 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 lbl_7: int *i; register_stack_var("processArgs|i|1", "i32*", (void *)(&i), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(13): { goto call_lbl_13; } case(15): { goto call_lbl_15; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(21): { goto call_lbl_21; } default: { chimes_error(); } } } i = ((int *)o->ptr) ;
# 192 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 *i = 1;
# 193 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 194 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 else
# 195 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 196 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 switch(o->type)
# 197 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 {
# 198 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 case 'i':
# 199 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104547UL), (size_t)(8793756385240104552UL)); call_lbl_13: calling((void*)&sscanf, 13, 0UL, 3, (size_t)(8793756385240104706UL), (size_t)(8793756385240104850UL), (size_t)(8793756385240104848UL)); sscanf(optarg,"%d",(int*)o->ptr);
# 200 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 break;
# 201 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 case 'f':
# 202 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104547UL), (size_t)(8793756385240104552UL)); call_lbl_15: calling((void*)&sscanf, 15, 0UL, 3, (size_t)(8793756385240104706UL), (size_t)(8793756385240104850UL), (size_t)(8793756385240104848UL)); sscanf(optarg,"%f",(float*)o->ptr);
# 203 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 break;
# 204 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 case 'd':
# 205 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104547UL), (size_t)(8793756385240104552UL)); call_lbl_17: calling((void*)&sscanf, 17, 0UL, 3, (size_t)(8793756385240104706UL), (size_t)(8793756385240104848UL), (size_t)(8793756385240104848UL)); sscanf(optarg,"%lf",(double*)o->ptr);
# 206 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 break;
# 207 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 case 's':
# 208 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104547UL), (size_t)(8793756385240104552UL)); call_lbl_19: calling((void*)&strncpy, 19, 8793756385240104735UL, 3, (size_t)(8793756385240104848UL), (size_t)(8793756385240104706UL), (size_t)(0UL)); strncpy((char*)o->ptr,(char*)optarg,o->sz);
# 209 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 ((char*)o->ptr)[o->sz-1] = '\0';
# 210 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 break;
# 211 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 case 'c':
# 212 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(2, (size_t)(8793756385240104547UL), (size_t)(8793756385240104552UL)); call_lbl_21: calling((void*)&sscanf, 21, 0UL, 3, (size_t)(8793756385240104706UL), (size_t)(8793756385240104850UL), (size_t)(8793756385240104848UL)); sscanf(optarg,"%c",(char*)o->ptr);
# 213 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 break;
# 214 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 default:
# 215 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 fprintf(__stdoutp,"\n\n"
# 216 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 "    invalid type : %c in getopt()\n"
# 217 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 "    valid values are 'e', 'z'. 'i','d','f','s', and 'c'\n"
# 218 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 "\n\n",
# 219 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 c);
# 220 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 221 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 222 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 }
# 223 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 224 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 free_wrapper(opts, 8793756385240104609UL);
# 225 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 free_wrapper(sArgs, 8793756385240104639UL);
# 226 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
# 227 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
 alias_group_changed(5, (size_t)(8793756385240104545UL), (size_t)(8793756385240104546UL), (size_t)(8793756385240104547UL), (size_t)(8793756385240104548UL), (size_t)(8793756385240104552UL)); rm_stack(false, 0UL); return;
# 228 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.c"
}


static int module_init() {
    init_module(8793756385240104228UL, 35, 2, 8793756385240104228UL + 591UL, 8793756385240104228UL + 611UL, 8793756385240104228UL + 319UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 318UL, 8793756385240104228UL + 539UL, 8793756385240104228UL + 625UL, 8793756385240104228UL + 478UL, 8793756385240104228UL + 196UL, 8793756385240104228UL + 196UL, 8793756385240104228UL + 550UL, 8793756385240104228UL + 583UL, 8793756385240104228UL + 592UL, 8793756385240104228UL + 604UL, 8793756385240104228UL + 69UL, 8793756385240104228UL + 152UL, 8793756385240104228UL + 253UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 250UL, 8793756385240104228UL + 219UL, 8793756385240104228UL + 251UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 48UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 322UL, 8793756385240104228UL + 381UL, 8793756385240104228UL + 323UL, 8793756385240104228UL + 411UL, 8793756385240104228UL + 2UL, 8793756385240104228UL + 60UL, 8793756385240104228UL + 326UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 6UL, 8793756385240104228UL + 64UL, 8793756385240104228UL + 9UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 8UL, 8793756385240104228UL + 66UL, 8793756385240104228UL + 549UL, 8793756385240104228UL + 583UL, 8793756385240104228UL + 583UL, 8793756385240104228UL + 583UL, 8793756385240104228UL + 207UL, 8793756385240104228UL + 250UL, 8793756385240104228UL + 206UL, 8793756385240104228UL + 219UL, 8793756385240104228UL + 208UL, 8793756385240104228UL + 219UL, 8793756385240104228UL + 616UL, 8793756385240104228UL + 455UL, 8793756385240104228UL + 615UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 76UL, 8793756385240104228UL + 92UL, 8793756385240104228UL + 75UL, 8793756385240104228UL + 167UL, 8793756385240104228UL + 168UL, 8793756385240104228UL + 196UL, 8793756385240104228UL + 169UL, 8793756385240104228UL + 196UL, 8793756385240104228UL + 92UL, 8793756385240104228UL + 96UL, 8793756385240104228UL + 10UL, 8793756385240104228UL + 48UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 381UL, 8793756385240104228UL + 620UL, 8793756385240104228UL + 73UL, 8793756385240104228UL + 96UL, "MyOptionSt", 8, (int)__builtin_offsetof(struct MyOptionSt, help), (int)__builtin_offsetof(struct MyOptionSt, longArg), (int)__builtin_offsetof(struct MyOptionSt, shortArg), (int)__builtin_offsetof(struct MyOptionSt, argFlag), (int)__builtin_offsetof(struct MyOptionSt, type), (int)__builtin_offsetof(struct MyOptionSt, sz), (int)__builtin_offsetof(struct MyOptionSt, ptr), (int)__builtin_offsetof(struct MyOptionSt, next), "option", 4, (int)__builtin_offsetof(struct option, name), (int)__builtin_offsetof(struct option, has_arg), (int)__builtin_offsetof(struct option, flag), (int)__builtin_offsetof(struct option, val));
    register_global_var("global|myargs", "%struct.MyOptionSt**", (void *)(&myargs), 8, 1, 0, 0);
    register_global_var("global|longest", "i32*", (void *)(&longest), 8, 1, 0, 0);
    return 0;
}

static int __libchimes_module_init = module_init();