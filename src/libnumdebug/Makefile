GXX=g++
NVCC=nvcc
GXX_FLAGS=-g -fPIC -Wall
NVCC_FLAGS=-g -Xcompiler -fPIC -arch=sm_20
SRC=libnumdebug.cpp stack_frame.cpp stack_serialization.cpp \
    global_serialization.cpp numdebug_stack.cpp heap_allocation.cpp \
    type_info.cpp serialization_common.cpp perf_profile.cpp \
    thread_serialization.cpp

IS_CLANG := $(shell clang++ --version | grep clang | wc -l)
ifeq ($(IS_CLANG),1)
	GXX_FLAGS += -stdlib=libstdc++
endif

ifneq ($(wildcard $(CUDA_HOME)/lib64),)
	CUDA_LIB_PATH = ${CUDA_HOME}/lib64
else
	CUDA_LIB_PATH = ${CUDA_HOME}/lib
endif

NUMDEBUG_LIB=libnumdebug.so
NUMDEBUG_CPP_LIB=libnumdebug_cpp.so

all: ${NUMDEBUG_CPP_LIB} ${NUMDEBUG_LIB}

${NUMDEBUG_CPP_LIB}: ${SRC}
	${GXX} ${GXX_FLAGS} -shared ${SRC} -o ${NUMDEBUG_CPP_LIB}

${NUMDEBUG_LIB}: ${SRC} libnumdebug_cuda.o
	${GXX} ${GXX_FLAGS} -shared ${SRC} libnumdebug_cuda.o -o ${NUMDEBUG_LIB} \
        -DCUDA_SUPPORT -I${CUDA_HOME}/include -L${CUDA_LIB_PATH} -lcudart

libnumdebug_cuda.o: libnumdebug_cuda.cu
	${NVCC} ${NVCC_FLAGS} --compile libnumdebug_cuda.cu -o libnumdebug_cuda.o -DCUDA_SUPPORT

clean:
	rm -f ${NUMDEBUG_LIB} ${NUMDEBUG_CPP_LIB} libnumdebug_cuda.o
