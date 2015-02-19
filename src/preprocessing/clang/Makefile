GXX=g++
EXE=transform

GXX_FLAGS=-O0 -g `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --cxxflags`
INCLUDES=-I${LLVM_HOME}/tools/clang/include -I${LLVM_INSTALL}/tools/clang/include
ARCH=$(shell uname -s)

ifeq ($(ARCH),Darwin)
LIBS=-lclangAST -lclangAnalysis -lclangBasic -lclangDriver -lclangEdit \
	 -lclangFrontend -lclangFrontendTool -lclangLex -lclangParse -lclangSema \
	 -lclangEdit -lclangASTMatchers -lclangRewrite -lclangRewriteFrontend \
	 -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers \
	 -lclangStaticAnalyzerCore -lclangSerialization \
	 -lclangTooling `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --ldflags --libs --system-libs`
else
LIBS=-Wl,--start-group -lclangAST -lclangAnalysis -lclangBasic -lclangDriver -lclangEdit \
	 -lclangFrontend -lclangFrontendTool -lclangLex -lclangParse -lclangSema \
	 -lclangEdit -lclangASTMatchers -lclangRewrite -lclangRewriteFrontend \
	 -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers \
	 -lclangStaticAnalyzerCore -lclangSerialization \
	 -lclangTooling -Wl,--end-group `${LLVM_INSTALL}/Debug+Asserts/bin/llvm-config --ldflags --libs --system-libs`
endif

OBJS=Driver.o DesiredInsertions.o InitPass.o \
     StartExitPass.o ParentTransform.o AliasChangedPass.o MallocPass.o \
     SplitInitsPass.o OMPPass.o OMPTree.o

${EXE}: ${OBJS}
	${GXX} ${GXX_FLAGS} ${INCLUDES} ${OBJS} -o ${EXE} ${LIBS}

%.o: %.cpp
	${GXX} ${GXX_FLAGS} ${INCLUDES} $< --compile -fPIC -o $@


clean:
	rm *.o ${EXE}
