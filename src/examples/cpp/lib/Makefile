all: common2d.cpp common.cpp common_cuda.o
	g++ -I../include common_cuda.o common.cpp common2d.cpp -shared \
        -o libcommon2d.so -L${CUDA_HOME}/lib -lcudart

common_cuda.o: common_cuda.cu
	nvcc -I../include --compile -Xcompiler -fPIC common_cuda.cu -o common_cuda.o

clean:
	rm -f common_cuda.o libcommon2d.so
