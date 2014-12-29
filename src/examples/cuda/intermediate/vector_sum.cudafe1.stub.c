#define __NV_CUBIN_HANDLE_STORAGE__ static
#include "crt/host_runtime.h"
#include "vector_sum.fatbin.c"
extern void __device_stub__Z6kernelPiS_S_i(int *, int *, int *, int);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll_18_vector_sum_cpp1_ii_36d5b762(void) __attribute__((__constructor__));
void __device_stub__Z6kernelPiS_S_i(int *__par0, int *__par1, int *__par2, int __par3){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaLaunch(((char *)((void ( *)(int *, int *, int *, int))kernel)));}
# 13 "./vector_sum.cu"
void kernel( int *__cuda_0,int *__cuda_1,int *__cuda_2,int __cuda_3)
# 13 "./vector_sum.cu"
{__device_stub__Z6kernelPiS_S_i( __cuda_0,__cuda_1,__cuda_2,__cuda_3);




}
# 1 "vector_sum.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T24) {  __nv_dummy_param_ref(__T24); __nv_save_fatbinhandle_for_managed_rt(__T24); __cudaRegisterEntry(__T24, ((void ( *)(int *, int *, int *, int))kernel), _Z6kernelPiS_S_i, (-1)); }
static void __sti____cudaRegisterAll_18_vector_sum_cpp1_ii_36d5b762(void) {  __cudaRegisterBinary(__nv_cudaEntityRegisterCallback);  }
