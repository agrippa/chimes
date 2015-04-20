# 1 "haloExchange.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "haloExchange.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
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
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 31 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 1






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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 2
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
# 32 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c" 2
# 32 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"

# 1 "/usr/include/assert.h" 1 3 4
# 42 "/usr/include/assert.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 43 "/usr/include/assert.h" 2 3 4

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
# 33 "/usr/include/sys/_types.h" 3 4
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
# 45 "/usr/include/assert.h" 2 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 34 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c" 2
# 34 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"

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
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
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
# 36 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c" 2
# 36 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"

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
# 38 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c" 2
# 38 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/eam.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/eam.h"
struct BasePotentialSt;
struct LinkCellSt;





typedef struct ForceExchangeDataSt
{
   real_t* dfEmbed;
   struct LinkCellSt* boxes;
}ForceExchangeData;

struct BasePotentialSt* initEamPot(const char* dir, const char* file, const char* type);
# 40 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c" 2
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
# 41 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c" 2
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
enum HaloAxisOrder {HALO_X_AXIS, HALO_Y_AXIS, HALO_Z_AXIS};
# 58 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 59 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 60 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 62 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
typedef struct AtomExchangeParmsSt
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{
# 64 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int nCells[6];
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int* cellList[6];
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   real_t* pbcFactor[6];
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
AtomExchangeParms;
# 69 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 72 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
typedef struct ForceExchangeParmsSt
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int nCells[6];
# 76 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int* sendCells[6];
# 77 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int* recvCells[6];
# 78 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 79 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
ForceExchangeParms;
# 80 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 81 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 82 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 83 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
typedef struct AtomMsgSt
# 84 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int gid;
# 86 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   int type;
# 87 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   real_t rx, ry, rz;
# 88 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   real_t px, py, pz;
# 89 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 90 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
AtomMsg;
# 91 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 92 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 93 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
typedef struct ForceMsgSt
# 94 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{
# 95 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   real_t dfEmbed;
# 96 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 97 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
ForceMsg;
# 98 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 99 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static HaloExchange* initHaloExchange(Domain* domain);
# 100 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static void exchangeData(HaloExchange* haloExchange, void* data, int iAxis);
# 101 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 102 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static int* mkAtomCellList(LinkCell* boxes, int iFace, const int nCells);
# 103 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static int loadAtomsBuffer(void* vparms, void* data, int face, char* charBuf);
# 104 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static void unloadAtomsBuffer(void* vparms, void* data, int face, int bufSize, char* charBuf);
# 105 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static void destroyAtomsExchange(void* vparms);
# 106 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static int* mkForceSendCellList(LinkCell* boxes, int face, int nCells);
# 108 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static int* mkForceRecvCellList(LinkCell* boxes, int face, int nCells);
# 109 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static int loadForceBuffer(void* vparms, void* data, int face, char* charBuf);
# 110 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static void unloadForceBuffer(void* vparms, void* data, int face, int bufSize, char* charBuf);
# 111 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static void destroyForceExchange(void* vparms);
# 112 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
static int sortAtomsById(const void* a, const void* b);
# 150 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 150 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
HaloExchange* initAtomHaloExchange(Domain* domain, LinkCell* boxes)
# 151 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&initAtomHaloExchange), 2, 2, (size_t)(18379826249005484718UL), (size_t)(18379826249005484479UL), "initAtomHaloExchange|domain|0", "%struct.DomainSt*", (void *)(&domain), (size_t)8, 1, 0, 0, "initAtomHaloExchange|boxes|0", "%struct.LinkCellSt*", (void *)(&boxes), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(2, (size_t)(18379826249005484376UL), (size_t)(18379826249005484377UL)); lbl_0: HaloExchange *hh; register_stack_var("initAtomHaloExchange|hh|0", "%struct.HaloExchangeSt*", (void *)(&hh), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_2: calling((void*)&initHaloExchange, 2, 18379826249005484463UL, 1, (size_t)(18379826249005484718UL)); hh = (initHaloExchange(domain)) ;
# 153 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 154 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: int size0; register_stack_var("initAtomHaloExchange|size0|0", "i32", (void *)(&size0), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } size0 = ((boxes->gridSize[1] + 2) * (boxes->gridSize[2] + 2)) ;
# 155 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: int size1; register_stack_var("initAtomHaloExchange|size1|0", "i32", (void *)(&size1), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } size1 = ((boxes->gridSize[0] + 2) * (boxes->gridSize[2] + 2)) ;
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: int size2; register_stack_var("initAtomHaloExchange|size2|0", "i32", (void *)(&size2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } size2 = ((boxes->gridSize[0] + 2) * (boxes->gridSize[1] + 2)) ;
# 157 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_4: int maxSize; register_stack_var("initAtomHaloExchange|maxSize|0", "i32", (void *)(&maxSize), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } maxSize = (((size0) > (size1) ? (size0) : (size1))) ;
# 158 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   maxSize = ((size1) > (size2) ? (size1) : (size2));
# 159 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->bufCapacity = maxSize*2*64*sizeof(AtomMsg);
# 160 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 161 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->loadBuffer = loadAtomsBuffer;
# 162 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->unloadBuffer = unloadAtomsBuffer;
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->destroy = destroyAtomsExchange;
# 164 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 165 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_5: AtomExchangeParms *parms; register_stack_var("initAtomHaloExchange|parms|0", "%struct.AtomExchangeParmsSt*", (void *)(&parms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_6; } parms = ((AtomExchangeParms *)malloc_wrapper(sizeof(AtomExchangeParms), 18379826249005486940UL, 0, 1, (int)sizeof(struct AtomExchangeParmsSt), 0)) ;
# 166 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 167 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[0] = 2*(boxes->gridSize[1]+2)*(boxes->gridSize[2]+2);
# 168 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[2] = 2*(boxes->gridSize[0]+2)*(boxes->gridSize[2]+2);
# 169 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[4] = 2*(boxes->gridSize[0]+2)*(boxes->gridSize[1]+2);
# 170 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[1] = parms->nCells[0];
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[3] = parms->nCells[2];
# 172 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[5] = parms->nCells[4];
# 173 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 174 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_6: int ii; register_stack_var("initAtomHaloExchange|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } for ( ii = (0) ;ii < 6; ++ii) { alias_group_changed(9, (size_t)(18379826249005484378UL), (size_t)(18379826249005484379UL), (size_t)(18379826249005484380UL), (size_t)(18379826249005484381UL), (size_t)(18379826249005484382UL), (size_t)(18379826249005484383UL), (size_t)(18379826249005484384UL), (size_t)(18379826249005484463UL), (size_t)(18379826249005486940UL)); call_lbl_5: calling((void*)&mkAtomCellList, 5, 18379826249005484565UL, 3, (size_t)(18379826249005484479UL), (size_t)(0UL), (size_t)(0UL)); parms->cellList[ii] = mkAtomCellList(boxes, ii, parms->nCells[ii]); } };
# 176 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 177 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_7: int ii; register_stack_var("initAtomHaloExchange|ii|1", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } for ( ii = (0) ; ii<6; ++ii)
# 178 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 179 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      parms->pbcFactor[ii] = (real_t*)malloc_wrapper(3*sizeof(real_t), 18379826249005484565UL, 0, 0);
# 180 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { lbl_8: int jj; register_stack_var("initAtomHaloExchange|jj|0", "i32", (void *)(&jj), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } for ( jj = (0) ;jj < 3; ++jj) { parms->pbcFactor[ii][jj] = 0.; } };
# 182 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 183 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_9: int *procCoord; register_stack_var("initAtomHaloExchange|procCoord|0", "i32*", (void *)(&procCoord), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_10; } procCoord = (domain->procCoord) ;
# 184 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_10: int *procGrid; register_stack_var("initAtomHaloExchange|procGrid|0", "i32*", (void *)(&procGrid), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } procGrid = (domain->procGrid) ;
# 185 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (procCoord[HALO_X_AXIS] == 0) {parms->pbcFactor[0][HALO_X_AXIS] = +1.; };
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (procCoord[HALO_X_AXIS] == procGrid[HALO_X_AXIS] - 1) {parms->pbcFactor[1][HALO_X_AXIS] = -1.; };
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (procCoord[HALO_Y_AXIS] == 0) {parms->pbcFactor[2][HALO_Y_AXIS] = +1.; };
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (procCoord[HALO_Y_AXIS] == procGrid[HALO_Y_AXIS] - 1) {parms->pbcFactor[3][HALO_Y_AXIS] = -1.; };
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (procCoord[HALO_Z_AXIS] == 0) {parms->pbcFactor[4][HALO_Z_AXIS] = +1.; };
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (procCoord[HALO_Z_AXIS] == procGrid[HALO_Z_AXIS] - 1) {parms->pbcFactor[5][HALO_Z_AXIS] = -1.; };
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->parms = parms;
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(14, (size_t)(18379826249005484378UL), (size_t)(18379826249005484379UL), (size_t)(18379826249005484380UL), (size_t)(18379826249005484381UL), (size_t)(18379826249005484382UL), (size_t)(18379826249005484383UL), (size_t)(18379826249005484384UL), (size_t)(18379826249005484385UL), (size_t)(18379826249005484386UL), (size_t)(18379826249005484387UL), (size_t)(18379826249005484388UL), (size_t)(18379826249005484463UL), (size_t)(18379826249005484565UL), (size_t)(18379826249005486940UL)); rm_stack(true, 18379826249005484463UL); return hh;
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
HaloExchange* initForceHaloExchange(Domain* domain, LinkCell* boxes)
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&initForceHaloExchange), 2, 2, (size_t)(18379826249005485634UL), (size_t)(18379826249005485520UL), "initForceHaloExchange|domain|0", "%struct.DomainSt*", (void *)(&domain), (size_t)8, 1, 0, 0, "initForceHaloExchange|boxes|0", "%struct.LinkCellSt*", (void *)(&boxes), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(2, (size_t)(18379826249005485425UL), (size_t)(18379826249005485426UL)); lbl_0: HaloExchange *hh; register_stack_var("initForceHaloExchange|hh|0", "%struct.HaloExchangeSt*", (void *)(&hh), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_2: calling((void*)&initHaloExchange, 2, 18379826249005485513UL, 1, (size_t)(18379826249005485634UL)); hh = (initHaloExchange(domain)) ;
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->loadBuffer = loadForceBuffer;
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->unloadBuffer = unloadForceBuffer;
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->destroy = destroyForceExchange;
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: int size0; register_stack_var("initForceHaloExchange|size0|0", "i32", (void *)(&size0), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } size0 = ((boxes->gridSize[1]) * (boxes->gridSize[2])) ;
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: int size1; register_stack_var("initForceHaloExchange|size1|0", "i32", (void *)(&size1), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } size1 = ((boxes->gridSize[0] + 2) * (boxes->gridSize[2])) ;
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: int size2; register_stack_var("initForceHaloExchange|size2|0", "i32", (void *)(&size2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } size2 = ((boxes->gridSize[0] + 2) * (boxes->gridSize[1] + 2)) ;
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_4: int maxSize; register_stack_var("initForceHaloExchange|maxSize|0", "i32", (void *)(&maxSize), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } maxSize = (((size0) > (size1) ? (size0) : (size1))) ;
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   maxSize = ((size1) > (size2) ? (size1) : (size2));
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->bufCapacity = (maxSize)*64*sizeof(ForceMsg);
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_5: ForceExchangeParms *parms; register_stack_var("initForceHaloExchange|parms|0", "%struct.ForceExchangeParmsSt*", (void *)(&parms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_6; } parms = ((ForceExchangeParms *)malloc_wrapper(sizeof(ForceExchangeParms), 18379826249005486943UL, 0, 1, (int)sizeof(struct ForceExchangeParmsSt), 0)) ;
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[0] = (boxes->gridSize[1] )*(boxes->gridSize[2] );
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[2] = (boxes->gridSize[0]+2)*(boxes->gridSize[2] );
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[4] = (boxes->gridSize[0]+2)*(boxes->gridSize[1]+2);
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[1] = parms->nCells[0];
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[3] = parms->nCells[2];
# 233 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   parms->nCells[5] = parms->nCells[4];
# 234 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 235 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_6: int ii; register_stack_var("initForceHaloExchange|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } for ( ii = (0) ; ii<6; ++ii)
# 236 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 237 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      alias_group_changed(9, (size_t)(18379826249005485427UL), (size_t)(18379826249005485428UL), (size_t)(18379826249005485429UL), (size_t)(18379826249005485430UL), (size_t)(18379826249005485431UL), (size_t)(18379826249005485432UL), (size_t)(18379826249005485433UL), (size_t)(18379826249005485513UL), (size_t)(18379826249005486943UL)); call_lbl_5: calling((void*)&mkForceSendCellList, 5, 18379826249005485600UL, 3, (size_t)(18379826249005485520UL), (size_t)(0UL), (size_t)(0UL)); parms->sendCells[ii] = mkForceSendCellList(boxes, ii, parms->nCells[ii]);
# 238 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      alias_group_changed(1, (size_t)(18379826249005486943UL)); call_lbl_7: calling((void*)&mkForceRecvCellList, 7, 18379826249005485600UL, 3, (size_t)(18379826249005485520UL), (size_t)(0UL), (size_t)(0UL)); parms->recvCells[ii] = mkForceRecvCellList(boxes, ii, parms->nCells[ii]);
# 239 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 240 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 241 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->parms = parms;
# 242 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(9, (size_t)(18379826249005485427UL), (size_t)(18379826249005485428UL), (size_t)(18379826249005485429UL), (size_t)(18379826249005485430UL), (size_t)(18379826249005485431UL), (size_t)(18379826249005485432UL), (size_t)(18379826249005485433UL), (size_t)(18379826249005485513UL), (size_t)(18379826249005486943UL)); rm_stack(true, 18379826249005485513UL); return hh;
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void destroyHaloExchange(HaloExchange** haloExchange)
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&destroyHaloExchange), 1, 1, (size_t)(18379826249005486366UL), "destroyHaloExchange|haloExchange|0", "%struct.HaloExchangeSt**", (void *)(&haloExchange), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005486342UL)); call_lbl_2: calling((void*)(*haloExchange)->destroy, 2, 0UL, 1, (size_t)(18379826249005486348UL)); (*haloExchange)->destroy((*haloExchange)->parms);
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   free_wrapper((*haloExchange)->parms, 18379826249005486348UL);
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   free_wrapper(*haloExchange, 18379826249005486346UL);
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   *haloExchange = __null;
# 251 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(1, (size_t)(18379826249005486366UL)); rm_stack(false, 0UL); }
# 252 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void haloExchange(HaloExchange* haloExchangeData, void* data)
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&haloExchange), 2, 2, (size_t)(18379826249005486391UL), (size_t)(18379826249005486392UL), "haloExchange|haloExchangeData|0", "%struct.HaloExchangeSt*", (void *)(&haloExchangeData), (size_t)8, 1, 0, 0, "haloExchange|data|0", "i8*", (void *)(&data), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 255 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_0: int iAxis; register_stack_var("haloExchange|iAxis|0", "i32", (void *)(&iAxis), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } for ( iAxis = (0) ;iAxis < 3; ++iAxis) { alias_group_changed(3, (size_t)(18379826249005486368UL), (size_t)(18379826249005486369UL), (size_t)(18379826249005486370UL)); call_lbl_2: calling((void*)&exchangeData, 2, 0UL, 3, (size_t)(18379826249005486391UL), (size_t)(18379826249005486392UL), (size_t)(0UL)); exchangeData(haloExchangeData, data, iAxis); } };
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(3, (size_t)(18379826249005486368UL), (size_t)(18379826249005486369UL), (size_t)(18379826249005486370UL)); rm_stack(false, 0UL); }
# 258 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 259 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 260 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
HaloExchange* initHaloExchange(Domain* domain)
# 261 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&initHaloExchange), 1, 1, (size_t)(18379826249005484771UL), "initHaloExchange|domain|0", "%struct.DomainSt*", (void *)(&domain), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 262 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: HaloExchange *hh; register_stack_var("initHaloExchange|hh|0", "%struct.HaloExchangeSt*", (void *)(&hh), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } case(9): { goto call_lbl_9; } case(11): { goto call_lbl_11; } case(13): { goto call_lbl_13; } default: { chimes_error(); } } } hh = ((HaloExchange *)malloc_wrapper(sizeof(HaloExchange), 18379826249005484727UL, 0, 1, (int)sizeof(struct HaloExchangeSt), 4, (int)__builtin_offsetof(struct HaloExchangeSt, loadBuffer), (int)__builtin_offsetof(struct HaloExchangeSt, unloadBuffer), (int)__builtin_offsetof(struct HaloExchangeSt, destroy), (int)__builtin_offsetof(struct HaloExchangeSt, parms))) ;
# 263 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 265 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(2, (size_t)(18379826249005484722UL), (size_t)(18379826249005484723UL)); call_lbl_3: calling((void*)&processorNum, 3, 0UL, 4, (size_t)(18379826249005484771UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); hh->nbrRank[0] = processorNum(domain, -1, 0, 0);
# 266 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005484727UL)); call_lbl_5: calling((void*)&processorNum, 5, 0UL, 4, (size_t)(18379826249005484771UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); hh->nbrRank[1] = processorNum(domain, +1, 0, 0);
# 267 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005484727UL)); call_lbl_7: calling((void*)&processorNum, 7, 0UL, 4, (size_t)(18379826249005484771UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); hh->nbrRank[2] = processorNum(domain, 0, -1, 0);
# 268 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005484727UL)); call_lbl_9: calling((void*)&processorNum, 9, 0UL, 4, (size_t)(18379826249005484771UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); hh->nbrRank[3] = processorNum(domain, 0, +1, 0);
# 269 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005484727UL)); call_lbl_11: calling((void*)&processorNum, 11, 0UL, 4, (size_t)(18379826249005484771UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); hh->nbrRank[4] = processorNum(domain, 0, 0, -1);
# 270 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005484727UL)); call_lbl_13: calling((void*)&processorNum, 13, 0UL, 4, (size_t)(18379826249005484771UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); hh->nbrRank[5] = processorNum(domain, 0, 0, +1);
# 271 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   hh->bufCapacity = 0;
# 272 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 273 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005484727UL)); rm_stack(true, 18379826249005484727UL); return hh;
# 274 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void exchangeData(HaloExchange* haloExchange, void* data, int iAxis)
# 285 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&exchangeData), 3, 3, (size_t)(18379826249005486499UL), (size_t)(18379826249005486524UL), (size_t)(0UL), "exchangeData|haloExchange|0", "%struct.HaloExchangeSt*", (void *)(&haloExchange), (size_t)8, 1, 0, 0, "exchangeData|data|0", "i8*", (void *)(&data), (size_t)8, 1, 0, 0, "exchangeData|iAxis|0", "i32", (void *)(&iAxis), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 286 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: int faceM; register_stack_var("exchangeData|faceM|0", "i32", (void *)(&faceM), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } faceM = (2 * iAxis) ;
# 287 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: int faceP; register_stack_var("exchangeData|faceP|0", "i32", (void *)(&faceP), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } faceP = (faceM + 1) ;
# 288 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 289 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: char *sendBufM; register_stack_var("exchangeData|sendBufM|0", "i8*", (void *)(&sendBufM), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_3; } sendBufM = ((char *)malloc_wrapper(haloExchange->bufCapacity, 18379826249005486495UL, 0, 0)) ;
# 290 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: char *sendBufP; register_stack_var("exchangeData|sendBufP|0", "i8*", (void *)(&sendBufP), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_4; } sendBufP = ((char *)malloc_wrapper(haloExchange->bufCapacity, 18379826249005486505UL, 0, 0)) ;
# 291 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_4: char *recvBufM; register_stack_var("exchangeData|recvBufM|0", "i8*", (void *)(&recvBufM), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_5; } recvBufM = ((char *)malloc_wrapper(haloExchange->bufCapacity, 18379826249005486508UL, 0, 0)) ;
# 292 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_5: char *recvBufP; register_stack_var("exchangeData|recvBufP|0", "i8*", (void *)(&recvBufP), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_6; } recvBufP = ((char *)malloc_wrapper(haloExchange->bufCapacity, 18379826249005486498UL, 0, 0)) ;
# 293 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 294 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(9, (size_t)(18379826249005486393UL), (size_t)(18379826249005486394UL), (size_t)(18379826249005486395UL), (size_t)(18379826249005486396UL), (size_t)(18379826249005486397UL), (size_t)(18379826249005486398UL), (size_t)(18379826249005486399UL), (size_t)(18379826249005486400UL), (size_t)(18379826249005486401UL)); lbl_6: int nSendM; register_stack_var("exchangeData|nSendM|0", "i32", (void *)(&nSendM), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } call_lbl_6: calling((void*)haloExchange->loadBuffer, 6, 0UL, 4, (size_t)(18379826249005486520UL), (size_t)(18379826249005486524UL), (size_t)(0UL), (size_t)(18379826249005486495UL)); nSendM = (haloExchange->loadBuffer(haloExchange->parms, data, faceM, sendBufM)) ;
# 295 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005486402UL)); lbl_7: int nSendP; register_stack_var("exchangeData|nSendP|0", "i32", (void *)(&nSendP), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } call_lbl_8: calling((void*)haloExchange->loadBuffer, 8, 0UL, 4, (size_t)(18379826249005486520UL), (size_t)(18379826249005486524UL), (size_t)(0UL), (size_t)(18379826249005486505UL)); nSendP = (haloExchange->loadBuffer(haloExchange->parms, data, faceP, sendBufP)) ;
# 296 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 297 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_8: int nbrRankM; register_stack_var("exchangeData|nbrRankM|0", "i32", (void *)(&nbrRankM), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } nbrRankM = (haloExchange->nbrRank[faceM]) ;
# 298 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_9: int nbrRankP; register_stack_var("exchangeData|nbrRankP|0", "i32", (void *)(&nbrRankP), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } nbrRankP = (haloExchange->nbrRank[faceP]) ;
# 299 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 300 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    lbl_10: int nRecvM; register_stack_var("exchangeData|nRecvM|0", "i32", (void *)(&nRecvM), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } lbl_11: int nRecvP; register_stack_var("exchangeData|nRecvP|0", "i32", (void *)(&nRecvP), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(6): { goto call_lbl_6; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(13): { goto call_lbl_13; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } default: { chimes_error(); } } } ;
# 301 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 302 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   do { alias_group_changed(3, (size_t)(18379826249005486403UL), (size_t)(18379826249005486404UL), (size_t)(18379826249005486405UL)); call_lbl_10: calling((void*)&profileStart, 10, 0UL, 1, (size_t)(0UL)); profileStart(commHaloTimer); } while(0);
# 303 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    call_lbl_11: calling((void*)&sendReceiveParallel, 11, 0UL, 6, (size_t)(18379826249005486495UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005486498UL), (size_t)(0UL), (size_t)(0UL)); nRecvP = sendReceiveParallel(sendBufM, nSendM, nbrRankM, recvBufP, haloExchange->bufCapacity, nbrRankP);
# 304 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(1, (size_t)(18379826249005486407UL)); call_lbl_13: calling((void*)&sendReceiveParallel, 13, 0UL, 6, (size_t)(18379826249005486505UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005486508UL), (size_t)(0UL), (size_t)(0UL)); nRecvM = sendReceiveParallel(sendBufP, nSendP, nbrRankP, recvBufM, haloExchange->bufCapacity, nbrRankM);
# 305 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   do { alias_group_changed(1, (size_t)(18379826249005486406UL)); call_lbl_15: calling((void*)&profileStop, 15, 0UL, 1, (size_t)(0UL)); profileStop(commHaloTimer); } while(0);
# 306 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 307 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    call_lbl_16: calling((void*)haloExchange->unloadBuffer, 16, 0UL, 5, (size_t)(18379826249005486520UL), (size_t)(18379826249005486524UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005486508UL)); haloExchange->unloadBuffer(haloExchange->parms, data, faceM, nRecvM, recvBufM);
# 308 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    call_lbl_17: calling((void*)haloExchange->unloadBuffer, 17, 0UL, 5, (size_t)(18379826249005486520UL), (size_t)(18379826249005486524UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005486498UL)); haloExchange->unloadBuffer(haloExchange->parms, data, faceP, nRecvP, recvBufP);
# 309 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   free_wrapper(recvBufP, 18379826249005486498UL);
# 310 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   free_wrapper(recvBufM, 18379826249005486508UL);
# 311 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   free_wrapper(sendBufP, 18379826249005486505UL);
# 312 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   free_wrapper(sendBufM, 18379826249005486495UL);
# 313 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
rm_stack(false, 0UL); }
# 334 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 334 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
int* mkAtomCellList(LinkCell* boxes, int iFace, const int nCells)
# 335 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&mkAtomCellList), 3, 3, (size_t)(18379826249005485422UL), (size_t)(0UL), (size_t)(0UL), "mkAtomCellList|boxes|0", "%struct.LinkCellSt*", (void *)(&boxes), (size_t)8, 1, 0, 0, "mkAtomCellList|iFace|0", "i32", (void *)(&iFace), (size_t)4, 0, 0, 0, "mkAtomCellList|nCells|0", "i32", (void *)(&nCells), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 336 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: int *list; register_stack_var("mkAtomCellList|list|0", "i32*", (void *)(&list), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } list = ((int *)malloc_wrapper(nCells * sizeof(int), 18379826249005485420UL, 0, 0)) ;
# 337 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: int xBegin; register_stack_var("mkAtomCellList|xBegin|0", "i32", (void *)(&xBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } xBegin = (-1) ;
# 338 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: int xEnd; register_stack_var("mkAtomCellList|xEnd|0", "i32", (void *)(&xEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } xEnd = (boxes->gridSize[0] + 1) ;
# 339 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: int yBegin; register_stack_var("mkAtomCellList|yBegin|0", "i32", (void *)(&yBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } yBegin = (-1) ;
# 340 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_4: int yEnd; register_stack_var("mkAtomCellList|yEnd|0", "i32", (void *)(&yEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } yEnd = (boxes->gridSize[1] + 1) ;
# 341 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_5: int zBegin; register_stack_var("mkAtomCellList|zBegin|0", "i32", (void *)(&zBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } zBegin = (-1) ;
# 342 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_6: int zEnd; register_stack_var("mkAtomCellList|zEnd|0", "i32", (void *)(&zEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } zEnd = (boxes->gridSize[2] + 1) ;
# 343 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 344 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (iFace == 0) {xEnd = xBegin + 2; };
# 345 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (iFace == 1) {xBegin = xEnd - 2; };
# 346 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (iFace == 2) {yEnd = yBegin + 2; };
# 347 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (iFace == 3) {yBegin = yEnd - 2; };
# 348 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (iFace == 4) {zEnd = zBegin + 2; };
# 349 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (iFace == 5) {zBegin = zEnd - 2; };
# 350 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 351 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_7: int count; register_stack_var("mkAtomCellList|count|0", "i32", (void *)(&count), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } count = (0) ;
# 352 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_8: int ix; register_stack_var("mkAtomCellList|ix|0", "i32", (void *)(&ix), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } for ( ix = (xBegin) ; ix<xEnd; ++ix) {
# 353 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { lbl_9: int iy; register_stack_var("mkAtomCellList|iy|0", "i32", (void *)(&iy), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } for ( iy = (yBegin) ; iy<yEnd; ++iy) {
# 354 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         { lbl_10: int iz; register_stack_var("mkAtomCellList|iz|0", "i32", (void *)(&iz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } } for ( iz = (zBegin) ; iz<zEnd; ++iz) {
# 355 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
            alias_group_changed(15, (size_t)(18379826249005485259UL), (size_t)(18379826249005485260UL), (size_t)(18379826249005485261UL), (size_t)(18379826249005485262UL), (size_t)(18379826249005485263UL), (size_t)(18379826249005485264UL), (size_t)(18379826249005485265UL), (size_t)(18379826249005485266UL), (size_t)(18379826249005485267UL), (size_t)(18379826249005485268UL), (size_t)(18379826249005485269UL), (size_t)(18379826249005485270UL), (size_t)(18379826249005485271UL), (size_t)(18379826249005485272UL), (size_t)(18379826249005485420UL)); call_lbl_3: calling((void*)&getBoxFromTuple, 3, 0UL, 4, (size_t)(18379826249005485422UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); list[count++] = getBoxFromTuple(boxes, ix, iy, iz);
# 356 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         } }
# 357 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      } }
# 358 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 359 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(15, (size_t)(18379826249005485259UL), (size_t)(18379826249005485260UL), (size_t)(18379826249005485261UL), (size_t)(18379826249005485262UL), (size_t)(18379826249005485263UL), (size_t)(18379826249005485264UL), (size_t)(18379826249005485265UL), (size_t)(18379826249005485266UL), (size_t)(18379826249005485267UL), (size_t)(18379826249005485268UL), (size_t)(18379826249005485269UL), (size_t)(18379826249005485270UL), (size_t)(18379826249005485271UL), (size_t)(18379826249005485272UL), (size_t)(18379826249005485420UL)); (__builtin_expect(!(count == nCells), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 359, "count == nCells") : (void)0);
# 360 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(15, (size_t)(18379826249005485259UL), (size_t)(18379826249005485260UL), (size_t)(18379826249005485261UL), (size_t)(18379826249005485262UL), (size_t)(18379826249005485263UL), (size_t)(18379826249005485264UL), (size_t)(18379826249005485265UL), (size_t)(18379826249005485266UL), (size_t)(18379826249005485267UL), (size_t)(18379826249005485268UL), (size_t)(18379826249005485269UL), (size_t)(18379826249005485270UL), (size_t)(18379826249005485271UL), (size_t)(18379826249005485272UL), (size_t)(18379826249005485420UL)); rm_stack(true, 18379826249005485420UL); return list;
# 361 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 370 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 370 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
int loadAtomsBuffer(void* vparms, void* data, int face, char* charBuf)
# 371 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&loadAtomsBuffer), 4, 0, (size_t)(18379826249005485060UL), (size_t)(18379826249005485061UL), (size_t)(0UL), (size_t)(18379826249005485063UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 372 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    AtomExchangeParms *parms; parms = ((AtomExchangeParms *)vparms) ;
# 373 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    SimFlat *s; s = ((SimFlat *)data) ;
# 374 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    AtomMsg *buf; buf = ((AtomMsg *)charBuf) ;
# 375 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 376 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    real_t *pbcFactor; pbcFactor = (parms->pbcFactor[face]) ;
# 377 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   real3 shift; ;
# 378 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   shift[0] = pbcFactor[0] * s->domain->globalExtent[0];
# 379 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   shift[1] = pbcFactor[1] * s->domain->globalExtent[1];
# 380 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   shift[2] = pbcFactor[2] * s->domain->globalExtent[2];
# 381 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 382 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    int nCells; nCells = (parms->nCells[face]) ;
# 383 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    int *cellList; cellList = (parms->cellList[face]) ;
# 384 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    int nBuf; nBuf = (0) ;
# 385 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { int iCell; for ( iCell = (0) ; iCell<nCells; ++iCell)
# 386 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 387 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
       int iBox; iBox = (cellList[iCell]) ;
# 388 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
       int iOff; iOff = (iBox * 64) ;
# 389 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { int ii; for ( ii = (iOff) ; ii<iOff+s->boxes->nAtoms[iBox]; ++ii)
# 390 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      {
# 391 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].gid = s->atoms->gid[ii];
# 392 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].type = s->atoms->iSpecies[ii];
# 393 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].rx = s->atoms->r[ii][0] + shift[0];
# 394 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].ry = s->atoms->r[ii][1] + shift[1];
# 395 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].rz = s->atoms->r[ii][2] + shift[2];
# 396 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].px = s->atoms->p[ii][0];
# 397 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].py = s->atoms->p[ii][1];
# 398 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].pz = s->atoms->p[ii][2];
# 399 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         ++nBuf;
# 400 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      } }
# 401 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 402 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(17, (size_t)(18379826249005484772UL), (size_t)(18379826249005484773UL), (size_t)(18379826249005484774UL), (size_t)(18379826249005484775UL), (size_t)(18379826249005484776UL), (size_t)(18379826249005484777UL), (size_t)(18379826249005484778UL), (size_t)(18379826249005484779UL), (size_t)(18379826249005484780UL), (size_t)(18379826249005484781UL), (size_t)(18379826249005484782UL), (size_t)(18379826249005484783UL), (size_t)(18379826249005484784UL), (size_t)(18379826249005484785UL), (size_t)(18379826249005484786UL), (size_t)(18379826249005484787UL), (size_t)(18379826249005485063UL)); rm_stack(false, 0UL); return nBuf*sizeof(AtomMsg);
# 403 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 415 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 415 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void unloadAtomsBuffer(void* vparms, void* data, int face, int bufSize, char* charBuf)
# 416 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&unloadAtomsBuffer), 5, 5, (size_t)(18379826249005485215UL), (size_t)(18379826249005485216UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005485219UL), "unloadAtomsBuffer|vparms|0", "i8*", (void *)(&vparms), (size_t)8, 1, 0, 0, "unloadAtomsBuffer|data|0", "i8*", (void *)(&data), (size_t)8, 1, 0, 0, "unloadAtomsBuffer|face|0", "i32", (void *)(&face), (size_t)4, 0, 0, 0, "unloadAtomsBuffer|bufSize|0", "i32", (void *)(&bufSize), (size_t)4, 0, 0, 0, "unloadAtomsBuffer|charBuf|0", "i8*", (void *)(&charBuf), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 417 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: AtomExchangeParms *parms; register_stack_var("unloadAtomsBuffer|parms|0", "%struct.AtomExchangeParmsSt*", (void *)(&parms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } parms = ((AtomExchangeParms *)vparms) ;
# 418 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: SimFlat *s; register_stack_var("unloadAtomsBuffer|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } s = ((SimFlat *)data) ;
# 419 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: AtomMsg *buf; register_stack_var("unloadAtomsBuffer|buf|0", "%struct.AtomMsgSt*", (void *)(&buf), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_3; } buf = ((AtomMsg *)charBuf) ;
# 420 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: int nBuf; register_stack_var("unloadAtomsBuffer|nBuf|0", "i32", (void *)(&nBuf), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } nBuf = (bufSize / sizeof(AtomMsg)) ;
# 421 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(18, (size_t)(18379826249005485064UL), (size_t)(18379826249005485065UL), (size_t)(18379826249005485066UL), (size_t)(18379826249005485067UL), (size_t)(18379826249005485068UL), (size_t)(18379826249005485069UL), (size_t)(18379826249005485070UL), (size_t)(18379826249005485071UL), (size_t)(18379826249005485072UL), (size_t)(18379826249005485073UL), (size_t)(18379826249005485074UL), (size_t)(18379826249005485075UL), (size_t)(18379826249005485076UL), (size_t)(18379826249005485077UL), (size_t)(18379826249005485078UL), (size_t)(18379826249005485079UL), (size_t)(18379826249005485080UL), (size_t)(18379826249005485081UL)); (__builtin_expect(!(bufSize % sizeof(AtomMsg) == 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 421, "bufSize % sizeof(AtomMsg) == 0") : (void)0);
# 422 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 423 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_4: int ii; register_stack_var("unloadAtomsBuffer|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } for ( ii = (0) ; ii<nBuf; ++ii)
# 424 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 425 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_5: int gid; register_stack_var("unloadAtomsBuffer|gid|0", "i32", (void *)(&gid), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } gid = (buf[ii].gid) ;
# 426 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_6: int type; register_stack_var("unloadAtomsBuffer|type|0", "i32", (void *)(&type), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } type = (buf[ii].type) ;
# 427 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_7: real_t rx; register_stack_var("unloadAtomsBuffer|rx|0", "double", (void *)(&rx), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } rx = (buf[ii].rx) ;
# 428 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_8: real_t ry; register_stack_var("unloadAtomsBuffer|ry|0", "double", (void *)(&ry), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } ry = (buf[ii].ry) ;
# 429 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_9: real_t rz; register_stack_var("unloadAtomsBuffer|rz|0", "double", (void *)(&rz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } rz = (buf[ii].rz) ;
# 430 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_10: real_t px; register_stack_var("unloadAtomsBuffer|px|0", "double", (void *)(&px), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } px = (buf[ii].px) ;
# 431 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_11: real_t py; register_stack_var("unloadAtomsBuffer|py|0", "double", (void *)(&py), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } py = (buf[ii].py) ;
# 432 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_12: real_t pz; register_stack_var("unloadAtomsBuffer|pz|0", "double", (void *)(&pz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(5): { goto call_lbl_5; } default: { chimes_error(); } } } pz = (buf[ii].pz) ;
# 433 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      alias_group_changed(18, (size_t)(18379826249005485064UL), (size_t)(18379826249005485065UL), (size_t)(18379826249005485066UL), (size_t)(18379826249005485067UL), (size_t)(18379826249005485068UL), (size_t)(18379826249005485069UL), (size_t)(18379826249005485070UL), (size_t)(18379826249005485071UL), (size_t)(18379826249005485072UL), (size_t)(18379826249005485073UL), (size_t)(18379826249005485074UL), (size_t)(18379826249005485075UL), (size_t)(18379826249005485076UL), (size_t)(18379826249005485077UL), (size_t)(18379826249005485078UL), (size_t)(18379826249005485079UL), (size_t)(18379826249005485080UL), (size_t)(18379826249005485081UL)); call_lbl_5: calling((void*)&putAtomInBox, 5, 0UL, 10, (size_t)(18379826249005485196UL), (size_t)(18379826249005485196UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); putAtomInBox(s->boxes, s->atoms, gid, type, rx, ry, rz, px, py, pz);
# 434 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 435 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(10, (size_t)(18379826249005485064UL), (size_t)(18379826249005485065UL), (size_t)(18379826249005485066UL), (size_t)(18379826249005485067UL), (size_t)(18379826249005485068UL), (size_t)(18379826249005485069UL), (size_t)(18379826249005485070UL), (size_t)(18379826249005485071UL), (size_t)(18379826249005485072UL), (size_t)(18379826249005485073UL)); rm_stack(false, 0UL); }
# 436 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 437 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void destroyAtomsExchange(void* vparms)
# 438 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&destroyAtomsExchange), 1, 1, (size_t)(18379826249005485257UL), "destroyAtomsExchange|vparms|0", "i8*", (void *)(&vparms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 439 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: AtomExchangeParms *parms; register_stack_var("destroyAtomsExchange|parms|0", "%struct.AtomExchangeParmsSt*", (void *)(&parms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } parms = ((AtomExchangeParms *)vparms) ;
# 440 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 441 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_1: int ii; register_stack_var("destroyAtomsExchange|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } for ( ii = (0) ; ii<6; ++ii)
# 442 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 443 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      free_wrapper(parms->pbcFactor[ii], 18379826249005485240UL);
# 444 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      free_wrapper(parms->cellList[ii], 18379826249005485240UL);
# 445 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 446 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(3, (size_t)(18379826249005485220UL), (size_t)(18379826249005485221UL), (size_t)(18379826249005485222UL)); rm_stack(false, 0UL); }
# 455 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 455 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
int* mkForceSendCellList(LinkCell* boxes, int face, int nCells)
# 456 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&mkForceSendCellList), 3, 3, (size_t)(18379826249005486142UL), (size_t)(0UL), (size_t)(0UL), "mkForceSendCellList|boxes|0", "%struct.LinkCellSt*", (void *)(&boxes), (size_t)8, 1, 0, 0, "mkForceSendCellList|face|0", "i32", (void *)(&face), (size_t)4, 0, 0, 0, "mkForceSendCellList|nCells|0", "i32", (void *)(&nCells), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 457 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: int *list; register_stack_var("mkForceSendCellList|list|0", "i32*", (void *)(&list), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } list = ((int *)malloc_wrapper(nCells * sizeof(int), 18379826249005486140UL, 0, 0)) ;
# 458 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    lbl_1: int xBegin; register_stack_var("mkForceSendCellList|xBegin|0", "i32", (void *)(&xBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: int xEnd; register_stack_var("mkForceSendCellList|xEnd|0", "i32", (void *)(&xEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: int yBegin; register_stack_var("mkForceSendCellList|yBegin|0", "i32", (void *)(&yBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: int yEnd; register_stack_var("mkForceSendCellList|yEnd|0", "i32", (void *)(&yEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: int zBegin; register_stack_var("mkForceSendCellList|zBegin|0", "i32", (void *)(&zBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } lbl_6: int zEnd; register_stack_var("mkForceSendCellList|zEnd|0", "i32", (void *)(&zEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } ;
# 459 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 460 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_7: int nx; register_stack_var("mkForceSendCellList|nx|0", "i32", (void *)(&nx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } nx = (boxes->gridSize[0]) ;
# 461 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_8: int ny; register_stack_var("mkForceSendCellList|ny|0", "i32", (void *)(&ny), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } ny = (boxes->gridSize[1]) ;
# 462 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_9: int nz; register_stack_var("mkForceSendCellList|nz|0", "i32", (void *)(&nz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } nz = (boxes->gridSize[2]) ;
# 463 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   switch(face)
# 464 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 465 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 0:
# 466 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=0; xEnd=1; yBegin=0; yEnd=ny; zBegin=0; zEnd=nz;
# 467 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 468 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 1:
# 469 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=nx-1; xEnd=nx; yBegin=0; yEnd=ny; zBegin=0; zEnd=nz;
# 470 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 471 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 2:
# 472 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=0; yEnd=1; zBegin=0; zEnd=nz;
# 473 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 474 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 3:
# 475 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=ny-1; yEnd=ny; zBegin=0; zEnd=nz;
# 476 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 477 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 4:
# 478 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=-1; yEnd=ny+1; zBegin=0; zEnd=1;
# 479 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 480 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 5:
# 481 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=-1; yEnd=ny+1; zBegin=nz-1; zEnd=nz;
# 482 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 483 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     alias_group_changed(18, (size_t)(18379826249005485948UL), (size_t)(18379826249005485949UL), (size_t)(18379826249005485950UL), (size_t)(18379826249005485951UL), (size_t)(18379826249005485952UL), (size_t)(18379826249005485953UL), (size_t)(18379826249005485954UL), (size_t)(18379826249005485955UL), (size_t)(18379826249005485956UL), (size_t)(18379826249005485957UL), (size_t)(18379826249005485958UL), (size_t)(18379826249005485959UL), (size_t)(18379826249005485960UL), (size_t)(18379826249005485961UL), (size_t)(18379826249005485962UL), (size_t)(18379826249005485963UL), (size_t)(18379826249005485964UL), (size_t)(18379826249005486140UL)); default:
# 484 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      (__builtin_expect(!(1==0), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 484, "1==0") : (void)0);
# 485 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   }
# 486 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 487 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_10: int count; register_stack_var("mkForceSendCellList|count|0", "i32", (void *)(&count), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } count = (0) ;
# 488 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_11: int ix; register_stack_var("mkForceSendCellList|ix|0", "i32", (void *)(&ix), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } for ( ix = (xBegin) ; ix<xEnd; ++ix) {
# 489 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { lbl_12: int iy; register_stack_var("mkForceSendCellList|iy|0", "i32", (void *)(&iy), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } for ( iy = (yBegin) ; iy<yEnd; ++iy) {
# 490 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         { lbl_13: int iz; register_stack_var("mkForceSendCellList|iz|0", "i32", (void *)(&iz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(6): { goto call_lbl_6; } default: { chimes_error(); } } } for ( iz = (zBegin) ; iz<zEnd; ++iz) {
# 491 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
            alias_group_changed(18, (size_t)(18379826249005485948UL), (size_t)(18379826249005485949UL), (size_t)(18379826249005485950UL), (size_t)(18379826249005485951UL), (size_t)(18379826249005485952UL), (size_t)(18379826249005485953UL), (size_t)(18379826249005485954UL), (size_t)(18379826249005485955UL), (size_t)(18379826249005485956UL), (size_t)(18379826249005485957UL), (size_t)(18379826249005485958UL), (size_t)(18379826249005485959UL), (size_t)(18379826249005485960UL), (size_t)(18379826249005485961UL), (size_t)(18379826249005485962UL), (size_t)(18379826249005485963UL), (size_t)(18379826249005485964UL), (size_t)(18379826249005486140UL)); call_lbl_6: calling((void*)&getBoxFromTuple, 6, 0UL, 4, (size_t)(18379826249005486142UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); list[count++] = getBoxFromTuple(boxes, ix, iy, iz);
# 492 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         } }
# 493 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      } }
# 494 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 495 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 496 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(18, (size_t)(18379826249005485948UL), (size_t)(18379826249005485949UL), (size_t)(18379826249005485950UL), (size_t)(18379826249005485951UL), (size_t)(18379826249005485952UL), (size_t)(18379826249005485953UL), (size_t)(18379826249005485954UL), (size_t)(18379826249005485955UL), (size_t)(18379826249005485956UL), (size_t)(18379826249005485957UL), (size_t)(18379826249005485958UL), (size_t)(18379826249005485959UL), (size_t)(18379826249005485960UL), (size_t)(18379826249005485961UL), (size_t)(18379826249005485962UL), (size_t)(18379826249005485963UL), (size_t)(18379826249005485964UL), (size_t)(18379826249005486140UL)); (__builtin_expect(!(count == nCells), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 496, "count == nCells") : (void)0);
# 497 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(18, (size_t)(18379826249005485948UL), (size_t)(18379826249005485949UL), (size_t)(18379826249005485950UL), (size_t)(18379826249005485951UL), (size_t)(18379826249005485952UL), (size_t)(18379826249005485953UL), (size_t)(18379826249005485954UL), (size_t)(18379826249005485955UL), (size_t)(18379826249005485956UL), (size_t)(18379826249005485957UL), (size_t)(18379826249005485958UL), (size_t)(18379826249005485959UL), (size_t)(18379826249005485960UL), (size_t)(18379826249005485961UL), (size_t)(18379826249005485962UL), (size_t)(18379826249005485963UL), (size_t)(18379826249005485964UL), (size_t)(18379826249005486140UL)); rm_stack(true, 18379826249005486140UL); return list;
# 498 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 507 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 507 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
int* mkForceRecvCellList(LinkCell* boxes, int face, int nCells)
# 508 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&mkForceRecvCellList), 3, 3, (size_t)(18379826249005486339UL), (size_t)(0UL), (size_t)(0UL), "mkForceRecvCellList|boxes|0", "%struct.LinkCellSt*", (void *)(&boxes), (size_t)8, 1, 0, 0, "mkForceRecvCellList|face|0", "i32", (void *)(&face), (size_t)4, 0, 0, 0, "mkForceRecvCellList|nCells|0", "i32", (void *)(&nCells), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 509 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: int *list; register_stack_var("mkForceRecvCellList|list|0", "i32*", (void *)(&list), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } list = ((int *)malloc_wrapper(nCells * sizeof(int), 18379826249005486337UL, 0, 0)) ;
# 510 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    lbl_1: int xBegin; register_stack_var("mkForceRecvCellList|xBegin|0", "i32", (void *)(&xBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: int xEnd; register_stack_var("mkForceRecvCellList|xEnd|0", "i32", (void *)(&xEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: int yBegin; register_stack_var("mkForceRecvCellList|yBegin|0", "i32", (void *)(&yBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: int yEnd; register_stack_var("mkForceRecvCellList|yEnd|0", "i32", (void *)(&yEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: int zBegin; register_stack_var("mkForceRecvCellList|zBegin|0", "i32", (void *)(&zBegin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } lbl_6: int zEnd; register_stack_var("mkForceRecvCellList|zEnd|0", "i32", (void *)(&zEnd), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } ;
# 511 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 512 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_7: int nx; register_stack_var("mkForceRecvCellList|nx|0", "i32", (void *)(&nx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } nx = (boxes->gridSize[0]) ;
# 513 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_8: int ny; register_stack_var("mkForceRecvCellList|ny|0", "i32", (void *)(&ny), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } ny = (boxes->gridSize[1]) ;
# 514 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_9: int nz; register_stack_var("mkForceRecvCellList|nz|0", "i32", (void *)(&nz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } nz = (boxes->gridSize[2]) ;
# 515 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   switch(face)
# 516 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 517 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 0:
# 518 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=0; yBegin=0; yEnd=ny; zBegin=0; zEnd=nz;
# 519 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 520 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 1:
# 521 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=nx; xEnd=nx+1; yBegin=0; yEnd=ny; zBegin=0; zEnd=nz;
# 522 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 523 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 2:
# 524 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=-1; yEnd=0; zBegin=0; zEnd=nz;
# 525 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 526 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 3:
# 527 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=ny; yEnd=ny+1; zBegin=0; zEnd=nz;
# 528 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 529 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 4:
# 530 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=-1; yEnd=ny+1; zBegin=-1; zEnd=0;
# 531 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 532 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     case 5:
# 533 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      xBegin=-1; xEnd=nx+1; yBegin=-1; yEnd=ny+1; zBegin=nz; zEnd=nz+1;
# 534 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      break;
# 535 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     alias_group_changed(18, (size_t)(18379826249005486145UL), (size_t)(18379826249005486146UL), (size_t)(18379826249005486147UL), (size_t)(18379826249005486148UL), (size_t)(18379826249005486149UL), (size_t)(18379826249005486150UL), (size_t)(18379826249005486151UL), (size_t)(18379826249005486152UL), (size_t)(18379826249005486153UL), (size_t)(18379826249005486154UL), (size_t)(18379826249005486155UL), (size_t)(18379826249005486156UL), (size_t)(18379826249005486157UL), (size_t)(18379826249005486158UL), (size_t)(18379826249005486159UL), (size_t)(18379826249005486160UL), (size_t)(18379826249005486161UL), (size_t)(18379826249005486337UL)); default:
# 536 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      (__builtin_expect(!(1==0), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 536, "1==0") : (void)0);
# 537 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   }
# 538 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 539 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_10: int count; register_stack_var("mkForceRecvCellList|count|0", "i32", (void *)(&count), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } count = (0) ;
# 540 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_11: int ix; register_stack_var("mkForceRecvCellList|ix|0", "i32", (void *)(&ix), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } for ( ix = (xBegin) ; ix<xEnd; ++ix) {
# 541 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { lbl_12: int iy; register_stack_var("mkForceRecvCellList|iy|0", "i32", (void *)(&iy), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } for ( iy = (yBegin) ; iy<yEnd; ++iy) {
# 542 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         { lbl_13: int iz; register_stack_var("mkForceRecvCellList|iz|0", "i32", (void *)(&iz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(6): { goto call_lbl_6; } default: { chimes_error(); } } } for ( iz = (zBegin) ; iz<zEnd; ++iz) {
# 543 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
            alias_group_changed(18, (size_t)(18379826249005486145UL), (size_t)(18379826249005486146UL), (size_t)(18379826249005486147UL), (size_t)(18379826249005486148UL), (size_t)(18379826249005486149UL), (size_t)(18379826249005486150UL), (size_t)(18379826249005486151UL), (size_t)(18379826249005486152UL), (size_t)(18379826249005486153UL), (size_t)(18379826249005486154UL), (size_t)(18379826249005486155UL), (size_t)(18379826249005486156UL), (size_t)(18379826249005486157UL), (size_t)(18379826249005486158UL), (size_t)(18379826249005486159UL), (size_t)(18379826249005486160UL), (size_t)(18379826249005486161UL), (size_t)(18379826249005486337UL)); call_lbl_6: calling((void*)&getBoxFromTuple, 6, 0UL, 4, (size_t)(18379826249005486339UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); list[count++] = getBoxFromTuple(boxes, ix, iy, iz);
# 544 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         } }
# 545 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      } }
# 546 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 547 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 548 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(18, (size_t)(18379826249005486145UL), (size_t)(18379826249005486146UL), (size_t)(18379826249005486147UL), (size_t)(18379826249005486148UL), (size_t)(18379826249005486149UL), (size_t)(18379826249005486150UL), (size_t)(18379826249005486151UL), (size_t)(18379826249005486152UL), (size_t)(18379826249005486153UL), (size_t)(18379826249005486154UL), (size_t)(18379826249005486155UL), (size_t)(18379826249005486156UL), (size_t)(18379826249005486157UL), (size_t)(18379826249005486158UL), (size_t)(18379826249005486159UL), (size_t)(18379826249005486160UL), (size_t)(18379826249005486161UL), (size_t)(18379826249005486337UL)); (__builtin_expect(!(count == nCells), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 548, "count == nCells") : (void)0);
# 549 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(18, (size_t)(18379826249005486145UL), (size_t)(18379826249005486146UL), (size_t)(18379826249005486147UL), (size_t)(18379826249005486148UL), (size_t)(18379826249005486149UL), (size_t)(18379826249005486150UL), (size_t)(18379826249005486151UL), (size_t)(18379826249005486152UL), (size_t)(18379826249005486153UL), (size_t)(18379826249005486154UL), (size_t)(18379826249005486155UL), (size_t)(18379826249005486156UL), (size_t)(18379826249005486157UL), (size_t)(18379826249005486158UL), (size_t)(18379826249005486159UL), (size_t)(18379826249005486160UL), (size_t)(18379826249005486161UL), (size_t)(18379826249005486337UL)); rm_stack(true, 18379826249005486337UL); return list;
# 550 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 551 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 552 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 553 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 554 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 555 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 556 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 557 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 558 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
int loadForceBuffer(void* vparms, void* vdata, int face, char* charBuf)
# 559 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&loadForceBuffer), 4, 0, (size_t)(18379826249005485755UL), (size_t)(18379826249005485756UL), (size_t)(0UL), (size_t)(18379826249005485758UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 560 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    ForceExchangeParms *parms; parms = ((ForceExchangeParms *)vparms) ;
# 561 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    ForceExchangeData *data; data = ((ForceExchangeData *)vdata) ;
# 562 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    ForceMsg *buf; buf = ((ForceMsg *)charBuf) ;
# 563 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 564 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    int nCells; nCells = (parms->nCells[face]) ;
# 565 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    int *cellList; cellList = (parms->sendCells[face]) ;
# 566 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
    int nBuf; nBuf = (0) ;
# 567 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { int iCell; for ( iCell = (0) ; iCell<nCells; ++iCell)
# 568 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 569 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
       int iBox; iBox = (cellList[iCell]) ;
# 570 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
       int iOff; iOff = (iBox * 64) ;
# 571 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { int ii; for ( ii = (iOff) ; ii<iOff+data->boxes->nAtoms[iBox]; ++ii)
# 572 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      {
# 573 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         buf[nBuf].dfEmbed = data->dfEmbed[ii];
# 574 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         ++nBuf;
# 575 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      } }
# 576 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 577 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(15, (size_t)(18379826249005485636UL), (size_t)(18379826249005485637UL), (size_t)(18379826249005485638UL), (size_t)(18379826249005485639UL), (size_t)(18379826249005485640UL), (size_t)(18379826249005485641UL), (size_t)(18379826249005485642UL), (size_t)(18379826249005485643UL), (size_t)(18379826249005485644UL), (size_t)(18379826249005485645UL), (size_t)(18379826249005485646UL), (size_t)(18379826249005485647UL), (size_t)(18379826249005485648UL), (size_t)(18379826249005485649UL), (size_t)(18379826249005485758UL)); rm_stack(false, 0UL); return nBuf*sizeof(ForceMsg);
# 578 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}
# 579 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 580 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 581 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 582 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 583 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 584 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 585 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 586 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void unloadForceBuffer(void* vparms, void* vdata, int face, int bufSize, char* charBuf)
# 587 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&unloadForceBuffer), 5, 5, (size_t)(18379826249005485812UL), (size_t)(18379826249005485906UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005485909UL), "unloadForceBuffer|vparms|0", "i8*", (void *)(&vparms), (size_t)8, 1, 0, 0, "unloadForceBuffer|vdata|0", "i8*", (void *)(&vdata), (size_t)8, 1, 0, 0, "unloadForceBuffer|face|0", "i32", (void *)(&face), (size_t)4, 0, 0, 0, "unloadForceBuffer|bufSize|0", "i32", (void *)(&bufSize), (size_t)4, 0, 0, 0, "unloadForceBuffer|charBuf|0", "i8*", (void *)(&charBuf), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 588 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: ForceExchangeParms *parms; register_stack_var("unloadForceBuffer|parms|0", "%struct.ForceExchangeParmsSt*", (void *)(&parms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } parms = ((ForceExchangeParms *)vparms) ;
# 589 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: ForceExchangeData *data; register_stack_var("unloadForceBuffer|data|0", "%struct.ForceExchangeDataSt*", (void *)(&data), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } data = ((ForceExchangeData *)vdata) ;
# 590 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: ForceMsg *buf; register_stack_var("unloadForceBuffer|buf|0", "%struct.ForceMsgSt*", (void *)(&buf), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_3; } buf = ((ForceMsg *)charBuf) ;
# 591 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(16, (size_t)(18379826249005485759UL), (size_t)(18379826249005485760UL), (size_t)(18379826249005485761UL), (size_t)(18379826249005485762UL), (size_t)(18379826249005485763UL), (size_t)(18379826249005485764UL), (size_t)(18379826249005485765UL), (size_t)(18379826249005485766UL), (size_t)(18379826249005485767UL), (size_t)(18379826249005485768UL), (size_t)(18379826249005485769UL), (size_t)(18379826249005485770UL), (size_t)(18379826249005485771UL), (size_t)(18379826249005485772UL), (size_t)(18379826249005485773UL), (size_t)(18379826249005485873UL)); (__builtin_expect(!(bufSize % sizeof(ForceMsg) == 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 591, "bufSize % sizeof(ForceMsg) == 0") : (void)0);
# 592 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 593 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: int nCells; register_stack_var("unloadForceBuffer|nCells|0", "i32", (void *)(&nCells), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } nCells = (parms->nCells[face]) ;
# 594 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_4: int *cellList; register_stack_var("unloadForceBuffer|cellList|0", "i32*", (void *)(&cellList), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_5; } cellList = (parms->recvCells[face]) ;
# 595 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_5: int iBuf; register_stack_var("unloadForceBuffer|iBuf|0", "i32", (void *)(&iBuf), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } iBuf = (0) ;
# 596 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_6: int iCell; register_stack_var("unloadForceBuffer|iCell|0", "i32", (void *)(&iCell), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } for ( iCell = (0) ; iCell<nCells; ++iCell)
# 597 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 598 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_7: int iBox; register_stack_var("unloadForceBuffer|iBox|0", "i32", (void *)(&iBox), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } iBox = (cellList[iCell]) ;
# 599 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
        lbl_8: int iOff; register_stack_var("unloadForceBuffer|iOff|0", "i32", (void *)(&iOff), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } iOff = (iBox * 64) ;
# 600 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      { lbl_9: int ii; register_stack_var("unloadForceBuffer|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } for ( ii = (iOff) ; ii<iOff+data->boxes->nAtoms[iBox]; ++ii)
# 601 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      {
# 602 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         data->dfEmbed[ii] = buf[iBuf].dfEmbed;
# 603 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
         ++iBuf;
# 604 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      } }
# 605 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 606 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(16, (size_t)(18379826249005485759UL), (size_t)(18379826249005485760UL), (size_t)(18379826249005485761UL), (size_t)(18379826249005485762UL), (size_t)(18379826249005485763UL), (size_t)(18379826249005485764UL), (size_t)(18379826249005485765UL), (size_t)(18379826249005485766UL), (size_t)(18379826249005485767UL), (size_t)(18379826249005485768UL), (size_t)(18379826249005485769UL), (size_t)(18379826249005485770UL), (size_t)(18379826249005485771UL), (size_t)(18379826249005485772UL), (size_t)(18379826249005485773UL), (size_t)(18379826249005485873UL)); (__builtin_expect(!(iBuf == bufSize/ sizeof(ForceMsg)), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 606, "iBuf == bufSize/ sizeof(ForceMsg)") : (void)0);
# 607 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(16, (size_t)(18379826249005485759UL), (size_t)(18379826249005485760UL), (size_t)(18379826249005485761UL), (size_t)(18379826249005485762UL), (size_t)(18379826249005485763UL), (size_t)(18379826249005485764UL), (size_t)(18379826249005485765UL), (size_t)(18379826249005485766UL), (size_t)(18379826249005485767UL), (size_t)(18379826249005485768UL), (size_t)(18379826249005485769UL), (size_t)(18379826249005485770UL), (size_t)(18379826249005485771UL), (size_t)(18379826249005485772UL), (size_t)(18379826249005485773UL), (size_t)(18379826249005485873UL)); rm_stack(false, 0UL); }
# 608 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 609 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void destroyForceExchange(void* vparms)
# 610 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&destroyForceExchange), 1, 1, (size_t)(18379826249005485947UL), "destroyForceExchange|vparms|0", "i8*", (void *)(&vparms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 611 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: ForceExchangeParms *parms; register_stack_var("destroyForceExchange|parms|0", "%struct.ForceExchangeParmsSt*", (void *)(&parms), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } parms = ((ForceExchangeParms *)vparms) ;
# 612 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 613 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_1: int ii; register_stack_var("destroyForceExchange|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } for ( ii = (0) ; ii<6; ++ii)
# 614 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 615 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      free_wrapper(parms->sendCells[ii], 18379826249005485930UL);
# 616 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      free_wrapper(parms->recvCells[ii], 18379826249005485930UL);
# 617 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 618 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(3, (size_t)(18379826249005485910UL), (size_t)(18379826249005485911UL), (size_t)(18379826249005485912UL)); rm_stack(false, 0UL); }
# 628 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 628 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
void sortAtomsInCell(Atoms* atoms, LinkCell* boxes, int iBox)
# 629 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&sortAtomsInCell), 3, 3, (size_t)(18379826249005486840UL), (size_t)(18379826249005486841UL), (size_t)(0UL), "sortAtomsInCell|atoms|0", "%struct.AtomsSt*", (void *)(&atoms), (size_t)8, 1, 0, 0, "sortAtomsInCell|boxes|0", "%struct.LinkCellSt*", (void *)(&boxes), (size_t)8, 1, 0, 0, "sortAtomsInCell|iBox|0", "i32", (void *)(&iBox), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 630 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: int nAtoms; register_stack_var("sortAtomsInCell|nAtoms|0", "i32", (void *)(&nAtoms), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } nAtoms = (boxes->nAtoms[iBox]) ;
# 631 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 632 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: AtomMsg tmp[nAtoms]; register_stack_var("sortAtomsInCell|tmp|0", "%struct.AtomMsgSt = type { i32, i32, double, double, double, double, double, double }", (void *)(&tmp), (size_t)56, 0, 1, 0); if (____chimes_replaying) { goto lbl_2; } ;
# 633 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 634 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_2: int begin; register_stack_var("sortAtomsInCell|begin|0", "i32", (void *)(&begin), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } begin = (iBox * 64) ;
# 635 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_3: int end; register_stack_var("sortAtomsInCell|end|0", "i32", (void *)(&end), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } end = (begin + nAtoms) ;
# 636 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_4: int ii; register_stack_var("sortAtomsInCell|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: int iTmp; register_stack_var("sortAtomsInCell|iTmp|0", "i32", (void *)(&iTmp), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } for ( ii = (begin) , iTmp = (0) ; ii<end; ++ii, ++iTmp)
# 637 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 638 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].gid = atoms->gid[ii];
# 639 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].type = atoms->iSpecies[ii];
# 640 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].rx = atoms->r[ii][0];
# 641 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].ry = atoms->r[ii][1];
# 642 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].rz = atoms->r[ii][2];
# 643 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].px = atoms->p[ii][0];
# 644 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].py = atoms->p[ii][1];
# 645 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      tmp[iTmp].pz = atoms->p[ii][2];
# 646 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 647 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(10, (size_t)(18379826249005486552UL), (size_t)(18379826249005486553UL), (size_t)(18379826249005486554UL), (size_t)(18379826249005486555UL), (size_t)(18379826249005486556UL), (size_t)(18379826249005486557UL), (size_t)(18379826249005486558UL), (size_t)(18379826249005486559UL), (size_t)(18379826249005486560UL), (size_t)(18379826249005486582UL)); call_lbl_2: calling((void*)&qsort, 2, 0UL, 4, (size_t)(18379826249005486582UL), (size_t)(0UL), (size_t)(0UL), (size_t)(18379826249005486938UL)); qsort(&tmp, nAtoms, sizeof(AtomMsg), sortAtomsById);
# 648 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   { lbl_6: int ii; register_stack_var("sortAtomsInCell|ii|1", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } lbl_7: int iTmp; register_stack_var("sortAtomsInCell|iTmp|1", "i32", (void *)(&iTmp), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } for ( ii = (begin) , iTmp = (0) ; ii<end; ++ii, ++iTmp)
# 649 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   {
# 650 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->gid[ii] = tmp[iTmp].gid;
# 651 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->iSpecies[ii] = tmp[iTmp].type;
# 652 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->r[ii][0] = tmp[iTmp].rx;
# 653 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->r[ii][1] = tmp[iTmp].ry;
# 654 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->r[ii][2] = tmp[iTmp].rz;
# 655 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->p[ii][0] = tmp[iTmp].px;
# 656 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->p[ii][1] = tmp[iTmp].py;
# 657 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
      atoms->p[ii][2] = tmp[iTmp].pz;
# 658 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   } }
# 659 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 660 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
alias_group_changed(3, (size_t)(18379826249005486561UL), (size_t)(18379826249005486562UL), (size_t)(18379826249005486607UL)); rm_stack(false, 0UL); }
# 661 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 662 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 663 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 664 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 665 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 666 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 667 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
int sortAtomsById(const void* a, const void* b)
# 668 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
{new_stack((void *)(&sortAtomsById), 2, 2, (size_t)(18379826249005486890UL), (size_t)(18379826249005486891UL), "sortAtomsById|a|0", "i8*", (void *)(&a), (size_t)8, 1, 0, 0, "sortAtomsById|b|0", "i8*", (void *)(&b), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 669 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_0: int aId; register_stack_var("sortAtomsById|aId|0", "i32", (void *)(&aId), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } aId = (((AtomMsg *)a)->gid) ;
# 670 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
     lbl_1: int bId; register_stack_var("sortAtomsById|bId|0", "i32", (void *)(&bId), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } bId = (((AtomMsg *)b)->gid) ;
# 671 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(4, (size_t)(18379826249005486848UL), (size_t)(18379826249005486849UL), (size_t)(18379826249005486850UL), (size_t)(18379826249005486851UL)); (__builtin_expect(!(aId != bId), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c", 671, "aId != bId") : (void)0);
# 672 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
# 673 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   if (aId < bId) {alias_group_changed(5, (size_t)(18379826249005486847UL), (size_t)(18379826249005486848UL), (size_t)(18379826249005486849UL), (size_t)(18379826249005486850UL), (size_t)(18379826249005486851UL)); rm_stack(false, 0UL); return -1;; };
# 675 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
   alias_group_changed(5, (size_t)(18379826249005486847UL), (size_t)(18379826249005486848UL), (size_t)(18379826249005486849UL), (size_t)(18379826249005486850UL), (size_t)(18379826249005486851UL)); rm_stack(false, 0UL); return 1;
# 676 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.c"
}


static int module_init() {
    init_module(18379826249005484375UL, 85, 17, 18379826249005484375UL + 882UL, 18379826249005484375UL + 865UL, 18379826249005484375UL + 1269UL, 18379826249005484375UL + 1309UL, 18379826249005484375UL + 2474UL, 18379826249005484375UL + 2516UL, 18379826249005484375UL + 887UL, 18379826249005484375UL + 1045UL, 18379826249005484375UL + 2465UL, 18379826249005484375UL + 2232UL, 18379826249005484375UL + 884UL, 18379826249005484375UL + 1047UL, 18379826249005484375UL + 2018UL, 18379826249005484375UL + 2124UL, 18379826249005484375UL + 1262UL, 18379826249005484375UL + 1381UL, 18379826249005484375UL + 1261UL, 18379826249005484375UL + 1380UL, 18379826249005484375UL + 1536UL, 18379826249005484375UL + 1572UL, 18379826249005484375UL + 1267UL, 18379826249005484375UL + 1383UL, 18379826249005484375UL + 1266UL, 18379826249005484375UL + 1381UL, 18379826249005484375UL + 1265UL, 18379826249005484375UL + 1380UL, 18379826249005484375UL + 1052UL, 18379826249005484375UL + 1138UL, 18379826249005484375UL + 404UL, 18379826249005484375UL + 439UL, 18379826249005484375UL + 88UL, 18379826249005484375UL + 2565UL, 18379826249005484375UL + 397UL, 18379826249005484375UL + 685UL, 18379826249005484375UL + 2124UL, 18379826249005484375UL + 2145UL, 18379826249005484375UL + 2473UL, 18379826249005484375UL + 2515UL, 18379826249005484375UL + 398UL, 18379826249005484375UL + 686UL, 18379826249005484375UL + 2025UL, 18379826249005484375UL + 2133UL, 18379826249005484375UL + 1050UL, 18379826249005484375UL + 1259UL, 18379826249005484375UL + 1UL, 18379826249005484375UL + 343UL, 18379826249005484375UL + 690UL, 18379826249005484375UL + 841UL, 18379826249005484375UL + 696UL, 18379826249005484375UL + 844UL, 18379826249005484375UL + 1573UL, 18379826249005484375UL + 1767UL, 18379826249005484375UL + 694UL, 18379826249005484375UL + 840UL, 18379826249005484375UL + 695UL, 18379826249005484375UL + 841UL, 18379826249005484375UL + 1967UL, 18379826249005484375UL + 1991UL, 18379826249005484375UL + 2565UL, 18379826249005484375UL + 190UL, 18379826249005484375UL + 2026UL, 18379826249005484375UL + 2123UL, 18379826249005484375UL + 2568UL, 18379826249005484375UL + 1225UL, 18379826249005484375UL + 407UL, 18379826249005484375UL + 439UL, 18379826249005484375UL + 2177UL, 18379826249005484375UL + 2465UL, 18379826249005484375UL + 3UL, 18379826249005484375UL + 88UL, 18379826249005484375UL + 347UL, 18379826249005484375UL + 396UL, 18379826249005484375UL + 403UL, 18379826249005484375UL + 688UL, 18379826249005484375UL + 402UL, 18379826249005484375UL + 686UL, 18379826249005484375UL + 401UL, 18379826249005484375UL + 685UL, 18379826249005484375UL + 400UL, 18379826249005484375UL + 688UL, 18379826249005484375UL + 8UL, 18379826249005484375UL + 2565UL, 18379826249005484375UL + 2178UL, 18379826249005484375UL + 2466UL, 18379826249005484375UL + 1437UL, 18379826249005484375UL + 1448UL, 18379826249005484375UL + 348UL, 18379826249005484375UL + 352UL, 18379826249005484375UL + 1391UL, 18379826249005484375UL + 1534UL, 18379826249005484375UL + 1390UL, 18379826249005484375UL + 1531UL, 18379826249005484375UL + 1388UL, 18379826249005484375UL + 1534UL, 18379826249005484375UL + 2466UL, 18379826249005484375UL + 2199UL, 18379826249005484375UL + 1138UL, 18379826249005484375UL + 2568UL, 18379826249005484375UL + 2019UL, 18379826249005484375UL + 2149UL, 18379826249005484375UL + 693UL, 18379826249005484375UL + 844UL, 18379826249005484375UL + 1353UL, 18379826249005484375UL + 1343UL, 18379826249005484375UL + 1993UL, 18379826249005484375UL + 2016UL, 18379826249005484375UL + 447UL, 18379826249005484375UL + 538UL, 18379826249005484375UL + 845UL, 18379826249005484375UL + 882UL, 18379826249005484375UL + 1384UL, 18379826249005484375UL + 1437UL, 18379826249005484375UL + 2181UL, 18379826249005484375UL + 2205UL, 18379826249005484375UL + 1572UL, 18379826249005484375UL + 1555UL, 18379826249005484375UL + 1498UL, 18379826249005484375UL + 1482UL, 18379826249005484375UL + 2UL, 18379826249005484375UL + 104UL, 18379826249005484375UL + 1264UL, 18379826249005484375UL + 1383UL, 18379826249005484375UL + 1770UL, 18379826249005484375UL + 1964UL, 18379826249005484375UL + 1991UL, 18379826249005484375UL + 1971UL, 18379826249005484375UL + 846UL, 18379826249005484375UL + 882UL, 18379826249005484375UL + 13UL, 18379826249005484375UL + 343UL, 18379826249005484375UL + 12UL, 18379826249005484375UL + 343UL, 18379826249005484375UL + 1773UL, 18379826249005484375UL + 1962UL, 18379826249005484375UL + 841UL, 18379826249005484375UL + 821UL, 18379826249005484375UL + 1994UL, 18379826249005484375UL + 2017UL, 18379826249005484375UL + 1393UL, 18379826249005484375UL + 1448UL, 18379826249005484375UL + 1057UL, 18379826249005484375UL + 2568UL, 18379826249005484375UL + 1971UL, 18379826249005484375UL + 1973UL, 18379826249005484375UL + 1576UL, 18379826249005484375UL + 1765UL, 18379826249005484375UL + 2024UL, 18379826249005484375UL + 2130UL, 18379826249005484375UL + 1051UL, 18379826249005484375UL + 1145UL, 18379826249005484375UL + 1535UL, 18379826249005484375UL + 1572UL, 18379826249005484375UL + 689UL, 18379826249005484375UL + 840UL, 18379826249005484375UL + 1389UL, 18379826249005484375UL + 1437UL, 18379826249005484375UL + 1531UL, 18379826249005484375UL + 1498UL, 18379826249005484375UL + 2023UL, 18379826249005484375UL + 2120UL, 18379826249005484375UL + 685UL, 18379826249005484375UL + 439UL, 18379826249005484375UL + 1385UL, 18379826249005484375UL + 1531UL, 18379826249005484375UL + 686UL, 18379826249005484375UL + 447UL, 18379826249005484375UL + 1380UL, 18379826249005484375UL + 1309UL, 18379826249005484375UL + 1381UL, 18379826249005484375UL + 1353UL, "AtomExchangeParmsSt", 3, (int)__builtin_offsetof (struct AtomExchangeParmsSt, nCells), (int)__builtin_offsetof (struct AtomExchangeParmsSt, cellList), (int)__builtin_offsetof (struct AtomExchangeParmsSt, pbcFactor), "AtomMsgSt", 8, (int)__builtin_offsetof (struct AtomMsgSt, gid), (int)__builtin_offsetof (struct AtomMsgSt, type), (int)__builtin_offsetof (struct AtomMsgSt, rx), (int)__builtin_offsetof (struct AtomMsgSt, ry), (int)__builtin_offsetof (struct AtomMsgSt, rz), (int)__builtin_offsetof (struct AtomMsgSt, px), (int)__builtin_offsetof (struct AtomMsgSt, py), (int)__builtin_offsetof (struct AtomMsgSt, pz), "AtomsSt", 8, (int)__builtin_offsetof (struct AtomsSt, nLocal), (int)__builtin_offsetof (struct AtomsSt, nGlobal), (int)__builtin_offsetof (struct AtomsSt, gid), (int)__builtin_offsetof (struct AtomsSt, iSpecies), (int)__builtin_offsetof (struct AtomsSt, r), (int)__builtin_offsetof (struct AtomsSt, p), (int)__builtin_offsetof (struct AtomsSt, f), (int)__builtin_offsetof (struct AtomsSt, U), "BasePotentialSt", 9, (int)__builtin_offsetof (struct BasePotentialSt, cutoff), (int)__builtin_offsetof (struct BasePotentialSt, mass), (int)__builtin_offsetof (struct BasePotentialSt, lat), (int)__builtin_offsetof (struct BasePotentialSt, latticeType), (int)__builtin_offsetof (struct BasePotentialSt, name), (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), (int)__builtin_offsetof (struct BasePotentialSt, force), (int)__builtin_offsetof (struct BasePotentialSt, print), (int)__builtin_offsetof (struct BasePotentialSt, destroy), "DomainSt", 8, (int)__builtin_offsetof (struct DomainSt, procGrid), (int)__builtin_offsetof (struct DomainSt, procCoord), (int)__builtin_offsetof (struct DomainSt, globalMin), (int)__builtin_offsetof (struct DomainSt, globalMax), (int)__builtin_offsetof (struct DomainSt, globalExtent), (int)__builtin_offsetof (struct DomainSt, localMin), (int)__builtin_offsetof (struct DomainSt, localMax), (int)__builtin_offsetof (struct DomainSt, localExtent), "ForceExchangeDataSt", 2, (int)__builtin_offsetof (struct ForceExchangeDataSt, dfEmbed), (int)__builtin_offsetof (struct ForceExchangeDataSt, boxes), "ForceExchangeParmsSt", 3, (int)__builtin_offsetof (struct ForceExchangeParmsSt, nCells), (int)__builtin_offsetof (struct ForceExchangeParmsSt, sendCells), (int)__builtin_offsetof (struct ForceExchangeParmsSt, recvCells), "ForceMsgSt", 1, (int)__builtin_offsetof (struct ForceMsgSt, dfEmbed), "HaloAxisOrder", 0, "HaloExchangeSt", 6, (int)__builtin_offsetof (struct HaloExchangeSt, nbrRank), (int)__builtin_offsetof (struct HaloExchangeSt, bufCapacity), (int)__builtin_offsetof (struct HaloExchangeSt, loadBuffer), (int)__builtin_offsetof (struct HaloExchangeSt, unloadBuffer), (int)__builtin_offsetof (struct HaloExchangeSt, destroy), (int)__builtin_offsetof (struct HaloExchangeSt, parms), "LinkCellSt", 10, (int)__builtin_offsetof (struct LinkCellSt, gridSize), (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), (int)__builtin_offsetof (struct LinkCellSt, localMin), (int)__builtin_offsetof (struct LinkCellSt, localMax), (int)__builtin_offsetof (struct LinkCellSt, boxSize), (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), (int)__builtin_offsetof (struct LinkCellSt, nAtoms), (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes), "SimFlatSt", 11, (int)__builtin_offsetof (struct SimFlatSt, nSteps), (int)__builtin_offsetof (struct SimFlatSt, printRate), (int)__builtin_offsetof (struct SimFlatSt, dt), (int)__builtin_offsetof (struct SimFlatSt, domain), (int)__builtin_offsetof (struct SimFlatSt, boxes), (int)__builtin_offsetof (struct SimFlatSt, atoms), (int)__builtin_offsetof (struct SimFlatSt, species), (int)__builtin_offsetof (struct SimFlatSt, ePotential), (int)__builtin_offsetof (struct SimFlatSt, eKinetic), (int)__builtin_offsetof (struct SimFlatSt, pot), (int)__builtin_offsetof (struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, (int)__builtin_offsetof (struct SpeciesDataSt, name), (int)__builtin_offsetof (struct SpeciesDataSt, atomicNo), (int)__builtin_offsetof (struct SpeciesDataSt, mass), "TimerHandle", 0, "__sFILE", 20, (int)__builtin_offsetof (struct __sFILE, _p), (int)__builtin_offsetof (struct __sFILE, _r), (int)__builtin_offsetof (struct __sFILE, _w), (int)__builtin_offsetof (struct __sFILE, _flags), (int)__builtin_offsetof (struct __sFILE, _file), (int)__builtin_offsetof (struct __sFILE, _bf), (int)__builtin_offsetof (struct __sFILE, _lbfsize), (int)__builtin_offsetof (struct __sFILE, _cookie), (int)__builtin_offsetof (struct __sFILE, _close), (int)__builtin_offsetof (struct __sFILE, _read), (int)__builtin_offsetof (struct __sFILE, _seek), (int)__builtin_offsetof (struct __sFILE, _write), (int)__builtin_offsetof (struct __sFILE, _ub), (int)__builtin_offsetof (struct __sFILE, _extra), (int)__builtin_offsetof (struct __sFILE, _ur), (int)__builtin_offsetof (struct __sFILE, _ubuf), (int)__builtin_offsetof (struct __sFILE, _nbuf), (int)__builtin_offsetof (struct __sFILE, _lb), (int)__builtin_offsetof (struct __sFILE, _blksize), (int)__builtin_offsetof (struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, (int)__builtin_offsetof (struct __sbuf, _base), (int)__builtin_offsetof (struct __sbuf, _size));
    return 0;
}

static int __libchimes_module_init = module_init();