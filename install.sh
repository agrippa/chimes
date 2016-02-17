#!/bin/bash

set -e

if [[ -z "$LLVM_INSTALL" ]]; then
    echo LLVM_INSTALL must be set
    exit 1
fi

if [[ -z "$LLVM_HOME" ]]; then
    echo LLVM_HOME must be set
    exit 1
fi

if [[ -z "$CHIMES_HOME" ]]; then
    echo CHIMES_HOME must be set
    exit 1
fi

rm -rf $LLVM_INSTALL
rm -rf $LLVM_HOME

if [[ ! -d $CHIMES_HOME ]]; then
    git clone git@github.com:agrippa/chimes.git $CHIMES_HOME
fi

LLVM_HOME_DIR=$(dirname $LLVM_HOME)

LLVM_TAR=llvm-3.5.1.src
CLANG_TAR=cfe-3.5.1.src
COMPILER_RT_TAR=compiler-rt-3.5.1.src

# Download source
cd $LLVM_HOME_DIR && rm -f $LLVM_TAR.tar.xz && \
       wget http://llvm.org/releases/3.5.1/$LLVM_TAR.tar.xz
cd $LLVM_HOME_DIR && rm -f $CLANG_TAR.tar.xz && \
       wget http://llvm.org/releases/3.5.1/$CLANG_TAR.tar.xz
cd $LLVM_HOME_DIR && rm -f $COMPILER_RT_TAR.tar.xz && \
       wget http://llvm.org/releases/3.5.1/$COMPILER_RT_TAR.tar.xz

# Build directory structure for llvm, clang, compiler-rt
cd $LLVM_HOME_DIR && tar xf $LLVM_TAR.tar.xz && mv $LLVM_TAR $LLVM_HOME
cd $LLVM_HOME_DIR && tar xf $CLANG_TAR.tar.xz && \
       mv $CLANG_TAR $LLVM_HOME/tools/clang
cd $LLVM_HOME_DIR && tar xf $COMPILER_RT_TAR.tar.xz && \
       mv $COMPILER_RT_TAR $LLVM_HOME/projects/compiler-rt

# Update Makefiles for Play transform
ln -s $CHIMES_HOME/src/preprocessing/Play $LLVM_HOME/lib/Transforms/Play
echo 'add_subdirectory(Play)' >> $LLVM_HOME/lib/Transforms/CMakeLists.txt
cat $LLVM_HOME/lib/Transforms/Makefile | head -n -1 > $LLVM_HOME/lib/Transforms/Makefile.tmp
echo 'PARALLEL_DIRS := $(PARALLEL_DIRS) Play' >> $LLVM_HOME/lib/Transforms/Makefile.tmp
tail -n 1 $LLVM_HOME/lib/Transforms/Makefile >> $LLVM_HOME/lib/Transforms/Makefile.tmp
mv $LLVM_HOME/lib/Transforms/Makefile.tmp $LLVM_HOME/lib/Transforms/Makefile

# Configure two new function attributes in llvm-src
ATTR_TD=$LLVM_HOME/tools/clang/include/clang/Basic/Attr.td
echo 'def NoCheckpoint : InheritableAttr {' >> $ATTR_TD
echo '  let Spellings = [GCC<"nocheckpoint">, Declspec<"nocheckpoint">];' >> $ATTR_TD
echo '  let Documentation = [Undocumented];' >> $ATTR_TD
echo '}' >> $ATTR_TD

echo 'def Allocator : InheritableAttr {' >> $ATTR_TD
echo '  let Spellings = [GCC<"allocator">, Declspec<"allocator">];' >> $ATTR_TD
echo '  let Documentation = [Undocumented];' >> $ATTR_TD
echo '}' >> $ATTR_TD

# WARNING hard-coded line counts below (4073, 892)
SEMADECLATTR=$LLVM_HOME/tools/clang/lib/Sema/SemaDeclAttr.cpp
cat $SEMADECLATTR | head -n 4073 > $SEMADECLATTR.tmp
echo 'case AttributeList::AT_NoCheckpoint:' >> $SEMADECLATTR.tmp
echo '  handleSimpleAttribute<NoCheckpointAttr>(S, D, Attr);' >> $SEMADECLATTR.tmp
echo '  break;' >> $SEMADECLATTR.tmp
echo 'case AttributeList::AT_Allocator:' >> $SEMADECLATTR.tmp
echo '  handleSimpleAttribute<AllocatorAttr>(S, D, Attr);' >> $SEMADECLATTR.tmp
echo '  break;' >> $SEMADECLATTR.tmp
cat $SEMADECLATTR | tail -n 892 >> $SEMADECLATTR.tmp
mv $SEMADECLATTR.tmp $SEMADECLATTR

# Create installation directory
mkdir -p $LLVM_INSTALL
cd $LLVM_INSTALL && $LLVM_HOME/configure --enable-optimized=no --enable-profiling=no
cd $LLVM_INSTALL && make -j 6

echo Don\'t forget to add \$CHIMES_HOME/src/libchimes and \
         \$CHIMES_HOME/src/libchimes/xxhash to LD_LIBRARY_PATH or \
         DYLD_LIBRARY_PATH
