ifneq ($(wildcard $(CUDA_HOME)/lib64),)
	CUDA_LIB_PATH = ${CUDA_HOME}/lib64
else
	CUDA_LIB_PATH = ${CUDA_HOME}/lib
endif

all: common_cuda.o
	g++ -I../../cpp/include common_cuda.o -shared \
        -o libcommon2d.so -L${CUDA_LIB_PATH} -lcudart

common_cuda.o: common_cuda.cu
	nvcc -arch=sm_20 -I../../cpp/include --compile -Xcompiler -fPIC common_cuda.cu \
			   -o common_cuda.o

clean:
	rm -f common_cuda.o libcommon2d.so
