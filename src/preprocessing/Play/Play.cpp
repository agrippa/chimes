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

#include "AllocaVisitor.h"
#include "ValueVisitor.h"
#include "Hasher.h"

#include <set>
#include <stdio.h>
#include <utility>
#include <set>
#include <sstream>
#include <functional>
#include <cxxabi.h>

using namespace llvm;

// #define VERBOSE

namespace {

    enum CALLS_CHECKPOINT { DOES_NOT = 0, MAY = 1, DOES = 2 };

    typedef struct _SimpleLoc {
        std::string *filename;
        int line_no;
        int col;
    } SimpleLoc;

    typedef struct _GroupsModifiedAtLine {
        SimpleLoc loc;
        std::set<size_t> *groups;
        std::string *reason;
    } GroupsModifiedAtLine;

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
                    bool set_is_unnamed) : fields(set_fields),
                    is_unnamed(set_is_unnamed) { }

            std::vector<StructFieldInfo> *get_fields() { return &fields; }
            bool get_is_unnamed() { return is_unnamed; }

        private:
            std::vector<StructFieldInfo> fields;
            bool is_unnamed;
    };

    class ReachableInfo {
        public:
            ReachableInfo(std::map<size_t, size_t> set_contains,
                    std::map<Value *, size_t> set_value_to_alias_group) :
                contains(set_contains),
                value_to_alias_group(set_value_to_alias_group) {}

            std::map<size_t, size_t> get_contains() {
                return contains;
            }

            std::map<Value *, size_t> get_value_to_alias_group() {
                return value_to_alias_group;
            }

            size_t get_aliases_stored_in(size_t alias) {
                assert(contains.find(alias) != contains.end());
                return contains[alias];
            }

        private:
            std::map<size_t, size_t> contains;
            std::map<Value *, size_t> value_to_alias_group;
    };

    struct Play : public ModulePass {
        static char ID;
        std::vector<GroupsModifiedAtLine *> line_to_groups_modified;
        std::map<std::string, std::string> function_to_demangled;
        std::map<Function *, CALLS_CHECKPOINT> can_call_checkpoint;

        explicit Play(): ModulePass(ID) {
        }

        bool runOnModule(Module &M) override;

        void getAnalysisUsage(AnalysisUsage &AU) const override {
            AU.addRequired<AliasAnalysis>();
        }

    private:
        void initKnownFunctions();
        bool isKnownFunction(Function *F);
        CALLS_CHECKPOINT knownFunctionCreatesCheckpoint(Function *F);
        std::map<std::string, CALLS_CHECKPOINT> doesFunctionCreateCheckpoint;

        void printFunctions(Module &M);
        void printValuesAndAliasGroups(
                std::map<Value *, size_t> value_to_alias_group);
        void dumpFunctionArgumentsToAliasMappings(Module &M,
                const char *filename, std::map<Value *, size_t> value_to_alias_group);
        size_t searchForValueInKnownAliases(Value *val,
                std::map<Value *, size_t> value_to_alias_group, bool force = true);
        std::map<Function *, std::set<size_t> *> *collectLineToGroupsMapping(
                Module &M, std::map<Value *, size_t> value_to_alias_group);
        void collectLineToGroupsMappingInFunction(BasicBlock *curr,
                std::set<BasicBlock *> *visited, std::string filename,
                std::map<Value *, size_t> value_to_alias_group,
                std::set<size_t> *changed_at_termination);
        void unionGroups(int line, int col,
                std::string filename, std::set<size_t> *groups, std::string reason);
        void unionGroups(int line, int col, std::string filename,
                std::set<size_t> *groups, bool isIndirect, bool isCall,
                Function *reason_callee);
        void dumpLineToGroupsMappingTo(const char *filename);

        std::map<Value *, std::string> *mapValuesToOriginalVarName(Function *F);
        void findStackAllocations(Module &M, const char *output_file,
                const char *struct_info_filename);
        void findHeapAllocations(Module &M, const char *output_file,
                std::map<Value *, size_t> value_to_alias_group);
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
                FILE *fp, std::set<int> &found_mallocs,
                std::map<std::string, StructInfo> *structFields,
                std::string fname,
                std::map<Value *, size_t> value_to_alias_group);
        void handleDeviceAllocation(CallInst *callInst, Function *callee,
                FILE *fp, std::set<int> &found_mallocs,
                std::map<std::string, StructInfo> *structFields);
        void dumpCallSiteAliases(Module &M, const char *filename,
                std::map<Value *, size_t> value_to_alias_group);
        ReachableInfo propagateAliases(Module &M, Hasher *H);
        std::vector<Value *> *collectInitialInstructionsToVisit(Module &M);
        std::map<Value *, size_t> *collectInitialAliasMappings(Module &M, Hasher *H);
        void dumpFunctionCallTree(Module &M, const char *output_file);
        void findFunctionExits(Module &M, const char *output_file,
                std::map<Value *, size_t> value_to_alias_group,
                std::map<Function *, std::set<size_t> *> *func_to_groups_changed);
        void dumpGlobal(GlobalVariable *var, std::string varname,
                FILE *globals_fp, DataLayout *layout,
                std::map<std::string, StructInfo> *structFields);
        bool dumpConstant(GlobalVariable *var, FILE *fp, int constant_index,
                DataLayout *layout);
        void findGlobalsAndConstants(Module &M, const char *globals_filename,
                const char *constants_filename);
        std::map<std::string, std::string> *mapGlobalsToOriginalName(Module &M);
        void propagateGroupsDown(BasicBlock *curr, std::string filename,
                std::set<size_t> *groups, std::set<BasicBlock *> *visited,
                std::set<size_t> *changed_at_termination);
        std::string *getFunctionDisplayName(Function *F, Module &M);
        Hasher *calculate_hashes(Module &M);
        std::string traverseAllUses(const Value *user, int nesting);
        std::string findReachableUse(const User *user, const Value *parent, int nesting);
    };
}

char Play::ID = 0;
static RegisterPass<Play> X("play", "Play Pass");

static bool basicBlockIsValid(BasicBlock *BB) {
    return BB->getName().str().size() > 0;
}

void Play::printFunctions(Module &M) {
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F != NULL && !F->empty()) {
            Function::BasicBlockListType &bblist = F->getBasicBlockList();
            Function::ArgumentListType &arglist = F->getArgumentList();
            errs() << "  Function " << F->getName().str() << ": " <<
                bblist.size()  << " basic blocks and " << arglist.size() <<
                " args\n";

            if (arglist.size() > 0) {
                errs() << "    Takes ";
                for (Function::arg_iterator i = F->arg_begin(),
                        e = F->arg_end(); i != e; i++) {
                    Argument &arg = *i;
                    if (i != F->arg_begin()) {
                        errs() << ", ";
                    }
                    errs() << arg.getName() << "(" << *arg.getType() << ")";
                }
                errs() << "\n";
            } else {
                errs() << "    Takes no arguments\n";
            }

            if (bblist.size() > 0) {
                errs() << "    Has basic blocks";
                for (Function::iterator i = F->begin(), e = F->end(); i != e;
                        i++) {
                    BasicBlock *bb = &*i;
                    errs() << " \"" << bb->getName() << "\"";
                }
                errs() << "\n";
            } else {
                errs() << "    Has no basic blocks\n";
            }
        }
    }
    errs() << "\n";
}

void Play::printValuesAndAliasGroups(
        std::map<Value *, size_t> value_to_alias_group) {
    for (std::map<Value *, size_t>::iterator i = value_to_alias_group.begin(),
            e = value_to_alias_group.end(); i != e; i++) {
        Value *val = i->first;
        size_t alias = i->second;

        errs() << *val << " [" << alias << "]\n";
    }
    errs() << "\n";
}

void Play::dumpReachable(ReachableInfo &reachable, const char *filename) {
    FILE *fp = fopen(filename, "w");

    std::map<size_t, size_t> contains = reachable.get_contains();
    for (std::map<size_t, size_t>::iterator i =
            contains.begin(), e = contains.end(); i != e; i++) {
        size_t container = i->first;
        size_t children = i->second;

        fprintf(fp, "%lu %lu\n", container, children);
    }
    fclose(fp);
}

void Play::printReachable(ReachableInfo &reachable) {
    errs() << "Storing:\n";
    std::map<size_t, size_t> contains = reachable.get_contains();
    for (std::map<size_t, size_t>::iterator i =
            contains.begin(), e = contains.end(); i != e; i++) {
        size_t dst = i->first;
        size_t dst_contains = i->second;
        errs() << "  " << dst << " -> { " << dst_contains << " }\n";
    }
    errs() << "\n";
}

std::vector<Value *> *Play::collectInitialInstructionsToVisit(Module &M) {
    std::vector<Value *> *result = new std::vector<Value *>();

    /*
     * We need to keep the ordering of the function and basic block iterator
     * consistent across executions. While this does not affect the correctness
     * of the algorithm, it does simplify the testing code knowing that we are
     * deterministically visiting Values in a certain order. Fortunately,
     * std::map's elements are implicitly sorted by key when you iterate over
     * them.
     */
    std::map<std::string, Function *> sorted_functions;

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;
        if (F != NULL && !F->empty()) {
            assert(F->hasName());
            assert(sorted_functions.find(F->getName().str()) ==
                    sorted_functions.end());
            sorted_functions[F->getName().str()] = F;
        }
    }

    for (std::map<std::string, Function *>::iterator fi =
            sorted_functions.begin(), fe = sorted_functions.end(); fi != fe;
            fi++) {
        Function *F = fi->second;
        // Also need deterministic basic block traversal
        std::map<std::string, BasicBlock *> sorted_blocks;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter =
                bblist.begin(), bb_end = bblist.end(); bb_iter != bb_end;
                bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            if (bb->hasName()) {
                assert(sorted_blocks.find(bb->getName().str()) ==
                        sorted_blocks.end());
                sorted_blocks[bb->getName().str()] = bb;
            }
        }

        for (std::map<std::string, BasicBlock *>::iterator bbi =
                sorted_blocks.begin(), bbe = sorted_blocks.end(); bbi != bbe;
                bbi++) {
            BasicBlock *bb = bbi->second;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end();
                    i != e; ++i) {
                Instruction *inst = &*i;
                if (ReturnInst *ret = dyn_cast<ReturnInst>(inst)) {
                    if (ret->getReturnValue() != NULL &&
                            ret->getReturnValue()->getType()->isPointerTy()) {
                        result->push_back(inst);
                    }
                } else if (StoreInst *store = dyn_cast<StoreInst>(inst)) {
                    result->push_back(store);
                } else if (LoadInst *load = dyn_cast<LoadInst>(inst)) {
                    result->push_back(load);
                } else if (CallInst *call = dyn_cast<CallInst>(inst)) {
                    /*
                     * Need to visit all calls because they can have side
                     * effects on passed-by-reference parameters
                     */
                    if (!isa<DbgInfoIntrinsic>(call)) {
                        result->push_back(call);
                    }
                }
            }
        }
    }

    return result;
}

std::map<Value *, size_t> *Play::collectInitialAliasMappings(Module &M,
        Hasher *H) {
    std::map<Value *, size_t> *mappings = new std::map<Value *, size_t>();

    for (Module::iterator i = M.begin(), e = M.end(); i != e; i++) {
        Function *F = &*i;
        
        for (Function::arg_iterator ai = F->arg_begin(), ae = F->arg_end();
                ai != ae; ai++) {
            Argument *A = &*ai;
            assert(mappings->find(A) == mappings->end());
            (*mappings)[A] = H->get(A);
        }

        for (Function::iterator bi = F->begin(), be = F->end(); bi != be; bi++) {
            BasicBlock *BB = &*bi;
            if (basicBlockIsValid(BB)) {
                for (BasicBlock::iterator ii = BB->begin(), ie = BB->end();
                        ii != ie; ii++) {
                    Instruction *insn = &*ii;
                    if (isa<AllocaInst>(insn)) {
                        (*mappings)[insn] = H->get(insn);
                    }
                }
            }
        }
    }

    // Conservatively place globals with the same type into the same alias group
    std::map<Type *, size_t> global_type_to_alias;
    errs() << M.getGlobalList().size() << " global(s)\n";
    for (Module::global_iterator i = M.global_begin(), e = M.global_end();
            i != e; i++) {
        GlobalValue *G = &*i;
        assert(mappings->find(G) == mappings->end());

        if (global_type_to_alias.find(G->getType()) == global_type_to_alias.end()) {
            size_t alias = H->get(G);
            (*mappings)[G] = alias;
            global_type_to_alias[G->getType()] = alias;
        } else {
            (*mappings)[G] = global_type_to_alias[G->getType()];
        }
    }

    return mappings;
}

std::string Play::traverseAllUses(const Value *parent, int nesting) {
    for (Value::const_use_iterator i = parent->use_begin(),
            e = parent->use_end(); i != e; i++) {
        const Use *use = &*i;
        User *user = use->getUser();
        std::string result = findReachableUse(user, parent, nesting + 1);
        if (result.size() > 0) return result;
    }
    return "";
}

static std::string demangleVarName(std::string varname) {
    if (varname.find("_ZL") == 0) {
        std::string removed_prefix = varname.substr(3);
        while (removed_prefix[0] >= '0' && removed_prefix[0] <= '9') {
            removed_prefix = removed_prefix.substr(1);
        }
        return removed_prefix;
    } else {
        return varname;
    }
}

std::string Play::findReachableUse(const User *user, const Value *parent, int nesting) {
    std::string prefix;
    if (isa<GEPOperator>(user)) {
        const GEPOperator *op = dyn_cast<GEPOperator>(user);
        assert(op->getPointerOperandType()->isPointerTy());

        if (op->getPointerOperand() == parent) {
            assert(op->hasAllZeroIndices());
            const User *op_user = dyn_cast<User>(op);
            assert(op_user);
            if (isa<Value>(op_user)) {
                return traverseAllUses(dyn_cast<Value>(op_user), nesting);
            }
        }
    } else if (isa<ConstantArray>(user)) {
        const ConstantArray *arr = dyn_cast<ConstantArray>(user);
        assert(arr);
        int index = -1;
        for (unsigned i = 0; i < arr->getNumOperands(); i++) {
            if (arr->getOperand(i) == parent) {
                index = i;
                break;
            }
        }
        assert(index >= 0);

        if (isa<Value>(arr)) {
            std::string result = traverseAllUses(dyn_cast<Value>(arr), nesting);
            if (result.size() > 0) {
                std::stringstream stream;
                stream << "((" << result << ")[" << index << "])";
                return stream.str();
            }
        }
    } else if (isa<GlobalVariable>(user)) {
        const GlobalVariable *glob = dyn_cast<GlobalVariable>(user);
        assert(glob);
        assert(glob->hasInitializer());
        assert(glob->getInitializer() == parent);

        return demangleVarName(glob->getName().str());
    }

    return "";
}

bool Play::dumpConstant(GlobalVariable *var, FILE *fp, int constant_index,
        DataLayout *layout) {
    if (var->hasUnnamedAddr()) {
        if (var->hasInitializer()) {
            std::string accessable = "";
            for (Value::const_use_iterator i = var->use_begin(),
                    e = var->use_end(); i != e; i++) {
                const Use *use = &*i;
                User *user = use->getUser();
                accessable = findReachableUse(user, var, 1);
                if (accessable.size() > 0) break;
            }

            if (accessable.size() > 0) {
                Constant *init = var->getInitializer();

                uint64_t size_in_bits =
                    layout->getTypeSizeInBits(init->getType());
                assert((size_in_bits % 8) == 0);
                uint64_t size_in_bytes = size_in_bits / 8;

                fprintf(fp, "%d \"%s\" %lu\n", constant_index,
                        accessable.c_str(), size_in_bytes);
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        /*
         * TODO named global constants should be simpler to handle, but until I
         * have an example of them to verify that on I'll hold off on adding
         * support
         */
        llvm::errs() << *var << "\n";
        assert(false);
    }
}

void Play::dumpGlobal(GlobalVariable *var, std::string varname,
        FILE *globals_fp, DataLayout *layout,
        std::map<std::string, StructInfo> *structFields) {
    /*
     * All globals look like pointers to clang, but need to be
     * converted to their base value
     */
    assert(var->getType()->isPointerTy());
    Type *type = var->getType()->getPointerElementType();
    std::string backing_string;
    raw_string_ostream stream(backing_string);
    type->print(stream);
    stream.flush();

    size_t type_size = layout->getTypeSizeInBits(type);
    int is_ptr = 0;
    int is_struct = 0;
    std::string struct_name;
    std::vector<std::string> struct_ptr_field_names;

    if (type->isPointerTy()) {
        is_ptr = 1;
    } else if (type->isStructTy()) {
        is_struct = 1;

        StructType *structTy = dyn_cast<StructType>(type);
        assert(structTy != NULL);

        if (!structTy->isLiteral()) {
            assert(structTy->getStructName().str().find("struct.") ==
                    0);
            struct_name = structTy->getStructName().str().substr(7);

            for (unsigned int i = 0;
                    i < structTy->getStructNumElements(); i++) {
                Type *field_type = structTy->getStructElementType(i);
                if (field_type->isPointerTy()) {
                    std::vector<StructFieldInfo> *fields =
                        structFields->at(struct_name).get_fields();
                    struct_ptr_field_names.push_back((*fields)[i].get_name());
                }
            }
        }
    }
    // Variable name, Full type, type size in bits, is ptr?, is struct?
    fprintf(globals_fp, "%s \" %s \" %lu %d %d ", varname.c_str(),
            backing_string.c_str(), type_size, is_ptr, is_struct);
    if (is_struct) {
        fprintf(globals_fp, "%s ", struct_name.c_str());
        for (std::vector<std::string>::iterator field_iter =
                struct_ptr_field_names.begin(), field_end =
                struct_ptr_field_names.end(); field_iter != field_end;
                field_iter++) {
            fprintf(globals_fp, "%s ", field_iter->c_str());
        }
    }
    fprintf(globals_fp, "\n");
}

void Play::findGlobalsAndConstants(Module &M, const char *globals_filename,
        const char *constants_filename) {
    DataLayout *layout = new DataLayout(&M);

    std::set<std::string> excluded_globals;
    excluded_globals.insert("__cudaFatCubinHandle");
    excluded_globals.insert("__nv_fatbinhandle_for_managed_rt");

    std::map<std::string, std::string> *global_names =
        mapGlobalsToOriginalName(M);
    std::map<std::string, StructInfo> *structFields =
        getStructFieldNames(M);

    FILE *globals_fp = fopen(globals_filename, "w");
    assert(globals_fp);
    FILE *constants_fp = fopen(constants_filename, "w");
    assert(constants_fp);

    int constant_index = 0;

    std::set<std::string> unsupported_sections;
    unsupported_sections.insert("__NV_CUDA,__fatbin");
    unsupported_sections.insert("__NV_CUDA,__nv_fatbin");

    for (Module::global_iterator i = M.global_begin(), e = M.global_end();
            i != e; i++) {
        GlobalValue *G = &*i;
        if (GlobalVariable *var = dyn_cast<GlobalVariable>(G)) {

            if (var->isConstant()) {
                if (unsupported_sections.find(std::string(var->getSection())) ==
                        unsupported_sections.end()) {
                    if (dumpConstant(var, constants_fp, constant_index, layout)) {
                        constant_index++;
                    }
                }
            } else {
                if (global_names->find(var->getName().str()) ==
                        global_names->end()) {
                    continue;
                }

                std::string varname = (*global_names)[var->getName().str()];

                if (excluded_globals.find(varname) != excluded_globals.end()) {
                    continue;
                }

                dumpGlobal(var, varname, globals_fp, layout, structFields);
            }
        }
    }

    fclose(globals_fp);
    fclose(constants_fp);
}

ReachableInfo Play::propagateAliases(Module &M, Hasher *H) {
    std::vector<Value *> *initial = collectInitialInstructionsToVisit(M);
    std::map<Value *, size_t> *initial_alias_mappings =
        collectInitialAliasMappings(M, H);

    ValueVisitor visitor(initial, initial_alias_mappings, &M, H);

    visitor.driver();

    return ReachableInfo(visitor.get_contains(),
            visitor.get_value_to_alias_group());
}

static std::string demangledFunctionName(std::string fname) {
    std::string result;

    if (fname.size() > 2 && fname[0] == '_' && fname[1] == 'Z') {
        int status;
        // Mangled function name
        char *demangled = abi::__cxa_demangle(fname.c_str(), NULL, NULL,
                &status);
#ifdef VERBOSE
        if (status) {
            errs() << "Failed to demangle " << fname << "\n";
        }
#endif
        assert(status == 0);

        char *end = strchr(demangled, '(');
        *end = '\0';
        result = std::string(demangled);
        while (result[0] == ' ') result = result.substr(1);
        while (result[result.size() - 1] == ' ') {
            result = result.substr(0, result.size() - 1);
        }
        free(demangled);
    } else {
        result = fname;
    }

    return result;
}

/*
 * Takes a templated function that has been made concrete by types, e.g.:
 *
 * double* Allocate<double>
 *
 * and converts it to just the base function name:
 *
 * Allocate
 */
static std::string removeTemplatedMangling(std::string fname) {
    size_t space_index = fname.rfind(' ');
    if (space_index == std::string::npos) {
        return fname;
    }
    size_t close_template_index = fname.rfind('>');
    if (close_template_index != fname.length() - 1) {
        return fname;
    }

    std::string without_return_type = fname.substr(space_index + 1);

    size_t template_index = without_return_type.find('<');
    assert(template_index != std::string::npos);
    std::string without_template = without_return_type.substr(0, template_index);

    return without_template;
}

void Play::dumpFunctionArgumentsToAliasMappings(Module &M,
        const char *filename, std::map<Value *, size_t> value_to_alias_group) {
    FILE *fp = fopen(filename, "w");
    assert(fp);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        /*
         * LLVM seems to generate some internal functions invisible to the
         * programmer. We don't want to emit metadata on these.
         */
        if (F != NULL && !F->empty()) {
            std::string demangled = demangledFunctionName(F->getName().str());

            demangled = removeTemplatedMangling(demangled);
            fprintf(fp, "%s", demangled.c_str());

            for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end();
                    i != e; i++) {
                Argument *arg = &*i;

                if (arg->getType()->isPointerTy()) {
                    size_t alias_no = searchForValueInKnownAliases(arg,
                            value_to_alias_group);
                    assert(alias_no > 0);

                    fprintf(fp, " %lu", alias_no);
                } else {
                    // Argument is not a pointer
                    fprintf(fp, " 0");
                }
            }
            fprintf(fp, "\n");
        }
    }
    fclose(fp);
}

void Play::dumpCallSiteAliases(Module &M, const char *filename,
        std::map<Value *, size_t> value_to_alias_group) {
    FILE *fp = fopen(filename, "w");
    assert(fp);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F != NULL && !F->empty()) {
            Function::BasicBlockListType &bblist = F->getBasicBlockList();
            for (Function::BasicBlockListType::iterator bb_iter =
                    bblist.begin(), bb_end = bblist.end(); bb_iter != bb_end;
                    bb_iter++) {
                BasicBlock *bb = &*bb_iter;
                for (BasicBlock::iterator i = bb->begin(), e = bb->end();
                        i != e; ++i) {
                    Instruction &inst = *i;
                    int line = inst.getDebugLoc().getLine();
                    int col = inst.getDebugLoc().getCol();

                    if (isa<MemSetInst>(&inst)) {
                        // Assume this maps to memset
                        MemSetInst *memset = dyn_cast<MemSetInst>(&inst);
                        assert(memset != NULL);

                        fprintf(fp, "memset %d %d 0 %lu 0 0\n", line, col,
                                searchForValueInKnownAliases(memset->getDest(),
                                    value_to_alias_group));

                    } else if (isa<MemTransferInst>(&inst)) {
                        MemTransferInst *transfer = dyn_cast<MemTransferInst>(&inst);
                        assert(transfer != NULL);

                        fprintf(fp, "memcpy %d %d 0 %lu %lu 0\n", line, col,
                                searchForValueInKnownAliases(transfer->getDest(),
                                    value_to_alias_group),
                                searchForValueInKnownAliases(transfer->getSource(),
                                    value_to_alias_group));

                    } else if (isa<CallInst>(&inst) &&
                            !isa<IntrinsicInst>(&inst)) {
                        CallInst *call = dyn_cast<CallInst>(&inst);
                        assert(call != NULL);

                        Function *callee = call->getCalledFunction();

                        std::string name;
                        if (callee == NULL) {
                            // Call through function pointer
                            name = "anon";
                        } else {
                            name = callee->getName().str();
                        }

                        size_t return_alias = 0;
                        if (call->getType()->isPointerTy()) {
                            /*
                             * If a function's return value is unused,
                             * return_alias will be zero.
                             */
                            return_alias = searchForValueInKnownAliases(
                                    call, value_to_alias_group, false);
                        }

                        fprintf(fp, "%s %d %d %lu", name.c_str(), line, col,
                                return_alias);

                        for (unsigned i = 0; i < call->getNumArgOperands();
                                i++) {
                            Value *param = call->getArgOperand(i);
                            if (param->getType()->isPointerTy()) {
                                size_t alias_no = searchForValueInKnownAliases(
                                        param, value_to_alias_group);
                                assert(alias_no > 0);

                                fprintf(fp, " %lu", alias_no);
                            } else {
                                fprintf(fp, " 0");
                            }
                        }
                        fprintf(fp, "\n");
                    }
                }
            }
        }
    }

    fclose(fp);
}

size_t Play::searchForValueInKnownAliases(Value *val,
        std::map<Value *, size_t> value_to_alias_group, bool force) {
    for (std::map<Value *, size_t>::iterator value_iter =
            value_to_alias_group.begin(), value_end =
            value_to_alias_group.end(); value_iter != value_end;
            value_iter++) {
        if (value_iter->first == val) {
            return value_iter->second;
        }
    }
    if (force) {
        errs() << *val << "\n";
        assert(false);
    }
    return 0;
}

void Play::unionGroups(int line, int col, std::string filename,
        std::set<size_t> *groups, bool isIndirect, bool isCall,
        Function *reason) {
    std::ostringstream reason_str;

    if (isIndirect) {
        reason_str << "prop:";
    } else {
        reason_str << "direct:";
    }

    if (isCall) {
        reason_str << "call:";
    } else {
        reason_str << "term:";
    }

    if (reason == NULL) {
        reason_str << "NULL";
    } else if (reason->getName().size() == 0) {
        reason_str << "anon";
    } else {
        reason_str << reason->getName().str();
    }

    unionGroups(line, col, filename, groups, reason_str.str());
}

/*
 * Combine these groups with any others that were found to be modified at the
 * specified line and column in the specified file. Store the merged results in
 * line_to_groups_modified.
 */
void Play::unionGroups(int line, int col, std::string filename,
        std::set<size_t> *groups, std::string reason) {
    std::set<size_t> *existing = NULL;
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
        g->reason = new std::string(reason);
        line_to_groups_modified.push_back(g);
    } else {
        for (std::set<size_t>::iterator parent_iter = groups->begin(),
                parent_end = groups->end(); parent_iter != parent_end;
                parent_iter++) {
            existing->insert(*parent_iter);
        }
    }
}

void Play::propagateGroupsDown(BasicBlock *curr, std::string filename,
        std::set<size_t> *groups, std::set<BasicBlock *> *visited,
        std::set<size_t> *changed_at_termination) {
    if (visited->find(curr) != visited->end()) {
        /*
         * We have looped back around from the original basic block to itself or
         * to some other block we already visited,
         * indicating a loop in the control flow of this sample. Either 1) there
         * is a statically defined infinite loop and this example is broken
         * anyway, or 2) there must be some other control flow that breaks out
         * of this loop, so we don't need to mark the aliases changed within the
         * loop because we haven't hit a checkpoint within it. So we just
         * return.
         */
        return;
    }

    visited->insert(curr);

    for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
            inst_iter != inst_end; inst_iter++) {
        Instruction *inst = inst_iter;
        if (isa<CallInst>(inst) && !isa<IntrinsicInst>(inst)) {
            CallInst *call = dyn_cast<CallInst>(inst);
            Function *callee = call->getCalledFunction();
            if (mayCreateCheckpoint(callee) != DOES_NOT) {
                unionGroups(call->getDebugLoc().getLine(),
                        call->getDebugLoc().getCol(), filename, groups, true,
                        true, callee);
                return;
            }
        }
    }

    TerminatorInst *term = curr->getTerminator();
    if (term->getNumSuccessors() == 0) {
        // Terminating basic block for a function, so mark this
        for (std::set<size_t>::iterator i = groups->begin(), e =
                groups->end(); i != e; i++) {
            changed_at_termination->insert(*i);
        }
    } else {
        for (unsigned i = 0; i < term->getNumSuccessors(); i++) {
            BasicBlock *child = term->getSuccessor(i);
            propagateGroupsDown(child, filename, groups, visited,
                    changed_at_termination);
        }
    }
}

void Play::collectLineToGroupsMappingInFunction(BasicBlock *curr,
        std::set<BasicBlock *> *visited, std::string filename,
        std::map<Value *, size_t> value_to_alias_group,
        std::set<size_t> *changed_at_termination) {
    assert(curr != NULL);

    // Only analyze each basic block once
    if (visited->find(curr) != visited->end()) {
        return;
    }
    visited->insert(curr);

    std::set<size_t> *groups = new std::set<size_t>();

    /*
     * For each instruction in this basic block, check if it is a STORE and if
     * so then find the alias group it modifies. Also, find the maximum line in
     * this basic block.
     */
    for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
            inst_iter != inst_end; inst_iter++) {
        Instruction *curr_inst = inst_iter;

        if (StoreInst *store = dyn_cast<StoreInst>(curr_inst)) {
            // Mark the destination alias group as modified
            assert(value_to_alias_group.find(store->getPointerOperand()) !=
                    value_to_alias_group.end());
            size_t group = value_to_alias_group[store->getPointerOperand()];
            groups->insert(group);
        } else if (isa<CallInst>(curr_inst) && !isa<IntrinsicInst>(curr_inst)) {
            /*
             * If we hit a call, we need to register the changes made within a
             * basic block so that a callee that calls checkpoint() knows to
             * checkpoint that state.
             */
            CallInst *call = dyn_cast<CallInst>(curr_inst);
            Function *callee = call->getCalledFunction();
            if (mayCreateCheckpoint(callee) != DOES_NOT) {
                if (groups->size() > 0) {
                    unionGroups(call->getDebugLoc().getLine(),
                            call->getDebugLoc().getCol(), filename, groups,
                            false, true, callee);
                    groups = new std::set<size_t>();
                }
            }
        }
    }

    TerminatorInst *term = curr->getTerminator();
    if (groups->size() > 0) {
        if (term->getNumSuccessors() > 0) {
            std::set<BasicBlock *> propagation_visited;
            for (unsigned i = 0; i < term->getNumSuccessors(); i++) {
                BasicBlock *child = term->getSuccessor(i);
                propagateGroupsDown(child, filename, groups,
                        &propagation_visited, changed_at_termination);
            }
        } else {
            for (std::set<size_t>::iterator i = groups->begin(), e =
                    groups->end(); i != e; i++) {
                changed_at_termination->insert(*i);
            }
        }
    }

    for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        collectLineToGroupsMappingInFunction(child, visited, filename,
                value_to_alias_group, changed_at_termination);
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
    errs() << "\"" << bb.getName() << "\"";
    assert(false);
}

/*
 * One annoying thing about LLVM's IR is that it has the ability to refactor
 * separate return statements in the source into a single RetInst in SSA form.
 * This means that even though there is only one TerminatorInst in a function
 * with zero successors, there are actual multiple places in the source code
 * where we want to insert an alias_group_changed call right before returning.
 *
 * First of all, this results in the alias_group_changed call that we generate
 * being a union of all aliases changed across all possible control paths to the
 * RetInst (which is okay for correctness, but may indicate that more has
 * changed than the host application has actually modified). More importantly,
 * this means that we need to make aliases that have been marked changed at the
 * terminator of a function a special case and mark them changed during
 * transformation at any point where we insert rm_stack for a function.
 *
 * To solve this we need to both set the return alias appropriate for functions
 * returning pointer values and set the aliases changed at the end of the
 * function appropriately. It seems that we also need to handle a few cases (and
 * rely on un-defined LLVM behavior).
 *
 * The aliases changed at the terminator is added to the exits.info file.
 * For every return statement found during the transformation pass, we
 * prepend an alias_group_changed call before the rm_stack call with
 * these alias groups passed in. The exit.info maps from function name to
 * values.
 *
 * A function in LLVM always seems to have a single return point, regardless of
 * how many implicit or explicit return statements it has or whether it is
 * returning a value or void. If no return statement exists and an implicit
 * return occurs at the end of a function, LLVM inserts an explicit RetInst in
 * the SSA form at the end of the function. If there are multiple points of
 * return, a single RetInst is inserted at the end of the function with jumps to
 * that basic block. If there are multiple points of return and a value is
 * returned, then LLVM introduces a temporary register with an alloca called
 * 'retval' and before jumping to the return basic block does a store on retval.
 * The basic block then does a load from retval and returns that value. As a
 * result, all possible values that could be returned will be aliased together
 * by the contains relationship with retval and there will only ever be a single
 * return alias for a given function.
 *
 * Therefore, exit.info maps from function name to the set of alias groups
 * that may be changed but not recorded at the termination of this function, and
 * to this single return alias. Then, we simply need to ensure that the function
 * name used to do a lookup during transformation and the one used to record the
 * mapping during the analysis stage are the same.
 */
std::map<Function *, std::set<size_t> *> *Play::collectLineToGroupsMapping(
        Module& M, std::map<Value *, size_t> value_to_alias_group) {
    std::map<Function *, std::set<size_t> *> *result =
        new std::map<Function *, std::set<size_t> *>();
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        std::set<BasicBlock *> visited;

        // A function may have no basic blocks if it is defined externally
        if (F->getBasicBlockList().size() > 0) {
            BasicBlock& entry = F->getEntryBlock();

            if (basicBlockIsValid(&entry)) {
                std::string filename = findFilenameContainingBB(entry, M);
                std::set<size_t> *changed_at_termination = new std::set<size_t>();

                collectLineToGroupsMappingInFunction(&entry, &visited, filename,
                        value_to_alias_group, changed_at_termination);

                (*result)[F] = changed_at_termination;
            }
        }
    }

    return result;
}

void Play::dumpLineToGroupsMappingTo(const char *filename) {
    FILE *fp = fopen(filename, "w");

    for (std::vector<GroupsModifiedAtLine *>::iterator line_iter =
            line_to_groups_modified.begin(), line_end =
            line_to_groups_modified.end(); line_iter != line_end; line_iter++) {
        GroupsModifiedAtLine *curr = *line_iter;
        std::set<size_t> *groups = curr->groups;

        fprintf(fp, "%s %d %d : { ", curr->loc.filename->c_str(),
                curr->loc.line_no, curr->loc.col);
        for (std::set<size_t>::iterator groups_iter = groups->begin(),
                groups_end = groups->end(); groups_iter != groups_end;
                groups_iter++) {
            if (groups_iter != groups->begin()) fprintf(fp, ", ");
            fprintf(fp, "%lu", *groups_iter);
        }
        fprintf(fp, " } %s\n", curr->reason->c_str());
    }

    fclose(fp);
}

bool Play::isCheckpoint(Function *callee) {
    return (callee != NULL && callee->getName().str() == "_Z10checkpointv");
}

void Play::initKnownFunctions() {
    char conf_filename[1024];
    char *chimes_home = getenv("CHIMES_HOME");
    assert(chimes_home);
    sprintf(conf_filename, "%s/src/preprocessing/non_checkpointing.conf",
            chimes_home);

    char *line = NULL; size_t line_length = 0;
    ssize_t nchars;
    FILE *fp = fopen(conf_filename, "r");
    while ((nchars = getline(&line, &line_length, fp)) != (ssize_t)-1) {
        while (nchars > 0 && line[nchars - 1] == '\n') {
            line[nchars - 1] = '\0';
            nchars--;
        }

        if (nchars > 0) {
            doesFunctionCreateCheckpoint[std::string(line)] = DOES_NOT;
        }
    }
    fclose(fp);
}

bool Play::isKnownFunction(Function *F) {
    return doesFunctionCreateCheckpoint.find(F->getName().str()) !=
        doesFunctionCreateCheckpoint.end();
}

CALLS_CHECKPOINT Play::knownFunctionCreatesCheckpoint(Function *F) {
    assert(isKnownFunction(F));
    return doesFunctionCreateCheckpoint[F->getName().str()];
}

CALLS_CHECKPOINT Play::mayCreateCheckpointHelper(Function *F,
        std::set<Instruction *> *visited) {
    if (F == NULL) return MAY;

    if (can_call_checkpoint.find(F) != can_call_checkpoint.end()) {
        return can_call_checkpoint[F];
    }

    CALLS_CHECKPOINT result = DOES_NOT;

    if (isCheckpoint(F)) {
        result = DOES;
    } else if (isKnownFunction(F)) {
        result = knownFunctionCreatesCheckpoint(F);
    } else if (F->empty()) {
        result = MAY;
    } else {
        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); result != DOES && bb_iter != bb_end;
                bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end();
                    result != DOES && i != e; ++i) {
                Instruction *inst = &*i;

                if (visited->find(inst) != visited->end()) {
                    continue;
                }

                if (CallInst *call = dyn_cast<CallInst>(inst)) {
                    // skip LLVM intrinsics
                    if (isa<IntrinsicInst>(call)) continue;

                    Function *child = call->getCalledFunction();

                    CALLS_CHECKPOINT child_result =
                        mayCreateCheckpointHelper(child, visited);
                    if (child_result > result) {
                        result = child_result;
                    }
                }
            }
        }
    }

    can_call_checkpoint[F] = result;
    return result;
}

CALLS_CHECKPOINT Play::mayCreateCheckpoint(Function *F) {
    std::set<Instruction *> visited;
    return mayCreateCheckpointHelper(F, &visited);
}

static DICompileUnit getCompileUnitFor(Module &M) {
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
    return module;
}

std::map<std::string, std::string> *Play::mapGlobalsToOriginalName(Module &M) {
    std::map<std::string, std::string> *global_mapping =
        new std::map<std::string, std::string>();
    DICompileUnit module = getCompileUnitFor(M);
    DIArray globals = module.getGlobalVariables();

    for (unsigned int g = 0; g < globals.getNumElements(); g++) {
        DIGlobalVariable di_global(globals.getElement(g));
        if (di_global.getLinkageName().size() == 0) {
            // Use display name as linkage name too
            (*global_mapping)[di_global.getDisplayName()] =
                di_global.getDisplayName();
        } else {
            assert(global_mapping->find(di_global.getLinkageName()) ==
                    global_mapping->end());
            (*global_mapping)[di_global.getLinkageName()] =
                di_global.getDisplayName();
        }
    }
    return global_mapping;
}

/*
 * Assumes mangled name has format _ZTS*struct_name_t where * is some decimal
 * number.
 */
static std::string demangleStructName(std::string mangled) {
    assert(mangled.find("_ZTS") == 0);
    std::string removed_prefix = mangled.substr(4);
    while (removed_prefix[0] >= '0' && removed_prefix[0] <= '9') {
        removed_prefix = removed_prefix.substr(1);
    }
    return removed_prefix;
}

static std::string DType_to_string(DIType curr, int nesting,
        DITypeIdentifierMap &TypeIdentifierMap) {
    assert(curr.isType());

    if (curr.isBasicType()) {
        return curr.getName().str();
    } else if (curr.isCompositeType()) {
        DICompositeType composite(curr);
        DIArray fields_defs = composite.getTypeArray();

        switch (composite.getTag()) {
            case (dwarf::DW_TAG_array_type): {
                assert(fields_defs.getNumElements() == 1);

                assert(fields_defs.getElement(0).isSubrange());
                DISubrange range(fields_defs.getElement(0));
                assert(range.getLo() == 0);
                assert(range.getCount() > 0);

                DIType from = composite.getTypeDerivedFrom().resolve(TypeIdentifierMap);
                if (from.isType()) {
                    std::string basetype = DType_to_string(from, nesting + 1,
                            TypeIdentifierMap);
                    if (basetype.length() > 0) {
                        std::stringstream acc;
                        acc << "[ " << range.getCount() << " x " << basetype << " ]";
                        return acc.str();
                    }
                }
                return "";
            }
            case (dwarf::DW_TAG_structure_type): {
                return "%struct." + composite.getName().str();
            }
            case (dwarf::DW_TAG_union_type): {
                assert(false);
            }
            case (dwarf::DW_TAG_enumeration_type): {
                assert(false);
            }
            case (dwarf::DW_TAG_subroutine_type): {
                return "";
            }
            case (dwarf::DW_TAG_class_type): {
                return "";
            }
            default: {
                assert(false);
            }
        }
        return "";
    } else if (curr.isDerivedType()) {
        DIDerivedType derived(curr);
        DIType from = derived.getTypeDerivedFrom().resolve(TypeIdentifierMap);

        std::string child;
        if (from.isType()) {
            child = DType_to_string(from, nesting + 1,
                    TypeIdentifierMap);
        } else {
            child = "void";
        }
        if (curr.getTag() == dwarf::DW_TAG_pointer_type) {
            return (child + "*");
        } else {
            return (child);
        }
    } else {
        llvm::errs() << curr.getName().str() << "\n";
        assert(false);
    }
}

std::map<std::string, StructInfo> *Play::getStructFieldNames(
        Module &M) {
    std::map<std::string, StructInfo> *struct_fields =
        new std::map<std::string, StructInfo>();

    DICompileUnit module = getCompileUnitFor(M);
    DIArray structs = module.getRetainedTypes();

    NamedMDNode *CU_Nodes = M.getNamedMetadata("llvm.dbg.cu");
    assert(CU_Nodes);
    DITypeIdentifierMap TypeIdentifierMap = llvm::generateDITypeIdentifierMap(
            CU_Nodes);

    for (unsigned int s = 0; s < structs.getNumElements(); s++) {
        DIType di_struct(structs.getElement(s));

        // If this isn't a struct, skip it
        if (di_struct.isCompositeType()) {
            DICompositeType composite(di_struct);
            DIArray fields_defs = composite.getTypeArray();

            std::string struct_name = demangleStructName(
                    composite.getIdentifier()->getString().str());
            bool unnamed_struct = di_struct.getName().str().empty();

            if (struct_name.empty()) {
                /*
                 * If unnamed, assume it isn't used.
                 */
                continue;
            }
            std::vector<StructFieldInfo> fields;

            for (unsigned int f = 0; f < fields_defs.getNumElements(); f++) {
                DIDescriptor field = fields_defs.getElement(f);
                if (field.getTag() == dwarf::DW_TAG_member) {
                    assert(field.isType());
                    DIType di_field(field);
                    std::string fieldname = di_field.getName().str();

                    if (di_field.isBasicType()) {
                        DIBasicType basic(di_field);
                        llvm::errs() << "BasicType field=" << fieldname <<
                            " " << struct_name << "\n";
                        assert(false); // i dont think a field can be a basic
                    } else {
                        assert(di_field.isDerivedType());
                        DIDerivedType derived(di_field);

                        DIType from = derived.getTypeDerivedFrom().resolve(TypeIdentifierMap);
                        std::string type = DType_to_string(from, 1, TypeIdentifierMap);
                        fields.push_back(StructFieldInfo(fieldname, type));
                    }
                }
            }

            struct_fields->insert(std::pair<std::string, StructInfo>(
                        struct_name, StructInfo(fields, unnamed_struct)));
        }
    }
    return struct_fields;
}

void Play::dumpStructInfoToFile(const char *filename,
        std::map<std::string, StructInfo> *struct_fields) {
    FILE *fp = fopen(filename, "w");
    for (std::map<std::string, StructInfo>::iterator struct_iter =
            struct_fields->begin(), struct_end = struct_fields->end();
            struct_iter != struct_end; struct_iter++) {
        std::vector<StructFieldInfo>* fields = struct_iter->second.get_fields();
        bool is_unnamed = struct_iter->second.get_is_unnamed();

        fprintf(fp, "%s %d", struct_iter->first.c_str(), (is_unnamed ? 1 : 0));
        for (std::vector<StructFieldInfo>::iterator field_iter = fields->begin(),
                field_end = fields->end(); field_iter != field_end;
                field_iter++) {
            if (field_iter->get_type().length() > 0) {
                fprintf(fp, " %s \"%s\"", field_iter->get_name().c_str(),
                        field_iter->get_type().c_str());
            }
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

std::string *Play::getFunctionDisplayName(Function *F, Module &M) {
    std::string fname = F->getName().str();

    if (function_to_demangled.find(fname) == function_to_demangled.end()) {
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

        for (unsigned int f = 0; f < functions.getNumElements(); f++) {
            DISubprogram di_func(functions.getElement(f));

            std::string fname = di_func.getLinkageName();
            if (fname.empty()) {
                fname = di_func.getDisplayName();
            }

            assert(function_to_demangled.find(di_func.getDisplayName()) ==
                    function_to_demangled.end() ||
                    function_to_demangled[fname] == di_func.getDisplayName());
            function_to_demangled[fname] = di_func.getDisplayName();
        }
    }

    if (function_to_demangled.find(fname) != function_to_demangled.end()) {
        return &(function_to_demangled[fname]);
    } else {
        return NULL;
    }
}

std::string *Play::getUniqueVarname(std::string varname, Function *F,
        std::set<std::string> *found_variables, Module &M) {
    std::string fname = F->getName().str();

    std::string *unique_varname = new std::string();
    int permute = 0;

    std::string *correct_fname = getFunctionDisplayName(F, M);
    do {
        std::ostringstream str_stream;
        str_stream << *correct_fname << "|" << varname << "|" << permute;
        *unique_varname = str_stream.str();
        permute++;
    } while (found_variables->find(*unique_varname) != found_variables->end());
    found_variables->insert(*unique_varname);

    return unique_varname;
}

static std::map<Value *, std::string> *mapValueToOriginalVarname(
        const Function *F) {
    std::map<Value *, std::string> *mapping =
        new std::map<Value *, std::string>();
    
    for (const_inst_iterator i = inst_begin(F), e = inst_end(F); i != e; i++) {
        const Instruction *inst = &*i;
        if (const DbgDeclareInst* dbgDeclare = dyn_cast<DbgDeclareInst>(inst)) {
            assert(mapping->find(dbgDeclare->getAddress()) == mapping->end());
            if (dbgDeclare->getAddress() != NULL) {
                assert(isa<AllocaInst>(dbgDeclare->getAddress()) ||
                        isa<Argument>(dbgDeclare->getAddress()));
                (*mapping)[dbgDeclare->getAddress()] =
                    DIVariable(dbgDeclare->getVariable()).getName();
            }
        }
    }

    return mapping;
}

std::string Play::isPossibleCheckpointCall(CallInst *call, Module &M) {
    if (!isa<IntrinsicInst>(call)) {
        CALLS_CHECKPOINT doesCheckpoint = mayCreateCheckpoint(
                call->getCalledFunction());
        if (doesCheckpoint == MAY || doesCheckpoint == DOES) {
            if (call->getCalledFunction() == NULL) {
                return ("---");
            } else {
                return (demangledFunctionName(call->getCalledFunction()->getName().str()));
            }
        }
    }
    return ("");
}

std::map<BasicBlock *, std::set<std::string> > *Play::collectPossibleCheckpointsInBBs(Function *F, Module &M) {
    std::map<BasicBlock *, std::set<std::string> > *mapping =
        new std::map<BasicBlock *, std::set<std::string> >();

    Function::BasicBlockListType &bblist = F->getBasicBlockList();
    for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
            bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
        BasicBlock *bb = &*bb_iter;

        mapping->insert(std::pair<BasicBlock *, std::set<std::string> >(bb,
                    std::set<std::string>()));

        for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                ++i) {
            Instruction *curr = &*i;

            if (CallInst *call = dyn_cast<CallInst>(curr)) {
                std::string checkpointable_call_name = isPossibleCheckpointCall(
                        call, M);
                if (checkpointable_call_name.size() > 0) {
                    mapping->at(bb).insert(checkpointable_call_name);
                }
            }
        }
    }

    return (mapping);
}

std::map<BasicBlock *, bool> *Play::containsLoad(Function *F,
        std::set<LoadInst *> *loads) {
    std::map<BasicBlock *, bool> *mapping = new std::map<BasicBlock *, bool>();

    Function::BasicBlockListType &bblist = F->getBasicBlockList();
    for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
            bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
        BasicBlock *bb = &*bb_iter;

        mapping->insert(std::pair<BasicBlock *, bool>(bb, false));

        for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                ++i) {
            Instruction *curr = &*i;

            if (isa<LoadInst>(curr) &&
                    loads->find(dyn_cast<LoadInst>(curr)) != loads->end()) {
                mapping->find(bb)->second = true;
                break;
            }
        }
    }

    return (mapping);
}

void Play::isPathFromFuncStartToCheckpointThroughStore(BasicBlock *bb,
        std::set<StoreInst *> *stores, bool foundStore,
        std::set<BasicBlock *> *pre_visited,
        std::set<BasicBlock *> *post_visited,
        std::set<std::string> *causesCheckpoint,
        std::map<BasicBlock *, std::set<std::string> > *bb_to_checkpoints,
        Module &M) {

    if (foundStore) {
        if (post_visited->find(bb) != post_visited->end()) {
            return;
        }
        post_visited->insert(bb);

        assert(bb_to_checkpoints->find(bb) != bb_to_checkpoints->end());
        std::set<std::string> possible_checkpoints = bb_to_checkpoints->at(bb);
        for (std::set<std::string>::iterator i = possible_checkpoints.begin(),
                e = possible_checkpoints.end(); i != e; i++) {
            causesCheckpoint->insert(*i);
        }
    } else {
        if (pre_visited->find(bb) != pre_visited->end()) {
            return;
        }
        pre_visited->insert(bb);

        for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e; i++) {
            Instruction *curr = &*i;

            /*
             * This block is here to make our analysis precise for stores that
             * occur in the middle of a basic block. If we find a store in the
             * middle of a basic block, we only want to consider the possible
             * checkpoints that come after that store.
             */
            if (!foundStore) {
                if (StoreInst *store = dyn_cast<StoreInst>(curr)) {
                    /*
                     * If this is a store to a stack variable discovered by the
                     * AllocaVisitor
                     */
                    if (stores->find(store) != stores->end()) {
                        foundStore = true;
                    }
                }
            } else {
                if (CallInst *call = dyn_cast<CallInst>(curr)) {
                    std::string checkpointable_call_name =
                        isPossibleCheckpointCall(call, M);
                    if (checkpointable_call_name.size() > 0) {
                        causesCheckpoint->insert(checkpointable_call_name);
                    }
                }
            }
        }
    }

    TerminatorInst *term = bb->getTerminator();
    for (unsigned i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        isPathFromFuncStartToCheckpointThroughStore(child, stores,
                foundStore, pre_visited, post_visited, causesCheckpoint,
                bb_to_checkpoints, M);
    }
}

/*
 * This function checks if any of the loads are performed after a checkpoint may
 * have been created.
 */
bool Play::isPathFromCheckpointThroughLoad(BasicBlock *bb,
        std::set<LoadInst *> *loads, bool foundCheckpoint,
        std::set<BasicBlock *> *pre_visited,
        std::set<BasicBlock *> *post_visited,
        std::map<BasicBlock *, bool> *bb_to_loads, Module &M) {

    if (foundCheckpoint) {
        if (post_visited->find(bb) != post_visited->end()) {
            return (false);
        }
        post_visited->insert(bb);

        assert(bb_to_loads->find(bb) != bb_to_loads->end());
        if (bb_to_loads->at(bb)) {
            return (true);
        }
    } else {
        if (pre_visited->find(bb) != pre_visited->end()) {
            return (false);
        }
        pre_visited->insert(bb);

        for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e; i++) {
            Instruction *curr = &*i;

            if (!foundCheckpoint) {
                if (CallInst *call = dyn_cast<CallInst>(curr)) {
                    std::string possible_checkpoint_funcname = isPossibleCheckpointCall(call, M);
                    if (possible_checkpoint_funcname.size() > 0) {
                        foundCheckpoint = true;
                    }
                }
            } else {
                if (isa<LoadInst>(curr) &&
                        loads->find(dyn_cast<LoadInst>(curr)) != loads->end()) {
                    return (true);
                }
            }
        }
    }

    TerminatorInst *term = bb->getTerminator();
    for (unsigned i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        if (isPathFromCheckpointThroughLoad(child, loads, foundCheckpoint,
                    pre_visited, post_visited, bb_to_loads, M)) {
            return (true);
        }
    }

    return (false);
}

/*
 * Returns a mapping from stack allocations which must be checkpointed to the
 * function calls which cause them to be checkpointed. If the list of function
 * calls is empty for a stack allocation, it means we were unable to determine
 * if it should be checkpointed and so it must be conservatively always
 * checkpointed.
 */
std::map<AllocaInst *, std::set<std::string> > *Play::findStackAllocationsAliveAtCheckpoint(Function *F, Module &M) {
    std::vector<AllocaInst *> *initial = new std::vector<AllocaInst *>();

    for (Function::iterator i = F->begin(), e = F->end(); i != e; i++) {
        BasicBlock *bb = &*i;
        for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                ++i) {
            Instruction *inst = &*i;
            if (isa<AllocaInst>(inst)) {
                initial->push_back(dyn_cast<AllocaInst>(inst));
            }
        }
    }

    AllocaVisitor visitor(initial);
    visitor.driver();

    std::set<BasicBlock *> s_pre_visited;
    std::set<BasicBlock *> s_post_visited;
    std::set<BasicBlock *> l_pre_visited;
    std::set<BasicBlock *> l_post_visited;

    /*
     * Construct a mapping from stack variable allocation to a list of function
     * names which may cause it to be checkpointed.
     */
    std::map<AllocaInst *, std::set<std::string> > *result =
        new std::map<AllocaInst *, std::set<std::string> >();
    for (std::vector<AllocaInst *>::iterator i = initial->begin(),
            e = initial->end(); i != e; i++) {
        AllocaInst *curr = *i;

        std::set<StoreInst *> *stores = visitor.get_stores(curr);
        std::set<LoadInst *> *loads = visitor.get_loads(curr);

        assert(result->find(curr) == result->end());

        if (visitor.is_unsolvable(curr)) {
            /*
             * If the visitor deemed this variable unsolvable, that means that
             * it is either a pointer-typed stack variable which is passed into
             * a child function (and so we cannot know how it is stored to or
             * loaded from) or a pointer-typed variable whose value is stored
             * into another variable (causing a similar problem).
             *
             * While this is true, because it is a variable allocated on the
             * stack we can assert that if the parent function cannot cause the
             * creation of a checkpoint, then it is possible to skip registering
             * this variable.
             */
            std::set<std::string> just_parent;
            // std::string *parent_display_name = getFunctionDisplayName(F, M);
            // assert(parent_display_name);
            // just_parent.insert(*parent_display_name);
            just_parent.insert(demangledFunctionName(F->getName().str()));
            result->insert(std::pair<AllocaInst *, std::set<std::string> >(curr,
                        just_parent));
        } else {
            BasicBlock *entry = &F->getEntryBlock();
            s_pre_visited.clear();
            s_post_visited.clear();
            l_pre_visited.clear();
            l_post_visited.clear();

            /*
             * The analysis below is a little coarse because it simply asks
             * which functions may create a checkpoint after the variable is
             * stored into, and then if the variable is ever loaded from after
             * the earliest of those functions on the CFG. In reality, it would
             * be possible for a variable to be stored to, a function called
             * that MAY (but does not actually) create a checkpoint, then the
             * variable loaded from, and then a checkpoint created (and the
             * variable never used again). In this scenario, the variable would
             * never actually have to be persisted but it would be because we
             * find a checkpoint call after the store, and we find a load after
             * a function that MAY checkpoint. To be more precise, we'd have to
             * tell the runtime that it's only necessary to checkpoint this
             * variable if a few specific functions actually do checkpoint,
             * rather than just any functions following the store. Just removing
             * any functions after the last load would be an improvement. TODO.
             */
            std::set<std::string> causesCheckpoint;
            std::map<BasicBlock *, std::set<std::string> > *bb_to_checkpoints =
                collectPossibleCheckpointsInBBs(F, M);
            std::map<BasicBlock *, bool> *bb_to_loads = containsLoad(F, loads);

            isPathFromFuncStartToCheckpointThroughStore(entry, stores, false,
                    &s_pre_visited, &s_post_visited, &causesCheckpoint,
                    bb_to_checkpoints, M);
            bool through_store = (causesCheckpoint.size() > 0);

            bool through_load = isPathFromCheckpointThroughLoad(entry, loads,
                    false, &l_pre_visited, &l_post_visited, bb_to_loads, M);
            bool should_checkpoint = (through_store && through_load);
            if (should_checkpoint) {
                if (causesCheckpoint.find("---") != causesCheckpoint.end()) {
                    /*
                     * If we are unable to fetch the function name/info for some
                     * called function then use the same behavior as if it were
                     * unsolvable: only checkpoint if the parent function may
                     * cause a checkpoint.
                     */
                    std::set<std::string> just_parent;
                    just_parent.insert(F->getName().str());
                    result->insert(std::pair<AllocaInst *, std::set<std::string> >(curr,
                                just_parent));
                } else {
                    result->insert(std::pair<AllocaInst *, std::set<std::string> >(
                                curr, causesCheckpoint));
                }
            }

            delete bb_to_checkpoints;
        }
    }

    return (result);
}

/*
 * TODO I don't think this supports stack-allocated arrays yet. Related TODO in
 * libchimes.cpp
 */
void Play::findStackAllocations(Module &M, const char *output_file,
        const char *struct_info_filename) {
    FILE *fp = fopen(output_file, "w");
    DataLayout *layout = new DataLayout(&M);
    std::set<std::string> found_variables;

    std::vector<StackAllocInfo *> alloc_infos;

    std::map<std::string, StructInfo> *structFields =
        getStructFieldNames(M);
    dumpStructInfoToFile(struct_info_filename, structFields);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F->empty()) continue;

        /*
         * Find all stack variables that might be alive when a checkpoint is
         * taken.
         */
        std::map<AllocaInst *, std::set<std::string> > *alive =
            findStackAllocationsAliveAtCheckpoint(F, M);

        std::map<Value *, std::string> *varname_mapping =
            mapValueToOriginalVarname(F);

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            if (!basicBlockIsValid(bb)) continue;

            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;

                // If this is a declaration for space on the stack
                if (AllocaInst *alloca = dyn_cast<AllocaInst>(&inst)) {

                    std::string varname = alloca->getName().str();
                    uint64_t type_size = layout->getTypeSizeInBits(
                            alloca->getAllocatedType());
                    assert(type_size % 8 == 0); // even number of bytes

                    // auto-generated llvm stack allocation for return values
                    if (strcmp(varname.c_str(), "retval") == 0) {
                        continue;
                    }

                    /*
                     * There may be stack allocations for temporary variables
                     * that do not exist in the original source. These can be
                     * safely ignored.
                     */
                    if (varname_mapping->find(alloca) == varname_mapping->end()) {
                        continue;
                    }
                    varname = (*varname_mapping)[alloca];

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
                    if (alive->find(alloca) != alive->end()) {
                        /*
                         * There will always be at least one function that this
                         * variable's registration is conditioned on (its
                         * enclosing parent).
                         */
                        assert(alive->at(alloca).size() > 0);
                        info->mayCheckpoint = true;
                        info->causesCheckpoint = new std::set<std::string>(
                                alive->at(alloca));
                    } else {
                        /*
                         * This stack variable was not identified as being
                         * possibly alive during a checkpoint, and therefore we
                         * can avoid inserting a registration call for it.
                         * However, we still want to split it if there is an
                         * initializer.
                         */
                        info->mayCheckpoint = false;
                        info->causesCheckpoint = new std::set<std::string>();
                    }

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
                    std::string *unique_varname = getUniqueVarname(varname,
                            F, &found_variables, M);

                    info->varname = unique_varname;

                    const Type *ty = alloca->getAllocatedType();
                    if (ty->isPointerTy()) {
                        info->is_ptr = 1;
                    } else if (ty->isStructTy()) {
                        const StructType *structTy = dyn_cast<StructType>(ty);
                        assert(structTy != NULL);
                        std::string struct_name = structTy->getStructName().str().substr(7);

                        if (structFields->find(struct_name) != structFields->end() && !structTy->isLiteral()) {
                            assert(structTy->getStructName().str().find("struct.") == 0);
                            info->is_struct = 1;
                            info->struct_type_name = struct_name;

                            for (unsigned int i = 0; i < structTy->getStructNumElements();
                                    i++) {
                                Type *field_type = structTy->getStructElementType(i);
                                if (field_type->isPointerTy()) {
                                    std::vector<StructFieldInfo>* fields = structFields->at(struct_name).get_fields();
                                    std::string fieldname = fields->at(i).get_name();
                                    info->struct_ptr_field_names->push_back(fieldname);
                                }
                            }
                        }
                    }

                    std::string backing_string;
                    raw_string_ostream stream(backing_string);
                    if (alloca->isArrayAllocation() &&
                            !isa<Constant>(alloca->getArraySize())) {
                        /*
                         * For god knows what reason LLVM prints a different
                         * type name for array allocations on the stack if they
                         * have a non-constant size vs. constant. If they have a
                         * constant size, they appear as something like
                         * [8 x double] to indicate an 8-element array of
                         * doubles. If they are of non-constant size, they
                         * simply appear as double. This logic adds the
                         * necessary brackets.
                         */
                        stream << "[na x ";
                    }
                    ty->print(stream);
                    if (alloca->isArrayAllocation() &&
                            !isa<Constant>(alloca->getArraySize())) {
                        stream << "]";
                    }
                    stream.flush();
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

        fprintf(fp, "%s %s \" %s \" %d %d %d",
                info->filename->c_str(), info->varname->c_str(),
                info->full_type_name.c_str(), info->type_size_in_bits,
                info->is_ptr, info->is_struct);
        if (info->is_struct) {
            fprintf(fp, " %s %lu", info->struct_type_name.c_str(),
                    field_names->size());
            for (std::vector<std::string>::iterator field_iter =
                    field_names->begin(), field_end = field_names->end();
                    field_iter != field_end; field_iter++) {
                fprintf(fp, " %s", field_iter->c_str());
            }
        }

        if (info->mayCheckpoint) {
            fprintf(fp, " 1");
            for (std::set<std::string>::iterator i =
                    info->causesCheckpoint->begin(), e =
                    info->causesCheckpoint->end(); i != e; i++) {
                std::string curr = *i;
                fprintf(fp, " %s", curr.c_str());
            }
        } else {
            fprintf(fp, " 0");
        }
        fprintf(fp, "\n");
    }

    delete layout;
    fclose(fp);
}

static Type *inferHostAllocationType(CallInst *callInst) {

    Use& use = *(callInst->use_begin());
    User *user = use.getUser();

    if (CastInst *cast = dyn_cast<CastInst>(user)) {
        /*
         * Look for a CallInst, followed immediately (and only) by a CastInst
         * from which we can infer this allocation's type.
         */
        Type *malloc_type = cast->getType();
        assert(malloc_type->isPointerTy());
        return malloc_type->getPointerElementType();
    } else if (StoreInst *store = dyn_cast<StoreInst>(user)) {
        /*
         * This value is stored directly to memory, so assume it is whatever the
         * element type of the target is.
         */
        Type *dst_type = store->getPointerOperand()->getType();
        assert(dst_type->isPointerTy());
        // Type of the allocation
        Type *dst_element_type = dst_type->getPointerElementType();
        // must be true because we're storing the output of malloc in dst
        assert(dst_element_type->isPointerTy());
        return dst_element_type->getPointerElementType();
    }

    errs() << *callInst << "\n";
    assert(false);
}

static void printStructInfo(FILE *fp, Type *base_type,
        std::map<std::string, StructInfo> *structFields) {
    StructType *structTy = dyn_cast<StructType>(base_type);
    assert(structTy != NULL);

    if (!structTy->isLiteral()) {
        fprintf(fp, " 0 1");
        assert(structTy->getStructName().str().find("struct.") == 0);

        std::string struct_name = structTy->getStructName().str().substr(7);
        fprintf(fp, " %s", struct_name.c_str());
        assert(structFields->find(struct_name) != structFields->end());
        std::vector<StructFieldInfo>* fields = structFields->at(struct_name).get_fields();
        for (unsigned int i = 0; i < structTy->getStructNumElements(); i++) {
            Type *field_type = structTy->getStructElementType(i);
            if (field_type->isPointerTy()) {
                std::string fieldname = fields->at(i).get_name();
                fprintf(fp, " %s", fieldname.c_str());
            }
        }
    } else {
        // TODO?
        assert(false);
    }
}

void Play::handleHostAllocation(CallInst *callInst, Function *callee,
        FILE *fp, std::set<int> &found_mallocs,
        std::map<std::string, StructInfo> *structFields,
        std::string fname, std::map<Value *, size_t> value_to_alias_group) {
    int line_no = callInst->getDebugLoc().getLine();
    int col = callInst->getDebugLoc().getCol();
    assert(line_no != 0);

    size_t alias_no;
    if (callee->getName().str() == "malloc" ||
            callee->getName().str() == "calloc" ||
            callee->getName().str() == "realloc") {
        alias_no = searchForValueInKnownAliases(callInst, value_to_alias_group);
    } else {
        // free
        assert(callInst->getNumArgOperands() == 1);
        alias_no = searchForValueInKnownAliases(callInst->getArgOperand(0),
                value_to_alias_group);
    }

    /*
     * This assert is triggered for variables that are
     * never used (e.g. an allocation that is never
     * referenced again). TODO rework to print a warning
     * or something?
     */
#ifdef VERBOSE
    if (alias_no == 0) {
        errs() << "Failed to find alias group for " << *callInst << "\n";
    }
#endif
    assert(alias_no > 0);

    /*
     * We don't currently support multiple mallocs per
     * line. TODO.
     */
    assert(found_mallocs.find(line_no) == found_mallocs.end());
    found_mallocs.insert(line_no);

    fprintf(fp, "%d %d %lu %s", line_no, col, alias_no,
            callee->getName().str().c_str());
    /*
     * For trivial cases of a malloc call that is
     * immediately cast to its correct type, we add some
     * extra type info to the heap allocation metrics to
     * help with replay.
     */
    if (callee->getName().str() == "malloc" ||
            callee->getName().str() == "calloc" ||
            callee->getName().str() == "realloc") {
        if (callInst->getNumUses() == 1) {
            Type *base_type = inferHostAllocationType(callInst);

            if (base_type->isPointerTy()) {
                // is_ptr=1, is_struct=0
                fprintf(fp, " 1 0");
            } else if (base_type->isStructTy()) {
                printStructInfo(fp, base_type, structFields);
            }
        } else {
            // TODO
            assert(false);
        }
    }
    fprintf(fp, "\n");
}

static Type *inferDeviceAllocationType(CallInst *callInst) {
    assert(callInst->getNumArgOperands() == 2);

    Value *ptr_to_ptr = callInst->getArgOperand(0);

    if (CastInst *cast = dyn_cast<CastInst>(ptr_to_ptr)) {
        // src is the type that we cast to void** from
        Type *src = cast->getSrcTy();
        assert(src->isPointerTy());
        /*
         * arr_type is the actual type of the pointer we're filling with a
         * device address
         */
        Type *arr_type = src->getPointerElementType();
        assert(arr_type->isPointerTy());
        return arr_type->getPointerElementType();
    }

    errs() << *callInst << "\n";
    assert(false);
}

void Play::handleDeviceAllocation(CallInst *callInst, Function *callee,
        FILE *fp, std::set<int> &found_mallocs,
        std::map<std::string, StructInfo> *structFields) {
    int line_no = callInst->getDebugLoc().getLine();
    int col = callInst->getDebugLoc().getCol();
    assert(line_no != 0);

    // no alias information supported on GPU yet
    fprintf(fp, "%d %d 0 %s", line_no, col, callee->getName().str().c_str());

    // We don't currently support multiple mallocs per line
    assert(found_mallocs.find(line_no) == found_mallocs.end());
    found_mallocs.insert(line_no);

    if (callee->getName().str() == "cudaMalloc") {
        Type *base_type = inferDeviceAllocationType(callInst);

        if (base_type->isPointerTy()) {
            // is_ptr=1, is_struct=0
            fprintf(fp, " 1 0");
        } else if (base_type->isStructTy()) {
            printStructInfo(fp, base_type, structFields);
        }
    }
    fprintf(fp, "\n");
}

void Play::findHeapAllocations(Module &M, const char *output_file,
        std::map<Value *, size_t> value_to_alias_group) {
    FILE *fp = fopen(output_file, "w");
    std::set<int> found_mallocs;

    std::map<std::string, StructInfo> *structFields =
        getStructFieldNames(M);

    errs() << "Heap allocation(s), reallocation(s), free(s):\n";

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
                                callee->getName().str() == "calloc" ||
                                callee->getName().str() == "free") {
                            handleHostAllocation(callInst,
                                    callee, fp, found_mallocs, structFields,
                                    F->getName().str(), value_to_alias_group);
                        } else if (callee->getName().str() == "cudaMalloc" ||
                                callee->getName().str() == "cudaFree") {
                            handleDeviceAllocation(callInst, callee, fp,
                                    found_mallocs, structFields);
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

static void printGroupsChanged(FILE *fp, Function *F,
        std::map<Function *, std::set<size_t> *> *func_to_groups_changed) {
    assert(func_to_groups_changed->find(F) != func_to_groups_changed->end());
    std::set<size_t> *changed = (*func_to_groups_changed)[F];

    for (std::set<size_t>::iterator i = changed->begin(), e = changed->end();
            i != e; i++) {
        size_t curr = *i;
        fprintf(fp, " %lu", curr);
    }
}

/*
 * This function dumps a list of the names of the functions called for each
 * function defined in this module. If a callee name cannot be resolved (e.g. it
 * is a function pointer) we explicitly indicate this in the dumped output.
 */
void Play::dumpFunctionCallTree(Module &M, const char *output_file) {
    FILE *fp = fopen(output_file, "w");

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        bool contains_unknown_functions = false;
        std::set<std::string> called;

        if (F->empty()) continue;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end();
                    i != e; ++i) {
                Instruction &inst = *i;

                if (CallInst *call = dyn_cast<CallInst>(&inst)) {
                    if (!isa<IntrinsicInst>(call)) {
                        Function *callee = call->getCalledFunction();

                        if (callee == NULL ||
                                callee->getName().str().size() == 0) {
                            contains_unknown_functions = true;
                        } else {
                            std::string demangled = demangledFunctionName(
                                        callee->getName().str());
                            if (doesFunctionCreateCheckpoint.find(demangled) ==
                                    doesFunctionCreateCheckpoint.end() ||
                                    doesFunctionCreateCheckpoint[demangled] !=
                                    DOES_NOT) {
                                called.insert(demangled);
                            }
                        }
                    }
                }
            }
        }

        std::string *caller_display_name = getFunctionDisplayName(F, M);
        assert(caller_display_name);
        fprintf(fp, "%s %d", demangledFunctionName(F->getName().str()).c_str(),
                contains_unknown_functions);

        CALLS_CHECKPOINT doesCheckpoint = mayCreateCheckpoint(F);
        if (doesCheckpoint == DOES) {
            fprintf(fp, " DOES");
        } else if (doesCheckpoint == DOES_NOT) {
            fprintf(fp, " DOES_NOT");
        } else {
            fprintf(fp, " MAY");
        }

        for (std::set<std::string>::iterator i = called.begin(),
                e = called.end(); i != e; i++) {
            std::string curr = *i;
            fprintf(fp, " %s", curr.c_str());
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

void Play::findFunctionExits(Module &M, const char *output_file,
        std::map<Value *, size_t> value_to_alias_group,
        std::map<Function *, std::set<size_t> *> *func_to_groups_changed) {
    FILE *fp = fopen(output_file, "w");

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F->empty()) continue;

        std::string *display_name = getFunctionDisplayName(F, M);

        if (display_name == NULL) continue;

        bool ret_inst_found = false;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (ReturnInst *ret = dyn_cast<ReturnInst>(&inst)) {
                    // Only one RET per function
                    assert(!ret_inst_found);
                    ret_inst_found = true;

                    if (ret->getReturnValue() != NULL &&
                            ret->getReturnValue()->getType()->isPointerTy()) {
                        size_t ret_alias = searchForValueInKnownAliases(ret,
                                value_to_alias_group);
                        assert(ret_alias > 0);
                        fprintf(fp, "%s %lu", display_name->c_str(),
                                ret_alias);
                    } else {
                        fprintf(fp, "%s 0", display_name->c_str());
                    }
                }
            }
        }

        if (!ret_inst_found) {
            fprintf(fp, "%s 0", display_name->c_str());
        }

        printGroupsChanged(fp, F, func_to_groups_changed);
        fprintf(fp, "\n");
    }

    fclose(fp);
}

Hasher *Play::calculate_hashes(Module &M) {
    Hasher *hashes = new Hasher();

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;
        for (inst_iterator i = inst_begin(F), e = inst_end(F); i != e; ++i) {
            Instruction *curr = &*i;
            hashes->add(curr);
        }

        for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end();
                i != e; i++) {
            hashes->add(&*i);
        }
    }

    for (Module::global_iterator i = M.global_begin(), e = M.global_end();
            i != e; i++) {
        hashes->add(&*i);
    }

    return hashes;
}

/*
 *  CallGraphSCC always has a size of 1 expect for recursive call graphs.
 *  However, we still have the guarantee that we are passed single-element call
 *  graphs (i.e. functions) in reverse depth traversal order.
 */
bool Play::runOnModule(Module &M) {
    Hasher *hashes = calculate_hashes(M);

    initKnownFunctions();

    /*
     * This first section of code groups values into alias sets, finds all alias
     * sets modified in each basic block, and produces the lines on which calls
     * to metrics collectors should be inserted in the original source code, as
     * well as the alias sets that should be marked by those calls.
     */

    findGlobalsAndConstants(M, "globals.info", "constants.info");

    ReachableInfo reachable = propagateAliases(M, hashes);

    dumpReachable(reachable, "reachable.info");

    std::map<Function *, std::set<size_t> *> *func_to_groups_changed =
        collectLineToGroupsMapping(M, reachable.get_value_to_alias_group());

    dumpLineToGroupsMappingTo("lines.info");

    /*
     * Dump a file mapping every function name to the alias group each of its
     * arguments belong to.
     */
    dumpFunctionArgumentsToAliasMappings(M, "func.info",
            reachable.get_value_to_alias_group());

    /*
     * Dump a file mapping every call site (defined by a function name, line
     * number, and column number) to the alias groups passed to each of its
     * parameters, in the parent context.
     */
    dumpCallSiteAliases(M, "call.info", reachable.get_value_to_alias_group());

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
    findHeapAllocations(M, "heap.info", reachable.get_value_to_alias_group());

    findFunctionExits(M, "exit.info", reachable.get_value_to_alias_group(),
            func_to_groups_changed);

    dumpFunctionCallTree(M, "tree.info");

#ifdef VERBOSE
    printFunctions(M);
    printValuesAndAliasGroups(reachable.get_value_to_alias_group());
    printReachable(reachable);
#endif

    return false;
}
