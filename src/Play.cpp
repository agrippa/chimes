#include "llvm/Pass.h"
#include "llvm/Analysis/CallGraphSCCPass.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Analysis/AliasSetTracker.h"
#include "llvm/IR/InstIterator.h"

#include <stdio.h>
#include <set>

using namespace llvm;

// #define VERBOSE

namespace {

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
        std::map<int, std::set<int>*> line_to_groups_modified;

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
        int searchDownUsesForAliasSetGroup(Value *val, int nesting);
        int searchForValueInKnownAliases(Value *val);
        int iterateOverUses(Value *val, int nesting);
        void mergeAliasGroupsInterprocedurally();
        void printAliasGroupings();
        void unifyAliasGroupings();
        void printValueMappings();
        void collectLineToGroupsMapping(Module &M);
        void printLineToGroupsMapping();
        void collectLineToGroupsMappingInFunction(BasicBlock *bb,
                std::set<BasicBlock *> &visited, std::set<int> *parent_groups);
        void unionGroups(int line, std::set<int> *groups);
        void dumpLineToGroupsMappingTo(const char *filename);
        void dumpFunctionStartingLineTo(const char *filename,
                std::vector<int> functions);
        void findStartingLinesForAllFunctions(Module &M);
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
    std::vector<AliasSetGroup *>::iterator to_remove = std::find(alias_groups.begin(), alias_groups.end(), src);
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

int Play::iterateOverUses(Value *val, int nesting) {
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

        int foundUse = searchDownUsesForAliasSetGroup(use.getUser(), nesting);
        if (foundUse != -1) return foundUse;
    }

    return -1;
}

int Play::searchDownUsesForAliasSetGroup(Value *val, int nesting) {
#ifdef VERBOSE
    errs() << "Searching down use chains for group of: \"" << *val << "\"\n";
#endif

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

        return searchDownUsesForAliasSetGroup(store->getPointerOperand(), nesting + 1);
    } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
#ifdef VERBOSE
        errs() << "  Is a load with pointer \"" << *load->getPointerOperand() << "\"\n";
#endif
        if (nesting == 1) {
            int found = searchForValueInKnownAliases(val);
            if (found != -1) return found;

            return iterateOverUses(val, nesting - 1);
        } else {
            return searchDownUsesForAliasSetGroup(load->getPointerOperand(), nesting - 1);
        }
    } else {
        return iterateOverUses(val, nesting);
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

                int callee_group = searchDownUsesForAliasSetGroup(arg_in_callee, 0);
#ifdef VERBOSE
                errs() << "\n";
#endif
                int caller_group = searchDownUsesForAliasSetGroup(passed_in_caller, 0);
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

void Play::unionGroups(int line, std::set<int> *groups) {
    if (line_to_groups_modified.find(line) == line_to_groups_modified.end()) {
        line_to_groups_modified[line] = groups;
    } else {
        std::map<int, std::set<int>*>::iterator found =
            line_to_groups_modified.find(line);
        std::set<int> *curr_groups = found->second;
        for (std::set<int>::iterator parent_iter = groups->begin(),
                parent_end = groups->end(); parent_iter != parent_end;
                parent_iter++) {
            curr_groups->insert(*parent_iter);
        }
    }
}

void Play::collectLineToGroupsMappingInFunction(BasicBlock *curr,
        std::set<BasicBlock *>& visited, std::set<int> *parent_groups) {

    if (parent_groups != NULL && parent_groups->size() > 0) {

        if (curr->getName().str().find("for.inc") == 0 ||
                curr->getName().str().find("for.cond") == 0) {

            TerminatorInst *term = curr->getTerminator();
            for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
                BasicBlock *child = term->getSuccessor(i);
                collectLineToGroupsMappingInFunction(child, visited, parent_groups);
            }

        } else {
            int minline = -1;
            for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
                    inst_iter != inst_end; inst_iter++) {
                Instruction *curr_inst = inst_iter;
                int line = curr_inst->getDebugLoc().getLine();
                if (line != 0 && (minline == -1 || line < minline)) {
                    minline = line;
                }
            }

            unionGroups(minline, parent_groups);
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
            collectLineToGroupsMappingInFunction(child, visited, groups);
        }

    } else {
        if (groups->size() > 0) {
            unionGroups(maxline, groups);
        }

        for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
            BasicBlock *child = term->getSuccessor(i);
            collectLineToGroupsMappingInFunction(child, visited, NULL);
        }
    }
}

void Play::collectLineToGroupsMapping(Module& M) {
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        std::set<BasicBlock *> visited;
        BasicBlock& entry = F->getEntryBlock();

        collectLineToGroupsMappingInFunction(&entry, visited, NULL);
    }
}

void Play::printLineToGroupsMapping() {
    errs() << "\n" << line_to_groups_modified.size() << " lines:\n";
    for (std::map<int, std::set<int>*>::iterator line_iter =
            line_to_groups_modified.begin(), line_end =
            line_to_groups_modified.end(); line_iter != line_end; line_iter++) {
        std::set<int> *groups = line_iter->second;

        errs() << " " << line_iter->first << " -> { ";
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

    for (std::map<int, std::set<int>*>::iterator line_iter =
            line_to_groups_modified.begin(), line_end =
            line_to_groups_modified.end(); line_iter != line_end; line_iter++) {
        std::set<int> *groups = line_iter->second;

        fprintf(fp, "%d : { ", line_iter->first);
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

void Play::dumpFunctionStartingLineTo(const char *filename, std::vector<int> functions) {
    FILE *fp = fopen(filename, "w");

    for (std::vector<int>::iterator f_iter = functions.begin(),
            f_end = functions.end(); f_iter != f_end; f_iter++) {
        fprintf(fp, "%d\n", *f_iter);
    }

    fclose(fp);
}

void Play::findStartingLinesForAllFunctions(Module &M) {
    /*
     * This assumes that for all functions, their declaration and body are on
     * different lines. This may not be true for all functions.
     */
    std::vector<int> functions;
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        int min_func_line = -1;
        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                int line = inst.getDebugLoc().getLine();
                if (line != 0 && (min_func_line == -1 || line < min_func_line)) {
                    min_func_line = line;
                }
            }
        }

        functions.push_back(min_func_line);
    }

    dumpFunctionStartingLineTo("func_start.info", functions);
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

    findStartingLinesForAllFunctions(M);

    return false;
}
