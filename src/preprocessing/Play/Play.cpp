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

#include "ValueVisitor.h"

#include <stdio.h>
#include <set>
#include <sstream>
#include <functional>
#include <cxxabi.h>

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
        std::set<size_t> *groups;
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
        std::map<std::string, SimpleLoc *> *function_to_start_line = NULL;
        std::map<std::string, std::string> *function_to_demangled = NULL;
        std::map<Function *, bool> can_call_checkpoint;

        explicit Play(): ModulePass(ID) {
        }

        bool runOnModule(Module &M) override;

        void getAnalysisUsage(AnalysisUsage &AU) const override {
            AU.addRequired<AliasAnalysis>();
        }

    private:
        void printFunctions(Module &M);
        void printValuesAndAliasGroups(
                std::map<Value *, size_t> value_to_alias_group);
        void dumpFunctionArgumentsToAliasMappings(Module &M,
                const char *filename, std::map<Value *, size_t> value_to_alias_group);
        // size_t searchDownUsesForAliasSetGroup(Value *val, std::string fname);
        // size_t searchDownUsesForAliasSetGroupHelper(Value *val, Value *parent,
        //         int nesting, std::set<Value *> *visited, std::string fname);
        size_t searchForValueInKnownAliases(Value *val,
                std::map<Value *, size_t> value_to_alias_group, bool force = true);
        // size_t iterateOverUses(Value *val, int nesting,
        //         std::set<Value *> *visited, std::string fname);
        void collectLineToGroupsMapping(Module &M,
                std::map<Value *, size_t> value_to_alias_group);
        void collectLineToGroupsMappingInFunction(BasicBlock *bb,
                std::set<BasicBlock *> &visited, std::string filename,
                std::map<Value *, size_t> value_to_alias_group);
        void unionGroups(int line, int col,
                std::string filename, std::set<size_t> *groups);
        void dumpLineToGroupsMappingTo(const char *filename);

        void findStackAllocations(Module &M, const char *output_file,
                const char *struct_info_filename);
        SimpleLoc *findStartingLineForFunction(Function *F, Module &M);
        void findHeapAllocations(Module &M, const char *output_file,
                std::map<Value *, size_t> value_to_alias_group);
        // size_t searchUpDefsForAliasSetGroup(Value *val, int nesting,
        //         std::string fname);
        std::map<std::string, std::vector<std::string>> *getStructFieldNames(
                Module &M);
        void dumpStructInfoToFile(const char *filename, std::map<std::string,
                std::vector<std::string>> *struct_fields);
        bool isCallToCheckpoint(CallInst *call);
        bool callsCheckpoint(Function *F);
        std::string findFilenameContainingBB(BasicBlock &bb, Module &M);
        std::string *get_unique_varname(std::string varname, Function *F,
                std::set<std::string> *found_variables, Module &M);
        // ReachableInfo findReachable(Module &M);
        void printReachable(ReachableInfo &R);
        void dumpReachable(ReachableInfo &R, const char *filename);
        void handleHostAllocation(CallInst *callInst, Function *callee,
                FILE *fp, std::set<int> &found_mallocs,
                std::map<std::string, std::vector<std::string>> *structFields,
                std::string fname,
                std::map<Value *, size_t> value_to_alias_group);
        void handleDeviceAllocation(CallInst *callInst, Function *callee,
                FILE *fp, std::set<int> &found_mallocs,
                std::map<std::string, std::vector<std::string>> *structFields);
        // void add_value_to_alias_mapping(Value *val, size_t alias_id,
        //         std::string fname, bool accept_zero = false);
        // size_t get_hash_for(Function *F, int alias_set);
        void dumpCallSiteAliases(Module &M, const char *filename,
                std::map<Value *, size_t> value_to_alias_group);
        bool isConstantGlobal(Value *val);
        ReachableInfo propagateAliases(Module &M);
        std::vector<Value *> *collectInitialInstructionsToVisit(Module &M);
        std::map<Value *, size_t> *collectInitialAliasMappings(Module &M);
        void findFunctionExits(Module &M, const char *output_file,
                std::map<Value *, size_t> value_to_alias_group);
    };
}

char Play::ID = 0;
static RegisterPass<Play> X("play", "Play Pass");

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

std::map<Value *, size_t> *Play::collectInitialAliasMappings(Module &M) {
    std::map<Value *, size_t> *mappings = new std::map<Value *, size_t>();

    for (Module::iterator i = M.begin(), e = M.end(); i != e; i++) {
        Function *F = &*i;
        
        for (Function::arg_iterator ai = F->arg_begin(), ae = F->arg_end();
                ai != ae; ai++) {
            Argument *A = &*ai;
            assert(mappings->find(A) == mappings->end());
            (*mappings)[A] = hash_argument(A);
        }

        for (Function::iterator bi = F->begin(), be = F->end(); bi != be; bi++) {
            BasicBlock *BB = &*bi;
            for (BasicBlock::iterator ii = BB->begin(), ie = BB->end();
                    ii != ie; ii++) {
                Instruction *insn = &*ii;
                if (isa<AllocaInst>(insn)) {
                    (*mappings)[insn] = hash_instruction(insn);
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
            size_t alias = hash_global(G);
            (*mappings)[G] = alias;
            global_type_to_alias[G->getType()] = alias;
        } else {
            (*mappings)[G] = global_type_to_alias[G->getType()];
        }
    }

    return mappings;
}

ReachableInfo Play::propagateAliases(Module &M) {
    std::vector<Value *> *initial = collectInitialInstructionsToVisit(M);
    std::map<Value *, size_t> *initial_alias_mappings = collectInitialAliasMappings(M);

    ValueVisitor visitor(initial, initial_alias_mappings);

    visitor.driver();

    return ReachableInfo(visitor.get_contains(),
            visitor.get_value_to_alias_group());
}

bool Play::isConstantGlobal(Value *val) {
    if (isa<GlobalValue>(val)) {
        return true;
    } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
        return isConstantGlobal(getele->getPointerOperand());
     } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
         return isConstantGlobal(load->getPointerOperand());
    } else {
        return false;
    }
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
        free(demangled);
    } else {
        result = fname;
    }

    return result;
}

void Play::dumpFunctionArgumentsToAliasMappings(Module &M,
        const char *filename, std::map<Value *, size_t> value_to_alias_group) {
    FILE *fp = fopen(filename, "w");
    assert(fp);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F != NULL && !F->empty()) {
            std::string demangled = demangledFunctionName(F->getName().str());
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
                    if (isa<CallInst>(&inst) && !isa<DbgInfoIntrinsic>(&inst)) {
                        CallInst *call = dyn_cast<CallInst>(&inst);
                        assert(call != NULL);

                        Function *callee = call->getCalledFunction();
                        if (callee == NULL) continue;

                        int line = inst.getDebugLoc().getLine();
                        int col = inst.getDebugLoc().getCol();
                        std::string name = callee->getName().str();

                        size_t return_alias = 0;
                        if (callee->getReturnType()->isPointerTy()) {
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

// size_t Play::iterateOverUses(Value *val, int nesting,
//         std::set<Value *> *visited, std::string fname) {
// #ifdef VERBOSE
//     for (Value::use_iterator use_iter = val->use_begin(),
//             use_end = val->use_end(); use_iter != use_end;
//             use_iter++) {
//         Use& use = *use_iter;
//         errs() << "  Has use \"" << *use.getUser() << "\"\n";
//     }
// #endif
// 
//     for (Value::use_iterator use_iter = val->use_begin(),
//             use_end = val->use_end(); use_iter != use_end;
//             use_iter++) {
//         Use& use = *use_iter;
// 
//         size_t foundUse = searchDownUsesForAliasSetGroupHelper(use.getUser(),
//                 val, nesting, visited, fname);
//         if (foundUse != 0) return foundUse;
//     }
// 
//     return 0;
// }

// size_t Play::searchDownUsesForAliasSetGroup(Value *val, std::string fname) {
//     std::set<Value *> visited;
//     assert(false);
// 
//     size_t foundThis = searchForValueInKnownAliases(val);
//     if (foundThis != 0) {
//         return foundThis;
//     }
//     return iterateOverUses(val, 0, &visited, fname);
// }

// size_t Play::searchDownUsesForAliasSetGroupHelper(Value *val, Value *parent,
//         int nesting, std::set<Value *> *visited, std::string fname) {
// #ifdef VERBOSE
//     errs() << "Searching down use chains for group of: \"" << *val <<
//         "\" nesting=" << nesting << "\n";
// #endif
// 
//     if (visited->find(val) != visited->end()) return 0;
//     visited->insert(val);
// 
//     if (nesting == 0) {
//         size_t foundThis = searchForValueInKnownAliases(val);
//         if (foundThis != 0) {
// #ifdef VERBOSE
//             errs() << "  Found group for \"" << *val << "\"\n";
// #endif
//             return foundThis;
//         }
//     }
// 
//     if (StoreInst *store = dyn_cast<StoreInst>(val)) {
// #ifdef VERBOSE
//         errs() << "  Is a store with pointer \"" << *store->getPointerOperand() << "\"\n";
// #endif
// //         if (store->getPointerOperand() == parent) {
// //             /*
// //              * If this use chain ends with a store to the location we are
// //              * tracking, that doesn't allow us to find an alias.
// //              */
// //             return 0;
// //         } else if (store->getValueOperand() == parent) {
// //             //TODO
// //         } else {
// // #ifdef VERBOSE
// //         errs() << "  Parent is " << *parent << "\n";
// // #endif
// //             assert(false);
// //         }
//         return searchDownUsesForAliasSetGroupHelper(store->getPointerOperand(),
//                 NULL, nesting + 1, visited, fname);
//     } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
// #ifdef VERBOSE
//         errs() << "  Is a load with pointer \"" << *load->getPointerOperand() <<
//             "\", nesting=" << nesting << "\n";
// #endif
//         return iterateOverUses(val, nesting - 1, visited, fname);
//     } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
// #ifdef VERBOSE
//         errs() << "  Is a getelementptr with pointer \"" <<
//             *getele->getPointerOperand() << "\"\n";
// #endif
//         return iterateOverUses(val, nesting, visited, fname);
//     } else if (CallInst *call = dyn_cast<CallInst>(val)) {
// #ifdef VEROSE
//         errs() << "  Is a call with " << call->getNumArgOperands() <<
//             " arguments\n";
// #endif
//         if (parent != NULL && call->getCalledFunction() != NULL) {
//             unsigned int arg_index = 0;
//             for (; arg_index < call->getNumArgOperands(); arg_index++) {
//                 if (call->getArgOperand(arg_index) == parent) {
//                     break;
//                 }
//             }
//             assert(arg_index < call->getNumArgOperands());
// 
//             Function *callee = call->getCalledFunction();
//             Argument *arg = NULL;
//             unsigned int count_args = 0;
//             for (Function::arg_iterator i = callee->arg_begin(),
//                     e = callee->arg_end(); i != e; i++) {
//                 if (count_args == arg_index) {
//                     arg = i;
//                     break;
//                 }
//                 count_args++;
//             }
//             if (arg == NULL) {
//                 assert(callee->isVarArg());
//                 return 0;
//             } else {
//                 return searchDownUsesForAliasSetGroupHelper(arg, NULL, nesting,
//                         visited, fname);
//             }
//         } else {
//             return 0;
//         }
//     } else {
//         return iterateOverUses(val, nesting, visited, fname);
//     }
//     
//     return 0;
// }

// std::map<Value *, size_t> Play::InitializeAliasGroups(Module &M,
//         AliasAnalysis *AA) {
//     std::map<Value *, size_t> initial_value_to_alias_group;
// 
//     // For each function declared here
//     for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
//         Function *F = &*I;
// 
//         if (F != NULL && !F->empty()) {
//             int count_alias_sets = 0;
// 
//             // Construct alias sets
//             AliasSetTracker *AST = new AliasSetTracker(*AA);
//             for (inst_iterator I = inst_begin(F),
//                     E = inst_end(F); I != E; ++I) {
//                 AST->add(&*I);
//             }
// 
//             // Iterate over alias sets within F
//             for (ilist<AliasSet>::iterator iter = AST->begin(),
//                     e = AST->end(); iter != e; iter++) {
//                 AliasSet &set = *iter;
//                 /*
//                  * Calculate a hash for this function-local alias set and
//                  * associate all values with it
//                  */
//                 size_t hash = get_hash_for(F, count_alias_sets++);
// 
//                 // Iterate over aliases in a single alias set
//                 for (AliasSet::iterator set_iter = set.begin(), e = set.end();
//                         set_iter != e; set_iter++) {
//                     Value *val = set_iter->getValue();
// 
//                     assert(hash != 0);
//                     assert(val->getType()->isPointerTy());
// 
//                     initial_value_to_alias_group[val] = hash;
//                 }
//             }
// 
//             delete AST;
//         }
//     }
// 
//     return initial_value_to_alias_group;
// }

/*
 * Combine these groups with any others that were found to be modified at the
 * specified line and column in the specified file. Store the merged results in
 * line_to_groups_modified.
 */
void Play::unionGroups(int line, int col, std::string filename,
        std::set<size_t> *groups) {

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
        line_to_groups_modified.push_back(g);
    } else {
        for (std::set<size_t>::iterator parent_iter = groups->begin(),
                parent_end = groups->end(); parent_iter != parent_end;
                parent_iter++) {
            existing->insert(*parent_iter);
        }
    }
}

void Play::collectLineToGroupsMappingInFunction(BasicBlock *curr,
        std::set<BasicBlock *>& visited, std::string filename,
        std::map<Value *, size_t> value_to_alias_group) {
    assert(curr != NULL);

    // Only analyze each basic block once
    if (visited.find(curr) != visited.end()) {
        return;
    }
    visited.insert(curr);

    std::set<size_t> *groups = new std::set<size_t>();
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
            assert(maxline != -1);
            if (groups->size() > 0) {
                unionGroups(maxline, maxcol, filename, groups);
                groups = new std::set<size_t>();
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
        collectLineToGroupsMappingInFunction(child, visited, filename,
                value_to_alias_group);
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
void Play::collectLineToGroupsMapping(Module& M,
        std::map<Value *, size_t> value_to_alias_group) {
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        std::set<BasicBlock *> visited;

        // A function may have no basic blocks if it is defined externally
        if (F->getBasicBlockList().size() > 0) {
            BasicBlock& entry = F->getEntryBlock();

            std::string filename = findFilenameContainingBB(entry, M);

            collectLineToGroupsMappingInFunction(&entry, visited, filename,
                    value_to_alias_group);
        }
    }
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

// size_t Play::searchUpDefsForAliasSetGroup(Value *val, int nesting,
//         std::string fname) {
//     assert(false);
// 
//     if (nesting == 0) {
//         size_t alias_no = searchForValueInKnownAliases(val);
//         if (alias_no != 0) return alias_no;
//     }
// 
// #ifdef VERBOSE
//     errs() << "Searching up defs from " << *val << " nesting=" << nesting <<
//         "\n";
// #endif
// 
//     if (AllocaInst *alloc = dyn_cast<AllocaInst>(val)) {
//         std::set<Value *> visited;
//         return searchDownUsesForAliasSetGroupHelper(alloc, NULL, nesting,
//                 &visited, fname);
//     } else if (LoadInst *load = dyn_cast<LoadInst>(val)) {
//         return searchUpDefsForAliasSetGroup(load->getPointerOperand(),
//                 nesting + 1, fname);
//     } else if (GEPOperator *getele = dyn_cast<GEPOperator>(val)) {
//         return searchUpDefsForAliasSetGroup(getele->getPointerOperand(),
//                 nesting, fname);
//     } else if (dyn_cast<StoreInst>(val)) {
//         /*
//          * This shouldn't be possible, because store shouldn't be producing any
//          * defs. assert(0) here so that if it is possible, we have to debug.
//          */
//         assert(0);
//         return 0;
//     } else if (isa<Constant>(val)) {
//         return 0;
//     } else if (User *user = dyn_cast<User>(val)) {
//         /*
//          * This isn't true, but assert it for now to get a prototype working so
//          * we'll trip it when it actually starts being not true and we'll have
//          * to special-case pointer chasing through different instruction types.
//          */
//         if (BinaryOperator *binop = dyn_cast<BinaryOperator>(user)) {
//             if (binop->getOpcode() == Instruction::SRem ||
//                     binop->getOpcode() == Instruction::SDiv ||
//                     binop->getOpcode() == Instruction::Mul ||
//                     binop->getOpcode() == Instruction::FSub ||
//                     binop->getOpcode() == Instruction::FDiv ||
//                     binop->getOpcode() == Instruction::FMul ||
//                     binop->getOpcode() == Instruction::FAdd) {
//                 /*
//                  * Operators that don't have any meaning in the context of
//                  * aliases (e.g. floating-point operations).
//                  */
//                 return 0;
//             } else if (binop->getOpcode() == Instruction::Add ||
//                     binop->getOpcode() == Instruction::Sub) {
//                 assert(user->getNumOperands() == 2);
//                 Value *op1 = user->getOperand(0);
//                 Value *op2 = user->getOperand(1);
//                 bool op1IsPtr = op1->getType()->isPointerTy();
//                 bool op2IsPtr = op2->getType()->isPointerTy();
//                 assert(!(op1IsPtr && op2IsPtr)); // not both pointers
// 
//                 if (op1IsPtr) {
//                     return searchUpDefsForAliasSetGroup(op1, nesting, fname);
//                 } else if (op2IsPtr) {
//                     return searchUpDefsForAliasSetGroup(op2, nesting, fname);
//                 } else {
//                     return 0;
//                 }
//             } else {
//                 // Unsupported binary operator
//                 errs() << *binop << "\n";
//                 assert(false);
//             }
//         } else if (CallInst *call = dyn_cast<CallInst>(user)) {
//             /*
//              * TODO for some calls we should be able to collect the alias groups
//              * that are returned?
//              */
//             return 0;
//         }
// 
//         assert(user->getNumOperands() == 1);
//         Value *op = user->getOperand(0);
//         return searchUpDefsForAliasSetGroup(op, nesting, fname);
//     } else {
//         return 0;
//     }
// }

/*
 * Builds a mapping from alias groups to alias groups that are directly
 * reachable by dereferencing them. Basically, if you have a pointer to pointers
 * that belongs to alias group A and you store second pointer in it which is in
 * alias group B, this builds a mapping from A->B because the alias group B is
 * reachable from (but not aliased with) B.
 */
// ReachableInfo Play::findReachable(Module &M) {
//     std::map<size_t, std::vector<size_t> > contains;
//     std::map<size_t, std::vector<size_t> > stored_in;
// 
//     // For each function in this module
//     for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
//         Function *F = &*I;
// 
//         // For each basic block
//         Function::BasicBlockListType &bblist = F->getBasicBlockList();
//         for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
//                 bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
//             BasicBlock *bb = &*bb_iter;
//             // For each instruction
//             for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
//                     ++i) {
//                 Instruction &inst = *i;
// 
//                 if (StoreInst *store = dyn_cast<StoreInst>(&inst)) {
//                     // Memory address we are storing to
//                     Value *dst = store->getPointerOperand();
//                     Type *dst_type = dst->getType();
//                     assert(dst_type->isPointerTy());
// 
//                     // Storing a pointer into memory
//                     if (dst_type->getPointerElementType()->isPointerTy()) {
// 
//                         // Pointer value being stored into dst
//                         Value *storing = store->getValueOperand();
// 
// #ifdef VERBOSE
//                         errs() << "\nStarting search down for alias group of " <<
//                             *storing << "\n";
// #endif
//                         size_t storing_group = searchForValueInKnownAliases(
//                                 storing);
//                         assert(storing_group != 0);
//                         /*
//                         size_t storing_group = searchDownUsesForAliasSetGroup(
//                                 storing, F->getName().str());
//                         if (storing_group == 0) {
// #ifdef VERBOSE
//                             errs() << "\nStarting search up for alias group of " <<
//                                 *storing << "\n";
// #endif
//                             storing_group = searchUpDefsForAliasSetGroup(
//                                     storing, 0, F->getName().str());
//                         }
// #ifdef VERBOSE
//                         errs() << "Determined group " << storing_group << "\n\n";
// #endif
//                         */
// 
//                         size_t dst_group = searchForValueInKnownAliases(dst);
//                         assert(dst_group != 0);
//                         /*
// #ifdef VERBOSE
//                         errs() << "\nStarting search down for alias group of " <<
//                             *dst << "\n";
// #endif
//                         size_t dst_group = searchDownUsesForAliasSetGroup(dst,
//                                 F->getName().str());
//                         if (dst_group == 0) {
// #ifdef VERBOSE
//                             errs() << "\nStarting search up for alias group of " <<
//                                 *dst << "\n";
// #endif
//                             dst_group = searchUpDefsForAliasSetGroup(
//                                     dst, 0, F->getName().str());
//                         }
// #ifdef VERBOSE
//                         errs() << "Determined group " << dst_group << "\n\n";
// #endif
//                         */
// 
//                         if (storing_group != 0 && dst_group != 0) {
//                             if (contains.find(dst_group) == contains.end()) {
//                                 contains[dst_group] = std::vector<size_t>();
//                             }
//                             contains[dst_group].push_back(storing_group);
// 
//                             if (stored_in.find(storing_group) == stored_in.end()) {
//                                 stored_in[storing_group] = std::vector<size_t>();
//                             }
//                             stored_in[storing_group].push_back(dst_group);
//                         }
//                     }
//                 }
//             }
//         }
//     }
// 
//     return ReachableInfo(contains, stored_in);
// }

static Type *inferHostAllocationType(CallInst *callInst) {
    Type *base_type = NULL;

    Use& use = *(callInst->use_begin());
    User *user = use.getUser();

    // Look for a CallInst, followed immediately (and only) by a CastInst.
    if (CastInst *cast = dyn_cast<CastInst>(user)) {
        Type *malloc_type = cast->getType();
        assert(malloc_type->isPointerTy());
        base_type = malloc_type->getPointerElementType();
    }
    return base_type;
}

static void printStructInfo(FILE *fp, Type *base_type,
        std::map<std::string, std::vector<std::string>> *structFields) {
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

void Play::handleHostAllocation(CallInst *callInst, Function *callee,
        FILE *fp, std::set<int> &found_mallocs,
        std::map<std::string, std::vector<std::string>> *structFields,
        std::string fname, std::map<Value *, size_t> value_to_alias_group) {
    int line_no = callInst->getDebugLoc().getLine();
    int col = callInst->getDebugLoc().getCol();
    assert(line_no != 0);

    size_t alias_no;
    if (callee->getName().str() == "malloc" ||
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
     * line
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
    if (callee->getName().str() == "malloc" &&
            callInst->getNumUses() == 1) {
        Type *base_type = inferHostAllocationType(callInst);

        if (base_type != NULL) {
            if (base_type->isPointerTy()) {
                // is_ptr=1, is_struct=0
                fprintf(fp, " 1 0");
            } else if (base_type->isStructTy()) {
                printStructInfo(fp, base_type, structFields);
            }
        }
    }
    fprintf(fp, "\n");
}

static Type *inferDeviceAllocationType(CallInst *callInst) {
    Type *base_type = NULL;
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
        base_type = arr_type->getPointerElementType();
    }

    return base_type;
}

void Play::handleDeviceAllocation(CallInst *callInst, Function *callee,
        FILE *fp, std::set<int> &found_mallocs,
        std::map<std::string, std::vector<std::string>> *structFields) {
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

        if (base_type != NULL) {
            if (base_type->isPointerTy()) {
                // is_ptr=1, is_struct=0
                fprintf(fp, " 1 0");
            } else if (base_type->isStructTy()) {
                printStructInfo(fp, base_type, structFields);
            }
        }
    }
    fprintf(fp, "\n");
}

void Play::findHeapAllocations(Module &M, const char *output_file,
        std::map<Value *, size_t> value_to_alias_group) {
    FILE *fp = fopen(output_file, "w");
    std::set<int> found_mallocs;

    std::map<std::string, std::vector<std::string>> *structFields =
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

void Play::findFunctionExits(Module &M, const char *output_file,
        std::map<Value *, size_t> value_to_alias_group) {
    FILE *fp = fopen(output_file, "w");

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        Function::BasicBlockListType &bblist = F->getBasicBlockList();
        for (Function::BasicBlockListType::iterator bb_iter = bblist.begin(),
                bb_end = bblist.end(); bb_iter != bb_end; bb_iter++) {
            BasicBlock *bb = &*bb_iter;
            for (BasicBlock::iterator i = bb->begin(), e = bb->end(); i != e;
                    ++i) {
                Instruction &inst = *i;
                if (ReturnInst *ret = dyn_cast<ReturnInst>(&inst)) {
                    if (ret->getReturnValue() == NULL) continue;

                    if (ret->getReturnValue()->getType()->isPointerTy()) {
                        size_t alias = searchForValueInKnownAliases(ret,
                                value_to_alias_group);
                        assert(alias > 0);
                        fprintf(fp, "%d %d %lu\n", ret->getDebugLoc().getLine(),
                                ret->getDebugLoc().getCol(), alias);
                    }
                }
            }
        }
    }

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
    printFunctions(M);

    ReachableInfo reachable = propagateAliases(M);

    printValuesAndAliasGroups(reachable.get_value_to_alias_group());

    printReachable(reachable);
    dumpReachable(reachable, "reachable.info");

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

    findFunctionExits(M, "exit.info", reachable.get_value_to_alias_group());

    return false;
}
