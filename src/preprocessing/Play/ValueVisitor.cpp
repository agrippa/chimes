#include "ValueVisitor.h"

// #define VERBOSE

using namespace llvm;

static void addMapping(size_t from, size_t to,
        std::map<size_t, size_t> &m);

void ValueVisitor::driver() {

    for (std::vector<Value *>::iterator i = toprocess->begin(),
            e = toprocess->end(); i != e; i++) {
        Value *curr = *i;
        visit(curr, NULL);
    }
}

size_t ValueVisitor::visit(Value *val, Value *prev) {
#ifdef VERBOSE
    if (prev == NULL) {
        errs() << "Visiting [" << *val << "] from prev [ NULL ]\n";
    } else {
        errs() << "Visiting [" << *val << "] from prev [ " << *prev << " ]\n";
    }
#endif

    if (value_to_alias_group.find(val) != value_to_alias_group.end()) {
        return value_to_alias_group[val];
    }

    size_t alias = 0;
    if (CastInst *cast = dyn_cast<CastInst>(val)) {
        alias = visitCast(cast, prev);
    } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
        alias = visitGEP(getele, prev);
    } else if (StoreInst *store = dyn_cast<StoreInst>(val)) {
        alias = visitStore(store, prev);
    } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
        alias = visitLoad(load, prev);
    } else if (ReturnInst *ret = dyn_cast<ReturnInst>(val)) {
        alias = visitReturn(ret, prev);
    } else if (CallInst *call = dyn_cast<CallInst>(val)) {
        alias = visitCall(call, prev);
    } else if (BinaryOperator *bin = dyn_cast<BinaryOperator>(val)) {
        alias = visitBinary(bin, prev);
    } else if (Constant *cons = dyn_cast<Constant>(val)) {
        alias = visitConstant(cons, prev);
    } else if (PHINode *phi = dyn_cast<PHINode>(val)) {
        alias = visitPhi(phi, prev);
    } else if (ExtractValueInst *ex = dyn_cast<ExtractValueInst>(val)) {
        alias = visitExtractValue(ex, prev);
    } else if (LandingPadInst *land = dyn_cast<LandingPadInst>(val)) {
        alias = visitLandingPad(land, prev);
    } else if (SelectInst *slct = dyn_cast<SelectInst>(val)) {
        alias = visitSelect(slct, prev);
    } else if (isa<CmpInst>(val)) {
        // A compare instruction always simply returns a boolean value
        alias = 0;
    } else {
        errs() << "Unsupported " << *val << "\n";
        assert(false);
    }

    if (alias > 0) {
        setAlias(val, prev, alias);
    }

    return alias;
}

size_t ValueVisitor::visitLandingPad(LandingPadInst *land, Value *prev) {
    /*
     * TODO is it possible the exception value passed in is aliased with
     * something? For now, just say no.
     */
    return H->get(land);
}

size_t ValueVisitor::visitExtractValue(ExtractValueInst *ex, Value *prev) {
    // If loading a field from a struct/array that has a pointer type
    if (ex->getType()->isPointerTy()) {
        /*
         * TODO For now, we conservatively assume that any pointer loaded from
         * an aggregate type is the same as any other pointer loaded from the
         * same aggregate type. This simplifies the analysis, and makes it
         * similar to how we treat LD/ST operations.
         */
        Value *agg = ex->getAggregateOperand();
        size_t loading_from_group = visit(agg, ex);
        size_t loading_into_group;
        if (contains.find(loading_from_group) != contains.end()) {
            loading_into_group = contains[loading_from_group];
        } else {
            loading_into_group = H->get(ex);
        }
        storesReferencesToGroup(loading_from_group, loading_into_group);
        return loading_into_group;
    } else {
        return 0;
    }
}

// Similar to PHI
size_t ValueVisitor::visitSelect(SelectInst *slct, Value *prev) {
    size_t mergeToAlias = 0;

    if (slct->getType()->isPointerTy()) {
        mergeToAlias = visit(slct->getTrueValue(), slct);
        mergeAliasGroups(visit(slct->getFalseValue(), slct), mergeToAlias);
    }

    return mergeToAlias;
}

size_t ValueVisitor::visitPhi(PHINode *phi, Value *prev) {
    size_t mergeToAlias = 0;
    bool aliasSet = false;

    for (unsigned int i = 0; i < phi->getNumIncomingValues(); i++) {
        Value *parent = phi->getIncomingValue(i);
        size_t alias = visit(parent, phi);

        if (!aliasSet) {
            mergeToAlias = alias;
            aliasSet = true;
        } else {
            mergeAliasGroups(alias, mergeToAlias);
        }
    }

    return mergeToAlias;
}

size_t ValueVisitor::visitConstant(Constant *cons, Value *prev) {
    return H->get(cons);
}

size_t ValueVisitor::visitBinary(BinaryOperator *bin, Value *prev) {
    assert(prev != NULL);
    assert(bin->getType()->isPointerTy());

    /*
     * If we're either coming up or our pointer operator is setting us, set
     * the alias
     */
    assert(bin->getNumOperands() == 2);
    Value *op1 = bin->getOperand(0);
    Value *op2 = bin->getOperand(1);
    bool op1_pointer = op1->getType()->isPointerTy();
    bool op2_pointer = op2->getType()->isPointerTy();
    assert(!(op1_pointer && op2_pointer));
    assert(op1_pointer || op2_pointer);

    if (op1_pointer) {
        return visit(op1, bin);
    } else {
        return visit(op2, bin);
    }
}

size_t ValueVisitor::visitCast(CastInst *cast, Value *prev) {
    assert(cast->getDestTy()->isPointerTy());
    assert(cast->getSrcTy()->isPointerTy());

    assert(cast->getNumOperands() == 1);
    return visit(cast->getOperand(0), cast);
}

size_t ValueVisitor::visitGEP(GEPOperator *getele, Value *prev) {
    return visit(getele->getPointerOperand(), getele);
}

size_t ValueVisitor::visitStore(StoreInst *store, Value *prev) {
    /*
     * Store is a special case. We'll never hit one during normal traversal
     * because it doesn't produce any data. However, we want to mark its inputs.
     */
    assert(prev == NULL);

    Value *dst = store->getPointerOperand();
    Value *storing = store->getValueOperand();
    Type *dst_type = dst->getType();
    assert(dst_type->isPointerTy());

    size_t dst_hash = visit(dst, store);
    assert(dst_hash > 0);

    if (storing->getType()->isPointerTy()) {
        size_t storing_hash = visit(storing, store);

        if (contains.find(dst_hash) != contains.end()) {
            mergeAliasGroups(storing_hash, contains[dst_hash]);
            storing_hash = contains[dst_hash];
        }
        storesReferencesToGroup(dst_hash, storing_hash);
        assert(storing_hash > 0);
    }

    return 0;
}

size_t ValueVisitor::visitLoad(LoadInst *load, Value *prev) {
    size_t loading_from_group = visit(load->getPointerOperand(), load);

    if (load->getType()->isPointerTy()) {
        size_t loading_into_group;
        if (contains.find(loading_from_group) != contains.end()) {
            loading_into_group = contains[loading_from_group];
        } else {
            loading_into_group = H->get(load);
        }
        storesReferencesToGroup(loading_from_group, loading_into_group);
        return loading_into_group;
    } else {
        return 0;
    }
}

size_t ValueVisitor::visitReturn(ReturnInst *ret, Value *prev) {
    assert(prev == NULL);
    assert(ret->getReturnValue()->getType()->isPointerTy());
    /*
     * Nothing to do, our parent has marked us and it would be pointless to go
     * back and mark them.
     */
    return visit(ret->getReturnValue(), ret);
}

size_t ValueVisitor::visitCall(CallInst *call, Value *prev) {

    for (unsigned i = 0; i < call->getNumArgOperands(); i++) {
        Value *arg = call->getArgOperand(i);

        if (arg->getType()->isPointerTy()) {
            visit(arg, call);
        }
    }

    if (call->getCalledFunction() &&
            call->getCalledFunction()->getReturnType()->isPointerTy()) {
        return H->get(call);
    } else {
        return 0;
    }
}

bool ValueVisitor::setAlias(Value *val, Value *setter, size_t alias) {
    assert(alias > 0);

    if (value_to_alias_group.find(val) != value_to_alias_group.end()) {
        if (value_to_alias_group[val] != alias) {
#ifdef VERBOSE
            if (setter) {
                errs() << "Mismatch in aliases on [" << *val <<
                    "], coming from [" << *setter << "], was " <<
                    value_to_alias_group[val] << " but is now being set to " <<
                    alias << "\n";
            } else {
                errs() << "Mismatch in aliases on [" << *val <<
                    "], coming from [NULL], was " <<
                    value_to_alias_group[val] << " but is now being set to " <<
                    alias << "\n";
            }
#endif
            mergeAliasGroups(alias, value_to_alias_group[val]);
        } else {
#ifdef VERBOSE
            errs() << "Duplicate set on [" << *val << "] to alias " << alias << "\n";
#endif
        }
        return false;
    } else {
#ifdef VERBOSE
        if (setter) {
            errs() << "Setting alias of [" << *val << "] to " << alias <<
                ", setter=[" << *setter << "]\n";
        } else {
            errs() << "Setting alias of [" << *val << "] to " << alias <<
                ", setter=[NULL]\n";
        }
#endif
        value_to_alias_group[val] = alias;
        return true;
    }
}

static std::map<size_t, size_t> translate(
        std::map<size_t, size_t> m, size_t from, size_t to) {
    std::map<size_t, size_t> new_m;

    for (std::map<size_t, size_t>::iterator i = m.begin(),
            e = m.end(); i != e; i++) {
        size_t curr;
        if (i->first == from) {
            curr = to;
        } else {
            curr = i->first;
        }

        if (i->second == from) {
            new_m[curr] = to;
        } else {
            new_m[curr] = i->second;
        }
    }
    return new_m;
}

void ValueVisitor::mergeAliasGroups(size_t from, size_t to) {
#ifdef VERBOSE
    errs() << "Merging " << from << " into " << to << "\n";
#endif

    for (std::map<Value *, size_t>::iterator i = value_to_alias_group.begin(),
            e = value_to_alias_group.end(); i != e; i++) {
        if (i->second == from) {
            i->second = to;
        }
    }

    contains = translate(contains, from, to);
}

void ValueVisitor::storesReferencesToGroup(size_t container, size_t child) {
    addMapping(container, child, contains);
}

static void addMapping(size_t from, size_t to,
        std::map<size_t, size_t> &m) {
    assert(m.find(from) == m.end() || m[from] == to);
    m[from] = to;
}

