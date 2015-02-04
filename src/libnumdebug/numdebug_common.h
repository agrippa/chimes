#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>

#ifdef CUDA_SUPPORT
#include <driver_types.h>

#define CHECK(call) { \
    cudaError_t err = (call); \
    if (err != cudaSuccess) { \
        fprintf(stderr, "CUDA Error at %s:%d - %s\n", __FILE__, __LINE__, \
                cudaGetErrorString(err)); \
        exit(1); \
    } \
}

#else

#define CHECK(call) { \
    fprintf(stderr, "CHECK should not be called without CUDA support - " \
            "%s:%d\n", __FILE__, __LINE__); \
    exit(1); \
}

#endif

#endif
