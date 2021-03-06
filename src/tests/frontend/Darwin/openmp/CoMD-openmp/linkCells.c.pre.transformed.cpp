# 1 "linkCells.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "linkCells.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_initLinkCells_npm = 1;
static int ____chimes_does_checkpoint_destroyLinkCells_npm = 1;
static int ____chimes_does_checkpoint_getNeighborBoxes_npm = 1;
static int ____chimes_does_checkpoint_putAtomInBox_npm = 1;
static int ____chimes_does_checkpoint_getBoxFromTuple_npm = 1;
static int ____chimes_does_checkpoint_moveAtom_npm = 1;
static int ____chimes_does_checkpoint_updateLinkCells_npm = 1;
static int ____chimes_does_checkpoint_maxOccupancy_npm = 1;
static int ____chimes_does_checkpoint_copyAtom_npm = 1;
static int ____chimes_does_checkpoint_getBoxFromCoord_npm = 1;
static int ____chimes_does_checkpoint_emptyHaloCells_npm = 1;
static int ____chimes_does_checkpoint_getTuple_npm = 1;
static int ____chimes_does_checkpoint_maxIntParallel_npm = 1;
static int ____chimes_does_checkpoint_profileStart_npm = 1;
static int ____chimes_does_checkpoint_profileStop_npm = 1;

static int ____must_checkpoint_getNeighborBoxes_ix_0 = 2;
static int ____must_checkpoint_putAtomInBox_xyz_0 = 2;
static int ____must_checkpoint_maxOccupancy_localMax_0 = 2;

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
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/chimes/src/libchimes/libchimes.h" 2


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
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
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
# 67 "/Users/jmg3/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 62 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
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
# 63 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.h" 1






# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 8 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.h" 2




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
# 64 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 64 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"

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
# 66 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
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
# 67 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 68 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
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
# 69 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 69 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"

# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h"
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
# 71 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.h" 1
# 10 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/decomposition.h"
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
# 72 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1
# 9 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
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
# 57 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 73 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 1
# 9 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
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
# 10 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2


# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 1
# 9 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/initAtoms.h"
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
# 13 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
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
# 74 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c" 2
# 74 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 75 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 76 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 77 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 78 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
# 79 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static int getBoxFromCoord(LinkCell* boxes, real_t rr[3]);
# 80 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static void emptyHaloCells(LinkCell* boxes);
# 81 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
static void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
# 82 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 83 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
LinkCell* initLinkCells_npm(const Domain* domain, real_t cutoff);int getNeighborBoxes_npm(LinkCell* boxes, int iBox, int* nbrBoxes);
LinkCell* initLinkCells_quick(const Domain* domain, real_t cutoff); LinkCell* initLinkCells(const Domain* domain, real_t cutoff);int getNeighborBoxes_quick(LinkCell* boxes, int iBox, int* nbrBoxes); int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes);
LinkCell* initLinkCells_resumable(const Domain* domain, real_t cutoff)
# 84 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initLinkCells), "initLinkCells", &____must_manage_initLinkCells, 2, 0, (size_t)(7636406165860813865UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 85 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(domain), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 85, "domain") : (void)0);
# 86 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell *ll; ll = ((LinkCell *)malloc_wrapper(sizeof(LinkCell), 7636406165860813602UL, 0, 1, (int)sizeof(struct LinkCellSt), 2, (int)__builtin_offsetof(struct LinkCellSt, nAtoms), (int)__builtin_offsetof(struct LinkCellSt, nbrBoxes))) ;
# 87 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 88 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 89 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 90 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 96 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 97 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 99 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 103 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 105 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nAtoms = (int*)malloc_wrapper(ll->nTotalBoxes*sizeof(int), 7636406165860813809UL, 0, 0);
# 106 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; } };
# 108 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 109 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 109, "(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)") : (void)0);
# 110 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 111 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 112 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nbrBoxes = (int**)malloc_wrapper(ll->nTotalBoxes*sizeof(int*), 7636406165860813809UL, 1, 0);
# 113 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nTotalBoxes; ++iBox)
# 114 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 115 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->nbrBoxes[iBox] = (int*)malloc_wrapper(27*sizeof(int), 7636406165860813855UL, 0, 0);
# 116 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 117 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 118 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nLocalBoxes; ++iBox)
# 119 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 120 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int nNbrBoxes; nNbrBoxes = (({ calling_npm("getNeighborBoxes", 0); getNeighborBoxes_npm(ll, iBox, ll->nbrBoxes[iBox]); })) ;
# 121 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 122 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 123 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(true, 7636406165860813602UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_1, ____chimes_did_disable0); return ll;
# 124 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 125 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 126 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void destroyLinkCells_npm(LinkCell** boxes);
void destroyLinkCells_quick(LinkCell** boxes); void destroyLinkCells(LinkCell** boxes);
void destroyLinkCells_resumable(LinkCell** boxes)
# 127 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&destroyLinkCells), "destroyLinkCells", &____must_manage_destroyLinkCells, 1, 0, (size_t)(7636406165860813988UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 128 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1); return; };
# 129 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! *boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1); return; };
# 130 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 131 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   free_wrapper((*boxes)->nAtoms, 7636406165860813977UL);
# 132 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   free_wrapper(*boxes, 7636406165860813970UL);
# 133 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *boxes = __null;
# 134 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 135 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1); return;
# 136 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 137 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 138 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 139 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 140 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 141 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 142 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 143 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 144 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromTuple_npm(LinkCell* boxes, int ix, int iy, int iz);void getTuple_npm(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
int getBoxFromTuple_quick(LinkCell* boxes, int ix, int iy, int iz); int getBoxFromTuple(LinkCell* boxes, int ix, int iy, int iz);void getTuple_quick(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp); void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp);
int getNeighborBoxes_resumable(LinkCell* boxes, int iBox, int* nbrBoxes)
# 145 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getNeighborBoxes), "getNeighborBoxes", &____must_manage_getNeighborBoxes, 3, 0, (size_t)(7636406165860813959UL), (size_t)(0UL), (size_t)(7636406165860813961UL)) ; int ix;
 if (____must_checkpoint_getNeighborBoxes_ix_0) { register_stack_vars(1, "getNeighborBoxes|ix|0", &____must_checkpoint_getNeighborBoxes_ix_0, "i32", (void *)(&ix), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 146 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; int iz; ;
# 147 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ({ calling_npm("getTuple", 0); getTuple_npm(boxes, iBox, &ix, &iy, &iz); });
# 148 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 149 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int count; count = (0) ;
# 150 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (ix - 1) ; i<=ix+1; i++) {
# 151 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      { int j; for ( j = (iy - 1) ; j<=iy+1; j++) {
# 152 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         { int k; for ( k = (iz - 1) ; k<=iz+1; k++) {
# 153 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            nbrBoxes[count++] = ({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, i, j, k); });
# 154 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         } }
# 155 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      } }
# 156 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 157 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 158 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_2, ____chimes_did_disable2); return count;
# 159 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 172 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 172 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void putAtomInBox_npm(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz);int getBoxFromCoord_npm(LinkCell* boxes, real_t rr[3]);
void putAtomInBox_quick(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz); void putAtomInBox(LinkCell* boxes, Atoms* atoms, const int gid, const int iType, const real_t x, const real_t y, const real_t z, const real_t px, const real_t py, const real_t pz);int getBoxFromCoord_quick(LinkCell* boxes, real_t rr[3]); int getBoxFromCoord(LinkCell* boxes, real_t rr[3]);
void putAtomInBox_resumable(LinkCell* boxes, Atoms* atoms,
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 176 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&putAtomInBox), "putAtomInBox", &____must_manage_putAtomInBox, 10, 0, (size_t)(7636406165860814700UL), (size_t)(7636406165860814701UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; real_t xyz[3];
 if (____must_checkpoint_putAtomInBox_xyz_0) { register_stack_vars(1, "putAtomInBox|xyz|0", &____must_checkpoint_putAtomInBox_xyz_0, "[3 x double]", (void *)(xyz), (size_t)24, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 177 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 178 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 179 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 180 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; iBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, xyz); })) ;
# 181 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (iBox * 64) ;
# 182 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 183 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 184 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 185 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 187 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]++;
# 188 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[iOff] = gid;
# 189 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 190 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 191 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][0] = x;
# 192 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][1] = y;
# 193 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][2] = z;
# 194 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 195 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][0] = px;
# 196 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][1] = py;
# 197 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][2] = pz;
# 198 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "putAtomInBox", &____must_manage_putAtomInBox, ____alias_loc_id_6, ____chimes_did_disable3); }
# 199 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 200 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 201 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 202 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 203 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 204 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 205 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 206 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromTuple_resumable(LinkCell* boxes, int ix, int iy, int iz)
# 207 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&getBoxFromTuple), "getBoxFromTuple", &____must_manage_getBoxFromTuple, 4, 0, (size_t)(7636406165860814527UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 208 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; iBox = (0) ;
# 209 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 210 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 211 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 212 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iz == gridSize[2]) {{
# 214 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 215 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 216 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iz == -1) {{
# 220 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 221 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 222 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 226 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 227 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 228 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == -1) {{
# 232 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 233 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 237 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 238 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == -1)
# 241 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 242 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 243 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 244 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 245 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 246 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 247 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 248 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 249 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(iBox >= 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 249, "iBox >= 0") : (void)0);
# 250 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(iBox < boxes->nTotalBoxes), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 250, "iBox < boxes->nTotalBoxes") : (void)0);
# 251 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 252 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_5, ____chimes_did_disable4); return iBox;
# 253 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 254 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 255 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 256 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 257 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 258 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 259 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void moveAtom_npm(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox);void copyAtom_npm(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
void moveAtom_quick(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox); void moveAtom(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox);void copyAtom_quick(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox); void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox);
void moveAtom_resumable(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 260 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&moveAtom), "moveAtom", &____must_manage_moveAtom, 5, 0, (size_t)(7636406165860814936UL), (size_t)(7636406165860814977UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 261 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int nj; nj = (boxes->nAtoms[jBox]) ;
# 262 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox); });
# 263 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[jBox]++;
# 264 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 265 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(boxes->nAtoms[jBox] < 64), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 265, "boxes->nAtoms[jBox] < MAXATOMS") : (void)0);
# 266 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 267 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]--;
# 268 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ni; ni = (boxes->nAtoms[iBox]) ;
# 269 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (ni) {({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); }); };
# 270 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 271 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 273 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 274 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "moveAtom", &____must_manage_moveAtom, ____alias_loc_id_8, ____chimes_did_disable5); return;
# 275 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 290 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 290 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void updateLinkCells_npm(LinkCell* boxes, Atoms* atoms);void emptyHaloCells_npm(LinkCell* boxes);
void updateLinkCells_quick(LinkCell* boxes, Atoms* atoms); void updateLinkCells(LinkCell* boxes, Atoms* atoms);void emptyHaloCells_quick(LinkCell* boxes); void emptyHaloCells(LinkCell* boxes);
void updateLinkCells_resumable(LinkCell* boxes, Atoms* atoms)
# 291 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&updateLinkCells), "updateLinkCells", &____must_manage_updateLinkCells, 2, 0, (size_t)(7636406165860815181UL), (size_t)(7636406165860815182UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 292 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ({ calling_npm("emptyHaloCells", 0); emptyHaloCells_npm(boxes); });
# 293 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 294 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<boxes->nLocalBoxes; ++iBox)
# 295 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 296 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int iOff; iOff = (iBox * 64) ;
# 297 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int ii; ii = (0) ;
# 298 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 299 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 300 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
          int jBox; jBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, atoms->r[iOff + ii]); })) ;
# 301 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (jBox != iBox) {({ calling_npm("moveAtom", 0); moveAtom_npm(boxes, atoms, ii, iBox, jBox); }); } else {++ii; } ;
# 305 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 306 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 307 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "updateLinkCells", &____must_manage_updateLinkCells, ____alias_loc_id_10, ____chimes_did_disable6); }
# 308 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 309 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 310 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int maxOccupancy_npm(LinkCell* boxes);static void (*____chimes_extern_func_maxIntParallel)(int *, int *, int) = maxIntParallel;static void (*____chimes_extern_func_profileStart)(enum TimerHandle) = profileStart;static void (*____chimes_extern_func_profileStop)(enum TimerHandle) = profileStop;
int maxOccupancy_quick(LinkCell* boxes); int maxOccupancy(LinkCell* boxes);
int maxOccupancy_resumable(LinkCell* boxes)
# 311 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&maxOccupancy), "maxOccupancy", &____must_manage_maxOccupancy, 1, 0, (size_t)(7636406165860815244UL)) ; int localMax;
 if (____must_checkpoint_maxOccupancy_localMax_0) { register_stack_vars(1, "maxOccupancy|localMax|0", &____must_checkpoint_maxOccupancy_localMax_0, "i32", (void *)(&localMax), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } default: { chimes_error(); } } } ; ;
# 312 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      localMax = (0) ;
# 313 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (0) ;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); } };
# 315 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 316 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int globalMax; ;
# 317 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 318 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_1: ({ calling((void*)profileStart, 1, ____alias_loc_id_0, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 319 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_2: ({ calling((void*)maxIntParallel, 2, 0, 0UL, 3, (size_t)(7636406165860815214UL), (size_t)(7636406165860815216UL), (size_t)(0UL)); (maxIntParallel)(&localMax, &globalMax, 1); }) ;
# 320 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_3: ({ calling((void*)profileStop, 3, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 321 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 322 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, 0, ____chimes_did_disable7); return globalMax;
# 323 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 324 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 325 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 326 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 327 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 328 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void copyAtom_resumable(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 329 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&copyAtom), "copyAtom", &____must_manage_copyAtom, 6, 0, (size_t)(7636406165860815102UL), (size_t)(7636406165860815103UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 330 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (64 * iBox + iAtom) ;
# 331 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int jOff; jOff = (64 * jBox + jAtom) ;
# 332 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 333 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 334 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 335 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 336 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 337 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 338 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "copyAtom", &____must_manage_copyAtom, ____alias_loc_id_9, ____chimes_did_disable8); }
# 350 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 350 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
int getBoxFromCoord_resumable(LinkCell* boxes, real_t rr[3])
# 351 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&getBoxFromCoord), "getBoxFromCoord", &____must_manage_getBoxFromCoord, 2, 0, (size_t)(7636406165860814873UL), (size_t)(7636406165860814874UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 352 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMin; localMin = (boxes->localMin) ;
# 353 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMax; localMax = (boxes->localMax) ;
# 354 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 355 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ix; ix = ((int)(floor((rr[0] - localMin[0]) * boxes->invBoxSize[0]))) ;
# 356 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; iy = ((int)(floor((rr[1] - localMin[1]) * boxes->invBoxSize[1]))) ;
# 357 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iz; iz = ((int)(floor((rr[2] - localMin[2]) * boxes->invBoxSize[2]))) ;
# 358 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 359 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 360 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 361 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 362 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 364 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 365 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 368 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 370 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 371 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 374 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 376 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 377 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 380 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 381 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int result; result = (({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, ix, iy, iz); })) ;
# 382 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_7, ____chimes_did_disable9); return result;
# 383 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}
# 384 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 385 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 386 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void emptyHaloCells_resumable(LinkCell* boxes)
# 387 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&emptyHaloCells), "emptyHaloCells", &____must_manage_emptyHaloCells, 1, 0, (size_t)(7636406165860815212UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 388 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (boxes->nLocalBoxes) ;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; } };
# 390 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "emptyHaloCells", &____must_manage_emptyHaloCells, ____alias_loc_id_11, ____chimes_did_disable10); }
# 400 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 400 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
void getTuple_resumable(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 401 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&getTuple), "getTuple", &____must_manage_getTuple, 5, 0, (size_t)(7636406165860814267UL), (size_t)(0UL), (size_t)(7636406165860814269UL), (size_t)(7636406165860814270UL), (size_t)(7636406165860814271UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 402 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix; int iy; int iz; ;
# 403 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 404 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 405 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 406 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 407 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 408 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix = iBox % gridSize[0];
# 409 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox /= gridSize[0];
# 410 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy = iBox % gridSize[1];
# 411 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz = iBox / gridSize[1];
# 412 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 413 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 414 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 415 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 416 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ink; ;
# 417 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 418 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 420 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 421 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 422 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = 0;
# 423 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 424 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 425 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 426 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 427 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = gridSize[0] + 1;
# 428 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 429 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 430 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 431 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 433 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 434 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 435 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 436 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 437 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = 0;
# 438 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 439 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 440 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 441 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 442 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = gridSize[1] + 1;
# 443 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 444 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 445 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 446 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 447 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      else
# 448 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 449 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 450 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 451 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 452 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = 0;
# 453 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 454 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 455 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 456 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 457 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = gridSize[2] + 1;
# 458 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 459 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 460 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 461 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 462 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 463 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 464 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix--;
# 465 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy--;
# 466 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz--;
# 467 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 468 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 469 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *ixp = ix;
# 470 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *iyp = iy;
# 471 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *izp = iz;
# 472 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getTuple", &____must_manage_getTuple, ____alias_loc_id_4, ____chimes_did_disable11); }
LinkCell* initLinkCells_quick(const Domain* domain, real_t cutoff)
# 84 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&initLinkCells), "initLinkCells", &____must_manage_initLinkCells, 2, 0, (size_t)(7636406165860813865UL), (size_t)(0UL)) ; ; ;
# 85 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(domain), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 85, "domain") : (void)0);
# 86 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    LinkCell *ll; ll = ((LinkCell *)malloc_wrapper(sizeof(LinkCell), 7636406165860813602UL, 0, 1, (int)sizeof(struct LinkCellSt), 2, (int)__builtin_offsetof(struct LinkCellSt, nAtoms), (int)__builtin_offsetof(struct LinkCellSt, nbrBoxes))) ;
# 87 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 88 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (0) ; i < 3; i++)
# 89 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 90 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 96 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 97 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 99 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 103 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 105 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nAtoms = (int*)malloc_wrapper(ll->nTotalBoxes*sizeof(int), 7636406165860813809UL, 0, 0);
# 106 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; } };
# 108 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 109 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 109, "(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)") : (void)0);
# 110 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 111 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 112 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nbrBoxes = (int**)malloc_wrapper(ll->nTotalBoxes*sizeof(int*), 7636406165860813809UL, 1, 0);
# 113 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nTotalBoxes; ++iBox)
# 114 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 115 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->nbrBoxes[iBox] = (int*)malloc_wrapper(27*sizeof(int), 7636406165860813855UL, 0, 0);
# 116 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 117 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 118 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<ll->nLocalBoxes; ++iBox)
# 119 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 120 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int nNbrBoxes; nNbrBoxes = (({ calling_npm("getNeighborBoxes", 0); getNeighborBoxes_npm(ll, iBox, ll->nbrBoxes[iBox]); })) ;
# 121 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 122 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 123 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(true, 7636406165860813602UL, "initLinkCells", &____must_manage_initLinkCells, ____alias_loc_id_1, ____chimes_did_disable0); return ll;
# 124 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

LinkCell* initLinkCells(const Domain* domain, real_t cutoff) { return (____chimes_replaying ? initLinkCells_resumable(domain, cutoff) : initLinkCells_quick(domain, cutoff)); }

void destroyLinkCells_quick(LinkCell** boxes)
# 127 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&destroyLinkCells), "destroyLinkCells", &____must_manage_destroyLinkCells, 1, 0, (size_t)(7636406165860813988UL)) ; ; ;
# 128 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1); return; };
# 129 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! *boxes) {rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1); return; };
# 130 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 131 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   free_wrapper((*boxes)->nAtoms, 7636406165860813977UL);
# 132 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   free_wrapper(*boxes, 7636406165860813970UL);
# 133 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *boxes = __null;
# 134 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 135 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "destroyLinkCells", &____must_manage_destroyLinkCells, ____alias_loc_id_3, ____chimes_did_disable1); return;
# 136 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void destroyLinkCells(LinkCell** boxes) { (____chimes_replaying ? destroyLinkCells_resumable(boxes) : destroyLinkCells_quick(boxes)); }

int getNeighborBoxes_quick(LinkCell* boxes, int iBox, int* nbrBoxes)
# 145 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getNeighborBoxes), "getNeighborBoxes", &____must_manage_getNeighborBoxes, 3, 0, (size_t)(7636406165860813959UL), (size_t)(0UL), (size_t)(7636406165860813961UL)) ; int ix;
 if (____must_checkpoint_getNeighborBoxes_ix_0) { register_stack_vars(1, "getNeighborBoxes|ix|0", &____must_checkpoint_getNeighborBoxes_ix_0, "i32", (void *)(&ix), (size_t)4, 0, 0, 0); } ; ;
# 146 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; int iz; ;
# 147 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ({ calling_npm("getTuple", 0); getTuple_npm(boxes, iBox, &ix, &iy, &iz); });
# 148 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 149 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int count; count = (0) ;
# 150 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int i; for ( i = (ix - 1) ; i<=ix+1; i++) {
# 151 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      { int j; for ( j = (iy - 1) ; j<=iy+1; j++) {
# 152 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         { int k; for ( k = (iz - 1) ; k<=iz+1; k++) {
# 153 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            nbrBoxes[count++] = ({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, i, j, k); });
# 154 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         } }
# 155 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      } }
# 156 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 157 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 158 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "getNeighborBoxes", &____must_manage_getNeighborBoxes, ____alias_loc_id_2, ____chimes_did_disable2); return count;
# 159 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes) { return (____chimes_replaying ? getNeighborBoxes_resumable(boxes, iBox, nbrBoxes) : getNeighborBoxes_quick(boxes, iBox, nbrBoxes)); }

void putAtomInBox_quick(LinkCell* boxes, Atoms* atoms,
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 176 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&putAtomInBox), "putAtomInBox", &____must_manage_putAtomInBox, 10, 0, (size_t)(7636406165860814700UL), (size_t)(7636406165860814701UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; real_t xyz[3];
 if (____must_checkpoint_putAtomInBox_xyz_0) { register_stack_vars(1, "putAtomInBox|xyz|0", &____must_checkpoint_putAtomInBox_xyz_0, "[3 x double]", (void *)(xyz), (size_t)24, 0, 0, 0); } ; ;
# 177 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    ; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 178 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 179 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 180 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; iBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, xyz); })) ;
# 181 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (iBox * 64) ;
# 182 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 183 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 184 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 185 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 187 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]++;
# 188 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[iOff] = gid;
# 189 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 190 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 191 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][0] = x;
# 192 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][1] = y;
# 193 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][2] = z;
# 194 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 195 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][0] = px;
# 196 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][1] = py;
# 197 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][2] = pz;
# 198 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "putAtomInBox", &____must_manage_putAtomInBox, ____alias_loc_id_6, ____chimes_did_disable3); }

void putAtomInBox(LinkCell* boxes, Atoms* atoms,
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz) { (____chimes_replaying ? putAtomInBox_resumable(boxes, atoms, gid, iType, x, y, z, px, py, pz) : putAtomInBox_quick(boxes, atoms, gid, iType, x, y, z, px, py, pz)); }

int getBoxFromTuple_quick(LinkCell* boxes, int ix, int iy, int iz)
# 207 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&getBoxFromTuple), "getBoxFromTuple", &____must_manage_getBoxFromTuple, 4, 0, (size_t)(7636406165860814527UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 208 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iBox; iBox = (0) ;
# 209 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 210 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 211 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 212 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iz == gridSize[2]) {{
# 214 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 215 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 216 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iz == -1) {{
# 220 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 221 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 222 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 226 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 227 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 228 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == -1) {{
# 232 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 233 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 237 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 238 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == -1)
# 241 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 242 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 243 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 244 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 245 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 246 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 247 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 248 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 249 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(iBox >= 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 249, "iBox >= 0") : (void)0);
# 250 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(iBox < boxes->nTotalBoxes), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 250, "iBox < boxes->nTotalBoxes") : (void)0);
# 251 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 252 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "getBoxFromTuple", &____must_manage_getBoxFromTuple, ____alias_loc_id_5, ____chimes_did_disable4); return iBox;
# 253 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int getBoxFromTuple(LinkCell* boxes, int ix, int iy, int iz) { return (____chimes_replaying ? getBoxFromTuple_resumable(boxes, ix, iy, iz) : getBoxFromTuple_quick(boxes, ix, iy, iz)); }

void moveAtom_quick(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 260 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&moveAtom), "moveAtom", &____must_manage_moveAtom, 5, 0, (size_t)(7636406165860814936UL), (size_t)(7636406165860814977UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 261 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int nj; nj = (boxes->nAtoms[jBox]) ;
# 262 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox); });
# 263 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[jBox]++;
# 264 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 265 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(boxes->nAtoms[jBox] < 64), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 265, "boxes->nAtoms[jBox] < MAXATOMS") : (void)0);
# 266 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 267 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]--;
# 268 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ni; ni = (boxes->nAtoms[iBox]) ;
# 269 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (ni) {({ calling_npm("copyAtom", 0); copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); }); };
# 270 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 271 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 273 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 274 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "moveAtom", &____must_manage_moveAtom, ____alias_loc_id_8, ____chimes_did_disable5); return;
# 275 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void moveAtom(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox) { (____chimes_replaying ? moveAtom_resumable(boxes, atoms, iId, iBox, jBox) : moveAtom_quick(boxes, atoms, iId, iBox, jBox)); }

void updateLinkCells_quick(LinkCell* boxes, Atoms* atoms)
# 291 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&updateLinkCells), "updateLinkCells", &____must_manage_updateLinkCells, 2, 0, (size_t)(7636406165860815181UL), (size_t)(7636406165860815182UL)) ; ; ;
# 292 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ({ calling_npm("emptyHaloCells", 0); emptyHaloCells_npm(boxes); });
# 293 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 294 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int iBox; for ( iBox = (0) ; iBox<boxes->nLocalBoxes; ++iBox)
# 295 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 296 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int iOff; iOff = (iBox * 64) ;
# 297 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
       int ii; ii = (0) ;
# 298 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 299 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 300 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
          int jBox; jBox = (({ calling_npm("getBoxFromCoord", 0); getBoxFromCoord_npm(boxes, atoms->r[iOff + ii]); })) ;
# 301 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (jBox != iBox) {({ calling_npm("moveAtom", 0); moveAtom_npm(boxes, atoms, ii, iBox, jBox); }); } else {++ii; } ;
# 305 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 306 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   } }
# 307 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "updateLinkCells", &____must_manage_updateLinkCells, ____alias_loc_id_10, ____chimes_did_disable6); }

void updateLinkCells(LinkCell* boxes, Atoms* atoms) { (____chimes_replaying ? updateLinkCells_resumable(boxes, atoms) : updateLinkCells_quick(boxes, atoms)); }

int maxOccupancy_quick(LinkCell* boxes)
# 311 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&maxOccupancy), "maxOccupancy", &____must_manage_maxOccupancy, 1, 0, (size_t)(7636406165860815244UL)) ; int localMax;
 if (____must_checkpoint_maxOccupancy_localMax_0) { register_stack_vars(1, "maxOccupancy|localMax|0", &____must_checkpoint_maxOccupancy_localMax_0, "i32", (void *)(&localMax), (size_t)4, 0, 0, 0); } ; ;
# 312 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      localMax = (0) ;
# 313 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (0) ;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); } };
# 315 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 316 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int globalMax; ;
# 317 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 318 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_1: ({ calling((void*)profileStart, 1, ____alias_loc_id_0, 0UL, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 319 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    call_lbl_2: ({ calling((void*)maxIntParallel, 2, 0, 0UL, 3, (size_t)(7636406165860815214UL), (size_t)(7636406165860815216UL), (size_t)(0UL)); (maxIntParallel)(&localMax, &globalMax, 1); }) ;
# 320 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { call_lbl_3: ({ calling((void*)profileStop, 3, 0, 0UL, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 321 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 322 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "maxOccupancy", &____must_manage_maxOccupancy, 0, ____chimes_did_disable7); return globalMax;
# 323 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int maxOccupancy(LinkCell* boxes) { return (____chimes_replaying ? maxOccupancy_resumable(boxes) : maxOccupancy_quick(boxes)); }

void copyAtom_quick(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 329 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&copyAtom), "copyAtom", &____must_manage_copyAtom, 6, 0, (size_t)(7636406165860815102UL), (size_t)(7636406165860815103UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 330 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iOff; iOff = (64 * iBox + iAtom) ;
# 331 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int jOff; jOff = (64 * jBox + jAtom) ;
# 332 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 333 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 334 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 335 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 336 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 337 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 338 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "copyAtom", &____must_manage_copyAtom, ____alias_loc_id_9, ____chimes_did_disable8); }

void copyAtom(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox) { (____chimes_replaying ? copyAtom_resumable(boxes, atoms, iAtom, iBox, jAtom, jBox) : copyAtom_quick(boxes, atoms, iAtom, iBox, jAtom, jBox)); }

int getBoxFromCoord_quick(LinkCell* boxes, real_t rr[3])
# 351 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&getBoxFromCoord), "getBoxFromCoord", &____must_manage_getBoxFromCoord, 2, 0, (size_t)(7636406165860814873UL), (size_t)(7636406165860814874UL)) ; ; ;
# 352 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMin; localMin = (boxes->localMin) ;
# 353 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const real_t *localMax; localMax = (boxes->localMax) ;
# 354 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 355 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int ix; ix = ((int)(floor((rr[0] - localMin[0]) * boxes->invBoxSize[0]))) ;
# 356 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iy; iy = ((int)(floor((rr[1] - localMin[1]) * boxes->invBoxSize[1]))) ;
# 357 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int iz; iz = ((int)(floor((rr[2] - localMin[2]) * boxes->invBoxSize[2]))) ;
# 358 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 359 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 360 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 361 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 362 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 364 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 365 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 368 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 370 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 371 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 374 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 376 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 377 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 380 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 381 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    int result; result = (({ calling_npm("getBoxFromTuple", 0); getBoxFromTuple_npm(boxes, ix, iy, iz); })) ;
# 382 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   rm_stack(false, 0UL, "getBoxFromCoord", &____must_manage_getBoxFromCoord, ____alias_loc_id_7, ____chimes_did_disable9); return result;
# 383 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int getBoxFromCoord(LinkCell* boxes, real_t rr[3]) { return (____chimes_replaying ? getBoxFromCoord_resumable(boxes, rr) : getBoxFromCoord_quick(boxes, rr)); }

void emptyHaloCells_quick(LinkCell* boxes)
# 387 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&emptyHaloCells), "emptyHaloCells", &____must_manage_emptyHaloCells, 1, 0, (size_t)(7636406165860815212UL)) ; ; ;
# 388 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   { int ii; for ( ii = (boxes->nLocalBoxes) ;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; } };
# 390 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "emptyHaloCells", &____must_manage_emptyHaloCells, ____alias_loc_id_11, ____chimes_did_disable10); }

void emptyHaloCells(LinkCell* boxes) { (____chimes_replaying ? emptyHaloCells_resumable(boxes) : emptyHaloCells_quick(boxes)); }

void getTuple_quick(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 401 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{const int ____chimes_did_disable11 = new_stack((void *)(&getTuple), "getTuple", &____must_manage_getTuple, 5, 0, (size_t)(7636406165860814267UL), (size_t)(0UL), (size_t)(7636406165860814269UL), (size_t)(7636406165860814270UL), (size_t)(7636406165860814271UL)) ; ; ;
# 402 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix; int iy; int iz; ;
# 403 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
    const int *gridSize; gridSize = (boxes->gridSize) ;
# 404 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 405 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 406 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 407 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 408 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix = iBox % gridSize[0];
# 409 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox /= gridSize[0];
# 410 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy = iBox % gridSize[1];
# 411 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz = iBox / gridSize[1];
# 412 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 413 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 414 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 415 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 416 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ink; ;
# 417 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 418 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 420 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 421 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 422 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = 0;
# 423 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 424 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 425 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 426 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 427 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = gridSize[0] + 1;
# 428 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 429 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 430 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 431 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 433 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 434 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 435 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 436 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 437 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = 0;
# 438 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 439 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 440 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 441 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 442 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = gridSize[1] + 1;
# 443 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 444 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 445 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 446 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 447 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      else
# 448 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 449 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 450 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 451 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 452 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = 0;
# 453 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 454 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 455 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 456 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 457 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = gridSize[2] + 1;
# 458 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 459 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 460 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 461 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 462 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 463 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 464 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix--;
# 465 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy--;
# 466 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz--;
# 467 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 468 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 469 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *ixp = ix;
# 470 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *iyp = iy;
# 471 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *izp = iz;
# 472 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
rm_stack(false, 0UL, "getTuple", &____must_manage_getTuple, ____alias_loc_id_4, ____chimes_did_disable11); }

void getTuple(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp) { (____chimes_replaying ? getTuple_resumable(boxes, iBox, ixp, iyp, izp) : getTuple_quick(boxes, iBox, ixp, iyp, izp)); }



LinkCell* initLinkCells_npm(const Domain* domain, real_t cutoff)
# 84 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 85 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(domain), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 85, "domain") : (void)0);
# 86 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   LinkCell* ll = (LinkCell*)malloc_wrapper(sizeof(LinkCell), 7636406165860813602UL, 0, 1, (int)sizeof(struct LinkCellSt), 2, (int)__builtin_offsetof(struct LinkCellSt, nAtoms), (int)__builtin_offsetof(struct LinkCellSt, nbrBoxes));
# 87 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 88 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int i = 0; i < 3; i++)
# 89 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 90 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMin[i] = domain->localMin[i];
# 91 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->localMax[i] = domain->localMax[i];
# 92 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->gridSize[i] = domain->localExtent[i] / cutoff;
# 93 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->boxSize[i] = domain->localExtent[i] / ((real_t) ll->gridSize[i]);
# 94 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->invBoxSize[i] = 1.0/ll->boxSize[i];
# 95 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 96 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 97 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];
# 98 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 99 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
# 100 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] + ll->gridSize[2] + 2) +
# 101 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                         (ll->gridSize[1] * ll->gridSize[2]));
# 102 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 103 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;
# 104 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 105 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nAtoms = (int*)malloc_wrapper(ll->nTotalBoxes*sizeof(int), 7636406165860813809UL, 0, 0);
# 106 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0;iBox<ll->nTotalBoxes; ++iBox) { ll->nAtoms[iBox] = 0; };
# 108 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 109 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!((ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 109, "(ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2)") : (void)0);
# 110 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 111 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 112 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   ll->nbrBoxes = (int**)malloc_wrapper(ll->nTotalBoxes*sizeof(int*), 7636406165860813809UL, 1, 0);
# 113 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0; iBox<ll->nTotalBoxes; ++iBox)
# 114 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 115 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ll->nbrBoxes[iBox] = (int*)malloc_wrapper(27*sizeof(int), 7636406165860813855UL, 0, 0);
# 116 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 117 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 118 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0; iBox<ll->nLocalBoxes; ++iBox)
# 119 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 120 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int nNbrBoxes = getNeighborBoxes_npm(ll, iBox, ll->nbrBoxes[iBox]);
# 121 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 122 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 123 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return ll;
# 124 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void destroyLinkCells_npm(LinkCell** boxes)
# 127 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 128 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! boxes) {return; };
# 129 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (! *boxes) {return; };
# 130 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 131 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   free_wrapper((*boxes)->nAtoms, 7636406165860813977UL);
# 132 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   free_wrapper(*boxes, 7636406165860813970UL);
# 133 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *boxes = __null;
# 134 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 135 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return;
# 136 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int getNeighborBoxes_npm(LinkCell* boxes, int iBox, int* nbrBoxes)
# 145 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 146 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix, iy, iz;
# 147 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   getTuple_npm(boxes, iBox, &ix, &iy, &iz);
# 148 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 149 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int count = 0;
# 150 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int i=ix-1; i<=ix+1; i++) {
# 151 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      for (int j=iy-1; j<=iy+1; j++) {
# 152 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         for (int k=iz-1; k<=iz+1; k++) {
# 153 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            nbrBoxes[count++] = getBoxFromTuple_npm(boxes, i, j, k);
# 154 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 155 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 156 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 157 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 158 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return count;
# 159 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void putAtomInBox_npm(LinkCell* boxes, Atoms* atoms,
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const int gid, const int iType,
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t x, const real_t y, const real_t z,
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
                  const real_t px, const real_t py, const real_t pz)
# 176 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 177 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   real_t xyz[3]; xyz[0] = x; xyz[1] = y; xyz[2] = z;
# 178 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 179 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 180 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iBox = getBoxFromCoord_npm(boxes, xyz);
# 181 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iOff = iBox*64;
# 182 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   iOff += boxes->nAtoms[iBox];
# 183 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 184 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 185 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iBox < boxes->nLocalBoxes) {atoms->nLocal++; };
# 187 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]++;
# 188 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[iOff] = gid;
# 189 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[iOff] = iType;
# 190 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 191 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][0] = x;
# 192 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][1] = y;
# 193 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->r[iOff][2] = z;
# 194 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 195 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][0] = px;
# 196 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][1] = py;
# 197 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->p[iOff][2] = pz;
# 198 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int getBoxFromTuple_npm(LinkCell* boxes, int ix, int iy, int iz)
# 207 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 208 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iBox = 0;
# 209 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 210 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 211 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 212 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (iz == gridSize[2]) {{
# 214 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 215 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(gridSize[1]+2) + (gridSize[0]+2)*(iy+1) + (ix+1);
# 216 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iz == -1) {{
# 220 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + 2*gridSize[2]*(gridSize[0]+2) +
# 221 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*(iy+1) + (ix+1);
# 222 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == gridSize[1]) {{
# 226 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + gridSize[2]*(gridSize[0]+2) +
# 227 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         (gridSize[0]+2)*iz + (ix+1);
# 228 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (iy == -1) {{
# 232 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + 2*gridSize[2]*gridSize[1] + iz*(gridSize[0]+2) + (ix+1);
# 233 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == gridSize[0]) {{
# 237 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + gridSize[1]*gridSize[2] + iz*gridSize[1] + iy;
# 238 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else if (ix == -1)
# 241 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 242 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = boxes->nLocalBoxes + iz*gridSize[1] + iy;
# 243 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 244 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 245 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 246 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 247 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox = ix + gridSize[0]*iy + gridSize[0]*gridSize[1]*iz;
# 248 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 249 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(iBox >= 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 249, "iBox >= 0") : (void)0);
# 250 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(iBox < boxes->nTotalBoxes), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 250, "iBox < boxes->nTotalBoxes") : (void)0);
# 251 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 252 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return iBox;
# 253 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void moveAtom_npm(LinkCell* boxes, Atoms* atoms, int iId, int iBox, int jBox)
# 260 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 261 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int nj = boxes->nAtoms[jBox];
# 262 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   copyAtom_npm(boxes, atoms, iId, iBox, nj, jBox);
# 263 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[jBox]++;
# 264 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 265 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (__builtin_expect(!(boxes->nAtoms[jBox] < 64), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c", 265, "boxes->nAtoms[jBox] < MAXATOMS") : (void)0);
# 266 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 267 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   boxes->nAtoms[iBox]--;
# 268 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ni = boxes->nAtoms[iBox];
# 269 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (ni) {copyAtom_npm(boxes, atoms, ni, iBox, iId, iBox); };
# 270 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 271 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (jBox > boxes->nLocalBoxes) {--atoms->nLocal; };
# 273 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 274 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return;
# 275 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void updateLinkCells_npm(LinkCell* boxes, Atoms* atoms)
# 291 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 292 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   emptyHaloCells_npm(boxes);
# 293 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 294 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int iBox=0; iBox<boxes->nLocalBoxes; ++iBox)
# 295 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 296 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int iOff = iBox*64;
# 297 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ii=0;
# 298 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      while (ii < boxes->nAtoms[iBox])
# 299 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 300 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         int jBox = getBoxFromCoord_npm(boxes, atoms->r[iOff+ii]);
# 301 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (jBox != iBox) {moveAtom_npm(boxes, atoms, ii, iBox, jBox); } else {++ii; } ;
# 305 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 306 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 307 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int maxOccupancy_npm(LinkCell* boxes)
# 311 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 312 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int localMax = 0;
# 313 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int ii=0;ii<boxes->nLocalBoxes; ++ii) { localMax = ((localMax) > (boxes->nAtoms[ii]) ? (localMax) : (boxes->nAtoms[ii])); };
# 315 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 316 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int globalMax;
# 317 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 318 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { (*____chimes_extern_func_profileStart)(commReduceTimer); } while(0);
# 319 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   (*____chimes_extern_func_maxIntParallel)(&localMax, &globalMax, 1);
# 320 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   do { (*____chimes_extern_func_profileStop)(commReduceTimer); } while(0);
# 321 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 322 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return globalMax;
# 323 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void copyAtom_npm(LinkCell* boxes, Atoms* atoms, int iAtom, int iBox, int jAtom, int jBox)
# 329 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 330 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iOff = 64*iBox+iAtom;
# 331 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int jOff = 64*jBox+jAtom;
# 332 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->gid[jOff] = atoms->gid[iOff];
# 333 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   atoms->iSpecies[jOff] = atoms->iSpecies[iOff];
# 334 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->r[jOff], atoms->r[iOff], sizeof(real3));
# 335 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->p[jOff], atoms->p[iOff], sizeof(real3));
# 336 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->f[jOff], atoms->f[iOff], sizeof(real3));
# 337 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   memcpy(atoms->U+jOff, atoms->U+iOff, sizeof(real_t));
# 338 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

int getBoxFromCoord_npm(LinkCell* boxes, real_t rr[3])
# 351 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 352 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const real_t* localMin = boxes->localMin;
# 353 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const real_t* localMax = boxes->localMax;
# 354 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 355 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix = (int)(floor((rr[0] - localMin[0])*boxes->invBoxSize[0]));
# 356 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iy = (int)(floor((rr[1] - localMin[1])*boxes->invBoxSize[1]));
# 357 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int iz = (int)(floor((rr[2] - localMin[2])*boxes->invBoxSize[2]));
# 358 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 359 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 360 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 361 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 362 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[0] < localMax[0]) {{
# 364 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ix == gridSize[0]) {ix = gridSize[0] - 1; };
# 365 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {ix = gridSize[0]; } ;
# 368 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[1] < localMax[1]) {{
# 370 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iy == gridSize[1]) {iy = gridSize[1] - 1; };
# 371 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iy = gridSize[1]; } ;
# 374 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if (rr[2] < localMax[2]) {{
# 376 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (iz == gridSize[2]) {iz = gridSize[2] - 1; };
# 377 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }; } else {iz = gridSize[2]; } ;
# 380 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 381 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int result = getBoxFromTuple_npm(boxes, ix, iy, iz);
# 382 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   return result;
# 383 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void emptyHaloCells_npm(LinkCell* boxes)
# 387 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 388 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   for (int ii=boxes->nLocalBoxes;ii<boxes->nTotalBoxes; ++ii) { boxes->nAtoms[ii] = 0; };
# 390 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}

void getTuple_npm(LinkCell* boxes, int iBox, int* ixp, int* iyp, int* izp)
# 401 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
{
# 402 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   int ix, iy, iz;
# 403 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   const int* gridSize = boxes->gridSize;
# 404 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 405 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 406 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   if( iBox < boxes->nLocalBoxes)
# 407 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 408 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix = iBox % gridSize[0];
# 409 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iBox /= gridSize[0];
# 410 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy = iBox % gridSize[1];
# 411 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz = iBox / gridSize[1];
# 412 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 413 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 414 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   else
# 415 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   {
# 416 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      int ink;
# 417 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ink = iBox - boxes->nLocalBoxes;
# 418 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      if (ink < 2*gridSize[1]*gridSize[2]) {{
# 420 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < gridSize[1]*gridSize[2])
# 421 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 422 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = 0;
# 423 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 424 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 425 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 426 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= gridSize[1]*gridSize[2];
# 427 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ix = gridSize[0] + 1;
# 428 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 429 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = 1 + ink % gridSize[1];
# 430 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / gridSize[1];
# 431 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }; } else if (ink < (2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2)))
# 433 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 434 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * gridSize[1];
# 435 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) *gridSize[2]))
# 436 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 437 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = 0;
# 438 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 439 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 440 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 441 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * gridSize[2];
# 442 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iy = gridSize[1] + 1;
# 443 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 444 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 445 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iz = 1 + ink / (gridSize[0] + 2);
# 446 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 447 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      else
# 448 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      {
# 449 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ink -= 2 * gridSize[2] * (gridSize[1] + gridSize[0] + 2);
# 450 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         if (ink < ((gridSize[0] + 2) * (gridSize[1] + 2)))
# 451 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 452 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = 0;
# 453 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 454 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         else
# 455 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         {
# 456 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            ink -= (gridSize[0] + 2) * (gridSize[1] + 2);
# 457 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
            iz = gridSize[2] + 1;
# 458 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         }
# 459 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         ix = ink % (gridSize[0] + 2);
# 460 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
         iy = ink / (gridSize[0] + 2);
# 461 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      }
# 462 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 463 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 464 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      ix--;
# 465 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iy--;
# 466 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
      iz--;
# 467 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   }
# 468 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
# 469 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *ixp = ix;
# 470 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *iyp = iy;
# 471 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
   *izp = iz;
# 472 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/linkCells.c"
}





static int module_init() {
    init_module(7636406165860813577UL, 39, 12, 3, 13, 12, 3, 15, 10, 0, 4,
                           &____alias_loc_id_0, (unsigned)3, (unsigned)0, (7636406165860813577UL + 1636UL), (7636406165860813577UL + 1637UL), (7636406165860813577UL + 1638UL),
                           &____alias_loc_id_1, (unsigned)10, (unsigned)1, (7636406165860813577UL + 1UL), (7636406165860813577UL + 2UL), (7636406165860813577UL + 3UL), (7636406165860813577UL + 4UL), (7636406165860813577UL + 5UL), (7636406165860813577UL + 6UL), (7636406165860813577UL + 7UL), (7636406165860813577UL + 8UL), (7636406165860813577UL + 25UL), (7636406165860813577UL + 232UL), "getNeighborBoxes", (unsigned)2, (7636406165860813577UL + 25UL), (7636406165860813577UL + 278UL),
                           &____alias_loc_id_2, (unsigned)8, (unsigned)2, (7636406165860813577UL + 299UL), (7636406165860813577UL + 300UL), (7636406165860813577UL + 301UL), (7636406165860813577UL + 305UL), (7636406165860813577UL + 306UL), (7636406165860813577UL + 307UL), (7636406165860813577UL + 308UL), (7636406165860813577UL + 384UL), "getBoxFromTuple", (unsigned)1, (7636406165860813577UL + 382UL), "getTuple", (unsigned)4, (7636406165860813577UL + 302UL), (7636406165860813577UL + 303UL), (7636406165860813577UL + 304UL), (7636406165860813577UL + 382UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (7636406165860813577UL + 385UL), (7636406165860813577UL + 411UL),
                           &____alias_loc_id_4, (unsigned)13, (unsigned)0, (7636406165860813577UL + 413UL), (7636406165860813577UL + 414UL), (7636406165860813577UL + 415UL), (7636406165860813577UL + 416UL), (7636406165860813577UL + 417UL), (7636406165860813577UL + 418UL), (7636406165860813577UL + 419UL), (7636406165860813577UL + 420UL), (7636406165860813577UL + 421UL), (7636406165860813577UL + 422UL), (7636406165860813577UL + 692UL), (7636406165860813577UL + 693UL), (7636406165860813577UL + 694UL),
                           &____alias_loc_id_5, (unsigned)6, (unsigned)0, (7636406165860813577UL + 695UL), (7636406165860813577UL + 696UL), (7636406165860813577UL + 697UL), (7636406165860813577UL + 698UL), (7636406165860813577UL + 699UL), (7636406165860813577UL + 700UL),
                           &____alias_loc_id_6, (unsigned)16, (unsigned)1, (7636406165860813577UL + 969UL), (7636406165860813577UL + 970UL), (7636406165860813577UL + 971UL), (7636406165860813577UL + 972UL), (7636406165860813577UL + 973UL), (7636406165860813577UL + 974UL), (7636406165860813577UL + 975UL), (7636406165860813577UL + 976UL), (7636406165860813577UL + 977UL), (7636406165860813577UL + 978UL), (7636406165860813577UL + 979UL), (7636406165860813577UL + 980UL), (7636406165860813577UL + 981UL), (7636406165860813577UL + 1025UL), (7636406165860813577UL + 1057UL), (7636406165860813577UL + 1124UL), "getBoxFromCoord", (unsigned)2, (7636406165860813577UL + 979UL), (7636406165860813577UL + 1123UL),
                           &____alias_loc_id_7, (unsigned)9, (unsigned)1, (7636406165860813577UL + 1133UL), (7636406165860813577UL + 1134UL), (7636406165860813577UL + 1135UL), (7636406165860813577UL + 1136UL), (7636406165860813577UL + 1137UL), (7636406165860813577UL + 1138UL), (7636406165860813577UL + 1139UL), (7636406165860813577UL + 1140UL), (7636406165860813577UL + 1141UL), "getBoxFromTuple", (unsigned)1, (7636406165860813577UL + 1296UL),
                           &____alias_loc_id_8, (unsigned)9, (unsigned)1, (7636406165860813577UL + 1298UL), (7636406165860813577UL + 1299UL), (7636406165860813577UL + 1300UL), (7636406165860813577UL + 1301UL), (7636406165860813577UL + 1302UL), (7636406165860813577UL + 1303UL), (7636406165860813577UL + 1304UL), (7636406165860813577UL + 1361UL), (7636406165860813577UL + 1400UL), "copyAtom", (unsigned)2, (7636406165860813577UL + 1359UL), (7636406165860813577UL + 1400UL),
                           &____alias_loc_id_9, (unsigned)9, (unsigned)0, (7636406165860813577UL + 1404UL), (7636406165860813577UL + 1405UL), (7636406165860813577UL + 1406UL), (7636406165860813577UL + 1407UL), (7636406165860813577UL + 1408UL), (7636406165860813577UL + 1409UL), (7636406165860813577UL + 1410UL), (7636406165860813577UL + 1411UL), (7636406165860813577UL + 1440UL),
                            &____alias_loc_id_10, (unsigned)6, (unsigned)3, (7636406165860813577UL + 1531UL), (7636406165860813577UL + 1532UL), (7636406165860813577UL + 1533UL), (7636406165860813577UL + 1534UL), (7636406165860813577UL + 1535UL), (7636406165860813577UL + 1536UL), "moveAtom", (unsigned)2, (7636406165860813577UL + 1604UL), (7636406165860813577UL + 1605UL), "emptyHaloCells", (unsigned)1, (7636406165860813577UL + 1604UL), "getBoxFromCoord", (unsigned)2, (7636406165860813577UL + 1577UL), (7636406165860813577UL + 1604UL),
                            &____alias_loc_id_11, (unsigned)3, (unsigned)0, (7636406165860813577UL + 1606UL), (7636406165860813577UL + 1607UL), (7636406165860813577UL + 1626UL),
                            &____alias_loc_id_12, (unsigned)0, (unsigned)1, "maxIntParallel", (unsigned)2, (7636406165860813577UL + 1637UL), (7636406165860813577UL + 1639UL),
                            "initLinkCells", (void *)(&initLinkCells_npm), (void *)__null, 0, 2, (7636406165860813577UL + 288UL), 0UL, (7636406165860813577UL + 25UL), 7, "__assert_rtn", 4, (7636406165860813577UL + 1702UL), (7636406165860813577UL + 1703UL), 0UL, (7636406165860813577UL + 1704UL), 0UL, "malloc", 1, 0UL, (7636406165860813577UL + 25UL), "malloc", 1, 0UL, (7636406165860813577UL + 232UL), "__assert_rtn", 4, (7636406165860813577UL + 1702UL), (7636406165860813577UL + 1703UL), 0UL, (7636406165860813577UL + 1705UL), 0UL, "malloc", 1, 0UL, (7636406165860813577UL + 232UL), "malloc", 1, 0UL, (7636406165860813577UL + 278UL), "getNeighborBoxes", 3, (7636406165860813577UL + 25UL), 0UL, (7636406165860813577UL + 278UL), 0UL,
                            "destroyLinkCells", (void *)(&destroyLinkCells_npm), (void *)__null, 0, 1, (7636406165860813577UL + 411UL), 0UL, 2, "free", 1, (7636406165860813577UL + 400UL), 0UL, "free", 1, (7636406165860813577UL + 393UL), 0UL,
                            "getNeighborBoxes", (void *)(&getNeighborBoxes_npm), (void *)__null, 0, 3, (7636406165860813577UL + 382UL), 0UL, (7636406165860813577UL + 384UL), 0UL, 2, "getTuple", 5, (7636406165860813577UL + 382UL), 0UL, (7636406165860813577UL + 302UL), (7636406165860813577UL + 303UL), (7636406165860813577UL + 304UL), 0UL, "getBoxFromTuple", 4, (7636406165860813577UL + 382UL), 0UL, 0UL, 0UL, 0UL,
                            "putAtomInBox", (void *)(&putAtomInBox_npm), (void *)__null, 0, 10, (7636406165860813577UL + 1123UL), (7636406165860813577UL + 1124UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 1, "getBoxFromCoord", 2, (7636406165860813577UL + 1123UL), (7636406165860813577UL + 979UL), 0UL,
                            "getBoxFromTuple", (void *)(&getBoxFromTuple_npm), (void *)__null, 0, 4, (7636406165860813577UL + 950UL), 0UL, 0UL, 0UL, 0UL, 2, "__assert_rtn", 4, (7636406165860813577UL + 1706UL), (7636406165860813577UL + 1703UL), 0UL, (7636406165860813577UL + 1707UL), 0UL, "__assert_rtn", 4, (7636406165860813577UL + 1706UL), (7636406165860813577UL + 1703UL), 0UL, (7636406165860813577UL + 1708UL), 0UL,
                            "moveAtom", (void *)(&moveAtom_npm), (void *)__null, 0, 5, (7636406165860813577UL + 1359UL), (7636406165860813577UL + 1400UL), 0UL, 0UL, 0UL, 0UL, 3, "copyAtom", 6, (7636406165860813577UL + 1359UL), (7636406165860813577UL + 1400UL), 0UL, 0UL, 0UL, 0UL, 0UL, "__assert_rtn", 4, (7636406165860813577UL + 1709UL), (7636406165860813577UL + 1703UL), 0UL, (7636406165860813577UL + 1710UL), 0UL, "copyAtom", 6, (7636406165860813577UL + 1359UL), (7636406165860813577UL + 1400UL), 0UL, 0UL, 0UL, 0UL, 0UL,
                            "updateLinkCells", (void *)(&updateLinkCells_npm), (void *)__null, 0, 2, (7636406165860813577UL + 1604UL), (7636406165860813577UL + 1605UL), 0UL, 3, "emptyHaloCells", 1, (7636406165860813577UL + 1604UL), 0UL, "getBoxFromCoord", 2, (7636406165860813577UL + 1604UL), (7636406165860813577UL + 1577UL), 0UL, "moveAtom", 5, (7636406165860813577UL + 1604UL), (7636406165860813577UL + 1605UL), 0UL, 0UL, 0UL, 0UL,
                            "maxOccupancy", (void *)(&maxOccupancy_npm), (void *)__null, 1, &____alias_loc_id_0, 1, (7636406165860813577UL + 1667UL), 0UL, 3, "profileStart", 1, 0UL, 0UL, "maxIntParallel", 3, (7636406165860813577UL + 1637UL), (7636406165860813577UL + 1639UL), 0UL, 0UL, "profileStop", 1, 0UL, 0UL,
                            "copyAtom", (void *)(&copyAtom_npm), (void *)__null, 0, 6, (7636406165860813577UL + 1525UL), (7636406165860813577UL + 1526UL), 0UL, 0UL, 0UL, 0UL, 0UL, 4, "memcpy", 3, (7636406165860813577UL + 1440UL), (7636406165860813577UL + 1440UL), 0UL, 0UL, "memcpy", 3, (7636406165860813577UL + 1440UL), (7636406165860813577UL + 1440UL), 0UL, 0UL, "memcpy", 3, (7636406165860813577UL + 1440UL), (7636406165860813577UL + 1440UL), 0UL, 0UL, "memcpy", 3, (7636406165860813577UL + 1440UL), (7636406165860813577UL + 1440UL), 0UL, 0UL,
                            "getBoxFromCoord", (void *)(&getBoxFromCoord_npm), (void *)__null, 0, 2, (7636406165860813577UL + 1296UL), (7636406165860813577UL + 1297UL), 0UL, 4, "floor", 1, 0UL, 0UL, "floor", 1, 0UL, 0UL, "floor", 1, 0UL, 0UL, "getBoxFromTuple", 4, (7636406165860813577UL + 1296UL), 0UL, 0UL, 0UL, 0UL,
                            "emptyHaloCells", (void *)(&emptyHaloCells_npm), (void *)__null, 0, 1, (7636406165860813577UL + 1635UL), 0UL, 0,
                            "getTuple", (void *)(&getTuple_npm), (void *)__null, 0, 5, (7636406165860813577UL + 690UL), 0UL, (7636406165860813577UL + 692UL), (7636406165860813577UL + 693UL), (7636406165860813577UL + 694UL), 0UL, 0,
                               "maxIntParallel", (void **)&(____chimes_extern_func_maxIntParallel),
                               "profileStart", (void **)&(____chimes_extern_func_profileStart),
                               "profileStop", (void **)&(____chimes_extern_func_profileStop),
                           "initLinkCells", &(____chimes_does_checkpoint_initLinkCells_npm),
                           "destroyLinkCells", &(____chimes_does_checkpoint_destroyLinkCells_npm),
                           "getNeighborBoxes", &(____chimes_does_checkpoint_getNeighborBoxes_npm),
                           "putAtomInBox", &(____chimes_does_checkpoint_putAtomInBox_npm),
                           "getBoxFromTuple", &(____chimes_does_checkpoint_getBoxFromTuple_npm),
                           "moveAtom", &(____chimes_does_checkpoint_moveAtom_npm),
                           "updateLinkCells", &(____chimes_does_checkpoint_updateLinkCells_npm),
                           "maxOccupancy", &(____chimes_does_checkpoint_maxOccupancy_npm),
                           "copyAtom", &(____chimes_does_checkpoint_copyAtom_npm),
                           "getBoxFromCoord", &(____chimes_does_checkpoint_getBoxFromCoord_npm),
                           "emptyHaloCells", &(____chimes_does_checkpoint_emptyHaloCells_npm),
                           "getTuple", &(____chimes_does_checkpoint_getTuple_npm),
                           "maxIntParallel", &(____chimes_does_checkpoint_maxIntParallel_npm),
                           "profileStart", &(____chimes_does_checkpoint_profileStart_npm),
                           "profileStop", &(____chimes_does_checkpoint_profileStop_npm),
                             (7636406165860813577UL + 1532UL), (7636406165860813577UL + 1605UL),
                             (7636406165860813577UL + 1123UL), (7636406165860813577UL + 1025UL),
                             (7636406165860813577UL + 1124UL), (7636406165860813577UL + 1057UL),
                             (7636406165860813577UL + 1359UL), (7636406165860813577UL + 1361UL),
                             (7636406165860813577UL + 1604UL), (7636406165860813577UL + 1564UL),
                             (7636406165860813577UL + 393UL), (7636406165860813577UL + 400UL),
                             (7636406165860813577UL + 1526UL), (7636406165860813577UL + 1440UL),
                             (7636406165860813577UL + 232UL), (7636406165860813577UL + 278UL),
                             (7636406165860813577UL + 25UL), (7636406165860813577UL + 232UL),
                             (7636406165860813577UL + 1635UL), (7636406165860813577UL + 1626UL),
                             (7636406165860813577UL + 1636UL), (7636406165860813577UL + 1667UL),
                             (7636406165860813577UL + 695UL), (7636406165860813577UL + 950UL),
                             (7636406165860813577UL + 1298UL), (7636406165860813577UL + 1359UL),
                             (7636406165860813577UL + 1UL), (7636406165860813577UL + 288UL),
                             (7636406165860813577UL + 3UL), (7636406165860813577UL + 25UL),
                             (7636406165860813577UL + 1299UL), (7636406165860813577UL + 1400UL),
                             (7636406165860813577UL + 421UL), (7636406165860813577UL + 690UL),
                             (7636406165860813577UL + 1405UL), (7636406165860813577UL + 1526UL),
                             (7636406165860813577UL + 1404UL), (7636406165860813577UL + 1525UL),
                             (7636406165860813577UL + 700UL), (7636406165860813577UL + 950UL),
                             (7636406165860813577UL + 1133UL), (7636406165860813577UL + 1296UL),
                             (7636406165860813577UL + 301UL), (7636406165860813577UL + 384UL),
                             (7636406165860813577UL + 299UL), (7636406165860813577UL + 382UL),
                             (7636406165860813577UL + 1137UL), (7636406165860813577UL + 1296UL),
                             (7636406165860813577UL + 1136UL), (7636406165860813577UL + 1296UL),
                             (7636406165860813577UL + 1135UL), (7636406165860813577UL + 1296UL),
                             (7636406165860813577UL + 1134UL), (7636406165860813577UL + 1297UL),
                             (7636406165860813577UL + 385UL), (7636406165860813577UL + 411UL),
                             (7636406165860813577UL + 970UL), (7636406165860813577UL + 1124UL),
                             (7636406165860813577UL + 1605UL), (7636406165860813577UL + 1577UL),
                             (7636406165860813577UL + 969UL), (7636406165860813577UL + 1123UL),
                             (7636406165860813577UL + 1606UL), (7636406165860813577UL + 1635UL),
                             (7636406165860813577UL + 415UL), (7636406165860813577UL + 692UL),
                             (7636406165860813577UL + 416UL), (7636406165860813577UL + 693UL),
                             (7636406165860813577UL + 417UL), (7636406165860813577UL + 694UL),
                             (7636406165860813577UL + 411UL), (7636406165860813577UL + 393UL),
                             (7636406165860813577UL + 1531UL), (7636406165860813577UL + 1604UL),
                             (7636406165860813577UL + 413UL), (7636406165860813577UL + 690UL),
                             (7636406165860813577UL + 1667UL), (7636406165860813577UL + 1669UL),
                     "AtomsSt", 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U),
                     "DomainSt", 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent),
                     "LinkCellSt", 10, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms), "int**", (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes),
                     "TimerHandle", 0,
                             "getNeighborBoxes", "_Z16getNeighborBoxesP10LinkCellStiPi", 2, "getTuple", "getBoxFromTuple",
                             "initLinkCells", "_Z13initLinkCellsPK8DomainStd", 1, "getNeighborBoxes",
                             "getBoxFromCoord", "_ZL15getBoxFromCoordP10LinkCellStPd", 1, "getBoxFromTuple",
                             "getTuple", "_ZL8getTupleP10LinkCellStiPiS1_S1_", 0,
                             "copyAtom", "_ZL8copyAtomP10LinkCellStP7AtomsStiiii", 0,
                             "updateLinkCells", "_Z15updateLinkCellsP10LinkCellStP7AtomsSt", 3, "emptyHaloCells", "getBoxFromCoord", "moveAtom",
                             "emptyHaloCells", "_ZL14emptyHaloCellsP10LinkCellSt", 0,
                             "maxOccupancy", "_Z12maxOccupancyP10LinkCellSt", 3, "profileStart", "maxIntParallel", "profileStop",
                             "putAtomInBox", "_Z12putAtomInBoxP10LinkCellStP7AtomsStiidddddd", 1, "getBoxFromCoord",
                             "destroyLinkCells", "_Z16destroyLinkCellsPP10LinkCellSt", 0,
                             "getBoxFromTuple", "_Z15getBoxFromTupleP10LinkCellStiii", 0,
                             "moveAtom", "_Z8moveAtomP10LinkCellStP7AtomsStiii", 2, "copyAtom", "copyAtom",
                        "getNeighborBoxes|ix|0", 1, "getNeighborBoxes",
                        "putAtomInBox|xyz|0", 1, "putAtomInBox",
                        "maxOccupancy|localMax|0", 1, "maxOccupancy",
        "getNeighborBoxes", 0UL, (int)3, 7636406165860813602UL, 0UL, 7636406165860813855UL,
        "getTuple", 0UL, (int)5, 7636406165860813959UL, 0UL, 7636406165860813879UL, 7636406165860813880UL, 7636406165860813881UL,
        "getBoxFromTuple", 0UL, (int)4, 7636406165860813959UL, 0UL, 0UL, 0UL,
        "getBoxFromCoord", 0UL, (int)2, 7636406165860814700UL, 7636406165860814556UL,
        "copyAtom", 0UL, (int)6, 7636406165860814936UL, 7636406165860814977UL, 0UL, 0UL, 0UL, 0UL,
        "copyAtom", 0UL, (int)6, 7636406165860814936UL, 7636406165860814977UL, 0UL, 0UL, 0UL, 0UL,
        "emptyHaloCells", 0UL, (int)1, 7636406165860815181UL,
        "getBoxFromCoord", 0UL, (int)2, 7636406165860815181UL, 7636406165860815154UL,
        "moveAtom", 0UL, (int)5, 7636406165860815181UL, 7636406165860815182UL, 0UL, 0UL, 0UL,
        "getBoxFromTuple", 0UL, (int)4, 7636406165860814873UL, 0UL, 0UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
