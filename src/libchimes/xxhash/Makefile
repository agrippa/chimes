GCC=gcc
TARGET=libxxhash.so

all: ${TARGET}

${TARGET}: xxhash.c xxhsum.c xxhash.h
	${GCC} -shared -fPIC -O3 -I. -std=c99 -Wall -Wextra -Wundef -Wshadow \
		-Wcast-align -Wstrict-prototypes xxhash.c xxhsum.c -o ${TARGET}

clean:
	rm -f *.so
