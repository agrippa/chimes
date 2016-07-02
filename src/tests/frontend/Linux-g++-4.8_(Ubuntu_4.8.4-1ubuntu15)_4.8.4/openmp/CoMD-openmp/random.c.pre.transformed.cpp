# 1 "random.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "random.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_gasdev_npm = 1;
static int ____chimes_does_checkpoint_lcg61_npm = 1;
static int ____chimes_does_checkpoint_mkSeed_npm = 1;

static int ____must_checkpoint_mkSeed_iSeed_0 = 2;

static int ____must_manage_gasdev = 2;
static int ____must_manage_lcg61 = 2;
static int ____must_manage_mkSeed = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h" 1
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h"
typedef long int ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4/include/stddef.h"
typedef long unsigned int size_t;
# 5 "/home/mg1/chimes/src/libchimes/libchimes.h" 2


extern void init_chimes(int argc, char **argv);
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
        const char *funcname, int *conditional, unsigned loc_id, int disabled,
        bool is_allocator);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, size_t group, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(unsigned loc_id);
extern void malloc_helper(const void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void calloc_helper(const void *ptr, size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void realloc_helper(const void *new_ptr, const void *old_ptr,
        void *header, size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...);
extern void free_helper(const void *ptr, size_t group);
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
# 69 "/home/mg1/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 2 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 3 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 4 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 5 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 6 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"

# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.h" 1







# 1 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 9 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 25 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 2 3 4
# 10 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.h" 2


real_t gasdev(uint64_t* seed);


double lcg61(uint64_t* seed);


uint64_t mkSeed(uint32_t id, uint32_t callSite);
# 8 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c" 2
# 8 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"

# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                           ;





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));




extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                           ;





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));




extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 89 "/usr/include/math.h" 2 3 4
# 133 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                           ;





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));




extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 134 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
extern int signgam;
# 190 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 302 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 325 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 427 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 1 3 4
# 123 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbitf (float __x) throw ()
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x8) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbit (double __x) throw ()
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x80) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 428 "/usr/include/math.h" 2 3 4
# 489 "/usr/include/math.h" 3 4
}
# 10 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c" 2
# 21 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 21 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
real_t gasdev_npm(uint64_t* seed);double lcg61_npm(uint64_t* seed);
real_t gasdev_quick(uint64_t* seed); real_t gasdev(uint64_t* seed);double lcg61_quick(uint64_t* seed); double lcg61(uint64_t* seed);
real_t gasdev_resumable(uint64_t* seed)
# 22 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&gasdev), "gasdev", &____must_manage_gasdev, 1, 0, (size_t)(6895090419640141293UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 23 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   real_t rsq; real_t v1; real_t v2; ;
# 24 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   do
# 25 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   {
# 26 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
       call_lbl_0: v1 = 2.0*({ calling_npm("lcg61", 0); lcg61_npm(seed); })-1.0;
# 27 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
       call_lbl_1: v2 = 2.0*({ calling_npm("lcg61", 0); lcg61_npm(seed); })-1.0;
# 28 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      rsq = v1*v1+v2*v2;
# 29 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   } while (rsq >= 1.0 || rsq == 0.0);
# 30 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 31 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (v2 * sqrt(-2.0*log(rsq)/rsq)); rm_stack(false, 0UL, "gasdev", &____must_manage_gasdev, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 32 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
rm_stack(false, 0UL, "gasdev", &____must_manage_gasdev, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 41 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 41 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
double lcg61_resumable(uint64_t* seed)
# 42 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&lcg61), "lcg61", &____must_manage_lcg61, 1, 0, (size_t)(6895090419640141356UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 43 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    static double convertToDouble; convertToDouble = (1.0/(2305843009213693951ULL)) ;
# 44 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 45 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed *= (437799614237992725ULL);
# 46 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed %= (2305843009213693951ULL);
# 47 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 48 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    double ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (*seed*convertToDouble); rm_stack(false, 0UL, "lcg61", &____must_manage_lcg61, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 49 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
rm_stack(false, 0UL, "lcg61", &____must_manage_lcg61, ____alias_loc_id_1, ____chimes_did_disable1, false); }
# 65 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 65 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
uint64_t mkSeed_npm(uint32_t id, uint32_t callSite);
uint64_t mkSeed_quick(uint32_t id, uint32_t callSite); uint64_t mkSeed(uint32_t id, uint32_t callSite);
uint64_t mkSeed_resumable(uint32_t id, uint32_t callSite)
# 66 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&mkSeed), "mkSeed", &____must_manage_mkSeed, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; uint64_t iSeed;
# 66 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
 if (____must_checkpoint_mkSeed_iSeed_0) { register_stack_vars(1, "mkSeed|iSeed|0", &____must_checkpoint_mkSeed_iSeed_0, "i64", (void *)(&iSeed), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 67 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint32_t s1; s1 = (id * (2654435761UL)) ;
# 68 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint32_t s2; s2 = ((id+callSite) * (2654435761UL)) ;
# 69 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 70 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      iSeed = (((0x100000000ULL) * s1) + s2) ;
# 71 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   { unsigned int jj; for ( jj = (0) ;jj<10; ++jj) { call_lbl_0: ({ calling_npm("lcg61", 0); lcg61_npm(&iSeed); }); } };
# 73 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 74 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint64_t ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (iSeed); rm_stack(false, 0UL, "mkSeed", &____must_manage_mkSeed, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ;
# 75 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
rm_stack(false, 0UL, "mkSeed", &____must_manage_mkSeed, ____alias_loc_id_2, ____chimes_did_disable2, false); }
# 21 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
real_t gasdev_quick(uint64_t* seed)
# 22 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&gasdev), "gasdev", &____must_manage_gasdev, 1, 0, (size_t)(6895090419640141293UL)) ; ; ;
# 23 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   real_t rsq; real_t v1; real_t v2; ;
# 24 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   do
# 25 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   {
# 26 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
       call_lbl_0: v1 = 2.0*({ calling_npm("lcg61", 0); lcg61_npm(seed); })-1.0;
# 27 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
       call_lbl_1: v2 = 2.0*({ calling_npm("lcg61", 0); lcg61_npm(seed); })-1.0;
# 28 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      rsq = v1*v1+v2*v2;
# 29 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   } while (rsq >= 1.0 || rsq == 0.0);
# 30 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 31 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (v2 * sqrt(-2.0*log(rsq)/rsq)); rm_stack(false, 0UL, "gasdev", &____must_manage_gasdev, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 32 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
rm_stack(false, 0UL, "gasdev", &____must_manage_gasdev, ____alias_loc_id_0, ____chimes_did_disable0, false); }

real_t gasdev(uint64_t* seed) { return (____chimes_replaying ? gasdev_resumable(seed) : gasdev_quick(seed)); }
# 41 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
double lcg61_quick(uint64_t* seed)
# 42 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&lcg61), "lcg61", &____must_manage_lcg61, 1, 0, (size_t)(6895090419640141356UL)) ; ; ;
# 43 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    static double convertToDouble; convertToDouble = (1.0/(2305843009213693951ULL)) ;
# 44 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 45 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed *= (437799614237992725ULL);
# 46 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed %= (2305843009213693951ULL);
# 47 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 48 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    double ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (*seed*convertToDouble); rm_stack(false, 0UL, "lcg61", &____must_manage_lcg61, ____alias_loc_id_1, ____chimes_did_disable1, false); return ____chimes_ret_var_1; ;
# 49 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
rm_stack(false, 0UL, "lcg61", &____must_manage_lcg61, ____alias_loc_id_1, ____chimes_did_disable1, false); }

double lcg61(uint64_t* seed) { return (____chimes_replaying ? lcg61_resumable(seed) : lcg61_quick(seed)); }
# 65 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
uint64_t mkSeed_quick(uint32_t id, uint32_t callSite)
# 66 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&mkSeed), "mkSeed", &____must_manage_mkSeed, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; uint64_t iSeed;
# 66 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
 if (____must_checkpoint_mkSeed_iSeed_0) { register_stack_vars(1, "mkSeed|iSeed|0", &____must_checkpoint_mkSeed_iSeed_0, "i64", (void *)(&iSeed), (size_t)8, 0, 0, 0); } ; ;
# 67 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint32_t s1; s1 = (id * (2654435761UL)) ;
# 68 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint32_t s2; s2 = ((id+callSite) * (2654435761UL)) ;
# 69 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 70 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      iSeed = (((0x100000000ULL) * s1) + s2) ;
# 71 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   { unsigned int jj; for ( jj = (0) ;jj<10; ++jj) { call_lbl_0: ({ calling_npm("lcg61", 0); lcg61_npm(&iSeed); }); } };
# 73 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 74 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint64_t ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (iSeed); rm_stack(false, 0UL, "mkSeed", &____must_manage_mkSeed, ____alias_loc_id_2, ____chimes_did_disable2, false); return ____chimes_ret_var_2; ;
# 75 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
rm_stack(false, 0UL, "mkSeed", &____must_manage_mkSeed, ____alias_loc_id_2, ____chimes_did_disable2, false); }

uint64_t mkSeed(uint32_t id, uint32_t callSite) { return (____chimes_replaying ? mkSeed_resumable(id, callSite) : mkSeed_quick(id, callSite)); }
# 21 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
real_t gasdev_npm(uint64_t* seed)
# 22 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{
# 23 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   real_t rsq,v1,v2;
# 24 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   do
# 25 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   {
# 26 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      v1 = 2.0*lcg61_npm(seed)-1.0;
# 27 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      v2 = 2.0*lcg61_npm(seed)-1.0;
# 28 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
      rsq = v1*v1+v2*v2;
# 29 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   } while (rsq >= 1.0 || rsq == 0.0);
# 30 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 31 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    double ____chimes_ret_var_0; ____chimes_ret_var_0 = (v2 * sqrt(-2.0*log(rsq)/rsq)); return ____chimes_ret_var_0; ;
# 32 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
}
# 41 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
double lcg61_npm(uint64_t* seed)
# 42 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{
# 43 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   static double convertToDouble = 1.0/(2305843009213693951ULL);
# 44 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 45 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed *= (437799614237992725ULL);
# 46 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   *seed %= (2305843009213693951ULL);
# 47 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 48 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    double ____chimes_ret_var_1; ____chimes_ret_var_1 = (*seed*convertToDouble); return ____chimes_ret_var_1; ;
# 49 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
}
# 65 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
uint64_t mkSeed_npm(uint32_t id, uint32_t callSite)
# 66 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
{
# 67 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   uint32_t s1 = id * (2654435761UL);
# 68 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   uint32_t s2 = (id+callSite) * (2654435761UL);
# 69 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 70 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   uint64_t iSeed = ((0x100000000ULL) * s1) + s2;
# 71 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
   for (unsigned jj=0;jj<10; ++jj) { lcg61_npm(&iSeed); };
# 73 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
# 74 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
    uint64_t ____chimes_ret_var_2; ____chimes_ret_var_2 = (iSeed); return ____chimes_ret_var_2; ;
# 75 "/home/mg1/chimes/src/examples/openmp/CoMD/src-openmp/random.c"
}





static int module_init() {
    init_module(6895090419640141281UL, 2, 3, 1, 3, 3, 0, 3, 3, 0, 0,
                           &____alias_loc_id_0, (unsigned)5, (unsigned)0, (unsigned)0, (6895090419640141281UL + 1UL), (6895090419640141281UL + 2UL), (6895090419640141281UL + 3UL), (6895090419640141281UL + 4UL), (6895090419640141281UL + 5UL),
                           &____alias_loc_id_1, (unsigned)3, (unsigned)0, (unsigned)0, (6895090419640141281UL + 54UL), (6895090419640141281UL + 55UL), (6895090419640141281UL + 75UL),
                           &____alias_loc_id_2, (unsigned)7, (unsigned)0, (unsigned)0, (6895090419640141281UL + 78UL), (6895090419640141281UL + 79UL), (6895090419640141281UL + 80UL), (6895090419640141281UL + 81UL), (6895090419640141281UL + 82UL), (6895090419640141281UL + 83UL), (6895090419640141281UL + 84UL),
                            "gasdev", 0, "_Z6gasdevPm", "_Z10gasdev_npmPm", 0, 1, (6895090419640141281UL + 12UL), 0UL, 4, "lcg61", 1, (6895090419640141281UL + 12UL), 0UL, "lcg61", 1, (6895090419640141281UL + 12UL), 0UL, "log", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "lcg61", 0, "_Z5lcg61Pm", "_Z9lcg61_npmPm", 0, 1, (6895090419640141281UL + 75UL), 0UL, 0,
                            "mkSeed", 0, "_Z6mkSeedjj", "_Z10mkSeed_npmjj", 0, 2, 0UL, 0UL, 0UL, 1, "lcg61", 1, (6895090419640141281UL + 82UL), 0UL,
                           "gasdev", &(____chimes_does_checkpoint_gasdev_npm),
                           "lcg61", &(____chimes_does_checkpoint_lcg61_npm),
                           "mkSeed", &(____chimes_does_checkpoint_mkSeed_npm),
                             (6895090419640141281UL + 1UL), (6895090419640141281UL + 12UL),
                             (6895090419640141281UL + 54UL), (6895090419640141281UL + 75UL),
                             "gasdev", "_Z6gasdevPm", 0, 2, "lcg61", "lcg61",
                             "lcg61", "_Z5lcg61Pm", 0, 0,
                             "mkSeed", "_Z6mkSeedjj", 0, 1, "lcg61",
                        "mkSeed|iSeed|0", 1, "mkSeed",
        "lcg61", 0UL, (int)1, 6895090419640141293UL,
        "lcg61", 0UL, (int)1, 6895090419640141293UL,
        "lcg61", 0UL, (int)1, 6895090419640141363UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
