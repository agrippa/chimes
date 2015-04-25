# 1 "smith_waterman.cpp.pre.transformed.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 326 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 1 3 4
# 47 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 58 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "smith_waterman.cpp.pre.transformed.cpp" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 326 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 1 3 4
# 47 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 58 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
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
# 1 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp" 2
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
# 2 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp" 2
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
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stdint.h" 1 3 4
# 63 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stdint.h" 3 4
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
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stdint.h" 2 3 4
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

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

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
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


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

int system(const char *) __asm("_" "system" ) __attribute__((availability(macosx,introduced=10.0)));
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
# 3 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp" 2
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
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 69 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 70 "/usr/include/time.h" 2 3 4



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
int lutimes(const char *, const struct timeval *) __attribute__((availability(macosx,introduced=10.5)));
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
# 4 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp" 2
# 4 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 5 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 6 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"

# 1 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
# 8 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp" 2
# 8 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 9 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 10 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 11 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 12 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 13 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 14 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 15 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
signed char* string_1;
# 16 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
signed char* string_2;
# 17 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 18 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int tile_width;
# 19 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int tile_height;
# 20 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 21 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int n_tiles_x;
# 22 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int n_tiles_y;
# 23 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 24 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int ** tile_edges_x;
# 25 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int ** tile_edges_y;
# 26 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int * tile_diag;
# 27 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 28 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int nthreads;
# 29 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int *** worker_tiles;
# 30 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 31 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};
# 32 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 33 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
signed char char_mapping ( char c ) {new_stack((void *)(&char_mapping), 1, 0, (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 34 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 signed char to_be_returned; to_be_returned = (-1) ;
# 35 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 switch(c) {
# 36 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 case '_': to_be_returned = GAP; break;
# 37 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 case 'A': to_be_returned = ADENINE; break;
# 38 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 case 'C': to_be_returned = CYTOSINE; break;
# 39 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 case 'G': to_be_returned = GUANINE; break;
# 40 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 case 'T': to_be_returned = THYMINE; break;
# 41 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 42 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(2, (size_t)(2568646267985525998UL), (size_t)(2568646267985525999UL)); rm_stack(false, 0UL); return to_be_returned;
# 43 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
}
# 44 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 45 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
void print_matrix ( int** matrix, int n_rows, int n_columns ) {new_stack((void *)(&print_matrix), 3, 3, (size_t)(2568646267985526073UL), (size_t)(0UL), (size_t)(0UL), "print_matrix|matrix|0", "i32**", (void *)(&matrix), (size_t)8, 1, 0, 0, "print_matrix|n_rows|0", "i32", (void *)(&n_rows), (size_t)4, 0, 0, 0, "print_matrix|n_columns|0", "i32", (void *)(&n_columns), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 46 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_0: int i; register_stack_var("print_matrix|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: int j; register_stack_var("print_matrix|j|0", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ;
# 47 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for ( i = 0; i < n_rows; ++i ) {
# 48 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for ( j = 0; j < n_columns; ++j ) {
# 49 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "%d ", matrix[i][j]);
# 50 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 51 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "\n");
# 52 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 53 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp,"--------------------------------\n");
# 54 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
alias_group_changed(5, (size_t)(2568646267985526022UL), (size_t)(2568646267985526023UL), (size_t)(2568646267985526024UL), (size_t)(2568646267985526025UL), (size_t)(2568646267985526026UL)); rm_stack(false, 0UL); }
# 55 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 56 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
static char alignment_score_matrix[5][5] =
# 57 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
{
# 58 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 {-1,-1,-1,-1,-1},
# 59 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 {-1,2,-4,-2,-4},
# 60 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 {-1,-4, 2,-4,-2},
# 61 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 {-1,-2,-4, 2,-4},
# 62 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 {-1,-4,-2,-4, 2}
# 63 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
};
# 64 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 65 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) {new_stack((void *)(&clear_whitespaces_do_mapping), 2, 0, (size_t)(2568646267985526120UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 66 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 67 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 68 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 while ( traverse_index < size ) {
# 69 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 char curr_char; curr_char = (buffer[traverse_index]) ;
# 70 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 switch ( curr_char ) {
# 71 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 case 'A': case 'C': case 'G': case 'T':
# 72 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 73 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 call_lbl_1: calling((void*)&char_mapping, 1, 0UL, 1, (size_t)(0UL)); buffer[non_ws_index++] = char_mapping(curr_char);
# 74 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 break;
# 75 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 76 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 ++traverse_index;
# 77 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 78 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(6, (size_t)(2568646267985526078UL), (size_t)(2568646267985526079UL), (size_t)(2568646267985526080UL), (size_t)(2568646267985526081UL), (size_t)(2568646267985526082UL), (size_t)(2568646267985526120UL)); rm_stack(false, 0UL); return non_ws_index;
# 79 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
}
# 80 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 81 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
signed char* read_file( FILE* file, size_t* n_chars ) {new_stack((void *)(&read_file), 2, 2, (size_t)(2568646267985526162UL), (size_t)(2568646267985526163UL), "read_file|file|0", "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0, "read_file|n_chars|0", "i64*", (void *)(&n_chars), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 82 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(2, (size_t)(2568646267985526122UL), (size_t)(2568646267985526123UL)); call_lbl_2: calling((void*)&fseek, 2, 0UL, 3, (size_t)(2568646267985526162UL), (size_t)(0UL), (size_t)(0UL)); fseek (file, 0L, 2);
# 83 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_0: long file_size; register_stack_var("read_file|file_size|0", "i64", (void *)(&file_size), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_3: calling((void*)&ftell, 3, 0UL, 1, (size_t)(2568646267985526162UL)); file_size = (ftell(file)) ;
# 84 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(1, (size_t)(2568646267985526124UL)); call_lbl_5: calling((void*)&fseek, 5, 0UL, 3, (size_t)(2568646267985526162UL), (size_t)(0UL), (size_t)(0UL)); fseek (file, 0L, 0);
# 85 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 86 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_1: signed char *file_buffer; register_stack_var("read_file|file_buffer|0", "i8*", (void *)(&file_buffer), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 2568646267985526143UL, 0, 0)) ;
# 87 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 88 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(1, (size_t)(2568646267985526125UL)); lbl_2: size_t n_read_from_file; register_stack_var("read_file|n_read_from_file|0", "i64", (void *)(&n_read_from_file), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } default: { chimes_error(); } } } call_lbl_8: calling((void*)&fread, 8, 0UL, 4, (size_t)(2568646267985526143UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2568646267985526162UL)); n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 89 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 file_buffer[file_size] = '\n';
# 90 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 91 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 92 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 call_lbl_9: calling((void*)&clear_whitespaces_do_mapping, 9, 0UL, 2, (size_t)(2568646267985526143UL), (size_t)(0UL)); *n_chars = clear_whitespaces_do_mapping(file_buffer, file_size);
# 93 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(3, (size_t)(2568646267985526126UL), (size_t)(2568646267985526143UL), (size_t)(2568646267985526163UL)); rm_stack(true, 2568646267985526143UL); return file_buffer;
# 94 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
}
# 95 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 96 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int find_diag(int row, int col) {new_stack((void *)(&find_diag), 2, 0, (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 97 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(2, (size_t)(2568646267985526173UL), (size_t)(2568646267985526174UL)); rm_stack(false, 0UL); return (n_tiles_y - 1) + (col - row);
# 98 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
}
# 99 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 100 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
int main ( int argc, char* argv[] ) {init_chimes(); new_stack((void *)(&main), 2, 2, (size_t)(0UL), (size_t)(2568646267985526969UL), "main|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 101 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_0: int i; register_stack_var("main|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: int j; register_stack_var("main|j|0", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } ;
# 102 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_2: int nthreads; register_stack_var("main|nthreads|0", "i32", (void *)(&nthreads), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } nthreads = (1) ;
# 103 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 104 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 if ( argc < 5 ) {
# 105 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stderrp, "Usage: %s fileName1 fileName2 tileWidth tileHeight\n", argv[0]);
# 106 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(6, (size_t)(2568646267985526188UL), (size_t)(2568646267985526189UL), (size_t)(2568646267985526190UL), (size_t)(2568646267985526193UL), (size_t)(2568646267985526194UL), (size_t)(2568646267985526195UL)); exit(1);
# 107 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 108 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 109 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_3: char *file_name_1; register_stack_var("main|file_name_1|0", "i8*", (void *)(&file_name_1), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_4; } file_name_1 = (argv[1]) ;
# 110 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_4: char *file_name_2; register_stack_var("main|file_name_2|0", "i8*", (void *)(&file_name_2), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_5; } file_name_2 = (argv[2]) ;
# 111 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 112 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(6, (size_t)(2568646267985526188UL), (size_t)(2568646267985526189UL), (size_t)(2568646267985526190UL), (size_t)(2568646267985526193UL), (size_t)(2568646267985526194UL), (size_t)(2568646267985526195UL)); tile_width = (int) atoi (argv[3]);
# 113 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(1, (size_t)(2568646267985526979UL)); tile_height = (int) atoi (argv[4]);
# 114 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 115 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_5: FILE *file_1; register_stack_var("main|file_1|0", "%struct.__sFILE*", (void *)(&file_1), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_6; } file_1 = (fopen(file_name_1, "r")) ;
# 116 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 if (!file_1) { fprintf(__stderrp, "could not open file %s\n",file_name_1); alias_group_changed(3, (size_t)(2568646267985526196UL), (size_t)(2568646267985526197UL), (size_t)(2568646267985526979UL)); exit(1); }
# 117 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_6: size_t n_char_in_file_1; register_stack_var("main|n_char_in_file_1|0", "i64", (void *)(&n_char_in_file_1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } n_char_in_file_1 = (0) ;
# 118 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(3, (size_t)(2568646267985526196UL), (size_t)(2568646267985526197UL), (size_t)(2568646267985526979UL)); call_lbl_14: calling((void*)&read_file, 14, 2568646267985526653UL, 2, (size_t)(2568646267985526258UL), (size_t)(2568646267985526197UL)); string_1 = read_file(file_1, &n_char_in_file_1);
# 119 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "Size of input string 1 is %u\n", (unsigned)n_char_in_file_1 );
# 120 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 121 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_7: FILE *file_2; register_stack_var("main|file_2|0", "%struct.__sFILE*", (void *)(&file_2), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_8; } file_2 = (fopen(file_name_2, "r")) ;
# 122 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 if (!file_2) { fprintf(__stderrp, "could not open file %s\n",file_name_2); alias_group_changed(3, (size_t)(2568646267985526198UL), (size_t)(2568646267985526199UL), (size_t)(2568646267985526977UL)); exit(1); }
# 123 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_8: size_t n_char_in_file_2; register_stack_var("main|n_char_in_file_2|0", "i64", (void *)(&n_char_in_file_2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } n_char_in_file_2 = (0) ;
# 124 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(3, (size_t)(2568646267985526198UL), (size_t)(2568646267985526199UL), (size_t)(2568646267985526977UL)); call_lbl_21: calling((void*)&read_file, 21, 2568646267985526653UL, 2, (size_t)(2568646267985526279UL), (size_t)(2568646267985526199UL)); string_2 = read_file(file_2, &n_char_in_file_2);
# 125 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "Size of input string 2 is %u\n", (unsigned)n_char_in_file_2 );
# 126 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 127 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "Tile width is %d\n", tile_width);
# 128 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "Tile height is %d\n", tile_height);
# 129 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 130 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 if (n_char_in_file_1 % tile_width)
# 131 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 { fprintf(__stderrp, "tile width does not evenly divide string1\n"); alias_group_changed(12, (size_t)(2568646267985526191UL), (size_t)(2568646267985526192UL), (size_t)(2568646267985526360UL), (size_t)(2568646267985526364UL), (size_t)(2568646267985526400UL), (size_t)(2568646267985526491UL), (size_t)(2568646267985526752UL), (size_t)(2568646267985526977UL), (size_t)(2568646267985526979UL), (size_t)(2568646267985526983UL), (size_t)(2568646267985526985UL), (size_t)(2568646267985526987UL)); exit(1); }
# 132 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 133 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 if (n_char_in_file_2 % tile_height)
# 134 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 { fprintf(__stderrp, "tile height does not evenly divide string2\n"); alias_group_changed(12, (size_t)(2568646267985526191UL), (size_t)(2568646267985526192UL), (size_t)(2568646267985526360UL), (size_t)(2568646267985526364UL), (size_t)(2568646267985526400UL), (size_t)(2568646267985526491UL), (size_t)(2568646267985526752UL), (size_t)(2568646267985526977UL), (size_t)(2568646267985526979UL), (size_t)(2568646267985526983UL), (size_t)(2568646267985526985UL), (size_t)(2568646267985526987UL)); exit(1); }
# 135 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 136 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 n_tiles_x = n_char_in_file_1/tile_width;
# 137 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 n_tiles_y = n_char_in_file_2/tile_height;
# 138 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 139 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 140 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*(n_tiles_x + n_tiles_y - 1), 2568646267985526400UL, 0, 0);
# 141 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 142 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 2568646267985526364UL, 1, 0);
# 143 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (i = 0; i < n_tiles_x; i++) {
# 144 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 2568646267985526360UL, 0, 0);
# 145 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1 * (i * tile_width + j); };
# 147 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 call_lbl_34: calling((void*)&find_diag, 34, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); tile_diag[find_diag(0,i)] = -1*(i*tile_width);
# 148 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 149 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 150 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 2568646267985526364UL, 1, 0);
# 151 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (i = 0; i < n_tiles_y; i++) {
# 152 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 2568646267985526360UL, 0, 0);
# 153 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1 * (i * tile_height + j); };
# 155 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 call_lbl_37: calling((void*)&find_diag, 37, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); tile_diag[find_diag(i,0)] = -1*(i*tile_height);
# 156 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 157 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 158 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 2568646267985526491UL, 1, 0);
# 159 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (i = 0; i < nthreads; i++) {
# 160 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 2568646267985526752UL, 1, 0);
# 161 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (j = 0; j < tile_height + 1; j++) { worker_tiles[i][j] = (int *)malloc_wrapper(sizeof(int) * (tile_width + 1), 2568646267985526754UL, 0, 0); };
# 163 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 164 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 165 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_9: struct timeval begin; register_stack_var("main|begin|0", "%struct.timeval = type { i64, i32 }", (void *)(&begin), (size_t)16, 0, 1, 0); if (____chimes_replaying) { goto lbl_10; } lbl_10: struct timeval end; register_stack_var("main|end|0", "%struct.timeval = type { i64, i32 }", (void *)(&end), (size_t)16, 0, 1, 0); if (____chimes_replaying) { goto lbl_11; } ;
# 166 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(12, (size_t)(2568646267985526191UL), (size_t)(2568646267985526192UL), (size_t)(2568646267985526360UL), (size_t)(2568646267985526364UL), (size_t)(2568646267985526400UL), (size_t)(2568646267985526491UL), (size_t)(2568646267985526752UL), (size_t)(2568646267985526977UL), (size_t)(2568646267985526979UL), (size_t)(2568646267985526983UL), (size_t)(2568646267985526985UL), (size_t)(2568646267985526987UL)); call_lbl_42: calling((void*)&gettimeofday, 42, 0UL, 2, (size_t)(2568646267985526200UL), (size_t)(2568646267985527005UL)); gettimeofday(&begin,0);
# 167 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 168 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 169 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for ( i = 0; i < n_tiles_y; i++ ) {
# 170 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for ( j = 0; j < n_tiles_x; j++ ) {
# 171 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 172 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 {
# 173 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_11: int ii; register_stack_var("main|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } lbl_12: int jj; register_stack_var("main|jj|0", "i32", (void *)(&jj), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } ;
# 174 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_13: int threadId; register_stack_var("main|threadId|0", "i32", (void *)(&threadId), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_14; } threadId = (0) ;
# 175 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_14: int **local_matrix; register_stack_var("main|local_matrix|0", "i32**", (void *)(&local_matrix), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_15; } local_matrix = (worker_tiles[threadId]) ;
# 176 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_15: int *tile_edge_x; register_stack_var("main|tile_edge_x|0", "i32*", (void *)(&tile_edge_x), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_16; } tile_edge_x = (tile_edges_x[j]) ;
# 177 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_16: int *tile_edge_y; register_stack_var("main|tile_edge_y|0", "i32*", (void *)(&tile_edge_y), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_17; } tile_edge_y = (tile_edges_y[i]) ;
# 178 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_17: int diag_index; register_stack_var("main|diag_index|0", "i32", (void *)(&diag_index), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_18; } call_lbl_43: calling((void*)&find_diag, 43, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); diag_index = (find_diag(i, j)) ;
# 179 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 180 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii - 1]; };
# 182 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 183 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (jj = 1; jj < tile_width + 1; ++jj) { local_matrix[0][jj] = tile_edge_x[jj - 1]; };
# 185 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 186 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 local_matrix[0][0] = tile_diag[diag_index];
# 187 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 188 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 189 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for ( jj = 1; jj < tile_width+1; ++jj ) {
# 190 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_18: signed char char_from_1; register_stack_var("main|char_from_1|0", "i8", (void *)(&char_from_1), (size_t)1, 0, 0, 0); if (____chimes_replaying) { goto lbl_19; } char_from_1 = (string_1[(j) * tile_width + jj - 1]) ;
# 191 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_19: signed char char_from_2; register_stack_var("main|char_from_2|0", "i8", (void *)(&char_from_2), (size_t)1, 0, 0, 0); if (____chimes_replaying) { goto lbl_20; } char_from_2 = (string_2[(i) * tile_height + ii - 1]) ;
# 192 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 193 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_20: int diag_score; register_stack_var("main|diag_score|0", "i32", (void *)(&diag_score), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_21; } diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 194 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_21: int left_score; register_stack_var("main|left_score|0", "i32", (void *)(&left_score), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_22; } left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 195 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_22: int top_score; register_stack_var("main|top_score|0", "i32", (void *)(&top_score), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_23; } top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 196 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 197 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_23: int bigger_of_left_top; register_stack_var("main|bigger_of_left_top|0", "i32", (void *)(&bigger_of_left_top), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_24; } bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 198 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 199 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 200 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 201 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 202 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (ii = 1; ii < tile_height + 1; ++ii) { tile_edge_y[ii - 1] = local_matrix[ii][tile_width]; };
# 204 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 205 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (jj = 1; jj < tile_width + 1; ++jj) { tile_edge_x[jj - 1] = local_matrix[tile_height][jj]; };
# 207 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 208 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 tile_diag[diag_index] = local_matrix[tile_height][tile_width];
# 209 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 210 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 211 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 212 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 213 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(18, (size_t)(2568646267985526191UL), (size_t)(2568646267985526192UL), (size_t)(2568646267985526202UL), (size_t)(2568646267985526203UL), (size_t)(2568646267985526204UL), (size_t)(2568646267985526205UL), (size_t)(2568646267985526206UL), (size_t)(2568646267985526207UL), (size_t)(2568646267985526208UL), (size_t)(2568646267985526209UL), (size_t)(2568646267985526210UL), (size_t)(2568646267985526211UL), (size_t)(2568646267985526212UL), (size_t)(2568646267985526213UL), (size_t)(2568646267985526214UL), (size_t)(2568646267985526360UL), (size_t)(2568646267985526400UL), (size_t)(2568646267985526754UL)); call_lbl_45: calling((void*)&checkpoint, 45, 0UL, 0); checkpoint();
# 214 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 215 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 216 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 217 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 218 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(18, (size_t)(2568646267985526191UL), (size_t)(2568646267985526192UL), (size_t)(2568646267985526202UL), (size_t)(2568646267985526203UL), (size_t)(2568646267985526204UL), (size_t)(2568646267985526205UL), (size_t)(2568646267985526206UL), (size_t)(2568646267985526207UL), (size_t)(2568646267985526208UL), (size_t)(2568646267985526209UL), (size_t)(2568646267985526210UL), (size_t)(2568646267985526211UL), (size_t)(2568646267985526212UL), (size_t)(2568646267985526213UL), (size_t)(2568646267985526214UL), (size_t)(2568646267985526360UL), (size_t)(2568646267985526400UL), (size_t)(2568646267985526754UL)); call_lbl_47: calling((void*)&gettimeofday, 47, 0UL, 2, (size_t)(2568646267985526201UL), (size_t)(2568646267985527005UL)); gettimeofday(&end,0);
# 219 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 220 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 221 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_24: int diag_zero; register_stack_var("main|diag_zero|0", "i32", (void *)(&diag_zero), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_25; } call_lbl_49: calling((void*)&find_diag, 49, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); diag_zero = (find_diag(0, 0)) ;
# 222 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 lbl_25: int score; register_stack_var("main|score|0", "i32", (void *)(&score), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(14): { goto call_lbl_14; } case(21): { goto call_lbl_21; } case(34): { goto call_lbl_34; } case(37): { goto call_lbl_37; } case(42): { goto call_lbl_42; } case(43): { goto call_lbl_43; } case(45): { goto call_lbl_45; } case(47): { goto call_lbl_47; } case(49): { goto call_lbl_49; } default: { chimes_error(); } } } score = (tile_diag[diag_zero]) ;
# 223 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "score: %d\n", score);
# 224 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 225 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (i = 0; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 2568646267985526360UL); };
# 227 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 free_wrapper(tile_edges_x, 2568646267985526364UL);
# 228 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 229 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (i = 0; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 2568646267985526360UL); };
# 231 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 free_wrapper(tile_edges_y, 2568646267985526364UL);
# 232 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 233 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 free_wrapper(tile_diag, 2568646267985526400UL);
# 234 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 235 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (i = 0; i < nthreads; i++) {
# 236 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 for (j = 0; j < tile_height + 1; j++) { free_wrapper(worker_tiles[i][j], 2568646267985526754UL); };
# 238 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 free_wrapper(worker_tiles[i], 2568646267985526752UL);
# 239 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 }
# 240 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 free_wrapper(worker_tiles, 2568646267985526491UL);
# 241 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
# 242 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
 alias_group_changed(4, (size_t)(2568646267985526191UL), (size_t)(2568646267985526192UL), (size_t)(2568646267985526215UL), (size_t)(2568646267985526216UL)); rm_stack(false, 0UL); return 0;
# 243 "/Users/jmg3/num-debug/src/examples/cpp/smithWaterman/smith_waterman.cpp"
}


static int module_init() {
    init_module(2568646267985525997UL, 23, 5, 2568646267985525997UL + 988UL, 2568646267985525997UL + 403UL, 2568646267985525997UL + 199UL, 2568646267985525997UL + 261UL, 2568646267985525997UL + 198UL, 2568646267985525997UL + 242UL, 2568646267985525997UL + 210UL, 2568646267985525997UL + 363UL, 2568646267985525997UL + 197UL, 2568646267985525997UL + 242UL, 2568646267985525997UL + 986UL, 2568646267985525997UL + 367UL, 2568646267985525997UL + 193UL, 2568646267985525997UL + 972UL, 2568646267985525997UL + 494UL, 2568646267985525997UL + 755UL, 2568646267985525997UL + 81UL, 2568646267985525997UL + 123UL, 2568646267985525997UL + 25UL, 2568646267985525997UL + 76UL, 2568646267985525997UL + 972UL, 2568646267985525997UL + 242UL, 2568646267985525997UL + 367UL, 2568646267985525997UL + 363UL, 2568646267985525997UL + 980UL, 2568646267985525997UL + 656UL, 2568646267985525997UL + 201UL, 2568646267985525997UL + 282UL, 2568646267985525997UL + 991UL, 2568646267985525997UL + 50UL, 2568646267985525997UL + 990UL, 2568646267985525997UL + 494UL, 2568646267985525997UL + 755UL, 2568646267985525997UL + 757UL, 2568646267985525997UL + 209UL, 2568646267985525997UL + 363UL, 2568646267985525997UL + 208UL, 2568646267985525997UL + 755UL, 2568646267985525997UL + 76UL, 2568646267985525997UL + 57UL, 2568646267985525997UL + 125UL, 2568646267985525997UL + 165UL, 2568646267985525997UL + 126UL, 2568646267985525997UL + 166UL, 2568646267985525997UL + 128UL, 2568646267985525997UL + 146UL, "Nucleotide", 0, "__sFILE", 19, "unsigned char*", (int)__builtin_offsetof(struct __sFILE, _p), "int", (int)__builtin_offsetof(struct __sFILE, _r), "int", (int)__builtin_offsetof(struct __sFILE, _w), "short", (int)__builtin_offsetof(struct __sFILE, _flags), "short", (int)__builtin_offsetof(struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _bf), "int", (int)__builtin_offsetof(struct __sFILE, _lbfsize), "*", (int)__builtin_offsetof(struct __sFILE, _close), "*", (int)__builtin_offsetof(struct __sFILE, _read), "*", (int)__builtin_offsetof(struct __sFILE, _seek), "*", (int)__builtin_offsetof(struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof(struct __sFILE, _extra), "int", (int)__builtin_offsetof(struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof(struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof(struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _lb), "int", (int)__builtin_offsetof(struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof(struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof(struct __sbuf, _base), "int", (int)__builtin_offsetof(struct __sbuf, _size), "timeval", 2, "long int", (int)__builtin_offsetof(struct timeval, tv_sec), "int", (int)__builtin_offsetof(struct timeval, tv_usec));
    register_global_var("global|string_1", "i8*", (void *)(&string_1), 8, 1, 0, 0);
    register_global_var("global|string_2", "i8*", (void *)(&string_2), 8, 1, 0, 0);
    register_global_var("global|tile_width", "i32", (void *)(&tile_width), 4, 0, 0, 0);
    register_global_var("global|tile_height", "i32", (void *)(&tile_height), 4, 0, 0, 0);
    register_global_var("global|n_tiles_x", "i32", (void *)(&n_tiles_x), 4, 0, 0, 0);
    register_global_var("global|n_tiles_y", "i32", (void *)(&n_tiles_y), 4, 0, 0, 0);
    register_global_var("global|tile_edges_x", "i32**", (void *)(&tile_edges_x), 8, 1, 0, 0);
    register_global_var("global|tile_edges_y", "i32**", (void *)(&tile_edges_y), 8, 1, 0, 0);
    register_global_var("global|tile_diag", "i32*", (void *)(&tile_diag), 8, 1, 0, 0);
    register_global_var("global|nthreads", "i32", (void *)(&nthreads), 4, 0, 0, 0);
    register_global_var("global|worker_tiles", "i32***", (void *)(&worker_tiles), 8, 1, 0, 0);
    register_global_var("global|alignment_score_matrix", "[5 x [5 x i8]]", (void *)(&alignment_score_matrix), 25, 0, 0, 0);
    return 0;
}

static int __libchimes_module_init = module_init();
