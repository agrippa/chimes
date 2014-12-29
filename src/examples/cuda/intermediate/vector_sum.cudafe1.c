# 1 "../vector_sum.cu"
# 35 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/exception" 3
#pragma GCC visibility push ( default )
# 144 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/exception" 3
#pragma GCC visibility pop
# 42 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/new" 3
#pragma GCC visibility push ( default )
# 110 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/new" 3
#pragma GCC visibility pop
# 1388 "/opt/apps/cuda/6.0.37/bin/..//include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 271 "/usr/include/libio.h" 3
struct _IO_FILE;
# 199 "/usr/include/math.h" 3
enum _ZUt_ {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL};
# 292 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_};
# 124 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E { _ZNSt9__is_voidIvE7__valueE = 1};
# 144 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E { _ZNSt12__is_integerIbE7__valueE = 1};
# 151 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E { _ZNSt12__is_integerIcE7__valueE = 1};
# 158 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E { _ZNSt12__is_integerIaE7__valueE = 1};
# 165 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E { _ZNSt12__is_integerIhE7__valueE = 1};
# 173 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E { _ZNSt12__is_integerIwE7__valueE = 1};
# 197 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E { _ZNSt12__is_integerIsE7__valueE = 1};
# 204 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E { _ZNSt12__is_integerItE7__valueE = 1};
# 211 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E { _ZNSt12__is_integerIiE7__valueE = 1};
# 218 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E { _ZNSt12__is_integerIjE7__valueE = 1};
# 225 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E { _ZNSt12__is_integerIlE7__valueE = 1};
# 232 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E { _ZNSt12__is_integerImE7__valueE = 1};
# 239 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E { _ZNSt12__is_integerIxE7__valueE = 1};
# 246 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E { _ZNSt12__is_integerIyE7__valueE = 1};
# 264 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E { _ZNSt13__is_floatingIfE7__valueE = 1};
# 271 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E { _ZNSt13__is_floatingIdE7__valueE = 1};
# 278 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E { _ZNSt13__is_floatingIeE7__valueE = 1};
# 354 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E { _ZNSt9__is_charIcE7__valueE = 1};
# 362 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E { _ZNSt9__is_charIwE7__valueE = 1};
# 377 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E { _ZNSt9__is_byteIcE7__valueE = 1};
# 384 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E { _ZNSt9__is_byteIaE7__valueE = 1};
# 391 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/../../../../include/c++/4.4.7/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E { _ZNSt9__is_byteIhE7__valueE = 1};
# 211 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 2360 "/opt/apps/cuda/6.0.37/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaConfigureCall(struct dim3, struct dim3, size_t, struct CUstream_st *);
# 2706 "/opt/apps/cuda/6.0.37/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaMalloc(void **, size_t);
# 2840 "/opt/apps/cuda/6.0.37/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaFree(void *);
# 3726 "/opt/apps/cuda/6.0.37/bin/..//include/cuda_runtime_api.h"
extern enum cudaError cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 236 "/usr/include/stdio.h" 3
extern int fclose(FILE *);
# 271 "/usr/include/stdio.h" 3
extern FILE *fopen(const char *__restrict__, const char *__restrict__);
# 19 "../vector_sum.cu"
extern int main(int, char **);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern void __nv_dummy_param_ref();
extern void __nv_save_fatbinhandle_for_managed_rt();
extern int __cudaRegisterEntry();
extern int __cudaRegisterBinary();
static void __sti___18_vector_sum_cpp1_ii_36d5b762(void) __attribute__((__constructor__));
# 19 "../vector_sum.cu"
int main( int argc,  char **argv) {  struct dim3 __T20;
 unsigned __T21;
 struct dim3 __T22;
 unsigned __T23;
# 21 "../vector_sum.cu"
 int __cuda_local_var_33982_9_non_const_i;
 int __cuda_local_var_33983_9_non_const_N;

 int *__cuda_local_var_33985_10_non_const_h_A;
# 24 "../vector_sum.cu"
 int *__cuda_local_var_33985_16_non_const_h_B;
# 24 "../vector_sum.cu"
 int *__cuda_local_var_33985_22_non_const_h_C;
 int *__cuda_local_var_33986_10_non_const_d_A;
# 25 "../vector_sum.cu"
 int *__cuda_local_var_33986_16_non_const_d_B;
# 25 "../vector_sum.cu"
 int *__cuda_local_var_33986_22_non_const_d_C;
# 43 "../vector_sum.cu"
 int __cuda_local_var_34004_9_non_const_threads_per_block;
 int __cuda_local_var_34005_9_non_const_blocks_per_grid;





 FILE *__cuda_local_var_34011_11_non_const_fp;
# 22 "../vector_sum.cu"
__cuda_local_var_33983_9_non_const_N = 1048576;




__cuda_local_var_33985_10_non_const_h_A = ((int *)(malloc((4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)))));
__cuda_local_var_33985_16_non_const_h_B = ((int *)(malloc((4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)))));
__cuda_local_var_33985_22_non_const_h_C = ((int *)(malloc((4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)))));

cudaMalloc(((void **)(&__cuda_local_var_33986_10_non_const_d_A)), (4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)));
cudaMalloc(((void **)(&__cuda_local_var_33986_16_non_const_d_B)), (4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)));
cudaMalloc(((void **)(&__cuda_local_var_33986_22_non_const_d_C)), (4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)));

for (__cuda_local_var_33982_9_non_const_i = 0; (__cuda_local_var_33982_9_non_const_i < __cuda_local_var_33983_9_non_const_N); __cuda_local_var_33982_9_non_const_i++) {
(__cuda_local_var_33985_10_non_const_h_A[__cuda_local_var_33982_9_non_const_i]) = __cuda_local_var_33982_9_non_const_i;
(__cuda_local_var_33985_16_non_const_h_B[__cuda_local_var_33982_9_non_const_i]) = (2 * __cuda_local_var_33982_9_non_const_i);
}

cudaMemcpy(((void *)__cuda_local_var_33986_10_non_const_d_A), ((const void *)__cuda_local_var_33985_10_non_const_h_A), (4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_33986_16_non_const_d_B), ((const void *)__cuda_local_var_33985_16_non_const_h_B), (4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)), cudaMemcpyHostToDevice);

__cuda_local_var_34004_9_non_const_threads_per_block = 128;
__cuda_local_var_34005_9_non_const_blocks_per_grid = (((__cuda_local_var_33983_9_non_const_N + __cuda_local_var_34004_9_non_const_threads_per_block) - 1) / __cuda_local_var_34004_9_non_const_threads_per_block);

(cudaConfigureCall((((void)((__T21 = ((unsigned)__cuda_local_var_34005_9_non_const_blocks_per_grid)) , (void)((((__T20.x) = __T21) , (void)((__T20.y) = 1U)) , ((__T20.z) = 1U)))) , __T20), (((void)((__T23 = ((unsigned)__cuda_local_var_34004_9_non_const_threads_per_block)) , (void)((((__T22.x) = __T23) , (void)((__T22.y) = 1U)) , ((__T22.z) = 1U)))) , __T22), 0UL, ((struct CUstream_st *)0LL))) ? ((void)0) : (__device_stub__Z6kernelPiS_S_i(__cuda_local_var_33986_10_non_const_d_A, __cuda_local_var_33986_16_non_const_d_B, __cuda_local_var_33986_22_non_const_d_C, __cuda_local_var_33983_9_non_const_N));

cudaMemcpy(((void *)__cuda_local_var_33985_22_non_const_h_C), ((const void *)__cuda_local_var_33986_22_non_const_d_C), (4UL * ((unsigned long)__cuda_local_var_33983_9_non_const_N)), cudaMemcpyDeviceToHost);

__cuda_local_var_34011_11_non_const_fp = (fopen(((const char *)"dump.out"), ((const char *)"w")));
for (__cuda_local_var_33982_9_non_const_i = 0; (__cuda_local_var_33982_9_non_const_i < __cuda_local_var_33983_9_non_const_N); __cuda_local_var_33982_9_non_const_i++) {
fprintf(__cuda_local_var_34011_11_non_const_fp, ((const char *)"%d\n"), (__cuda_local_var_33985_22_non_const_h_C[__cuda_local_var_33982_9_non_const_i]));
}
fclose(__cuda_local_var_34011_11_non_const_fp);

cudaFree(((void *)__cuda_local_var_33986_10_non_const_d_A));
cudaFree(((void *)__cuda_local_var_33986_16_non_const_d_B));
cudaFree(((void *)__cuda_local_var_33986_22_non_const_d_C));

return 0;
}
static void __sti___18_vector_sum_cpp1_ii_36d5b762(void) {   }

#include "vector_sum.cudafe1.stub.c"
