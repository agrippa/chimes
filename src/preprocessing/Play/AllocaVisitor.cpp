#include "AllocaVisitor.h"

// #define VERBOSE

using namespace llvm;

void AllocaVisitor::driver() {

    for (std::vector<AllocaInst *>::iterator i = toprocess->begin(),
            e = toprocess->end(); i != e; i++) {
        curr = *i;

        for (Value::user_iterator ui = curr->user_begin(),
                ue = curr->user_end(); ui != ue; ui++) {
            User *user = *ui;
            Value *val = dyn_cast<Value>(user);
            assert(val);
            visit(val, curr);
        }
    }
}

void AllocaVisitor::visit(Value *val, Value *prev) {
#ifdef VERBOSE
    if (prev == NULL) {
        errs() << "Visiting [" << *val << "] from prev [ NULL ]\n";
    } else {
        errs() << "Visiting [" << *val << "] from prev [ " << *prev << " ]\n";
    }
#endif

    if (visited.find(val) != visited.end()) {
        return;
    }
    visited.insert(val);

    bool cont;
    if (CastInst *cast = dyn_cast<CastInst>(val)) {
        cont = visitCast(cast, prev);
    } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
        cont = visitGEP(getele, prev);
    } else if (StoreInst *store = dyn_cast<StoreInst>(val)) {
        cont = visitStore(store, prev);
    } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
        cont = visitLoad(load, prev);
    } else if (ReturnInst *ret = dyn_cast<ReturnInst>(val)) {
        cont = visitReturn(ret, prev);
    } else if (CallInst *call = dyn_cast<CallInst>(val)) {
        cont = visitCall(call, prev);
    } else if (BinaryOperator *bin = dyn_cast<BinaryOperator>(val)) {
        cont = visitBinary(bin, prev);
    } else if (Constant *cons = dyn_cast<Constant>(val)) {
        cont = visitConstant(cons, prev);
    } else if (PHINode *phi = dyn_cast<PHINode>(val)) {
        cont = visitPhi(phi, prev);
    } else if (ExtractValueInst *ex = dyn_cast<ExtractValueInst>(val)) {
        cont = visitExtractValue(ex, prev);
    } else if (LandingPadInst *land = dyn_cast<LandingPadInst>(val)) {
        cont = visitLandingPad(land, prev);
    } else if (SelectInst *slct = dyn_cast<SelectInst>(val)) {
        cont = visitSelect(slct, prev);
    } else if (CmpInst *cmp = dyn_cast<CmpInst>(val)) {
        visitCmp(cmp, prev);
    } else {
        errs() << "Unsupported " << *val << "\n";
        assert(false);
    }

    if (cont) {
        for (Value::user_iterator ui = val->user_begin(),
                ue = val->user_end(); ui != ue; ui++) {
            User *user = *ui;
            Value *child = dyn_cast<Value>(user);
            assert(child);
            visit(child, val);
        }
    }
}

bool AllocaVisitor::visitLandingPad(LandingPadInst *land, Value *prev) {
    assert(false);
}

bool AllocaVisitor::visitExtractValue(ExtractValueInst *ex, Value *prev) {
    // If loading a field from a struct/array that has a pointer type
    if (ex->getType()->isPointerTy()) {
        return (true);
    } else {
        return (false);
    }
}

// Similar to PHI
bool AllocaVisitor::visitSelect(SelectInst *slct, Value *prev) {
    return (true);
}

bool AllocaVisitor::visitPhi(PHINode *phi, Value *prev) {
    return (true);
}

bool AllocaVisitor::visitConstant(Constant *cons, Value *prev) {
    assert(false);
}

bool AllocaVisitor::visitBinary(BinaryOperator *bin, Value *prev) {
    assert(bin->getType()->isPointerTy());
    return (true);
}

bool AllocaVisitor::visitCast(CastInst *cast, Value *prev) {
    assert(cast->getDestTy()->isPointerTy());
    assert(cast->getSrcTy()->isPointerTy());
    assert(cast->getNumOperands() == 1);
    return (true);
}

bool AllocaVisitor::visitGEP(GEPOperator *getele, Value *prev) {
    return (true);
}

bool AllocaVisitor::visitStore(StoreInst *store, Value *prev) {
    if (store->getPointerOperand() == prev) {
        stores[curr].insert(store);
    } else {
        assert(store->getValueOperand() == prev);
        unsolvable[curr] = true;
    }
    return (false);
}

bool AllocaVisitor::visitLoad(LoadInst *load, Value *prev) {
    assert(load->getPointerOperand() == prev);
    loads[curr].insert(load);
    return (false);
}

bool AllocaVisitor::visitReturn(ReturnInst *ret, Value *prev) {
    return (false);
}

bool AllocaVisitor::visitCall(CallInst *call, Value *prev) {

    for (unsigned i = 0; i < call->getNumArgOperands(); i++) {
        Value *arg = call->getArgOperand(i);
        if (arg == prev) {
            unsolvable[curr] = true;
        }
    }
    return (false);
}
