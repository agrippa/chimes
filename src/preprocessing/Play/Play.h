#ifndef PLAY_H
#define PLAY_H

#include <stdio.h>
#include <utility>
#include <sstream>
#include <functional>
#include <cxxabi.h>
#include <string>
#include <map>
#include <set>

// #define VERBOSE
// #define PROFILE

using namespace llvm;
using namespace std;

enum CALLS_CHECKPOINT { DOES_NOT = 0, MAY = 1, DOES = 2 };
enum IS_CHECKPOINTED { YES = 0, NO = 1, MAYBE = 2};

typedef struct _SimpleLoc {
    std::string *filename;
    int line_no;
    int col;
} SimpleLoc;

typedef struct _GroupsModifiedAtLine {
    SimpleLoc loc;
    set<size_t> *groups;
    set<size_t> *groups_and_children;
    map<string, set<size_t> > *groups_possibly_modified;
    string *reason;
} GroupsModifiedAtLine;

class TermInfo {
    public:
        TermInfo(set<size_t> *set_groups,
                set<size_t> *set_groups_and_children,
                map<string, set<size_t> > *set_possibly_changed_at_termination) :
            groups(set_groups), groups_and_children(set_groups_and_children),
            possibly_changed_at_termination(set_possibly_changed_at_termination) { }

        set<size_t> *get_groups() { return groups; }
        set<size_t> *get_groups_and_children() { return groups_and_children; }
        map<string, set<size_t> > *get_possibly_changed_at_termination() {
            return possibly_changed_at_termination;
        }

    private:
        set<size_t> *groups;
        set<size_t> *groups_and_children;
        map<string, set<size_t> > *possibly_changed_at_termination;
};

typedef struct _StackAllocInfo {
    std::string *varname;
    int type_size_in_bits;
    AllocaInst *alloca;
    BasicBlock *parent;
    std::vector<Instruction *> users;

    bool mayCheckpoint;
    std::set<std::string> *causesCheckpoint;

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

class GroupPropagation {
    public:
        GroupPropagation(Instruction *set_creating_instruction,
                size_t set_group) :
                creating_instruction(set_creating_instruction),
                group(set_group) { }
        void add_traversed(BasicBlock *block) { traversed.insert(block); }
        bool has_traversed(BasicBlock *block) {
            return (traversed.find(block) != traversed.end());
        }
        BasicBlock *get_creating_bb() {
            return creating_instruction->getParent();
        }
        Instruction *get_creating_instruction() {
            return creating_instruction;
        }
        size_t get_group() { return group; }

        void add_traversed_from(GroupPropagation *other) {
            for (set<BasicBlock *>::iterator i = other->traversed.begin(),
                    e = other->traversed.end(); i != e; i++) {
                traversed.insert(*i);
            }
        }

        std::string str() {
            std::stringstream ss;
            ss << "[grp=" << group << ", crt=[";

            std::string insn_string;
            raw_string_ostream stream(insn_string);
            creating_instruction->print(stream);
            stream.flush();
            ss << insn_string;

            ss << "], crt_bb=" << creating_instruction->getParent()->getName().str() << ", traversed={";
            for (set<BasicBlock *>::iterator i = traversed.begin(),
                    e = traversed.end(); i != e; i++) {
                ss << " " << (*i)->getName().str();
            }
            ss << " }]";
            return ss.str();
        }

    private:
        Instruction *creating_instruction;
        set<BasicBlock *> traversed;
        size_t group;
};

class CollectedTraversal {
    public:
        CollectedTraversal() { }

        set<size_t> *get_changed() { return &changed; }
        set<size_t> *get_changed_and_children() { return &changed_and_children; }
        map<string, set<size_t> > *get_possibly_changed() { return &possibly_changed; }

        void add_all(set<size_t> *from, set<size_t> *to) {
            for (set<size_t>::iterator i = from->begin(),
                    e = from->end(); i != e; i++) {
                to->insert(*i);
            }
        }
        
        void merge_from(CollectedTraversal *other) {
            add_all(&other->changed, &changed);
            add_all(&other->changed_and_children, &changed_and_children);

            for (map<string, set<size_t> >::iterator i =
                    other->possibly_changed.begin(), e =
                    other->possibly_changed.end(); i != e; i++) {
                if (possibly_changed.find(i->first) == possibly_changed.end()) {
                    possibly_changed.insert(pair<string, set<size_t> >(
                                i->first, set<size_t>()));
                }
                for (set<size_t>::iterator ii = i->second.begin(),
                        ee = i->second.end(); ii != ee; ii++) {
                    possibly_changed.at(i->first).insert(*ii);
                }
            }
        }

        void add_to(set<size_t> *target_changed,
                set<size_t> *target_changed_and_children,
                map<string, set<size_t> > *target_possibly_changed) {
            add_all(&changed, target_changed);
            add_all(&changed_and_children, target_changed_and_children);

            for (map<string, set<size_t> >::iterator i =
                    possibly_changed.begin(), e = possibly_changed.end();
                    i != e; i++) {
                if (target_possibly_changed->find(i->first) == target_possibly_changed->end()) {
                    target_possibly_changed->insert(
                            pair<string, set<size_t> >(i->first,
                                set<size_t>()));
                }
                for (set<size_t>::iterator ii = i->second.begin(),
                        ee = i->second.end(); ii != ee; ii++) {
                    target_possibly_changed->at(i->first).insert(*ii);
                }
            }
        }

    private:
        set<size_t> changed;
        set<size_t> changed_and_children;
        map<string, set<size_t> > possibly_changed;
};

class ReverseBasicBlockContext {
    public:
        ReverseBasicBlockContext(BasicBlock::reverse_iterator set_start,
                BasicBlock *set_parent, set<size_t> *set_changed,
                set<size_t> *set_changed_and_children,
                map<string, set<size_t> > *set_possibly_changed) :
            start(set_start), parent(set_parent), changed(set_changed),
            changed_and_children(set_changed_and_children),
            possibly_changed(set_possibly_changed) { }

        BasicBlock::reverse_iterator get_start() { return start; }
        BasicBlock *get_parent() { return parent; }
        set<size_t> *get_changed() { return changed; }
        set<size_t> *get_changed_and_children() { return changed_and_children; }
        map<string, set<size_t> > *get_possibly_changed() {
            return possibly_changed;
        }

    private:
        BasicBlock::reverse_iterator start;
        BasicBlock *parent;
        set<size_t> *changed;
        set<size_t> *changed_and_children;
        map<string, set<size_t> > *possibly_changed;
};

class StructFieldInfo {
    public:
        StructFieldInfo(std::string set_name, std::string set_type) :
            name(set_name), type(set_type) { }

        std::string get_name() { return name; }
        std::string get_type() { return type; }

    private:
        std::string name;
        std::string type;
};

class StructInfo {
    public:
        StructInfo(std::vector<StructFieldInfo> set_fields,
                bool set_is_unnamed, uint64_t set_size_in_bits) :
                fields(set_fields), is_unnamed(set_is_unnamed),
                size_in_bits(set_size_in_bits) { }

        std::vector<StructFieldInfo> *get_fields() { return &fields; }
        bool get_is_unnamed() { return is_unnamed; }
        uint64_t get_size_in_bits() { return size_in_bits; }

    private:
        std::vector<StructFieldInfo> fields;
        bool is_unnamed;
        uint64_t size_in_bits;
};

class ReachableInfo {
    public:
        ReachableInfo(std::map<size_t, size_t> *set_contains,
                std::map<Value *, size_t> set_value_to_alias_group) :
            contains(set_contains),
            value_to_alias_group(set_value_to_alias_group) {}

        std::map<size_t, size_t> *get_contains() {
            return contains;
        }

        std::map<Value *, size_t> *get_value_to_alias_group() {
            return &value_to_alias_group;
        }

        size_t get_aliases_stored_in(size_t alias) {
            assert(contains->find(alias) != contains->end());
            return contains->at(alias);
        }

    private:
        std::map<size_t, size_t> *contains;
        std::map<Value *, size_t> value_to_alias_group;
};

struct Play : public ModulePass {

    explicit Play(): ModulePass(ID) {
    }

    bool runOnModule(Module &M) override;

    void getAnalysisUsage(AnalysisUsage &AU) const override {
        // AU.addRequired<AliasAnalysis>();
    }

    public:
    static char ID;
    bool isKnownFunction(Function *F);

    private:
    void initKnownFunctions();
    void initMarkedFunctions();
    bool isMarkedWithNoCheckpoint(Function *F);
    CALLS_CHECKPOINT knownFunctionCreatesCheckpoint(Function *F);
    std::map<std::string, CALLS_CHECKPOINT> doesFunctionCreateCheckpoint;
    std::map<std::string, std::vector<unsigned> > functionChanges;
    std::set<std::string> functionsMarkedWithNoCheckpoint;

    void printFunctions(Module &M);
    void printValuesAndAliasGroups(
            std::map<Value *, size_t> *value_to_alias_group);
    void dumpFunctionArgumentsToAliasMappings(Module &M,
            const char *filename, std::map<Value *, size_t> *value_to_alias_group);
    size_t searchForValueInKnownAliases(Value *val,
            std::map<Value *, size_t> *value_to_alias_group, bool force = true);
    std::map<Function *, TermInfo> *collectLineToGroupsMapping(
            Module &M, std::map<Value *, size_t> *value_to_alias_group);
    void collectLineToGroupsMappingInFunction(Function *func,
            map<Value *, size_t> *value_to_alias_group, string filename,
            Module &M, set<size_t> *changed_at_termination,
            set<size_t> *changed_and_children_at_termination,
            map<string, set<size_t> > *possibly_changed_at_termination);
    CollectedTraversal *traverseBBBackwards(
            BasicBlock::reverse_iterator start, BasicBlock *curr, bool from_beginning,
            vector<ReverseBasicBlockContext> *to_process,
            set<CallInst *> *processed, string filename,
            map<Value *, size_t> *value_to_alias_group, Module &M,
            set<BasicBlock *> *visited, map<BasicBlock *, CollectedTraversal *> *cache);
    void createNewAliasLocation(int line, int col, string filename,
            bool isCall, Function *reason, set<size_t> **changed_ptr,
            set<size_t> **changed_and_children_ptr,
            map<string, set<size_t> > **possibly_changed_ptr);
    void updateChanges(CallInst *call, Function *callee,
            set<size_t> *changed, set<size_t> *changed_and_children,
            map<string, set<size_t> > *possibly_changed,
            std::map<Value *, size_t> *value_to_alias_group,
            string filename, Module &M);

    bool addAliasChangeLocation(CallInst *call, Function *callee,
            set<size_t> *changed, set<size_t> *changed_and_children,
            map<string, set<size_t> > *possibly_changed,
            std::map<Value *, size_t> *value_to_alias_group, std::string filename,
            Module &M);
    void dumpLineToGroupsMappingTo(const char *filename);

    std::map<Value *, std::string> *mapValuesToOriginalVarName(Function *F);
    void findStackAllocations(Module &M, const char *output_file,
            const char *struct_info_filename);
    void findHeapAllocations(Module &M, const char *output_file,
            std::map<Value *, size_t> *value_to_alias_group);
    std::map<std::string, StructInfo> *getStructFieldNames(
            Module &M);
    void dumpStructInfoToFile(const char *filename,
            std::map<std::string, StructInfo> *struct_fields);
    bool isCheckpoint(Function *callee);

    std::string isPossibleCheckpointCall(CallInst *call, Module &M);
    std::map<BasicBlock *, std::set<std::string> > *collectPossibleCheckpointsInBBs(Function *F, Module &M);
    std::map<BasicBlock *, bool> *containsLoad(Function *F,
            std::set<LoadInst *> *loads);

    void isPathFromFuncStartToCheckpointThroughStore(BasicBlock *bb,
            std::set<StoreInst *> *stores, bool foundStore,
            std::set<BasicBlock *> *pre_visited,
            std::set<BasicBlock *> *post_visited,
            std::set<std::string> *causesCheckpoint,
            std::map<BasicBlock *, std::set<std::string> > *bb_to_checkpoints,
            Module &M);

    bool isPathFromCheckpointThroughLoad(BasicBlock *bb,
            std::set<LoadInst *> *loads, bool foundCheckpoint,
            std::set<BasicBlock *> *pre_visited,
            std::set<BasicBlock *> *post_visited,
            std::map<BasicBlock *, bool> *bb_to_loads, Module &M);
    std::map<AllocaInst *, std::set<std::string> > *findStackAllocationsAliveAtCheckpoint(Function *F, Module &M);
    CALLS_CHECKPOINT mayCreateCheckpoint(Function *F);
    CALLS_CHECKPOINT mayCreateCheckpointHelper(Function *F,
            std::set<Instruction *> *visited);
    std::string findFilenameContainingBB(BasicBlock &bb, Module &M);
    std::string *getUniqueVarname(std::string varname, Function *F,
            std::set<std::string> *found_variables, Module &M);
    void printReachable(ReachableInfo &R);
    void dumpReachable(ReachableInfo &R, const char *filename);
    void handleHostAllocation(CallInst *callInst, Function *callee,
            FILE *fp,
            std::map<std::string, StructInfo> *structFields,
            std::string fname,
            std::map<Value *, size_t> *value_to_alias_group);
    void handleDeviceAllocation(CallInst *callInst, Function *callee,
            FILE *fp,
            std::map<std::string, StructInfo> *structFields);
    void dumpCallSiteAliases(Module &M, const char *filename,
            std::map<Value *, size_t> *value_to_alias_group);
    ReachableInfo propagateAliases(Module &M, Hasher *H);
    std::vector<Value *> *collectInitialInstructionsToVisit(Module &M);
    std::map<Value *, size_t> *collectInitialAliasMappings(Module &M, Hasher *H);
    void dumpFunctionCallTree(Module &M, const char *output_file);
    void findFunctionExits(Module &M, const char *output_file,
            std::map<Value *, size_t> *value_to_alias_group,
            std::map<Function *, TermInfo> *func_to_groups_changed);
    void printGroupsChanged(FILE *fp, Function *F,
            std::map<Function *, TermInfo> *func_to_groups_changed);
    void dumpGlobal(GlobalVariable *var, std::string varname,
            FILE *globals_fp, DataLayout *layout,
            std::map<std::string, StructInfo> *structFields,
            std::map<Value *, size_t> *value_to_alias_group);
    bool dumpConstant(GlobalVariable *var, FILE *fp, int constant_index,
            DataLayout *layout);
    void findGlobalsAndConstants(Module &M, const char *globals_filename,
            const char *constants_filename, std::map<Value *, size_t> *value_to_alias_group);
    std::map<std::string, std::string> *mapGlobalsToOriginalName(Module &M);

    std::string *getFunctionDisplayName(Function *F, Module &M);
    Hasher *calculate_hashes(Module &M);
    std::string traverseAllUses(const Value *user, int nesting);
    std::string findReachableUse(const User *user, const Value *parent, int nesting);

    IS_CHECKPOINTED isCheckpointInLiveRange(BasicBlock *curr, bool currently_live,
            std::set<StoreInst *> *stores, std::set<LoadInst *> *loads,
            std::set<BasicBlock *> *visitedWhileLive,
            std::set<BasicBlock *> *visitedWhileDead,
            std::set<std::string> *may_cause_checkpoint, Module &M);

    std::vector<GroupsModifiedAtLine *> line_to_groups_modified;
    std::map<std::string, std::string> function_to_demangled;
    std::map<Function *, CALLS_CHECKPOINT> can_call_checkpoint;

#ifdef PROFILE
    // long propagateGroupsDownTime = 0;
    long mayCreateCheckpointTime = 0;
    long collectChangesAtTermTime = 0;
    long addAliasChangeLocTime = 0;
    long findCallsTime = 0;
    long checkingVisitedTime = 0;
    long leftoverTime = 0;
#endif
};

#endif
