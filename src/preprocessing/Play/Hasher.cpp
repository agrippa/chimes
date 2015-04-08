#include "Hasher.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

size_t Hasher::add(Value *val) {
    assert(hashes.find(val) == hashes.end());
    hashes[val] = counter++;
    return get(val);
}

size_t Hasher::get(Value *val) {
    if (hashes.find(val) == hashes.end()) {
        if (isa<Constant>(val)) {
            add(val);
        } else {
            std::string type;
            if (isa<Instruction>(val)) {
                type = "instruction";
            } else if (isa<Function>(val)) {
                type = "function";
            } else if (isa<Argument>(val)) {
                type = "argument";
            } else if (isa<GlobalValue>(val)) {
                type = "global";
            } else {
                type = "unknown";
            }
            errs() << "Missing hash of a (" << type << ") - \"" << *val << "\"\n";
            assert(false);
        }
    }
    return hashes[val];
}
