# 1 "random.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "random.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
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
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 2 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 3 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 4 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 5 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 6 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.h" 1







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
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.h" 2
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 1 3 4
# 9 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef __signed char int8_t;
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
# 62 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
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
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.h" 2


real_t gasdev(uint64_t* seed);


double lcg61(uint64_t* seed);


uint64_t mkSeed(uint32_t id, uint32_t callSite);
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c" 2
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"

# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 1 3 4
# 46 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 151 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 152 "/usr/include/Availability.h" 2 3 4
# 47 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 2 3 4

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
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c" 2
# 21 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 21 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
real_t gasdev(uint64_t* seed)
# 22 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
{new_stack((void *)(&gasdev), 1, 1, (size_t)(16794414226779803848UL), "gasdev|seed|0", "i64*", (void *)(&seed), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 23 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
    lbl_0: real_t rsq; register_stack_var("gasdev|rsq|0", "double", (void *)(&rsq), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: real_t v1; register_stack_var("gasdev|v1|0", "double", (void *)(&v1), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } lbl_2: real_t v2; register_stack_var("gasdev|v2|0", "double", (void *)(&v2), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } default: { chimes_error(); } } } ;
# 24 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   do
# 25 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   {
# 26 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
       call_lbl_1: calling((void*)&lcg61, 1, 0UL, 1, (size_t)(16794414226779803848UL)); v1 = 2.0*lcg61(seed)-1.0;
# 27 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
       call_lbl_2: calling((void*)&lcg61, 2, 0UL, 1, (size_t)(16794414226779803848UL)); v2 = 2.0*lcg61(seed)-1.0;
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
      rsq = v1*v1+v2*v2;
# 29 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   } while (rsq >= 1.0 || rsq == 0.0);
# 30 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 31 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   alias_group_changed(4, (size_t)(16794414226779803838UL), (size_t)(16794414226779803839UL), (size_t)(16794414226779803840UL), (size_t)(16794414226779803841UL)); rm_stack(false, 0UL); call_lbl_5: calling((void*)&sqrt, 5, 0UL, 1, (size_t)(0UL)); call_lbl_6: calling((void*)&log, 6, 0UL, 1, (size_t)(0UL)); return v2 * sqrt(-2.0*log(rsq)/rsq);
# 32 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
}
# 41 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 41 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
double lcg61(uint64_t* seed)
# 42 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
{new_stack((void *)(&lcg61), 1, 0, (size_t)(16794414226779803904UL)); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 43 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
    static double convertToDouble; convertToDouble = (1. / (2305843009213693951ULL)) ;
# 44 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 45 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed *= (437799614237992725ULL);
# 46 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed %= (2305843009213693951ULL);
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 48 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   alias_group_changed(2, (size_t)(16794414226779803887UL), (size_t)(16794414226779803904UL)); rm_stack(false, 0UL); return *seed*convertToDouble;
# 49 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
}
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
uint64_t mkSeed(uint32_t id, uint32_t callSite)
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
{new_stack((void *)(&mkSeed), 2, 0, (size_t)(0UL), (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
    uint32_t s1; s1 = (id * (2654435761U)) ;
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
    uint32_t s2; s2 = ((id + callSite) * (2654435761U)) ;
# 69 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
    uint64_t iSeed; iSeed = (((4294967296ULL) * s1) + s2) ;
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   { unsigned int jj; for ( jj = (0) ;jj < 10; ++jj) { call_lbl_1: calling((void*)&lcg61, 1, 0UL, 1, (size_t)(16794414226779803911UL)); lcg61(&iSeed); } };
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
   alias_group_changed(6, (size_t)(16794414226779803907UL), (size_t)(16794414226779803908UL), (size_t)(16794414226779803909UL), (size_t)(16794414226779803910UL), (size_t)(16794414226779803911UL), (size_t)(16794414226779803912UL)); rm_stack(false, 0UL); return iSeed;
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/random.c"
}


static int module_init() {
    init_module(16794414226779803837UL, 2, 0, 16794414226779803837UL + 1UL, 16794414226779803837UL + 11UL, 16794414226779803837UL + 50UL, 16794414226779803837UL + 67UL);
    return 0;
}

static int __libchimes_module_init = module_init();
