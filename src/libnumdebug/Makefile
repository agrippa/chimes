GXX=g++
NVCC=nvcc
GXX_FLAGS=-g -fPIC -Wall
NVCC_FLAGS=-g -Xcompiler -fPIC
SRC=libnumdebug.cpp stack_frame.cpp stack_serialization.cpp numdebug_stack.cpp \
    heap_allocation.cpp type_info.cpp

NUMDEBUG_LIB=libnumdebug.so
NUMDEBUG_CPP_LIB=libnumdebug_cpp.so

all: ${NUMDEBUG_CPP_LIB} ${NUMDEBUG_LIB}

${NUMDEBUG_CPP_LIB}: ${SRC}
	${GXX} ${GXX_FLAGS} -shared ${SRC} -o ${NUMDEBUG_CPP_LIB}

${NUMDEBUG_LIB}: ${SRC} libnumdebug_cuda.o
	${GXX} ${GXX_FLAGS} -shared ${SRC} libnumdebug_cuda.o -o ${NUMDEBUG_LIB} \
        -DCUDA_SUPPORT -I${CUDA_HOME}/include -L${CUDA_HOME}/lib -lcudart

libnumdebug_cuda.o: libnumdebug_cuda.cu
	${NVCC} ${NVCC_FLAGS} --compile libnumdebug_cuda.cu -o libnumdebug_cuda.o

clean:
	rm -f ${NUMDEBUG_LIB} ${NUMDEBUG_CPP_LIB} libnumdebug_cuda.o
