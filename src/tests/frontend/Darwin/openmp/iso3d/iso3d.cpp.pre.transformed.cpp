# 1 "iso3d.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "iso3d.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_fwd_npm = 1;
static int ____chimes_does_checkpoint_config_sources_npm = 1;
static int ____chimes_does_checkpoint_finish_progress_npm = 1;
static int ____chimes_does_checkpoint_init_data_npm = 1;
static int ____chimes_does_checkpoint_init_progress_npm = 1;
static int ____chimes_does_checkpoint_sample_sources_npm = 1;
static int ____chimes_does_checkpoint_save_layer_text_npm = 1;
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_setup_config_npm = 1;
static int ____chimes_does_checkpoint_update_progress_npm = 1;

static int ____must_checkpoint_main_conf_0 = 2;
static int ____must_checkpoint_main_elapsed_s_0 = 2;
static int ____must_checkpoint_main_point_rate_0 = 2;

static int ____must_manage_fwd = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
static unsigned ____alias_loc_id_8;
# 1 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
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
# 1 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 34 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

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
# 68 "/usr/include/stdio.h" 2 3 4



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
# 35 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
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
# 36 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
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
# 37 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
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
# 38 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
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
# 39 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
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
# 183 "/usr/include/sys/unistd.h" 3 4
extern "C" {

int getattrlistbulk(int, void *, void *, size_t, uint64_t) ;

}
# 198 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 199 "/usr/include/sys/unistd.h" 2 3 4


extern "C" {

int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;

}
# 73 "/usr/include/unistd.h" 2 3 4
# 83 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 423 "/usr/include/unistd.h" 3 4
extern "C" {
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

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

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
}
# 500 "/usr/include/unistd.h" 3 4
extern "C" {
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
}
# 525 "/usr/include/unistd.h" 3 4
 extern "C" {





__attribute__((deprecated))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );






__attribute__((deprecated))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * , void * , ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void);


int fsync(int) __asm("_" "fsync" );

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







# 1 "/usr/include/sys/select.h" 1 3 4
# 111 "/usr/include/sys/select.h" 3 4
extern "C" {


int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )




  __asm("_" "pselect" "$1050")




  ;




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
int gethostuuid(uuid_t, const struct timespec *) ;
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
int mkpath_np(const char *path, mode_t omode) ;
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

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
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



int fgetattrlist(int,void*,void*,size_t,unsigned int) ;
int fsetattrlist(int,void*,void*,size_t,unsigned int) ;
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 731 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) ;




int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;

}
# 40 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 1
# 29 "/Users/jmg3/chimes/src/examples/cpp/include/common.h"
# 1 "/Users/jmg3/chimes/src/examples/cpp/include/common_cuda.h" 1




extern "C" {


extern int getNumCUDADevices();


}
# 30 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 2

typedef struct _source {
    int x, y;
    float freq;
    int t;
} source;

extern double seconds();
extern void ricker_wavelet(float *source, int nsteps, float dt, float freq);
extern void parse_source(char *optarg, source *out);
extern void config_sources(source **srcs, int *nsrcs, int dimx, int dimy,
        int nsteps);
extern float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt);

extern void init_progress(int length, int goal, int disabled);
extern void update_progress(int progress);
extern void finish_progress();
# 41 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/include/common3d.h" 1







# 1 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 1
# 9 "/Users/jmg3/chimes/src/examples/cpp/include/common3d.h" 2

typedef struct _config {
    int nx, ny, nz;
    int nsteps;
    int save_text;
    int verbose;
    int radius;
    int ngpus;

    source *srcs;
    int nsrcs;

    int progress_width;
    int progress_disabled;
} config;
# 39 "/Users/jmg3/chimes/src/examples/cpp/include/common3d.h"
extern void save_layer_text(float *field, int z, const int dimx, const int dimy,
        const int ny, const int nx, const char *filename, int radius);
extern void init_data(float *curr, float *next, float *vsq,
                float *h_coeff,
                const int dimx, const int dimy, const int dimz,
                const float dx, const float dt);
extern void usage(char **argv);
extern void default_config(config *conf);
extern void setup_config(config *conf, int argc, char **argv);
# 42 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
# 42 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 43 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"

# 1 "/Users/jmg3/chimes/src/libchimes/checkpoint.h" 1
# 11 "/Users/jmg3/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*fp)(void *));
# 45 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp" 2
# 45 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 46 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 47 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 48 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 49 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 50 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 51 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 52 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
static void fwd_npm(float *next, float *curr, float *vsq, float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz, int radius);
static void fwd_quick(float *next, float *curr, float *vsq, float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz, int radius); static void fwd(float *next, float *curr, float *vsq, float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz, int radius);
static void fwd_resumable(float *next, float *curr, float *vsq,
# 53 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz,
# 54 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int radius) {const int ____chimes_did_disable0 = new_stack((void *)(&fwd), "fwd", &____must_manage_fwd, 11, 0, (size_t)(6405271852134283936UL), (size_t)(6405271852134283937UL), (size_t)(6405271852134283938UL), (size_t)(6405271852134283939UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 55 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 56 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     size_t total_iters; total_iters = (nz * ny * nx); { call_lbl_2: bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(2, &____chimes_region_id0, 0); int ____chimes_first_iter0 = 1; ;
# 57 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
#pragma omp parallel for firstprivate(____chimes_first_iter0)
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 59 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    for (size_t i = 0; i < total_iters; i++) {if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 0); ____chimes_first_iter0 = 0; }
# 60 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int z; z = ((i / (ny * nx))) ;
# 61 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int y; y = ((i / nx) % ny) ;
# 62 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int x; x = ((i % nx)) ;
# 63 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 64 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int this_offset; this_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))) ;
# 65 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         float temp; temp = (2.F * curr[this_offset] - next[this_offset]) ;
# 66 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         float div; div = (c_coeff[0] * curr[this_offset]) ;
# 67 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        { int d; for ( d = (1) ; d <= radius; d++) {
# 68 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int z_pos_offset; z_pos_offset = ((((radius) + (z + d)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))) ;
# 70 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int z_neg_offset; z_neg_offset = ((((radius) + (z - d)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))) ;
# 72 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int y_pos_offset; y_pos_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y + d)) * (dimx) + ((radius) + (x)))) ;
# 74 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int y_neg_offset; y_neg_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y - d)) * (dimx) + ((radius) + (x)))) ;
# 76 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int x_pos_offset; x_pos_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x + d)))) ;
# 78 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int x_neg_offset; x_neg_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x - d)))) ;
# 80 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            div += c_coeff[d] * (curr[z_pos_offset] +
# 81 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[z_neg_offset] + curr[y_pos_offset] +
# 82 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[y_neg_offset] + curr[x_pos_offset] +
# 83 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[x_neg_offset]);
# 84 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        } }
# 85 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        next[this_offset] = temp + div * vsq[this_offset];
# 86 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 87 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
rm_stack(false, 0UL, "fwd", &____must_manage_fwd, ____alias_loc_id_8, ____chimes_did_disable0); }
# 88 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 89 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
static void (*____chimes_extern_func_config_sources)(struct _source **, int *, int, int, int) = config_sources;static void (*____chimes_extern_func_finish_progress)(void) = finish_progress;static void (*____chimes_extern_func_init_data)(float *, float *, float *, float *, int, int, int, float, float) = init_data;static void (*____chimes_extern_func_init_progress)(int, int, int) = init_progress;static float **(*____chimes_extern_func_sample_sources)(struct _source *, int, int, float) = sample_sources;static void (*____chimes_extern_func_save_layer_text)(float *, int, int, int, int, int, const char *, int) = save_layer_text;static double (*____chimes_extern_func_seconds)(void) = seconds;static void (*____chimes_extern_func_setup_config)(struct _config *, int, char **) = setup_config;static void (*____chimes_extern_func_update_progress)(int) = update_progress;
int main_quick( int argc, char *argv[] ); int main( int argc, char *argv[] );
int main_resumable( int argc, char *argv[] ) {const int ____chimes_did_disable1 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6405271852134283570UL)) ; float point_rate;
double elapsed_s;
float *tmp;
int src_offset;
int src;
int step;
double start;
float **srcs;
float *vsq;
float *next;
float *curr;
float *c_coeff;
size_t nbytes;
size_t dimz;
size_t dimy;
size_t dimx;
float dt;
float dx;
config conf;
 register_stack_vars(19, "main|point_rate|0", &____must_checkpoint_main_point_rate_0, "float", (void *)(&point_rate), (size_t)4, 0, 0, 0, "main|elapsed_s|0", &____must_checkpoint_main_elapsed_s_0, "double", (void *)(&elapsed_s), (size_t)8, 0, 0, 0, "main|tmp|0", (int *)0x0, "float*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|src_offset|0", (int *)0x0, "i32", (void *)(&src_offset), (size_t)4, 0, 0, 0, "main|src|0", (int *)0x0, "i32", (void *)(&src), (size_t)4, 0, 0, 0, "main|step|0", (int *)0x0, "i32", (void *)(&step), (size_t)4, 0, 0, 0, "main|start|0", (int *)0x0, "double", (void *)(&start), (size_t)8, 0, 0, 0, "main|srcs|0", (int *)0x0, "float**", (void *)(&srcs), (size_t)8, 1, 0, 0, "main|vsq|0", (int *)0x0, "float*", (void *)(&vsq), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "float*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "float*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|c_coeff|0", (int *)0x0, "float*", (void *)(&c_coeff), (size_t)8, 1, 0, 0, "main|nbytes|0", (int *)0x0, "i64", (void *)(&nbytes), (size_t)8, 0, 0, 0, "main|dimz|0", (int *)0x0, "i64", (void *)(&dimz), (size_t)8, 0, 0, 0, "main|dimy|0", (int *)0x0, "i64", (void *)(&dimy), (size_t)8, 0, 0, 0, "main|dimx|0", (int *)0x0, "i64", (void *)(&dimx), (size_t)8, 0, 0, 0, "main|dt|0", (int *)0x0, "float", (void *)(&dt), (size_t)4, 0, 0, 0, "main|dx|0", (int *)0x0, "float", (void *)(&dx), (size_t)4, 0, 0, 0, "main|conf|0", (int *)0x0, "%struct._config = type { i32, i32, i32, i32, i32, i32, i32, i32, %struct._source*, i32, i32, i32 }", (void *)(&conf), (size_t)56, 0, 1, 1, (int)__builtin_offsetof(struct _config, srcs)); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(22): { goto call_lbl_22; } default: { chimes_error(); } } } ; ;
# 90 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
      ;
# 91 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_1: (____chimes_does_checkpoint_setup_config_npm ? ( ({ calling((void*)setup_config, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(6405271852134283202UL), (size_t)(0UL), (size_t)(6405271852134283570UL)); (setup_config)(&conf, argc, argv); }) ) : (({ calling_npm("setup_config", ____alias_loc_id_0); (*____chimes_extern_func_setup_config)(&conf, argc, argv); })));
# 92 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_2: (____chimes_does_checkpoint_init_progress_npm ? ( ({ int ____chimes_arg3; int ____chimes_arg4; int ____chimes_arg5; if (!____chimes_replaying) { ____chimes_arg3 = (conf.progress_width); ____chimes_arg4 = (conf.nsteps); ____chimes_arg5 = (conf.progress_disabled); } calling((void*)init_progress, 2, 0, 0UL, 3, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (init_progress)(____chimes_arg3, ____chimes_arg4, ____chimes_arg5); }) ) : (({ calling_npm("init_progress", 0); (*____chimes_extern_func_init_progress)(conf.progress_width, conf.nsteps, conf.progress_disabled); })));
# 93 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 94 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dx = (20.F) ;
# 95 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dt = (0.00200000009F) ;
# 96 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 97 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 98 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dimx = (conf.nx + 2 * conf.radius) ;
# 99 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dimy = (conf.ny + 2 * conf.radius) ;
# 100 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dimz = (conf.nz + 2 * conf.radius) ;
# 101 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       nbytes = (dimx * dimy * dimz * sizeof(float)) ;
# 102 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 103 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    if (conf.verbose) {
# 104 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        printf("x = %zu, y = %zu, z = %zu\n", dimx, dimy, dimz);
# 105 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        printf("nsteps = %d\n", conf.nsteps);
# 106 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        printf("radius = %d\n", conf.radius);
# 107 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 108 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 109 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       c_coeff = ((float *)malloc_wrapper(sizeof(float) * 20, 6405271852134283445UL, 0, 0)) ;
# 110 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       curr = ((float *)malloc_wrapper(nbytes, 6405271852134283442UL, 0, 0)) ;
# 111 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       next = ((float *)malloc_wrapper(nbytes, 6405271852134283442UL, 0, 0)) ;
# 112 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       vsq = ((float *)malloc_wrapper(nbytes, 6405271852134283444UL, 0, 0)) ;
# 113 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    if (curr == __null || next == __null || vsq == __null) {
# 114 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        fprintf(__stderrp, "Allocations failed\n");
# 115 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_7, ____chimes_did_disable1); return 1;
# 116 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 117 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 118 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_12: (____chimes_does_checkpoint_config_sources_npm ? ( ({ source ** ____chimes_arg6; int * ____chimes_arg7; int ____chimes_arg8; int ____chimes_arg9; int ____chimes_arg10; if (!____chimes_replaying) { ____chimes_arg6 = (&conf.srcs); ____chimes_arg7 = (&conf.nsrcs); ____chimes_arg8 = (conf.nx); ____chimes_arg9 = (conf.ny); ____chimes_arg10 = (conf.nsteps); } calling((void*)config_sources, 12, ____alias_loc_id_1, 0UL, 5, (size_t)(6405271852134283202UL), (size_t)(6405271852134283202UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (config_sources)(____chimes_arg6, ____chimes_arg7, ____chimes_arg8, ____chimes_arg9, ____chimes_arg10); }) ) : (({ calling_npm("config_sources", ____alias_loc_id_1); (*____chimes_extern_func_config_sources)(&conf.srcs, &conf.nsrcs, conf.nx, conf.ny, conf.nsteps); })));
# 119 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        call_lbl_13: srcs = ((____chimes_does_checkpoint_sample_sources_npm ? ( ({ source * ____chimes_arg11; int ____chimes_arg12; int ____chimes_arg13; if (!____chimes_replaying) { ____chimes_arg11 = (conf.srcs); ____chimes_arg12 = (conf.nsrcs); ____chimes_arg13 = (conf.nsteps); } calling((void*)sample_sources, 13, 0, 6405271852134283552UL, 4, (size_t)(6405271852134283378UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (sample_sources)(____chimes_arg11, ____chimes_arg12, ____chimes_arg13, dt); }) ) : (({ calling_npm("sample_sources", 0); (*____chimes_extern_func_sample_sources)(conf.srcs, conf.nsrcs, conf.nsteps, dt); })))) ;
# 120 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 121 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_14: (____chimes_does_checkpoint_init_data_npm ? ( ({ calling((void*)init_data, 14, ____alias_loc_id_2, 0UL, 9, (size_t)(6405271852134283442UL), (size_t)(6405271852134283442UL), (size_t)(6405271852134283444UL), (size_t)(6405271852134283445UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (init_data)(curr, next, vsq, c_coeff, dimx, dimy, dimz, dx, dt); }) ) : (({ calling_npm("init_data", ____alias_loc_id_2); (*____chimes_extern_func_init_data)(curr, next, vsq, c_coeff, dimx, dimy, dimz, dx, dt); })));
# 122 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 123 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        call_lbl_15: start = ((____chimes_does_checkpoint_seconds_npm ? ( ({ calling((void*)seconds, 15, 0, 0UL, 0); (seconds)(); }) ) : (({ calling_npm("seconds", 0); (*____chimes_extern_func_seconds)(); })))) ;
# 124 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    { for ( step = (0) ; step < conf.nsteps; step++) {
# 125 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        { for ( src = (0) ; src < conf.nsrcs; src++) {
# 126 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            if (conf.srcs[src].t > step) {continue; };
# 127 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
               src_offset = ((((conf.radius) + (0)) * (dimy) * (dimx) + ((conf.radius) + (conf.srcs[src].y)) * (dimx) + ((conf.radius) + (conf.srcs[src].x)))) ;
# 129 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            curr[src_offset] = srcs[src][step];
# 130 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        } }
# 131 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 132 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        ({ calling_npm("fwd", 0); fwd_npm(next, curr, vsq, c_coeff, conf.nx, conf.ny, conf.nz, dimx, dimy, dimz, conf.radius); });
# 134 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 135 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
           tmp = (next) ;
# 136 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        next = curr;
# 137 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        curr = tmp;
# 138 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 139 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 140 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         call_lbl_16: checkpoint_transformed(16, ____alias_loc_id_3);
# 141 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 142 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 143 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         call_lbl_17: (____chimes_does_checkpoint_update_progress_npm ? ( ({ int ____chimes_arg24; if (!____chimes_replaying) { ____chimes_arg24 = (step + 1); } calling((void*)update_progress, 17, 0, 0UL, 1, (size_t)(0UL)); (update_progress)(____chimes_arg24); }) ) : (({ calling_npm("update_progress", 0); (*____chimes_extern_func_update_progress)(step + 1); })));
# 144 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    } }
# 145 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    alias_group_changed(____alias_loc_id_4); call_lbl_19: elapsed_s = ((____chimes_does_checkpoint_seconds_npm ? ( ({ calling((void*)seconds, 19, ____alias_loc_id_4, 0UL, 0); (seconds)(); }) ) : (({ calling_npm("seconds", ____alias_loc_id_4); (*____chimes_extern_func_seconds)(); }))) - start) ;
# 146 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 147 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_20: (____chimes_does_checkpoint_finish_progress_npm ? ( ({ calling((void*)finish_progress, 20, ____alias_loc_id_5, 0UL, 0); (finish_progress)(); }) ) : (({ calling_npm("finish_progress", ____alias_loc_id_5); (*____chimes_extern_func_finish_progress)(); })));
# 148 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 149 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       point_rate = ((float)conf.nx * conf.ny / (elapsed_s / conf.nsteps)) ;
# 150 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    fprintf(__stderrp, "iso_r4_2x:   %8.10f s total, %8.10f s/step, %8.2f Mcells/s/step\n",
# 151 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            elapsed_s, elapsed_s / conf.nsteps, point_rate / 1000000.f);
# 152 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 153 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    if (conf.save_text != -1) {
# 154 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         call_lbl_22: (____chimes_does_checkpoint_save_layer_text_npm ? ( ({ int ____chimes_arg26; int ____chimes_arg29; int ____chimes_arg30; int ____chimes_arg32; if (!____chimes_replaying) { ____chimes_arg26 = (conf.save_text); ____chimes_arg29 = (conf.ny); ____chimes_arg30 = (conf.nx); ____chimes_arg32 = (conf.radius); } calling((void*)save_layer_text, 22, ____alias_loc_id_6, 0UL, 8, (size_t)(6405271852134283442UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6405271852134283963UL), (size_t)(0UL)); (save_layer_text)(curr, ____chimes_arg26, dimx, dimy, ____chimes_arg29, ____chimes_arg30, "snap.text", ____chimes_arg32); }) ) : (({ calling_npm("save_layer_text", ____alias_loc_id_6); (*____chimes_extern_func_save_layer_text)(curr, conf.save_text, dimx, dimy, conf.ny, conf.nx, "snap.text", conf.radius); })));
# 156 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 157 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 158 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(c_coeff, 6405271852134283445UL);
# 159 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(curr, 6405271852134283442UL);
# 160 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(next, 6405271852134283442UL);
# 161 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(vsq, 6405271852134283444UL);
# 162 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    { int i; for ( i = (0) ; i < conf.nsrcs; i++) {
# 163 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        free_wrapper(srcs[i], 6405271852134283554UL);
# 164 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    } }
# 165 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(srcs, 6405271852134283552UL);
# 166 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 167 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_7, ____chimes_did_disable1); return 0;
# 168 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
}
static void fwd_quick(float *next, float *curr, float *vsq,
# 53 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz,
# 54 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int radius) {const int ____chimes_did_disable0 = new_stack((void *)(&fwd), "fwd", &____must_manage_fwd, 11, 0, (size_t)(6405271852134283936UL), (size_t)(6405271852134283937UL), (size_t)(6405271852134283938UL), (size_t)(6405271852134283939UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 55 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 56 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     size_t total_iters; total_iters = (nz * ny * nx); { call_lbl_2: bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(2, &____chimes_region_id0, 0); int ____chimes_first_iter0 = 1; ;
# 57 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
#pragma omp parallel for firstprivate(____chimes_first_iter0)
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 59 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    for (size_t i = 0; i < total_iters; i++) {if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 0); ____chimes_first_iter0 = 0; }
# 60 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int z; z = ((i / (ny * nx))) ;
# 61 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int y; y = ((i / nx) % ny) ;
# 62 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int x; x = ((i % nx)) ;
# 63 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 64 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         int this_offset; this_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))) ;
# 65 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         float temp; temp = (2.F * curr[this_offset] - next[this_offset]) ;
# 66 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         float div; div = (c_coeff[0] * curr[this_offset]) ;
# 67 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        { int d; for ( d = (1) ; d <= radius; d++) {
# 68 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int z_pos_offset; z_pos_offset = ((((radius) + (z + d)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))) ;
# 70 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int z_neg_offset; z_neg_offset = ((((radius) + (z - d)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))) ;
# 72 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int y_pos_offset; y_pos_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y + d)) * (dimx) + ((radius) + (x)))) ;
# 74 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int y_neg_offset; y_neg_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y - d)) * (dimx) + ((radius) + (x)))) ;
# 76 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int x_pos_offset; x_pos_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x + d)))) ;
# 78 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
             int x_neg_offset; x_neg_offset = ((((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x - d)))) ;
# 80 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            div += c_coeff[d] * (curr[z_pos_offset] +
# 81 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[z_neg_offset] + curr[y_pos_offset] +
# 82 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[y_neg_offset] + curr[x_pos_offset] +
# 83 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[x_neg_offset]);
# 84 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        } }
# 85 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        next[this_offset] = temp + div * vsq[this_offset];
# 86 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 87 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
rm_stack(false, 0UL, "fwd", &____must_manage_fwd, ____alias_loc_id_8, ____chimes_did_disable0); }

static void fwd(float *next, float *curr, float *vsq,
# 53 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz,
# 54 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int radius) { (____chimes_replaying ? fwd_resumable(next, curr, vsq, c_coeff, nx, ny, nz, dimx, dimy, dimz, radius) : fwd_quick(next, curr, vsq, c_coeff, nx, ny, nz, dimx, dimy, dimz, radius)); }

int main_quick( int argc, char *argv[] ) {const int ____chimes_did_disable1 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6405271852134283570UL)) ; float point_rate;
double elapsed_s;
float *tmp;
int src_offset;
int src;
int step;
double start;
float **srcs;
float *vsq;
float *next;
float *curr;
float *c_coeff;
size_t nbytes;
size_t dimz;
size_t dimy;
size_t dimx;
float dt;
float dx;
config conf;
 register_stack_vars(19, "main|point_rate|0", &____must_checkpoint_main_point_rate_0, "float", (void *)(&point_rate), (size_t)4, 0, 0, 0, "main|elapsed_s|0", &____must_checkpoint_main_elapsed_s_0, "double", (void *)(&elapsed_s), (size_t)8, 0, 0, 0, "main|tmp|0", (int *)0x0, "float*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|src_offset|0", (int *)0x0, "i32", (void *)(&src_offset), (size_t)4, 0, 0, 0, "main|src|0", (int *)0x0, "i32", (void *)(&src), (size_t)4, 0, 0, 0, "main|step|0", (int *)0x0, "i32", (void *)(&step), (size_t)4, 0, 0, 0, "main|start|0", (int *)0x0, "double", (void *)(&start), (size_t)8, 0, 0, 0, "main|srcs|0", (int *)0x0, "float**", (void *)(&srcs), (size_t)8, 1, 0, 0, "main|vsq|0", (int *)0x0, "float*", (void *)(&vsq), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "float*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "float*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|c_coeff|0", (int *)0x0, "float*", (void *)(&c_coeff), (size_t)8, 1, 0, 0, "main|nbytes|0", (int *)0x0, "i64", (void *)(&nbytes), (size_t)8, 0, 0, 0, "main|dimz|0", (int *)0x0, "i64", (void *)(&dimz), (size_t)8, 0, 0, 0, "main|dimy|0", (int *)0x0, "i64", (void *)(&dimy), (size_t)8, 0, 0, 0, "main|dimx|0", (int *)0x0, "i64", (void *)(&dimx), (size_t)8, 0, 0, 0, "main|dt|0", (int *)0x0, "float", (void *)(&dt), (size_t)4, 0, 0, 0, "main|dx|0", (int *)0x0, "float", (void *)(&dx), (size_t)4, 0, 0, 0, "main|conf|0", (int *)0x0, "%struct._config = type { i32, i32, i32, i32, i32, i32, i32, i32, %struct._source*, i32, i32, i32 }", (void *)(&conf), (size_t)56, 0, 1, 1, (int)__builtin_offsetof(struct _config, srcs)); ; ;
# 90 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
      ;
# 91 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_1: (____chimes_does_checkpoint_setup_config_npm ? ( ({ calling((void*)setup_config, 1, ____alias_loc_id_0, 0UL, 3, (size_t)(6405271852134283202UL), (size_t)(0UL), (size_t)(6405271852134283570UL)); (setup_config)(&conf, argc, argv); }) ) : (({ calling_npm("setup_config", ____alias_loc_id_0); (*____chimes_extern_func_setup_config)(&conf, argc, argv); })));
# 92 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_2: (____chimes_does_checkpoint_init_progress_npm ? ( ({ calling((void*)init_progress, 2, 0, 0UL, 3, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (init_progress)(conf.progress_width, conf.nsteps, conf.progress_disabled); }) ) : (({ calling_npm("init_progress", 0); (*____chimes_extern_func_init_progress)(conf.progress_width, conf.nsteps, conf.progress_disabled); })));
# 93 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 94 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dx = (20.F) ;
# 95 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dt = (0.00200000009F) ;
# 96 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 97 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 98 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dimx = (conf.nx + 2 * conf.radius) ;
# 99 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dimy = (conf.ny + 2 * conf.radius) ;
# 100 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       dimz = (conf.nz + 2 * conf.radius) ;
# 101 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       nbytes = (dimx * dimy * dimz * sizeof(float)) ;
# 102 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 103 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    if (conf.verbose) {
# 104 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        printf("x = %zu, y = %zu, z = %zu\n", dimx, dimy, dimz);
# 105 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        printf("nsteps = %d\n", conf.nsteps);
# 106 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        printf("radius = %d\n", conf.radius);
# 107 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 108 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 109 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       c_coeff = ((float *)malloc_wrapper(sizeof(float) * 20, 6405271852134283445UL, 0, 0)) ;
# 110 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       curr = ((float *)malloc_wrapper(nbytes, 6405271852134283442UL, 0, 0)) ;
# 111 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       next = ((float *)malloc_wrapper(nbytes, 6405271852134283442UL, 0, 0)) ;
# 112 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       vsq = ((float *)malloc_wrapper(nbytes, 6405271852134283444UL, 0, 0)) ;
# 113 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    if (curr == __null || next == __null || vsq == __null) {
# 114 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        fprintf(__stderrp, "Allocations failed\n");
# 115 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_7, ____chimes_did_disable1); return 1;
# 116 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 117 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 118 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_12: (____chimes_does_checkpoint_config_sources_npm ? ( ({ calling((void*)config_sources, 12, ____alias_loc_id_1, 0UL, 5, (size_t)(6405271852134283202UL), (size_t)(6405271852134283202UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (config_sources)(&conf.srcs, &conf.nsrcs, conf.nx, conf.ny, conf.nsteps); }) ) : (({ calling_npm("config_sources", ____alias_loc_id_1); (*____chimes_extern_func_config_sources)(&conf.srcs, &conf.nsrcs, conf.nx, conf.ny, conf.nsteps); })));
# 119 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        call_lbl_13: srcs = ((____chimes_does_checkpoint_sample_sources_npm ? ( ({ calling((void*)sample_sources, 13, 0, 6405271852134283552UL, 4, (size_t)(6405271852134283378UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (sample_sources)(conf.srcs, conf.nsrcs, conf.nsteps, dt); }) ) : (({ calling_npm("sample_sources", 0); (*____chimes_extern_func_sample_sources)(conf.srcs, conf.nsrcs, conf.nsteps, dt); })))) ;
# 120 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 121 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_14: (____chimes_does_checkpoint_init_data_npm ? ( ({ calling((void*)init_data, 14, ____alias_loc_id_2, 0UL, 9, (size_t)(6405271852134283442UL), (size_t)(6405271852134283442UL), (size_t)(6405271852134283444UL), (size_t)(6405271852134283445UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); (init_data)(curr, next, vsq, c_coeff, dimx, dimy, dimz, dx, dt); }) ) : (({ calling_npm("init_data", ____alias_loc_id_2); (*____chimes_extern_func_init_data)(curr, next, vsq, c_coeff, dimx, dimy, dimz, dx, dt); })));
# 122 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 123 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        call_lbl_15: start = ((____chimes_does_checkpoint_seconds_npm ? ( ({ calling((void*)seconds, 15, 0, 0UL, 0); (seconds)(); }) ) : (({ calling_npm("seconds", 0); (*____chimes_extern_func_seconds)(); })))) ;
# 124 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    { for ( step = (0) ; step < conf.nsteps; step++) {
# 125 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        { for ( src = (0) ; src < conf.nsrcs; src++) {
# 126 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            if (conf.srcs[src].t > step) {continue; };
# 127 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
               src_offset = ((((conf.radius) + (0)) * (dimy) * (dimx) + ((conf.radius) + (conf.srcs[src].y)) * (dimx) + ((conf.radius) + (conf.srcs[src].x)))) ;
# 129 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            curr[src_offset] = srcs[src][step];
# 130 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        } }
# 131 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 132 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        ({ calling_npm("fwd", 0); fwd_npm(next, curr, vsq, c_coeff, conf.nx, conf.ny, conf.nz, dimx, dimy, dimz, conf.radius); });
# 134 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 135 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
           tmp = (next) ;
# 136 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        next = curr;
# 137 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        curr = tmp;
# 138 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 139 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 140 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         call_lbl_16: checkpoint_transformed(16, ____alias_loc_id_3);
# 141 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 142 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 143 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         call_lbl_17: (____chimes_does_checkpoint_update_progress_npm ? ( ({ calling((void*)update_progress, 17, 0, 0UL, 1, (size_t)(0UL)); (update_progress)(step + 1); }) ) : (({ calling_npm("update_progress", 0); (*____chimes_extern_func_update_progress)(step + 1); })));
# 144 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    } }
# 145 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    alias_group_changed(____alias_loc_id_4); call_lbl_19: elapsed_s = ((____chimes_does_checkpoint_seconds_npm ? ( ({ calling((void*)seconds, 19, ____alias_loc_id_4, 0UL, 0); (seconds)(); }) ) : (({ calling_npm("seconds", ____alias_loc_id_4); (*____chimes_extern_func_seconds)(); }))) - start) ;
# 146 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 147 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
     call_lbl_20: (____chimes_does_checkpoint_finish_progress_npm ? ( ({ calling((void*)finish_progress, 20, ____alias_loc_id_5, 0UL, 0); (finish_progress)(); }) ) : (({ calling_npm("finish_progress", ____alias_loc_id_5); (*____chimes_extern_func_finish_progress)(); })));
# 148 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 149 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
       point_rate = ((float)conf.nx * conf.ny / (elapsed_s / conf.nsteps)) ;
# 150 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    fprintf(__stderrp, "iso_r4_2x:   %8.10f s total, %8.10f s/step, %8.2f Mcells/s/step\n",
# 151 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            elapsed_s, elapsed_s / conf.nsteps, point_rate / 1000000.f);
# 152 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 153 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    if (conf.save_text != -1) {
# 154 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
         call_lbl_22: (____chimes_does_checkpoint_save_layer_text_npm ? ( ({ calling((void*)save_layer_text, 22, ____alias_loc_id_6, 0UL, 8, (size_t)(6405271852134283442UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6405271852134283963UL), (size_t)(0UL)); (save_layer_text)(curr, conf.save_text, dimx, dimy, conf.ny, conf.nx, "snap.text", conf.radius); }) ) : (({ calling_npm("save_layer_text", ____alias_loc_id_6); (*____chimes_extern_func_save_layer_text)(curr, conf.save_text, dimx, dimy, conf.ny, conf.nx, "snap.text", conf.radius); })));
# 156 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 157 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 158 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(c_coeff, 6405271852134283445UL);
# 159 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(curr, 6405271852134283442UL);
# 160 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(next, 6405271852134283442UL);
# 161 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(vsq, 6405271852134283444UL);
# 162 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    { int i; for ( i = (0) ; i < conf.nsrcs; i++) {
# 163 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        free_wrapper(srcs[i], 6405271852134283554UL);
# 164 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    } }
# 165 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    free_wrapper(srcs, 6405271852134283552UL);
# 166 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 167 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_7, ____chimes_did_disable1); return 0;
# 168 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
}

int main( int argc, char *argv[] ) { init_chimes(); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }



static void fwd_npm(float *next, float *curr, float *vsq,
# 53 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        float *c_coeff, int nx, int ny, int nz, int dimx, int dimy, int dimz,
# 54 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int radius) {
# 55 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 56 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    size_t total_iters = nz * ny * nx;
# 57 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
#pragma omp parallel for
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 58 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 59 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    for (size_t i = 0; i < total_iters; i++) {
# 60 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int z = (i / (ny * nx));
# 61 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int y = (i / nx) % ny;
# 62 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int x = (i % nx);
# 63 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
# 64 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        int this_offset = (((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)));
# 65 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        float temp = 2.0f * curr[this_offset] - next[this_offset];
# 66 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        float div = c_coeff[0] * curr[this_offset];
# 67 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        for (int d = 1; d <= radius; d++) {
# 68 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            int z_pos_offset = (((radius) + (z + d)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))
# 69 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                           ;
# 70 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            int z_neg_offset = (((radius) + (z - d)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x)))
# 71 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                           ;
# 72 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            int y_pos_offset = (((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y + d)) * (dimx) + ((radius) + (x)))
# 73 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                           ;
# 74 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            int y_neg_offset = (((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y - d)) * (dimx) + ((radius) + (x)))
# 75 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                           ;
# 76 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            int x_pos_offset = (((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x + d)))
# 77 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                           ;
# 78 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            int x_neg_offset = (((radius) + (z)) * (dimy) * (dimx) + ((radius) + (y)) * (dimx) + ((radius) + (x - d)))
# 79 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                           ;
# 80 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
            div += c_coeff[d] * (curr[z_pos_offset] +
# 81 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[z_neg_offset] + curr[y_pos_offset] +
# 82 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[y_neg_offset] + curr[x_pos_offset] +
# 83 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
                    curr[x_neg_offset]);
# 84 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        }
# 85 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
        next[this_offset] = temp + div * vsq[this_offset];
# 86 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
    }
# 87 "/Users/jmg3/chimes/src/examples/openmp/./iso3d.cpp"
}





static int module_init() {
    init_module(6405271852134283198UL, 14, 2, 3, 9, 1, 9, 10, 1, 10, 2,
                           &____alias_loc_id_0, (unsigned)3, (unsigned)1, (6405271852134283198UL + 1UL), (6405271852134283198UL + 2UL), (6405271852134283198UL + 3UL), "setup_config", (unsigned)2, (6405271852134283198UL + 4UL), (6405271852134283198UL + 372UL),
                           &____alias_loc_id_1, (unsigned)10, (unsigned)1, (6405271852134283198UL + 5UL), (6405271852134283198UL + 6UL), (6405271852134283198UL + 7UL), (6405271852134283198UL + 8UL), (6405271852134283198UL + 9UL), (6405271852134283198UL + 10UL), (6405271852134283198UL + 11UL), (6405271852134283198UL + 12UL), (6405271852134283198UL + 13UL), (6405271852134283198UL + 14UL), "config_sources", (unsigned)1, (6405271852134283198UL + 4UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)3, (6405271852134283198UL + 15UL), "config_sources", (unsigned)1, (6405271852134283198UL + 4UL), "init_data", (unsigned)3, (6405271852134283198UL + 244UL), (6405271852134283198UL + 246UL), (6405271852134283198UL + 247UL), "sample_sources", (unsigned)1, (6405271852134283198UL + 180UL),
                           &____alias_loc_id_3, (unsigned)8, (unsigned)1, (6405271852134283198UL + 12UL), (6405271852134283198UL + 13UL), (6405271852134283198UL + 16UL), (6405271852134283198UL + 17UL), (6405271852134283198UL + 18UL), (6405271852134283198UL + 19UL), (6405271852134283198UL + 20UL), (6405271852134283198UL + 244UL), "fwd", (unsigned)3, (6405271852134283198UL + 244UL), (6405271852134283198UL + 246UL), (6405271852134283198UL + 247UL),
                           &____alias_loc_id_4, (unsigned)8, (unsigned)1, (6405271852134283198UL + 12UL), (6405271852134283198UL + 13UL), (6405271852134283198UL + 16UL), (6405271852134283198UL + 17UL), (6405271852134283198UL + 18UL), (6405271852134283198UL + 19UL), (6405271852134283198UL + 20UL), (6405271852134283198UL + 244UL), "fwd", (unsigned)3, (6405271852134283198UL + 244UL), (6405271852134283198UL + 246UL), (6405271852134283198UL + 247UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (6405271852134283198UL + 21UL),
                           &____alias_loc_id_6, (unsigned)1, (unsigned)1, (6405271852134283198UL + 22UL), "save_layer_text", (unsigned)2, (6405271852134283198UL + 244UL), (6405271852134283198UL + 765UL),
                           &____alias_loc_id_7, (unsigned)13, (unsigned)1, (6405271852134283198UL + 1UL), (6405271852134283198UL + 5UL), (6405271852134283198UL + 6UL), (6405271852134283198UL + 7UL), (6405271852134283198UL + 8UL), (6405271852134283198UL + 9UL), (6405271852134283198UL + 10UL), (6405271852134283198UL + 11UL), (6405271852134283198UL + 12UL), (6405271852134283198UL + 13UL), (6405271852134283198UL + 14UL), (6405271852134283198UL + 22UL), (6405271852134283198UL + 23UL), "save_layer_text", (unsigned)2, (6405271852134283198UL + 244UL), (6405271852134283198UL + 765UL),
                           &____alias_loc_id_8, (unsigned)27, (unsigned)0, (6405271852134283198UL + 403UL), (6405271852134283198UL + 404UL), (6405271852134283198UL + 405UL), (6405271852134283198UL + 406UL), (6405271852134283198UL + 407UL), (6405271852134283198UL + 408UL), (6405271852134283198UL + 409UL), (6405271852134283198UL + 410UL), (6405271852134283198UL + 411UL), (6405271852134283198UL + 412UL), (6405271852134283198UL + 413UL), (6405271852134283198UL + 414UL), (6405271852134283198UL + 415UL), (6405271852134283198UL + 416UL), (6405271852134283198UL + 417UL), (6405271852134283198UL + 418UL), (6405271852134283198UL + 419UL), (6405271852134283198UL + 420UL), (6405271852134283198UL + 421UL), (6405271852134283198UL + 422UL), (6405271852134283198UL + 423UL), (6405271852134283198UL + 424UL), (6405271852134283198UL + 425UL), (6405271852134283198UL + 426UL), (6405271852134283198UL + 427UL), (6405271852134283198UL + 428UL), (6405271852134283198UL + 738UL),
                            "fwd", (void *)(&fwd_npm), (void *)__null, 0, 11, (6405271852134283198UL + 738UL), (6405271852134283198UL + 739UL), (6405271852134283198UL + 740UL), (6405271852134283198UL + 741UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0,
                               "config_sources", (void **)&(____chimes_extern_func_config_sources),
                               "finish_progress", (void **)&(____chimes_extern_func_finish_progress),
                               "init_data", (void **)&(____chimes_extern_func_init_data),
                               "init_progress", (void **)&(____chimes_extern_func_init_progress),
                               "sample_sources", (void **)&(____chimes_extern_func_sample_sources),
                               "save_layer_text", (void **)&(____chimes_extern_func_save_layer_text),
                               "seconds", (void **)&(____chimes_extern_func_seconds),
                               "setup_config", (void **)&(____chimes_extern_func_setup_config),
                               "update_progress", (void **)&(____chimes_extern_func_update_progress),
                           "fwd", &(____chimes_does_checkpoint_fwd_npm),
                           "config_sources", &(____chimes_does_checkpoint_config_sources_npm),
                           "finish_progress", &(____chimes_does_checkpoint_finish_progress_npm),
                           "init_data", &(____chimes_does_checkpoint_init_data_npm),
                           "init_progress", &(____chimes_does_checkpoint_init_progress_npm),
                           "sample_sources", &(____chimes_does_checkpoint_sample_sources_npm),
                           "save_layer_text", &(____chimes_does_checkpoint_save_layer_text_npm),
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "setup_config", &(____chimes_does_checkpoint_setup_config_npm),
                           "update_progress", &(____chimes_does_checkpoint_update_progress_npm),
                             (6405271852134283198UL + 11UL), (6405271852134283198UL + 247UL),
                             (6405271852134283198UL + 13UL), (6405271852134283198UL + 244UL),
                             (6405271852134283198UL + 12UL), (6405271852134283198UL + 244UL),
                             (6405271852134283198UL + 15UL), (6405271852134283198UL + 354UL),
                             (6405271852134283198UL + 14UL), (6405271852134283198UL + 246UL),
                             (6405271852134283198UL + 406UL), (6405271852134283198UL + 741UL),
                             (6405271852134283198UL + 762UL), (6405271852134283198UL + 302UL),
                             (6405271852134283198UL + 405UL), (6405271852134283198UL + 740UL),
                             (6405271852134283198UL + 404UL), (6405271852134283198UL + 739UL),
                             (6405271852134283198UL + 3UL), (6405271852134283198UL + 372UL),
                             (6405271852134283198UL + 354UL), (6405271852134283198UL + 356UL),
                             (6405271852134283198UL + 403UL), (6405271852134283198UL + 738UL),
                             (6405271852134283198UL + 4UL), (6405271852134283198UL + 180UL),
                             (6405271852134283198UL + 20UL), (6405271852134283198UL + 244UL),
                     "_config", 12, "int", (int)__builtin_offsetof (struct _config, nx), "int", (int)__builtin_offsetof (struct _config, ny), "int", (int)__builtin_offsetof (struct _config, nz), "int", (int)__builtin_offsetof (struct _config, nsteps), "int", (int)__builtin_offsetof (struct _config, save_text), "int", (int)__builtin_offsetof (struct _config, verbose), "int", (int)__builtin_offsetof (struct _config, radius), "int", (int)__builtin_offsetof (struct _config, ngpus), "%struct._source*", (int)__builtin_offsetof (struct _config, srcs), "int", (int)__builtin_offsetof (struct _config, nsrcs), "int", (int)__builtin_offsetof (struct _config, progress_width), "int", (int)__builtin_offsetof (struct _config, progress_disabled),
                     "_source", 4, "int", (int)__builtin_offsetof (struct _source, x), "int", (int)__builtin_offsetof (struct _source, y), "float", (int)__builtin_offsetof (struct _source, freq), "int", (int)__builtin_offsetof (struct _source, t),
                             "fwd", "_ZL3fwdPfS_S_S_iiiiiii", 0,
                             "main", "main", 12, "setup_config", "init_progress", "config_sources", "sample_sources", "init_data", "seconds", "fwd", "checkpoint", "update_progress", "seconds", "finish_progress", "save_layer_text",
                        "main|conf|0", 1, "main",
                        "main|elapsed_s|0", 2, "save_layer_text", "finish_progress",
                        "main|point_rate|0", 1, "save_layer_text",
        "fwd", 0UL, (int)11, 6405271852134283442UL, 6405271852134283442UL, 6405271852134283444UL, 6405271852134283445UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "setup_config", 0UL, (int)3, 6405271852134283202UL, 0UL, 6405271852134283570UL,
        "init_progress", 0UL, (int)3, 0UL, 0UL, 0UL,
        "config_sources", 0UL, (int)5, 6405271852134283202UL, 6405271852134283202UL, 0UL, 0UL, 0UL,
        "sample_sources", 6405271852134283552UL, (int)4, 6405271852134283378UL, 0UL, 0UL, 0UL,
        "init_data", 0UL, (int)9, 6405271852134283442UL, 6405271852134283442UL, 6405271852134283444UL, 6405271852134283445UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "seconds", 0UL, (int)0,
        "update_progress", 0UL, (int)1, 0UL,
        "seconds", 0UL, (int)0,
        "finish_progress", 0UL, (int)0,
        "save_layer_text", 0UL, (int)8, 6405271852134283442UL, 0UL, 0UL, 0UL, 0UL, 0UL, 6405271852134283963UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
