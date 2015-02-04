#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

int getNumCUDADevices() {
    int ndevices;
    cudaError_t err = cudaGetDeviceCount(&ndevices);
    if (err == cudaErrorNoDevice) {
        return 0;
    } else if (err == cudaSuccess) {
        return ndevices;
    } else {
        fprintf(stderr, "Unexpected error in getNumCUDADevices: %s\n",
                cudaGetErrorString(err));
        exit(1);
    }
}

#ifdef __cplusplus
}
#endif
