GXX=g++
EXE=transform
GXX_FLAGS=-fno-rtti -O0 -g `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --cxxflags`
INCLUDES=-I${LLVM_HOME}/tools/clang/include -I${LLVM_INSTALL}/tools/clang/include
LIBS=-lclangAST -lclangAnalysis -lclangBasic -lclangDriver -lclangEdit -lclangFrontend -lclangFrontendTool -lclangLex -lclangParse -lclangSema -lclangEdit -lclangASTMatchers -lclangRewrite -lclangRewriteFrontend -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers -lclangStaticAnalyzerCore -lclangSerialization -lclangToolingCore -lclangTooling `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --ldflags --libs --system-libs`

${EXE}: Driver.o NumDebugTransform.o DesiredInsertions.o
	${GXX} ${GXX_FLAGS} ${INCLUDES} Driver.o NumDebugTransform.o DesiredInsertions.o -o ${EXE} ${LIBS}

NumDebugTransform.o: NumDebugTransform.cpp
	${GXX} ${GXX_FLAGS} ${INCLUDES} NumDebugTransform.cpp --compile -fPIC -o NumDebugTransform.o
DesiredInsertions.o: DesiredInsertions.cpp
	${GXX} ${GXX_FLAGS} ${INCLUDES} DesiredInsertions.cpp --compile -fPIC -o DesiredInsertions.o
Driver.o: Driver.cpp
	${GXX} ${GXX_FLAGS} ${INCLUDES} Driver.cpp --compile -fPIC -o Driver.o

run:
	./${EXE} -extra-arg="-I../../libnumdebug" \
        -l ${NUM_DEBUG_HOME}/src/examples/cpp/lines.info \
        -f ${NUM_DEBUG_HOME}/src/examples/cpp/func_start.info \
        -s ${NUM_DEBUG_HOME}/src/examples/cpp/struct.info \
        -x ${NUM_DEBUG_HOME}/src/examples/cpp/exit.info \
        -i ${NUM_DEBUG_HOME}/src/examples/cpp/test.cpp \
        -d ${NUM_DEBUG_HOME}/src/examples/cpp/decl.info \
        -a ${NUM_DEBUG_HOME}/src/examples/cpp/stack.info \
        -m ${NUM_DEBUG_HOME}/src/examples/cpp/heap.info \
        /Users/mgrossman/dev/num-debug/src/examples/cpp/test.cpp --

clean:
	rm *.o ${EXE}
