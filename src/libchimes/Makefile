include ${CHIMES_HOME}/src/common.conf

NVCC=nvcc
GXX_FLAGS=-fPIC -Wall -O3 -DVERBOSE
NVCC_FLAGS=-Xcompiler -fPIC -arch=sm_20
SRC=libchimes.cpp stack_frame.cpp stack_serialization.cpp \
	global_serialization.cpp chimes_stack.cpp heap_allocation.cpp \
	type_info.cpp serialization_common.cpp perf_profile.cpp \
	thread_serialization.cpp constant_serialization.cpp hash_chunker.cpp \
	trace_serialization.cpp alias_groups_serialization.cpp \
	checkpointable_heap_serialization.cpp container_serialization.cpp \
	function_serialization.cpp heap_tree.cpp
OBJ=$(patsubst %.cpp,%.o,$(SRC)) 

OMP_LIB=-lgomp

IS_LINUX := $(shell uname)
IS_CLANG := $(shell ${GXX} --version 2>&1 | grep clang | wc -l | bc)
ifeq ($(IS_CLANG),1)
	GXX_FLAGS += -stdlib=libstdc++
endif

ifeq ($(IS_LINUX),Linux)
	GXX_FLAGS += -lrt
endif

ifneq ($(wildcard $(CUDA_HOME)/lib64),)
	CUDA_LIB_PATH = ${CUDA_HOME}/lib64
else
	CUDA_LIB_PATH = ${CUDA_HOME}/lib
endif

CHIMES_LIB=libchimes.so
CHIMES_DUMMY_LIB=libchimes_dummy.so
CHIMES_STATIC_LIB=libchimes.a
CHIMES_DUMMY_STATIC_LIB=libchimes_dummy.a
CHIMES_CPP_LIB=libchimes_cpp.so

all: ${CHIMES_CPP_LIB} ${CHIMES_LIB} ${CHIMES_STATIC_LIB} ${CHIMES_DUMMY_LIB} \
		${CHIMES_DUMMY_STATIC_LIB} benchmark_timers

benchmark_timers: benchmark_timers.cpp
	${GXX} ${GXX_FLAGS} -o benchmark_timers benchmark_timers.cpp

${CHIMES_CPP_LIB}: ${SRC} build-xxhash
	${GXX} ${GXX_FLAGS} -shared ${SRC} -o ${CHIMES_CPP_LIB} ${OMP_LIB} -Lxxhash/ -lxxhash

${CHIMES_LIB}: ${SRC} libchimes_cuda.o build-xxhash
	${GXX} ${GXX_FLAGS} -shared ${SRC} libchimes_cuda.o -o ${CHIMES_LIB} \
        -DCUDA_SUPPORT -I${CUDA_HOME}/include -L${CUDA_LIB_PATH} ${OMP_LIB} -lcudart -Lxxhash/ -lxxhash

${CHIMES_STATIC_LIB}: ${OBJ} libchimes_cuda.o build-xxhash
	ar rcs ${CHIMES_STATIC_LIB} ${OBJ} libchimes_cuda.o

${CHIMES_DUMMY_LIB}: libchimes_dummy.cpp
	${GXX} ${GXX_FLAGS} -shared libchimes_dummy.cpp -o ${CHIMES_DUMMY_LIB}

${CHIMES_DUMMY_STATIC_LIB}: libchimes_dummy.o libchimes_cuda.o build-xxhash
	ar rcs ${CHIMES_DUMMY_STATIC_LIB} libchimes_dummy.o libchimes_cuda.o

%.o: %.cpp
	${GXX} ${GXX_FLAGS} -DCUDA_SUPPORT -I${CUDA_HOME}/include $< --compile -fPIC -o $@

libchimes_cuda.o: libchimes_cuda.cu
	${NVCC} ${NVCC_FLAGS} --compile libchimes_cuda.cu -o libchimes_cuda.o -DCUDA_SUPPORT

build-xxhash:
	make -C xxhash/

clean:
	rm -f ${CHIMES_LIB} ${CHIMES_CPP_LIB} *.o ${CHIMES_STATIC_LIB} \
		${CHIMES_DUMMY_LIB} ${CHIMES_DUMMY_STATIC_LIB} benchmark_timers
	make -C xxhash/ clean
