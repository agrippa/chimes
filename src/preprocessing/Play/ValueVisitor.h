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

#include "Hasher.h"

#include <stdio.h>
#include <set>
#include <sstream>
#include <functional>
#include <cxxabi.h>

using namespace llvm;

class ValueVisitor {
    public:
        ValueVisitor(std::vector<Value *> *initial_insns,
                std::map<Value *, size_t> *initial_mappings, Module *setM,
                Hasher *setH) {
            M = setM;
            H = setH;

            for (std::map<Value *, size_t>::iterator i =
                    initial_mappings->begin(), e = initial_mappings->end();
                    i != e; i++) {
                Value *val = i->first;
                size_t alias = i->second;
                setAlias(val, NULL, alias);
            }

            toprocess = initial_insns;
            contains = new std::map<size_t, size_t>();
        }

        void add(Value *val, Value *prev, size_t alias, bool downward);
        void driver();

        std::map<size_t, size_t> *get_contains() {
            return contains;
        }
        std::map<Value *, size_t> get_value_to_alias_group() {
            return value_to_alias_group;
        }

    private:
        Module *M;
        Hasher *H;

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
        size_t visitBinary(BinaryOperator *bin, Value *prev);
        size_t visitConstant(Constant *cons, Value *prev);
        size_t visitPhi(PHINode *phi, Value *prev);
        size_t visitExtractValue(ExtractValueInst *ex, Value *prev);
        size_t visitLandingPad(LandingPadInst *land, Value *prev);
        size_t visitSelect(SelectInst *slct, Value *prev);

        void storesReferencesToGroup(size_t container, size_t child);
        size_t searchForValueInKnownAliases(Value *val);
        bool setAlias(Value *val, Value *prev, size_t alias);
        void collectMerges(size_t from, size_t to,
                std::set<std::pair<size_t, size_t> > *to_merge);
        /*
         * Stores a mapping from alias groups to the alias groups that can be
         * directly reached by dereferencing them. For example if you have an
         * int **A that is in alias group 1 and an int *B = *A that is in alias
         * group 2, then contains would map from group 1 to group 2.
         */
        std::map<size_t, size_t> *contains;

        std::map<Value *, size_t> value_to_alias_group;
        std::vector<Value *> *toprocess;
        void mergeAliasGroups(size_t from, size_t to);

        std::hash<std::string> str_hash;
};

#endif
