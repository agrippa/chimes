# 1 "CoMD.c.pre.transformed.cpp"
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
# 1 "CoMD.c.pre.transformed.cpp" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
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
        unsigned parent, bool is_parallel_for, bool is_critical,
        unsigned parent_stack_depth, size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(int expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 58 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }


extern int ____chimes_replaying;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 42 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
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
# 43 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
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
# 44 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
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
# 45 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 45 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"

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
# 47 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 48 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 48 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 1







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
# 9 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
 int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
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
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h" 1
# 12 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h"
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
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/decomposition.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/decomposition.h"
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
# 12 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/initAtoms.h" 1








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
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h"
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
# 50 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 50 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 51 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/eam.h" 1








struct BasePotentialSt;
struct LinkCellSt;





typedef struct ForceExchangeDataSt
{
   real_t* dfEmbed;
   struct LinkCellSt* boxes;
}ForceExchangeData;

struct BasePotentialSt* initEamPot(const char* dir, const char* file, const char* type);
# 53 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/ljForce.h" 1






struct BasePotentialSt;
struct BasePotentialSt* initLjPot(void);
# 54 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 54 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/yamlOutput.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/yamlOutput.h"
extern FILE* yamlFile;

void yamlBegin(void);
void yamlEnd(void);

void yamlAppInfo(FILE* file);

void printSeparator(FILE* file);
# 56 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h"
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
# 57 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h" 1








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
# 57 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 58 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.h" 1
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.h"
typedef struct CommandSt
{
   char potDir[1024];
   char potName[1024];
   char potType[1024];
   int doeam;
   int nx;
   int ny;
   int nz;
   int xproc;
   int yproc;
   int zproc;
   int nSteps;
   int printRate;
   double dt;
   double lat;
   double temperature;
   double initialDelta;
} Command;


Command parseCommandLine(int argc, char** argv);


void printCmdYaml(FILE* file, Command* cmd);
# 59 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.h" 1








double timestep(SimFlat* s, int n, real_t dt);
void computeForce(SimFlat* s);
void kineticEnergy(SimFlat* s);


void redistributeAtoms(struct SimFlatSt* sim);
# 60 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/constants.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/constants.h"
static const double amuToInternalMass =
         1.660538921e-27 * 1.0e-10 * 1.0e-10
         / (1.0e-15 * 1.0e-15 * 1.602176565e-19);


static const double kB_eV = 8.6173324e-5;


static const double hartreeToEv = 27.21138505;


static const double bohrToAngs = 0.52917721092;
# 61 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 61 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 62 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
# 64 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c" 2
# 64 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 65 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 66 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 67 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 68 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 69 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static SimFlat* initSimulation(Command cmd);
# 70 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void destroySimulation(SimFlat** ps);
# 71 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 72 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void initSubsystems(void);
# 73 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void finalizeSubsystems(void);
# 74 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 75 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static BasePotential* initPotential(
# 76 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 int doeam, const char* potDir, const char* potName, const char* potType);
# 77 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static SpeciesData* initSpecies(BasePotential* pot);
# 78 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static Validate* initValidate(SimFlat* s);
# 79 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void validateResult(const Validate* val, SimFlat *sim);
# 80 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 81 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void sumAtoms(SimFlat* s);
# 82 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void printThings(SimFlat* s, int iStep, double elapsedTime);
# 83 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void printSimulationDataYaml(FILE* file, SimFlat* s);
# 84 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
static void sanityChecks(Command cmd, double cutoff, double latticeConst, char latticeType[8]);
# 85 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 86 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 87 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
int main(int argc, char** argv)
# 88 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{init_chimes(); new_stack((void *)(&main), 2, 2, (size_t)(0UL), (size_t)(13807915916850228120UL), "main|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 89 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 90 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(3, (size_t)(13807915916850227991UL), (size_t)(13807915916850227992UL), (size_t)(13807915916850227993UL)); call_lbl_3: calling((void*)&initParallel, 3, 0UL, 2, (size_t)(13807915916850227992UL), (size_t)(13807915916850227993UL)); initParallel(&argc, &argv);
# 91 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_4: calling((void*)&profileStart, 4, 0UL, 1, (size_t)(0UL)); profileStart(totalTimer);
# 92 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_5: calling((void*)&initSubsystems, 5, 0UL, 0); initSubsystems();
# 93 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_6: calling((void*)&timestampBarrier, 6, 0UL, 1, (size_t)(13807915916850229345UL)); timestampBarrier("Starting Initialization\n");
# 94 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 95 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_7: calling((void*)&yamlAppInfo, 7, 0UL, 1, (size_t)(13807915916850228895UL)); yamlAppInfo(yamlFile);
# 96 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_8: calling((void*)&yamlAppInfo, 8, 0UL, 1, (size_t)(13807915916850228895UL)); yamlAppInfo(__stdoutp);
# 97 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 98 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: Command cmd; register_stack_var("main|cmd|0", "%struct.CommandSt = type { [1024 x i8], [1024 x i8], [1024 x i8], i32, i32, i32, i32, i32, i32, i32, i32, i32, double, double, double, double }", (void *)(&cmd), (size_t)3144, 0, 1, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_10: calling((void*)&parseCommandLine, 10, 0UL, 3, (size_t)(13807915916850227994UL), (size_t)(0UL), (size_t)(13807915916850228120UL)); cmd = Command(parseCommandLine(argc, argv)) ;
# 99 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_11: calling((void*)&printCmdYaml, 11, 0UL, 2, (size_t)(13807915916850228895UL), (size_t)(13807915916850227994UL)); printCmdYaml(yamlFile, &cmd);
# 100 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_12: calling((void*)&printCmdYaml, 12, 0UL, 2, (size_t)(13807915916850228895UL), (size_t)(13807915916850227994UL)); printCmdYaml(__stdoutp, &cmd);
# 101 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 102 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: SimFlat *sim; register_stack_var("main|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } call_lbl_13: calling((void*)&initSimulation, 13, 13807915916850228061UL, 1, (size_t)(13807915916850227996UL)); sim = (initSimulation(cmd)) ;
# 103 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850227995UL)); call_lbl_15: calling((void*)&printSimulationDataYaml, 15, 0UL, 2, (size_t)(13807915916850228895UL), (size_t)(13807915916850228061UL)); printSimulationDataYaml(yamlFile, sim);
# 104 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_16: calling((void*)&printSimulationDataYaml, 16, 0UL, 2, (size_t)(13807915916850228895UL), (size_t)(13807915916850228061UL)); printSimulationDataYaml(__stdoutp, sim);
# 105 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 106 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_2: Validate *validate; register_stack_var("main|validate|0", "%struct.ValidateSt*", (void *)(&validate), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_3; } call_lbl_17: calling((void*)&initValidate, 17, 13807915916850228036UL, 1, (size_t)(13807915916850228061UL)); validate = (initValidate(sim)) ;
# 107 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850227997UL)); call_lbl_19: calling((void*)&timestampBarrier, 19, 0UL, 1, (size_t)(13807915916850229345UL)); timestampBarrier("Initialization Finished\n");
# 108 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 109 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_20: calling((void*)&timestampBarrier, 20, 0UL, 1, (size_t)(13807915916850229349UL)); timestampBarrier("Starting simulation\n");
# 110 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 111 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 112 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_3: int nSteps; register_stack_var("main|nSteps|0", "i32", (void *)(&nSteps), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } nSteps = (sim->nSteps) ;
# 113 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_4: int printRate; register_stack_var("main|printRate|0", "i32", (void *)(&printRate), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } printRate = (sim->printRate) ;
# 114 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_5: int iStep; register_stack_var("main|iStep|0", "i32", (void *)(&iStep), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(25): { goto call_lbl_25; } case(26): { goto call_lbl_26; } case(27): { goto call_lbl_27; } case(28): { goto call_lbl_28; } case(29): { goto call_lbl_29; } case(30): { goto call_lbl_30; } case(32): { goto call_lbl_32; } case(33): { goto call_lbl_33; } case(34): { goto call_lbl_34; } case(35): { goto call_lbl_35; } case(36): { goto call_lbl_36; } case(37): { goto call_lbl_37; } case(38): { goto call_lbl_38; } case(39): { goto call_lbl_39; } case(40): { goto call_lbl_40; } case(41): { goto call_lbl_41; } case(42): { goto call_lbl_42; } case(44): { goto call_lbl_44; } case(45): { goto call_lbl_45; } case(46): { goto call_lbl_46; } default: { chimes_error(); } } } iStep = (0) ;
# 115 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(3, (size_t)(13807915916850227998UL), (size_t)(13807915916850227999UL), (size_t)(13807915916850228000UL)); call_lbl_22: calling((void*)&profileStart, 22, 0UL, 1, (size_t)(0UL)); profileStart(loopTimer);
# 116 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 for (; iStep<nSteps;)
# 117 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 118 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_23: calling((void*)&profileStart, 23, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 119 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_24: calling((void*)&sumAtoms, 24, 0UL, 1, (size_t)(13807915916850228061UL)); sumAtoms(sim);
# 120 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_25: calling((void*)&profileStop, 25, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 121 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 122 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_26: calling((void*)&printThings, 26, 0UL, 3, (size_t)(13807915916850228061UL), (size_t)(0UL), (size_t)(0UL)); call_lbl_27: calling((void*)&getElapsedTime, 27, 0UL, 1, (size_t)(0UL)); printThings(sim, iStep, getElapsedTime(timestepTimer));
# 123 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 124 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_28: calling((void*)&profileStart, 28, 0UL, 1, (size_t)(0UL)); profileStart(timestepTimer); } while(0);
# 125 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_29: calling((void*)&timestep, 29, 0UL, 3, (size_t)(13807915916850228061UL), (size_t)(0UL), (size_t)(0UL)); timestep(sim, printRate, sim->dt);
# 126 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_30: calling((void*)&profileStop, 30, 0UL, 1, (size_t)(0UL)); profileStop(timestepTimer); } while(0);
# 127 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 128 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 iStep += printRate;
# 129 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 130 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 131 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850228000UL)); call_lbl_32: calling((void*)&checkpoint, 32, 0UL, 0); checkpoint();
# 132 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 133 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 134 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_33: calling((void*)&profileStop, 33, 0UL, 1, (size_t)(0UL)); profileStop(loopTimer);
# 135 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 136 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_34: calling((void*)&sumAtoms, 34, 0UL, 1, (size_t)(13807915916850228061UL)); sumAtoms(sim);
# 137 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_35: calling((void*)&printThings, 35, 0UL, 3, (size_t)(13807915916850228061UL), (size_t)(0UL), (size_t)(0UL)); call_lbl_36: calling((void*)&getElapsedTime, 36, 0UL, 1, (size_t)(0UL)); printThings(sim, iStep, getElapsedTime(timestepTimer));
# 138 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_37: calling((void*)&timestampBarrier, 37, 0UL, 1, (size_t)(13807915916850229350UL)); timestampBarrier("Ending simulation\n");
# 139 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 140 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 141 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_38: calling((void*)&validateResult, 38, 0UL, 2, (size_t)(13807915916850228036UL), (size_t)(13807915916850228061UL)); validateResult(validate, sim);
# 142 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_39: calling((void*)&profileStop, 39, 0UL, 1, (size_t)(0UL)); profileStop(totalTimer);
# 143 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 144 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_40: calling((void*)&printPerformanceResults, 40, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); printPerformanceResults(sim->atoms->nGlobal, sim->printRate);
# 145 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_41: calling((void*)&printPerformanceResultsYaml, 41, 0UL, 1, (size_t)(13807915916850228895UL)); printPerformanceResultsYaml(yamlFile);
# 146 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 147 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_42: calling((void*)&destroySimulation, 42, 0UL, 1, (size_t)(13807915916850227995UL)); destroySimulation(&sim);
# 148 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 free_wrapper(validate, 13807915916850228036UL);
# 149 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_44: calling((void*)&finalizeSubsystems, 44, 0UL, 0); finalizeSubsystems();
# 150 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 151 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_45: calling((void*)&timestampBarrier, 45, 0UL, 1, (size_t)(13807915916850229351UL)); timestampBarrier("CoMD Ending\n");
# 152 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_46: calling((void*)&destroyParallel, 46, 0UL, 0); destroyParallel();
# 153 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 154 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 rm_stack(false, 0UL); return 0;
# 155 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
}
# 168 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 168 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
SimFlat* initSimulation(Command cmd)
# 169 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&initSimulation), 1, 0, (size_t)(13807915916850228325UL)); if (____chimes_replaying) { goto lbl_0; }
# 170 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: SimFlat *sim; register_stack_var("initSimulation|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } sim = ((SimFlat *)malloc_wrapper(sizeof(SimFlat), 13807915916850228308UL, 0, 1, (int)sizeof(struct SimFlatSt), 6, (int)__builtin_offsetof(struct SimFlatSt, domain), (int)__builtin_offsetof(struct SimFlatSt, boxes), (int)__builtin_offsetof(struct SimFlatSt, atoms), (int)__builtin_offsetof(struct SimFlatSt, species), (int)__builtin_offsetof(struct SimFlatSt, pot), (int)__builtin_offsetof(struct SimFlatSt, atomExchange))) ;
# 171 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->nSteps = cmd.nSteps;
# 172 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->printRate = cmd.printRate;
# 173 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->dt = cmd.dt;
# 174 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->domain = __null;
# 175 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->boxes = __null;
# 176 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->atoms = __null;
# 177 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->ePotential = 0.0;
# 178 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->eKinetic = 0.0;
# 179 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->atomExchange = __null;
# 180 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 181 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(2, (size_t)(13807915916850228135UL), (size_t)(13807915916850228308UL)); call_lbl_3: calling((void*)&initPotential, 3, 13807915916850229391UL, 4, (size_t)(0UL), (size_t)(13807915916850228325UL), (size_t)(13807915916850228325UL), (size_t)(13807915916850228325UL)); sim->pot = initPotential(cmd.doeam, cmd.potDir, cmd.potName, cmd.potType);
# 182 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: real_t latticeConstant; register_stack_var("initSimulation|latticeConstant|0", "double", (void *)(&latticeConstant), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } latticeConstant = (cmd.lat) ;
# 183 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (cmd.lat < 0.) {latticeConstant = sim->pot->lat; };
# 185 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 186 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 187 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(2, (size_t)(13807915916850228136UL), (size_t)(13807915916850228308UL)); call_lbl_5: calling((void*)&sanityChecks, 5, 0UL, 4, (size_t)(13807915916850228137UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13807915916850229391UL)); sanityChecks(cmd, sim->pot->cutoff, latticeConstant, sim->pot->latticeType);
# 188 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 189 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_6: calling((void*)&initSpecies, 6, 13807915916850229391UL, 1, (size_t)(13807915916850229391UL)); sim->species = initSpecies(sim->pot);
# 190 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 191 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_2: real3 globalExtent; register_stack_var("initSimulation|globalExtent|0", "[3 x double]", (void *)(globalExtent), (size_t)24, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(12): { goto call_lbl_12; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(25): { goto call_lbl_25; } default: { chimes_error(); } } } ;
# 192 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 globalExtent[0] = cmd.nx * latticeConstant;
# 193 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 globalExtent[1] = cmd.ny * latticeConstant;
# 194 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 globalExtent[2] = cmd.nz * latticeConstant;
# 195 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 196 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(2, (size_t)(13807915916850228138UL), (size_t)(13807915916850228308UL)); call_lbl_8: calling((void*)&initDecomposition, 8, 13807915916850229391UL, 4, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13807915916850228138UL)); sim->domain = initDecomposition(
# 197 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 cmd.xproc, cmd.yproc, cmd.zproc, globalExtent);
# 198 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 199 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850228308UL)); call_lbl_10: calling((void*)&initLinkCells, 10, 13807915916850229391UL, 2, (size_t)(13807915916850229391UL), (size_t)(0UL)); sim->boxes = initLinkCells(sim->domain, sim->pot->cutoff);
# 200 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850228308UL)); call_lbl_12: calling((void*)&initAtoms, 12, 13807915916850229391UL, 1, (size_t)(13807915916850229391UL)); sim->atoms = initAtoms(sim->boxes);
# 201 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 202 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 203 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850228308UL)); call_lbl_14: calling((void*)&createFccLattice, 14, 0UL, 5, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13807915916850228308UL)); createFccLattice(cmd.nx, cmd.ny, cmd.nz, latticeConstant, sim);
# 204 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_15: calling((void*)&setTemperature, 15, 0UL, 2, (size_t)(13807915916850228308UL), (size_t)(0UL)); setTemperature(sim, cmd.temperature);
# 205 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_16: calling((void*)&randomDisplacements, 16, 0UL, 2, (size_t)(13807915916850228308UL), (size_t)(0UL)); randomDisplacements(sim, cmd.initialDelta);
# 206 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 207 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_17: calling((void*)&initAtomHaloExchange, 17, 13807915916850229391UL, 2, (size_t)(13807915916850229391UL), (size_t)(13807915916850229391UL)); sim->atomExchange = initAtomHaloExchange(sim->domain, sim->boxes);
# 208 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 209 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 210 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { alias_group_changed(1, (size_t)(13807915916850228308UL)); call_lbl_19: calling((void*)&profileStart, 19, 0UL, 1, (size_t)(0UL)); profileStart(redistributeTimer); } while(0);
# 211 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_20: calling((void*)&redistributeAtoms, 20, 0UL, 1, (size_t)(13807915916850228308UL)); redistributeAtoms(sim);
# 212 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_21: calling((void*)&profileStop, 21, 0UL, 1, (size_t)(0UL)); profileStop(redistributeTimer); } while(0);
# 213 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 214 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_22: calling((void*)&profileStart, 22, 0UL, 1, (size_t)(0UL)); profileStart(computeForceTimer); } while(0);
# 215 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_23: calling((void*)&computeForce, 23, 0UL, 1, (size_t)(13807915916850228308UL)); computeForce(sim);
# 216 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_24: calling((void*)&profileStop, 24, 0UL, 1, (size_t)(0UL)); profileStop(computeForceTimer); } while(0);
# 217 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 218 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_25: calling((void*)&kineticEnergy, 25, 0UL, 1, (size_t)(13807915916850228308UL)); kineticEnergy(sim);
# 219 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 220 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 rm_stack(true, 13807915916850228308UL); return sim;
# 221 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
}
# 222 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 223 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 224 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void destroySimulation(SimFlat** ps)
# 225 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&destroySimulation), 1, 1, (size_t)(13807915916850229059UL), "destroySimulation|ps|0", "%struct.SimFlatSt**", (void *)(&ps), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 226 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (!ps) {alias_group_changed(3, (size_t)(13807915916850229003UL), (size_t)(13807915916850229004UL), (size_t)(13807915916850229059UL)); rm_stack(false, 0UL); return;; };
# 227 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 228 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: SimFlat *s; register_stack_var("destroySimulation|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } s = (*ps) ;
# 229 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (!s) {alias_group_changed(3, (size_t)(13807915916850229003UL), (size_t)(13807915916850229004UL), (size_t)(13807915916850229059UL)); rm_stack(false, 0UL); return;; };
# 230 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 231 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: BasePotential *pot; register_stack_var("destroySimulation|pot|0", "%struct.BasePotentialSt*", (void *)(&pot), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } default: { chimes_error(); } } } pot = (s->pot) ;
# 232 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (pot) {free_wrapper(pot, 13807915916850229023UL); };
# 233 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(3, (size_t)(13807915916850229003UL), (size_t)(13807915916850229004UL), (size_t)(13807915916850229005UL)); call_lbl_7: calling((void*)&destroyLinkCells, 7, 0UL, 1, (size_t)(13807915916850229014UL)); destroyLinkCells(&(s->boxes));
# 234 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_8: calling((void*)&destroyAtoms, 8, 0UL, 1, (size_t)(13807915916850229023UL)); destroyAtoms(s->atoms);
# 235 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_9: calling((void*)&destroyHaloExchange, 9, 0UL, 1, (size_t)(13807915916850229014UL)); destroyHaloExchange(&(s->atomExchange));
# 236 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 free_wrapper(s->species, 13807915916850229023UL);
# 237 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 free_wrapper(s->domain, 13807915916850229023UL);
# 238 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 free_wrapper(s, 13807915916850229014UL);
# 239 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 *ps = __null;
# 240 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 241 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(3, (size_t)(13807915916850229003UL), (size_t)(13807915916850229004UL), (size_t)(13807915916850229059UL)); rm_stack(false, 0UL); return;
# 242 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
}
# 243 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 244 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void initSubsystems(void)
# 245 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&initSubsystems), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 246 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 247 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 248 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 249 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 250 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_1: calling((void*)&yamlBegin, 1, 0UL, 0); yamlBegin();
# 251 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
rm_stack(false, 0UL); }
# 252 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 253 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void finalizeSubsystems(void)
# 254 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&finalizeSubsystems), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 255 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 256 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 257 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 258 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_1: calling((void*)&yamlEnd, 1, 0UL, 0); yamlEnd();
# 259 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
rm_stack(false, 0UL); }
# 260 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 261 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 262 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
BasePotential* initPotential(
# 263 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 int doeam, const char* potDir, const char* potName, const char* potType)
# 264 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&initPotential), 4, 4, (size_t)(0UL), (size_t)(13807915916850229116UL), (size_t)(13807915916850229117UL), (size_t)(13807915916850229118UL), "initPotential|doeam|0", "i32", (void *)(&doeam), (size_t)4, 0, 0, 0, "initPotential|potDir|0", "i8*", (void *)(&potDir), (size_t)8, 1, 0, 0, "initPotential|potName|0", "i8*", (void *)(&potName), (size_t)8, 1, 0, 0, "initPotential|potType|0", "i8*", (void *)(&potType), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 265 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: BasePotential *pot; register_stack_var("initPotential|pot|0", "%struct.BasePotentialSt*", (void *)(&pot), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } pot = (__null) ;
# 266 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 267 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (doeam) {alias_group_changed(5, (size_t)(13807915916850229075UL), (size_t)(13807915916850229076UL), (size_t)(13807915916850229077UL), (size_t)(13807915916850229078UL), (size_t)(13807915916850229079UL)); call_lbl_2: calling((void*)&initEamPot, 2, 13807915916850229113UL, 3, (size_t)(13807915916850229116UL), (size_t)(13807915916850229117UL), (size_t)(13807915916850229118UL)); pot = initEamPot(potDir, potName, potType); } else {alias_group_changed(5, (size_t)(13807915916850229075UL), (size_t)(13807915916850229076UL), (size_t)(13807915916850229077UL), (size_t)(13807915916850229078UL), (size_t)(13807915916850229079UL)); call_lbl_4: calling((void*)&initLjPot, 4, 13807915916850229113UL, 0); pot = initLjPot(); } ;
# 271 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850229079UL)); (__builtin_expect(!(pot), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c", 271, "pot") : (void)0);
# 272 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850229079UL)); rm_stack(true, 13807915916850229113UL); return pot;
# 273 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
}
# 274 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 275 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
SpeciesData* initSpecies(BasePotential* pot)
# 276 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&initSpecies), 1, 1, (size_t)(13807915916850229306UL), "initSpecies|pot|0", "%struct.BasePotentialSt*", (void *)(&pot), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 277 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: SpeciesData *species; register_stack_var("initSpecies|species|0", "%struct.SpeciesDataSt*", (void *)(&species), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } } species = ((SpeciesData *)malloc_wrapper(sizeof(SpeciesData), 13807915916850229282UL, 0, 1, (int)sizeof(struct SpeciesDataSt), 0)) ;
# 278 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 279 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(2, (size_t)(13807915916850229277UL), (size_t)(13807915916850229278UL)); call_lbl_3: calling((void*)&strcpy, 3, 13807915916850229291UL, 2, (size_t)(13807915916850229282UL), (size_t)(13807915916850229306UL)); strcpy(species->name, pot->name);
# 280 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 species->atomicNo = pot->atomicNo;
# 281 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 species->mass = pot->mass;
# 282 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 283 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850229282UL)); rm_stack(true, 13807915916850229282UL); return species;
# 284 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
}
# 285 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 286 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
Validate* initValidate(SimFlat* sim)
# 287 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&initValidate), 1, 1, (size_t)(13807915916850228725UL), "initValidate|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 288 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850228670UL)); call_lbl_2: calling((void*)&sumAtoms, 2, 0UL, 1, (size_t)(13807915916850228725UL)); sumAtoms(sim);
# 289 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: Validate *val; register_stack_var("initValidate|val|0", "%struct.ValidateSt*", (void *)(&val), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } val = ((Validate *)malloc_wrapper(sizeof(Validate), 13807915916850228677UL, 0, 1, (int)sizeof(struct ValidateSt), 0)) ;
# 290 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 val->eTot0 = (sim->ePotential + sim->eKinetic) / sim->atoms->nGlobal;
# 291 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 val->nAtoms0 = sim->atoms->nGlobal;
# 292 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 293 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_5: calling((void*)&printRank, 5, 0UL, 0); if (alias_group_changed(2, (size_t)(13807915916850228671UL), (size_t)(13807915916850228677UL)) || printRank())
# 294 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 295 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "\n");
# 296 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_7: calling((void*)&printSeparator, 7, 0UL, 1, (size_t)(13807915916850228895UL)); printSeparator(__stdoutp);
# 297 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "Initial energy : %14.12f, atom count : %d \n",
# 298 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 val->eTot0, val->nAtoms0);
# 299 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "\n");
# 300 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 301 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 rm_stack(true, 13807915916850228677UL); return val;
# 302 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
}
# 303 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 304 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void validateResult(const Validate* val, SimFlat* sim)
# 305 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&validateResult), 2, 2, (size_t)(13807915916850228998UL), (size_t)(13807915916850228999UL), "validateResult|val|0", "%struct.ValidateSt*", (void *)(&val), (size_t)8, 1, 0, 0, "validateResult|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 306 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_2: calling((void*)&printRank, 2, 0UL, 0); if (alias_group_changed(2, (size_t)(13807915916850228918UL), (size_t)(13807915916850228919UL)) || printRank())
# 307 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 308 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: real_t eFinal; register_stack_var("validateResult|eFinal|0", "double", (void *)(&eFinal), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } eFinal = ((sim->ePotential + sim->eKinetic) / sim->atoms->nGlobal) ;
# 309 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 310 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: int nAtomsDelta; register_stack_var("validateResult|nAtomsDelta|0", "i32", (void *)(&nAtomsDelta), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } nAtomsDelta = ((sim->atoms->nGlobal - val->nAtoms0)) ;
# 311 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 312 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "\n");
# 313 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "\n");
# 314 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "Simulation Validation:\n");
# 315 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 316 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "  Initial energy  : %14.12f\n", val->eTot0);
# 317 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "  Final energy    : %14.12f\n", eFinal);
# 318 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "  eFinal/eInitial : %f\n", eFinal/val->eTot0);
# 319 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if ( nAtomsDelta == 0)
# 320 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 321 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "  Final atom count : %d, no atoms lost\n",
# 322 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 sim->atoms->nGlobal);
# 323 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 324 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 else
# 325 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 326 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "#############################\n");
# 327 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "# WARNING: %6d atoms lost #\n", nAtomsDelta);
# 328 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, "#############################\n");
# 329 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 330 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 331 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
alias_group_changed(2, (size_t)(13807915916850228920UL), (size_t)(13807915916850228921UL)); rm_stack(false, 0UL); }
# 332 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 333 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void sumAtoms(SimFlat* s)
# 334 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&sumAtoms), 1, 1, (size_t)(13807915916850228770UL), "sumAtoms|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 335 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 336 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->atoms->nLocal = 0;
# 337 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 { lbl_0: int i; register_stack_var("sumAtoms|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } for ( i = (0) ; i < s->boxes->nLocalBoxes; i++)
# 338 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 339 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->atoms->nLocal += s->boxes->nAtoms[i];
# 340 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 } }
# 341 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 342 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { alias_group_changed(3, (size_t)(13807915916850228726UL), (size_t)(13807915916850228727UL), (size_t)(13807915916850228772UL)); call_lbl_2: calling((void*)&profileStart, 2, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 343 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_3: calling((void*)&addIntParallel, 3, 0UL, 3, (size_t)(13807915916850228772UL), (size_t)(13807915916850228772UL), (size_t)(0UL)); addIntParallel(&s->atoms->nLocal, &s->atoms->nGlobal, 1);
# 344 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 do { call_lbl_4: calling((void*)&profileStop, 4, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 345 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
rm_stack(false, 0UL); }
# 346 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 347 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 348 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 349 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 350 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 351 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void printThings(SimFlat* s, int iStep, double elapsedTime)
# 352 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&printThings), 3, 3, (size_t)(13807915916850228911UL), (size_t)(0UL), (size_t)(0UL), "printThings|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "printThings|iStep|0", "i32", (void *)(&iStep), (size_t)4, 0, 0, 0, "printThings|elapsedTime|0", "double", (void *)(&elapsedTime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 353 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 354 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 static int iStepPrev; iStepPrev = (-1) ;
# 355 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 static int firstCall; firstCall = (1) ;
# 356 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 357 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: int nEval; register_stack_var("printThings|nEval|0", "i32", (void *)(&nEval), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } nEval = (iStep - iStepPrev) ;
# 358 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 iStepPrev = iStep;
# 359 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 360 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(5, (size_t)(13807915916850228785UL), (size_t)(13807915916850228786UL), (size_t)(13807915916850228787UL), (size_t)(13807915916850228788UL), (size_t)(13807915916850229368UL)); call_lbl_2: calling((void*)&printRank, 2, 0UL, 0); if (!printRank()) {alias_group_changed(6, (size_t)(13807915916850228789UL), (size_t)(13807915916850228790UL), (size_t)(13807915916850228791UL), (size_t)(13807915916850228792UL), (size_t)(13807915916850228793UL), (size_t)(13807915916850228794UL)); rm_stack(false, 0UL); return;; };
# 362 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 363 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (firstCall)
# 364 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 365 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 firstCall = 0;
# 366 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp,
# 367 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 "#                                                                                         Performance\n"
# 368 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 "#  Loop   Time(fs)       Total Energy   Potential Energy     Kinetic Energy  Temperature   (us/atom)     # Atoms\n");
# 369 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850229368UL)); call_lbl_7: calling((void*)&fflush, 7, 0UL, 1, (size_t)(13807915916850228895UL)); fflush(__stdoutp);
# 370 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 371 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 372 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: real_t time; register_stack_var("printThings|time|0", "double", (void *)(&time), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } time = (iStep * s->dt) ;
# 373 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_2: real_t eTotal; register_stack_var("printThings|eTotal|0", "double", (void *)(&eTotal), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } eTotal = ((s->ePotential + s->eKinetic) / s->atoms->nGlobal) ;
# 374 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_3: real_t eK; register_stack_var("printThings|eK|0", "double", (void *)(&eK), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } eK = (s->eKinetic / s->atoms->nGlobal) ;
# 375 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_4: real_t eU; register_stack_var("printThings|eU|0", "double", (void *)(&eU), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } eU = (s->ePotential / s->atoms->nGlobal) ;
# 376 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_5: real_t Temp; register_stack_var("printThings|Temp|0", "double", (void *)(&Temp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } Temp = ((s->eKinetic / s->atoms->nGlobal) / (kB_eV * 1.5)) ;
# 377 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 378 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_6: double timePerAtom; register_stack_var("printThings|timePerAtom|0", "double", (void *)(&timePerAtom), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } timePerAtom = (1.0E+6 * elapsedTime / (double)(nEval * s->atoms->nLocal)) ;
# 379 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 380 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(__stdoutp, " %6d %10.2f %18.12f %18.12f %18.12f %12.4f %10.4f %12d\n",
# 381 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 iStep, time, eTotal, eU, eK, Temp, timePerAtom, s->atoms->nGlobal);
# 382 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
alias_group_changed(6, (size_t)(13807915916850228789UL), (size_t)(13807915916850228790UL), (size_t)(13807915916850228791UL), (size_t)(13807915916850228792UL), (size_t)(13807915916850228793UL), (size_t)(13807915916850228794UL)); rm_stack(false, 0UL); }
# 383 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 384 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 385 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 386 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void printSimulationDataYaml(FILE* file, SimFlat* s)
# 387 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&printSimulationDataYaml), 2, 2, (size_t)(13807915916850228668UL), (size_t)(13807915916850228669UL), "printSimulationDataYaml|file|0", "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printSimulationDataYaml|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 388 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 389 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(2, (size_t)(13807915916850228331UL), (size_t)(13807915916850228332UL)); lbl_0: int maxOcc; register_stack_var("printSimulationDataYaml|maxOcc|0", "i32", (void *)(&maxOcc), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_2: calling((void*)&maxOccupancy, 2, 0UL, 1, (size_t)(13807915916850228349UL)); maxOcc = (maxOccupancy(s->boxes)) ;
# 390 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 391 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 392 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850228333UL)); call_lbl_4: calling((void*)&printRank, 4, 0UL, 0); if (!printRank()) {rm_stack(false, 0UL); return;; };
# 394 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 395 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"Simulation data: \n");
# 396 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Total atoms        : %d\n",
# 397 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->atoms->nGlobal);
# 398 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Min global bounds  : [ %14.10f, %14.10f, %14.10f ]\n",
# 399 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->domain->globalMin[0], s->domain->globalMin[1], s->domain->globalMin[2]);
# 400 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Max global bounds  : [ %14.10f, %14.10f, %14.10f ]\n",
# 401 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->domain->globalMax[0], s->domain->globalMax[1], s->domain->globalMax[2]);
# 402 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_10: calling((void*)&printSeparator, 10, 0UL, 1, (size_t)(13807915916850228668UL)); printSeparator(file);
# 403 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"Decomposition data: \n");
# 404 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Processors         : %6d,%6d,%6d\n",
# 405 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->domain->procGrid[0], s->domain->procGrid[1], s->domain->procGrid[2]);
# 406 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Local boxes        : %6d,%6d,%6d = %8d\n",
# 407 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->boxes->gridSize[0], s->boxes->gridSize[1], s->boxes->gridSize[2],
# 408 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->boxes->gridSize[0]*s->boxes->gridSize[1]*s->boxes->gridSize[2]);
# 409 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Box size           : [ %14.10f, %14.10f, %14.10f ]\n",
# 410 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->boxes->boxSize[0], s->boxes->boxSize[1], s->boxes->boxSize[2]);
# 411 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"  Box factor         : [ %14.10f, %14.10f, %14.10f ] \n",
# 412 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->boxes->boxSize[0]/s->pot->cutoff,
# 413 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->boxes->boxSize[1]/s->pot->cutoff,
# 414 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 s->boxes->boxSize[2]/s->pot->cutoff);
# 415 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file, "  Max Link Cell Occupancy: %d of %d\n",
# 416 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 maxOcc, 64);
# 417 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_17: calling((void*)&printSeparator, 17, 0UL, 1, (size_t)(13807915916850228668UL)); printSeparator(file);
# 418 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"Potential data: \n");
# 419 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_19: calling((void*)s->pot->print, 19, 0UL, 2, (size_t)(13807915916850228668UL), (size_t)(13807915916850228349UL)); s->pot->print(file, s->pot);
# 420 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 421 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 422 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: int perAtomSize; register_stack_var("printSimulationDataYaml|perAtomSize|0", "i32", (void *)(&perAtomSize), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } perAtomSize = (10 * sizeof(real_t) + 2 * sizeof(int)) ;
# 423 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_2: float mbPerAtom; register_stack_var("printSimulationDataYaml|mbPerAtom|0", "float", (void *)(&mbPerAtom), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } mbPerAtom = (perAtomSize / 1024 / 1024) ;
# 424 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_3: float totalMemLocal; register_stack_var("printSimulationDataYaml|totalMemLocal|0", "float", (void *)(&totalMemLocal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } totalMemLocal = ((float)(perAtomSize * s->atoms->nLocal) / 1024 / 1024) ;
# 425 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_4: float totalMemGlobal; register_stack_var("printSimulationDataYaml|totalMemGlobal|0", "float", (void *)(&totalMemGlobal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } totalMemGlobal = ((float)(perAtomSize * s->atoms->nGlobal) / 1024 / 1024) ;
# 426 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 427 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_5: int nLocalBoxes; register_stack_var("printSimulationDataYaml|nLocalBoxes|0", "i32", (void *)(&nLocalBoxes), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } nLocalBoxes = (s->boxes->gridSize[0] * s->boxes->gridSize[1] * s->boxes->gridSize[2]) ;
# 428 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_6: int nTotalBoxes; register_stack_var("printSimulationDataYaml|nTotalBoxes|0", "i32", (void *)(&nTotalBoxes), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } nTotalBoxes = ((s->boxes->gridSize[0] + 2) * (s->boxes->gridSize[1] + 2) * (s->boxes->gridSize[2] + 2)) ;
# 429 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_7: float paddedMemLocal; register_stack_var("printSimulationDataYaml|paddedMemLocal|0", "float", (void *)(&paddedMemLocal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } paddedMemLocal = ((float)nLocalBoxes * (perAtomSize * 64) / 1024 / 1024) ;
# 430 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_8: float paddedMemTotal; register_stack_var("printSimulationDataYaml|paddedMemTotal|0", "float", (void *)(&paddedMemTotal), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(10): { goto call_lbl_10; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(21): { goto call_lbl_21; } case(27): { goto call_lbl_27; } default: { chimes_error(); } } } paddedMemTotal = ((float)nTotalBoxes * (perAtomSize * 64) / 1024 / 1024) ;
# 431 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 432 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(8, (size_t)(13807915916850228334UL), (size_t)(13807915916850228335UL), (size_t)(13807915916850228336UL), (size_t)(13807915916850228337UL), (size_t)(13807915916850228338UL), (size_t)(13807915916850228339UL), (size_t)(13807915916850228340UL), (size_t)(13807915916850228341UL)); call_lbl_21: calling((void*)&printSeparator, 21, 0UL, 1, (size_t)(13807915916850228668UL)); printSeparator(file);
# 433 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file,"Memory data: \n");
# 434 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file, "  Intrinsic atom footprint = %4d B/atom \n", perAtomSize);
# 435 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file, "  Total atom footprint     = %7.3f MB (%6.2f MB/node)\n", totalMemGlobal, totalMemLocal);
# 436 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file, "  Link cell atom footprint = %7.3f MB/node\n", paddedMemLocal);
# 437 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 fprintf(file, "  Link cell atom footprint = %7.3f MB/node (including halo cell data\n", paddedMemTotal);
# 438 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 439 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_27: calling((void*)&fflush, 27, 0UL, 1, (size_t)(13807915916850228668UL)); fflush(file);
# 440 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
rm_stack(false, 0UL); }
# 441 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 442 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 443 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
void sanityChecks(Command cmd, double cutoff, double latticeConst, char latticeType[8])
# 444 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
{new_stack((void *)(&sanityChecks), 4, 3, (size_t)(13807915916850229273UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13807915916850229276UL), "sanityChecks|cutoff|0", "double", (void *)(&cutoff), (size_t)8, 0, 0, 0, "sanityChecks|latticeConst|0", "double", (void *)(&latticeConst), (size_t)8, 0, 0, 0, "sanityChecks|latticeType|0", "i8*", (void *)(&latticeType), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 445 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_0: int failCode; register_stack_var("sanityChecks|failCode|0", "i32", (void *)(&failCode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } failCode = (0) ;
# 446 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 447 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 448 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_1: int nProcs; register_stack_var("sanityChecks|nProcs|0", "i32", (void *)(&nProcs), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } nProcs = (cmd.xproc * cmd.yproc * cmd.zproc) ;
# 449 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(5, (size_t)(13807915916850229119UL), (size_t)(13807915916850229120UL), (size_t)(13807915916850229121UL), (size_t)(13807915916850229122UL), (size_t)(13807915916850229123UL)); call_lbl_2: calling((void*)&getNRanks, 2, 0UL, 0); if (nProcs != getNRanks())
# 450 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 451 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 failCode |= 1;
# 452 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_4: calling((void*)&printRank, 4, 0UL, 0); if (alias_group_changed(1, (size_t)(13807915916850229122UL)) || printRank()) {fprintf(__stdoutp, "\nNumber of MPI ranks must match xproc * yproc * zproc\n"); };
# 455 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 456 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 457 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 458 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_2: double minx; register_stack_var("sanityChecks|minx|0", "double", (void *)(&minx), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } minx = (2 * cutoff * cmd.xproc) ;
# 459 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_3: double miny; register_stack_var("sanityChecks|miny|0", "double", (void *)(&miny), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } miny = (2 * cutoff * cmd.yproc) ;
# 460 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_4: double minz; register_stack_var("sanityChecks|minz|0", "double", (void *)(&minz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } minz = (2 * cutoff * cmd.zproc) ;
# 461 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_5: double sizex; register_stack_var("sanityChecks|sizex|0", "double", (void *)(&sizex), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } sizex = (cmd.nx * latticeConst) ;
# 462 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_6: double sizey; register_stack_var("sanityChecks|sizey|0", "double", (void *)(&sizey), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } sizey = (cmd.ny * latticeConst) ;
# 463 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_7: double sizez; register_stack_var("sanityChecks|sizez|0", "double", (void *)(&sizez), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } sizez = (cmd.nz * latticeConst) ;
# 464 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 465 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if ( sizex < minx || sizey < miny || sizez < minz)
# 466 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 467 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 failCode |= 2;
# 468 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_7: calling((void*)&printRank, 7, 0UL, 0); if (alias_group_changed(7, (size_t)(13807915916850229122UL), (size_t)(13807915916850229124UL), (size_t)(13807915916850229125UL), (size_t)(13807915916850229126UL), (size_t)(13807915916850229127UL), (size_t)(13807915916850229128UL), (size_t)(13807915916850229129UL)) || printRank()) {fprintf(__stdoutp, "\nSimulation too small.\n  Increase the number of unit cells to make the simulation\n  at least (%3.2f, %3.2f. %3.2f) Ansgstroms in size\n", minx, miny, minz); };
# 473 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 474 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 475 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 476 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_10: calling((void*)&strcasecmp, 10, 0UL, 2, (size_t)(13807915916850229276UL), (size_t)(13807915916850229383UL)); if (alias_group_changed(7, (size_t)(13807915916850229122UL), (size_t)(13807915916850229124UL), (size_t)(13807915916850229125UL), (size_t)(13807915916850229126UL), (size_t)(13807915916850229127UL), (size_t)(13807915916850229128UL), (size_t)(13807915916850229129UL)) || strcasecmp(latticeType, "FCC") != 0)
# 477 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 {
# 478 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 failCode |= 4;
# 479 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 call_lbl_12: calling((void*)&printRank, 12, 0UL, 0); if (alias_group_changed(1, (size_t)(13807915916850229122UL)) || printRank()) {fprintf(__stdoutp, "\nOnly FCC Lattice type supported, not %s. Fatal Error.\n", latticeType); };
# 483 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 }
# 484 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 lbl_8: int checkCode; register_stack_var("sanityChecks|checkCode|0", "i32", (void *)(&checkCode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(7): { goto call_lbl_7; } case(10): { goto call_lbl_10; } case(12): { goto call_lbl_12; } case(15): { goto call_lbl_15; } default: { chimes_error(); } } } checkCode = (failCode) ;
# 485 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 alias_group_changed(1, (size_t)(13807915916850229130UL)); call_lbl_15: calling((void*)&bcastParallel, 15, 0UL, 3, (size_t)(13807915916850229130UL), (size_t)(0UL), (size_t)(0UL)); bcastParallel(&checkCode, sizeof(int), 0);
# 486 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 487 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 488 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 (__builtin_expect(!(checkCode == failCode), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c", 488, "checkCode == failCode") : (void)0);
# 489 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
# 490 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
 if (failCode != 0) {exit(failCode); };
# 492 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMD.c"
rm_stack(false, 0UL); }


static int module_init() {
    init_module(13807915916850227990UL, 34, 13, 13807915916850227990UL + 1087UL, 13807915916850227990UL + 1127UL, 13807915916850227990UL + 1086UL, 13807915916850227990UL + 1126UL, 13807915916850227990UL + 318UL, 13807915916850227990UL + 1401UL, 13807915916850227990UL + 1089UL, 13807915916850227990UL + 1123UL, 13807915916850227990UL + 1088UL, 13807915916850227990UL + 1128UL, 13807915916850227990UL + 679UL, 13807915916850227990UL + 359UL, 13807915916850227990UL + 795UL, 13807915916850227990UL + 921UL, 13807915916850227990UL + 3UL, 13807915916850227990UL + 130UL, 13807915916850227990UL + 5UL, 13807915916850227990UL + 71UL, 13807915916850227990UL + 341UL, 13807915916850227990UL + 678UL, 13807915916850227990UL + 7UL, 13807915916850227990UL + 46UL, 13807915916850227990UL + 736UL, 13807915916850227990UL + 780UL, 13807915916850227990UL + 1014UL, 13807915916850227990UL + 1024UL, 13807915916850227990UL + 735UL, 13807915916850227990UL + 699UL, 13807915916850227990UL + 1013UL, 13807915916850227990UL + 1069UL, 13807915916850227990UL + 145UL, 13807915916850227990UL + 318UL, 13807915916850227990UL + 342UL, 13807915916850227990UL + 679UL, 13807915916850227990UL + 1131UL, 13807915916850227990UL + 1286UL, 13807915916850227990UL + 1356UL, 13807915916850227990UL + 905UL, 13807915916850227990UL + 71UL, 13807915916850227990UL + 112UL, 13807915916850227990UL + 1015UL, 13807915916850227990UL + 1033UL, 13807915916850227990UL + 1069UL, 13807915916850227990UL + 1024UL, 13807915916850227990UL + 1024UL, 13807915916850227990UL + 1033UL, 13807915916850227990UL + 1287UL, 13807915916850227990UL + 1316UL, 13807915916850227990UL + 780UL, 13807915916850227990UL + 782UL, 13807915916850227990UL + 782UL, 13807915916850227990UL + 762UL, 13807915916850227990UL + 1288UL, 13807915916850227990UL + 1292UL, 13807915916850227990UL + 928UL, 13807915916850227990UL + 1008UL, 13807915916850227990UL + 929UL, 13807915916850227990UL + 1009UL, 13807915916850227990UL + 1009UL, 13807915916850227990UL + 949UL, 13807915916850227990UL + 921UL, 13807915916850227990UL + 849UL, 13807915916850227990UL + 681UL, 13807915916850227990UL + 687UL, 13807915916850227990UL + 680UL, 13807915916850227990UL + 735UL, 13807915916850227990UL + 359UL, 13807915916850227990UL + 548UL, "AtomsSt", 8, "int", (int)__builtin_offsetof(struct AtomsSt, nLocal), "int", (int)__builtin_offsetof(struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof(struct AtomsSt, gid), "int*", (int)__builtin_offsetof(struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof(struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof(struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof(struct AtomsSt, f), "double*", (int)__builtin_offsetof(struct AtomsSt, U), "BasePotentialSt", 9, "double", (int)__builtin_offsetof(struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof(struct BasePotentialSt, mass), "double", (int)__builtin_offsetof(struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof(struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof(struct BasePotentialSt, name), "int", (int)__builtin_offsetof(struct BasePotentialSt, atomicNo), "*", (int)__builtin_offsetof(struct BasePotentialSt, force), "*", (int)__builtin_offsetof(struct BasePotentialSt, print), "*", (int)__builtin_offsetof(struct BasePotentialSt, destroy), "CommandSt", 16, "[ 1024 x char ]", (int)__builtin_offsetof(struct CommandSt, potDir), "[ 1024 x char ]", (int)__builtin_offsetof(struct CommandSt, potName), "[ 1024 x char ]", (int)__builtin_offsetof(struct CommandSt, potType), "int", (int)__builtin_offsetof(struct CommandSt, doeam), "int", (int)__builtin_offsetof(struct CommandSt, nx), "int", (int)__builtin_offsetof(struct CommandSt, ny), "int", (int)__builtin_offsetof(struct CommandSt, nz), "int", (int)__builtin_offsetof(struct CommandSt, xproc), "int", (int)__builtin_offsetof(struct CommandSt, yproc), "int", (int)__builtin_offsetof(struct CommandSt, zproc), "int", (int)__builtin_offsetof(struct CommandSt, nSteps), "int", (int)__builtin_offsetof(struct CommandSt, printRate), "double", (int)__builtin_offsetof(struct CommandSt, dt), "double", (int)__builtin_offsetof(struct CommandSt, lat), "double", (int)__builtin_offsetof(struct CommandSt, temperature), "double", (int)__builtin_offsetof(struct CommandSt, initialDelta), "DomainSt", 8, "[ 3 x int ]", (int)__builtin_offsetof(struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof(struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, localExtent), "HaloExchangeSt", 5, "[ 6 x int ]", (int)__builtin_offsetof(struct HaloExchangeSt, nbrRank), "int", (int)__builtin_offsetof(struct HaloExchangeSt, bufCapacity), "*", (int)__builtin_offsetof(struct HaloExchangeSt, loadBuffer), "*", (int)__builtin_offsetof(struct HaloExchangeSt, unloadBuffer), "*", (int)__builtin_offsetof(struct HaloExchangeSt, destroy), "LinkCellSt", 9, "[ 3 x int ]", (int)__builtin_offsetof(struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof(struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof(struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof(struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof(struct LinkCellSt, nAtoms), "SimFlatSt", 11, "int", (int)__builtin_offsetof(struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof(struct SimFlatSt, printRate), "double", (int)__builtin_offsetof(struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof(struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof(struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof(struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof(struct SimFlatSt, species), "double", (int)__builtin_offsetof(struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof(struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof(struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof(struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, "[ 3 x char ]", (int)__builtin_offsetof(struct SpeciesDataSt, name), "int", (int)__builtin_offsetof(struct SpeciesDataSt, atomicNo), "double", (int)__builtin_offsetof(struct SpeciesDataSt, mass), "TimerHandle", 0, "ValidateSt", 2, "double", (int)__builtin_offsetof(struct ValidateSt, eTot0), "int", (int)__builtin_offsetof(struct ValidateSt, nAtoms0), "__sFILE", 19, "unsigned char*", (int)__builtin_offsetof(struct __sFILE, _p), "int", (int)__builtin_offsetof(struct __sFILE, _r), "int", (int)__builtin_offsetof(struct __sFILE, _w), "short", (int)__builtin_offsetof(struct __sFILE, _flags), "short", (int)__builtin_offsetof(struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _bf), "int", (int)__builtin_offsetof(struct __sFILE, _lbfsize), "*", (int)__builtin_offsetof(struct __sFILE, _close), "*", (int)__builtin_offsetof(struct __sFILE, _read), "*", (int)__builtin_offsetof(struct __sFILE, _seek), "*", (int)__builtin_offsetof(struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof(struct __sFILE, _extra), "int", (int)__builtin_offsetof(struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof(struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof(struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _lb), "int", (int)__builtin_offsetof(struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof(struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof(struct __sbuf, _base), "int", (int)__builtin_offsetof(struct __sbuf, _size));
    return 0;
}

static int __libchimes_module_init = module_init();
