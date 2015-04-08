#ifndef HASHER_H
#define HASHER_H

#include <map>
#include "llvm/IR/Value.h"

using namespace llvm;

class Hasher {
    public:
        size_t add(Value *val);
        size_t get(Value *val);

    private:
        std::map<Value *, size_t> hashes;
        size_t counter = 1; // alias of 0 represents an invalid value
};

#endif
