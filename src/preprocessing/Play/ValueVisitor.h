#ifndef VAL_VISITOR_H
#define VAL_VISITOR_H

#include "llvm/Pass.h"
#include "llvm/Analysis/CallGraphSCCPass.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Metadata.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AliasSetTracker.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/DebugInfo.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/Operator.h"

#include <stdio.h>
#include <set>
#include <sstream>
#include <functional>
#include <cxxabi.h>

using namespace llvm;

inline size_t hash(std::string category, std::string parent, std::string tohash,
        size_t seed = 0) {
    std::stringstream ss;
    ss << category << ":" << parent << ":" << tohash;
    std::string s = ss.str();

    size_t hash = seed;
    for (unsigned int i = 0; i < s.size(); i++) {
        hash = hash * 101 + s[i];
    }
    return hash;
}

inline std::string pretty_print(Value *V) {
    std::string s;
    llvm::raw_string_ostream ss(s);
    V->print(ss);
    ss.flush();
    return s;
}

inline size_t hash_landing_pad(LandingPadInst *land) {
    return hash("landingpad", "", pretty_print(land));
}

inline size_t hash_constant(Constant *C) {
    return hash("constant", "", pretty_print(C));
}

inline size_t hash_function(Function *F) {
    return hash("function", "", pretty_print(F));
}

inline size_t hash_argument(Argument *A) {
    return hash("arg", A->getParent()->getName().str(), pretty_print(A));
}

inline size_t hash_global(GlobalValue *G) {
    return hash("global", "", pretty_print(G));
}

inline size_t hash_instruction(Instruction *I) {
    return hash("insn", I->getParent()->getParent()->getName().str(),
            pretty_print(I));
}

class Mark {
    public:
        Mark(Value *set_val, Value *set_prev, size_t set_alias,
                bool set_downward) : val(set_val), prev(set_prev),
                alias(set_alias), downward(set_downward) {}

        Value *get_val() { return val; }
        Value *get_prev() { return prev; }
        size_t get_alias() { return alias; }
        bool get_downward() { return downward; }

        void update_alias(size_t set) { alias = set; }

    private:
        Value *val;
        Value *prev;
        size_t alias;
        bool downward;
};

class ValueVisitor {
    public:
        ValueVisitor(std::vector<Value *> *initial_insns,
                std::map<Value *, size_t> *initial_mappings) {
            for (std::map<Value *, size_t>::iterator i =
                    initial_mappings->begin(), e = initial_mappings->end();
                    i != e; i++) {
                Value *val = i->first;
                size_t alias = i->second;
                setAlias(val, NULL, alias);
            }

            toprocess = initial_insns;
        }

        void add(Value *val, Value *prev, size_t alias, bool downward);
        void driver();

        std::map<size_t, size_t> get_contains() {
            return contains;
        }
        std::map<Value *, size_t> get_value_to_alias_group() {
            return value_to_alias_group;
        }

    private:
        size_t visit(Value *val, Value *prev);
        size_t visitCast(CastInst *cast, Value *prev);
        size_t visitGEP(GEPOperator *getele, Value *prev);
        size_t visitStore(StoreInst *store, Value *prev);
        size_t visitLoad(LoadInst *load, Value *prev);
        size_t visitReturn(ReturnInst *ret, Value *prev);
        size_t visitAlloca(AllocaInst *alloca, Value *prev);
        size_t visitCall(CallInst *call, Value *prev);
        size_t visitArgument(Argument *arg, Value *prev);
        size_t visitGlobal(GlobalValue *global, Value *prev);
        size_t visitCmp(CmpInst *cmp, Value *prev);
        size_t visitBinary(BinaryOperator *bin, Value *prev);
        size_t visitConstant(Constant *cons, Value *prev);
        size_t visitPhi(PHINode *phi, Value *prev);
        size_t visitExtractValue(ExtractValueInst *ex, Value *prev);
        size_t visitLandingPad(LandingPadInst *land, Value *prev);

        void storesReferencesToGroup(size_t container, size_t child);
        size_t searchForValueInKnownAliases(Value *val);
        bool setAlias(Value *val, Value *prev, size_t alias);
        /*
         * Stores a mapping from alias groups to the alias groups that can be
         * directly reached by dereferencing them. For example if you have an
         * int **A that is in alias group 1 and an int *B = *A that is in alias
         * group 2, then contains would map from group 1 to group 2.
         */
        std::map<size_t, size_t> contains;

        std::map<Value *, size_t> value_to_alias_group;
        std::vector<Value *> *toprocess;
        void mergeAliasGroups(size_t from, size_t to);

        std::hash<std::string> str_hash;
};

#endif
