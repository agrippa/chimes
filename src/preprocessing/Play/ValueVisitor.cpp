#include "ValueVisitor.h"
#include "llvm/IR/InstVisitor.h"

// #define VERBOSE

using namespace llvm;
using namespace std;

static void addMapping(size_t from, size_t to,
        std::map<size_t, size_t> *m);

void ValueVisitor::driver() {

    for (std::vector<Value *>::iterator i = toprocess->begin(),
            e = toprocess->end(); i != e; i++) {
        Value *curr = *i;
        visit(curr, NULL);
    }
}

size_t ValueVisitor::visit(Value *val, Value *prev) {

    std::map<Value *, size_t>::iterator found = value_to_alias_group.find(val);
    if (found != value_to_alias_group.end()) {
        return found->second;
    }

#ifdef VERBOSE
    if (prev == NULL) {
        errs() << "Visiting [" << *val << "] from prev [ NULL ]\n";
    } else {
        errs() << "Visiting [" << *val << "] from prev [ " << *prev << " ]\n";
    }
#endif

    size_t alias = 0;

    if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
        alias = visitGEP(getele, prev);
    } else if (Constant *cons = dyn_cast<Constant>(val)) {
        alias = visitConstant(cons, prev);
    } else if (Instruction *insn = dyn_cast<Instruction>(val)) {
        switch (insn->getOpcode()) {
            case (Instruction::Trunc):
            case (Instruction::ZExt):
            case (Instruction::SExt):
            case (Instruction::FPToUI):
            case (Instruction::FPToSI):
            case (Instruction::UIToFP):
            case (Instruction::SIToFP):
            case (Instruction::FPTrunc):
            case (Instruction::FPExt):
            case (Instruction::PtrToInt):
            case (Instruction::IntToPtr):
            case (Instruction::BitCast):
            case (Instruction::AddrSpaceCast):
                alias = visitCast((CastInst *)val, prev);
                break;
            case (Instruction::Add):
            case (Instruction::FAdd):
            case (Instruction::Sub):
            case (Instruction::FSub):
            case (Instruction::Mul):
            case (Instruction::FMul):
            case (Instruction::UDiv):
            case (Instruction::SDiv):
            case (Instruction::FDiv):
            case (Instruction::URem):
            case (Instruction::SRem):
            case (Instruction::FRem):
            case (Instruction::Shl):
            case (Instruction::LShr):
            case (Instruction::AShr):
            case (Instruction::And):
            case (Instruction::Or):
            case (Instruction::Xor):
                alias = visitBinary((BinaryOperator *)val, prev);
                break;
            case (Instruction::Store):
                alias = visitStore((StoreInst *)val, prev);
                break;
            case (Instruction::Load):
                alias = visitLoad((LoadInst *)val, prev);
                break;
            case (Instruction::Ret):
                alias = visitReturn((ReturnInst *)val, prev);
                break;
            case (Instruction::Call):
                alias = visitCall((CallInst *)val, prev);
                break;
            case (Instruction::PHI):
                alias = visitPhi((PHINode *)val, prev);
                break;
            case (Instruction::ExtractValue):
                alias = visitExtractValue((ExtractValueInst *)val, prev);
                break;
            case (Instruction::LandingPad):
                alias = visitLandingPad((LandingPadInst *)val, prev);
                break;
            case (Instruction::Select):
                alias = visitSelect((SelectInst *)val, prev);
                break;
            case (Instruction::ICmp):
            case (Instruction::FCmp):
                alias = 0;
                break;
            default:
                errs() << "Unsupported " << *val << "\n";
                assert(false);
        }
    } else {
        errs() << "Unsupported " << *val << "\n";
        assert(false);
    }

    // if (CastInst *cast = dyn_cast<CastInst>(val)) {
    //     alias = visitCast(cast, prev);
    // } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
    //     alias = visitGEP(getele, prev);
    // } else if (StoreInst *store = dyn_cast<StoreInst>(val)) {
    //     alias = visitStore(store, prev);
    // } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
    //     alias = visitLoad(load, prev);
    // } else if (ReturnInst *ret = dyn_cast<ReturnInst>(val)) {
    //     alias = visitReturn(ret, prev);
    // } else if (CallInst *call = dyn_cast<CallInst>(val)) {
    //     alias = visitCall(call, prev);
    // } else if (BinaryOperator *bin = dyn_cast<BinaryOperator>(val)) {
    //     alias = visitBinary(bin, prev);
    // } else if (Constant *cons = dyn_cast<Constant>(val)) {
    //     alias = visitConstant(cons, prev);
    // } else if (PHINode *phi = dyn_cast<PHINode>(val)) {
    //     alias = visitPhi(phi, prev);
    // } else if (ExtractValueInst *ex = dyn_cast<ExtractValueInst>(val)) {
    //     alias = visitExtractValue(ex, prev);
    // } else if (LandingPadInst *land = dyn_cast<LandingPadInst>(val)) {
    //     alias = visitLandingPad(land, prev);
    // } else if (SelectInst *slct = dyn_cast<SelectInst>(val)) {
    //     alias = visitSelect(slct, prev);
    // } else if (isa<CmpInst>(val)) {
    //     // A compare instruction always simply returns a boolean value
    //     alias = 0;
    // } else {
    //     errs() << "Unsupported " << *val << "\n";
    //     assert(false);
    // }

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
        if (contains->find(loading_from_group) != contains->end()) {
            loading_into_group = contains->at(loading_from_group);
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
    if (!cast->getSrcTy()->isPointerTy()) {
        // Casting from something that isn't a pointer (e.g. 0x0)
        return -1;
    }

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

#ifdef VERBOSE
        errs() << "Storing " << storing_hash << " in " << dst_hash << " for " <<
            *store << "\n";
#endif

        if (contains->find(dst_hash) != contains->end()) {
            size_t dst_hash_contains = contains->at(dst_hash);
            mergeAliasGroups(storing_hash, dst_hash_contains);

            // if (storing_hash == dst_hash) {
                storing_hash = dst_hash_contains;
            // } else {
            //     storing_hash = contains[dst_hash];
            // }
        } else {
            assert(storing_hash > 0);
            storesReferencesToGroup(dst_hash, storing_hash);
        }
    }

    return 0;
}

size_t ValueVisitor::visitLoad(LoadInst *load, Value *prev) {
    size_t loading_from_group = visit(load->getPointerOperand(), load);

    if (load->getType()->isPointerTy()) {
        size_t loading_into_group;
        if (contains->find(loading_from_group) != contains->end()) {
            loading_into_group = contains->at(loading_from_group);
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
        if (value_to_alias_group.at(val) != alias) {
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
        bool success = value_to_alias_group.insert(pair<Value *, size_t>(
                        val, alias)).second;
        assert(success);
        return true;
    }
}

#ifdef VERBOSE
static std::string map_to_string(std::map<size_t, size_t> *m) {
    std::stringstream stream;
    stream << "{  \n";
    for (std::map<size_t, size_t>::iterator i = m->begin(),
            e = m->end(); i != e; i++) {
        stream << "  " << i->first << " -> " << i->second << "\n";
    }
    return stream.str();
}
#endif

void ValueVisitor::collectMerges(size_t from, size_t to,
        set<pair<size_t, size_t> > *to_merge) {
    pair<size_t, size_t> curr(from, to);
    if (to_merge->find(curr) != to_merge->end()) {
        return;
    }

    to_merge->insert(curr);

    if (contains->find(to) != contains->end() &&
            contains->find(from) != contains->end() &&
            contains->at(from) != contains->at(to)) {
        collectMerges(contains->at(from), contains->at(to), to_merge);
    }
}

class GroupPlaceholder {
    public:
        GroupPlaceholder(size_t set_to, map<size_t,
                GroupPlaceholder *> *set_new_groups) : to(set_to),
                new_groups(set_new_groups) {
            members.insert(set_to);
        }
        void add_member(size_t add) { members.insert(add); }
        void update_to(size_t new_to) { add_member(new_to); to = new_to; }
        void add_contains(GroupPlaceholder *child) {
            for (set<size_t>::iterator i = child->mem_begin(),
                    e = child->mem_end(); i != e; i++) {
                contains.insert(*i);
            }
        }

        void update_contains() {
            resolved_contains.clear();
            for (set<size_t>::iterator i = contains.begin(), e = contains.end();
                    i != e; i++) {
                size_t group = *i;
                if (new_groups->find(group) != new_groups->end()) {
                    /*
                     * Because this function is called from a lot of contexts to
                     * ensure we have the most up to date contains info, it's
                     * possible for some groups to be missing from new_groups.
                     * An example would be calling anything that triggers
                     * update_contains before we make the final pass over all
                     * Value to group mappings and add in any that are missing
                     * from the updated groups info. It is up to the calling
                     * context to be sure that this is okay.
                     */
                    resolved_contains.insert(new_groups->at(*i));
                }
            }
        }

        bool has_multiple_children() {
            update_contains();
            return resolved_contains.size() > 1;
        }

        bool is_child_of_itself() {
            update_contains();
            return (resolved_contains.find(this) != resolved_contains.end());
        }

        set<GroupPlaceholder *> *get_contains() {
            update_contains();
            return &resolved_contains;
        }
        size_t get_to() { return to; }

        set<size_t>::iterator mem_begin() { return members.begin(); }
        set<size_t>::iterator mem_end() { return members.end(); }

        set<size_t>::iterator contains_begin() { return contains.begin(); }
        set<size_t>::iterator contains_end() { return contains.end(); }

        void add_all_members(GroupPlaceholder *other) {
            for (set<size_t>::iterator i = other->mem_begin(),
                    e = other->mem_end(); i != e; i++) {
                members.insert(*i);
            }
        }

        void add_all_children(GroupPlaceholder *other) {
            for (set<size_t>::iterator i = other->contains_begin(),
                    e = other->contains_end(); i != e; i++) {
                contains.insert(*i);
            }
        }

    private:
        size_t to;
        set<size_t> members;
        set<size_t> contains;
        set<GroupPlaceholder *> resolved_contains;
        map<size_t, GroupPlaceholder *> *new_groups;
};

void ValueVisitor::mergeAliasGroups(size_t from, size_t to) {
#ifdef VERBOSE
    errs() << "Merging " << from << " into " << to << "\n";
#endif

    // Collect mappings of from->to of alias groups to merge together
    set<pair<size_t, size_t> > to_merge;
    collectMerges(from, to, &to_merge);

#ifdef VERBOSE
    errs() << "Got " << to_merge.size() << " pairs of alias groups to merge\n";
#endif

    // A mapping from the new group name to its placeholder
    map<size_t, GroupPlaceholder *> new_groups;

    // First use to the merge mappings to construct initial new groups
    for (set<pair<size_t, size_t> >::iterator i = to_merge.begin(),
            e = to_merge.end(); i != e; i++) {
        pair<size_t, size_t> curr = *i;
        size_t from = curr.first;
        size_t to = curr.second;

        if (new_groups.find(to) != new_groups.end()) {
            GroupPlaceholder *to_holder = new_groups.at(to);
            // There already exists a group for to that we need to merge into
            if (new_groups.find(from) == new_groups.end()) {
                /*
                 * No mapping for from to merge from, so just insert from into
                 * to's group.
                 */
                to_holder->add_member(from);
                new_groups.insert(pair<size_t, GroupPlaceholder *>(from,
                            to_holder));
            } else {
                /*
                 * Have a from group already, need to merge all of its members
                 * into to.
                 */
                GroupPlaceholder *from_holder = new_groups.at(from);
                for (set<size_t>::iterator mem_iter = from_holder->mem_begin(),
                        mem_end = from_holder->mem_end(); mem_iter != mem_end;
                        mem_iter++) {
                    to_holder->add_member(*mem_iter);
                }
                new_groups.erase(from);
                // delete from_holder;
            }
        } else {
            // There is not to group to merge into
            if (new_groups.find(from) == new_groups.end()) {
                // No from group either
                GroupPlaceholder *new_holder = new GroupPlaceholder(to, &new_groups);
                new_holder->add_member(from);

                new_groups.insert(pair<size_t, GroupPlaceholder *>(to, new_holder));
                new_groups.insert(pair<size_t, GroupPlaceholder *>(from, new_holder));
            } else {
                // There is already a from group, can re-use but update its to
                GroupPlaceholder *from_holder = new_groups.at(from);
                from_holder->update_to(to);
                new_groups.insert(pair<size_t, GroupPlaceholder *>(to, from_holder));
            }
        }
    }

#ifdef VERBOSE
    errs() << "After creation of placeholder groups, " << new_groups.size() <<
        " unique groups left\n";
#endif

    /*
     * Add in the representation of any groups we're missing so that all are
     * represented uniformly.
     */
    for (std::map<Value *, size_t>::iterator i = value_to_alias_group.begin(),
            e = value_to_alias_group.end(); i != e; i++) {
        if (new_groups.find(i->second) == new_groups.end()) {
            new_groups.insert(pair<size_t, GroupPlaceholder *>(i->second,
                        new GroupPlaceholder(i->second, &new_groups)));
        }
    }

#ifdef VERBOSE
    errs() << "After adding all group aliases, now have " <<
        new_groups.size() << " placeholders\n";
#endif

    /*
     * Use contains and the new_groups mapping to merge groups together that are
     * contained by the same thing.
     */
    for (map<size_t, size_t>::iterator contains_iter = contains->begin(),
            contains_end = contains->end(); contains_iter != contains_end;
            contains_iter++) {
        size_t container = contains_iter->first;
        size_t containee = contains_iter->second;

        GroupPlaceholder *container_holder = new_groups.at(container);
        GroupPlaceholder *containee_holder = new_groups.at(containee);
        container_holder->add_contains(containee_holder);
    }

    bool change;
    do {
        change = false;
        GroupPlaceholder *new_place_holder = NULL;

        for (map<size_t, GroupPlaceholder *>::iterator i = new_groups.begin(),
                e = new_groups.end(); i != e; i++) {
            GroupPlaceholder *placeholder = i->second;
            set<GroupPlaceholder *> *resolved_children = placeholder->get_contains();

#ifdef VERBOSE
                errs() << "Placeholder " << placeholder->get_to() << " has " <<
                    resolved_children->size() <<
                    " children.\n";
#endif

            if (resolved_children->size() > 1) {

                bool child_of_itself = (resolved_children->find(placeholder) !=
                        resolved_children->end());
#ifdef VERBOSE
                errs() << "  child of itself? " << child_of_itself << "\n";
#endif

                size_t merge_to;
                if (child_of_itself) {
                    merge_to = placeholder->get_to();
                } else {
                    merge_to = (*(resolved_children->begin()))->get_to();
                }

#ifdef VERBOSE
                errs() << "  merge_to=" << merge_to << "\n";
#endif

                GroupPlaceholder *merged = new GroupPlaceholder(merge_to, &new_groups);
                for (set<GroupPlaceholder *>::iterator ii = resolved_children->begin(),
                        ee = resolved_children->end(); ii != ee; ii++) {
                    GroupPlaceholder *merging = *ii;

                    merged->add_all_members(merging);
                    merged->add_all_children(merging);
                    // delete merging;
                }
#ifdef VERBOSE
                errs() << "  merged all into merging\n";
#endif

                new_place_holder = merged;
                break;
            }
        }

        if (new_place_holder) {
            for (set<size_t>::iterator ii = new_place_holder->mem_begin(),
                    ee = new_place_holder->mem_end(); ii != ee; ii++) {
                map<size_t, GroupPlaceholder *>::iterator found = new_groups.find(*ii);
                assert(found != new_groups.end());
                found->second = new_place_holder;
            }
            change = true;
        }

    } while (change);

#ifdef VERBOSE
    errs() << "Original contains=\n" << map_to_string(contains) << "\n";
#endif

    /*
     * Update all contains information at the very end and verify that only one
     * child exists for each.
     */
    map<size_t, size_t> *new_contains = new map<size_t, size_t>();
    for (map<size_t, GroupPlaceholder *>::iterator i = new_groups.begin(),
            e = new_groups.end(); i != e; i++) {
        GroupPlaceholder *curr = i->second;

        set<GroupPlaceholder *> *curr_contains = curr->get_contains();
        if (curr_contains->size() > 1) {
            fprintf(stderr, "Expected only one child but got %lu\n",
                    curr_contains->size());
            exit(1);
        }

        if (curr_contains->size() == 1) {
            GroupPlaceholder *child = *(curr_contains->begin());
            if (new_contains->find(curr->get_to()) != new_contains->end()) {
                // Verify the existing contains mapping maps the one we expect
                assert(new_contains->at(curr->get_to()) == child->get_to());
            } else {
                // Insert a contains mapping
                new_contains->insert(pair<size_t, size_t>(curr->get_to(),
                            child->get_to()));
            }
        }
    }

    // delete contains;
    contains = new_contains;

#ifdef VERBOSE
    errs() << "New contains=\n" << map_to_string(contains) << "\n";
#endif

    // Finally, update the Value * to group mappings
    for (std::map<Value *, size_t>::iterator i = value_to_alias_group.begin(),
            e = value_to_alias_group.end(); i != e; i++) {
        size_t curr_group = i->second;
        GroupPlaceholder *new_group = new_groups.at(curr_group);
        i->second = new_group->get_to();
    }
}

void ValueVisitor::storesReferencesToGroup(size_t container, size_t child) {
    addMapping(container, child, contains);
}

static void addMapping(size_t from, size_t to,
        std::map<size_t, size_t> *m) {
    if (m->find(from) == m->end()) {
        m->insert(std::pair<size_t, size_t>(from, to));
    } else {
        assert(m->at(from) == to);
    }
}

