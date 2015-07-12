#ifndef ALLOCA_VISITOR_H
#define ALLOCA_VISITOR_H

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
#include "Play.h"

#include <stdio.h>
#include <set>
#include <sstream>
#include <functional>
#include <cxxabi.h>

using namespace llvm;

class AllocaVisitor {
    public:
        AllocaVisitor(std::vector<AllocaInst *> *initial_insns, struct Play *set_mainPlugin) {
            toprocess = initial_insns;
            mainPlugin = set_mainPlugin;

            for (std::vector<AllocaInst *>::iterator i = toprocess->begin(),
                    e = toprocess->end(); i != e; i++) {
                AllocaInst *curr = *i;
                assert(unsolvable.find(curr) == unsolvable.end() &&
                        stores.find(curr) == stores.end() &&
                        loads.find(curr) == loads.end());
                unsolvable[curr] = false;
                stores[curr] = std::set<StoreInst *>();
                loads[curr] = std::set<LoadInst *>();
            }
        }

        void driver();

        bool is_unsolvable(AllocaInst *v) {
            assert(unsolvable.find(v) != unsolvable.end());
            return (unsolvable[v]);
        }

        std::set<StoreInst *> *get_stores(AllocaInst *v) {
            assert(stores.find(v) != stores.end());
            return &stores[v];
        }

        std::set<LoadInst *> *get_loads(AllocaInst *v) {
            assert(loads.find(v) != loads.end());
            return &loads[v];
        }

    private:

        void visit(Value *val, Value *prev);
        bool visitCast(CastInst *cast, Value *prev);
        bool visitGEP(GEPOperator *getele, Value *prev);
        bool visitStore(StoreInst *store, Value *prev);
        bool visitLoad(LoadInst *load, Value *prev);
        bool visitReturn(ReturnInst *ret, Value *prev);
        bool visitAlloca(AllocaInst *alloca, Value *prev);
        bool visitCall(CallInst *call, Value *prev);
        bool visitArgument(Argument *arg, Value *prev);
        bool visitGlobal(GlobalValue *global, Value *prev);
        bool visitCmp(CmpInst *cmp, Value *prev);
        bool visitBinary(BinaryOperator *bin, Value *prev);
        bool visitConstant(Constant *cons, Value *prev);
        bool visitPhi(PHINode *phi, Value *prev);
        bool visitExtractValue(ExtractValueInst *ex, Value *prev);
        bool visitLandingPad(LandingPadInst *land, Value *prev);
        bool visitSelect(SelectInst *slct, Value *prev);

        std::map<AllocaInst *, bool> unsolvable;
        std::map<AllocaInst *, std::set<StoreInst *> > stores;
        std::map<AllocaInst *, std::set<LoadInst *> > loads;
        std::vector<AllocaInst *> *toprocess;
        std::set<Value *> visited;

        AllocaInst *curr;
        struct Play *mainPlugin;
};

#endif
