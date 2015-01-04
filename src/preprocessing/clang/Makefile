GXX=g++
EXE=transform
LAST_STAGE=test.register.cpp
GXX_FLAGS=-fno-rtti -O0 -g `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --cxxflags`
INCLUDES=-I${LLVM_HOME}/tools/clang/include -I${LLVM_INSTALL}/tools/clang/include
LIBS=-lclangAST -lclangAnalysis -lclangBasic -lclangDriver -lclangEdit -lclangFrontend -lclangFrontendTool -lclangLex -lclangParse -lclangSema -lclangEdit -lclangASTMatchers -lclangRewrite -lclangRewriteFrontend -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers -lclangStaticAnalyzerCore -lclangSerialization -lclangToolingCore -lclangTooling `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --ldflags --libs --system-libs`

OBJS=Driver.o DesiredInsertions.o CallingPass.o InitPass.o \
     StartExitPass.o ParentTransform.o AliasChangedPass.o MallocPass.o \
     RegisterStackPass.o SplitInitsPass.o

${EXE}: ${OBJS}
	${GXX} ${GXX_FLAGS} ${INCLUDES} ${OBJS} -o ${EXE} ${LIBS}

%.o: %.cpp
	${GXX} ${GXX_FLAGS} ${INCLUDES} $< --compile -fPIC -o $@


run:
	./${EXE} -extra-arg="-I../../libnumdebug" -extra-arg="-include../../libnumdebug/libnumdebug.h" \
        -l ${NUM_DEBUG_HOME}/src/examples/cpp/lines.info \
        -f ${NUM_DEBUG_HOME}/src/examples/cpp/func_start.info \
        -s ${NUM_DEBUG_HOME}/src/examples/cpp/struct.info \
        -x ${NUM_DEBUG_HOME}/src/examples/cpp/exit.info \
        -i ${NUM_DEBUG_HOME}/src/examples/cpp/test.cpp \
        -d ${NUM_DEBUG_HOME}/src/examples/cpp/decl.info \
        -a ${NUM_DEBUG_HOME}/src/examples/cpp/stack.info \
        -m ${NUM_DEBUG_HOME}/src/examples/cpp/heap.info \
        -b ${NUM_DEBUG_HOME}/src/examples/cpp/loc.info \
        /Users/mgrossman/dev/num-debug/src/examples/cpp/test.cpp --
	g++ -I../../libnumdebug -L../../libnumdebug -include../../libnumdebug/libnumdebug.h -lnumdebug ${LAST_STAGE}

compile:
	g++ -I../../libnumdebug -L../../libnumdebug -include../../libnumdebug/libnumdebug.h -lnumdebug ${LAST_STAGE}

clean:
	rm *.o ${EXE}
