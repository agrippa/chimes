# 1 "LULESH.cc.pre.transformed.cpp"
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
# 1 "LULESH.cc.pre.transformed.cpp" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
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
extern void calling(int lbl, size_t set_return_alias, unsigned naliases, ...);
extern int get_next_call();
extern void new_stack(unsigned n_local_arg_aliases, unsigned nargs, ...);
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
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, unsigned nlocals, ...);
extern void leaving_omp_parallel();
# 44 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }


extern int ____chimes_replaying;
# 3 "<command line>" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 4 "<command line>" 2
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
# 151 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 152 "/usr/include/Availability.h" 2 3 4
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
# 5 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc" 2
# 66 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
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
# 67 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc" 2
# 67 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"

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
# 69 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc" 2
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

extern long timezone __asm("_" "timezone") ;

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock") ;
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime") ;
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime") ;
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime") ;
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



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep") ;

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
# 70 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc" 2
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
# 71 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc" 2
# 71 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 72 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 73 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 74 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
enum { VolumeError = -1, QStopError = -2 } ;
# 75 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 76 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 77 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 78 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 79 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 80 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 81 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
typedef float real4 ;
# 82 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
typedef double real8 ;
# 83 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
typedef long double real10 ;
# 84 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 85 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
typedef int Index_t ;
# 86 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
typedef int Int_t ;
# 87 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 88 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
typedef real8 Real_t ;
# 89 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 90 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
inline real8 SQRT(real8 arg) {new_stack(1, 1, (size_t)(0UL), "SQRT|arg|0", "double", (void *)(&arg), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } alias_group_changed(1, (size_t)(1867UL)); rm_stack(false, 0UL); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); return sqrt(arg) ; }
# 91 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 92 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
inline real8 CBRT(real8 arg) {new_stack(1, 1, (size_t)(0UL), "CBRT|arg|0", "double", (void *)(&arg), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } alias_group_changed(1, (size_t)(10371UL)); rm_stack(false, 0UL); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); return cbrt(arg) ; }
# 93 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 94 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
inline real8 FABS(real8 arg) {new_stack(1, 1, (size_t)(0UL), "FABS|arg|0", "double", (void *)(&arg), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } } alias_group_changed(1, (size_t)(1631UL)); rm_stack(false, 0UL); return fabs(arg) ; }
# 103 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 103 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
struct Mesh {
# 235 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 235 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* x ;
# 236 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* y ;
# 237 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* z ;
# 238 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 239 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* xd ;
# 240 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* yd ;
# 241 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* zd ;
# 242 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 243 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* xdd ;
# 244 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* ydd ;
# 245 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* zdd ;
# 246 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 247 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* fx ;
# 248 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* fy ;
# 249 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* fz ;
# 250 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 251 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* nodalMass ;
# 252 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 253 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* symmX ;
# 254 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* symmY ;
# 255 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* symmZ ;
# 256 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 257 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 258 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 259 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* matElemlist ;
# 260 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* nodelist ;
# 261 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 262 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* lxim ;
# 263 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* lxip ;
# 264 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* letam ;
# 265 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* letap ;
# 266 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* lzetam ;
# 267 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t* lzetap ;
# 268 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 269 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Int_t* elemBC ;
# 270 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 271 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* dxx ;
# 272 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* dyy ;
# 273 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* dzz ;
# 274 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 275 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delv_xi ;
# 276 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delv_eta ;
# 277 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delv_zeta ;
# 278 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 279 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delx_xi ;
# 280 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delx_eta ;
# 281 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delx_zeta ;
# 282 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 283 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* e ;
# 284 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 285 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* p ;
# 286 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* q ;
# 287 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* ql ;
# 288 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* qq ;
# 289 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 290 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* v ;
# 291 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* volo ;
# 292 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* vnew ;
# 293 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* delv ;
# 294 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* vdov ;
# 295 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 296 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* arealg ;
# 297 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 298 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* ss ;
# 299 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 300 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* elemMass ;
# 301 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 302 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 303 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 304 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dtfixed ;
# 305 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t time ;
# 306 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t deltatime ;
# 307 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t deltatimemultlb ;
# 308 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t deltatimemultub ;
# 309 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t stoptime ;
# 310 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 311 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t u_cut ;
# 312 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t hgcoef ;
# 313 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qstop ;
# 314 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t monoq_max_slope ;
# 315 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t monoq_limiter_mult ;
# 316 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t e_cut ;
# 317 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t p_cut ;
# 318 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t ss4o3 ;
# 319 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t q_cut ;
# 320 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t v_cut ;
# 321 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qlc_monoq ;
# 322 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qqc_monoq ;
# 323 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qqc ;
# 324 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t eosvmax ;
# 325 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t eosvmin ;
# 326 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pmin ;
# 327 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t emin ;
# 328 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dvovmax ;
# 329 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t refdens ;
# 330 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 331 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dtcourant ;
# 332 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dthydro ;
# 333 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dtmax ;
# 334 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 335 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Int_t cycle ;
# 336 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 337 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t sizeX ;
# 338 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t sizeY ;
# 339 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t sizeZ ;
# 340 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 341 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t numElem ;
# 342 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t numNode ;
# 343 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
} mesh ;
# 344 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 345 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 346 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 347 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 348 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 349 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 350 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 void AllocateNodalPersistent(Mesh *mesh, size_t size)
# 351 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {new_stack(2, 2, (size_t)(148UL), (size_t)(0UL), "AllocateNodalPersistent|mesh|0", "%struct.Mesh*", (void *)(&mesh), (size_t)8, 1, 0, 0, "AllocateNodalPersistent|size|0", "i64", (void *)(&size), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } default: { exit(42); } } }
# 352 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->x = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 353 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->y = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 354 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->z = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 355 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 356 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->xd = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 357 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->yd = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 358 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->zd = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 359 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->xd, 0x00, size * sizeof(Real_t));
# 360 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->yd, 0x00, size * sizeof(Real_t));
# 361 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->zd, 0x00, size * sizeof(Real_t));
# 362 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 363 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->xdd = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 364 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->ydd = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 365 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->zdd = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 366 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->xdd, 0x00, size * sizeof(Real_t));
# 367 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_4: calling(4, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->ydd, 0x00, size * sizeof(Real_t));
# 368 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_5: calling(5, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->zdd, 0x00, size * sizeof(Real_t));
# 369 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 370 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->fx = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 371 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->fy = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 372 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->fz = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 373 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 374 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->nodalMass = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 9UL, 0, 0);
# 375 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_6: calling(6, 0UL, 3, (size_t)(9UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->nodalMass, 0x00, size * sizeof(Real_t));
# 376 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(3, (size_t)(1UL), (size_t)(2UL), (size_t)(148UL)); rm_stack(false, 0UL); }
# 377 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 378 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 void AllocateElemPersistent(Mesh *mesh, size_t size)
# 379 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {new_stack(2, 2, (size_t)(348UL), (size_t)(0UL), "AllocateElemPersistent|mesh|0", "%struct.Mesh*", (void *)(&mesh), (size_t)8, 1, 0, 0, "AllocateElemPersistent|size|0", "i64", (void *)(&size), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 380 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->matElemlist = (Index_t *)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 381 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->nodelist = (Index_t*)malloc_wrapper(size * 8 * sizeof(Index_t), 167UL, 0, 0);
# 382 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 383 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->lxim = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 384 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->lxip = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 385 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->letam = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 386 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->letap = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 387 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->lzetam = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 388 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->lzetap = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 167UL, 0, 0);
# 389 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 390 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->elemBC = (Int_t *)malloc_wrapper(size * sizeof(Int_t), 167UL, 0, 0);
# 391 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 392 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->e = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 393 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 3, (size_t)(167UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->e, 0x00, size * sizeof(Real_t));
# 394 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 395 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->p = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 396 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 3, (size_t)(167UL), (size_t)(0UL), (size_t)(0UL)); memset(mesh->p, 0x00, size * sizeof(Real_t));
# 397 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->q = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 398 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->ql= (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 399 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->qq= (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 400 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 401 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->v = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 402 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_0: int i; register_stack_var("AllocateElemPersistent|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { exit(42); } } } for ( i = (0); i < size; i++) { (mesh->v)[i] = 1.; } };
# 403 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 404 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->volo = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 405 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delv = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 406 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->vdov = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 407 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 408 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->arealg = (Real_t *)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 409 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 410 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->ss = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 411 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 412 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->elemMass = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 167UL, 0, 0);
# 413 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(5, (size_t)(158UL), (size_t)(159UL), (size_t)(160UL), (size_t)(167UL), (size_t)(348UL)); rm_stack(false, 0UL); }
# 414 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 415 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 416 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 417 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 void AllocateElemTemporary(Mesh *mesh, size_t size)
# 418 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {new_stack(2, 2, (size_t)(427UL), (size_t)(0UL), "AllocateElemTemporary|mesh|0", "%struct.Mesh*", (void *)(&mesh), (size_t)8, 1, 0, 0, "AllocateElemTemporary|size|0", "i64", (void *)(&size), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 419 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->dxx = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 420 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->dyy = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 421 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->dzz = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 422 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 423 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delv_xi = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 424 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delv_eta = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 425 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delv_zeta = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 426 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 427 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delx_xi = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 428 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delx_eta = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 429 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->delx_zeta= (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 430 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 431 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->vnew = (Real_t*)malloc_wrapper(size * sizeof(Real_t), 358UL, 0, 0);
# 432 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(3, (size_t)(350UL), (size_t)(351UL), (size_t)(427UL)); rm_stack(false, 0UL); }
# 433 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 434 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 void AllocateNodesets(Mesh *mesh, size_t size)
# 435 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {new_stack(2, 2, (size_t)(457UL), (size_t)(0UL), "AllocateNodesets|mesh|0", "%struct.Mesh*", (void *)(&mesh), (size_t)8, 1, 0, 0, "AllocateNodesets|size|0", "i64", (void *)(&size), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 436 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->symmX = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 437UL, 0, 0);
# 437 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->symmY = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 437UL, 0, 0);
# 438 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh->symmZ = (Index_t*)malloc_wrapper(size * sizeof(Index_t), 437UL, 0, 0);
# 439 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(3, (size_t)(429UL), (size_t)(430UL), (size_t)(457UL)); rm_stack(false, 0UL); }
# 471 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 471 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 472 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void TimeIncrement()
# 473 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 474 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t targetdt; targetdt = (mesh.stoptime - mesh.time);
# 475 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 476 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ((mesh.dtfixed <= Real_t(0.0)) && (mesh.cycle != Int_t(0))) {
# 477 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t ratio;
# 478 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t olddt; olddt = (mesh.deltatime);
# 479 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 480 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 481 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t newdt; newdt = (Real_t(1.0E+20));
# 482 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (mesh.dtcourant < newdt) {
# 483 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 newdt = mesh.dtcourant / Real_t(2.0) ;
# 484 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 485 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (mesh.dthydro < newdt) {
# 486 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 newdt = mesh.dthydro * Real_t(2.0) / Real_t(3.0) ;
# 487 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 488 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 489 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ratio = newdt / olddt ;
# 490 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (ratio >= Real_t(1.0)) {
# 491 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (ratio < mesh.deltatimemultlb) {{ newdt = olddt; }; } else if (ratio > mesh.deltatimemultub) { newdt = olddt * mesh.deltatimemultub; }
# 497 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 498 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 499 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (newdt > mesh.dtmax) {
# 500 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 newdt = mesh.dtmax ;
# 501 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 502 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.deltatime = newdt ;
# 503 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 504 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 505 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 506 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ((targetdt > mesh.deltatime) &&
# 507 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (targetdt < (Real_t(4.0) * mesh.deltatime / Real_t(3.0))) ) {
# 508 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 targetdt = Real_t(2.0) * mesh.deltatime / Real_t(3.0) ;
# 509 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 510 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 511 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (targetdt < mesh.deltatime) {
# 512 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.deltatime = targetdt ;
# 513 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 514 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 515 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.time += mesh.deltatime ;
# 516 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 517 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ++mesh.cycle ;
# 518 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(5, (size_t)(1523UL), (size_t)(1524UL), (size_t)(1525UL), (size_t)(1526UL), (size_t)(14006UL)); rm_stack(false, 0UL); }
# 519 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 520 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 521 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void InitStressTermsForElems(Index_t numElem,
# 522 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *sigxx, Real_t *sigyy, Real_t *sigzz)
# 523 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(4, 0, (size_t)(0UL), (size_t)(7852UL), (size_t)(7853UL), (size_t)(7854UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 524 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 525 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 526 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 527 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < numElem ; ++i){
# 528 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 sigxx[i] = sigyy[i] = sigzz[i] = - mesh.p[i] - mesh.q[i] ;
# 529 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 530 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(8, (size_t)(7798UL), (size_t)(7799UL), (size_t)(7800UL), (size_t)(7801UL), (size_t)(7802UL), (size_t)(7852UL), (size_t)(7853UL), (size_t)(7854UL)); rm_stack(false, 0UL); }
# 531 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 532 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 533 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcElemShapeFunctionDerivatives( const Real_t* const x,
# 534 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t* const y,
# 535 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t* const z,
# 536 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t b[][8],
# 537 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* const volume )
# 538 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(5, 0, (size_t)(6651UL), (size_t)(6652UL), (size_t)(6653UL), (size_t)(6654UL), (size_t)(6655UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 539 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t x0; x0 = (x[0]); Real_t x1; x1 = (x[1]);
# 540 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t x2; x2 = (x[2]); Real_t x3; x3 = (x[3]);
# 541 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t x4; x4 = (x[4]); Real_t x5; x5 = (x[5]);
# 542 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t x6; x6 = (x[6]); Real_t x7; x7 = (x[7]);
# 543 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 544 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t y0; y0 = (y[0]); Real_t y1; y1 = (y[1]);
# 545 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t y2; y2 = (y[2]); Real_t y3; y3 = (y[3]);
# 546 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t y4; y4 = (y[4]); Real_t y5; y5 = (y[5]);
# 547 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t y6; y6 = (y[6]); Real_t y7; y7 = (y[7]);
# 548 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 549 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t z0; z0 = (z[0]); Real_t z1; z1 = (z[1]);
# 550 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t z2; z2 = (z[2]); Real_t z3; z3 = (z[3]);
# 551 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t z4; z4 = (z[4]); Real_t z5; z5 = (z[5]);
# 552 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t z6; z6 = (z[6]); Real_t z7; z7 = (z[7]);
# 553 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 554 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fjxxi; Real_t fjxet; Real_t fjxze;
# 555 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fjyxi; Real_t fjyet; Real_t fjyze;
# 556 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fjzxi; Real_t fjzet; Real_t fjzze;
# 557 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t cjxxi; Real_t cjxet; Real_t cjxze;
# 558 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t cjyxi; Real_t cjyet; Real_t cjyze;
# 559 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t cjzxi; Real_t cjzet; Real_t cjzze;
# 560 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 561 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjxxi = .125 * ( (x6-x0) + (x5-x3) - (x7-x1) - (x4-x2) );
# 562 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjxet = .125 * ( (x6-x0) - (x5-x3) + (x7-x1) - (x4-x2) );
# 563 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjxze = .125 * ( (x6-x0) + (x5-x3) + (x7-x1) + (x4-x2) );
# 564 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 565 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjyxi = .125 * ( (y6-y0) + (y5-y3) - (y7-y1) - (y4-y2) );
# 566 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjyet = .125 * ( (y6-y0) - (y5-y3) + (y7-y1) - (y4-y2) );
# 567 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjyze = .125 * ( (y6-y0) + (y5-y3) + (y7-y1) + (y4-y2) );
# 568 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 569 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjzxi = .125 * ( (z6-z0) + (z5-z3) - (z7-z1) - (z4-z2) );
# 570 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjzet = .125 * ( (z6-z0) - (z5-z3) + (z7-z1) - (z4-z2) );
# 571 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fjzze = .125 * ( (z6-z0) + (z5-z3) + (z7-z1) + (z4-z2) );
# 572 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 573 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 574 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjxxi = (fjyet * fjzze) - (fjzet * fjyze);
# 575 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjxet = - (fjyxi * fjzze) + (fjzxi * fjyze);
# 576 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjxze = (fjyxi * fjzet) - (fjzxi * fjyet);
# 577 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 578 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjyxi = - (fjxet * fjzze) + (fjzet * fjxze);
# 579 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjyet = (fjxxi * fjzze) - (fjzxi * fjxze);
# 580 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjyze = - (fjxxi * fjzet) + (fjzxi * fjxet);
# 581 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 582 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjzxi = (fjxet * fjyze) - (fjyet * fjxze);
# 583 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjzet = - (fjxxi * fjyze) + (fjyxi * fjxze);
# 584 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 cjzze = (fjxxi * fjyet) - (fjyxi * fjxet);
# 585 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 586 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 587 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 588 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 589 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 590 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][0] = - cjxxi - cjxet - cjxze;
# 591 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][1] = cjxxi - cjxet - cjxze;
# 592 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][2] = cjxxi + cjxet - cjxze;
# 593 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][3] = - cjxxi + cjxet - cjxze;
# 594 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][4] = -b[0][2];
# 595 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][5] = -b[0][3];
# 596 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][6] = -b[0][0];
# 597 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[0][7] = -b[0][1];
# 598 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 599 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][0] = - cjyxi - cjyet - cjyze;
# 600 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][1] = cjyxi - cjyet - cjyze;
# 601 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][2] = cjyxi + cjyet - cjyze;
# 602 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][3] = - cjyxi + cjyet - cjyze;
# 603 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][4] = -b[1][2];
# 604 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][5] = -b[1][3];
# 605 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][6] = -b[1][0];
# 606 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[1][7] = -b[1][1];
# 607 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 608 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][0] = - cjzxi - cjzet - cjzze;
# 609 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][1] = cjzxi - cjzet - cjzze;
# 610 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][2] = cjzxi + cjzet - cjzze;
# 611 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][3] = - cjzxi + cjzet - cjzze;
# 612 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][4] = -b[2][2];
# 613 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][5] = -b[2][3];
# 614 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][6] = -b[2][0];
# 615 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 b[2][7] = -b[2][1];
# 616 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 617 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 618 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *volume = Real_t(8.) * ( fjxet * cjxet + fjyet * cjyet + fjzet * cjzet);
# 619 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(49, (size_t)(5990UL), (size_t)(5991UL), (size_t)(5992UL), (size_t)(5993UL), (size_t)(5994UL), (size_t)(5995UL), (size_t)(5996UL), (size_t)(5997UL), (size_t)(5998UL), (size_t)(5999UL), (size_t)(6000UL), (size_t)(6001UL), (size_t)(6002UL), (size_t)(6003UL), (size_t)(6004UL), (size_t)(6005UL), (size_t)(6006UL), (size_t)(6007UL), (size_t)(6008UL), (size_t)(6009UL), (size_t)(6010UL), (size_t)(6011UL), (size_t)(6012UL), (size_t)(6013UL), (size_t)(6014UL), (size_t)(6015UL), (size_t)(6016UL), (size_t)(6017UL), (size_t)(6018UL), (size_t)(6019UL), (size_t)(6020UL), (size_t)(6021UL), (size_t)(6022UL), (size_t)(6023UL), (size_t)(6024UL), (size_t)(6025UL), (size_t)(6026UL), (size_t)(6027UL), (size_t)(6028UL), (size_t)(6029UL), (size_t)(6030UL), (size_t)(6031UL), (size_t)(6032UL), (size_t)(6033UL), (size_t)(6034UL), (size_t)(6035UL), (size_t)(6036UL), (size_t)(6654UL), (size_t)(6655UL)); rm_stack(false, 0UL); }
# 620 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 621 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 622 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void SumElemFaceNormal(Real_t *normalX0, Real_t *normalY0, Real_t *normalZ0,
# 623 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *normalX1, Real_t *normalY1, Real_t *normalZ1,
# 624 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *normalX2, Real_t *normalY2, Real_t *normalZ2,
# 625 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *normalX3, Real_t *normalY3, Real_t *normalZ3,
# 626 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x0, const Real_t y0, const Real_t z0,
# 627 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x1, const Real_t y1, const Real_t z1,
# 628 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x2, const Real_t y2, const Real_t z2,
# 629 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x3, const Real_t y3, const Real_t z3)
# 630 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(24, 0, (size_t)(13551UL), (size_t)(13552UL), (size_t)(13553UL), (size_t)(13554UL), (size_t)(13555UL), (size_t)(13556UL), (size_t)(13557UL), (size_t)(13558UL), (size_t)(13559UL), (size_t)(13560UL), (size_t)(13561UL), (size_t)(13562UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 631 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t bisectX0; bisectX0 = (Real_t(0.5) * (x3 + x2 - x1 - x0));
# 632 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t bisectY0; bisectY0 = (Real_t(0.5) * (y3 + y2 - y1 - y0));
# 633 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t bisectZ0; bisectZ0 = (Real_t(0.5) * (z3 + z2 - z1 - z0));
# 634 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t bisectX1; bisectX1 = (Real_t(0.5) * (x2 + x1 - x3 - x0));
# 635 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t bisectY1; bisectY1 = (Real_t(0.5) * (y2 + y1 - y3 - y0));
# 636 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t bisectZ1; bisectZ1 = (Real_t(0.5) * (z2 + z1 - z3 - z0));
# 637 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t areaX; areaX = (Real_t(0.25) * (bisectY0 * bisectZ1 - bisectZ0 * bisectY1));
# 638 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t areaY; areaY = (Real_t(0.25) * (bisectZ0 * bisectX1 - bisectX0 * bisectZ1));
# 639 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t areaZ; areaZ = (Real_t(0.25) * (bisectX0 * bisectY1 - bisectY0 * bisectX1));
# 640 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 641 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalX0 += areaX;
# 642 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalX1 += areaX;
# 643 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalX2 += areaX;
# 644 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalX3 += areaX;
# 645 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 646 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalY0 += areaY;
# 647 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalY1 += areaY;
# 648 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalY2 += areaY;
# 649 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalY3 += areaY;
# 650 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 651 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalZ0 += areaZ;
# 652 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalZ1 += areaZ;
# 653 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalZ2 += areaZ;
# 654 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *normalZ3 += areaZ;
# 655 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(45, (size_t)(13319UL), (size_t)(13320UL), (size_t)(13321UL), (size_t)(13322UL), (size_t)(13323UL), (size_t)(13324UL), (size_t)(13325UL), (size_t)(13326UL), (size_t)(13327UL), (size_t)(13328UL), (size_t)(13329UL), (size_t)(13330UL), (size_t)(13331UL), (size_t)(13332UL), (size_t)(13333UL), (size_t)(13334UL), (size_t)(13335UL), (size_t)(13336UL), (size_t)(13337UL), (size_t)(13338UL), (size_t)(13339UL), (size_t)(13340UL), (size_t)(13341UL), (size_t)(13342UL), (size_t)(13343UL), (size_t)(13344UL), (size_t)(13345UL), (size_t)(13346UL), (size_t)(13347UL), (size_t)(13348UL), (size_t)(13349UL), (size_t)(13350UL), (size_t)(13351UL), (size_t)(13551UL), (size_t)(13552UL), (size_t)(13553UL), (size_t)(13554UL), (size_t)(13555UL), (size_t)(13556UL), (size_t)(13557UL), (size_t)(13558UL), (size_t)(13559UL), (size_t)(13560UL), (size_t)(13561UL), (size_t)(13562UL)); rm_stack(false, 0UL); }
# 656 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 657 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 658 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcElemNodeNormals(Real_t pfx[8],
# 659 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfy[8],
# 660 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfz[8],
# 661 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x[8],
# 662 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y[8],
# 663 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z[8])
# 664 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(6, 0, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12951UL), (size_t)(12952UL), (size_t)(12953UL)); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } default: { exit(42); } } }
# 665 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < 8 ; ++i) {
# 666 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pfx[i] = Real_t(0.0);
# 667 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pfy[i] = Real_t(0.0);
# 668 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pfz[i] = Real_t(0.0);
# 669 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 670 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 671 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 24, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); SumElemFaceNormal(&pfx[0], &pfy[0], &pfz[0],
# 672 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[1], &pfy[1], &pfz[1],
# 673 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[2], &pfy[2], &pfz[2],
# 674 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[3], &pfy[3], &pfz[3],
# 675 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[0], y[0], z[0], x[1], y[1], z[1],
# 676 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[2], y[2], z[2], x[3], y[3], z[3]);
# 677 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 678 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 24, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); SumElemFaceNormal(&pfx[0], &pfy[0], &pfz[0],
# 679 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[4], &pfy[4], &pfz[4],
# 680 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[5], &pfy[5], &pfz[5],
# 681 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[1], &pfy[1], &pfz[1],
# 682 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[0], y[0], z[0], x[4], y[4], z[4],
# 683 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[5], y[5], z[5], x[1], y[1], z[1]);
# 684 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 685 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 24, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); SumElemFaceNormal(&pfx[1], &pfy[1], &pfz[1],
# 686 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[5], &pfy[5], &pfz[5],
# 687 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[6], &pfy[6], &pfz[6],
# 688 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[2], &pfy[2], &pfz[2],
# 689 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[1], y[1], z[1], x[5], y[5], z[5],
# 690 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[6], y[6], z[6], x[2], y[2], z[2]);
# 691 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 692 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 24, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); SumElemFaceNormal(&pfx[2], &pfy[2], &pfz[2],
# 693 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[6], &pfy[6], &pfz[6],
# 694 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[7], &pfy[7], &pfz[7],
# 695 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[3], &pfy[3], &pfz[3],
# 696 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[2], y[2], z[2], x[6], y[6], z[6],
# 697 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[7], y[7], z[7], x[3], y[3], z[3]);
# 698 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 699 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_4: calling(4, 0UL, 24, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); SumElemFaceNormal(&pfx[3], &pfy[3], &pfz[3],
# 700 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[7], &pfy[7], &pfz[7],
# 701 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[4], &pfy[4], &pfz[4],
# 702 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[0], &pfy[0], &pfz[0],
# 703 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[3], y[3], z[3], x[7], y[7], z[7],
# 704 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[4], y[4], z[4], x[0], y[0], z[0]);
# 705 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 706 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_5: calling(5, 0UL, 24, (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); SumElemFaceNormal(&pfx[4], &pfy[4], &pfz[4],
# 707 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[7], &pfy[7], &pfz[7],
# 708 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[6], &pfy[6], &pfz[6],
# 709 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &pfx[5], &pfy[5], &pfz[5],
# 710 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[4], y[4], z[4], x[7], y[7], z[7],
# 711 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x[6], y[6], z[6], x[5], y[5], z[5]);
# 712 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(10, (size_t)(12536UL), (size_t)(12537UL), (size_t)(12538UL), (size_t)(12539UL), (size_t)(12540UL), (size_t)(12541UL), (size_t)(12542UL), (size_t)(12948UL), (size_t)(12949UL), (size_t)(12950UL)); rm_stack(false, 0UL); }
# 713 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 714 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 715 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void SumElemStressesToNodeForces( const Real_t B[][8],
# 716 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t stress_xx,
# 717 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t stress_yy,
# 718 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t stress_zz,
# 719 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* const fx,
# 720 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* const fy,
# 721 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* const fz )
# 722 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(7, 0, (size_t)(13312UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(13316UL), (size_t)(13317UL), (size_t)(13318UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 723 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfx0; pfx0 = (B[0][0]); Real_t pfx1; pfx1 = (B[0][1]);
# 724 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfx2; pfx2 = (B[0][2]); Real_t pfx3; pfx3 = (B[0][3]);
# 725 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfx4; pfx4 = (B[0][4]); Real_t pfx5; pfx5 = (B[0][5]);
# 726 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfx6; pfx6 = (B[0][6]); Real_t pfx7; pfx7 = (B[0][7]);
# 727 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 728 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfy0; pfy0 = (B[1][0]); Real_t pfy1; pfy1 = (B[1][1]);
# 729 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfy2; pfy2 = (B[1][2]); Real_t pfy3; pfy3 = (B[1][3]);
# 730 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfy4; pfy4 = (B[1][4]); Real_t pfy5; pfy5 = (B[1][5]);
# 731 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfy6; pfy6 = (B[1][6]); Real_t pfy7; pfy7 = (B[1][7]);
# 732 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 733 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfz0; pfz0 = (B[2][0]); Real_t pfz1; pfz1 = (B[2][1]);
# 734 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfz2; pfz2 = (B[2][2]); Real_t pfz3; pfz3 = (B[2][3]);
# 735 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfz4; pfz4 = (B[2][4]); Real_t pfz5; pfz5 = (B[2][5]);
# 736 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pfz6; pfz6 = (B[2][6]); Real_t pfz7; pfz7 = (B[2][7]);
# 737 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 738 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[0] = -( stress_xx * pfx0 );
# 739 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[1] = -( stress_xx * pfx1 );
# 740 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[2] = -( stress_xx * pfx2 );
# 741 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[3] = -( stress_xx * pfx3 );
# 742 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[4] = -( stress_xx * pfx4 );
# 743 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[5] = -( stress_xx * pfx5 );
# 744 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[6] = -( stress_xx * pfx6 );
# 745 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx[7] = -( stress_xx * pfx7 );
# 746 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 747 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[0] = -( stress_yy * pfy0 );
# 748 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[1] = -( stress_yy * pfy1 );
# 749 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[2] = -( stress_yy * pfy2 );
# 750 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[3] = -( stress_yy * pfy3 );
# 751 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[4] = -( stress_yy * pfy4 );
# 752 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[5] = -( stress_yy * pfy5 );
# 753 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[6] = -( stress_yy * pfy6 );
# 754 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fy[7] = -( stress_yy * pfy7 );
# 755 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 756 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[0] = -( stress_zz * pfz0 );
# 757 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[1] = -( stress_zz * pfz1 );
# 758 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[2] = -( stress_zz * pfz2 );
# 759 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[3] = -( stress_zz * pfz3 );
# 760 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[4] = -( stress_zz * pfz4 );
# 761 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[5] = -( stress_zz * pfz5 );
# 762 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[6] = -( stress_zz * pfz6 );
# 763 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fz[7] = -( stress_zz * pfz7 );
# 764 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(34, (size_t)(12954UL), (size_t)(12955UL), (size_t)(12956UL), (size_t)(12957UL), (size_t)(12958UL), (size_t)(12959UL), (size_t)(12960UL), (size_t)(12961UL), (size_t)(12962UL), (size_t)(12963UL), (size_t)(12964UL), (size_t)(12965UL), (size_t)(12966UL), (size_t)(12967UL), (size_t)(12968UL), (size_t)(12969UL), (size_t)(12970UL), (size_t)(12971UL), (size_t)(12972UL), (size_t)(12973UL), (size_t)(12974UL), (size_t)(12975UL), (size_t)(12976UL), (size_t)(12977UL), (size_t)(12978UL), (size_t)(12979UL), (size_t)(12980UL), (size_t)(12981UL), (size_t)(12982UL), (size_t)(12983UL), (size_t)(12984UL), (size_t)(13316UL), (size_t)(13317UL), (size_t)(13318UL)); rm_stack(false, 0UL); }
# 765 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 766 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 767 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void IntegrateStressForElems( Index_t numElem,
# 768 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *sigxx, Real_t *sigyy, Real_t *sigzz,
# 769 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *determ)
# 770 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(5, 0, (size_t)(0UL), (size_t)(8046UL), (size_t)(8047UL), (size_t)(8048UL), (size_t)(8049UL)); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { exit(42); } } }
# 771 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t B[3][8];
# 772 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t x_local[8];
# 773 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t y_local[8];
# 774 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t z_local[8];
# 775 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fx_local[8];
# 776 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fy_local[8];
# 777 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fz_local[8];
# 778 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 779 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 780 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t k; for( k = (0); k<numElem ; ++k )
# 781 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 782 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t *elemNodes; elemNodes = (&mesh.nodelist[8 * k]);
# 783 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 784 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 785 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t lnode; for( lnode = (0); lnode<8 ; ++lnode )
# 786 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 787 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t gnode; gnode = (elemNodes[lnode]);
# 788 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x_local[lnode] = mesh.x[gnode];
# 789 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y_local[lnode] = mesh.y[gnode];
# 790 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z_local[lnode] = mesh.z[gnode];
# 791 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 792 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 793 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 794 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 5, (size_t)(7861UL), (size_t)(7862UL), (size_t)(7863UL), (size_t)(7860UL), (size_t)(8049UL)); CalcElemShapeFunctionDerivatives(x_local, y_local, z_local,
# 795 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 B, &determ[k]);
# 796 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 797 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 6, (size_t)(7860UL), (size_t)(7860UL), (size_t)(7860UL), (size_t)(7861UL), (size_t)(7862UL), (size_t)(7863UL)); CalcElemNodeNormals( B[0] , B[1], B[2],
# 798 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x_local, y_local, z_local );
# 799 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 800 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 7, (size_t)(7860UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(7864UL), (size_t)(7865UL), (size_t)(7866UL)); SumElemStressesToNodeForces( B, sigxx[k], sigyy[k], sigzz[k],
# 801 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 fx_local, fy_local, fz_local ) ;
# 802 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 803 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 804 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t lnode; for( lnode = (0); lnode<8 ; ++lnode )
# 805 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 806 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t gnode; gnode = (elemNodes[lnode]);
# 807 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[gnode] += fx_local[lnode];
# 808 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[gnode] += fy_local[lnode];
# 809 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[gnode] += fz_local[lnode];
# 810 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 811 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 812 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(15, (size_t)(1994UL), (size_t)(7855UL), (size_t)(7856UL), (size_t)(7857UL), (size_t)(7858UL), (size_t)(7859UL), (size_t)(7861UL), (size_t)(7862UL), (size_t)(7863UL), (size_t)(7867UL), (size_t)(7868UL), (size_t)(7869UL), (size_t)(7870UL), (size_t)(7871UL), (size_t)(7872UL)); rm_stack(false, 0UL); }
# 813 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 814 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 815 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CollectDomainNodesToElemNodes(const Index_t* elemToNode,
# 816 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t elemX[8],
# 817 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t elemY[8],
# 818 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t elemZ[8])
# 819 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(4, 0, (size_t)(8543UL), (size_t)(8544UL), (size_t)(8545UL), (size_t)(8546UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 820 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd0i; nd0i = (elemToNode[0]);
# 821 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd1i; nd1i = (elemToNode[1]);
# 822 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd2i; nd2i = (elemToNode[2]);
# 823 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd3i; nd3i = (elemToNode[3]);
# 824 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd4i; nd4i = (elemToNode[4]);
# 825 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd5i; nd5i = (elemToNode[5]);
# 826 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd6i; nd6i = (elemToNode[6]);
# 827 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t nd7i; nd7i = (elemToNode[7]);
# 828 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 829 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[0] = mesh.x[nd0i];
# 830 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[1] = mesh.x[nd1i];
# 831 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[2] = mesh.x[nd2i];
# 832 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[3] = mesh.x[nd3i];
# 833 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[4] = mesh.x[nd4i];
# 834 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[5] = mesh.x[nd5i];
# 835 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[6] = mesh.x[nd6i];
# 836 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemX[7] = mesh.x[nd7i];
# 837 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 838 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[0] = mesh.y[nd0i];
# 839 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[1] = mesh.y[nd1i];
# 840 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[2] = mesh.y[nd2i];
# 841 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[3] = mesh.y[nd3i];
# 842 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[4] = mesh.y[nd4i];
# 843 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[5] = mesh.y[nd5i];
# 844 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[6] = mesh.y[nd6i];
# 845 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemY[7] = mesh.y[nd7i];
# 846 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 847 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[0] = mesh.z[nd0i];
# 848 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[1] = mesh.z[nd1i];
# 849 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[2] = mesh.z[nd2i];
# 850 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[3] = mesh.z[nd3i];
# 851 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[4] = mesh.z[nd4i];
# 852 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[5] = mesh.z[nd5i];
# 853 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[6] = mesh.z[nd6i];
# 854 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elemZ[7] = mesh.z[nd7i];
# 855 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 856 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(15, (size_t)(8290UL), (size_t)(8291UL), (size_t)(8292UL), (size_t)(8293UL), (size_t)(8294UL), (size_t)(8295UL), (size_t)(8296UL), (size_t)(8297UL), (size_t)(8298UL), (size_t)(8299UL), (size_t)(8300UL), (size_t)(8301UL), (size_t)(8544UL), (size_t)(8545UL), (size_t)(8546UL)); rm_stack(false, 0UL); }
# 857 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 858 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 859 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void VoluDer(const Real_t x0, const Real_t x1, const Real_t x2,
# 860 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x3, const Real_t x4, const Real_t x5,
# 861 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y0, const Real_t y1, const Real_t y2,
# 862 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y3, const Real_t y4, const Real_t y5,
# 863 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z0, const Real_t z1, const Real_t z2,
# 864 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z3, const Real_t z4, const Real_t z5,
# 865 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* dvdx, Real_t* dvdy, Real_t* dvdz)
# 866 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(21, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(12533UL), (size_t)(12534UL), (size_t)(12535UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 867 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t twelfth; twelfth = (Real_t(1.) / Real_t(12.));
# 868 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 869 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *dvdx =
# 870 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (y1 + y2) * (z0 + z1) - (y0 + y1) * (z1 + z2) +
# 871 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (y0 + y4) * (z3 + z4) - (y3 + y4) * (z0 + z4) -
# 872 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (y2 + y5) * (z3 + z5) + (y3 + y5) * (z2 + z5);
# 873 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *dvdy =
# 874 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 - (x1 + x2) * (z0 + z1) + (x0 + x1) * (z1 + z2) -
# 875 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (x0 + x4) * (z3 + z4) + (x3 + x4) * (z0 + z4) +
# 876 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (x2 + x5) * (z3 + z5) - (x3 + x5) * (z2 + z5);
# 877 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 878 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *dvdz =
# 879 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 - (y1 + y2) * (x0 + x1) + (y0 + y1) * (x1 + x2) -
# 880 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (y0 + y4) * (x3 + x4) + (y3 + y4) * (x0 + x4) +
# 881 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (y2 + y5) * (x3 + x5) - (y3 + y5) * (x2 + x5);
# 882 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 883 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *dvdx *= twelfth;
# 884 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *dvdy *= twelfth;
# 885 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 *dvdz *= twelfth;
# 886 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(25, (size_t)(12284UL), (size_t)(12285UL), (size_t)(12286UL), (size_t)(12287UL), (size_t)(12288UL), (size_t)(12289UL), (size_t)(12290UL), (size_t)(12291UL), (size_t)(12292UL), (size_t)(12293UL), (size_t)(12294UL), (size_t)(12295UL), (size_t)(12296UL), (size_t)(12297UL), (size_t)(12298UL), (size_t)(12299UL), (size_t)(12300UL), (size_t)(12301UL), (size_t)(12302UL), (size_t)(12303UL), (size_t)(12304UL), (size_t)(12305UL), (size_t)(12533UL), (size_t)(12534UL), (size_t)(12535UL)); rm_stack(false, 0UL); }
# 887 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 888 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 889 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcElemVolumeDerivative(Real_t dvdx[8],
# 890 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dvdy[8],
# 891 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dvdz[8],
# 892 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x[8],
# 893 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y[8],
# 894 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z[8])
# 895 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(6, 0, (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL), (size_t)(9057UL), (size_t)(9058UL), (size_t)(9059UL)); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } default: { exit(42); } } }
# 896 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[1], x[2], x[3], x[4], x[5], x[7],
# 897 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[1], y[2], y[3], y[4], y[5], y[7],
# 898 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[1], z[2], z[3], z[4], z[5], z[7],
# 899 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[0], &dvdy[0], &dvdz[0]);
# 900 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[0], x[1], x[2], x[7], x[4], x[6],
# 901 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[0], y[1], y[2], y[7], y[4], y[6],
# 902 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[0], z[1], z[2], z[7], z[4], z[6],
# 903 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[3], &dvdy[3], &dvdz[3]);
# 904 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[3], x[0], x[1], x[6], x[7], x[5],
# 905 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[3], y[0], y[1], y[6], y[7], y[5],
# 906 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[3], z[0], z[1], z[6], z[7], z[5],
# 907 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[2], &dvdy[2], &dvdz[2]);
# 908 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[2], x[3], x[0], x[5], x[6], x[4],
# 909 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[2], y[3], y[0], y[5], y[6], y[4],
# 910 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[2], z[3], z[0], z[5], z[6], z[4],
# 911 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[1], &dvdy[1], &dvdz[1]);
# 912 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_4: calling(4, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[7], x[6], x[5], x[0], x[3], x[1],
# 913 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[7], y[6], y[5], y[0], y[3], y[1],
# 914 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[7], z[6], z[5], z[0], z[3], z[1],
# 915 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[4], &dvdy[4], &dvdz[4]);
# 916 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_5: calling(5, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[4], x[7], x[6], x[1], x[0], x[2],
# 917 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[4], y[7], y[6], y[1], y[0], y[2],
# 918 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[4], z[7], z[6], z[1], z[0], z[2],
# 919 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[5], &dvdy[5], &dvdz[5]);
# 920 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_6: calling(6, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[5], x[4], x[7], x[2], x[1], x[3],
# 921 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[5], y[4], y[7], y[2], y[1], y[3],
# 922 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[5], z[4], z[7], z[2], z[1], z[3],
# 923 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[6], &dvdy[6], &dvdz[6]);
# 924 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_7: calling(7, 0UL, 21, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(9054UL), (size_t)(9055UL), (size_t)(9056UL)); VoluDer(x[6], x[5], x[4], x[3], x[2], x[0],
# 925 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[6], y[5], y[4], y[3], y[2], y[0],
# 926 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[6], z[5], z[4], z[3], z[2], z[0],
# 927 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 &dvdx[7], &dvdy[7], &dvdz[7]);
# 928 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(6, (size_t)(8547UL), (size_t)(8548UL), (size_t)(8549UL), (size_t)(8550UL), (size_t)(8551UL), (size_t)(8552UL)); rm_stack(false, 0UL); }
# 929 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 930 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 931 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcElemFBHourglassForce(Real_t *xd, Real_t *yd, Real_t *zd, Real_t *hourgam0,
# 932 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *hourgam1, Real_t *hourgam2, Real_t *hourgam3,
# 933 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *hourgam4, Real_t *hourgam5, Real_t *hourgam6,
# 934 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *hourgam7, Real_t coefficient,
# 935 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *hgfx, Real_t *hgfy, Real_t *hgfz )
# 936 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(15, 0, (size_t)(12268UL), (size_t)(12269UL), (size_t)(12270UL), (size_t)(12271UL), (size_t)(12272UL), (size_t)(12273UL), (size_t)(12274UL), (size_t)(12275UL), (size_t)(12276UL), (size_t)(12277UL), (size_t)(12278UL), (size_t)(0UL), (size_t)(12280UL), (size_t)(12281UL), (size_t)(12282UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 937 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t i00; i00 = (0);
# 938 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t i01; i01 = (1);
# 939 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t i02; i02 = (2);
# 940 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t i03; i03 = (3);
# 941 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 942 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t h00; h00 = (hourgam0[i00] * xd[0] + hourgam1[i00] * xd[1] + hourgam2[i00] * xd[2] + hourgam3[i00] * xd[3] + hourgam4[i00] * xd[4] + hourgam5[i00] * xd[5] + hourgam6[i00] * xd[6] + hourgam7[i00] * xd[7]);
# 947 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 948 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t h01; h01 = (hourgam0[i01] * xd[0] + hourgam1[i01] * xd[1] + hourgam2[i01] * xd[2] + hourgam3[i01] * xd[3] + hourgam4[i01] * xd[4] + hourgam5[i01] * xd[5] + hourgam6[i01] * xd[6] + hourgam7[i01] * xd[7]);
# 953 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 954 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t h02; h02 = (hourgam0[i02] * xd[0] + hourgam1[i02] * xd[1] + hourgam2[i02] * xd[2] + hourgam3[i02] * xd[3] + hourgam4[i02] * xd[4] + hourgam5[i02] * xd[5] + hourgam6[i02] * xd[6] + hourgam7[i02] * xd[7]);
# 959 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 960 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t h03; h03 = (hourgam0[i03] * xd[0] + hourgam1[i03] * xd[1] + hourgam2[i03] * xd[2] + hourgam3[i03] * xd[3] + hourgam4[i03] * xd[4] + hourgam5[i03] * xd[5] + hourgam6[i03] * xd[6] + hourgam7[i03] * xd[7]);
# 965 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 966 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[0] = coefficient *
# 967 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam0[i00] * h00 + hourgam0[i01] * h01 +
# 968 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i02] * h02 + hourgam0[i03] * h03);
# 969 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 970 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[1] = coefficient *
# 971 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam1[i00] * h00 + hourgam1[i01] * h01 +
# 972 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam1[i02] * h02 + hourgam1[i03] * h03);
# 973 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 974 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[2] = coefficient *
# 975 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam2[i00] * h00 + hourgam2[i01] * h01 +
# 976 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i02] * h02 + hourgam2[i03] * h03);
# 977 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 978 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[3] = coefficient *
# 979 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam3[i00] * h00 + hourgam3[i01] * h01 +
# 980 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam3[i02] * h02 + hourgam3[i03] * h03);
# 981 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 982 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[4] = coefficient *
# 983 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam4[i00] * h00 + hourgam4[i01] * h01 +
# 984 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i02] * h02 + hourgam4[i03] * h03);
# 985 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 986 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[5] = coefficient *
# 987 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam5[i00] * h00 + hourgam5[i01] * h01 +
# 988 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam5[i02] * h02 + hourgam5[i03] * h03);
# 989 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 990 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[6] = coefficient *
# 991 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam6[i00] * h00 + hourgam6[i01] * h01 +
# 992 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i02] * h02 + hourgam6[i03] * h03);
# 993 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 994 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfx[7] = coefficient *
# 995 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam7[i00] * h00 + hourgam7[i01] * h01 +
# 996 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam7[i02] * h02 + hourgam7[i03] * h03);
# 997 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 998 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h00 =
# 999 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i00] * yd[0] + hourgam1[i00] * yd[1] +
# 1000 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i00] * yd[2] + hourgam3[i00] * yd[3] +
# 1001 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i00] * yd[4] + hourgam5[i00] * yd[5] +
# 1002 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i00] * yd[6] + hourgam7[i00] * yd[7];
# 1003 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1004 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h01 =
# 1005 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i01] * yd[0] + hourgam1[i01] * yd[1] +
# 1006 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i01] * yd[2] + hourgam3[i01] * yd[3] +
# 1007 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i01] * yd[4] + hourgam5[i01] * yd[5] +
# 1008 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i01] * yd[6] + hourgam7[i01] * yd[7];
# 1009 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1010 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h02 =
# 1011 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i02] * yd[0] + hourgam1[i02] * yd[1]+
# 1012 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i02] * yd[2] + hourgam3[i02] * yd[3]+
# 1013 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i02] * yd[4] + hourgam5[i02] * yd[5]+
# 1014 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i02] * yd[6] + hourgam7[i02] * yd[7];
# 1015 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1016 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h03 =
# 1017 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i03] * yd[0] + hourgam1[i03] * yd[1] +
# 1018 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i03] * yd[2] + hourgam3[i03] * yd[3] +
# 1019 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i03] * yd[4] + hourgam5[i03] * yd[5] +
# 1020 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i03] * yd[6] + hourgam7[i03] * yd[7];
# 1021 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1022 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1023 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[0] = coefficient *
# 1024 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam0[i00] * h00 + hourgam0[i01] * h01 +
# 1025 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i02] * h02 + hourgam0[i03] * h03);
# 1026 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1027 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[1] = coefficient *
# 1028 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam1[i00] * h00 + hourgam1[i01] * h01 +
# 1029 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam1[i02] * h02 + hourgam1[i03] * h03);
# 1030 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1031 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[2] = coefficient *
# 1032 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam2[i00] * h00 + hourgam2[i01] * h01 +
# 1033 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i02] * h02 + hourgam2[i03] * h03);
# 1034 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1035 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[3] = coefficient *
# 1036 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam3[i00] * h00 + hourgam3[i01] * h01 +
# 1037 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam3[i02] * h02 + hourgam3[i03] * h03);
# 1038 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1039 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[4] = coefficient *
# 1040 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam4[i00] * h00 + hourgam4[i01] * h01 +
# 1041 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i02] * h02 + hourgam4[i03] * h03);
# 1042 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1043 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[5] = coefficient *
# 1044 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam5[i00] * h00 + hourgam5[i01] * h01 +
# 1045 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam5[i02] * h02 + hourgam5[i03] * h03);
# 1046 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1047 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[6] = coefficient *
# 1048 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam6[i00] * h00 + hourgam6[i01] * h01 +
# 1049 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i02] * h02 + hourgam6[i03] * h03);
# 1050 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1051 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfy[7] = coefficient *
# 1052 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam7[i00] * h00 + hourgam7[i01] * h01 +
# 1053 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam7[i02] * h02 + hourgam7[i03] * h03);
# 1054 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1055 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h00 =
# 1056 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i00] * zd[0] + hourgam1[i00] * zd[1] +
# 1057 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i00] * zd[2] + hourgam3[i00] * zd[3] +
# 1058 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i00] * zd[4] + hourgam5[i00] * zd[5] +
# 1059 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i00] * zd[6] + hourgam7[i00] * zd[7];
# 1060 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1061 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h01 =
# 1062 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i01] * zd[0] + hourgam1[i01] * zd[1] +
# 1063 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i01] * zd[2] + hourgam3[i01] * zd[3] +
# 1064 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i01] * zd[4] + hourgam5[i01] * zd[5] +
# 1065 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i01] * zd[6] + hourgam7[i01] * zd[7];
# 1066 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1067 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h02 =
# 1068 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i02] * zd[0] + hourgam1[i02] * zd[1]+
# 1069 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i02] * zd[2] + hourgam3[i02] * zd[3]+
# 1070 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i02] * zd[4] + hourgam5[i02] * zd[5]+
# 1071 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i02] * zd[6] + hourgam7[i02] * zd[7];
# 1072 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1073 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 h03 =
# 1074 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i03] * zd[0] + hourgam1[i03] * zd[1] +
# 1075 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i03] * zd[2] + hourgam3[i03] * zd[3] +
# 1076 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i03] * zd[4] + hourgam5[i03] * zd[5] +
# 1077 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i03] * zd[6] + hourgam7[i03] * zd[7];
# 1078 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1079 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1080 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[0] = coefficient *
# 1081 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam0[i00] * h00 + hourgam0[i01] * h01 +
# 1082 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i02] * h02 + hourgam0[i03] * h03);
# 1083 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1084 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[1] = coefficient *
# 1085 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam1[i00] * h00 + hourgam1[i01] * h01 +
# 1086 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam1[i02] * h02 + hourgam1[i03] * h03);
# 1087 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1088 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[2] = coefficient *
# 1089 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam2[i00] * h00 + hourgam2[i01] * h01 +
# 1090 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i02] * h02 + hourgam2[i03] * h03);
# 1091 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1092 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[3] = coefficient *
# 1093 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam3[i00] * h00 + hourgam3[i01] * h01 +
# 1094 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam3[i02] * h02 + hourgam3[i03] * h03);
# 1095 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1096 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[4] = coefficient *
# 1097 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam4[i00] * h00 + hourgam4[i01] * h01 +
# 1098 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i02] * h02 + hourgam4[i03] * h03);
# 1099 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1100 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[5] = coefficient *
# 1101 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam5[i00] * h00 + hourgam5[i01] * h01 +
# 1102 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam5[i02] * h02 + hourgam5[i03] * h03);
# 1103 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1104 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[6] = coefficient *
# 1105 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam6[i00] * h00 + hourgam6[i01] * h01 +
# 1106 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i02] * h02 + hourgam6[i03] * h03);
# 1107 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1108 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hgfz[7] = coefficient *
# 1109 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 (hourgam7[i00] * h00 + hourgam7[i01] * h01 +
# 1110 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam7[i02] * h02 + hourgam7[i03] * h03);
# 1111 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(26, (size_t)(10378UL), (size_t)(10379UL), (size_t)(10380UL), (size_t)(10381UL), (size_t)(10382UL), (size_t)(10383UL), (size_t)(10384UL), (size_t)(10385UL), (size_t)(10386UL), (size_t)(10387UL), (size_t)(10388UL), (size_t)(10389UL), (size_t)(10390UL), (size_t)(10391UL), (size_t)(10392UL), (size_t)(10393UL), (size_t)(10394UL), (size_t)(10395UL), (size_t)(10396UL), (size_t)(10397UL), (size_t)(10398UL), (size_t)(10399UL), (size_t)(10400UL), (size_t)(12280UL), (size_t)(12281UL), (size_t)(12282UL)); rm_stack(false, 0UL); }
# 1112 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1113 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1114 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcFBHourglassForceForElems(Real_t *determ,
# 1115 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *x8n, Real_t *y8n, Real_t *z8n,
# 1116 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *dvdx, Real_t *dvdy, Real_t *dvdz,
# 1117 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t hourg)
# 1118 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(8, 8, (size_t)(10363UL), (size_t)(10364UL), (size_t)(10365UL), (size_t)(10366UL), (size_t)(10367UL), (size_t)(10368UL), (size_t)(10369UL), (size_t)(0UL), "CalcFBHourglassForceForElems|determ|0", "double*", (void *)(&determ), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|x8n|0", "double*", (void *)(&x8n), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|y8n|0", "double*", (void *)(&y8n), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|z8n|0", "double*", (void *)(&z8n), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|dvdx|0", "double*", (void *)(&dvdx), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|dvdy|0", "double*", (void *)(&dvdy), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|dvdz|0", "double*", (void *)(&dvdz), (size_t)8, 1, 0, 0, "CalcFBHourglassForceForElems|hourg|0", "double", (void *)(&hourg), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1119 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1120 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1121 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1122 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1123 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1124 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1125 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1126 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numElem; register_stack_var("CalcFBHourglassForceForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numElem = (mesh.numElem);
# 1127 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1128 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t hgfx[8]; register_stack_var("CalcFBHourglassForceForElems|hgfx|0", "[8 x double]", (void *)(hgfx), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: Real_t hgfy[8]; register_stack_var("CalcFBHourglassForceForElems|hgfy|0", "[8 x double]", (void *)(hgfy), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: Real_t hgfz[8]; register_stack_var("CalcFBHourglassForceForElems|hgfz|0", "[8 x double]", (void *)(hgfz), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; }
# 1129 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1130 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_4: Real_t coefficient; register_stack_var("CalcFBHourglassForceForElems|coefficient|0", "double", (void *)(&coefficient), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; }
# 1131 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1132 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Real_t gamma[4][8]; register_stack_var("CalcFBHourglassForceForElems|gamma|0", "[4 x [8 x double]]", (void *)(gamma), (size_t)256, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; }
# 1133 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_6: Real_t hourgam0[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam0|0", "[4 x double]", (void *)(hourgam0), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } lbl_7: Real_t hourgam1[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam1|0", "[4 x double]", (void *)(hourgam1), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } lbl_8: Real_t hourgam2[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam2|0", "[4 x double]", (void *)(hourgam2), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } lbl_9: Real_t hourgam3[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam3|0", "[4 x double]", (void *)(hourgam3), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; }
# 1134 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_10: Real_t hourgam4[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam4|0", "[4 x double]", (void *)(hourgam4), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } lbl_11: Real_t hourgam5[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam5|0", "[4 x double]", (void *)(hourgam5), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } lbl_12: Real_t hourgam6[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam6|0", "[4 x double]", (void *)(hourgam6), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } lbl_13: Real_t hourgam7[4]; register_stack_var("CalcFBHourglassForceForElems|hourgam7|0", "[4 x double]", (void *)(hourgam7), (size_t)32, 0, 0, 0); if (____chimes_replaying) { goto lbl_14; }
# 1135 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_14: Real_t xd1[8]; register_stack_var("CalcFBHourglassForceForElems|xd1|0", "[8 x double]", (void *)(xd1), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_15; } lbl_15: Real_t yd1[8]; register_stack_var("CalcFBHourglassForceForElems|yd1|0", "[8 x double]", (void *)(yd1), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_16; } lbl_16: Real_t zd1[8]; register_stack_var("CalcFBHourglassForceForElems|zd1|0", "[8 x double]", (void *)(zd1), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_17; }
# 1136 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1137 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][0] = Real_t( 1.);
# 1138 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][1] = Real_t( 1.);
# 1139 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][2] = Real_t(-1.);
# 1140 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][3] = Real_t(-1.);
# 1141 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][4] = Real_t(-1.);
# 1142 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][5] = Real_t(-1.);
# 1143 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][6] = Real_t( 1.);
# 1144 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[0][7] = Real_t( 1.);
# 1145 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][0] = Real_t( 1.);
# 1146 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][1] = Real_t(-1.);
# 1147 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][2] = Real_t(-1.);
# 1148 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][3] = Real_t( 1.);
# 1149 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][4] = Real_t(-1.);
# 1150 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][5] = Real_t( 1.);
# 1151 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][6] = Real_t( 1.);
# 1152 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[1][7] = Real_t(-1.);
# 1153 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][0] = Real_t( 1.);
# 1154 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][1] = Real_t(-1.);
# 1155 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][2] = Real_t( 1.);
# 1156 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][3] = Real_t(-1.);
# 1157 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][4] = Real_t( 1.);
# 1158 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][5] = Real_t(-1.);
# 1159 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][6] = Real_t( 1.);
# 1160 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[2][7] = Real_t(-1.);
# 1161 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][0] = Real_t(-1.);
# 1162 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][1] = Real_t( 1.);
# 1163 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][2] = Real_t(-1.);
# 1164 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][3] = Real_t( 1.);
# 1165 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][4] = Real_t( 1.);
# 1166 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][5] = Real_t(-1.);
# 1167 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][6] = Real_t( 1.);
# 1168 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 gamma[3][7] = Real_t(-1.);
# 1169 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1170 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1171 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1172 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1173 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1174 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_17: Index_t i2; register_stack_var("CalcFBHourglassForceForElems|i2|0", "i32", (void *)(&i2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_18; } for( i2 = (0); i2<numElem;++i2){
# 1175 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_18: Index_t *elemToNode; register_stack_var("CalcFBHourglassForceForElems|elemToNode|0", "i32*", (void *)(&elemToNode), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_19; } elemToNode = (&mesh.nodelist[8 * i2]);
# 1176 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_19: Index_t i3; register_stack_var("CalcFBHourglassForceForElems|i3|0", "i32", (void *)(&i3), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_20; } i3 = (8 * i2);
# 1177 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_20: Real_t volinv; register_stack_var("CalcFBHourglassForceForElems|volinv|0", "double", (void *)(&volinv), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_21; } volinv = (Real_t(1.) / determ[i2]);
# 1178 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_21: Real_t ss1; register_stack_var("CalcFBHourglassForceForElems|ss1|0", "double", (void *)(&ss1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_22; } lbl_22: Real_t mass1; register_stack_var("CalcFBHourglassForceForElems|mass1|0", "double", (void *)(&mass1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_23; } lbl_23: Real_t volume13; register_stack_var("CalcFBHourglassForceForElems|volume13|0", "double", (void *)(&volume13), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_24; }
# 1179 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_24: Index_t i1; register_stack_var("CalcFBHourglassForceForElems|i1|0", "i32", (void *)(&i1), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_25; } for( i1 = (0); i1<4;++i1){
# 1180 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1181 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_25: Real_t hourmodx; register_stack_var("CalcFBHourglassForceForElems|hourmodx|0", "double", (void *)(&hourmodx), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_26; } hourmodx = (x8n[i3] * gamma[i1][0] + x8n[i3 + 1] * gamma[i1][1] + x8n[i3 + 2] * gamma[i1][2] + x8n[i3 + 3] * gamma[i1][3] + x8n[i3 + 4] * gamma[i1][4] + x8n[i3 + 5] * gamma[i1][5] + x8n[i3 + 6] * gamma[i1][6] + x8n[i3 + 7] * gamma[i1][7]);
# 1186 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1187 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_26: Real_t hourmody; register_stack_var("CalcFBHourglassForceForElems|hourmody|0", "double", (void *)(&hourmody), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_27; } hourmody = (y8n[i3] * gamma[i1][0] + y8n[i3 + 1] * gamma[i1][1] + y8n[i3 + 2] * gamma[i1][2] + y8n[i3 + 3] * gamma[i1][3] + y8n[i3 + 4] * gamma[i1][4] + y8n[i3 + 5] * gamma[i1][5] + y8n[i3 + 6] * gamma[i1][6] + y8n[i3 + 7] * gamma[i1][7]);
# 1192 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1193 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_27: Real_t hourmodz; register_stack_var("CalcFBHourglassForceForElems|hourmodz|0", "double", (void *)(&hourmodz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_28; } hourmodz = (z8n[i3] * gamma[i1][0] + z8n[i3 + 1] * gamma[i1][1] + z8n[i3 + 2] * gamma[i1][2] + z8n[i3 + 3] * gamma[i1][3] + z8n[i3 + 4] * gamma[i1][4] + z8n[i3 + 5] * gamma[i1][5] + z8n[i3 + 6] * gamma[i1][6] + z8n[i3 + 7] * gamma[i1][7]);
# 1198 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1199 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0[i1] = gamma[i1][0] - volinv*(dvdx[i3 ] * hourmodx +
# 1200 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3 ] * hourmody +
# 1201 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3 ] * hourmodz );
# 1202 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1203 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam1[i1] = gamma[i1][1] - volinv*(dvdx[i3+1] * hourmodx +
# 1204 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+1] * hourmody +
# 1205 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+1] * hourmodz );
# 1206 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1207 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam2[i1] = gamma[i1][2] - volinv*(dvdx[i3+2] * hourmodx +
# 1208 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+2] * hourmody +
# 1209 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+2] * hourmodz );
# 1210 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1211 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam3[i1] = gamma[i1][3] - volinv*(dvdx[i3+3] * hourmodx +
# 1212 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+3] * hourmody +
# 1213 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+3] * hourmodz );
# 1214 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1215 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4[i1] = gamma[i1][4] - volinv*(dvdx[i3+4] * hourmodx +
# 1216 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+4] * hourmody +
# 1217 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+4] * hourmodz );
# 1218 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1219 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam5[i1] = gamma[i1][5] - volinv*(dvdx[i3+5] * hourmodx +
# 1220 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+5] * hourmody +
# 1221 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+5] * hourmodz );
# 1222 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1223 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam6[i1] = gamma[i1][6] - volinv*(dvdx[i3+6] * hourmodx +
# 1224 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+6] * hourmody +
# 1225 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+6] * hourmodz );
# 1226 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1227 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam7[i1] = gamma[i1][7] - volinv*(dvdx[i3+7] * hourmodx +
# 1228 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[i3+7] * hourmody +
# 1229 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[i3+7] * hourmodz );
# 1230 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1231 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1232 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1233 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1234 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1235 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1236 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ss1=mesh.ss[i2];
# 1237 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mass1=mesh.elemMass[i2];
# 1238 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(42, (size_t)(1994UL), (size_t)(9060UL), (size_t)(9061UL), (size_t)(9062UL), (size_t)(9063UL), (size_t)(9064UL), (size_t)(9065UL), (size_t)(9066UL), (size_t)(9067UL), (size_t)(9068UL), (size_t)(9072UL), (size_t)(9073UL), (size_t)(9074UL), (size_t)(9075UL), (size_t)(9076UL), (size_t)(9077UL), (size_t)(9078UL), (size_t)(9079UL), (size_t)(9080UL), (size_t)(9081UL), (size_t)(9082UL), (size_t)(9083UL), (size_t)(9084UL), (size_t)(9085UL), (size_t)(9086UL), (size_t)(9087UL), (size_t)(9088UL), (size_t)(9089UL), (size_t)(9090UL), (size_t)(9091UL), (size_t)(9092UL), (size_t)(9093UL), (size_t)(9094UL), (size_t)(9095UL), (size_t)(9096UL), (size_t)(9097UL), (size_t)(9098UL), (size_t)(9099UL), (size_t)(9100UL), (size_t)(9101UL), (size_t)(9102UL), (size_t)(9103UL)); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); volume13=CBRT(determ[i2]);
# 1239 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1240 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_28: Index_t n0si2; register_stack_var("CalcFBHourglassForceForElems|n0si2|0", "i32", (void *)(&n0si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_29; } n0si2 = (elemToNode[0]);
# 1241 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_29: Index_t n1si2; register_stack_var("CalcFBHourglassForceForElems|n1si2|0", "i32", (void *)(&n1si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_30; } n1si2 = (elemToNode[1]);
# 1242 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_30: Index_t n2si2; register_stack_var("CalcFBHourglassForceForElems|n2si2|0", "i32", (void *)(&n2si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_31; } n2si2 = (elemToNode[2]);
# 1243 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_31: Index_t n3si2; register_stack_var("CalcFBHourglassForceForElems|n3si2|0", "i32", (void *)(&n3si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_32; } n3si2 = (elemToNode[3]);
# 1244 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_32: Index_t n4si2; register_stack_var("CalcFBHourglassForceForElems|n4si2|0", "i32", (void *)(&n4si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_33; } n4si2 = (elemToNode[4]);
# 1245 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_33: Index_t n5si2; register_stack_var("CalcFBHourglassForceForElems|n5si2|0", "i32", (void *)(&n5si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_34; } n5si2 = (elemToNode[5]);
# 1246 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_34: Index_t n6si2; register_stack_var("CalcFBHourglassForceForElems|n6si2|0", "i32", (void *)(&n6si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_35; } n6si2 = (elemToNode[6]);
# 1247 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_35: Index_t n7si2; register_stack_var("CalcFBHourglassForceForElems|n7si2|0", "i32", (void *)(&n7si2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { exit(42); } } } n7si2 = (elemToNode[7]);
# 1248 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1249 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[0] = mesh.xd[n0si2];
# 1250 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[1] = mesh.xd[n1si2];
# 1251 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[2] = mesh.xd[n2si2];
# 1252 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[3] = mesh.xd[n3si2];
# 1253 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[4] = mesh.xd[n4si2];
# 1254 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[5] = mesh.xd[n5si2];
# 1255 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[6] = mesh.xd[n6si2];
# 1256 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd1[7] = mesh.xd[n7si2];
# 1257 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1258 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[0] = mesh.yd[n0si2];
# 1259 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[1] = mesh.yd[n1si2];
# 1260 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[2] = mesh.yd[n2si2];
# 1261 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[3] = mesh.yd[n3si2];
# 1262 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[4] = mesh.yd[n4si2];
# 1263 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[5] = mesh.yd[n5si2];
# 1264 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[6] = mesh.yd[n6si2];
# 1265 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd1[7] = mesh.yd[n7si2];
# 1266 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1267 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[0] = mesh.zd[n0si2];
# 1268 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[1] = mesh.zd[n1si2];
# 1269 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[2] = mesh.zd[n2si2];
# 1270 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[3] = mesh.zd[n3si2];
# 1271 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[4] = mesh.zd[n4si2];
# 1272 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[5] = mesh.zd[n5si2];
# 1273 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[6] = mesh.zd[n6si2];
# 1274 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd1[7] = mesh.zd[n7si2];
# 1275 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1276 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 coefficient = - hourg * Real_t(0.01) * ss1 * mass1 / volume13;
# 1277 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1278 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 15, (size_t)(9082UL), (size_t)(9083UL), (size_t)(9084UL), (size_t)(9074UL), (size_t)(9075UL), (size_t)(9076UL), (size_t)(9077UL), (size_t)(9078UL), (size_t)(9079UL), (size_t)(9080UL), (size_t)(9081UL), (size_t)(0UL), (size_t)(9069UL), (size_t)(9070UL), (size_t)(9071UL)); CalcElemFBHourglassForce(xd1,yd1,zd1,
# 1279 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam0,hourgam1,hourgam2,hourgam3,
# 1280 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hourgam4,hourgam5,hourgam6,hourgam7,
# 1281 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 coefficient, hgfx, hgfy, hgfz);
# 1282 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1283 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n0si2] += hgfx[0];
# 1284 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n0si2] += hgfy[0];
# 1285 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n0si2] += hgfz[0];
# 1286 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1287 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n1si2] += hgfx[1];
# 1288 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n1si2] += hgfy[1];
# 1289 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n1si2] += hgfz[1];
# 1290 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1291 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n2si2] += hgfx[2];
# 1292 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n2si2] += hgfy[2];
# 1293 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n2si2] += hgfz[2];
# 1294 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1295 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n3si2] += hgfx[3];
# 1296 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n3si2] += hgfy[3];
# 1297 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n3si2] += hgfz[3];
# 1298 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1299 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n4si2] += hgfx[4];
# 1300 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n4si2] += hgfy[4];
# 1301 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n4si2] += hgfz[4];
# 1302 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1303 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n5si2] += hgfx[5];
# 1304 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n5si2] += hgfy[5];
# 1305 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n5si2] += hgfz[5];
# 1306 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1307 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n6si2] += hgfx[6];
# 1308 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n6si2] += hgfy[6];
# 1309 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n6si2] += hgfz[6];
# 1310 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1311 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[n7si2] += hgfx[7];
# 1312 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[n7si2] += hgfy[7];
# 1313 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[n7si2] += hgfz[7];
# 1314 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1315 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(25, (size_t)(1994UL), (size_t)(9060UL), (size_t)(9061UL), (size_t)(9062UL), (size_t)(9063UL), (size_t)(9064UL), (size_t)(9065UL), (size_t)(9066UL), (size_t)(9067UL), (size_t)(9068UL), (size_t)(9072UL), (size_t)(9073UL), (size_t)(9082UL), (size_t)(9083UL), (size_t)(9084UL), (size_t)(9085UL), (size_t)(9091UL), (size_t)(9096UL), (size_t)(9097UL), (size_t)(9098UL), (size_t)(9099UL), (size_t)(9100UL), (size_t)(9101UL), (size_t)(9102UL), (size_t)(9103UL)); rm_stack(false, 0UL); }
# 1316 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1317 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1318 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcHourglassControlForElems(Real_t determ[], Real_t hgcoef)
# 1319 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(2, 2, (size_t)(8288UL), (size_t)(0UL), "CalcHourglassControlForElems|determ|0", "double*", (void *)(&determ), (size_t)8, 1, 0, 0, "CalcHourglassControlForElems|hgcoef|0", "double", (void *)(&hgcoef), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1320 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t i; register_stack_var("CalcHourglassControlForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: Index_t ii; register_stack_var("CalcHourglassControlForElems|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: Index_t jj; register_stack_var("CalcHourglassControlForElems|jj|0", "i32", (void *)(&jj), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; }
# 1321 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t x1[8]; register_stack_var("CalcHourglassControlForElems|x1|0", "[8 x double]", (void *)(x1), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: Real_t y1[8]; register_stack_var("CalcHourglassControlForElems|y1|0", "[8 x double]", (void *)(y1), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: Real_t z1[8]; register_stack_var("CalcHourglassControlForElems|z1|0", "[8 x double]", (void *)(z1), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; }
# 1322 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_6: Real_t pfx[8]; register_stack_var("CalcHourglassControlForElems|pfx|0", "[8 x double]", (void *)(pfx), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } lbl_7: Real_t pfy[8]; register_stack_var("CalcHourglassControlForElems|pfy|0", "[8 x double]", (void *)(pfy), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } lbl_8: Real_t pfz[8]; register_stack_var("CalcHourglassControlForElems|pfz|0", "[8 x double]", (void *)(pfz), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; }
# 1323 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_9: Index_t numElem; register_stack_var("CalcHourglassControlForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } numElem = (mesh.numElem);
# 1324 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_10: Index_t numElem8; register_stack_var("CalcHourglassControlForElems|numElem8|0", "i32", (void *)(&numElem8), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } numElem8 = (numElem * 8);
# 1325 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_11: Real_t *dvdx; register_stack_var("CalcHourglassControlForElems|dvdx|0", "double*", (void *)(&dvdx), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_12; } dvdx = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem8, 8094UL, 0, 0));
# 1326 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_12: Real_t *dvdy; register_stack_var("CalcHourglassControlForElems|dvdy|0", "double*", (void *)(&dvdy), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_13; } dvdy = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem8, 8101UL, 0, 0));
# 1327 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_13: Real_t *dvdz; register_stack_var("CalcHourglassControlForElems|dvdz|0", "double*", (void *)(&dvdz), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_14; } dvdz = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem8, 8108UL, 0, 0));
# 1328 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_14: Real_t *x8n; register_stack_var("CalcHourglassControlForElems|x8n|0", "double*", (void *)(&x8n), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_15; } x8n = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem8, 8115UL, 0, 0));
# 1329 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_15: Real_t *y8n; register_stack_var("CalcHourglassControlForElems|y8n|0", "double*", (void *)(&y8n), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_16; } y8n = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem8, 8122UL, 0, 0));
# 1330 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_16: Real_t *z8n; register_stack_var("CalcHourglassControlForElems|z8n|0", "double*", (void *)(&z8n), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_17; } z8n = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem8, 8129UL, 0, 0));
# 1331 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1332 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1333 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 for (i=0 ; i<numElem ; ++i){
# 1334 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1335 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_17: Index_t *elemToNode; register_stack_var("CalcHourglassControlForElems|elemToNode|0", "i32*", (void *)(&elemToNode), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { exit(42); } } } elemToNode = (&mesh.nodelist[8 * i]);
# 1336 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 4, (size_t)(1994UL), (size_t)(8055UL), (size_t)(8056UL), (size_t)(8057UL)); CollectDomainNodesToElemNodes(elemToNode, x1, y1, z1);
# 1337 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1338 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 6, (size_t)(8058UL), (size_t)(8059UL), (size_t)(8060UL), (size_t)(8055UL), (size_t)(8056UL), (size_t)(8057UL)); CalcElemVolumeDerivative(pfx, pfy, pfz, x1, y1, z1);
# 1339 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1340 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1341 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 for(ii=0;ii<8;++ii){
# 1342 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 jj=8*i+ii;
# 1343 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1344 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdx[jj] = pfx[ii];
# 1345 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdy[jj] = pfy[ii];
# 1346 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dvdz[jj] = pfz[ii];
# 1347 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x8n[jj] = x1[ii];
# 1348 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y8n[jj] = y1[ii];
# 1349 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z8n[jj] = z1[ii];
# 1350 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1351 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1352 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 determ[i] = mesh.volo[i] * mesh.v[i];
# 1353 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1354 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1355 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( mesh.v[i] <= 0.0 ) {
# 1356 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(21, (size_t)(8050UL), (size_t)(8051UL), (size_t)(8052UL), (size_t)(8053UL), (size_t)(8054UL), (size_t)(8061UL), (size_t)(8062UL), (size_t)(8063UL), (size_t)(8064UL), (size_t)(8065UL), (size_t)(8066UL), (size_t)(8067UL), (size_t)(8068UL), (size_t)(8069UL), (size_t)(8094UL), (size_t)(8101UL), (size_t)(8108UL), (size_t)(8115UL), (size_t)(8122UL), (size_t)(8129UL), (size_t)(8288UL)); exit(VolumeError) ;
# 1357 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1358 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1359 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1360 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( hgcoef > Real_t(0.) ) {
# 1361 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(21, (size_t)(8050UL), (size_t)(8051UL), (size_t)(8052UL), (size_t)(8053UL), (size_t)(8054UL), (size_t)(8061UL), (size_t)(8062UL), (size_t)(8063UL), (size_t)(8064UL), (size_t)(8065UL), (size_t)(8066UL), (size_t)(8067UL), (size_t)(8068UL), (size_t)(8069UL), (size_t)(8094UL), (size_t)(8101UL), (size_t)(8108UL), (size_t)(8115UL), (size_t)(8122UL), (size_t)(8129UL), (size_t)(8288UL)); call_lbl_2: calling(2, 0UL, 8, (size_t)(8288UL), (size_t)(8115UL), (size_t)(8122UL), (size_t)(8129UL), (size_t)(8094UL), (size_t)(8101UL), (size_t)(8108UL), (size_t)(0UL)); CalcFBHourglassForceForElems(determ,x8n,y8n,z8n,dvdx,dvdy,dvdz,hgcoef) ;
# 1362 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1363 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1364 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(z8n, 8129UL) ;
# 1365 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(y8n, 8122UL) ;
# 1366 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(x8n, 8115UL) ;
# 1367 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(dvdz, 8108UL) ;
# 1368 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(dvdy, 8101UL) ;
# 1369 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(dvdx, 8094UL) ;
# 1370 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1371 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(21, (size_t)(8050UL), (size_t)(8051UL), (size_t)(8052UL), (size_t)(8053UL), (size_t)(8054UL), (size_t)(8061UL), (size_t)(8062UL), (size_t)(8063UL), (size_t)(8064UL), (size_t)(8065UL), (size_t)(8066UL), (size_t)(8067UL), (size_t)(8068UL), (size_t)(8069UL), (size_t)(8094UL), (size_t)(8101UL), (size_t)(8108UL), (size_t)(8115UL), (size_t)(8122UL), (size_t)(8129UL), (size_t)(8288UL)); rm_stack(false, 0UL); return ;
# 1372 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 1373 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1374 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1375 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcVolumeForceForElems()
# 1376 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1377 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numElem; register_stack_var("CalcVolumeForceForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numElem = (mesh.numElem);
# 1378 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (numElem != 0) {
# 1379 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t hgcoef; register_stack_var("CalcVolumeForceForElems|hgcoef|0", "double", (void *)(&hgcoef), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } hgcoef = (mesh.hgcoef);
# 1380 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t *sigxx; register_stack_var("CalcVolumeForceForElems|sigxx|0", "double*", (void *)(&sigxx), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_3; } sigxx = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem, 7793UL, 0, 0));
# 1381 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t *sigyy; register_stack_var("CalcVolumeForceForElems|sigyy|0", "double*", (void *)(&sigyy), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_4; } sigyy = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem, 7790UL, 0, 0));
# 1382 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_4: Real_t *sigzz; register_stack_var("CalcVolumeForceForElems|sigzz|0", "double*", (void *)(&sigzz), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_5; } sigzz = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem, 7787UL, 0, 0));
# 1383 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Real_t *determ; register_stack_var("CalcVolumeForceForElems|determ|0", "double*", (void *)(&determ), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_6; } determ = ((Real_t *)malloc_wrapper(sizeof(Real_t) * numElem, 7769UL, 0, 0));
# 1384 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1385 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1386 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 4, (size_t)(0UL), (size_t)(7793UL), (size_t)(7790UL), (size_t)(7787UL)); InitStressTermsForElems(numElem, sigxx, sigyy, sigzz);
# 1387 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1388 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1389 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1390 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 5, (size_t)(0UL), (size_t)(7793UL), (size_t)(7790UL), (size_t)(7787UL), (size_t)(7769UL)); IntegrateStressForElems( numElem, sigxx, sigyy, sigzz, determ) ;
# 1391 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1392 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1393 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_6: Index_t k; register_stack_var("CalcVolumeForceForElems|k|0", "i32", (void *)(&k), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { exit(42); } } } for ( k = (0); k<numElem ; ++k ) {
# 1394 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (determ[k] <= Real_t(0.0)) {
# 1395 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(7, (size_t)(7705UL), (size_t)(7706UL), (size_t)(7707UL), (size_t)(7708UL), (size_t)(7709UL), (size_t)(7710UL), (size_t)(7711UL)); exit(VolumeError) ;
# 1396 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1397 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1398 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1399 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(7, (size_t)(7705UL), (size_t)(7706UL), (size_t)(7707UL), (size_t)(7708UL), (size_t)(7709UL), (size_t)(7710UL), (size_t)(7711UL)); call_lbl_2: calling(2, 0UL, 2, (size_t)(7769UL), (size_t)(0UL)); CalcHourglassControlForElems(determ, hgcoef) ;
# 1400 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1401 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(determ, 7769UL) ;
# 1402 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(sigzz, 7787UL) ;
# 1403 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(sigyy, 7790UL) ;
# 1404 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(sigxx, 7793UL) ;
# 1405 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1406 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(1, (size_t)(7705UL)); rm_stack(false, 0UL); }
# 1407 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1408 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline void CalcForceForNodes()
# 1409 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1410 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numNode; register_stack_var("CalcForceForNodes|numNode|0", "i32", (void *)(&numNode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numNode = (mesh.numNode);
# 1411 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_1: Index_t i; register_stack_var("CalcForceForNodes|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } for ( i = (0); i<numNode; ++i) {
# 1412 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fx[i] = Real_t(0.0) ;
# 1413 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fy[i] = Real_t(0.0) ;
# 1414 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.fz[i] = Real_t(0.0) ;
# 1415 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1416 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1417 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1418 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(3, (size_t)(1994UL), (size_t)(7353UL), (size_t)(7354UL)); call_lbl_0: calling(0, 0UL, 0); CalcVolumeForceForElems() ;
# 1419 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1420 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1421 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1422 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1423 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
rm_stack(false, 0UL); }
# 1424 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1425 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1426 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcAccelerationForNodes()
# 1427 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1428 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t numNode; numNode = (mesh.numNode);
# 1429 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < numNode; ++i) {
# 1430 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.xdd[i] = mesh.fx[i] / mesh.nodalMass[i];
# 1431 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.ydd[i] = mesh.fy[i] / mesh.nodalMass[i];
# 1432 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.zdd[i] = mesh.fz[i] / mesh.nodalMass[i];
# 1433 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1434 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(3, (size_t)(1994UL), (size_t)(7387UL), (size_t)(7388UL)); rm_stack(false, 0UL); }
# 1435 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1436 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1437 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void ApplyAccelerationBoundaryConditionsForNodes()
# 1438 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1439 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t numNodeBC; numNodeBC = ((mesh.sizeX + 1) * (mesh.sizeX + 1));
# 1440 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < numNodeBC; ++i) { mesh.xdd[mesh.symmX[i]] = Real_t(0.); } } ;
# 1442 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1443 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < numNodeBC; ++i) { mesh.ydd[mesh.symmY[i]] = Real_t(0.); } } ;
# 1445 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1446 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < numNodeBC; ++i) { mesh.zdd[mesh.symmZ[i]] = Real_t(0.); } } ;
# 1448 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(5, (size_t)(1994UL), (size_t)(7453UL), (size_t)(7454UL), (size_t)(7455UL), (size_t)(7456UL)); rm_stack(false, 0UL); }
# 1449 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1450 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1451 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcVelocityForNodes(const Real_t dt, const Real_t u_cut)
# 1452 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(2, 2, (size_t)(0UL), (size_t)(0UL), "CalcVelocityForNodes|dt|0", "double", (void *)(&dt), (size_t)8, 0, 0, 0, "CalcVelocityForNodes|u_cut|0", "double", (void *)(&u_cut), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1453 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numNode; register_stack_var("CalcVelocityForNodes|numNode|0", "i32", (void *)(&numNode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numNode = (mesh.numNode);
# 1454 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1455 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_1: Index_t i; register_stack_var("CalcVelocityForNodes|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } for ( i = (0); i < numNode ; ++i )
# 1456 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1457 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t xdtmp; register_stack_var("CalcVelocityForNodes|xdtmp|0", "double", (void *)(&xdtmp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: Real_t ydtmp; register_stack_var("CalcVelocityForNodes|ydtmp|0", "double", (void *)(&ydtmp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: Real_t zdtmp; register_stack_var("CalcVelocityForNodes|zdtmp|0", "double", (void *)(&zdtmp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { exit(42); } } }
# 1458 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1459 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xdtmp = mesh.xd[i] + mesh.xdd[i] * dt ;
# 1460 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); if (FABS(xdtmp) < u_cut) {xdtmp = Real_t(0.); };
# 1461 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.xd[i] = xdtmp ;
# 1462 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1463 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ydtmp = mesh.yd[i] + mesh.ydd[i] * dt ;
# 1464 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 1, (size_t)(0UL)); if (FABS(ydtmp) < u_cut) {ydtmp = Real_t(0.); };
# 1465 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.yd[i] = ydtmp ;
# 1466 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1467 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zdtmp = mesh.zd[i] + mesh.zdd[i] * dt ;
# 1468 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 1, (size_t)(0UL)); if (FABS(zdtmp) < u_cut) {zdtmp = Real_t(0.); };
# 1469 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.zd[i] = zdtmp ;
# 1470 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1471 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(6, (size_t)(1994UL), (size_t)(7528UL), (size_t)(7529UL), (size_t)(7530UL), (size_t)(7531UL), (size_t)(7534UL)); rm_stack(false, 0UL); }
# 1472 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1473 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1474 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcPositionForNodes(const Real_t dt)
# 1475 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(1, 0, (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1476 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t numNode; numNode = (mesh.numNode);
# 1477 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1478 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t i; for ( i = (0); i < numNode ; ++i )
# 1479 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1480 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.x[i] += mesh.xd[i] * dt ;
# 1481 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.y[i] += mesh.yd[i] * dt ;
# 1482 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.z[i] += mesh.zd[i] * dt ;
# 1483 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1484 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(4, (size_t)(1994UL), (size_t)(7641UL), (size_t)(7642UL), (size_t)(7643UL)); rm_stack(false, 0UL); }
# 1485 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1486 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1487 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void LagrangeNodal()
# 1488 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1489 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t delt; register_stack_var("LagrangeNodal|delt|0", "double", (void *)(&delt), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } delt = (mesh.deltatime);
# 1490 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t u_cut; register_stack_var("LagrangeNodal|u_cut|0", "double", (void *)(&u_cut), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } default: { exit(42); } } } u_cut = (mesh.u_cut);
# 1491 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1492 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1493 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1494 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(2, (size_t)(1639UL), (size_t)(1640UL)); call_lbl_0: calling(0, 0UL, 0); CalcForceForNodes();
# 1495 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1496 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 0); CalcAccelerationForNodes();
# 1497 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1498 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 0); ApplyAccelerationBoundaryConditionsForNodes();
# 1499 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1500 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); CalcVelocityForNodes( delt, u_cut ) ;
# 1501 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1502 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_4: calling(4, 0UL, 1, (size_t)(0UL)); CalcPositionForNodes( delt );
# 1503 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1504 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 rm_stack(false, 0UL); return;
# 1505 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 1506 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1507 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1508 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
Real_t CalcElemVolume( const Real_t x0, const Real_t x1,
# 1509 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x2, const Real_t x3,
# 1510 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x4, const Real_t x5,
# 1511 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x6, const Real_t x7,
# 1512 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y0, const Real_t y1,
# 1513 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y2, const Real_t y3,
# 1514 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y4, const Real_t y5,
# 1515 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y6, const Real_t y7,
# 1516 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z0, const Real_t z1,
# 1517 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z2, const Real_t z3,
# 1518 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z4, const Real_t z5,
# 1519 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z6, const Real_t z7 )
# 1520 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(24, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1521 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t twelveth; twelveth = (Real_t(1.) / Real_t(12.));
# 1522 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1523 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx61; dx61 = (x6 - x1);
# 1524 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy61; dy61 = (y6 - y1);
# 1525 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz61; dz61 = (z6 - z1);
# 1526 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1527 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx70; dx70 = (x7 - x0);
# 1528 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy70; dy70 = (y7 - y0);
# 1529 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz70; dz70 = (z7 - z0);
# 1530 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1531 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx63; dx63 = (x6 - x3);
# 1532 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy63; dy63 = (y6 - y3);
# 1533 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz63; dz63 = (z6 - z3);
# 1534 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1535 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx20; dx20 = (x2 - x0);
# 1536 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy20; dy20 = (y2 - y0);
# 1537 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz20; dz20 = (z2 - z0);
# 1538 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1539 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx50; dx50 = (x5 - x0);
# 1540 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy50; dy50 = (y5 - y0);
# 1541 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz50; dz50 = (z5 - z0);
# 1542 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1543 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx64; dx64 = (x6 - x4);
# 1544 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy64; dy64 = (y6 - y4);
# 1545 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz64; dz64 = (z6 - z4);
# 1546 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1547 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx31; dx31 = (x3 - x1);
# 1548 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy31; dy31 = (y3 - y1);
# 1549 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz31; dz31 = (z3 - z1);
# 1550 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1551 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx72; dx72 = (x7 - x2);
# 1552 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy72; dy72 = (y7 - y2);
# 1553 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz72; dz72 = (z7 - z2);
# 1554 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1555 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx43; dx43 = (x4 - x3);
# 1556 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy43; dy43 = (y4 - y3);
# 1557 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz43; dz43 = (z4 - z3);
# 1558 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1559 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx57; dx57 = (x5 - x7);
# 1560 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy57; dy57 = (y5 - y7);
# 1561 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz57; dz57 = (z5 - z7);
# 1562 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1563 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx14; dx14 = (x1 - x4);
# 1564 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy14; dy14 = (y1 - y4);
# 1565 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz14; dz14 = (z1 - z4);
# 1566 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1567 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dx25; dx25 = (x2 - x5);
# 1568 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dy25; dy25 = (y2 - y5);
# 1569 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dz25; dz25 = (z2 - z5);
# 1570 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1571 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1572 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1573 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1574 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t volume; volume = (((dx31 + dx72) * ((dy63) * (dz20) - (dy20) * (dz63)) + (dy31 + dy72) * ((dx20) * (dz63) - (dx63) * (dz20)) + (dz31 + dz72) * ((dx63) * (dy20) - (dx20) * (dy63))) + ((dx43 + dx57) * ((dy64) * (dz70) - (dy70) * (dz64)) + (dy43 + dy57) * ((dx70) * (dz64) - (dx64) * (dz70)) + (dz43 + dz57) * ((dx64) * (dy70) - (dx70) * (dy64))) + ((dx14 + dx25) * ((dy61) * (dz50) - (dy50) * (dz61)) + (dy14 + dy25) * ((dx50) * (dz61) - (dx61) * (dz50)) + (dz14 + dz25) * ((dx61) * (dy50) - (dx50) * (dy61))));
# 1582 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1583 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1584 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1585 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1586 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1587 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 volume *= twelveth;
# 1588 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1589 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(62, (size_t)(13575UL), (size_t)(13576UL), (size_t)(13577UL), (size_t)(13578UL), (size_t)(13579UL), (size_t)(13580UL), (size_t)(13581UL), (size_t)(13582UL), (size_t)(13583UL), (size_t)(13584UL), (size_t)(13585UL), (size_t)(13586UL), (size_t)(13587UL), (size_t)(13588UL), (size_t)(13589UL), (size_t)(13590UL), (size_t)(13591UL), (size_t)(13592UL), (size_t)(13593UL), (size_t)(13594UL), (size_t)(13595UL), (size_t)(13596UL), (size_t)(13597UL), (size_t)(13598UL), (size_t)(13599UL), (size_t)(13600UL), (size_t)(13601UL), (size_t)(13602UL), (size_t)(13603UL), (size_t)(13604UL), (size_t)(13605UL), (size_t)(13606UL), (size_t)(13607UL), (size_t)(13608UL), (size_t)(13609UL), (size_t)(13610UL), (size_t)(13611UL), (size_t)(13612UL), (size_t)(13613UL), (size_t)(13614UL), (size_t)(13615UL), (size_t)(13616UL), (size_t)(13617UL), (size_t)(13618UL), (size_t)(13619UL), (size_t)(13620UL), (size_t)(13621UL), (size_t)(13622UL), (size_t)(13623UL), (size_t)(13624UL), (size_t)(13625UL), (size_t)(13626UL), (size_t)(13627UL), (size_t)(13628UL), (size_t)(13629UL), (size_t)(13630UL), (size_t)(13631UL), (size_t)(13632UL), (size_t)(13633UL), (size_t)(13634UL), (size_t)(13635UL), (size_t)(13636UL)); rm_stack(false, 0UL); return volume ;
# 1590 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 1591 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1592 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1593 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
Real_t CalcElemVolumeWrapper( const Real_t x[8], const Real_t y[8], const Real_t z[8] )
# 1594 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(3, 0, (size_t)(1518UL), (size_t)(1519UL), (size_t)(1520UL)); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } }
# 1595 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(3, (size_t)(1435UL), (size_t)(1436UL), (size_t)(1437UL)); rm_stack(false, 0UL); call_lbl_0: calling(0, 0UL, 24, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); return CalcElemVolume( x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7],
# 1596 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[0], y[1], y[2], y[3], y[4], y[5], y[6], y[7],
# 1597 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[0], z[1], z[2], z[3], z[4], z[5], z[6], z[7]);
# 1598 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 1599 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1600 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1601 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
Real_t AreaFace( const Real_t x0, const Real_t x1,
# 1602 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t x2, const Real_t x3,
# 1603 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y0, const Real_t y1,
# 1604 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y2, const Real_t y3,
# 1605 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z0, const Real_t z1,
# 1606 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z2, const Real_t z3)
# 1607 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(12, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1608 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fx; fx = ((x2 - x0) - (x3 - x1));
# 1609 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fy; fy = ((y2 - y0) - (y3 - y1));
# 1610 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t fz; fz = ((z2 - z0) - (z3 - z1));
# 1611 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t gx; gx = ((x2 - x0) + (x3 - x1));
# 1612 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t gy; gy = ((y2 - y0) + (y3 - y1));
# 1613 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t gz; gz = ((z2 - z0) + (z3 - z1));
# 1614 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t area; area = ((fx * fx + fy * fy + fz * fz) * (gx * gx + gy * gy + gz * gz) - (fx * gx + fy * gy + fz * gz) * (fx * gx + fy * gy + fz * gz));
# 1619 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(19, (size_t)(7193UL), (size_t)(7194UL), (size_t)(7195UL), (size_t)(7196UL), (size_t)(7197UL), (size_t)(7198UL), (size_t)(7199UL), (size_t)(7200UL), (size_t)(7201UL), (size_t)(7202UL), (size_t)(7203UL), (size_t)(7204UL), (size_t)(7205UL), (size_t)(7206UL), (size_t)(7207UL), (size_t)(7208UL), (size_t)(7209UL), (size_t)(7210UL), (size_t)(7211UL)); rm_stack(false, 0UL); return area ;
# 1620 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 1621 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1622 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1623 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
Real_t CalcElemCharacteristicLength( const Real_t x[8],
# 1624 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t y[8],
# 1625 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t z[8],
# 1626 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t volume)
# 1627 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(4, 4, (size_t)(5738UL), (size_t)(5750UL), (size_t)(5762UL), (size_t)(0UL), "CalcElemCharacteristicLength|x|0", "double*", (void *)(&x), (size_t)8, 1, 0, 0, "CalcElemCharacteristicLength|y|0", "double*", (void *)(&y), (size_t)8, 1, 0, 0, "CalcElemCharacteristicLength|z|0", "double*", (void *)(&z), (size_t)8, 1, 0, 0, "CalcElemCharacteristicLength|volume|0", "double", (void *)(&volume), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1628 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t a; register_stack_var("CalcElemCharacteristicLength|a|0", "double", (void *)(&a), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: Real_t charLength; register_stack_var("CalcElemCharacteristicLength|charLength|0", "double", (void *)(&charLength), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } default: { exit(42); } } } charLength = (0.);
# 1629 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1630 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 12, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); a = AreaFace(x[0],x[1],x[2],x[3],
# 1631 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[0],y[1],y[2],y[3],
# 1632 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[0],z[1],z[2],z[3]) ;
# 1633 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 charLength = (a > charLength ? a : charLength);
# 1634 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1635 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 12, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); a = AreaFace(x[4],x[5],x[6],x[7],
# 1636 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[4],y[5],y[6],y[7],
# 1637 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[4],z[5],z[6],z[7]) ;
# 1638 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 charLength = (a > charLength ? a : charLength);
# 1639 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1640 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 12, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); a = AreaFace(x[0],x[1],x[5],x[4],
# 1641 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[0],y[1],y[5],y[4],
# 1642 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[0],z[1],z[5],z[4]) ;
# 1643 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 charLength = (a > charLength ? a : charLength);
# 1644 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1645 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 12, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); a = AreaFace(x[1],x[2],x[6],x[5],
# 1646 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[1],y[2],y[6],y[5],
# 1647 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[1],z[2],z[6],z[5]) ;
# 1648 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 charLength = (a > charLength ? a : charLength);
# 1649 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1650 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_4: calling(4, 0UL, 12, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); a = AreaFace(x[2],x[3],x[7],x[6],
# 1651 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[2],y[3],y[7],y[6],
# 1652 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[2],z[3],z[7],z[6]) ;
# 1653 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 charLength = (a > charLength ? a : charLength);
# 1654 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1655 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_5: calling(5, 0UL, 12, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); a = AreaFace(x[3],x[0],x[4],x[7],
# 1656 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y[3],y[0],y[4],y[7],
# 1657 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z[3],z[0],z[4],z[7]) ;
# 1658 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 charLength = (a > charLength ? a : charLength);
# 1659 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1660 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(6, (size_t)(5673UL), (size_t)(5674UL), (size_t)(5675UL), (size_t)(5676UL), (size_t)(5677UL), (size_t)(5678UL)); call_lbl_6: calling(6, 0UL, 1, (size_t)(0UL)); charLength = 4.0 * volume / SQRT(charLength);
# 1661 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1662 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(1, (size_t)(5678UL)); rm_stack(false, 0UL); return charLength;
# 1663 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 1664 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1665 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1666 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcElemVelocityGrandient( const Real_t* const xvel,
# 1667 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t* const yvel,
# 1668 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t* const zvel,
# 1669 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t b[][8],
# 1670 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 const Real_t detJ,
# 1671 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* const d )
# 1672 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(6, 0, (size_t)(7187UL), (size_t)(7188UL), (size_t)(7189UL), (size_t)(7190UL), (size_t)(0UL), (size_t)(7192UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1673 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t inv_detJ; inv_detJ = (Real_t(1.) / detJ);
# 1674 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t dyddx; Real_t dxddy; Real_t dzddx; Real_t dxddz; Real_t dzddy; Real_t dyddz;
# 1675 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *pfx; pfx = (b[0]);
# 1676 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *pfy; pfy = (b[1]);
# 1677 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *pfz; pfz = (b[2]);
# 1678 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1679 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 d[0] = inv_detJ * ( pfx[0] * (xvel[0]-xvel[6])
# 1680 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[1] * (xvel[1]-xvel[7])
# 1681 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[2] * (xvel[2]-xvel[4])
# 1682 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[3] * (xvel[3]-xvel[5]) );
# 1683 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1684 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 d[1] = inv_detJ * ( pfy[0] * (yvel[0]-yvel[6])
# 1685 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[1] * (yvel[1]-yvel[7])
# 1686 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[2] * (yvel[2]-yvel[4])
# 1687 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[3] * (yvel[3]-yvel[5]) );
# 1688 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1689 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 d[2] = inv_detJ * ( pfz[0] * (zvel[0]-zvel[6])
# 1690 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[1] * (zvel[1]-zvel[7])
# 1691 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[2] * (zvel[2]-zvel[4])
# 1692 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[3] * (zvel[3]-zvel[5]) );
# 1693 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1694 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dyddx = inv_detJ * ( pfx[0] * (yvel[0]-yvel[6])
# 1695 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[1] * (yvel[1]-yvel[7])
# 1696 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[2] * (yvel[2]-yvel[4])
# 1697 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[3] * (yvel[3]-yvel[5]) );
# 1698 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1699 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dxddy = inv_detJ * ( pfy[0] * (xvel[0]-xvel[6])
# 1700 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[1] * (xvel[1]-xvel[7])
# 1701 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[2] * (xvel[2]-xvel[4])
# 1702 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[3] * (xvel[3]-xvel[5]) );
# 1703 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1704 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dzddx = inv_detJ * ( pfx[0] * (zvel[0]-zvel[6])
# 1705 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[1] * (zvel[1]-zvel[7])
# 1706 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[2] * (zvel[2]-zvel[4])
# 1707 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfx[3] * (zvel[3]-zvel[5]) );
# 1708 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1709 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dxddz = inv_detJ * ( pfz[0] * (xvel[0]-xvel[6])
# 1710 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[1] * (xvel[1]-xvel[7])
# 1711 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[2] * (xvel[2]-xvel[4])
# 1712 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[3] * (xvel[3]-xvel[5]) );
# 1713 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1714 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dzddy = inv_detJ * ( pfy[0] * (zvel[0]-zvel[6])
# 1715 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[1] * (zvel[1]-zvel[7])
# 1716 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[2] * (zvel[2]-zvel[4])
# 1717 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfy[3] * (zvel[3]-zvel[5]) );
# 1718 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1719 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dyddz = inv_detJ * ( pfz[0] * (yvel[0]-yvel[6])
# 1720 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[1] * (yvel[1]-yvel[7])
# 1721 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[2] * (yvel[2]-yvel[4])
# 1722 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + pfz[3] * (yvel[3]-yvel[5]) );
# 1723 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 d[5] = Real_t( .5) * ( dxddy + dyddx );
# 1724 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 d[4] = Real_t( .5) * ( dxddz + dzddx );
# 1725 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 d[3] = Real_t( .5) * ( dzddy + dyddz );
# 1726 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(17, (size_t)(6656UL), (size_t)(6657UL), (size_t)(6658UL), (size_t)(6659UL), (size_t)(6660UL), (size_t)(6661UL), (size_t)(6662UL), (size_t)(6663UL), (size_t)(6664UL), (size_t)(6665UL), (size_t)(6666UL), (size_t)(6667UL), (size_t)(6668UL), (size_t)(6669UL), (size_t)(6670UL), (size_t)(6671UL), (size_t)(7192UL)); rm_stack(false, 0UL); }
# 1727 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1728 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1729 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcKinematicsForElems( Index_t numElem, Real_t dt )
# 1730 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(2, 2, (size_t)(0UL), (size_t)(0UL), "CalcKinematicsForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0, "CalcKinematicsForElems|dt|0", "double", (void *)(&dt), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1731 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t B[3][8]; register_stack_var("CalcKinematicsForElems|B|0", "[3 x [8 x double]]", (void *)(B), (size_t)192, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; }
# 1732 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t D[6]; register_stack_var("CalcKinematicsForElems|D|0", "[6 x double]", (void *)(D), (size_t)48, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; }
# 1733 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t x_local[8]; register_stack_var("CalcKinematicsForElems|x_local|0", "[8 x double]", (void *)(x_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; }
# 1734 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t y_local[8]; register_stack_var("CalcKinematicsForElems|y_local|0", "[8 x double]", (void *)(y_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; }
# 1735 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_4: Real_t z_local[8]; register_stack_var("CalcKinematicsForElems|z_local|0", "[8 x double]", (void *)(z_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; }
# 1736 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Real_t xd_local[8]; register_stack_var("CalcKinematicsForElems|xd_local|0", "[8 x double]", (void *)(xd_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; }
# 1737 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_6: Real_t yd_local[8]; register_stack_var("CalcKinematicsForElems|yd_local|0", "[8 x double]", (void *)(yd_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; }
# 1738 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_7: Real_t zd_local[8]; register_stack_var("CalcKinematicsForElems|zd_local|0", "[8 x double]", (void *)(zd_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; }
# 1739 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_8: Real_t detJ; register_stack_var("CalcKinematicsForElems|detJ|0", "double", (void *)(&detJ), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } detJ = (Real_t(0.));
# 1740 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1741 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1742 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_9: Index_t k; register_stack_var("CalcKinematicsForElems|k|0", "i32", (void *)(&k), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } for( k = (0); k<numElem ; ++k )
# 1743 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1744 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_10: Real_t volume; register_stack_var("CalcKinematicsForElems|volume|0", "double", (void *)(&volume), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; }
# 1745 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_11: Real_t relativeVolume; register_stack_var("CalcKinematicsForElems|relativeVolume|0", "double", (void *)(&relativeVolume), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; }
# 1746 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_12: Index_t *elemToNode; register_stack_var("CalcKinematicsForElems|elemToNode|0", "i32*", (void *)(&elemToNode), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_13; } elemToNode = (&mesh.nodelist[8 * k]);
# 1747 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1748 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1749 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_13: Index_t lnode; register_stack_var("CalcKinematicsForElems|lnode|0", "i32", (void *)(&lnode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_14; } for( lnode = (0); lnode<8 ; ++lnode )
# 1750 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1751 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_14: Index_t gnode; register_stack_var("CalcKinematicsForElems|gnode|0", "i32", (void *)(&gnode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_15; } gnode = (elemToNode[lnode]);
# 1752 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x_local[lnode] = mesh.x[gnode];
# 1753 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y_local[lnode] = mesh.y[gnode];
# 1754 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z_local[lnode] = mesh.z[gnode];
# 1755 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1756 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1757 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1758 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 3, (size_t)(5403UL), (size_t)(5404UL), (size_t)(5405UL)); volume = CalcElemVolumeWrapper(x_local, y_local, z_local );
# 1759 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 relativeVolume = volume / mesh.volo[k];
# 1760 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.vnew[k] = relativeVolume ;
# 1761 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.delv[k] = relativeVolume - mesh.v[k] ;
# 1762 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1763 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1764 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(20, (size_t)(1994UL), (size_t)(5399UL), (size_t)(5400UL), (size_t)(5403UL), (size_t)(5404UL), (size_t)(5405UL), (size_t)(5406UL), (size_t)(5407UL), (size_t)(5408UL), (size_t)(5409UL), (size_t)(5410UL), (size_t)(5411UL), (size_t)(5412UL), (size_t)(5413UL), (size_t)(5414UL), (size_t)(5415UL), (size_t)(5416UL), (size_t)(5417UL), (size_t)(5418UL), (size_t)(5419UL)); call_lbl_1: calling(1, 0UL, 4, (size_t)(5403UL), (size_t)(5404UL), (size_t)(5405UL), (size_t)(0UL)); mesh.arealg[k] = CalcElemCharacteristicLength(x_local,
# 1765 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y_local,
# 1766 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z_local,
# 1767 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 volume);
# 1768 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1769 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1770 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_15: Index_t lnode; register_stack_var("CalcKinematicsForElems|lnode|1", "i32", (void *)(&lnode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_16; } for( lnode = (0); lnode<8 ; ++lnode )
# 1771 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1772 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_16: Index_t gnode; register_stack_var("CalcKinematicsForElems|gnode|1", "i32", (void *)(&gnode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_17; } gnode = (elemToNode[lnode]);
# 1773 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 xd_local[lnode] = mesh.xd[gnode];
# 1774 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd_local[lnode] = mesh.yd[gnode];
# 1775 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd_local[lnode] = mesh.zd[gnode];
# 1776 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1777 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1778 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_17: Real_t dt2; register_stack_var("CalcKinematicsForElems|dt2|0", "double", (void *)(&dt2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_18; } dt2 = (Real_t(0.5) * dt);
# 1779 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_18: Index_t j; register_stack_var("CalcKinematicsForElems|j|0", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } default: { exit(42); } } } for ( j = (0); j<8 ; ++j )
# 1780 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1781 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x_local[j] -= dt2 * xd_local[j];
# 1782 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y_local[j] -= dt2 * yd_local[j];
# 1783 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z_local[j] -= dt2 * zd_local[j];
# 1784 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1785 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1786 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 5, (size_t)(5403UL), (size_t)(5404UL), (size_t)(5405UL), (size_t)(5401UL), (size_t)(5409UL)); CalcElemShapeFunctionDerivatives( x_local,
# 1787 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y_local,
# 1788 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z_local,
# 1789 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 B, &detJ );
# 1790 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1791 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 6, (size_t)(5406UL), (size_t)(5407UL), (size_t)(5408UL), (size_t)(5401UL), (size_t)(0UL), (size_t)(5402UL)); CalcElemVelocityGrandient( xd_local,
# 1792 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 yd_local,
# 1793 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zd_local,
# 1794 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 B, detJ, D );
# 1795 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1796 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1797 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dxx[k] = D[0];
# 1798 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dyy[k] = D[1];
# 1799 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dzz[k] = D[2];
# 1800 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1801 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(15, (size_t)(1994UL), (size_t)(5399UL), (size_t)(5400UL), (size_t)(5403UL), (size_t)(5404UL), (size_t)(5405UL), (size_t)(5406UL), (size_t)(5407UL), (size_t)(5408UL), (size_t)(5409UL), (size_t)(5410UL), (size_t)(5416UL), (size_t)(5417UL), (size_t)(5418UL), (size_t)(5419UL)); rm_stack(false, 0UL); }
# 1802 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1803 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1804 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcLagrangeElements(Real_t deltatime)
# 1805 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(1, 1, (size_t)(0UL), "CalcLagrangeElements|deltatime|0", "double", (void *)(&deltatime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1806 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numElem; register_stack_var("CalcLagrangeElements|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numElem = (mesh.numElem);
# 1807 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (numElem > 0) {
# 1808 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1809 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1810 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1811 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(2, (size_t)(1875UL), (size_t)(1876UL)); call_lbl_0: calling(0, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); CalcKinematicsForElems(numElem, deltatime) ;
# 1812 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1813 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1814 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_1: Index_t k; register_stack_var("CalcLagrangeElements|k|0", "i32", (void *)(&k), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } for ( k = (0); k<numElem ; ++k )
# 1815 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1816 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1817 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t vdov; register_stack_var("CalcLagrangeElements|vdov|0", "double", (void *)(&vdov), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } vdov = (mesh.dxx[k] + mesh.dyy[k] + mesh.dzz[k]);
# 1818 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t vdovthird; register_stack_var("CalcLagrangeElements|vdovthird|0", "double", (void *)(&vdovthird), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } vdovthird = (vdov / Real_t(3.));
# 1819 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1820 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1821 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.vdov[k] = vdov ;
# 1822 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dxx[k] -= vdovthird ;
# 1823 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dyy[k] -= vdovthird ;
# 1824 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dzz[k] -= vdovthird ;
# 1825 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1826 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1827 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (mesh.vnew[k] <= Real_t(0.0))
# 1828 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 1829 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(4, (size_t)(1877UL), (size_t)(1878UL), (size_t)(1879UL), (size_t)(1994UL)); exit(VolumeError) ;
# 1830 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1831 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1832 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 1833 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(6, (size_t)(1875UL), (size_t)(1876UL), (size_t)(1877UL), (size_t)(1878UL), (size_t)(1879UL), (size_t)(1994UL)); rm_stack(false, 0UL); }
# 1834 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1835 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1836 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcMonotonicQGradientsForElems()
# 1837 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 1838 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1839 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numElem; register_stack_var("CalcMonotonicQGradientsForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numElem = (mesh.numElem);
# 1840 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t ptiny; register_stack_var("CalcMonotonicQGradientsForElems|ptiny|0", "double", (void *)(&ptiny), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } ptiny = (Real_t(9.9999999999999994E-37));
# 1841 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1842 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_2: Index_t i; register_stack_var("CalcMonotonicQGradientsForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } for ( i = (0); i < numElem ; ++i ) {
# 1843 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t ax; register_stack_var("CalcMonotonicQGradientsForElems|ax|0", "double", (void *)(&ax), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: Real_t ay; register_stack_var("CalcMonotonicQGradientsForElems|ay|0", "double", (void *)(&ay), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: Real_t az; register_stack_var("CalcMonotonicQGradientsForElems|az|0", "double", (void *)(&az), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; }
# 1844 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_6: Real_t dxv; register_stack_var("CalcMonotonicQGradientsForElems|dxv|0", "double", (void *)(&dxv), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } lbl_7: Real_t dyv; register_stack_var("CalcMonotonicQGradientsForElems|dyv|0", "double", (void *)(&dyv), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } lbl_8: Real_t dzv; register_stack_var("CalcMonotonicQGradientsForElems|dzv|0", "double", (void *)(&dzv), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; }
# 1845 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1846 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_9: const Index_t *elemToNode; register_stack_var("CalcMonotonicQGradientsForElems|elemToNode|0", "i32*", (void *)(&elemToNode), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_10; } elemToNode = (&mesh.nodelist[8 * i]);
# 1847 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_10: Index_t n0; register_stack_var("CalcMonotonicQGradientsForElems|n0|0", "i32", (void *)(&n0), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } n0 = (elemToNode[0]);
# 1848 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_11: Index_t n1; register_stack_var("CalcMonotonicQGradientsForElems|n1|0", "i32", (void *)(&n1), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } n1 = (elemToNode[1]);
# 1849 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_12: Index_t n2; register_stack_var("CalcMonotonicQGradientsForElems|n2|0", "i32", (void *)(&n2), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } n2 = (elemToNode[2]);
# 1850 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_13: Index_t n3; register_stack_var("CalcMonotonicQGradientsForElems|n3|0", "i32", (void *)(&n3), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_14; } n3 = (elemToNode[3]);
# 1851 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_14: Index_t n4; register_stack_var("CalcMonotonicQGradientsForElems|n4|0", "i32", (void *)(&n4), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_15; } n4 = (elemToNode[4]);
# 1852 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_15: Index_t n5; register_stack_var("CalcMonotonicQGradientsForElems|n5|0", "i32", (void *)(&n5), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_16; } n5 = (elemToNode[5]);
# 1853 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_16: Index_t n6; register_stack_var("CalcMonotonicQGradientsForElems|n6|0", "i32", (void *)(&n6), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_17; } n6 = (elemToNode[6]);
# 1854 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_17: Index_t n7; register_stack_var("CalcMonotonicQGradientsForElems|n7|0", "i32", (void *)(&n7), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_18; } n7 = (elemToNode[7]);
# 1855 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1856 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_18: Real_t x0; register_stack_var("CalcMonotonicQGradientsForElems|x0|0", "double", (void *)(&x0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_19; } x0 = (mesh.x[n0]);
# 1857 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_19: Real_t x1; register_stack_var("CalcMonotonicQGradientsForElems|x1|0", "double", (void *)(&x1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_20; } x1 = (mesh.x[n1]);
# 1858 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_20: Real_t x2; register_stack_var("CalcMonotonicQGradientsForElems|x2|0", "double", (void *)(&x2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_21; } x2 = (mesh.x[n2]);
# 1859 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_21: Real_t x3; register_stack_var("CalcMonotonicQGradientsForElems|x3|0", "double", (void *)(&x3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_22; } x3 = (mesh.x[n3]);
# 1860 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_22: Real_t x4; register_stack_var("CalcMonotonicQGradientsForElems|x4|0", "double", (void *)(&x4), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_23; } x4 = (mesh.x[n4]);
# 1861 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_23: Real_t x5; register_stack_var("CalcMonotonicQGradientsForElems|x5|0", "double", (void *)(&x5), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_24; } x5 = (mesh.x[n5]);
# 1862 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_24: Real_t x6; register_stack_var("CalcMonotonicQGradientsForElems|x6|0", "double", (void *)(&x6), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_25; } x6 = (mesh.x[n6]);
# 1863 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_25: Real_t x7; register_stack_var("CalcMonotonicQGradientsForElems|x7|0", "double", (void *)(&x7), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_26; } x7 = (mesh.x[n7]);
# 1864 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1865 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_26: Real_t y0; register_stack_var("CalcMonotonicQGradientsForElems|y0|0", "double", (void *)(&y0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_27; } y0 = (mesh.y[n0]);
# 1866 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_27: Real_t y1; register_stack_var("CalcMonotonicQGradientsForElems|y1|0", "double", (void *)(&y1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_28; } y1 = (mesh.y[n1]);
# 1867 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_28: Real_t y2; register_stack_var("CalcMonotonicQGradientsForElems|y2|0", "double", (void *)(&y2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_29; } y2 = (mesh.y[n2]);
# 1868 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_29: Real_t y3; register_stack_var("CalcMonotonicQGradientsForElems|y3|0", "double", (void *)(&y3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_30; } y3 = (mesh.y[n3]);
# 1869 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_30: Real_t y4; register_stack_var("CalcMonotonicQGradientsForElems|y4|0", "double", (void *)(&y4), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_31; } y4 = (mesh.y[n4]);
# 1870 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_31: Real_t y5; register_stack_var("CalcMonotonicQGradientsForElems|y5|0", "double", (void *)(&y5), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_32; } y5 = (mesh.y[n5]);
# 1871 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_32: Real_t y6; register_stack_var("CalcMonotonicQGradientsForElems|y6|0", "double", (void *)(&y6), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_33; } y6 = (mesh.y[n6]);
# 1872 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_33: Real_t y7; register_stack_var("CalcMonotonicQGradientsForElems|y7|0", "double", (void *)(&y7), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_34; } y7 = (mesh.y[n7]);
# 1873 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1874 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_34: Real_t z0; register_stack_var("CalcMonotonicQGradientsForElems|z0|0", "double", (void *)(&z0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_35; } z0 = (mesh.z[n0]);
# 1875 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_35: Real_t z1; register_stack_var("CalcMonotonicQGradientsForElems|z1|0", "double", (void *)(&z1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_36; } z1 = (mesh.z[n1]);
# 1876 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_36: Real_t z2; register_stack_var("CalcMonotonicQGradientsForElems|z2|0", "double", (void *)(&z2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_37; } z2 = (mesh.z[n2]);
# 1877 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_37: Real_t z3; register_stack_var("CalcMonotonicQGradientsForElems|z3|0", "double", (void *)(&z3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_38; } z3 = (mesh.z[n3]);
# 1878 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_38: Real_t z4; register_stack_var("CalcMonotonicQGradientsForElems|z4|0", "double", (void *)(&z4), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_39; } z4 = (mesh.z[n4]);
# 1879 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_39: Real_t z5; register_stack_var("CalcMonotonicQGradientsForElems|z5|0", "double", (void *)(&z5), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_40; } z5 = (mesh.z[n5]);
# 1880 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_40: Real_t z6; register_stack_var("CalcMonotonicQGradientsForElems|z6|0", "double", (void *)(&z6), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_41; } z6 = (mesh.z[n6]);
# 1881 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_41: Real_t z7; register_stack_var("CalcMonotonicQGradientsForElems|z7|0", "double", (void *)(&z7), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_42; } z7 = (mesh.z[n7]);
# 1882 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1883 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_42: Real_t xv0; register_stack_var("CalcMonotonicQGradientsForElems|xv0|0", "double", (void *)(&xv0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_43; } xv0 = (mesh.xd[n0]);
# 1884 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_43: Real_t xv1; register_stack_var("CalcMonotonicQGradientsForElems|xv1|0", "double", (void *)(&xv1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_44; } xv1 = (mesh.xd[n1]);
# 1885 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_44: Real_t xv2; register_stack_var("CalcMonotonicQGradientsForElems|xv2|0", "double", (void *)(&xv2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_45; } xv2 = (mesh.xd[n2]);
# 1886 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_45: Real_t xv3; register_stack_var("CalcMonotonicQGradientsForElems|xv3|0", "double", (void *)(&xv3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_46; } xv3 = (mesh.xd[n3]);
# 1887 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_46: Real_t xv4; register_stack_var("CalcMonotonicQGradientsForElems|xv4|0", "double", (void *)(&xv4), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_47; } xv4 = (mesh.xd[n4]);
# 1888 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_47: Real_t xv5; register_stack_var("CalcMonotonicQGradientsForElems|xv5|0", "double", (void *)(&xv5), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_48; } xv5 = (mesh.xd[n5]);
# 1889 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_48: Real_t xv6; register_stack_var("CalcMonotonicQGradientsForElems|xv6|0", "double", (void *)(&xv6), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_49; } xv6 = (mesh.xd[n6]);
# 1890 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_49: Real_t xv7; register_stack_var("CalcMonotonicQGradientsForElems|xv7|0", "double", (void *)(&xv7), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_50; } xv7 = (mesh.xd[n7]);
# 1891 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1892 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_50: Real_t yv0; register_stack_var("CalcMonotonicQGradientsForElems|yv0|0", "double", (void *)(&yv0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_51; } yv0 = (mesh.yd[n0]);
# 1893 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_51: Real_t yv1; register_stack_var("CalcMonotonicQGradientsForElems|yv1|0", "double", (void *)(&yv1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_52; } yv1 = (mesh.yd[n1]);
# 1894 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_52: Real_t yv2; register_stack_var("CalcMonotonicQGradientsForElems|yv2|0", "double", (void *)(&yv2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_53; } yv2 = (mesh.yd[n2]);
# 1895 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_53: Real_t yv3; register_stack_var("CalcMonotonicQGradientsForElems|yv3|0", "double", (void *)(&yv3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_54; } yv3 = (mesh.yd[n3]);
# 1896 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_54: Real_t yv4; register_stack_var("CalcMonotonicQGradientsForElems|yv4|0", "double", (void *)(&yv4), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_55; } yv4 = (mesh.yd[n4]);
# 1897 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_55: Real_t yv5; register_stack_var("CalcMonotonicQGradientsForElems|yv5|0", "double", (void *)(&yv5), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_56; } yv5 = (mesh.yd[n5]);
# 1898 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_56: Real_t yv6; register_stack_var("CalcMonotonicQGradientsForElems|yv6|0", "double", (void *)(&yv6), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_57; } yv6 = (mesh.yd[n6]);
# 1899 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_57: Real_t yv7; register_stack_var("CalcMonotonicQGradientsForElems|yv7|0", "double", (void *)(&yv7), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_58; } yv7 = (mesh.yd[n7]);
# 1900 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1901 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_58: Real_t zv0; register_stack_var("CalcMonotonicQGradientsForElems|zv0|0", "double", (void *)(&zv0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_59; } zv0 = (mesh.zd[n0]);
# 1902 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_59: Real_t zv1; register_stack_var("CalcMonotonicQGradientsForElems|zv1|0", "double", (void *)(&zv1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_60; } zv1 = (mesh.zd[n1]);
# 1903 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_60: Real_t zv2; register_stack_var("CalcMonotonicQGradientsForElems|zv2|0", "double", (void *)(&zv2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_61; } zv2 = (mesh.zd[n2]);
# 1904 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_61: Real_t zv3; register_stack_var("CalcMonotonicQGradientsForElems|zv3|0", "double", (void *)(&zv3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_62; } zv3 = (mesh.zd[n3]);
# 1905 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_62: Real_t zv4; register_stack_var("CalcMonotonicQGradientsForElems|zv4|0", "double", (void *)(&zv4), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_63; } zv4 = (mesh.zd[n4]);
# 1906 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_63: Real_t zv5; register_stack_var("CalcMonotonicQGradientsForElems|zv5|0", "double", (void *)(&zv5), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_64; } zv5 = (mesh.zd[n5]);
# 1907 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_64: Real_t zv6; register_stack_var("CalcMonotonicQGradientsForElems|zv6|0", "double", (void *)(&zv6), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_65; } zv6 = (mesh.zd[n6]);
# 1908 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_65: Real_t zv7; register_stack_var("CalcMonotonicQGradientsForElems|zv7|0", "double", (void *)(&zv7), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_66; } zv7 = (mesh.zd[n7]);
# 1909 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1910 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_66: Real_t vol; register_stack_var("CalcMonotonicQGradientsForElems|vol|0", "double", (void *)(&vol), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_67; } vol = (mesh.volo[i] * mesh.vnew[i]);
# 1911 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_67: Real_t norm; register_stack_var("CalcMonotonicQGradientsForElems|norm|0", "double", (void *)(&norm), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_68; } norm = (Real_t(1.) / (vol + ptiny));
# 1912 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1913 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_68: Real_t dxj; register_stack_var("CalcMonotonicQGradientsForElems|dxj|0", "double", (void *)(&dxj), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_69; } dxj = (Real_t(-0.25) * ((x0 + x1 + x5 + x4) - (x3 + x2 + x6 + x7)));
# 1914 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_69: Real_t dyj; register_stack_var("CalcMonotonicQGradientsForElems|dyj|0", "double", (void *)(&dyj), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_70; } dyj = (Real_t(-0.25) * ((y0 + y1 + y5 + y4) - (y3 + y2 + y6 + y7)));
# 1915 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_70: Real_t dzj; register_stack_var("CalcMonotonicQGradientsForElems|dzj|0", "double", (void *)(&dzj), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_71; } dzj = (Real_t(-0.25) * ((z0 + z1 + z5 + z4) - (z3 + z2 + z6 + z7)));
# 1916 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1917 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_71: Real_t dxi; register_stack_var("CalcMonotonicQGradientsForElems|dxi|0", "double", (void *)(&dxi), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_72; } dxi = (Real_t(0.25) * ((x1 + x2 + x6 + x5) - (x0 + x3 + x7 + x4)));
# 1918 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_72: Real_t dyi; register_stack_var("CalcMonotonicQGradientsForElems|dyi|0", "double", (void *)(&dyi), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_73; } dyi = (Real_t(0.25) * ((y1 + y2 + y6 + y5) - (y0 + y3 + y7 + y4)));
# 1919 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_73: Real_t dzi; register_stack_var("CalcMonotonicQGradientsForElems|dzi|0", "double", (void *)(&dzi), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_74; } dzi = (Real_t(0.25) * ((z1 + z2 + z6 + z5) - (z0 + z3 + z7 + z4)));
# 1920 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1921 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_74: Real_t dxk; register_stack_var("CalcMonotonicQGradientsForElems|dxk|0", "double", (void *)(&dxk), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_75; } dxk = (Real_t(0.25) * ((x4 + x5 + x6 + x7) - (x0 + x1 + x2 + x3)));
# 1922 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_75: Real_t dyk; register_stack_var("CalcMonotonicQGradientsForElems|dyk|0", "double", (void *)(&dyk), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_76; } dyk = (Real_t(0.25) * ((y4 + y5 + y6 + y7) - (y0 + y1 + y2 + y3)));
# 1923 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_76: Real_t dzk; register_stack_var("CalcMonotonicQGradientsForElems|dzk|0", "double", (void *)(&dzk), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { exit(42); } } } dzk = (Real_t(0.25) * ((z4 + z5 + z6 + z7) - (z0 + z1 + z2 + z3)));
# 1924 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1925 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1926 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1927 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ax = dyi*dzj - dzi*dyj ;
# 1928 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ay = dzi*dxj - dxi*dzj ;
# 1929 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 az = dxi*dyj - dyi*dxj ;
# 1930 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1931 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(78, (size_t)(1994UL), (size_t)(3794UL), (size_t)(3795UL), (size_t)(3796UL), (size_t)(3797UL), (size_t)(3798UL), (size_t)(3799UL), (size_t)(3800UL), (size_t)(3801UL), (size_t)(3802UL), (size_t)(3803UL), (size_t)(3804UL), (size_t)(3805UL), (size_t)(3806UL), (size_t)(3807UL), (size_t)(3808UL), (size_t)(3809UL), (size_t)(3810UL), (size_t)(3811UL), (size_t)(3812UL), (size_t)(3813UL), (size_t)(3814UL), (size_t)(3815UL), (size_t)(3816UL), (size_t)(3817UL), (size_t)(3818UL), (size_t)(3819UL), (size_t)(3820UL), (size_t)(3821UL), (size_t)(3822UL), (size_t)(3823UL), (size_t)(3824UL), (size_t)(3825UL), (size_t)(3826UL), (size_t)(3827UL), (size_t)(3828UL), (size_t)(3829UL), (size_t)(3830UL), (size_t)(3831UL), (size_t)(3832UL), (size_t)(3833UL), (size_t)(3834UL), (size_t)(3835UL), (size_t)(3836UL), (size_t)(3837UL), (size_t)(3838UL), (size_t)(3839UL), (size_t)(3840UL), (size_t)(3841UL), (size_t)(3842UL), (size_t)(3843UL), (size_t)(3844UL), (size_t)(3845UL), (size_t)(3846UL), (size_t)(3847UL), (size_t)(3848UL), (size_t)(3849UL), (size_t)(3850UL), (size_t)(3851UL), (size_t)(3852UL), (size_t)(3853UL), (size_t)(3854UL), (size_t)(3855UL), (size_t)(3856UL), (size_t)(3857UL), (size_t)(3858UL), (size_t)(3859UL), (size_t)(3860UL), (size_t)(3861UL), (size_t)(3862UL), (size_t)(3863UL), (size_t)(3864UL), (size_t)(3865UL), (size_t)(3866UL), (size_t)(3867UL), (size_t)(3868UL), (size_t)(3869UL), (size_t)(3870UL)); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); mesh.delx_zeta[i] = vol / SQRT(ax*ax + ay*ay + az*az + ptiny) ;
# 1932 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1933 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ax *= norm ;
# 1934 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ay *= norm ;
# 1935 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 az *= norm ;
# 1936 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1937 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dxv = Real_t(0.25)*((xv4 + xv5 + xv6 + xv7) - (xv0 + xv1 + xv2 + xv3)) ;
# 1938 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dyv = Real_t(0.25)*((yv4 + yv5 + yv6 + yv7) - (yv0 + yv1 + yv2 + yv3)) ;
# 1939 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dzv = Real_t(0.25)*((zv4 + zv5 + zv6 + zv7) - (zv0 + zv1 + zv2 + zv3)) ;
# 1940 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1941 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.delv_zeta[i] = ax*dxv + ay*dyv + az*dzv ;
# 1942 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1943 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1944 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1945 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ax = dyj*dzk - dzj*dyk ;
# 1946 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ay = dzj*dxk - dxj*dzk ;
# 1947 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 az = dxj*dyk - dyj*dxk ;
# 1948 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1949 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(7, (size_t)(1994UL), (size_t)(3797UL), (size_t)(3798UL), (size_t)(3799UL), (size_t)(3800UL), (size_t)(3801UL), (size_t)(3802UL)); call_lbl_1: calling(1, 0UL, 1, (size_t)(0UL)); mesh.delx_xi[i] = vol / SQRT(ax*ax + ay*ay + az*az + ptiny) ;
# 1950 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1951 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ax *= norm ;
# 1952 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ay *= norm ;
# 1953 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 az *= norm ;
# 1954 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1955 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dxv = Real_t(0.25)*((xv1 + xv2 + xv6 + xv5) - (xv0 + xv3 + xv7 + xv4)) ;
# 1956 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dyv = Real_t(0.25)*((yv1 + yv2 + yv6 + yv5) - (yv0 + yv3 + yv7 + yv4)) ;
# 1957 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dzv = Real_t(0.25)*((zv1 + zv2 + zv6 + zv5) - (zv0 + zv3 + zv7 + zv4)) ;
# 1958 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1959 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.delv_xi[i] = ax*dxv + ay*dyv + az*dzv ;
# 1960 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1961 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1962 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1963 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ax = dyk*dzi - dzk*dyi ;
# 1964 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ay = dzk*dxi - dxk*dzi ;
# 1965 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 az = dxk*dyi - dyk*dxi ;
# 1966 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1967 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(7, (size_t)(1994UL), (size_t)(3797UL), (size_t)(3798UL), (size_t)(3799UL), (size_t)(3800UL), (size_t)(3801UL), (size_t)(3802UL)); call_lbl_2: calling(2, 0UL, 1, (size_t)(0UL)); mesh.delx_eta[i] = vol / SQRT(ax*ax + ay*ay + az*az + ptiny) ;
# 1968 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1969 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ax *= norm ;
# 1970 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ay *= norm ;
# 1971 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 az *= norm ;
# 1972 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1973 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dxv = Real_t(-0.25)*((xv0 + xv1 + xv5 + xv4) - (xv3 + xv2 + xv6 + xv7)) ;
# 1974 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dyv = Real_t(-0.25)*((yv0 + yv1 + yv5 + yv4) - (yv3 + yv2 + yv6 + yv7)) ;
# 1975 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dzv = Real_t(-0.25)*((zv0 + zv1 + zv5 + zv4) - (zv3 + zv2 + zv6 + zv7)) ;
# 1976 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1977 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.delv_eta[i] = ax*dxv + ay*dyv + az*dzv ;
# 1978 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 1979 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1980 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(10, (size_t)(1994UL), (size_t)(3794UL), (size_t)(3795UL), (size_t)(3796UL), (size_t)(3797UL), (size_t)(3798UL), (size_t)(3799UL), (size_t)(3800UL), (size_t)(3801UL), (size_t)(3802UL)); rm_stack(false, 0UL); }
# 1981 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1982 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 1983 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcMonotonicQRegionForElems(
# 1984 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qlc_monoq,
# 1985 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qqc_monoq,
# 1986 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t monoq_limiter_mult,
# 1987 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t monoq_max_slope,
# 1988 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t ptiny,
# 1989 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1990 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 1991 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t elength )
# 1992 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { exit(42); } } }
# 1993 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { Index_t ielem; for ( ielem = (0); ielem < elength; ++ielem ) {
# 1994 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qlin; Real_t qquad;
# 1995 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t phixi; Real_t phieta; Real_t phizeta;
# 1996 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t i; i = (mesh.matElemlist[ielem]);
# 1997 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Int_t bcMask; bcMask = (mesh.elemBC[i]);
# 1998 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t delvm; Real_t delvp;
# 1999 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2000 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2001 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t norm; norm = (Real_t(1.) / (mesh.delv_xi[i] + ptiny));
# 2002 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2003 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 switch (bcMask & 0x003) {
# 2004 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0: delvm = mesh.delv_xi[mesh.lxim[i]] ; break ;
# 2005 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x001: delvm = mesh.delv_xi[i] ; break ;
# 2006 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x002: delvm = Real_t(0.0) ; break ;
# 2007 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 default: ; break ;
# 2008 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2009 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 switch (bcMask & 0x00c) {
# 2010 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0: delvp = mesh.delv_xi[mesh.lxip[i]] ; break ;
# 2011 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x004: delvp = mesh.delv_xi[i] ; break ;
# 2012 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x008: delvp = Real_t(0.0) ; break ;
# 2013 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 default: ; break ;
# 2014 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2015 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2016 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvm = delvm * norm ;
# 2017 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvp = delvp * norm ;
# 2018 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2019 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 phixi = Real_t(.5) * ( delvm + delvp ) ;
# 2020 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2021 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvm *= monoq_limiter_mult ;
# 2022 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvp *= monoq_limiter_mult ;
# 2023 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2024 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvm < phixi) {phixi = delvm; } ;
# 2025 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvp < phixi) {phixi = delvp; } ;
# 2026 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (phixi < Real_t(0.)) {phixi = Real_t(0.); } ;
# 2027 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (phixi > monoq_max_slope) {phixi = monoq_max_slope; };
# 2028 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2029 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2030 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2031 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 norm = Real_t(1.) / ( mesh.delv_eta[i] + ptiny ) ;
# 2032 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2033 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 switch (bcMask & 0x030) {
# 2034 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0: delvm = mesh.delv_eta[mesh.letam[i]] ; break ;
# 2035 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x010: delvm = mesh.delv_eta[i] ; break ;
# 2036 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x020: delvm = Real_t(0.0) ; break ;
# 2037 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 default: ; break ;
# 2038 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2039 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 switch (bcMask & 0x0c0) {
# 2040 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0: delvp = mesh.delv_eta[mesh.letap[i]] ; break ;
# 2041 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x040: delvp = mesh.delv_eta[i] ; break ;
# 2042 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x080: delvp = Real_t(0.0) ; break ;
# 2043 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 default: ; break ;
# 2044 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2045 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2046 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvm = delvm * norm ;
# 2047 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvp = delvp * norm ;
# 2048 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2049 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 phieta = Real_t(.5) * ( delvm + delvp ) ;
# 2050 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2051 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvm *= monoq_limiter_mult ;
# 2052 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvp *= monoq_limiter_mult ;
# 2053 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2054 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvm < phieta) {phieta = delvm; } ;
# 2055 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvp < phieta) {phieta = delvp; } ;
# 2056 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (phieta < Real_t(0.)) {phieta = Real_t(0.); } ;
# 2057 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (phieta > monoq_max_slope) {phieta = monoq_max_slope; };
# 2058 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2059 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2060 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 norm = Real_t(1.) / ( mesh.delv_zeta[i] + ptiny ) ;
# 2061 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2062 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 switch (bcMask & 0x300) {
# 2063 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0: delvm = mesh.delv_zeta[mesh.lzetam[i]] ; break ;
# 2064 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x100: delvm = mesh.delv_zeta[i] ; break ;
# 2065 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x200: delvm = Real_t(0.0) ; break ;
# 2066 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 default: ; break ;
# 2067 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2068 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 switch (bcMask & 0xc00) {
# 2069 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0: delvp = mesh.delv_zeta[mesh.lzetap[i]] ; break ;
# 2070 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x400: delvp = mesh.delv_zeta[i] ; break ;
# 2071 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 case 0x800: delvp = Real_t(0.0) ; break ;
# 2072 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 default: ; break ;
# 2073 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2074 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2075 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvm = delvm * norm ;
# 2076 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvp = delvp * norm ;
# 2077 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2078 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 phizeta = Real_t(.5) * ( delvm + delvp ) ;
# 2079 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2080 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvm *= monoq_limiter_mult ;
# 2081 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvp *= monoq_limiter_mult ;
# 2082 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2083 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvm < phizeta) {phizeta = delvm; } ;
# 2084 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvp < phizeta) {phizeta = delvp; } ;
# 2085 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (phizeta < Real_t(0.)) {phizeta = Real_t(0.); };
# 2086 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (phizeta > monoq_max_slope) {phizeta = monoq_max_slope; };
# 2087 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2088 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2089 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2090 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( mesh.vdov[i] > Real_t(0.) ) {
# 2091 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qlin = Real_t(0.) ;
# 2092 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qquad = Real_t(0.) ;
# 2093 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2094 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 else {
# 2095 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t delvxxi; delvxxi = (mesh.delv_xi[i] * mesh.delx_xi[i]);
# 2096 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t delvxeta; delvxeta = (mesh.delv_eta[i] * mesh.delx_eta[i]);
# 2097 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t delvxzeta; delvxzeta = (mesh.delv_zeta[i] * mesh.delx_zeta[i]);
# 2098 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2099 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvxxi > Real_t(0.)) {delvxxi = Real_t(0.); } ;
# 2100 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvxeta > Real_t(0.)) {delvxeta = Real_t(0.); } ;
# 2101 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvxzeta > Real_t(0.)) {delvxzeta = Real_t(0.); } ;
# 2102 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2103 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t rho; rho = (mesh.elemMass[i] / (mesh.volo[i] * mesh.vnew[i]));
# 2104 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2105 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qlin = -qlc_monoq * rho *
# 2106 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ( delvxxi * (Real_t(1.) - phixi) +
# 2107 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvxeta * (Real_t(1.) - phieta) +
# 2108 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvxzeta * (Real_t(1.) - phizeta) ) ;
# 2109 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2110 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qquad = qqc_monoq * rho *
# 2111 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ( delvxxi*delvxxi * (Real_t(1.) - phixi*phixi) +
# 2112 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvxeta*delvxeta * (Real_t(1.) - phieta*phieta) +
# 2113 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvxzeta*delvxzeta * (Real_t(1.) - phizeta*phizeta) ) ;
# 2114 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2115 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2116 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.qq[i] = qquad ;
# 2117 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.ql[i] = qlin ;
# 2118 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2119 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(22, (size_t)(1994UL), (size_t)(4866UL), (size_t)(4867UL), (size_t)(4868UL), (size_t)(4869UL), (size_t)(4870UL), (size_t)(4871UL), (size_t)(4872UL), (size_t)(4873UL), (size_t)(4874UL), (size_t)(4875UL), (size_t)(4876UL), (size_t)(4877UL), (size_t)(4878UL), (size_t)(4879UL), (size_t)(4880UL), (size_t)(4881UL), (size_t)(4882UL), (size_t)(4883UL), (size_t)(4884UL), (size_t)(4885UL), (size_t)(4886UL)); rm_stack(false, 0UL); }
# 2120 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2121 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2122 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcMonotonicQForElems()
# 2123 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } }
# 2124 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2125 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2126 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2127 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t ptiny; ptiny = (Real_t(9.9999999999999994E-37));
# 2128 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t monoq_max_slope; monoq_max_slope = (mesh.monoq_max_slope);
# 2129 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t monoq_limiter_mult; monoq_limiter_mult = (mesh.monoq_limiter_mult);
# 2130 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2131 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2132 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2133 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2134 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t elength; elength = (mesh.numElem);
# 2135 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (elength > 0) {
# 2136 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qlc_monoq; qlc_monoq = (mesh.qlc_monoq);
# 2137 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t qqc_monoq; qqc_monoq = (mesh.qqc_monoq);
# 2138 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 6, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); CalcMonotonicQRegionForElems(
# 2139 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qlc_monoq,
# 2140 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qqc_monoq,
# 2141 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 monoq_limiter_mult,
# 2142 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 monoq_max_slope,
# 2143 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ptiny,
# 2144 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2145 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2146 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 elength );
# 2147 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2148 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(6, (size_t)(4831UL), (size_t)(4832UL), (size_t)(4833UL), (size_t)(4834UL), (size_t)(4835UL), (size_t)(4836UL)); rm_stack(false, 0UL); }
# 2149 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2150 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2151 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcQForElems()
# 2152 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2153 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t qstop; register_stack_var("CalcQForElems|qstop|0", "double", (void *)(&qstop), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } qstop = (mesh.qstop);
# 2154 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Index_t numElem; register_stack_var("CalcQForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } numElem = (mesh.numElem);
# 2155 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2156 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2157 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2158 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2159 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2160 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2161 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(2, (size_t)(1968UL), (size_t)(1969UL)); call_lbl_0: calling(0, 0UL, 0); CalcMonotonicQGradientsForElems() ;
# 2162 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2163 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2164 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2165 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 0); CalcMonotonicQForElems() ;
# 2166 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2167 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2168 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (numElem != 0) {
# 2169 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Index_t idx; register_stack_var("CalcQForElems|idx|0", "i32", (void *)(&idx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } idx = (-1);
# 2170 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_3: Index_t i; register_stack_var("CalcQForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { exit(42); } } } for ( i = (0); i<numElem; ++i) {
# 2171 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( mesh.q[i] > qstop ) {
# 2172 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 idx = i ;
# 2173 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 break ;
# 2174 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2175 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2176 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2177 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if(idx >= 0) {
# 2178 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(2, (size_t)(1970UL), (size_t)(1971UL)); exit(QStopError) ;
# 2179 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2180 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2181 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(2, (size_t)(1970UL), (size_t)(1971UL)); rm_stack(false, 0UL); }
# 2182 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2183 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2184 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcPressureForElems(Real_t* p_new, Real_t* bvc,
# 2185 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* pbvc, Real_t* e_old,
# 2186 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* compression, Real_t *vnewc,
# 2187 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t pmin,
# 2188 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t p_cut, Real_t eosvmax,
# 2189 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t length)
# 2190 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(10, 10, (size_t)(3784UL), (size_t)(3785UL), (size_t)(3786UL), (size_t)(3787UL), (size_t)(3788UL), (size_t)(3789UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "CalcPressureForElems|p_new|0", "double*", (void *)(&p_new), (size_t)8, 1, 0, 0, "CalcPressureForElems|bvc|0", "double*", (void *)(&bvc), (size_t)8, 1, 0, 0, "CalcPressureForElems|pbvc|0", "double*", (void *)(&pbvc), (size_t)8, 1, 0, 0, "CalcPressureForElems|e_old|0", "double*", (void *)(&e_old), (size_t)8, 1, 0, 0, "CalcPressureForElems|compression|0", "double*", (void *)(&compression), (size_t)8, 1, 0, 0, "CalcPressureForElems|vnewc|0", "double*", (void *)(&vnewc), (size_t)8, 1, 0, 0, "CalcPressureForElems|pmin|0", "double", (void *)(&pmin), (size_t)8, 0, 0, 0, "CalcPressureForElems|p_cut|0", "double", (void *)(&p_cut), (size_t)8, 0, 0, 0, "CalcPressureForElems|eosvmax|0", "double", (void *)(&eosvmax), (size_t)8, 0, 0, 0, "CalcPressureForElems|length|0", "i32", (void *)(&length), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2191 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t c1s; register_stack_var("CalcPressureForElems|c1s|0", "double", (void *)(&c1s), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } c1s = (Real_t(2.) / Real_t(3.));
# 2192 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_1: Index_t i; register_stack_var("CalcPressureForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } for ( i = (0); i < length ; ++i) {
# 2193 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 bvc[i] = c1s * (compression[i] + Real_t(1.));
# 2194 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pbvc[i] = c1s;
# 2195 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2196 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2197 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_2: Index_t i; register_stack_var("CalcPressureForElems|i|1", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } for ( i = (0); i < length ; ++i){
# 2198 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 p_new[i] = bvc[i] * e_old[i] ;
# 2199 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2200 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); if (FABS(p_new[i]) < p_cut) {p_new[i] = Real_t(0.); } ;
# 2202 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2203 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vnewc[i] >= eosvmax) {p_new[i] = Real_t(0.); } ;
# 2205 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2206 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (p_new[i] < pmin) {p_new[i] = pmin; } ;
# 2208 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2209 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(16, (size_t)(3645UL), (size_t)(3646UL), (size_t)(3647UL), (size_t)(3648UL), (size_t)(3649UL), (size_t)(3650UL), (size_t)(3651UL), (size_t)(3652UL), (size_t)(3653UL), (size_t)(3654UL), (size_t)(3655UL), (size_t)(3656UL), (size_t)(3657UL), (size_t)(3784UL), (size_t)(3785UL), (size_t)(3786UL)); rm_stack(false, 0UL); }
# 2210 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2211 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2212 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcEnergyForElems(Real_t* p_new, Real_t* e_new, Real_t* q_new,
# 2213 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* bvc, Real_t* pbvc,
# 2214 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* p_old, Real_t* e_old, Real_t* q_old,
# 2215 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* compression, Real_t* compHalfStep,
# 2216 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* vnewc, Real_t* work, Real_t* delvc, Real_t pmin,
# 2217 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t p_cut, Real_t e_cut, Real_t q_cut, Real_t emin,
# 2218 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t* qq, Real_t* ql,
# 2219 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t rho0,
# 2220 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t eosvmax,
# 2221 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Index_t length)
# 2222 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(23, 23, (size_t)(3516UL), (size_t)(3517UL), (size_t)(3518UL), (size_t)(3519UL), (size_t)(3520UL), (size_t)(3521UL), (size_t)(3522UL), (size_t)(3523UL), (size_t)(3524UL), (size_t)(3525UL), (size_t)(3526UL), (size_t)(3527UL), (size_t)(3528UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(3534UL), (size_t)(3535UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "CalcEnergyForElems|p_new|0", "double*", (void *)(&p_new), (size_t)8, 1, 0, 0, "CalcEnergyForElems|e_new|0", "double*", (void *)(&e_new), (size_t)8, 1, 0, 0, "CalcEnergyForElems|q_new|0", "double*", (void *)(&q_new), (size_t)8, 1, 0, 0, "CalcEnergyForElems|bvc|0", "double*", (void *)(&bvc), (size_t)8, 1, 0, 0, "CalcEnergyForElems|pbvc|0", "double*", (void *)(&pbvc), (size_t)8, 1, 0, 0, "CalcEnergyForElems|p_old|0", "double*", (void *)(&p_old), (size_t)8, 1, 0, 0, "CalcEnergyForElems|e_old|0", "double*", (void *)(&e_old), (size_t)8, 1, 0, 0, "CalcEnergyForElems|q_old|0", "double*", (void *)(&q_old), (size_t)8, 1, 0, 0, "CalcEnergyForElems|compression|0", "double*", (void *)(&compression), (size_t)8, 1, 0, 0, "CalcEnergyForElems|compHalfStep|0", "double*", (void *)(&compHalfStep), (size_t)8, 1, 0, 0, "CalcEnergyForElems|vnewc|0", "double*", (void *)(&vnewc), (size_t)8, 1, 0, 0, "CalcEnergyForElems|work|0", "double*", (void *)(&work), (size_t)8, 1, 0, 0, "CalcEnergyForElems|delvc|0", "double*", (void *)(&delvc), (size_t)8, 1, 0, 0, "CalcEnergyForElems|pmin|0", "double", (void *)(&pmin), (size_t)8, 0, 0, 0, "CalcEnergyForElems|p_cut|0", "double", (void *)(&p_cut), (size_t)8, 0, 0, 0, "CalcEnergyForElems|e_cut|0", "double", (void *)(&e_cut), (size_t)8, 0, 0, 0, "CalcEnergyForElems|q_cut|0", "double", (void *)(&q_cut), (size_t)8, 0, 0, 0, "CalcEnergyForElems|emin|0", "double", (void *)(&emin), (size_t)8, 0, 0, 0, "CalcEnergyForElems|qq|0", "double*", (void *)(&qq), (size_t)8, 1, 0, 0, "CalcEnergyForElems|ql|0", "double*", (void *)(&ql), (size_t)8, 1, 0, 0, "CalcEnergyForElems|rho0|0", "double", (void *)(&rho0), (size_t)8, 0, 0, 0, "CalcEnergyForElems|eosvmax|0", "double", (void *)(&eosvmax), (size_t)8, 0, 0, 0, "CalcEnergyForElems|length|0", "i32", (void *)(&length), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2223 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t sixth; register_stack_var("CalcEnergyForElems|sixth|0", "double", (void *)(&sixth), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } sixth = (Real_t(1.) / Real_t(6.));
# 2224 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t *pHalfStep; register_stack_var("CalcEnergyForElems|pHalfStep|0", "double*", (void *)(&pHalfStep), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } pHalfStep = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2954UL, 0, 0));
# 2225 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2226 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_2: Index_t i; register_stack_var("CalcEnergyForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } for ( i = (0); i < length ; ++i) {
# 2227 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = e_old[i] - Real_t(0.5) * delvc[i] * (p_old[i] + q_old[i])
# 2228 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + Real_t(0.5) * work[i];
# 2229 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2230 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (e_new[i] < emin ) {
# 2231 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = emin ;
# 2232 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2233 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2234 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2235 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(27, (size_t)(2867UL), (size_t)(2868UL), (size_t)(2869UL), (size_t)(2870UL), (size_t)(2871UL), (size_t)(2872UL), (size_t)(2873UL), (size_t)(2874UL), (size_t)(2875UL), (size_t)(2876UL), (size_t)(2877UL), (size_t)(2878UL), (size_t)(2879UL), (size_t)(2880UL), (size_t)(2881UL), (size_t)(2882UL), (size_t)(2883UL), (size_t)(2884UL), (size_t)(2885UL), (size_t)(2886UL), (size_t)(2887UL), (size_t)(2888UL), (size_t)(2889UL), (size_t)(2890UL), (size_t)(2891UL), (size_t)(2892UL), (size_t)(3517UL)); call_lbl_0: calling(0, 0UL, 10, (size_t)(2954UL), (size_t)(3519UL), (size_t)(3520UL), (size_t)(3517UL), (size_t)(3525UL), (size_t)(3526UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); CalcPressureForElems(pHalfStep, bvc, pbvc, e_new, compHalfStep, vnewc,
# 2236 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pmin, p_cut, eosvmax, length);
# 2237 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2238 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_3: Index_t i; register_stack_var("CalcEnergyForElems|i|1", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } for ( i = (0); i < length ; ++i) {
# 2239 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_4: Real_t vhalf; register_stack_var("CalcEnergyForElems|vhalf|0", "double", (void *)(&vhalf), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } vhalf = (Real_t(1.) / (Real_t(1.) + compHalfStep[i]));
# 2240 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2241 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( delvc[i] > Real_t(0.) ) {
# 2242 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 q_new[i] = Real_t(0.) ;
# 2243 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2244 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 else {
# 2245 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Real_t ssc; register_stack_var("CalcEnergyForElems|ssc|0", "double", (void *)(&ssc), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } ssc = ((pbvc[i] * e_new[i] + vhalf * vhalf * bvc[i] * pHalfStep[i]) / rho0);
# 2247 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2248 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( ssc <= Real_t(.111111e-36) ) {
# 2249 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ssc =Real_t(.333333e-18) ;
# 2250 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } else {
# 2251 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(6, (size_t)(2893UL), (size_t)(2894UL), (size_t)(2895UL), (size_t)(2896UL), (size_t)(3517UL), (size_t)(3518UL)); call_lbl_1: calling(1, 0UL, 1, (size_t)(0UL)); ssc = SQRT(ssc) ;
# 2252 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2253 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2254 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 q_new[i] = (ssc*ql[i] + qq[i]) ;
# 2255 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2256 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2257 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = e_new[i] + Real_t(0.5) * delvc[i]
# 2258 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 * ( Real_t(3.0)*(p_old[i] + q_old[i])
# 2259 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 - Real_t(4.0)*(pHalfStep[i] + q_new[i])) ;
# 2260 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2261 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_6: Index_t i; register_stack_var("CalcEnergyForElems|i|2", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } for ( i = (0); i < length ; ++i) {
# 2262 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2263 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] += Real_t(0.5) * work[i];
# 2264 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2265 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 1, (size_t)(0UL)); if (alias_group_changed(6, (size_t)(2893UL), (size_t)(2894UL), (size_t)(2895UL), (size_t)(2896UL), (size_t)(3517UL), (size_t)(3518UL)) || FABS(e_new[i]) < e_cut) {
# 2266 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = Real_t(0.) ;
# 2267 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2268 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( e_new[i] < emin ) {
# 2269 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = emin ;
# 2270 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2271 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2272 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2273 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(6, (size_t)(2893UL), (size_t)(2894UL), (size_t)(2895UL), (size_t)(2896UL), (size_t)(3517UL), (size_t)(3518UL)); call_lbl_3: calling(3, 0UL, 10, (size_t)(3516UL), (size_t)(3519UL), (size_t)(3520UL), (size_t)(3517UL), (size_t)(3524UL), (size_t)(3526UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); CalcPressureForElems(p_new, bvc, pbvc, e_new, compression, vnewc,
# 2274 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pmin, p_cut, eosvmax, length);
# 2275 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2276 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_7: Index_t i; register_stack_var("CalcEnergyForElems|i|3", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } for ( i = (0); i < length ; ++i){
# 2277 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_8: Real_t q_tilde; register_stack_var("CalcEnergyForElems|q_tilde|0", "double", (void *)(&q_tilde), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; }
# 2278 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2279 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (delvc[i] > Real_t(0.)) {
# 2280 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 q_tilde = Real_t(0.) ;
# 2281 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2282 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 else {
# 2283 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_9: Real_t ssc; register_stack_var("CalcEnergyForElems|ssc|1", "double", (void *)(&ssc), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } ssc = ((pbvc[i] * e_new[i] + vnewc[i] * vnewc[i] * bvc[i] * p_new[i]) / rho0);
# 2285 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2286 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( ssc <= Real_t(.111111e-36) ) {
# 2287 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ssc = Real_t(.333333e-18) ;
# 2288 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } else {
# 2289 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(4, (size_t)(2897UL), (size_t)(2898UL), (size_t)(2899UL), (size_t)(3517UL)); call_lbl_4: calling(4, 0UL, 1, (size_t)(0UL)); ssc = SQRT(ssc) ;
# 2290 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2291 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2292 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 q_tilde = (ssc*ql[i] + qq[i]) ;
# 2293 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2294 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2295 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = e_new[i] - ( Real_t(7.0)*(p_old[i] + q_old[i])
# 2296 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 - Real_t(8.0)*(pHalfStep[i] + q_new[i])
# 2297 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + (p_new[i] + q_tilde)) * delvc[i]*sixth ;
# 2298 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2299 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_5: calling(5, 0UL, 1, (size_t)(0UL)); if (alias_group_changed(4, (size_t)(2897UL), (size_t)(2898UL), (size_t)(2899UL), (size_t)(3517UL)) || FABS(e_new[i]) < e_cut) {
# 2300 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = Real_t(0.) ;
# 2301 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2302 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( e_new[i] < emin ) {
# 2303 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_new[i] = emin ;
# 2304 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2305 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2306 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2307 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(4, (size_t)(2897UL), (size_t)(2898UL), (size_t)(2899UL), (size_t)(3517UL)); call_lbl_6: calling(6, 0UL, 10, (size_t)(3516UL), (size_t)(3519UL), (size_t)(3520UL), (size_t)(3517UL), (size_t)(3524UL), (size_t)(3526UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); CalcPressureForElems(p_new, bvc, pbvc, e_new, compression, vnewc,
# 2308 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pmin, p_cut, eosvmax, length);
# 2309 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2310 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_10: Index_t i; register_stack_var("CalcEnergyForElems|i|4", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } for ( i = (0); i < length ; ++i){
# 2311 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2312 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( delvc[i] <= Real_t(0.) ) {
# 2313 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_11: Real_t ssc; register_stack_var("CalcEnergyForElems|ssc|2", "double", (void *)(&ssc), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } default: { exit(42); } } } ssc = ((pbvc[i] * e_new[i] + vnewc[i] * vnewc[i] * bvc[i] * p_new[i]) / rho0);
# 2315 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2316 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( ssc <= Real_t(.111111e-36) ) {
# 2317 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ssc = Real_t(.333333e-18) ;
# 2318 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } else {
# 2319 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(3, (size_t)(2900UL), (size_t)(2901UL), (size_t)(3518UL)); call_lbl_7: calling(7, 0UL, 1, (size_t)(0UL)); ssc = SQRT(ssc) ;
# 2320 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2321 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2322 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 q_new[i] = (ssc*ql[i] + qq[i]) ;
# 2323 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2324 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_8: calling(8, 0UL, 1, (size_t)(0UL)); if (FABS(q_new[i]) < q_cut) {q_new[i] = Real_t(0.); } ;
# 2325 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2326 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2327 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2328 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(pHalfStep, 2954UL) ;
# 2329 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2330 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(2, (size_t)(2900UL), (size_t)(3518UL)); rm_stack(false, 0UL); return ;
# 2331 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 2332 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2333 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2334 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcSoundSpeedForElems(Real_t *vnewc, Real_t rho0, Real_t *enewc,
# 2335 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *pnewc, Real_t *pbvc,
# 2336 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 Real_t *bvc, Real_t ss4o3, Index_t nz)
# 2337 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(8, 8, (size_t)(3637UL), (size_t)(0UL), (size_t)(3639UL), (size_t)(3640UL), (size_t)(3641UL), (size_t)(3642UL), (size_t)(0UL), (size_t)(0UL), "CalcSoundSpeedForElems|vnewc|0", "double*", (void *)(&vnewc), (size_t)8, 1, 0, 0, "CalcSoundSpeedForElems|rho0|0", "double", (void *)(&rho0), (size_t)8, 0, 0, 0, "CalcSoundSpeedForElems|enewc|0", "double*", (void *)(&enewc), (size_t)8, 1, 0, 0, "CalcSoundSpeedForElems|pnewc|0", "double*", (void *)(&pnewc), (size_t)8, 1, 0, 0, "CalcSoundSpeedForElems|pbvc|0", "double*", (void *)(&pbvc), (size_t)8, 1, 0, 0, "CalcSoundSpeedForElems|bvc|0", "double*", (void *)(&bvc), (size_t)8, 1, 0, 0, "CalcSoundSpeedForElems|ss4o3|0", "double", (void *)(&ss4o3), (size_t)8, 0, 0, 0, "CalcSoundSpeedForElems|nz|0", "i32", (void *)(&nz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2338 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_0: Index_t i; register_stack_var("CalcSoundSpeedForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } for ( i = (0); i < nz ; ++i) {
# 2339 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Index_t iz; register_stack_var("CalcSoundSpeedForElems|iz|0", "i32", (void *)(&iz), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } iz = (mesh.matElemlist[i]);
# 2340 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t ssTmp; register_stack_var("CalcSoundSpeedForElems|ssTmp|0", "double", (void *)(&ssTmp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } ssTmp = ((pbvc[i] * enewc[i] + vnewc[i] * vnewc[i] * bvc[i] * pnewc[i]) / rho0);
# 2342 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (ssTmp <= Real_t(.111111e-36)) {
# 2343 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ssTmp = Real_t(.111111e-36);
# 2344 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2345 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(12, (size_t)(1994UL), (size_t)(3539UL), (size_t)(3540UL), (size_t)(3541UL), (size_t)(3542UL), (size_t)(3543UL), (size_t)(3544UL), (size_t)(3545UL), (size_t)(3546UL), (size_t)(3547UL), (size_t)(3548UL), (size_t)(3549UL)); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); mesh.ss[iz] = SQRT(ssTmp);
# 2346 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2347 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(10, (size_t)(1994UL), (size_t)(3539UL), (size_t)(3540UL), (size_t)(3541UL), (size_t)(3542UL), (size_t)(3543UL), (size_t)(3544UL), (size_t)(3545UL), (size_t)(3546UL), (size_t)(3547UL)); rm_stack(false, 0UL); }
# 2348 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2349 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2350 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void EvalEOSForElems(Real_t *vnewc, Index_t length)
# 2351 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(2, 2, (size_t)(2864UL), (size_t)(0UL), "EvalEOSForElems|vnewc|0", "double*", (void *)(&vnewc), (size_t)8, 1, 0, 0, "EvalEOSForElems|length|0", "i32", (void *)(&length), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2352 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t e_cut; register_stack_var("EvalEOSForElems|e_cut|0", "double", (void *)(&e_cut), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } e_cut = (mesh.e_cut);
# 2353 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t p_cut; register_stack_var("EvalEOSForElems|p_cut|0", "double", (void *)(&p_cut), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } p_cut = (mesh.p_cut);
# 2354 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t ss4o3; register_stack_var("EvalEOSForElems|ss4o3|0", "double", (void *)(&ss4o3), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } ss4o3 = (mesh.ss4o3);
# 2355 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t q_cut; register_stack_var("EvalEOSForElems|q_cut|0", "double", (void *)(&q_cut), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } q_cut = (mesh.q_cut);
# 2356 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2357 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_4: Real_t eosvmax; register_stack_var("EvalEOSForElems|eosvmax|0", "double", (void *)(&eosvmax), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } eosvmax = (mesh.eosvmax);
# 2358 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Real_t eosvmin; register_stack_var("EvalEOSForElems|eosvmin|0", "double", (void *)(&eosvmin), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } eosvmin = (mesh.eosvmin);
# 2359 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_6: Real_t pmin; register_stack_var("EvalEOSForElems|pmin|0", "double", (void *)(&pmin), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } pmin = (mesh.pmin);
# 2360 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_7: Real_t emin; register_stack_var("EvalEOSForElems|emin|0", "double", (void *)(&emin), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } emin = (mesh.emin);
# 2361 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_8: Real_t rho0; register_stack_var("EvalEOSForElems|rho0|0", "double", (void *)(&rho0), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } rho0 = (mesh.refdens);
# 2362 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2363 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_9: Real_t *e_old; register_stack_var("EvalEOSForElems|e_old|0", "double*", (void *)(&e_old), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_10; } e_old = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2326UL, 0, 0));
# 2364 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_10: Real_t *delvc; register_stack_var("EvalEOSForElems|delvc|0", "double*", (void *)(&delvc), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_11; } delvc = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2333UL, 0, 0));
# 2365 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_11: Real_t *p_old; register_stack_var("EvalEOSForElems|p_old|0", "double*", (void *)(&p_old), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_12; } p_old = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2340UL, 0, 0));
# 2366 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_12: Real_t *q_old; register_stack_var("EvalEOSForElems|q_old|0", "double*", (void *)(&q_old), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_13; } q_old = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2347UL, 0, 0));
# 2367 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_13: Real_t *compression; register_stack_var("EvalEOSForElems|compression|0", "double*", (void *)(&compression), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_14; } compression = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2354UL, 0, 0));
# 2368 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_14: Real_t *compHalfStep; register_stack_var("EvalEOSForElems|compHalfStep|0", "double*", (void *)(&compHalfStep), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_15; } compHalfStep = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2361UL, 0, 0));
# 2369 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_15: Real_t *qq; register_stack_var("EvalEOSForElems|qq|0", "double*", (void *)(&qq), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_16; } qq = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2368UL, 0, 0));
# 2370 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_16: Real_t *ql; register_stack_var("EvalEOSForElems|ql|0", "double*", (void *)(&ql), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_17; } ql = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2375UL, 0, 0));
# 2371 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_17: Real_t *work; register_stack_var("EvalEOSForElems|work|0", "double*", (void *)(&work), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_18; } work = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2382UL, 0, 0));
# 2372 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_18: Real_t *p_new; register_stack_var("EvalEOSForElems|p_new|0", "double*", (void *)(&p_new), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_19; } p_new = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2389UL, 0, 0));
# 2373 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_19: Real_t *e_new; register_stack_var("EvalEOSForElems|e_new|0", "double*", (void *)(&e_new), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_20; } e_new = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2396UL, 0, 0));
# 2374 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_20: Real_t *q_new; register_stack_var("EvalEOSForElems|q_new|0", "double*", (void *)(&q_new), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_21; } q_new = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2403UL, 0, 0));
# 2375 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_21: Real_t *bvc; register_stack_var("EvalEOSForElems|bvc|0", "double*", (void *)(&bvc), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_22; } bvc = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2410UL, 0, 0));
# 2376 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_22: Real_t *pbvc; register_stack_var("EvalEOSForElems|pbvc|0", "double*", (void *)(&pbvc), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_23; } pbvc = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2417UL, 0, 0));
# 2377 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2378 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2379 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_23: Index_t i; register_stack_var("EvalEOSForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_24; } for ( i = (0); i<length; ++i) {
# 2380 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_24: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|0", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_25; } zidx = (mesh.matElemlist[i]);
# 2381 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 e_old[i] = mesh.e[zidx] ;
# 2382 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2383 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2384 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_25: Index_t i; register_stack_var("EvalEOSForElems|i|1", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_26; } for ( i = (0); i<length; ++i) {
# 2385 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_26: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|1", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_27; } zidx = (mesh.matElemlist[i]);
# 2386 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 delvc[i] = mesh.delv[zidx] ;
# 2387 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2388 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2389 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_27: Index_t i; register_stack_var("EvalEOSForElems|i|2", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_28; } for ( i = (0); i<length; ++i) {
# 2390 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_28: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|2", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_29; } zidx = (mesh.matElemlist[i]);
# 2391 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 p_old[i] = mesh.p[zidx] ;
# 2392 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2393 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2394 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_29: Index_t i; register_stack_var("EvalEOSForElems|i|3", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_30; } for ( i = (0); i<length; ++i) {
# 2395 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_30: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|3", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_31; } zidx = (mesh.matElemlist[i]);
# 2396 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 q_old[i] = mesh.q[zidx] ;
# 2397 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2398 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2399 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_31: Index_t i; register_stack_var("EvalEOSForElems|i|4", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_32; } for ( i = (0); i < length ; ++i) {
# 2400 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_32: Real_t vchalf; register_stack_var("EvalEOSForElems|vchalf|0", "double", (void *)(&vchalf), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_33; }
# 2401 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 compression[i] = Real_t(1.) / vnewc[i] - Real_t(1.);
# 2402 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 vchalf = vnewc[i] - delvc[i] * Real_t(.5);
# 2403 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 compHalfStep[i] = Real_t(1.) / vchalf - Real_t(1.);
# 2404 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2405 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2406 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2407 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( eosvmin != Real_t(0.) ) {
# 2408 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_33: Index_t i; register_stack_var("EvalEOSForElems|i|5", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_34; } for( i = (0); i<length ; ++i) {
# 2409 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vnewc[i] <= eosvmin) {
# 2410 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 compHalfStep[i] = compression[i] ;
# 2411 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2412 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2413 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2414 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( eosvmax != Real_t(0.) ) {
# 2415 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_34: Index_t i; register_stack_var("EvalEOSForElems|i|6", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_35; } for( i = (0); i<length ; ++i) {
# 2416 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vnewc[i] >= eosvmax) {
# 2417 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 p_old[i] = Real_t(0.) ;
# 2418 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 compression[i] = Real_t(0.) ;
# 2419 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 compHalfStep[i] = Real_t(0.) ;
# 2420 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2421 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2422 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2423 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2424 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_35: Index_t i; register_stack_var("EvalEOSForElems|i|7", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_36; } for ( i = (0); i < length ; ++i) {
# 2425 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_36: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|4", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_37; } zidx = (mesh.matElemlist[i]);
# 2426 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qq[i] = mesh.qq[zidx] ;
# 2427 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ql[i] = mesh.ql[zidx] ;
# 2428 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 work[i] = Real_t(0.) ;
# 2429 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2430 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2431 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(48, (size_t)(2246UL), (size_t)(2247UL), (size_t)(2248UL), (size_t)(2249UL), (size_t)(2250UL), (size_t)(2251UL), (size_t)(2252UL), (size_t)(2253UL), (size_t)(2254UL), (size_t)(2255UL), (size_t)(2256UL), (size_t)(2257UL), (size_t)(2258UL), (size_t)(2259UL), (size_t)(2260UL), (size_t)(2261UL), (size_t)(2262UL), (size_t)(2263UL), (size_t)(2264UL), (size_t)(2265UL), (size_t)(2266UL), (size_t)(2267UL), (size_t)(2268UL), (size_t)(2269UL), (size_t)(2270UL), (size_t)(2271UL), (size_t)(2272UL), (size_t)(2273UL), (size_t)(2274UL), (size_t)(2275UL), (size_t)(2276UL), (size_t)(2277UL), (size_t)(2278UL), (size_t)(2279UL), (size_t)(2280UL), (size_t)(2281UL), (size_t)(2282UL), (size_t)(2283UL), (size_t)(2284UL), (size_t)(2326UL), (size_t)(2333UL), (size_t)(2340UL), (size_t)(2347UL), (size_t)(2354UL), (size_t)(2361UL), (size_t)(2368UL), (size_t)(2375UL), (size_t)(2382UL)); call_lbl_0: calling(0, 0UL, 23, (size_t)(2389UL), (size_t)(2396UL), (size_t)(2403UL), (size_t)(2410UL), (size_t)(2417UL), (size_t)(2340UL), (size_t)(2326UL), (size_t)(2347UL), (size_t)(2354UL), (size_t)(2361UL), (size_t)(2864UL), (size_t)(2382UL), (size_t)(2333UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(2368UL), (size_t)(2375UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)); CalcEnergyForElems(p_new, e_new, q_new, bvc, pbvc,
# 2432 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 p_old, e_old, q_old, compression, compHalfStep,
# 2433 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 vnewc, work, delvc, pmin,
# 2434 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 p_cut, e_cut, q_cut, emin,
# 2435 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 qq, ql, rho0, eosvmax, length);
# 2436 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2437 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2438 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_37: Index_t i; register_stack_var("EvalEOSForElems|i|8", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_38; } for ( i = (0); i<length; ++i) {
# 2439 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_38: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|5", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_39; } zidx = (mesh.matElemlist[i]);
# 2440 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.p[zidx] = p_new[i] ;
# 2441 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2442 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2443 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_39: Index_t i; register_stack_var("EvalEOSForElems|i|9", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_40; } for ( i = (0); i<length; ++i) {
# 2444 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_40: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|6", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_41; } zidx = (mesh.matElemlist[i]);
# 2445 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.e[zidx] = e_new[i] ;
# 2446 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2447 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2448 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_41: Index_t i; register_stack_var("EvalEOSForElems|i|10", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_42; } for ( i = (0); i<length; ++i) {
# 2449 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_42: Index_t zidx; register_stack_var("EvalEOSForElems|zidx|7", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { exit(42); } } } zidx = (mesh.matElemlist[i]);
# 2450 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.q[zidx] = q_new[i] ;
# 2451 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2452 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2453 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(7, (size_t)(1994UL), (size_t)(2285UL), (size_t)(2286UL), (size_t)(2287UL), (size_t)(2288UL), (size_t)(2289UL), (size_t)(2290UL)); call_lbl_1: calling(1, 0UL, 8, (size_t)(2864UL), (size_t)(0UL), (size_t)(2396UL), (size_t)(2389UL), (size_t)(2417UL), (size_t)(2410UL), (size_t)(0UL), (size_t)(0UL)); CalcSoundSpeedForElems(vnewc, rho0, e_new, p_new,
# 2454 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 pbvc, bvc, ss4o3, length) ;
# 2455 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2456 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(pbvc, 2417UL) ;
# 2457 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(bvc, 2410UL) ;
# 2458 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(q_new, 2403UL) ;
# 2459 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(e_new, 2396UL) ;
# 2460 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(p_new, 2389UL) ;
# 2461 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(work, 2382UL) ;
# 2462 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(ql, 2375UL) ;
# 2463 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(qq, 2368UL) ;
# 2464 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(compHalfStep, 2361UL) ;
# 2465 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(compression, 2354UL) ;
# 2466 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(q_old, 2347UL) ;
# 2467 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(p_old, 2340UL) ;
# 2468 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(delvc, 2333UL) ;
# 2469 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(e_old, 2326UL) ;
# 2470 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
rm_stack(false, 0UL); }
# 2471 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2472 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2473 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void ApplyMaterialPropertiesForElems()
# 2474 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2475 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t length; register_stack_var("ApplyMaterialPropertiesForElems|length|0", "i32", (void *)(&length), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } length = (mesh.numElem);
# 2476 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2477 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (length != 0) {
# 2478 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2479 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t eosvmin; register_stack_var("ApplyMaterialPropertiesForElems|eosvmin|0", "double", (void *)(&eosvmin), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } eosvmin = (mesh.eosvmin);
# 2480 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t eosvmax; register_stack_var("ApplyMaterialPropertiesForElems|eosvmax|0", "double", (void *)(&eosvmax), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } eosvmax = (mesh.eosvmax);
# 2481 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t *vnewc; register_stack_var("ApplyMaterialPropertiesForElems|vnewc|0", "double*", (void *)(&vnewc), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_4; } vnewc = ((Real_t *)malloc_wrapper(sizeof(Real_t) * length, 2066UL, 0, 0));
# 2482 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2483 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_4: Index_t i; register_stack_var("ApplyMaterialPropertiesForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } for ( i = (0); i<length ; ++i) {
# 2484 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Index_t zn; register_stack_var("ApplyMaterialPropertiesForElems|zn|0", "i32", (void *)(&zn), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } zn = (mesh.matElemlist[i]);
# 2485 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 vnewc[i] = mesh.vnew[zn] ;
# 2486 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2487 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2488 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (eosvmin != Real_t(0.)) {
# 2489 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_6: Index_t i; register_stack_var("ApplyMaterialPropertiesForElems|i|1", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } for( i = (0); i<length ; ++i) {
# 2490 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vnewc[i] < eosvmin) {vnewc[i] = eosvmin; } ;
# 2492 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2493 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2494 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2495 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (eosvmax != Real_t(0.)) {
# 2496 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_7: Index_t i; register_stack_var("ApplyMaterialPropertiesForElems|i|2", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } for( i = (0); i<length ; ++i) {
# 2497 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vnewc[i] > eosvmax) {vnewc[i] = eosvmax; } ;
# 2499 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2500 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2501 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2502 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_8: Index_t i; register_stack_var("ApplyMaterialPropertiesForElems|i|3", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } for ( i = (0); i<length; ++i) {
# 2503 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_9: Index_t zn; register_stack_var("ApplyMaterialPropertiesForElems|zn|1", "i32", (void *)(&zn), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } zn = (mesh.matElemlist[i]);
# 2504 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_10: Real_t vc; register_stack_var("ApplyMaterialPropertiesForElems|vc|0", "double", (void *)(&vc), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } vc = (mesh.v[zn]);
# 2505 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (eosvmin != Real_t(0.)) {
# 2506 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vc < eosvmin) {vc = eosvmin; } ;
# 2508 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2509 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (eosvmax != Real_t(0.)) {
# 2510 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vc > eosvmax) {vc = eosvmax; } ;
# 2512 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2513 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (vc <= 0.) {
# 2514 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(12, (size_t)(2015UL), (size_t)(2016UL), (size_t)(2017UL), (size_t)(2018UL), (size_t)(2019UL), (size_t)(2020UL), (size_t)(2021UL), (size_t)(2022UL), (size_t)(2023UL), (size_t)(2024UL), (size_t)(2025UL), (size_t)(2066UL)); exit(VolumeError) ;
# 2515 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2516 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2517 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2518 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(12, (size_t)(2015UL), (size_t)(2016UL), (size_t)(2017UL), (size_t)(2018UL), (size_t)(2019UL), (size_t)(2020UL), (size_t)(2021UL), (size_t)(2022UL), (size_t)(2023UL), (size_t)(2024UL), (size_t)(2025UL), (size_t)(2066UL)); call_lbl_0: calling(0, 0UL, 2, (size_t)(2066UL), (size_t)(0UL)); EvalEOSForElems(vnewc, length);
# 2519 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2520 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 free_wrapper(vnewc, 2066UL) ;
# 2521 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2522 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2523 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
alias_group_changed(1, (size_t)(2015UL)); rm_stack(false, 0UL); }
# 2524 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2525 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2526 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void UpdateVolumesForElems()
# 2527 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2528 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Index_t numElem; register_stack_var("UpdateVolumesForElems|numElem|0", "i32", (void *)(&numElem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } numElem = (mesh.numElem);
# 2529 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (numElem != 0) {
# 2530 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Real_t v_cut; register_stack_var("UpdateVolumesForElems|v_cut|0", "double", (void *)(&v_cut), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } v_cut = (mesh.v_cut);
# 2531 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2532 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_2: Index_t i; register_stack_var("UpdateVolumesForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } for( i = (0); i<numElem ; ++i) {
# 2533 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Real_t tmpV; register_stack_var("UpdateVolumesForElems|tmpV|0", "double", (void *)(&tmpV), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } }
# 2534 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 tmpV = mesh.vnew[i] ;
# 2535 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2536 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); if (FABS(tmpV - Real_t(1.)) < v_cut) {tmpV = Real_t(1.); } ;
# 2538 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.v[i] = tmpV ;
# 2539 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2540 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2541 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2542 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(5, (size_t)(1994UL), (size_t)(2197UL), (size_t)(2198UL), (size_t)(2199UL), (size_t)(2200UL)); rm_stack(false, 0UL); return ;
# 2543 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 2544 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2545 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2546 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void LagrangeElements()
# 2547 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2548 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t deltatime; register_stack_var("LagrangeElements|deltatime|0", "double", (void *)(&deltatime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } default: { exit(42); } } } deltatime = (mesh.deltatime);
# 2549 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2550 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(1, (size_t)(1656UL)); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); CalcLagrangeElements(deltatime) ;
# 2551 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2552 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2553 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 0); CalcQForElems() ;
# 2554 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2555 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 0); ApplyMaterialPropertiesForElems() ;
# 2556 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2557 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 0); UpdateVolumesForElems() ;
# 2558 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
rm_stack(false, 0UL); }
# 2559 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2560 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2561 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcCourantConstraintForElems()
# 2562 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2563 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t dtcourant; register_stack_var("CalcCourantConstraintForElems|dtcourant|0", "double", (void *)(&dtcourant), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } dtcourant = (Real_t(1.0E+20));
# 2564 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Index_t courant_elem; register_stack_var("CalcCourantConstraintForElems|courant_elem|0", "i32", (void *)(&courant_elem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } courant_elem = (-1);
# 2565 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t qqc; register_stack_var("CalcCourantConstraintForElems|qqc|0", "double", (void *)(&qqc), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } qqc = (mesh.qqc);
# 2566 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Index_t length; register_stack_var("CalcCourantConstraintForElems|length|0", "i32", (void *)(&length), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } length = (mesh.numElem);
# 2567 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2568 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_4: Real_t qqc2; register_stack_var("CalcCourantConstraintForElems|qqc2|0", "double", (void *)(&qqc2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } qqc2 = (Real_t(64.) * qqc * qqc);
# 2569 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2570 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_5: Index_t i; register_stack_var("CalcCourantConstraintForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } for ( i = (0); i < length ; ++i) {
# 2571 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_6: Index_t indx; register_stack_var("CalcCourantConstraintForElems|indx|0", "i32", (void *)(&indx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } indx = (mesh.matElemlist[i]);
# 2572 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2573 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_7: Real_t dtf; register_stack_var("CalcCourantConstraintForElems|dtf|0", "double", (void *)(&dtf), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } dtf = (mesh.ss[indx] * mesh.ss[indx]);
# 2574 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2575 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( mesh.vdov[indx] < Real_t(0.) ) {
# 2576 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2577 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dtf = dtf
# 2578 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 + qqc2 * mesh.arealg[indx] * mesh.arealg[indx]
# 2579 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 * mesh.vdov[indx] * mesh.vdov[indx] ;
# 2580 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2581 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2582 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(8, (size_t)(1669UL), (size_t)(1670UL), (size_t)(1671UL), (size_t)(1672UL), (size_t)(1673UL), (size_t)(1674UL), (size_t)(1675UL), (size_t)(1676UL)); call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); dtf = SQRT(dtf) ;
# 2583 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2584 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dtf = mesh.arealg[indx] / dtf ;
# 2585 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2586 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2587 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (mesh.vdov[indx] != Real_t(0.)) {
# 2588 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( dtf < dtcourant ) {
# 2589 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dtcourant = dtf ;
# 2590 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 courant_elem = indx ;
# 2591 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2592 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2593 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2594 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2595 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2596 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2597 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (courant_elem != -1) {
# 2598 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dtcourant = dtcourant ;
# 2599 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2600 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2601 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(8, (size_t)(1669UL), (size_t)(1670UL), (size_t)(1671UL), (size_t)(1672UL), (size_t)(1673UL), (size_t)(1674UL), (size_t)(1676UL), (size_t)(14006UL)); rm_stack(false, 0UL); return ;
# 2602 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 2603 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2604 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2605 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcHydroConstraintForElems()
# 2606 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2607 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_0: Real_t dthydro; register_stack_var("CalcHydroConstraintForElems|dthydro|0", "double", (void *)(&dthydro), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } dthydro = (Real_t(1.0E+20));
# 2608 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Index_t hydro_elem; register_stack_var("CalcHydroConstraintForElems|hydro_elem|0", "i32", (void *)(&hydro_elem), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } hydro_elem = (-1);
# 2609 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t dvovmax; register_stack_var("CalcHydroConstraintForElems|dvovmax|0", "double", (void *)(&dvovmax), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } dvovmax = (mesh.dvovmax);
# 2610 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_3: Index_t length; register_stack_var("CalcHydroConstraintForElems|length|0", "i32", (void *)(&length), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } length = (mesh.numElem);
# 2611 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2612 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_4: Index_t i; register_stack_var("CalcHydroConstraintForElems|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } for ( i = (0); i < length ; ++i) {
# 2613 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Index_t indx; register_stack_var("CalcHydroConstraintForElems|indx|0", "i32", (void *)(&indx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } indx = (mesh.matElemlist[i]);
# 2614 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2615 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (mesh.vdov[indx] != Real_t(0.)) {
# 2616 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(7, (size_t)(1796UL), (size_t)(1797UL), (size_t)(1798UL), (size_t)(1799UL), (size_t)(1800UL), (size_t)(1801UL), (size_t)(1802UL)); lbl_6: Real_t dtdvov; register_stack_var("CalcHydroConstraintForElems|dtdvov|0", "double", (void *)(&dtdvov), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { exit(42); } } } call_lbl_0: calling(0, 0UL, 1, (size_t)(0UL)); dtdvov = (dvovmax / (FABS(mesh.vdov[indx]) + Real_t(9.9999999999999995E-21)));
# 2617 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if ( dthydro > dtdvov ) {
# 2618 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 dthydro = dtdvov ;
# 2619 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 hydro_elem = indx ;
# 2620 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2621 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2622 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2623 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2624 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (hydro_elem != -1) {
# 2625 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dthydro = dthydro ;
# 2626 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2627 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2628 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(8, (size_t)(1796UL), (size_t)(1797UL), (size_t)(1798UL), (size_t)(1799UL), (size_t)(1800UL), (size_t)(1801UL), (size_t)(1802UL), (size_t)(14006UL)); rm_stack(false, 0UL); return ;
# 2629 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}
# 2630 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2631 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2632 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void CalcTimeConstraintsForElems() {new_stack(0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } default: { exit(42); } } }
# 2633 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2634 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 0); CalcCourantConstraintForElems() ;
# 2635 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2636 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2637 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 0); CalcHydroConstraintForElems() ;
# 2638 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
rm_stack(false, 0UL); }
# 2639 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2640 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
static inline
# 2641 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
void LagrangeLeapFrog()
# 2642 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{new_stack(0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } default: { exit(42); } } }
# 2643 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2644 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2645 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_0: calling(0, 0UL, 0); LagrangeNodal();
# 2646 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2647 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2648 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2649 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 0); LagrangeElements();
# 2650 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2651 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 0); CalcTimeConstraintsForElems();
# 2652 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2653 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2654 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
rm_stack(false, 0UL); }
# 2655 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2656 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
int main(int argc, char *argv[])
# 2657 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
{init_chimes(); new_stack(2, 2, (size_t)(0UL), (size_t)(1433UL), "main|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 2658 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(3, (size_t)(459UL), (size_t)(460UL), (size_t)(461UL)); lbl_0: Index_t edgeElems; register_stack_var("main|edgeElems|0", "i32", (void *)(&edgeElems), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } edgeElems = (atoi(argv[1]));
# 2659 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_1: Index_t edgeNodes; register_stack_var("main|edgeNodes|0", "i32", (void *)(&edgeNodes), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } edgeNodes = (edgeElems + 1);
# 2660 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2661 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_2: Real_t tx; register_stack_var("main|tx|0", "double", (void *)(&tx), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } lbl_3: Real_t ty; register_stack_var("main|ty|0", "double", (void *)(&ty), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } lbl_4: Real_t tz; register_stack_var("main|tz|0", "double", (void *)(&tz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; }
# 2662 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_5: Index_t nidx; register_stack_var("main|nidx|0", "i32", (void *)(&nidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } lbl_6: Index_t zidx; register_stack_var("main|zidx|0", "i32", (void *)(&zidx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; }
# 2663 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_7: Index_t meshElems; register_stack_var("main|meshElems|0", "i32", (void *)(&meshElems), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; }
# 2675 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2675 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.sizeX = edgeElems ;
# 2676 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.sizeY = edgeElems ;
# 2677 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.sizeZ = edgeElems ;
# 2678 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.numElem = edgeElems*edgeElems*edgeElems ;
# 2679 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.numNode = edgeNodes*edgeNodes*edgeNodes ;
# 2680 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2681 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 meshElems = mesh.numElem ;
# 2682 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2683 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2684 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2685 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2686 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(4, (size_t)(462UL), (size_t)(463UL), (size_t)(469UL), (size_t)(14006UL)); call_lbl_0: calling(0, 0UL, 2, (size_t)(14006UL), (size_t)(0UL)); AllocateElemPersistent(&mesh, mesh.numElem) ;
# 2687 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_1: calling(1, 0UL, 2, (size_t)(14006UL), (size_t)(0UL)); AllocateElemTemporary (&mesh, mesh.numElem) ;
# 2688 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2689 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_2: calling(2, 0UL, 2, (size_t)(14006UL), (size_t)(0UL)); AllocateNodalPersistent(&mesh, mesh.numNode) ;
# 2690 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_3: calling(3, 0UL, 2, (size_t)(14006UL), (size_t)(0UL)); AllocateNodesets(&mesh, edgeNodes*edgeNodes) ;
# 2691 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2692 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2693 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2694 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2695 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 nidx = 0 ;
# 2696 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 tz = Real_t(0.) ;
# 2697 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_8: Index_t plane; register_stack_var("main|plane|0", "i32", (void *)(&plane), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } for ( plane = (0); plane<edgeNodes; ++plane) {
# 2698 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ty = Real_t(0.) ;
# 2699 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_9: Index_t row; register_stack_var("main|row|0", "i32", (void *)(&row), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } for ( row = (0); row<edgeNodes; ++row) {
# 2700 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 tx = Real_t(0.) ;
# 2701 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_10: Index_t col; register_stack_var("main|col|0", "i32", (void *)(&col), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } for ( col = (0); col<edgeNodes; ++col) {
# 2702 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.x[nidx] = tx ;
# 2703 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.y[nidx] = ty ;
# 2704 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.z[nidx] = tz ;
# 2705 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ++nidx ;
# 2706 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2707 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 tx = Real_t(1.125)*Real_t(col+1)/Real_t(edgeElems) ;
# 2708 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2709 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2710 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ty = Real_t(1.125)*Real_t(row+1)/Real_t(edgeElems) ;
# 2711 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2712 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2713 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 tz = Real_t(1.125)*Real_t(plane+1)/Real_t(edgeElems) ;
# 2714 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2715 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2716 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2717 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2718 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2719 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 nidx = 0 ;
# 2720 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 zidx = 0 ;
# 2721 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_11: Index_t plane; register_stack_var("main|plane|1", "i32", (void *)(&plane), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_12; } for ( plane = (0); plane<edgeElems; ++plane) {
# 2722 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_12: Index_t row; register_stack_var("main|row|1", "i32", (void *)(&row), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_13; } for ( row = (0); row<edgeElems; ++row) {
# 2723 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_13: Index_t col; register_stack_var("main|col|1", "i32", (void *)(&col), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_14; } for ( col = (0); col<edgeElems; ++col) {
# 2724 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_14: Index_t *localNode; register_stack_var("main|localNode|0", "i32*", (void *)(&localNode), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_15; } localNode = (&mesh.nodelist[8 * zidx]);
# 2725 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[0] = nidx ;
# 2726 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[1] = nidx + 1 ;
# 2727 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[2] = nidx + edgeNodes + 1 ;
# 2728 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[3] = nidx + edgeNodes ;
# 2729 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[4] = nidx + edgeNodes*edgeNodes ;
# 2730 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[5] = nidx + edgeNodes*edgeNodes + 1 ;
# 2731 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[6] = nidx + edgeNodes*edgeNodes + edgeNodes + 1 ;
# 2732 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 localNode[7] = nidx + edgeNodes*edgeNodes + edgeNodes ;
# 2733 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ++zidx ;
# 2734 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ++nidx ;
# 2735 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2736 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ++nidx ;
# 2737 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2738 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 nidx += edgeNodes ;
# 2739 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2740 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2741 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2742 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_15: Index_t i; register_stack_var("main|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_16; } for ( i = (0); i<meshElems; ++i) {
# 2743 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.matElemlist[i] = i ;
# 2744 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2745 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2746 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2747 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dtfixed = Real_t(-1.0e-7) ;
# 2748 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.deltatime = Real_t(1.0e-7) ;
# 2749 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.deltatimemultlb = Real_t(1.1) ;
# 2750 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.deltatimemultub = Real_t(1.2) ;
# 2751 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.stoptime = Real_t(1.0e-2) ;
# 2752 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dtcourant = Real_t(1.0e+20) ;
# 2753 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dthydro = Real_t(1.0e+20) ;
# 2754 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dtmax = Real_t(1.0e-2) ;
# 2755 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.time = Real_t(0.) ;
# 2756 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.cycle = 0 ;
# 2757 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2758 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.e_cut = Real_t(1.0e-7) ;
# 2759 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.p_cut = Real_t(1.0e-7) ;
# 2760 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.q_cut = Real_t(1.0e-7) ;
# 2761 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.u_cut = Real_t(1.0e-7) ;
# 2762 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.v_cut = Real_t(1.0e-10) ;
# 2763 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2764 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.hgcoef = Real_t(3.0) ;
# 2765 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.ss4o3 = Real_t(4.0)/Real_t(3.0) ;
# 2766 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2767 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.qstop = Real_t(1.0e+12) ;
# 2768 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.monoq_max_slope = Real_t(1.0) ;
# 2769 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.monoq_limiter_mult = Real_t(2.0) ;
# 2770 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.qlc_monoq = Real_t(0.5) ;
# 2771 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.qqc_monoq = Real_t(2.0)/Real_t(3.0) ;
# 2772 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.qqc = Real_t(2.0) ;
# 2773 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2774 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.pmin = Real_t(0.) ;
# 2775 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.emin = Real_t(-1.0e+15) ;
# 2776 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2777 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.dvovmax = Real_t(0.1) ;
# 2778 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2779 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.eosvmax = Real_t(1.0e+9) ;
# 2780 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.eosvmin = Real_t(1.0e-9) ;
# 2781 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2782 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.refdens = Real_t(1.0) ;
# 2783 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2784 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2785 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_16: Index_t i; register_stack_var("main|i|1", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_17; } for ( i = (0); i<meshElems; ++i) {
# 2786 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_17: Real_t x_local[8]; register_stack_var("main|x_local|0", "[8 x double]", (void *)(x_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_18; } lbl_18: Real_t y_local[8]; register_stack_var("main|y_local|0", "[8 x double]", (void *)(y_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_19; } lbl_19: Real_t z_local[8]; register_stack_var("main|z_local|0", "[8 x double]", (void *)(z_local), (size_t)64, 0, 0, 0); if (____chimes_replaying) { goto lbl_20; }
# 2787 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_20: Index_t *elemToNode; register_stack_var("main|elemToNode|0", "i32*", (void *)(&elemToNode), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_21; } elemToNode = (&mesh.nodelist[8 * i]);
# 2788 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_21: Index_t lnode; register_stack_var("main|lnode|0", "i32", (void *)(&lnode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_22; } for( lnode = (0); lnode<8 ; ++lnode )
# 2789 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 {
# 2790 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_22: Index_t gnode; register_stack_var("main|gnode|0", "i32", (void *)(&gnode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_23; } gnode = (elemToNode[lnode]);
# 2791 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 x_local[lnode] = mesh.x[gnode];
# 2792 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 y_local[lnode] = mesh.y[gnode];
# 2793 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 z_local[lnode] = mesh.z[gnode];
# 2794 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2795 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2796 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2797 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_23: Real_t volume; register_stack_var("main|volume|0", "double", (void *)(&volume), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_24; } call_lbl_4: calling(4, 0UL, 3, (size_t)(479UL), (size_t)(480UL), (size_t)(481UL)); volume = (CalcElemVolumeWrapper(x_local, y_local, z_local));
# 2798 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.volo[i] = volume ;
# 2799 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemMass[i] = volume ;
# 2800 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_24: Index_t j; register_stack_var("main|j|0", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_25; } for ( j = (0); j<8; ++j) {
# 2801 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_25: Index_t idx; register_stack_var("main|idx|0", "i32", (void *)(&idx), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_26; } idx = (elemToNode[j]);
# 2802 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.nodalMass[idx] += volume / Real_t(8.0) ;
# 2803 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2804 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2805 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2806 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2807 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.e[0] = Real_t(3.948746e+7) ;
# 2808 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2809 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2810 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 nidx = 0 ;
# 2811 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_26: Index_t i; register_stack_var("main|i|2", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_27; } for ( i = (0); i<edgeNodes; ++i) {
# 2812 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_27: Index_t planeInc; register_stack_var("main|planeInc|0", "i32", (void *)(&planeInc), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_28; } planeInc = (i * edgeNodes * edgeNodes);
# 2813 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_28: Index_t rowInc; register_stack_var("main|rowInc|0", "i32", (void *)(&rowInc), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_29; } rowInc = (i * edgeNodes);
# 2814 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_29: Index_t j; register_stack_var("main|j|1", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_30; } for ( j = (0); j<edgeNodes; ++j) {
# 2815 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.symmX[nidx] = planeInc + j*edgeNodes ;
# 2816 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.symmY[nidx] = planeInc + j ;
# 2817 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.symmZ[nidx] = rowInc + j ;
# 2818 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 ++nidx ;
# 2819 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2820 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2821 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2822 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2823 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lxim[0] = 0 ;
# 2824 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_30: Index_t i; register_stack_var("main|i|3", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_31; } for ( i = (1); i<meshElems; ++i) {
# 2825 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lxim[i] = i-1 ;
# 2826 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lxip[i-1] = i ;
# 2827 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2828 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lxip[meshElems-1] = meshElems-1 ;
# 2829 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2830 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_31: Index_t i; register_stack_var("main|i|4", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_32; } for ( i = (0); i<edgeElems; ++i) {
# 2831 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.letam[i] = i ;
# 2832 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.letap[meshElems-edgeElems+i] = meshElems-edgeElems+i ;
# 2833 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2834 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_32: Index_t i; register_stack_var("main|i|5", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_33; } for ( i = (edgeElems); i<meshElems; ++i) {
# 2835 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.letam[i] = i-edgeElems ;
# 2836 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.letap[i-edgeElems] = i ;
# 2837 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2838 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2839 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_33: Index_t i; register_stack_var("main|i|6", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_34; } for ( i = (0); i<edgeElems*edgeElems; ++i) {
# 2840 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lzetam[i] = i ;
# 2841 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lzetap[meshElems-edgeElems*edgeElems+i] = meshElems-edgeElems*edgeElems+i ;
# 2842 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2843 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_34: Index_t i; register_stack_var("main|i|7", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_35; } for ( i = (edgeElems * edgeElems); i<meshElems; ++i) {
# 2844 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lzetam[i] = i - edgeElems*edgeElems ;
# 2845 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.lzetap[i-edgeElems*edgeElems] = i ;
# 2846 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2847 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2848 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2849 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_35: Index_t i; register_stack_var("main|i|8", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_36; } for ( i = (0); i<meshElems; ++i) {
# 2850 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[i] = 0 ;
# 2851 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2852 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2853 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2854 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2855 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_36: Index_t i; register_stack_var("main|i|9", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_37; } for ( i = (0); i<edgeElems; ++i) {
# 2856 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_37: Index_t planeInc; register_stack_var("main|planeInc|1", "i32", (void *)(&planeInc), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_38; } planeInc = (i * edgeElems * edgeElems);
# 2857 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_38: Index_t rowInc; register_stack_var("main|rowInc|1", "i32", (void *)(&rowInc), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_39; } rowInc = (i * edgeElems);
# 2858 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_39: Index_t j; register_stack_var("main|j|2", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_40; } for ( j = (0); j<edgeElems; ++j) {
# 2859 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[planeInc+j*edgeElems] |= 0x001 ;
# 2860 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[planeInc+j*edgeElems+edgeElems-1] |= 0x008 ;
# 2861 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[planeInc+j] |= 0x010 ;
# 2862 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[planeInc+j+edgeElems*edgeElems-edgeElems] |= 0x080 ;
# 2863 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[rowInc+j] |= 0x100 ;
# 2864 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 mesh.elemBC[rowInc+j+meshElems-edgeElems*edgeElems] |= 0x800 ;
# 2865 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2866 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2867 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2868 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_40: timeval start; register_stack_var("main|start|0", "%struct.timeval = type { i64, i32 }", (void *)(&start), (size_t)16, 0, 1, 0); if (____chimes_replaying) { goto lbl_41; } lbl_41: timeval end; register_stack_var("main|end|0", "%struct.timeval = type { i64, i32 }", (void *)(&end), (size_t)16, 0, 1, 0); if (____chimes_replaying) { goto lbl_42; }
# 2869 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(39, (size_t)(464UL), (size_t)(465UL), (size_t)(466UL), (size_t)(467UL), (size_t)(468UL), (size_t)(470UL), (size_t)(471UL), (size_t)(472UL), (size_t)(473UL), (size_t)(474UL), (size_t)(475UL), (size_t)(476UL), (size_t)(477UL), (size_t)(478UL), (size_t)(479UL), (size_t)(480UL), (size_t)(481UL), (size_t)(482UL), (size_t)(483UL), (size_t)(484UL), (size_t)(485UL), (size_t)(486UL), (size_t)(487UL), (size_t)(488UL), (size_t)(489UL), (size_t)(490UL), (size_t)(491UL), (size_t)(492UL), (size_t)(493UL), (size_t)(494UL), (size_t)(495UL), (size_t)(496UL), (size_t)(497UL), (size_t)(498UL), (size_t)(499UL), (size_t)(500UL), (size_t)(501UL), (size_t)(1994UL), (size_t)(14006UL)); call_lbl_5: calling(5, 0UL, 2, (size_t)(502UL), (size_t)(14016UL)); gettimeofday(&start, __null);
# 2870 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2871 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2872 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2873 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 while(mesh.time < mesh.stoptime ) {
# 2874 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_6: calling(6, 0UL, 0); TimeIncrement() ;
# 2875 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_7: calling(7, 0UL, 0); LagrangeLeapFrog() ;
# 2876 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2877 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2878 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2879 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2880 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2881 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 }
# 2882 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2883 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 call_lbl_8: calling(8, 0UL, 2, (size_t)(503UL), (size_t)(14016UL)); gettimeofday(&end, __null);
# 2884 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_42: double elapsed_time; register_stack_var("main|elapsed_time|0", "double", (void *)(&elapsed_time), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_43; } elapsed_time = (double(end.tv_sec - start.tv_sec) + double(end.tv_usec - start.tv_usec) * 9.9999999999999995E-7);
# 2885 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2886 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2887 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("\n\nElapsed time = %12.6e\n\n", elapsed_time);
# 2888 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2889 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_43: Index_t ElemId; register_stack_var("main|ElemId|0", "i32", (void *)(&ElemId), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_44; } ElemId = (0);
# 2890 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("Run completed:  \n");
# 2891 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("   Problem size        =  %i \n", edgeElems);
# 2892 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("   Iteration count     =  %i \n", mesh.cycle);
# 2893 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("   Final Origin Energy = %12.6e \n", mesh.e[ElemId]);
# 2894 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2895 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_44: Real_t MaxAbsDiff; register_stack_var("main|MaxAbsDiff|0", "double", (void *)(&MaxAbsDiff), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_45; } MaxAbsDiff = (Real_t(0.));
# 2896 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_45: Real_t TotalAbsDiff; register_stack_var("main|TotalAbsDiff|0", "double", (void *)(&TotalAbsDiff), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_46; } TotalAbsDiff = (Real_t(0.));
# 2897 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_46: Real_t MaxRelDiff; register_stack_var("main|MaxRelDiff|0", "double", (void *)(&MaxRelDiff), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_47; } MaxRelDiff = (Real_t(0.));
# 2898 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2899 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_47: Index_t j; register_stack_var("main|j|3", "i32", (void *)(&j), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_48; } for ( j = (0); j<edgeElems; ++j) {
# 2900 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 { lbl_48: Index_t k; register_stack_var("main|k|0", "i32", (void *)(&k), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_49; } for ( k = (j + 1); k<edgeElems; ++k) {
# 2901 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(9, (size_t)(504UL), (size_t)(505UL), (size_t)(506UL), (size_t)(507UL), (size_t)(508UL), (size_t)(509UL), (size_t)(510UL), (size_t)(511UL), (size_t)(512UL)); lbl_49: Real_t AbsDiff; register_stack_var("main|AbsDiff|0", "double", (void *)(&AbsDiff), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_50; } call_lbl_9: calling(9, 0UL, 1, (size_t)(0UL)); AbsDiff = (FABS(mesh.e[j * edgeElems + k] - mesh.e[k * edgeElems + j]));
# 2902 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 TotalAbsDiff += AbsDiff;
# 2903 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2904 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (MaxAbsDiff < AbsDiff) {MaxAbsDiff = AbsDiff; };
# 2905 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2906 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 lbl_50: Real_t RelDiff; register_stack_var("main|RelDiff|0", "double", (void *)(&RelDiff), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } default: { exit(42); } } } RelDiff = (AbsDiff / mesh.e[k * edgeElems + j]);
# 2907 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2908 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 if (MaxRelDiff < RelDiff) {MaxRelDiff = RelDiff; };
# 2909 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2910 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 } }
# 2911 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2912 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("   Testing Plane 0 of Energy Array:\n");
# 2913 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("        MaxAbsDiff   = %12.6e\n", MaxAbsDiff );
# 2914 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("        TotalAbsDiff = %12.6e\n", TotalAbsDiff );
# 2915 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 printf("        MaxRelDiff   = %12.6e\n\n", MaxRelDiff );
# 2916 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2917 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2918 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2919 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2920 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2921 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2922 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
# 2923 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
 alias_group_changed(9, (size_t)(504UL), (size_t)(505UL), (size_t)(506UL), (size_t)(507UL), (size_t)(508UL), (size_t)(509UL), (size_t)(510UL), (size_t)(511UL), (size_t)(512UL)); rm_stack(false, 0UL); return 0 ;
# 2924 "/Users/jmg3/num-debug/src/examples/cpp/lulesh/LULESH.cc"
}


static int module_init() {
    init_module(16832839476487305667UL, 154, 2, 3649UL, 3788UL, 5992UL, 6653UL, 10386UL, 12276UL, 8549UL, 9056UL, 8548UL, 9055UL, 8547UL, 9054UL, 3650UL, 3789UL, 2018UL, 2066UL, 2246UL, 2864UL, 348UL, 167UL, 7801UL, 7854UL, 7800UL, 7853UL, 9063UL, 10366UL, 9062UL, 10365UL, 9065UL, 10368UL, 9064UL, 10367UL, 9066UL, 10369UL, 5994UL, 6655UL, 5991UL, 6652UL, 5990UL, 6651UL, 5993UL, 6654UL, 3648UL, 3787UL, 3647UL, 3786UL, 3646UL, 3785UL, 3645UL, 3784UL, 12536UL, 12948UL, 8291UL, 8544UL, 13319UL, 13551UL, 6659UL, 7190UL, 6658UL, 7189UL, 6657UL, 7188UL, 6656UL, 7187UL, 10385UL, 12275UL, 12538UL, 12950UL, 12539UL, 12951UL, 12304UL, 12535UL, 10384UL, 12274UL, 2264UL, 2375UL, 2259UL, 2340UL, 2258UL, 2333UL, 2257UL, 2326UL, 10383UL, 12273UL, 13324UL, 13556UL, 10382UL, 12272UL, 12954UL, 13312UL, 13322UL, 13554UL, 13323UL, 13555UL, 13325UL, 13557UL, 6669UL, 7190UL, 5413UL, 1994UL, 6661UL, 7192UL, 13329UL, 13561UL, 429UL, 457UL, 2268UL, 2403UL, 2269UL, 2410UL, 2262UL, 2361UL, 2263UL, 2368UL, 2260UL, 2347UL, 2261UL, 2354UL, 2266UL, 2389UL, 2267UL, 2396UL, 427UL, 358UL, 2265UL, 2382UL, 12303UL, 12534UL, 9086UL, 1994UL, 12302UL, 12533UL, 5673UL, 5738UL, 6671UL, 7190UL, 6670UL, 7190UL, 13327UL, 13559UL, 7868UL, 1994UL, 1436UL, 1519UL, 7707UL, 7793UL, 1435UL, 1518UL, 2270UL, 2417UL, 13330UL, 13562UL, 7708UL, 7790UL, 7709UL, 7787UL, 13320UL, 13552UL, 12537UL, 12949UL, 5674UL, 5750UL, 5675UL, 5762UL, 8050UL, 8288UL, 3803UL, 1994UL, 457UL, 437UL, 7799UL, 7852UL, 8290UL, 8543UL, 8293UL, 8546UL, 8292UL, 8545UL, 7856UL, 8046UL, 7857UL, 8047UL, 10381UL, 12271UL, 10380UL, 12270UL, 7858UL, 8048UL, 7859UL, 8049UL, 13328UL, 13560UL, 12960UL, 13318UL, 10388UL, 12278UL, 7710UL, 7769UL, 2886UL, 3535UL, 2885UL, 3534UL, 2869UL, 3518UL, 8068UL, 8129UL, 1437UL, 1520UL, 8066UL, 8115UL, 8067UL, 8122UL, 8064UL, 8101UL, 8065UL, 8108UL, 461UL, 1433UL, 8063UL, 8094UL, 10390UL, 12280UL, 10391UL, 12281UL, 10392UL, 12282UL, 1433UL, 521UL, 13321UL, 13553UL, 2891UL, 2954UL, 9060UL, 10363UL, 9061UL, 10364UL, 2867UL, 3516UL, 2868UL, 3517UL, 158UL, 348UL, 12541UL, 12953UL, 12540UL, 12952UL, 3539UL, 3637UL, 13326UL, 13558UL, 8069UL, 1994UL, 1UL, 148UL, 2873UL, 3522UL, 2872UL, 3521UL, 2871UL, 3520UL, 2870UL, 3519UL, 2877UL, 3526UL, 2876UL, 3525UL, 2875UL, 3524UL, 2874UL, 3523UL, 2879UL, 3528UL, 2878UL, 3527UL, 12958UL, 13316UL, 12959UL, 13317UL, 148UL, 9UL, 8552UL, 9059UL, 8550UL, 9057UL, 8551UL, 9058UL, 10378UL, 12268UL, 10379UL, 12269UL, 482UL, 1994UL, 3544UL, 3642UL, 3541UL, 3639UL, 3542UL, 3640UL, 3543UL, 3641UL, 14006UL, 1994UL, 10387UL, 12277UL, 476UL, 1994UL, 350UL, 427UL, "Mesh", 81, (int)__builtin_offsetof(struct Mesh, x), (int)__builtin_offsetof(struct Mesh, y), (int)__builtin_offsetof(struct Mesh, z), (int)__builtin_offsetof(struct Mesh, xd), (int)__builtin_offsetof(struct Mesh, yd), (int)__builtin_offsetof(struct Mesh, zd), (int)__builtin_offsetof(struct Mesh, xdd), (int)__builtin_offsetof(struct Mesh, ydd), (int)__builtin_offsetof(struct Mesh, zdd), (int)__builtin_offsetof(struct Mesh, fx), (int)__builtin_offsetof(struct Mesh, fy), (int)__builtin_offsetof(struct Mesh, fz), (int)__builtin_offsetof(struct Mesh, nodalMass), (int)__builtin_offsetof(struct Mesh, symmX), (int)__builtin_offsetof(struct Mesh, symmY), (int)__builtin_offsetof(struct Mesh, symmZ), (int)__builtin_offsetof(struct Mesh, matElemlist), (int)__builtin_offsetof(struct Mesh, nodelist), (int)__builtin_offsetof(struct Mesh, lxim), (int)__builtin_offsetof(struct Mesh, lxip), (int)__builtin_offsetof(struct Mesh, letam), (int)__builtin_offsetof(struct Mesh, letap), (int)__builtin_offsetof(struct Mesh, lzetam), (int)__builtin_offsetof(struct Mesh, lzetap), (int)__builtin_offsetof(struct Mesh, elemBC), (int)__builtin_offsetof(struct Mesh, dxx), (int)__builtin_offsetof(struct Mesh, dyy), (int)__builtin_offsetof(struct Mesh, dzz), (int)__builtin_offsetof(struct Mesh, delv_xi), (int)__builtin_offsetof(struct Mesh, delv_eta), (int)__builtin_offsetof(struct Mesh, delv_zeta), (int)__builtin_offsetof(struct Mesh, delx_xi), (int)__builtin_offsetof(struct Mesh, delx_eta), (int)__builtin_offsetof(struct Mesh, delx_zeta), (int)__builtin_offsetof(struct Mesh, e), (int)__builtin_offsetof(struct Mesh, p), (int)__builtin_offsetof(struct Mesh, q), (int)__builtin_offsetof(struct Mesh, ql), (int)__builtin_offsetof(struct Mesh, qq), (int)__builtin_offsetof(struct Mesh, v), (int)__builtin_offsetof(struct Mesh, volo), (int)__builtin_offsetof(struct Mesh, vnew), (int)__builtin_offsetof(struct Mesh, delv), (int)__builtin_offsetof(struct Mesh, vdov), (int)__builtin_offsetof(struct Mesh, arealg), (int)__builtin_offsetof(struct Mesh, ss), (int)__builtin_offsetof(struct Mesh, elemMass), (int)__builtin_offsetof(struct Mesh, dtfixed), (int)__builtin_offsetof(struct Mesh, time), (int)__builtin_offsetof(struct Mesh, deltatime), (int)__builtin_offsetof(struct Mesh, deltatimemultlb), (int)__builtin_offsetof(struct Mesh, deltatimemultub), (int)__builtin_offsetof(struct Mesh, stoptime), (int)__builtin_offsetof(struct Mesh, u_cut), (int)__builtin_offsetof(struct Mesh, hgcoef), (int)__builtin_offsetof(struct Mesh, qstop), (int)__builtin_offsetof(struct Mesh, monoq_max_slope), (int)__builtin_offsetof(struct Mesh, monoq_limiter_mult), (int)__builtin_offsetof(struct Mesh, e_cut), (int)__builtin_offsetof(struct Mesh, p_cut), (int)__builtin_offsetof(struct Mesh, ss4o3), (int)__builtin_offsetof(struct Mesh, q_cut), (int)__builtin_offsetof(struct Mesh, v_cut), (int)__builtin_offsetof(struct Mesh, qlc_monoq), (int)__builtin_offsetof(struct Mesh, qqc_monoq), (int)__builtin_offsetof(struct Mesh, qqc), (int)__builtin_offsetof(struct Mesh, eosvmax), (int)__builtin_offsetof(struct Mesh, eosvmin), (int)__builtin_offsetof(struct Mesh, pmin), (int)__builtin_offsetof(struct Mesh, emin), (int)__builtin_offsetof(struct Mesh, dvovmax), (int)__builtin_offsetof(struct Mesh, refdens), (int)__builtin_offsetof(struct Mesh, dtcourant), (int)__builtin_offsetof(struct Mesh, dthydro), (int)__builtin_offsetof(struct Mesh, dtmax), (int)__builtin_offsetof(struct Mesh, cycle), (int)__builtin_offsetof(struct Mesh, sizeX), (int)__builtin_offsetof(struct Mesh, sizeY), (int)__builtin_offsetof(struct Mesh, sizeZ), (int)__builtin_offsetof(struct Mesh, numElem), (int)__builtin_offsetof(struct Mesh, numNode), "timeval", 2, (int)__builtin_offsetof(struct timeval, tv_sec), (int)__builtin_offsetof(struct timeval, tv_usec));
    register_global_var("global|mesh", "%struct.Mesh*", (void *)(&mesh), 8, 1, 0, 0);
    return 0;
}

static int __libchimes_module_init = module_init();
