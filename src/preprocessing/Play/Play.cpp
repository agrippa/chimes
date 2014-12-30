#include "llvm/Pass.h"
#include "llvm/Analysis/CallGraphSCCPass.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AliasSetTracker.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/DebugInfo.h"
#include "llvm/IR/IntrinsicInst.h"

#include <stdio.h>
#include <set>
#include <sstream>

using namespace llvm;

// #define VERBOSE

namespace {
    typedef enum {CALLSITE, STACK_REGISTRATION} LocationType;

    typedef struct _SimpleLoc {
        std::string *filename;
        int line_no;
    } SimpleLoc;

    typedef struct _GroupsModifiedAtLine {
        SimpleLoc loc;
        std::set<int> *groups;
    } GroupsModifiedAtLine;

    typedef struct _LabeledLoc {
        LocationType type;
        int line_no;
        std::string *filename;
        int id;
    } LabeledLoc;

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
        std::vector<GroupsModifiedAtLine *> line_to_groups_modified;
        std::map<std::string, int> *function_to_start_line = NULL;
        std::map<Function *, bool> can_call_checkpoint;

        explicit Play(): ModulePass(ID) {
            // errs() << "Initializing Play\n";
        }

        bool runOnModule(Module &M) override;

        void getAnalysisUsage(AnalysisUsage &AU) const override {
            AU.addRequired<AliasAnalysis>();
        }

    private:
        void InitializeAliasGroups(AliasAnalysis *AA);
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
                std::set<BasicBlock *> &visited, std::set<int> *parent_groups,
                std::string filename);
        void unionGroups(int line, std::string filename, std::set<int> *groups);
        void dumpLineToGroupsMappingTo(const char *filename);
        void dumpFunctionStartingLineTo(const char *filename,
                std::map<int, std::string> functions);

        void findStartingLinesForAllFunctions(Module &M,
                const char *output_file);
        void findFunctionExits(Module &M, const char *output_file);
        void findStackAllocations(Module &M, const char *output_file,
                const char *struct_info_filename);
        int findMinimumLineInBasicBlock(BasicBlock *curr);
        void traverseUntilNotForIncOrCond(BasicBlock *curr,
                std::set<int> *to_insert);
        void traverseLookingForFirstUsers(BasicBlock::iterator curr,
                BasicBlock::iterator end, std::vector<Instruction *> users,
                std::set<int> *to_insert, Module &M);
        int findStartingLineForFunction(Function *F, Module &M);
        void findHeapAllocations(Module &M, const char *output_file);
        int searchUpDefsForAliasSetGroup(Value *val, int nesting);
        std::map<Function *, std::vector<LabeledLoc *> *> *collectUniqueIDs(
                Module &M, const char *decl_info_name);
        bool isFunctionNameEnd(char *fname_end);
        void addIfNotExists(LabeledLoc *loc, Function *containing_function,
                std::map<Function *, std::vector<LabeledLoc *> *> *locations);
        void dumpLocationsToFile(const char *filename,
                std::map<Function *, std::vector<LabeledLoc *> *> *locations);
        void dumpGotoChainsToFile(const char *filename,
                std::map<Function *, std::vector<LabeledLoc *> *> *locations,
                Module &M);
        std::map<std::string, std::vector<std::string>> *getStructFieldNames(
                Module &M);
        void dumpStructInfoToFile(const char *filename, std::map<std::string,
                std::vector<std::string>> *struct_fields);
        void collectVariableDeclarations(Module &M, const char *filename);
        bool isCallToCheckpoint(CallInst *call);
        bool callsCheckpoint(Function *F);
        std::string findFilenameContainingBB(BasicBlock &bb, Module &M);
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
    } else {
        return iterateOverUses(val, nesting, visited);
    }
    
    return -1;
}

void Play::InitializeAliasGroups(AliasAnalysis *AA) {
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

void Play::unionGroups(int line, std::string filename, std::set<int> *groups) {

    std::set<int> *existing = NULL;
    for (std::vector<GroupsModifiedAtLine *>::iterator i =
            line_to_groups_modified.begin(), e = line_to_groups_modified.end();
            i != e; i++) {
        GroupsModifiedAtLine *curr = *i;
        if (curr->loc.line_no == line && *(curr->loc.filename) == filename) {
            existing = curr->groups;
            break;
        }
    }

    if (existing == NULL) {
        GroupsModifiedAtLine *g = (GroupsModifiedAtLine *)malloc(
                sizeof(GroupsModifiedAtLine));
        g->loc.line_no = line;
        g->loc.filename = new std::string(filename);
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

int Play::findMinimumLineInBasicBlock(BasicBlock *curr) {
    int minline = -1;
    for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
            inst_iter != inst_end; inst_iter++) {
        Instruction *curr_inst = inst_iter;
        int line = curr_inst->getDebugLoc().getLine();
        if (line != 0 && (minline == -1 || line < minline)) {
            minline = line;
        }
    }
    return minline;
}

void Play::collectLineToGroupsMappingInFunction(BasicBlock *curr,
        std::set<BasicBlock *>& visited, std::set<int> *parent_groups,
        std::string filename) {
    assert(curr != NULL);

    if (parent_groups != NULL && parent_groups->size() > 0) {

        if (curr->getName().str().find("for.inc") == 0 ||
                curr->getName().str().find("for.cond") == 0) {

            TerminatorInst *term = curr->getTerminator();
            for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
                BasicBlock *child = term->getSuccessor(i);
                collectLineToGroupsMappingInFunction(child, visited, parent_groups, filename);
            }

        } else {
            int minline = findMinimumLineInBasicBlock(curr);
            unionGroups(minline, filename, parent_groups);
        }
    }

    if (visited.find(curr) != visited.end()) {
        return;
    }
    visited.insert(curr);

    std::set<int> *groups = new std::set<int>();
    int maxline = -1;

    for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
            inst_iter != inst_end; inst_iter++) {
        Instruction *curr_inst = inst_iter;
        int line = curr_inst->getDebugLoc().getLine();
        if (line != 0 && line > maxline) maxline = line;

        if (StoreInst *store = dyn_cast<StoreInst>(curr_inst)) {
            assert(value_to_alias_group.find(store->getPointerOperand()) !=
                    value_to_alias_group.end());
            int group = value_to_alias_group[store->getPointerOperand()];
            groups->insert(group);
        }
    }

    TerminatorInst *term = curr->getTerminator();

    if (curr->getName().str().find("for.inc") == 0 ||
            curr->getName().str().find("for.cond") == 0) {

        for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
            BasicBlock *child = term->getSuccessor(i);
            collectLineToGroupsMappingInFunction(child, visited, groups,
                    filename);
        }

    } else {
        if (groups->size() > 0) {
            unionGroups(maxline, filename, groups);
        }

        for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
            BasicBlock *child = term->getSuccessor(i);
            collectLineToGroupsMappingInFunction(child, visited, NULL,
                    filename);
        }
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

            collectLineToGroupsMappingInFunction(&entry, visited, NULL, filename);
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

        errs() << " " << *curr->loc.filename << ":" << curr->loc.line_no << " -> { ";

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

        fprintf(fp, "%s:%d : { ", curr->loc.filename->c_str(),
                curr->loc.line_no);
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

void Play::dumpFunctionStartingLineTo(const char *filename,
        std::map<int, std::string> functions) {
    FILE *fp = fopen(filename, "w");

    for (std::map<int, std::string>::iterator f_iter = functions.begin(),
            f_end = functions.end(); f_iter != f_end; f_iter++) {
        fprintf(fp, "%d %s\n", f_iter->first, f_iter->second.c_str());
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

int Play::findStartingLineForFunction(Function *F, Module &M) {
    assert(F != NULL);

    if (function_to_start_line == NULL) {
        function_to_start_line = new std::map<std::string, int >();

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
        assert(module_info->getNumOperands() == 7);
        Metadata *func_info = module_info->getOperand(4).get();
        assert(dyn_cast<MDNode>(func_info));
        MDNode *func_info_md = (MDNode *)func_info;

        for (unsigned int f = 0; f < func_info_md->getNumOperands(); f++) {
            assert(dyn_cast<MDNode>(func_info_md->getOperand(f).get()));
            MDNode *this_func = (MDNode *)func_info_md->getOperand(f).get();
            DISubprogram di_func(this_func);

            std::string fname = di_func.getLinkageName();
            if (fname.empty()) {
                fname = di_func.getDisplayName();
            }
            int line_no = di_func.getLineNumber();

            assert(function_to_start_line->find(fname) ==
                    function_to_start_line->end());
            (*function_to_start_line)[fname] = line_no;
        }
    }

    assert(function_to_start_line->find(F->getName().str()) !=
            function_to_start_line->end());
    return (*function_to_start_line)[F->getName().str()];
}

void Play::findStartingLinesForAllFunctions(Module &M, const char *output_file) {
    /*
     * This assumes that for all functions, their declaration and body are on
     * different lines. This may not be true for all functions.
     */
    std::map<int, std::string> functions;
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        // Externally defined functions won't have any body info
        if (F->getBasicBlockList().size() == 0) {
            if (F->getName().str() == "main") {
                errs() << "Externally defined main? huh?\n";
                exit(1);
            }
            continue;
        }
        // If we don't call checkpoint, we don't need line info
        if (!callsCheckpoint(F)) {
            if (F->getName().str() == "main") {
                errs() << "main() does not directly or indirectly call "
                    "checkpoint? Are you using the library anywhere?\n";
                exit(1);
            }
            continue;
        }

        int min_func_line = findStartingLineForFunction(F, M);
        assert(min_func_line >= 0);
        assert(functions.find(min_func_line) == functions.end());
        functions[min_func_line] = F->getName();
    }

    dumpFunctionStartingLineTo(output_file, functions);
}

void Play::findFunctionExits(Module &M, const char *output_file) {
    FILE *fp = fopen(output_file, "w");
    std::vector<int> exits;

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (!callsCheckpoint(F)) continue;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (dyn_cast<ReturnInst>(&inst)) {
                    int line = inst.getDebugLoc().getLine();
                    if (line != 0) {
                        assert(std::find(exits.begin(), exits.end(), line) ==
                                exits.end());
                        exits.push_back(line);
                        fprintf(fp, "%d\n", line);
                    }
                }
            }
        }
    }

    fclose(fp);
}

void Play::traverseUntilNotForIncOrCond(BasicBlock *curr,
        std::set<int> *to_insert) {
    assert(curr != NULL);

    if (curr->getName().str().find("for.inc") == 0 ||
            curr->getName().str().find("for.cond") == 0) {
        TerminatorInst *term = curr->getTerminator();
        for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
            BasicBlock *child = term->getSuccessor(i);
            traverseUntilNotForIncOrCond(child, to_insert);
        }
    } else {
        int minLine = findMinimumLineInBasicBlock(curr);
        to_insert->insert(minLine);
    }
}

void Play::traverseLookingForFirstUsers(BasicBlock::iterator curr,
        BasicBlock::iterator end, std::vector<Instruction *> users,
        std::set<int> *to_insert, Module &M) {
    TerminatorInst *term = curr->getParent()->getTerminator();

    while (curr != end) {
        if (std::find(users.begin(), users.end(), curr) != users.end()) {
            // Found a user! now just need to mark the right line and exit
            BasicBlock *parent = curr->getParent();
            assert(parent != NULL);

            if (parent->getName().str().find("for.inc") == 0 ||
                    parent->getName().str().find("for.cond") == 0) {
                traverseUntilNotForIncOrCond(parent, to_insert);
            } else {
                if (curr->getDebugLoc().getLine() == 0) {
                    /*
                     * If we have a user with an invalid line, it should be a
                     * store instruction initializing a stack variable at
                     * declaration. If that's the case, we just find what line
                     * this function starts on and insert there.
                     */
                    assert(dyn_cast<StoreInst>(curr));
                    to_insert->insert(findStartingLineForFunction(
                                curr->getParent()->getParent(), M));
                } else {
                    int insert_at = curr->getDebugLoc().getLine();
                    to_insert->insert(insert_at);
                }
            }
            return;
        }
        curr++;
    }

    /*
     * If not user was found in this basic block, we need to traverse all
     * successors.
     */
    assert(term->getNumSuccessors() > 0);
    for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        traverseLookingForFirstUsers(child->begin(), child->end(), users,
                to_insert, M);
    }
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
    assert(module_info->getNumOperands() == 7);
    Metadata *struct_info = module_info->getOperand(3).get();
    assert(struct_info != NULL);
    assert(dyn_cast<MDNode>(struct_info));
    MDNode *struct_info_md = (MDNode *)struct_info;

    for (unsigned int s = 0; s < struct_info_md->getNumOperands(); s++) {
        if (struct_info_md->getOperand(s).get() == NULL) continue;
        assert(dyn_cast<MDNode>(struct_info_md->getOperand(s).get()));
        MDNode *this_struct = (MDNode *)struct_info_md->getOperand(s).get();
        DIType di_struct(this_struct);

        // If this isn't a struct, skip it
        if (!di_struct.isCompositeType()) continue;

        std::string struct_name = di_struct.getName().str();
        if (struct_name.empty()) {
            // If unnamed, assume it isn't used
            continue;
        }
        std::vector<std::string> fields;

        assert(this_struct->getNumOperands() >= 5);
        Metadata *field_defs_metadata = this_struct->getOperand(4).get();

        if (field_defs_metadata != NULL) {
            assert(dyn_cast<MDNode>(field_defs_metadata));
            MDNode *field_defs = (MDNode *)field_defs_metadata;
            for (unsigned int f = 0; f < field_defs->getNumOperands(); f++) {
                assert(field_defs->getOperand(f).get() != NULL &&
                        dyn_cast<MDNode>(field_defs->getOperand(f).get()));
                MDNode *field = (MDNode *)field_defs->getOperand(f).get();
                DIType di_field(field);
                std::string fieldname = di_field.getName().str();
                fields.push_back(fieldname);
            }
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

std::string *get_unique_varname(std::string varname, std::string fname,
        std::set<std::string> *found_variables) {

    std::string *unique_varname = new std::string();
    int permute = 0;
    do {
        std::ostringstream str_stream;
        str_stream << fname << "|" << varname << "|" << permute;
        *unique_varname = str_stream.str();
        permute++;
    } while (found_variables->find(*unique_varname) != found_variables->end());
    found_variables->insert(*unique_varname);

    return unique_varname;
}

//TODO I don't think this supports stack-allocated arrays yet
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

        if (!callsCheckpoint(F)) continue;

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
                            F->getName().str(), &found_variables);

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

    if (AllocaInst *alloc = dyn_cast<AllocaInst>(val)) {
        std::set<Value *> visited;
        return searchDownUsesForAliasSetGroupHelper(alloc, nesting, &visited);
    } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
        return searchUpDefsForAliasSetGroup(load->getPointerOperand(),
                nesting + 1);
    } else if (dyn_cast<StoreInst>(val)) {
        /*
         * This shouldn't be possible, because store shouldn't be producing any
         * defs. assert(0) here so that if it is possible, we have to debug.
         */
        assert(0);
        return -1;
    } else if (User *user = dyn_cast<User>(val)) {
        /*
         * This isn't true, but assert it for now to get a prototype working so
         * we'll trip it when it actually starts being not true and we'll have
         * to special-case pointer chasing through different instruction types.
         */
        assert(user->getNumOperands() == 1);
        Value *op = user->getOperand(0);
        return searchUpDefsForAliasSetGroup(op, nesting);
    } else {
        return -1;
    }
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
                        const char *callee_name =
                            callee->getName().str().c_str();

                        if (strcmp(callee_name, "malloc") == 0 ||
                                strcmp(callee_name, "realloc") == 0 ||
                                strcmp(callee_name, "free") == 0) {
                            int line_no = callInst->getDebugLoc().getLine();
                            assert(line_no != 0);

                            int alias_no;
                            if (strcmp(callee_name, "malloc") == 0 ||
                                    strcmp(callee_name, "realloc") == 0) {
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

                            fprintf(fp, "%d %d %s", line_no, alias_no,
                                    callee_name);
                            /*
                             * For trivial cases of a malloc call that is
                             * immediately cast to its correct type, we add some
                             * extra type info to the heap allocation metrics to
                             * help with replay.
                             */
                            if (strcmp(callee_name, "malloc") == 0 &&
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

bool Play::isFunctionNameEnd(char *fname_end) {
    if (fname_end[0] != '_') return false;
    if (fname_end[1] != '_') return false;
    if (fname_end[2] != '_') return false;
    if (fname_end[3] != '_') return false;
    return true;
}

void Play::addIfNotExists(LabeledLoc *loc, Function *containing_function,
        std::map<Function *, std::vector<LabeledLoc *> *> *locations) {

    if (locations->find(containing_function) == locations->end()) {
        (*locations)[containing_function] = new std::vector<LabeledLoc *>();
    }

    LabeledLoc *exists = NULL;
    std::vector<LabeledLoc *> *existing = (*locations)[containing_function];
    for (std::vector<LabeledLoc *>::iterator exist_iter = existing->begin(),
            exist_end = existing->end(); exist_iter != exist_end;
            exist_iter++) {
        LabeledLoc *curr = *exist_iter;
        if (curr->line_no == loc->line_no && *(curr->filename) == *(loc->filename)) {
            exists = curr;
            break;
        }
    }

    if (exists != NULL) {
        if (exists->type != loc->type) {
            (*locations)[containing_function]->push_back(loc);
        } else {
            free(loc);
        }
    } else {
        (*locations)[containing_function]->push_back(loc);
    }
}

std::map<Function *, std::vector<LabeledLoc *> *> *Play::collectUniqueIDs(
        Module &M, const char *decl_info_name) {
    std::map<Function *, std::vector<LabeledLoc *> *> *locations =
        new std::map<Function *, std::vector<LabeledLoc *> *>();
    int id = 0;

    // Collect stack variable registrations from the stack.info file
    ssize_t read;
    size_t len;
    char *line = NULL;
    FILE *fp = fopen(decl_info_name, "r");
    while ((read = getline(&line, &len, fp)) != -1) {

        char *end = strchr(line, ' ');
        assert(end != NULL);
        *end = '\0';
        int line_no = atoi(line);

        LabeledLoc *loc = (LabeledLoc *)malloc(sizeof(LabeledLoc));
        loc->id = id++;
        loc->line_no = line_no;
        loc->type = STACK_REGISTRATION;

        char *fname = end + 1;
        char *fname_end = strchr(fname, '|');
        *fname_end = '\0';

        char *filename = fname_end + 1;
        while (*filename != ' ') filename++;
        filename++;
        char *filename_end = filename;
        while (*filename_end != '\n' && *filename_end != '\0') filename_end++;
        *filename_end = '\0';

        loc->filename = new std::string(filename);

        Function *containing_function = NULL;
        // Find containing function
        for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
            Function *F = &*I;

            if (strcmp(fname, F->getName().str().c_str()) == 0) {
                containing_function = F;
                break;
            }
        }
        assert(containing_function != NULL);

        int first_line = findStartingLineForFunction(containing_function, M);
        if (first_line != loc->line_no) {
            addIfNotExists(loc, containing_function, locations);
        }
    }
    free(line);
    fclose(fp);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (dyn_cast<DbgInfoIntrinsic>(&inst)) continue;

                if (CallInst *call = dyn_cast<CallInst>(&inst)) {
                    Function *callee = call->getCalledFunction();
                    if (isCallToCheckpoint(call) ||
                            callee->getBasicBlockList().size() > 0) {
                        /*
                         * is an internal function which we have the definition
                         * for.
                         */
                        LabeledLoc *loc = (LabeledLoc *)malloc(sizeof(LabeledLoc));
                        loc->id = id++;
                        loc->type = CALLSITE;
                        loc->line_no = inst.getDebugLoc().getLine();
                        assert(loc->line_no != 0);

                        DebugLoc dl = inst.getDebugLoc();
                        if (!dl.isUnknown()) {
                            DIScope scope(dl.getScope(M.getContext()));
                            loc->filename = new std::string(scope.getFilename().str());
                            assert(!loc->filename->empty());
                            addIfNotExists(loc, F, locations);
                        }
                    }
                }
            }
        }
    }

    return locations;
}

void Play::dumpLocationsToFile(const char *filename,
        std::map<Function *, std::vector<LabeledLoc *> *> *locations) {

    FILE *fp = fopen(filename, "w");
    int callsite_dumps = 0;
    int stack_registration_dumps = 0;

    for (std::map<Function *, std::vector<LabeledLoc *> *>::iterator loc_iter =
            locations->begin(), loc_end = locations->end(); loc_iter != loc_end;
            loc_iter++) {
        std::vector<LabeledLoc *> *curr = loc_iter->second;
        for (std::vector<LabeledLoc *>::iterator iter = curr->begin(),
                end = curr->end(); iter != end; iter++) {
            LabeledLoc *loc = *iter;
            if (loc->type == CALLSITE) {
                fprintf(fp, "%d %d CALLSITE %s\n", loc->line_no, loc->id, loc->filename->c_str());
                callsite_dumps++;
            } else if (loc->type == STACK_REGISTRATION) {
                fprintf(fp, "%d %d STACK_REGISTRATION %s\n", loc->line_no,
                        loc->id, loc->filename->c_str());
                stack_registration_dumps++;
            } else {
                errs() << "Unexpected location type " << loc->type << "\n";
                exit(1);
            }
        }
    }

    errs() << "Dumped " << callsite_dumps << " callsites and " <<
        stack_registration_dumps << " stack registrations to " <<
        std::string(filename) << "\n";

    fclose(fp);
}

void Play::dumpGotoChainsToFile(const char *filename,
        std::map<Function *, std::vector<LabeledLoc *> *> *locations,
        Module &M) {
    FILE *fp = fopen(filename, "w");
    assert(fp != NULL);

    for (std::map<Function *, std::vector<LabeledLoc *> *>::iterator i =
            locations->begin(), e = locations->end(); i != e; i++) {
        Function *F = i->first;
        std::vector<LabeledLoc *> *locs = i->second;
        int start = findStartingLineForFunction(F, M);

        std::vector<LabeledLoc *> only_stack;
        std::vector<LabeledLoc *> only_calls;

        for (std::vector<LabeledLoc *>::iterator loc_iter = locs->begin(),
                loc_end = locs->end(); loc_iter != loc_end; loc_iter++) {
            LabeledLoc *curr = *loc_iter;
            assert(curr != NULL);

            if (curr->type == STACK_REGISTRATION) {
                only_stack.push_back(curr);
            } else {
                only_calls.push_back(curr);
            }
        }

        if (only_stack.empty() && only_calls.empty()) {
            // No stack variables and no function calls? Ignore it
        } else if (only_stack.empty()) {
            // No stack allocations, but has function calls
            fprintf(fp, "%s %d FINAL ", only_calls[0]->filename->c_str(), start);
            for (unsigned int i = 0; i < only_calls.size(); i++) {
                fprintf(fp, "%d ", only_calls[i]->id);
            }
            fprintf(fp, "\n");
        } else if (only_calls.empty()) {
            /*
             * Stack variables but no function calls. In this state, we know
             * that this function can't call checkpoint or call anything that
             * calls checkpoint, so skip it entirely.
             */
        } else {
            fprintf(fp, "%s %d START %d\n", only_stack[0]->filename->c_str(),
                    start, only_stack[0]->id);
            for (unsigned int i = 1; i < only_stack.size(); i++) {
                fprintf(fp, "%s %d INTERNAL %d\n",
                        only_stack[i - 1]->filename->c_str(),
                        only_stack[i - 1]->line_no, only_stack[i]->id);
            }

            if (!only_calls.empty()) {
                fprintf(fp, "%s %d FINAL ",
                        only_stack[only_stack.size() - 1]->filename->c_str(),
                        only_stack[only_stack.size() - 1]->line_no);
                for (unsigned int i = 0; i < only_calls.size(); i++) {
                    fprintf(fp, "%d ", only_calls[i]->id);
                }
                fprintf(fp, "\n");
            }
        }
    }

    fclose(fp);
}

void Play::collectVariableDeclarations(Module &M, const char *filename) {
    FILE *fp = fopen(filename, "w");
    std::set<std::string> found_variables;

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (!callsCheckpoint(F)) continue;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (DbgDeclareInst *dbg = dyn_cast<DbgDeclareInst>(&inst)) {
                    DebugLoc dl = dbg->getDebugLoc();
                    if (dl.isUnknown()) continue;
                    DIScope scope(dl.getScope(M.getContext()));

                    MDNode *var = dbg->getVariable();
                    DIVariable di_var(var);
                    std::string *unique_varname = get_unique_varname(
                            di_var.getName().str(), F->getName().str(),
                            &found_variables);
                    fprintf(fp, "%d %s %s\n", dl.getLine(),
                            unique_varname->c_str(), scope.getFilename().str().c_str());
                }
            }
        }
    }

    errs() << "Found " << found_variables.size() << " variable declarations\n";

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

    InitializeAliasGroups(AA);

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

    findStartingLinesForAllFunctions(M, "func_start.info");

    findFunctionExits(M, "exit.info");

    findStackAllocations(M, "stack.info", "struct.info");

    /*
     * Next up: intercept all malloc calls and replace them with a custom
     * wrapper that takes both the usual malloc arguments, plus the alias group
     * this allocation belongs to.
     */

    findHeapAllocations(M, "heap.info");

    /*
     * Now: this next bit is in support of the resumability. We start by
     * assigning a unique integer to every call site (which includes calls to
     * checkpoint()) and every stack variable registration site. A label is
     * added at each of these entities based on its ID. We also add a callback
     * in the application right before every call site which allows the runtime
     * library to recreate the stack trace based on callbacks and record them as
     * they happen. The callback must be made right before the call is made
     * because we must know what callsite we are making the call from, we can
     * use the same rm_stack callback to remove functions from the stack that
     * we've returned from.
     *
     * This stack generated from pre-call callbacks is added to the checkpoint
     * files.
     *
     * In replay mode, we also use gotos to immediately visit the sites of all
     * stack variable registrations in a function, and register their addresses
     * with the runtime library. The last stack registration to be visited uses
     * the stack trace we placed in the checkpoint file to decide which callsite
     * it should not jump to. After that jump, we immediately enter the next
     * call and repeat the same for the callee. This cycle stops when we finally
     * jump to the call site of the checkpoint() that created the checkpoint
     * file we are recovering from.
     */

    const char *decl_info_name = "decl.info";
    collectVariableDeclarations(M, decl_info_name);

    std::map<Function *, std::vector<LabeledLoc *> *> *locations =
        collectUniqueIDs(M, decl_info_name);
    errs() << "Found " << locations->size() << " functions with locations to "
        "mark\n";
    int count_locations = 0;
    for (std::map<Function *, std::vector<LabeledLoc *> *>::iterator loc_iter =
            locations->begin(), loc_end = locations->end(); loc_iter != loc_end;
            loc_iter++) {
        count_locations += loc_iter->second->size();
    }
    errs() << "Found " << count_locations << " locations to mark\n";

    dumpLocationsToFile("loc.info", locations);

    dumpGotoChainsToFile("goto.info", locations, M);

    return false;
}
