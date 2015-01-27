GXX=g++
GXX_FLAGS=-g -fPIC -Wall -shared
SRC=libnumdebug.cpp stack_frame.cpp stack_serialization.cpp numdebug_stack.cpp \
    heap_allocation.cpp

NUMDEBUG_LIB=libnumdebug.so
NUMDEBUG_CPP_LIB=libnumdebug_cpp.so

all: ${NUMDEBUG_CPP_LIB} ${NUMDEBUG_LIB}

${NUMDEBUG_CPP_LIB}: ${SRC}
	${GXX} ${GXX_FLAGS} ${SRC} -o ${NUMDEBUG_CPP_LIB}

${NUMDEBUG_LIB}: ${SRC}
	${GXX} ${GXX_FLAGS} ${SRC} -I${CUDA_HOME}/include -o ${NUMDEBUG_LIB} \
        -DCUDA_SUPPORT
clean:
	rm -f ${NUMDEBUG_LIB} ${NUMDEBUG_CPP_LIB}
