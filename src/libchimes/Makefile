GXX=g++
NVCC=nvcc
GXX_FLAGS=-g -fPIC -Wall
NVCC_FLAGS=-g -Xcompiler -fPIC -arch=sm_20
SRC=libchimes.cpp stack_frame.cpp stack_serialization.cpp \
    global_serialization.cpp chimes_stack.cpp heap_allocation.cpp \
    type_info.cpp serialization_common.cpp perf_profile.cpp \
    thread_serialization.cpp

IS_CLANG := $(shell ${GXX} --version 2>&1 | grep clang | wc -l | bc)
ifeq ($(IS_CLANG),1)
	GXX_FLAGS += -stdlib=libstdc++
endif

ifneq ($(wildcard $(CUDA_HOME)/lib64),)
	CUDA_LIB_PATH = ${CUDA_HOME}/lib64
else
	CUDA_LIB_PATH = ${CUDA_HOME}/lib
endif

CHIMES_LIB=libchimes.so
CHIMES_CPP_LIB=libchimes_cpp.so

all: ${CHIMES_CPP_LIB} ${CHIMES_LIB}

${CHIMES_CPP_LIB}: ${SRC}
	${GXX} ${GXX_FLAGS} -shared ${SRC} -o ${CHIMES_CPP_LIB}

${CHIMES_LIB}: ${SRC} libchimes_cuda.o
	${GXX} ${GXX_FLAGS} -shared ${SRC} libchimes_cuda.o -o ${CHIMES_LIB} \
        -DCUDA_SUPPORT -I${CUDA_HOME}/include -L${CUDA_LIB_PATH} -lcudart

libchimes_cuda.o: libchimes_cuda.cu
	${NVCC} ${NVCC_FLAGS} --compile libchimes_cuda.cu -o libchimes_cuda.o -DCUDA_SUPPORT

clean:
	rm -f ${CHIMES_LIB} ${CHIMES_CPP_LIB} libchimes_cuda.o
