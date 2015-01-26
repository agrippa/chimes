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

using namespace llvm;

// #define VERBOSE

namespace {

    typedef struct _SimpleLoc {
        std::string *filename;
        int line_no;
        int col;
    } SimpleLoc;

    typedef struct _GroupsModifiedAtLine {
        SimpleLoc loc;
        std::set<int> *groups;
    } GroupsModifiedAtLine;

    typedef struct _StackAllocInfo {
        std::string *varname;
        int type_size_in_bits;
        AllocaInst *alloca;
        BasicBlock *parent;
        std::vector<Instruction *> users;

        bool is_ptr;
        bool is_struct;
        std::string struct_type_name;
        std::vector<std::string> *struct_ptr_field_names;

        std::string full_type_name;

        std::string *filename;
    } StackAllocInfo;

    typedef struct _CallInfo {
        Function *caller;
        std::vector<Value *> *passed;
    } CallInfo;

    typedef struct _FunctionInfo {
        Function *func;
        std::vector<Argument *> *arguments;
        std::vector<CallInfo *> *passed;
    } FunctionInfo;

    struct AliasSetGroup {
        std::vector<int> group;

        void addAliasSet(int set);
        void mergeAliasSet(AliasSetGroup *other);
        bool contains(int set);
    };

    struct Play : public ModulePass {
        static char ID;
        std::map<std::string, FunctionInfo *> functions;
        std::map<Value *, int> value_to_alias_group;
        std::vector<AliasSetGroup *> alias_groups;
        int ngroups;
        std::vector<GroupsModifiedAtLine *> line_to_groups_modified;
        std::map<std::string, SimpleLoc *> *function_to_start_line = NULL;
        std::map<std::string, std::string> *function_to_demangled = NULL;
        std::map<Function *, bool> can_call_checkpoint;

        explicit Play(): ModulePass(ID) {
            // errs() << "Initializing Play\n";
        }

        bool runOnModule(Module &M) override;

        void getAnalysisUsage(AnalysisUsage &AU) const override {
            AU.addRequired<AliasAnalysis>();
        }

    private:
        int InitializeAliasGroups(AliasAnalysis *AA);
        void traverse(BasicBlock &curr, std::vector<std::string> visited);
        void gatherCallSites(Module &M);
        void combineAliasSetGroups(int merge_into, int merge_from);
        int searchDownUsesForAliasSetGroup(Value *val);
        int searchDownUsesForAliasSetGroupHelper(Value *val, int nesting,
                std::set<Value *> *visited);
        int searchForValueInKnownAliases(Value *val);
        int iterateOverUses(Value *val, int nesting, std::set<Value *> *visited);
        void mergeAliasGroupsInterprocedurally();
        void printAliasGroupings();
        void unifyAliasGroupings();
        void printValueMappings();
        void collectLineToGroupsMapping(Module &M);
        void printLineToGroupsMapping();
        void collectLineToGroupsMappingInFunction(BasicBlock *bb,
                std::set<BasicBlock *> &visited, std::string filename);
        void unionGroups(int line, int col, std::string filename, std::set<int> *groups);
        void dumpLineToGroupsMappingTo(const char *filename);

        void findStackAllocations(Module &M, const char *output_file,
                const char *struct_info_filename);
        SimpleLoc *findStartingLineForFunction(Function *F, Module &M);
        void findHeapAllocations(Module &M, const char *output_file);
        int searchUpDefsForAliasSetGroup(Value *val, int nesting);
        std::map<std::string, std::vector<std::string>> *getStructFieldNames(
                Module &M);
        void dumpStructInfoToFile(const char *filename, std::map<std::string,
                std::vector<std::string>> *struct_fields);
        bool isCallToCheckpoint(CallInst *call);
        bool callsCheckpoint(Function *F);
        std::string findFilenameContainingBB(BasicBlock &bb, Module &M);
        std::string *get_unique_varname(std::string varname, Function *F,
                std::set<std::string> *found_variables, Module &M);
        std::map<int, std::vector<int> *> *findReachable(Module &M);
    };
}

char Play::ID = 0;
static RegisterPass<Play> X("play", "Play Pass");

static FunctionInfo *createFunctionInfo(Function *F) {
    FunctionInfo *finfo = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    finfo->func = F;
    finfo->arguments = new std::vector<Argument *>();
    finfo->passed = new std::vector<CallInfo *>();

    for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i != e;
            i++) {
        Argument &arg = *i;
        finfo->arguments->push_back(&arg);
    }

    return finfo;
}

static CallInfo *createCallInfo(Function *caller, CallInst *call) {
    CallInfo *callsite = (CallInfo *)malloc(sizeof(CallInfo));
    callsite->caller = caller;
    callsite->passed = new std::vector<Value *>();

    for (unsigned int i = 0; i < call->getNumArgOperands(); i++) {
        Value *arg = call->getArgOperand(i);
        callsite->passed->push_back(arg);
    }

    return callsite;
}

void AliasSetGroup::addAliasSet(int set) {
    assert(std::find(group.begin(), group.end(), set) == group.end());
    group.push_back(set);
}

void AliasSetGroup::mergeAliasSet(AliasSetGroup *other) {
    for (std::vector<int>::iterator iter = other->group.begin(),
            e = other->group.end(); iter != e; iter++) {
        addAliasSet(*iter);
    }
}

bool AliasSetGroup::contains(int set) {
    return std::find(group.begin(), group.end(), set) != group.end();
}

void Play::combineAliasSetGroups(int merge_into, int merge_from) {
    AliasSetGroup *target = NULL;
    AliasSetGroup *src = NULL;

    for (std::vector<AliasSetGroup *>::iterator iter = alias_groups.begin(),
            e = alias_groups.end(); iter != e; iter++) {
        AliasSetGroup *group = *iter;
        if (group->contains(merge_into)) {
            target = group;
        }
        if (group->contains(merge_from)) {
            src = group;
        }
    }

    assert(target != NULL);
    assert(src != NULL);

    if (target == src) return;

    target->mergeAliasSet(src);
    std::vector<AliasSetGroup *>::iterator to_remove = std::find(
            alias_groups.begin(), alias_groups.end(), src);
    assert(to_remove != alias_groups.end());
    alias_groups.erase(to_remove);
    delete src;
}

void Play::traverse(BasicBlock &curr, std::vector<std::string> visited) {
    TerminatorInst *term = curr.getTerminator();

    visited.push_back(curr.getName().str());

    errs() << "    BB " << curr.getName().str() << " -> ";
    for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        if (i > 0) errs() << ", ";
        errs() << child->getName().str();
    }
    errs() << "\n";

    for (BasicBlock::iterator i = curr.begin(), e = curr.end(); i != e; ++i) {
        Instruction &inst = *i;
        if (CallInst *callInst = dyn_cast<CallInst>(&inst)) {
            Function *callee = callInst->getCalledFunction();
            if (callee) {
                errs() << "      calls " << callee->getName().str() <<
                    " with " << callInst->getNumArgOperands() << " operands\n";

                std::map<std::string, FunctionInfo *>::iterator it =
                    functions.find(callee->getName().str());
                if (it != functions.end()) {
                    FunctionInfo *finfo = it->second;
                    CallInfo *site = createCallInfo(curr.getParent(), callInst);
                    assert(site->passed->size() == finfo->arguments->size());
                    finfo->passed->push_back(site);
                }

                if (strcmp(callee->getName().str().c_str(), "malloc") == 0) {
                    errs() << "        IMPORTANT\n";
                    for (Value::use_iterator use_iter = callInst->use_begin(),
                            e = callInst->use_end(); use_iter != e; use_iter++) {

                        if (Instruction *inst_user = dyn_cast<Instruction>((&*use_iter)->getUser())) {
                            errs() << "        Found a user of " << *callInst <<
                                ": " << *inst_user << "\n";
                        }
                    }
                }
            }
        }
    }

    for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);

        if (std::find(visited.begin(), visited.end(), child->getName().str()) ==
                visited.end()) {
            traverse(*child, visited);
        }
    }
}

void Play::gatherCallSites(Module &M) {
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F == NULL) {
            // errs() << "  Skipping null function...\n";
        } else {
            Function::BasicBlockListType &bblist = F->getBasicBlockList();
            Function::ArgumentListType &arglist = F->getArgumentList();
            errs() << "  Function " << F->getName().str() << ": " <<
                bblist.size()  << " basic blocks and " << arglist.size() <<
                " args\n";
            errs() << "    Takes ";
            for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i != e; i++) {
                Argument &arg = *i;
                if (i != F->arg_begin()) {
                    errs() << ", ";
                }
                errs() << arg.getName() << "(" << *arg.getType() << ")";
            }
            errs() << "\n";

            functions[F->getName().str()] = createFunctionInfo(F);

            if (bblist.size() > 0) {
                std::vector<std::string> visited;
                traverse(F->getEntryBlock(), visited);
            }
        }
    }
}

int Play::searchForValueInKnownAliases(Value *val) {
    for (std::map<Value *, int>::iterator value_iter =
            value_to_alias_group.begin(), value_end =
            value_to_alias_group.end(); value_iter != value_end;
            value_iter++) {
        if (value_iter->first == val) {
            return value_iter->second;
        }
    }

    /*
     * Constants (e.g. const char * passed to printf) are never modified and are
     * auto-loaded by the program. However, not assigning them an alias group
     * leads the application to think it can't find an alias for certain
     * instructions. Instead, we assign a dummy group to these constants which
     * is never referenced.
     */
    if (isa<GlobalValue>(val)) {
#ifdef VERBOSE
        errs() << "Adding " << *val << " as group " << ngroups << "\n";
#endif
        int group = ngroups++;
        value_to_alias_group[val] = group;
        return group;
    }

    return -1;
}

int Play::iterateOverUses(Value *val, int nesting, std::set<Value *> *visited) {
#ifdef VERBOSE
    for (Value::use_iterator use_iter = val->use_begin(),
            use_end = val->use_end(); use_iter != use_end;
            use_iter++) {
        Use& use = *use_iter;
        errs() << "  Has use \"" << *use.getUser() << "\"\n";
    }
#endif

    for (Value::use_iterator use_iter = val->use_begin(),
            use_end = val->use_end(); use_iter != use_end;
            use_iter++) {
        Use& use = *use_iter;

        int foundUse = searchDownUsesForAliasSetGroupHelper(use.getUser(),
                nesting, visited);
        if (foundUse != -1) return foundUse;
    }

    return -1;
}

int Play::searchDownUsesForAliasSetGroup(Value *val) {
    std::set<Value *> visited;
    return searchDownUsesForAliasSetGroupHelper(val, 0, &visited);
}

int Play::searchDownUsesForAliasSetGroupHelper(Value *val, int nesting,
        std::set<Value *> *visited) {
#ifdef VERBOSE
    errs() << "Searching down use chains for group of: \"" << *val << "\"\n";
#endif

    if (visited->find(val) != visited->end()) return -1;
    visited->insert(val);

    if (nesting == 0) {
        int foundThis = searchForValueInKnownAliases(val);
        if (foundThis != -1) {
#ifdef VERBOSE
            errs() << "  Found group for \"" << *val << "\"\n";
#endif
            return foundThis;
        }
    }

    if (StoreInst *store = dyn_cast<StoreInst>(val)) {
#ifdef VERBOSE
        errs() << "  Is a store with pointer \"" << *store->getPointerOperand() << "\"\n";
#endif
        return searchDownUsesForAliasSetGroupHelper(store->getPointerOperand(),
                nesting + 1, visited);
    } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
#ifdef VERBOSE
        errs() << "  Is a load with pointer \"" << *load->getPointerOperand() <<
            "\", nesting=" << nesting << "\n";
#endif
        if (nesting == 1) {
            int found = searchForValueInKnownAliases(val);
#ifdef VERBOSE
            errs() << "    Found group " << found << " for " << *load << "\n";
#endif
            if (found != -1) return found;

            return iterateOverUses(val, nesting - 1, visited);
        } else {
            return searchDownUsesForAliasSetGroupHelper(load->getPointerOperand(),
                    nesting - 1, visited);
        }
    } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
#ifdef VERBOSE
        errs() << "  Is a getelementptr with pointer \"" <<
            *getele->getPointerOperand() << "\"\n";
#endif
        return searchDownUsesForAliasSetGroupHelper(getele->getPointerOperand(),
                nesting, visited);
    } else {
        return iterateOverUses(val, nesting, visited);
    }
    
    return -1;
}

int Play::InitializeAliasGroups(AliasAnalysis *AA) {
    int set_count = 0;
    for (std::map<std::string, FunctionInfo *>::iterator it =
            functions.begin(), e = functions.end(); it != e; it++) {
        std::string funcname = it->first;
        FunctionInfo *info = it->second;

        AliasSetTracker *AST = new AliasSetTracker(*AA);
        for (inst_iterator I = inst_begin(info->func),
                E = inst_end(info->func); I != E; ++I) {
            AST->add(&*I);
        }

        errs() << "Have " << info->passed->size() <<
            " call sites for " << funcname << "\n";
        // Iterate over alias sets within info->func
        for (ilist<AliasSet>::iterator iter = AST->begin(),
                e = AST->end(); iter != e; iter++) {
            AliasSet &set = *iter;
            errs() << "  alias set " << set_count << " -> { ";
            // Iterate over aliases in a single alias set
            for (AliasSet::iterator set_iter = set.begin(), e = set.end(); set_iter != e; set_iter++) {
                Value *val = set_iter->getValue();
                uint64_t size = set_iter->getSize();
                if (set_iter != set.begin()) errs() << ", ";
                errs() << "(" << *val << ", " << size << ")";

                value_to_alias_group[val] = set_count;
            }
            errs() << " }\n";

            AliasSetGroup *group = new AliasSetGroup();
            group->addAliasSet(set_count);
            alias_groups.push_back(group);

            set_count++;
        }
        errs() << "  " << AST->getAliasSets().size() << " alias sets\n";

        delete AST;
    }
    errs() << "\n";

    return set_count;
}

void Play::mergeAliasGroupsInterprocedurally() {
    for (std::map<std::string, FunctionInfo *>::iterator it =
            functions.begin(), e = functions.end(); it != e; it++) {
        FunctionInfo *info = it->second;
        std::vector<Argument *> *arguments = info->arguments;

        for (std::vector<CallInfo *>::iterator call_iter = info->passed->begin(), call_end = info->passed->end(); call_iter != call_end; call_iter++) {
            CallInfo *call = *call_iter;
            assert(call->passed->size() == arguments->size());

            for (unsigned int arg = 0; arg < arguments->size(); arg++) {

                if (!(*arguments)[arg]->getType()->isPointerTy()) continue;

                Argument *arg_in_callee = (*arguments)[arg];
                Value *passed_in_caller = (*call->passed)[arg];

                int callee_group = searchDownUsesForAliasSetGroup(arg_in_callee);
#ifdef VERBOSE
                errs() << "\n";
#endif
                int caller_group = searchDownUsesForAliasSetGroup(passed_in_caller);
#ifdef VERBOSE
                errs() << "\n";
#endif

                assert(caller_group != -1);
                assert(callee_group != -1);

                combineAliasSetGroups(callee_group, caller_group);
            }
        }
    }
}

void Play::printAliasGroupings() {
    errs() << alias_groups.size() << " global alias groups:\n";    
    for (std::vector<AliasSetGroup *>::iterator group_iter =
            alias_groups.begin(), group_end = alias_groups.end();
            group_iter != group_end; group_iter++) {
        AliasSetGroup *group = *group_iter;
        errs() << "  { ";
        for (std::vector<int>::iterator set_iter = group->group.begin(),
                set_end = group->group.end(); set_iter != set_end; set_iter++) {
            if (set_iter != group->group.begin()) errs() << ", ";
            errs() << *set_iter;
        }
        errs() << " } {";

        int first = 1;
        for (std::map<Value *, int>::iterator val_iter =
                value_to_alias_group.begin(), val_end =
                value_to_alias_group.end(); val_iter != val_end; val_iter++) {
            if (std::find(group->group.begin(), group->group.end(),
                        val_iter->second) != group->group.end()) {
                if (!first) {
                    errs() << " |";
                }
                errs() << *val_iter->first;
                first = 0;
            }
        }
        errs() << " }\n";
    }
}

void Play::unifyAliasGroupings() {
    std::map<int, int> mapping;

    int count = 0;
    for (std::vector<AliasSetGroup *>::iterator group_iter =
            alias_groups.begin(), group_end = alias_groups.end();
            group_iter != group_end; group_iter++) {
        AliasSetGroup *group = *group_iter;
        for (std::vector<int>::iterator set_iter = group->group.begin(),
                set_end = group->group.end(); set_iter != set_end; set_iter++) {
            mapping[*set_iter] = count;
        }
        count++;
    }

    std::map<Value *, int> tmp = value_to_alias_group;
    for (std::map<Value *, int>::iterator value_iter =
            value_to_alias_group.begin(), value_end =
            value_to_alias_group.end(); value_iter != value_end;
            value_iter++) {
        value_iter->second = mapping[value_iter->second];
    }
}

void Play::printValueMappings() {
    errs() << "\n" << value_to_alias_group.size() << " values:\n";
    for (std::map<Value *, int>::iterator value_iter =
            value_to_alias_group.begin(), value_end =
            value_to_alias_group.end(); value_iter != value_end;
            value_iter++) {
        errs() << *(value_iter->first) << " -> " << value_iter->second << "\n";
    }
    errs() << "\n";
}

void Play::unionGroups(int line, int col, std::string filename,
        std::set<int> *groups) {

    std::set<int> *existing = NULL;
    for (std::vector<GroupsModifiedAtLine *>::iterator i =
            line_to_groups_modified.begin(), e = line_to_groups_modified.end();
            i != e; i++) {
        GroupsModifiedAtLine *curr = *i;
        if (curr->loc.line_no == line && *(curr->loc.filename) == filename &&
                curr->loc.col == col) {
            existing = curr->groups;
            break;
        }
    }

    if (existing == NULL) {
        GroupsModifiedAtLine *g = (GroupsModifiedAtLine *)malloc(
                sizeof(GroupsModifiedAtLine));
        g->loc.line_no = line;
        g->loc.filename = new std::string(filename);
        g->loc.col = col;
        g->groups = groups;
        line_to_groups_modified.push_back(g);
    } else {
        for (std::set<int>::iterator parent_iter = groups->begin(),
                parent_end = groups->end(); parent_iter != parent_end;
                parent_iter++) {
            existing->insert(*parent_iter);
        }
    }
}

void Play::collectLineToGroupsMappingInFunction(BasicBlock *curr,
        std::set<BasicBlock *>& visited, std::string filename) {
    assert(curr != NULL);

    // Only analyze each basic block once
    if (visited.find(curr) != visited.end()) {
        return;
    }
    visited.insert(curr);

    std::set<int> *groups = new std::set<int>();
    int maxline = -1;
    int maxcol = -1;

    /*
     * For each instruction in this basic block, check if it is a STORE and if
     * so then find the alias group it modifies. Also, find the maximum line in
     * this basic block.
     */
    for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
            inst_iter != inst_end; inst_iter++) {
        Instruction *curr_inst = inst_iter;
        int line = curr_inst->getDebugLoc().getLine();
        if (line != 0 && line > maxline) {
            maxline = line;
            maxcol = curr_inst->getDebugLoc().getCol();
        }

        if (StoreInst *store = dyn_cast<StoreInst>(curr_inst)) {
            assert(value_to_alias_group.find(store->getPointerOperand()) !=
                    value_to_alias_group.end());
            int group = value_to_alias_group[store->getPointerOperand()];
            groups->insert(group);
        } else if (isa<CallInst>(curr_inst) && !isa<IntrinsicInst>(curr_inst)) {
            /*
             * If we hit a call, we need to register the changes made within a
             * basic block so that a callee that calls checkpoint() knows to
             * checkpoint that state.
             */
            assert(maxline != -1);
            if (groups->size() > 0) {
                unionGroups(maxline, maxcol, filename, groups);
                groups = new std::set<int>();
            }
            /*
             * If this call is defined externally and accepts pointers from the
             * calling program, we have to conservatively assume that those
             * pointers are modified and update groups to reflect that here.
             */
            CallInst *call = dyn_cast<CallInst>(curr_inst);
            Function *callee = call->getCalledFunction();
            if (callee == NULL || callee->empty()) {
                for (unsigned int a = 0; a < call->getNumArgOperands(); a++) {
                    Value *toSearch = call->getArgOperand(a);

                    if (toSearch->getType()->isPointerTy()) {
#ifdef VERBOSE
                        errs() << "\nStarting search for alias group of " <<
                            *toSearch << "\n";
#endif
                        int group = searchDownUsesForAliasSetGroup(toSearch);
                        if (group == -1) {
                            group = searchUpDefsForAliasSetGroup(toSearch, 0);
                        }
#ifdef VERBOSE
                        errs() << "Determined " << group << " " << *toSearch <<
                            "\n";
#endif
                        groups->insert(group);
                    }
                }
            }
        }
    }
    assert(maxline != -1);

    TerminatorInst *term = curr->getTerminator();
    if (groups->size() > 0) {
        unionGroups(maxline, maxcol, filename, groups);
    }

    for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        collectLineToGroupsMappingInFunction(child, visited, filename);
    }
}

std::string Play::findFilenameContainingBB(BasicBlock &bb, Module &M) {
    for (BasicBlock::iterator i = bb.begin(), e = bb.end(); i != e;
            ++i) {
        Instruction &inst = *i;
        DebugLoc loc = inst.getDebugLoc();
        if (!loc.isUnknown()) {
            DIScope scope(loc.getScope(M.getContext()));
            if (!scope.getFilename().str().empty()) {
                return scope.getFilename().str();
            }
        }
    }
    assert(false);
}

/*
 * TODO promote alias changes out of basic blocks and to their successors as
 * much as possible.
 */
void Play::collectLineToGroupsMapping(Module& M) {
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        std::set<BasicBlock *> visited;

        // A function may have no basic blocks if it is defined externally
        if (F->getBasicBlockList().size() > 0) {
            BasicBlock& entry = F->getEntryBlock();

            std::string filename = findFilenameContainingBB(entry, M);

            collectLineToGroupsMappingInFunction(&entry, visited, filename);
        }
    }
}

void Play::printLineToGroupsMapping() {
    errs() << "\n" << line_to_groups_modified.size() << " lines:\n";
    for (std::vector<GroupsModifiedAtLine *>::iterator line_iter =
            line_to_groups_modified.begin(), line_end =
            line_to_groups_modified.end(); line_iter != line_end; line_iter++) {
        GroupsModifiedAtLine *curr = *line_iter;
        std::set<int> *groups = curr->groups;

        errs() << " " << *curr->loc.filename << ":" << curr->loc.line_no <<
            ":" << curr->loc.col << " -> { ";

        for (std::set<int>::iterator groups_iter = groups->begin(),
                groups_end = groups->end(); groups_iter != groups_end;
                groups_iter++) {
            if (groups_iter != groups->begin()) errs() << ", ";
            errs() << *groups_iter;
        }
        errs() << " }\n";
    }
}

void Play::dumpLineToGroupsMappingTo(const char *filename) {
    FILE *fp = fopen(filename, "w");

    for (std::vector<GroupsModifiedAtLine *>::iterator line_iter =
            line_to_groups_modified.begin(), line_end =
            line_to_groups_modified.end(); line_iter != line_end; line_iter++) {
        GroupsModifiedAtLine *curr = *line_iter;
        std::set<int> *groups = curr->groups;

        fprintf(fp, "%s:%d:%d : { ", curr->loc.filename->c_str(),
                curr->loc.line_no, curr->loc.col);
        for (std::set<int>::iterator groups_iter = groups->begin(),
                groups_end = groups->end(); groups_iter != groups_end;
                groups_iter++) {
            if (groups_iter != groups->begin()) fprintf(fp, ", ");
            fprintf(fp, "%d", *groups_iter);
        }
        fprintf(fp, " }\n");
    }

    fclose(fp);
}

bool Play::isCallToCheckpoint(CallInst *call) {
    Function *callee = call->getCalledFunction();
    /*
     * Callee may be null in cases where we are calling a function via a
     * function pointer. In these cases, we have to be conservative and don't
     * really know if the calling function is checkpoint() or a function that
     * calls checkpoint.
     *
     * TODO enable this to default to false with an optimization flag set
     */
    if (callee == NULL) return true;
    else return callee->getName().str() == "_Z10checkpointv";
}

bool Play::callsCheckpoint(Function *F) {
    if (can_call_checkpoint.find(F) == can_call_checkpoint.end()) {
        bool done = false;
        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (CallInst *call = dyn_cast<CallInst>(&inst)) {
                    // skip LLVM intrinsics
                    if (dyn_cast<IntrinsicInst>(call)) continue;

                    if (isCallToCheckpoint(call)) {
                        can_call_checkpoint[F] = true;
                        done = true;
                    } else {
                        if (callsCheckpoint(call->getCalledFunction())) {
                            can_call_checkpoint[F] = true;
                            done = true;
                        }
                    }
                }

                if (done) break;
            }
            if (done) break;
        }

        /*
         * If we didn't find that this function either calls checkpoint or calls
         * a function which calls checkpoint, set to false.
         */
        if (can_call_checkpoint.find(F) == can_call_checkpoint.end()) {
            can_call_checkpoint[F] = false;
        }
    }
    assert(can_call_checkpoint.find(F) != can_call_checkpoint.end());
    return can_call_checkpoint[F];
}

SimpleLoc *Play::findStartingLineForFunction(Function *F, Module &M) {
    assert(F != NULL);

    if (function_to_start_line == NULL) {
        function_to_start_line = new std::map<std::string, SimpleLoc *>();
        function_to_demangled = new std::map<std::string, std::string>();

        NamedMDNode *root = NULL;
        for (Module::named_metadata_iterator md_iter = M.named_metadata_begin(),
                md_end = M.named_metadata_end(); md_iter != md_end; md_iter++) {
            NamedMDNode *node = md_iter;
            if (node->getName().str() == "llvm.dbg.cu") {
                root = node;
                break;
            }
        }
        assert(root != NULL);
        assert(root->getNumOperands() == 1);
        MDNode *module_info = root->getOperand(0);
        DICompileUnit module(module_info);
        DIArray functions = module.getSubprograms();
        errs() << "Got " << functions.getNumElements() << "\n";

        for (unsigned int f = 0; f < functions.getNumElements(); f++) {
            DISubprogram di_func(functions.getElement(f));

            std::string fname = di_func.getLinkageName();
            if (fname.empty()) {
                fname = di_func.getDisplayName();
            }
            int line_no = di_func.getLineNumber();
            std::string filename = di_func.getFilename().str();

            assert(function_to_start_line->find(fname) ==
                    function_to_start_line->end());
            SimpleLoc *loc = (SimpleLoc *)malloc(sizeof(SimpleLoc));
            loc->filename = new std::string(filename);
            loc->line_no = line_no;
            (*function_to_start_line)[fname] = loc;

            assert(function_to_demangled->find(di_func.getDisplayName()) ==
                        function_to_demangled->end());
            (*function_to_demangled)[fname] = di_func.getDisplayName();
        }
    }

    assert(function_to_start_line->find(F->getName().str()) !=
            function_to_start_line->end());
    return (*function_to_start_line)[F->getName().str()];
}

std::map<std::string, std::vector<std::string>> *Play::getStructFieldNames(
        Module &M) {
    std::map<std::string, std::vector<std::string>> *struct_fields =
        new std::map<std::string, std::vector<std::string>>();

    // Get struct info
    NamedMDNode *root = NULL;
    for (Module::named_metadata_iterator md_iter = M.named_metadata_begin(),
            md_end = M.named_metadata_end(); md_iter != md_end; md_iter++) {
        NamedMDNode *node = md_iter;
        if (node->getName().str() == "llvm.dbg.cu") {
            root = node;
            break;
        }
    }
    assert(root != NULL);
    assert(root->getNumOperands() == 1);
    MDNode *module_info = root->getOperand(0);
    DICompileUnit module(module_info);
    DIArray structs = module.getRetainedTypes();

    for (unsigned int s = 0; s < structs.getNumElements(); s++) {
        DIType di_struct(structs.getElement(s));

        // If this isn't a struct, skip it
        if (!di_struct.isCompositeType()) continue;

        std::string struct_name = di_struct.getName().str();
        if (struct_name.empty()) {
            // If unnamed, assume it isn't used
            continue;
        }
        std::vector<std::string> fields;

        DICompositeType composite(di_struct);
        DIArray fields_defs = composite.getTypeArray();
        for (unsigned int f = 0; f < fields_defs.getNumElements(); f++) {
            DIType di_field(fields_defs.getElement(f));
            std::string fieldname = di_field.getName().str();
            fields.push_back(fieldname);
        }

        assert(struct_fields->find(struct_name) == struct_fields->end());
        (*struct_fields)[struct_name] = fields;
    }
    return struct_fields;
}

void Play::dumpStructInfoToFile(const char *filename, std::map<std::string,
        std::vector<std::string>> *struct_fields) {
    FILE *fp = fopen(filename, "w");
    for (std::map<std::string, std::vector<std::string>>::iterator struct_iter =
            struct_fields->begin(), struct_end = struct_fields->end();
            struct_iter != struct_end; struct_iter++) {
        std::vector<std::string> fields = struct_iter->second;

        fprintf(fp, "%s ", struct_iter->first.c_str());
        for (std::vector<std::string>::iterator field_iter = fields.begin(),
                field_end = fields.end(); field_iter != field_end;
                field_iter++) {
            fprintf(fp, "%s ", field_iter->c_str());
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

std::string *Play::get_unique_varname(std::string varname, Function *F,
        std::set<std::string> *found_variables, Module &M) {
    std::string fname = F->getName().str();

    std::string *unique_varname = new std::string();
    int permute = 0;

    if (function_to_demangled == NULL || function_to_demangled->find(fname) ==
            function_to_demangled->end()) {
        findStartingLineForFunction(F, M);
    }

    std::string correct_fname = (*function_to_demangled)[fname];
    do {
        std::ostringstream str_stream;
        str_stream << correct_fname << "|" << varname << "|" << permute;
        *unique_varname = str_stream.str();
        permute++;
    } while (found_variables->find(*unique_varname) != found_variables->end());
    found_variables->insert(*unique_varname);

    return unique_varname;
}

/*
 * TODO I don't think this supports stack-allocated arrays yet. Related TODO in
 * libnumdebug.cpp
 */
void Play::findStackAllocations(Module &M, const char *output_file,
        const char *struct_info_filename) {
    FILE *fp = fopen(output_file, "w");
    DataLayout *layout = new DataLayout(&M);
    std::set<std::string> found_variables;

    std::vector<StackAllocInfo *> alloc_infos;

    std::map<std::string, std::vector<std::string>> *structFields =
        getStructFieldNames(M);
    dumpStructInfoToFile(struct_info_filename, structFields);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        // if (!callsCheckpoint(F)) continue;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (AllocaInst *alloca = dyn_cast<AllocaInst>(&inst)) {
                    // int array_size = alloca->getArraySize();
                    std::string varname = alloca->getName().str();
                    uint64_t type_size = layout->getTypeSizeInBits(
                            alloca->getAllocatedType());
                    assert(type_size % 8 == 0); // even number of bytes

                    // auto-generate llvm stack allocation for return values
                    if (strcmp(varname.c_str(), "retval") == 0) {
                        continue;
                    }

                    int is_argument = 0;
                    const char *arg_addr_suffix = ".addr";
                    size_t found = varname.find(arg_addr_suffix);
                    if (found != std::string::npos && found ==
                            varname.length() - strlen(arg_addr_suffix)) {

                        varname = varname.substr(0, varname.length() -
                                strlen(arg_addr_suffix));

                        /*
                         * double check that we can find a matching argument to
                         * this function if we think this stack allocation is
                         * for an argument's address
                         */
                        for (Function::arg_iterator arg_iter = F->arg_begin(),
                                arg_end = F->arg_end(); arg_iter != arg_end;
                                arg_iter++) {
                            Argument *arg = arg_iter;
                            if (arg->getName().str() == varname) {
                                is_argument = 1;
                                break;
                            }
                        }
                        assert(is_argument);
                    }

                    StackAllocInfo *info = new StackAllocInfo();
                    info->type_size_in_bits = type_size;
                    info->alloca = alloca;
                    info->parent = bb;
                    info->is_ptr = 0;
                    info->is_struct = 0;
                    info->struct_ptr_field_names =
                        new std::vector<std::string>();

                    for (Value::use_iterator use_iter = alloca->use_begin(),
                            use_end = alloca->use_end(); use_iter != use_end;
                            use_iter++) {
                        Use *use = &*use_iter;
                        if (Instruction *user = dyn_cast<Instruction>(use->getUser())) {
                            info->users.push_back(user);
                        } else {
                            fprintf(stderr, "User is not an instruction?\n");
                            exit(1);
                        }
                    }

                    /*
                     * Construct a unique variable name based on the containing
                     * function and this local's name.
                     */
                    std::string *unique_varname = get_unique_varname(varname,
                            F, &found_variables, M);

                    info->varname = unique_varname;

                    Type *ty = alloca->getAllocatedType();
                    if (ty->isPointerTy()) {
                        info->is_ptr = 1;
                    } else if (ty->isStructTy()) {
                        StructType *structTy = dyn_cast<StructType>(ty);
                        assert(structTy != NULL);

                        if (!structTy->isLiteral()) {
                            assert(structTy->getStructName().str().find("struct.") == 0);
                            std::string struct_name = structTy->getStructName().str().substr(7);
                            info->is_struct = 1;
                            info->struct_type_name = struct_name;

                            assert(structFields->find(struct_name) != structFields->end());
                            for (unsigned int i = 0; i < structTy->getStructNumElements();
                                    i++) {
                                Type *field_type = structTy->getStructElementType(i);
                                if (field_type->isPointerTy()) {
                                    std::vector<std::string> fields = (*structFields)[struct_name];
                                    std::string fieldname = fields[i];
                                    info->struct_ptr_field_names->push_back(fieldname);
                                }
                            }
                        }
                    }


                    std::string backing_string;
                    raw_string_ostream stream(backing_string);
                    ty->print(stream);
                    info->full_type_name = stream.str();

                    if (info->users.size() > 0) {
                        info->filename = new std::string(
                                findFilenameContainingBB(*bb, M));
                        alloc_infos.push_back(info);
                    } else {
                        /*
                         * Throw away the info we just generated if this is an
                         * unused stack allocation
                         */
                        delete info;
                    }
                }
            }
        }
    }

    /*
     * Find which line in the original source to insert a stack variable
     * registration. LLVM doesn't retain information on what line the actual
     * declaration is on, so we just look for the earliest users in the CFG and
     * mark those lines.
     */
    for (std::vector<StackAllocInfo *>::iterator alloc_iter =
            alloc_infos.begin(), alloc_end = alloc_infos.end();
            alloc_iter != alloc_end; alloc_iter++) {
        StackAllocInfo *info = *alloc_iter;
        std::vector<Instruction *> users = info->users;
        std::vector<std::string> *field_names = info->struct_ptr_field_names;

        fprintf(fp, "%s %s \" %s \" %d %d %d ",
                info->filename->c_str(), info->varname->c_str(),
                info->full_type_name.c_str(), info->type_size_in_bits,
                info->is_ptr, info->is_struct);
        if (info->is_struct) {
            fprintf(fp, "%s ", info->struct_type_name.c_str());
            for (std::vector<std::string>::iterator field_iter =
                    field_names->begin(), field_end = field_names->end();
                    field_iter != field_end; field_iter++) {
                fprintf(fp, "%s ", field_iter->c_str());
            }
        }
        fprintf(fp, "\n");
    }

    delete layout;
    fclose(fp);
}

int Play::searchUpDefsForAliasSetGroup(Value *val, int nesting) {
    if (nesting == 0) {
        int alias_no = searchForValueInKnownAliases(val);
        if (alias_no >= 0) return alias_no;
    }

#ifdef VERBOSE
    errs() << "Searching up defs from " << *val << " nesting=" << nesting <<
        "\n";
#endif

    if (AllocaInst *alloc = dyn_cast<AllocaInst>(val)) {
        std::set<Value *> visited;
        return searchDownUsesForAliasSetGroupHelper(alloc, nesting, &visited);
    } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
        return searchUpDefsForAliasSetGroup(load->getPointerOperand(),
                nesting + 1);
    } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
        return searchUpDefsForAliasSetGroup(getele->getPointerOperand(),
                nesting);
    } else if (dyn_cast<StoreInst>(val)) {
        /*
         * This shouldn't be possible, because store shouldn't be producing any
         * defs. assert(0) here so that if it is possible, we have to debug.
         */
        assert(0);
        return -1;
    } else if (isa<Constant>(val)) {
        return -1;
    } else if (User *user = dyn_cast<User>(val)) {
        /*
         * This isn't true, but assert it for now to get a prototype working so
         * we'll trip it when it actually starts being not true and we'll have
         * to special-case pointer chasing through different instruction types.
         */
        if (BinaryOperator *binop = dyn_cast<BinaryOperator>(user)) {
            if (binop->getOpcode() == Instruction::SRem ||
                    binop->getOpcode() == Instruction::SDiv ||
                    binop->getOpcode() == Instruction::Mul) {
                /*
                 * Taking a remainder of something doesn't have any meaning in
                 * the context of aliases
                 */
                return -1;
            } else if (binop->getOpcode() == Instruction::Add ||
                    binop->getOpcode() == Instruction::Sub) {
                assert(user->getNumOperands() == 2);
                Value *op1 = user->getOperand(0);
                Value *op2 = user->getOperand(1);
                bool op1IsPtr = op1->getType()->isPointerTy();
                bool op2IsPtr = op2->getType()->isPointerTy();
                assert(!(op1IsPtr && op2IsPtr)); // not both pointers

                if (op1IsPtr) {
                    return searchUpDefsForAliasSetGroup(op1, nesting);
                } else if (op2IsPtr) {
                    return searchUpDefsForAliasSetGroup(op2, nesting);
                } else {
                    return -1;
                }
            } else {
                // Unsupported binary operator
                errs() << *binop << "\n";
                assert(false);
            }
        } else if (CallInst *call = dyn_cast<CallInst>(user)) {
            /*
             * TODO for some calls we should be able to collect the alias groups
             * that are returned?
             */
            return -1;
        }

        assert(user->getNumOperands() == 1);
        Value *op = user->getOperand(0);
        return searchUpDefsForAliasSetGroup(op, nesting);
    } else {
        return -1;
    }
}

std::map<int, std::vector<int> *> *Play::findReachable(Module &M) {
    std::map<int, std::vector<int> *> *stores = new std::map<int,
        std::vector<int> *>();

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;

                if (StoreInst *store = dyn_cast<StoreInst>(&inst)) {
                    Value *dst = store->getPointerOperand();
                    Type *dst_type = dst->getType();
                    if (dst_type->isPointerTy()) {
                        Value *storing = store->getValueOperand();

#ifdef VERBOSE
                        errs() << "\nStarting search down for alias group of " <<
                            *storing << "\n";
#endif
                        int storing_group = searchDownUsesForAliasSetGroup(
                                storing);
                        if (storing_group == -1) {
#ifdef VERBOSE
                            errs() << "\nStarting search up for alias group of " <<
                                *storing << "\n";
#endif
                            storing_group = searchUpDefsForAliasSetGroup(
                                    storing, 0);
                        }
#ifdef VERBOSE
                        errs() << "Determined group " << storing_group << "\n\n";
#endif

#ifdef VERBOSE
                        errs() << "\nStarting search down for alias group of " <<
                            *dst << "\n";
#endif
                        int dst_group = searchDownUsesForAliasSetGroup(dst);
                        if (dst_group == -1) {
#ifdef VERBOSE
                            errs() << "\nStarting search up for alias group of " <<
                                *dst << "\n";
#endif
                            dst_group = searchUpDefsForAliasSetGroup(
                                    dst, 0);
                        }
#ifdef VERBOSE
                        errs() << "Determined group " << dst_group << "\n\n";
#endif

                        if (storing_group != -1 && dst_group != -1) {
                            if (stores->find(dst_group) == stores->end()) {
                                (*stores)[dst_group] = new std::vector<int>();
                            }
                            (*stores)[dst_group]->push_back(storing_group);
                        }
                    }
                }
            }
        }
    }
    return stores;
}

void Play::findHeapAllocations(Module &M, const char *output_file) {
    FILE *fp = fopen(output_file, "w");
    std::set<int> found_mallocs;

    std::map<std::string, std::vector<std::string>> *structFields =
        getStructFieldNames(M);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (CallInst *callInst = dyn_cast<CallInst>(&inst)) {
                    Function *callee = callInst->getCalledFunction();
                    if (callee) {

                        if (callee->getName().str() == "malloc" ||
                                callee->getName().str() == "realloc" ||
                                callee->getName().str() == "free") {
                            int line_no = callInst->getDebugLoc().getLine();
                            int col = callInst->getDebugLoc().getCol();
                            assert(line_no != 0);

                            int alias_no;
                            if (callee->getName().str() == "malloc" ||
                                    callee->getName().str() == "realloc") {
                                alias_no = searchDownUsesForAliasSetGroup(
                                        callInst);
                            } else {
                                // free
                                assert(callInst->getNumArgOperands() == 1);
                                alias_no = searchUpDefsForAliasSetGroup(
                                        callInst->getArgOperand(0), 0);
                            }
                            /*
                             * This assert is triggered for variables that are
                             * never used (e.g. an allocation that is never
                             * referenced again). TODO rework to print a warning
                             * or something?
                             */
                            assert(alias_no >= 0);

                            /*
                             * We don't currently support multiple mallocs per
                             * line
                             */
                            assert(found_mallocs.find(line_no) ==
                                    found_mallocs.end());
                            found_mallocs.insert(line_no);

                            fprintf(fp, "%d %d %d %s", line_no, col, alias_no,
                                    callee->getName().str().c_str());
                            /*
                             * For trivial cases of a malloc call that is
                             * immediately cast to its correct type, we add some
                             * extra type info to the heap allocation metrics to
                             * help with replay.
                             */
                            if (callee->getName().str() == "malloc" &&
                                    callInst->getNumUses() == 1) {
                                Use& use = *(callInst->use_begin());
                                User *user = use.getUser();

                                /*
                                 * Look for a CallInst, followed immediately
                                 * (and only) by a CastInst.
                                 */
                                if (CastInst *cast = dyn_cast<CastInst>(user)) {
                                    Type *malloc_type = cast->getType();
                                    assert(malloc_type->isPointerTy());
                                    Type *base_type = malloc_type->getPointerElementType();

                                    if (base_type->isPointerTy()) {
                                        fprintf(fp, " 1 0");
                                    } else if (base_type->isStructTy()) {
                                        StructType *structTy = dyn_cast<StructType>(base_type);
                                        assert(structTy != NULL);

                                        if (!structTy->isLiteral()) {
                                            fprintf(fp, " 0 1");
                                            assert(structTy->getStructName().str().find("struct.") == 0);
                                            std::string struct_name = structTy->getStructName().str().substr(7);
                                            fprintf(fp, " %s", struct_name.c_str());
                                            assert(structFields->find(struct_name) != structFields->end());
                                            std::vector<std::string> fields = (*structFields)[struct_name];
                                            for (unsigned int i = 0; i < structTy->getStructNumElements(); i++) {
                                                Type *field_type = structTy->getStructElementType(i);
                                                if (field_type->isPointerTy()) {
                                                    std::string fieldname = fields[i];
                                                    fprintf(fp, " %s", fieldname.c_str());
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            fprintf(fp, "\n");
                        }
                    }
                }
            }
        }
    }

    errs() << "\nFound " << found_mallocs.size() << " heap allocation(s), " <<
        "reallocation(s), or free(s)\n";

    fclose(fp);
}

/*
 *  CallGraphSCC always has a size of 1 expect for recursive call graphs.
 *  However, we still have the guarantee that we are passed single-element call
 *  graphs (i.e. functions) in reverse depth traversal order.
 */
bool Play::runOnModule(Module &M) {

    /*
     * This first section of code groups values into alias sets, finds all alias
     * sets modified in each basic block, and produces the lines on which calls
     * to metrics collectors should be inserted in the original source code, as
     * well as the alias sets that should be marked by those calls.
     */
    gatherCallSites(M);

    AliasAnalysis *AA = &getAnalysis<AliasAnalysis>();

    ngroups = InitializeAliasGroups(AA);

    mergeAliasGroupsInterprocedurally();

    printAliasGroupings();

    unifyAliasGroupings();

    printValueMappings();

    collectLineToGroupsMapping(M);

    printLineToGroupsMapping();

    dumpLineToGroupsMappingTo("lines.info");

    /*
     * This next region is responsible for finding and marking all stack
     * allocations that use alloca, so that we can save them in the library.
     *
     * In this stage, we mark a number of things to be added in the code. First,
     * we add a callback at the very beginning of everything function that says
     * we're creating a new stack frame. Second, we add a callback at every
     * alloca statement for a stack variable that passes the address of that
     * variable and its name to the backend. Third, at every return statement we
     * add a callback that indicates we are removing a stack frame and any stack
     * variables belonging to it can be ignored now.
     */

    findStackAllocations(M, "stack.info", "struct.info");

    /*
     * Next up: intercept all malloc calls and replace them with a custom
     * wrapper that takes both the usual malloc arguments, plus the alias group
     * this allocation belongs to.
     */

    findHeapAllocations(M, "heap.info");

    errs() << "Storing:\n";
    std::map<int, std::vector<int> *> *stores = findReachable(M);
    for (std::map<int, std::vector<int> *>::iterator i = stores->begin(),
            e = stores->end(); i != e; i++) {
        int dst = i->first;
        std::vector<int> *stores = i->second;
        errs() << "  " << dst << " -> { ";
        for (std::vector<int>::iterator stores_iter = stores->begin(),
                stores_end = stores->end(); stores_iter != stores_end;
                stores_iter++) {
            errs() << *stores_iter << " ";
        }
        errs() << "}\n";
    }

    return false;
}
