CHIMES: CHeckpointing In-MEmory State
=========

Setup:
======

Prerequisites:

1. LLVM_INSTALL set to the llvm-build directory created below
2. LLVM_HOME set to the llvm-src directory created below
3. CHIMES_HOME set to the root directory this repo is cloned to
4. CUDA_HOME set to the root of your CUDA installation
5. LD_LIBRARY_PATH/DYLD_LIBRARY_PATH has ${CHIMES_HOME}/src/libchimes and ${CHIMES_HOME}/src/libchimes/xxhash

The steps to install CHIMES are listed below. There is also an install.sh script
provided in the root directory of this project (though it is not guaranteed to
work on all systems).

1. Download LLVM 3.5.1 from http://llvm.org/releases/3.5.1/llvm-3.5.1.src.tar.xz and extract to llvm-src
2. Download Clang 3.5.1 from http://llvm.org/releases/3.5.1/cfe-3.5.1.src.tar.xz and extract to llvm-src/tools/clang
3. Download Compiler RT 3.5.1 from http://llvm.org/releases/3.5.1/compiler-rt-3.5.1.src.tar.xz and extract to llvm-src/projects/compiler-rt
4. git clone git@github.com:agrippa/num-debug.git
5. cd llvm-src/lib/Transforms && ln -s ${CHIMES_HOME}/src/preprocessing/Play
6. Edit llvm-src/lib/Transforms/Makefile to add the Play/ directory to the PARALLEL_DIRS list
7. Edit llvm-src/lib/Transforms/CMakeLists.txt, appending the line add_subdirectory(Play)
8. mkdir llvm-build
9. cd llvm-build && ../llvm-src/configure --enable-optimized=no --enable-profiling=yes && make

When building, you must build LLVM with the GNU compilers to enable profiling.
If your machine defaults to something else (e.g. clang on MacOS) then you can
explicitly force LLVM to be built with GNU by setting the CC, CXX, and CPP
environment variables. For example, on my Mac:

        CC=/usr/local/bin/gcc CXX=/usr/local/bin/g++ CPP=/usr/local/bin/cpp \
            ../llvm-src/configure --enable-optimized=no --enable-profiling=yes


Adding New Attributes to clang:
=============================

There have been several times I've wanted to add a new attribute to clang. The
process is straightforward, but unfortunately requires a modification to a
codebase that is not versioned with the rest of the CHIMES code (the clang
repo). Therefore, I include a step-by-step guide to reproduce my changes in your
own clang installation. This information is based on:

http://clang.llvm.org/docs/InternalsManual.html#include-clang-basic-attr-td

1. Add a definition of the attribute in clang/include/clang/Basic/Attr.td. I've
   added the following attributes:

        def NoCheckpoint : InheritableAttr {
          let Spellings = [GCC<"nocheckpoint">, Declspec<"nocheckpoint">];
          let Documentation = [Undocumented];
        }
        
        def Allocator : InheritableAttr {
          let Spellings = [GCC<"allocator">, Declspec<"allocator">];
          let Documentation = [Undocumented];
        }

2. Add boiler plate to clang/lib/Sema/SemaDeclAttr.cpp for actually handling
   that attribute. The attributes I've added generally just serve as markers for
   me to fetch in my own clang plugins so I don't want to modify the behavior of
   clang. I just use handleSimpleAttribute in the massive attribute switch
   statement in ProcessDeclAttribute:

        case AttributeList::AT_NoCheckpoint:
          handleSimpleAttribute<NoCheckpointAttr>(S, D, Attr);
          break;
        case AttributeList::AT_Allocator:
          handleSimpleAttribute<AllocatorAttr>(S, D, Attr);
          break;

3. That's all of the changes to the core of clang, but I generally also need to
   check if these attributes are applied to an element from a clang tool. As far
   as I can tell, getting attribute information is not possible from LLVM. From
   a clang tool, you can do something like the following:

        clang::CallExpr *call = ...;
        const clang::FunctionDecl *callee = call->getDirectCallee();
        if (callee && callee->hasAttrs()) {
            for (clang::AttrVec::const_iterator i = callee->getAttrs().begin(),
                    e = callee->getAttrs().end(); i != e; i++) {
                clang::NoCheckpointAttr *a = clang::dyn_cast<clang::NoCheckpointAttr>(*i);
                if (a) {
                    // This function declaration has the nocheckpoint attribute
                    ...
                }
            }
        }
