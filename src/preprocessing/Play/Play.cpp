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
#include "llvm/IR/CFG.h"

#include "AllocaVisitor.h"
#include "ValueVisitor.h"
#include "Hasher.h"

#include <time.h>
#include <sys/time.h>

#include <stdio.h>
#include <utility>
#include <sstream>
#include <functional>
#include <cxxabi.h>
#include <string>
#include <map>
#include <set>

#include "Play.h"

static std::string demangleABIName(std::string fname);

char Play::ID = 0;
static RegisterPass<Play> X("play", "Play Pass");

static bool basicBlockIsValid(BasicBlock *BB) {
    return BB->getName().str().size() > 0;
}

#ifdef VERBOSE
static std::string value_to_string(Value *insn) {
    std::string insn_string;
    raw_string_ostream stream(insn_string);
    insn->print(stream);
    stream.flush();
    return insn_string;
}
#endif

#ifdef PROFILE
static long microseconds() {
    struct timeval curr;
    gettimeofday(&curr, NULL);
    return (curr.tv_sec * 1000000 + curr.tv_usec);
}

static void indent(int nesting) {
    for (int i = 0; i < nesting; i++) llvm::errs() << "  ";
}
#endif

static bool isCompilerGenerated(std::string fname) {
    return (fname == "__cxx_global_var_init" ||
        fname.find("_GLOBAL__sub") == 0 ||
        fname == "cudaError" ||
        fname == "dim3::dim3");
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
        std::map<Value *, size_t> *value_to_alias_group) {
    for (std::map<Value *, size_t>::iterator i = value_to_alias_group->begin(),
            e = value_to_alias_group->end(); i != e; i++) {
        Value *val = i->first;
        size_t alias = i->second;

        errs() << *val << " [" << alias << "]\n";
    }
    errs() << "\n";
}

void Play::dumpReachable(ReachableInfo &reachable, const char *filename) {
    FILE *fp = fopen(filename, "w");

    std::map<size_t, size_t> *contains = reachable.get_contains();
    for (std::map<size_t, size_t>::iterator i =
            contains->begin(), e = contains->end(); i != e; i++) {
        size_t container = i->first;
        size_t children = i->second;

        fprintf(fp, "%lu %lu\n", container, children);
    }
    fclose(fp);
}

void Play::printReachable(ReachableInfo &reachable) {
    errs() << "Storing:\n";
    std::map<size_t, size_t> *contains = reachable.get_contains();
    for (std::map<size_t, size_t>::iterator i =
            contains->begin(), e = contains->end(); i != e; i++) {
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

// static std::string demangleVarName(std::string varname) {
//     if (varname.find("_ZL") == 0) {
//         std::string removed_prefix = varname.substr(3);
//         while (removed_prefix[0] >= '0' && removed_prefix[0] <= '9') {
//             removed_prefix = removed_prefix.substr(1);
//         }
//         return removed_prefix;
//     } else {
//         return varname;
//     }
// }

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

        return demangleABIName(glob->getName().str());
    }

    return "";
}

bool Play::dumpConstant(GlobalVariable *var, FILE *fp, int constant_index,
        DataLayout *layout) {
    if (var->hasUnnamedAddr()) {
#ifdef VERBOSE
        llvm::errs() << "Dumping unnamed constant, default visibility? " <<
            var->hasDefaultVisibility() << ", hidden visibility? " <<
            var->hasHiddenVisibility() << ", protected visibility? " <<
            var->hasProtectedVisibility() << "\n";
#endif
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
        if (var->getName().str() == "fatbinData") {
            return false;
        }
        // std::string varname = demangleVarName(var->getName().str());
        std::string varname = demangleABIName(var->getName().str());

#ifdef VERBOSE
        llvm::errs() << "Dumping named constant with name " << varname << "\n";
#endif

        if (var->hasExternalLinkage()) {
            /*
             * If this constant is externally initialized we should be able to
             * pick up that initialization in another source file, which will
             * actually perform the constant registration.
             */
            return false;
        } else {
            Constant *init = var->getInitializer();
            uint64_t size_in_bits =
                layout->getTypeSizeInBits(init->getType());
            assert((size_in_bits % 8) == 0);
            uint64_t size_in_bytes = size_in_bits / 8;

            fprintf(fp, "%d \"%s\" %lu\n", constant_index, varname.c_str(), size_in_bytes);
            return true;
        }
    }
}

void Play::dumpGlobal(GlobalVariable *var, std::string varname,
        FILE *globals_fp, DataLayout *layout,
        std::map<std::string, StructInfo> *structFields,
        std::map<Value *, size_t> *value_to_alias_group) {
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
    size_t group = 0;
    std::string struct_name;
    std::vector<std::string> struct_ptr_field_names;

#ifdef VERBOSE
    llvm::errs() << "Dumping global " << varname << ", is ptr? " <<
        type->isPointerTy() << ", is struct? " << type->isStructTy() << "\n";
#endif

    if (type->isPointerTy()) {
        is_ptr = 1;
        group = searchForValueInKnownAliases(var, value_to_alias_group);
    } else if (type->isStructTy()) {
        is_struct = 1;

        StructType *structTy = dyn_cast<StructType>(type);
        assert(structTy != NULL);

        if (!structTy->isLiteral()) {
            assert(structTy->getStructName().str().find("struct.") ==
                    0);
#ifdef VERBOSE
            llvm::errs() << "  Full struct name " <<
                structTy->getStructName().str() << "\n";
#endif
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
    fprintf(globals_fp, "%s \" %s \" %lu %d %d %lu ", varname.c_str(),
            backing_string.c_str(), type_size, is_ptr, is_struct, group);
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
        const char *constants_filename,
        std::map<Value *, size_t> *value_to_alias_group) {
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
    unsupported_sections.insert(".nvFatBinSegment");

    for (Module::global_iterator i = M.global_begin(), e = M.global_end();
            i != e; i++) {
        GlobalValue *G = &*i;
        if (GlobalVariable *var = dyn_cast<GlobalVariable>(G)) {

            if (var->isConstant()) {
                std::string section_str(var->getSection());
                if (section_str.find("@fatbinData") == 0 ||
                        unsupported_sections.find(section_str) ==
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

                dumpGlobal(var, varname, globals_fp, layout, structFields,
                        value_to_alias_group);
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

static std::string demangleABIName(std::string name) {
    std::string result;

    if (name.size() > 2 && name[0] == '_' && name[1] == 'Z') {
        int status;
        // Mangled function name
        char *demangled = abi::__cxa_demangle(name.c_str(), NULL, NULL,
                &status);
#ifdef VERBOSE
        if (status) {
            errs() << "Failed to demangle " << name << "\n";
        }
#endif
        assert(status == 0);

        /*
         * If we're demangling a function name, we only find the name and return
         * that (not any of the parameters?)
         */
        char *end = strchr(demangled, '(');
        if (end) {
            *end = '\0';
        }
        result = std::string(demangled);
        while (result[0] == ' ') result = result.substr(1);
        while (result[result.size() - 1] == ' ') {
            result = result.substr(0, result.size() - 1);
        }
        free(demangled);
    } else {
        result = name;
    }
#ifdef VERBOSE
    errs() << "Demangled " << name << " to " << result << "\n";
#endif

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
        const char *filename, std::map<Value *, size_t> *value_to_alias_group) {
    FILE *fp = fopen(filename, "w");
    assert(fp);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        /*
         * LLVM seems to generate some internal functions invisible to the
         * programmer. We don't want to emit metadata on these.
         */
        if (F != NULL && !F->empty()) {
            std::string demangled = demangleABIName(F->getName().str());

            // Special, inserted functions that we don't care about
            if (isCompilerGenerated(demangled)) continue;

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
        std::map<Value *, size_t> *value_to_alias_group) {
    FILE *fp = fopen(filename, "w");
    assert(fp);

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F != NULL && !F->empty()) {
            std::string caller_name = demangleABIName(F->getName().str());

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

                        fprintf(fp, "memset %s %d %d 0 %lu 0 0\n",
                                caller_name.c_str(), line, col,
                                searchForValueInKnownAliases(memset->getDest(),
                                    value_to_alias_group));

                    } else if (isa<MemCpyInst>(&inst)) {
                        MemCpyInst *transfer = dyn_cast<MemCpyInst>(&inst);
                        assert(transfer != NULL);

                        fprintf(fp, "memcpy %s %d %d 0 %lu %lu 0\n",
                                caller_name.c_str(), line, col,
                                searchForValueInKnownAliases(transfer->getDest(),
                                    value_to_alias_group),
                                searchForValueInKnownAliases(transfer->getSource(),
                                    value_to_alias_group));
                    } else if (isa<MemMoveInst>(&inst)) {
                        MemMoveInst *transfer = dyn_cast<MemMoveInst>(&inst);
                        assert(transfer != NULL);

                        fprintf(fp, "memmove %s %d %d 0 %lu %lu 0\n",
                                caller_name.c_str(), line, col,
                                searchForValueInKnownAliases(transfer->getDest(),
                                    value_to_alias_group),
                                searchForValueInKnownAliases(transfer->getSource(),
                                    value_to_alias_group));

                    // } else if (isa<VAStartInst>(&inst)) {
                    //     VAStartInst *va_start = dyn_cast<VAStartInst>(&inst);
                    //     assert(va_start);

                    //     fprintf(fp, "__builtin_va_start %s %d %d 0 0 0\n",
                    //             caller_name.c_str(), line, col);
                    // } else if (isa<VAEndInst>(&inst)) {
                    //     VAEndInst *va_end = dyn_cast<VAEndInst>(&inst);
                    //     assert(va_end);

                    //     fprintf(fp, "__builtin_va_end %s %d %d 0 0\n",
                    //             caller_name.c_str(), line, col);
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
                            name = demangleABIName(
                                    callee->getName().str());
                        }

                        if (!isCompilerGenerated(name)) {
                            size_t return_alias = 0;
                            if (call->getType()->isPointerTy()) {
                                /*
                                 * If a function's return value is unused,
                                 * return_alias will be zero.
                                 */
                                return_alias = searchForValueInKnownAliases(
                                        call, value_to_alias_group, false);
                            }

                            fprintf(fp, "%s %s %d %d %lu", name.c_str(),
                                    caller_name.c_str(), line, col, return_alias);

                            for (unsigned i = 0; i < call->getNumArgOperands();
                                    i++) {
                                Value *param = call->getArgOperand(i);
                                if (param->getType()->isPointerTy()) {
                                    size_t alias_no =
                                        searchForValueInKnownAliases(
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
    }

    fclose(fp);
}

size_t Play::searchForValueInKnownAliases(Value *val,
        std::map<Value *, size_t> *value_to_alias_group, bool force) {
    std::map<Value *, size_t>::iterator found = value_to_alias_group->find(val);
    if (found != value_to_alias_group->end()) {
        return found->second;
    }

    if (force) {
        errs() << *val << "\n";
        assert(false);
    }
    return 0;
}

static bool is_empty_map(map<string, set<size_t> > *m) {
    for (map<string, set<size_t> >::iterator i = m->begin(), e = m->end();
            i != e; i++) {
        if (i->second.size() > 0) return false;
    }
    return true;
}

void Play::createNewAliasLocation(int line, int col, string filename,
        bool isCall, Function *reason, set<size_t> **changed_ptr,
        set<size_t> **changed_and_children_ptr,
        map<string, set<size_t> > **possibly_changed_ptr) {
    GroupsModifiedAtLine *existing = NULL;
    for (std::vector<GroupsModifiedAtLine *>::iterator i =
            line_to_groups_modified.begin(), e = line_to_groups_modified.end();
            i != e; i++) {
        GroupsModifiedAtLine *curr = *i;
        if (curr->loc.line_no == line && *(curr->loc.filename) == filename &&
                curr->loc.col == col) {
            existing = curr;
            break;
        }
    }

    std::stringstream reason_str;
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
        reason_str << demangleABIName(reason->getName().str());
    }

    if (existing) {
        llvm::errs() << filename << ":" << line << ":" << col <<
            " curr_reason=" << reason_str.str() << ", old_reason=" <<
            *(existing->reason) << "\n";
        assert(false);
    }

    GroupsModifiedAtLine *g = (GroupsModifiedAtLine *)malloc(
            sizeof(GroupsModifiedAtLine));
    g->loc.line_no = line;
    g->loc.filename = new string(filename);
    g->loc.col = col;
    g->groups = new set<size_t>();
    *changed_ptr = g->groups;
    g->groups_and_children = new set<size_t>();
    *changed_and_children_ptr = g->groups_and_children;
    g->groups_possibly_modified = new map<string, set<size_t> >();
    *possibly_changed_ptr = g->groups_possibly_modified;
    g->reason = new string(reason_str.str());
    line_to_groups_modified.push_back(g);
}

void Play::updateChanges(CallInst *call, Function *callee,
        set<size_t> *changed, set<size_t> *changed_and_children,
        map<string, set<size_t> > *possibly_changed,
        std::map<Value *, size_t> *value_to_alias_group,
        string filename, Module &M) {
    if (isKnownFunction(callee)) {
        /*
         * For external functions that we know about (e.g. printf) and that
         * obviously don't checkpoint, we explicitly know what parameters or
         * return types are changed by the called method. So just add to
         * changed.
         */
        std::vector<unsigned> changes = functionChanges.at(
                callee->getName().str());
        for (std::vector<unsigned>::iterator i = changes.begin(),
                e = changes.end(); i != e; i++) {
            unsigned arg = *i;
            /*
             * arg == 0 indicates a pointer return that has been modified or
             * set by this function.
             */
            llvm::errs() << callee->getName().str() << "\n";
            if (arg == 0) {
                assert(callee->getReturnType()->isPointerTy());
                changed->insert(value_to_alias_group->at(call));
            } else {
                arg = arg - 1;
                assert(arg < call->getNumArgOperands());
                Value *arg_val = call->getArgOperand(arg);
                assert(arg_val->getType()->isPointerTy());
                changed->insert(value_to_alias_group->at(arg_val));
            }
        }
    } else {
#ifdef VERBOSE
        llvm::errs() << "For call [" << value_to_string(call) << "], callee=" <<
            callee << ", is not intrinsic? " << !isa<IntrinsicInst>(call) <<
            ", callee empty? " << (callee == NULL ? 1 : callee->empty()) << "\n";
#endif
        if (callee == NULL) {
            /*
             * if this call is made through a function pointer we have no
             * way of identifying it at compile time. We conservatively mark
             * all pointer-typed arguments and the return value (if
             * pointer-typed) as changed and create an alias location,
             * because we don't know if a checkpoint will be taken or not.
             * This marking includes all children of the passed pointers,
             * and will also cause global values to be marked changed.
             *
             * TODO this is extremely conservative and could probably be
             * optimized.
             */
#ifdef VERBOSE
            llvm::errs() << "  Handling as function pointer\n";
#endif
            /*
             * If a call has no uses (i.e. its return value is unused) then it
             * will not be present in value_to_alias_group. However, this also
             * means the returned value is never referenced. Therefore, we
             * assume that if the returned value was changed and we care about
             * checkpointing it because it is used later in the program, it must
             * also be referenced from somewhere else (e.g. as a parameter to
             * the function or as a global).
             */
            if (call->getType()->isPointerTy() && call->getNumUses() > 0) {
#ifdef VERBOSE
                llvm::errs() << "    Adding return value as changed\n";
#endif
                changed_and_children->insert(value_to_alias_group->at(call));
            }
            for (unsigned arg = 0; arg < call->getNumArgOperands(); arg++) {
                Value *arg_val = call->getArgOperand(arg);
                if (arg_val->getType()->isPointerTy()) {
#ifdef VERBOSE
                    llvm::errs() << "    Adding parameter " << arg << " as changed\n";
#endif
                    changed_and_children->insert(value_to_alias_group->at(arg_val));
                }
            }
        } else if (!isa<IntrinsicInst>(call) && callee->empty()) {
            /*
             * For externally defined functions we may be able to resolve
             * them at runtime. We mark their pointer-typed arguments and
             * return value as possibly changed before deciding at runtime
             * if the function definition is truly missing.
             */
            std::string fname = demangleABIName(callee->getName().str());
#ifdef VERBOSE
            llvm::errs() << "  Handling as extern call, fname=" << fname << "\n";
#endif

            if (possibly_changed->find(fname) == possibly_changed->end()) {
                possibly_changed->insert(pair<string, set<size_t> >(fname,
                            set<size_t>()));
            }

            if (callee->getReturnType()->isPointerTy()) {
#ifdef VERBOSE
                llvm::errs() << "    Marking return value as possibly changed\n";
#endif
                possibly_changed->at(fname).insert(value_to_alias_group->at(call));
            }
            for (unsigned arg = 0; arg < call->getNumArgOperands(); arg++) {
                Value *arg_val = call->getArgOperand(arg);
                if (arg_val->getType()->isPointerTy()) {
#ifdef VERBOSE
                    llvm::errs() << "    Marking argument " << arg << " as possibly changed\n";
#endif
                    possibly_changed->at(fname).insert(value_to_alias_group->at(arg_val));
                }
            }
        }
    }
}

/*
 * Checks if we need to insert an alias change location for this function call,
 * and inserts if so (i.e. if the callee may create a checkpoint).
 */
bool Play::addAliasChangeLocation(CallInst *call, Function *callee,
        set<size_t> *changed, set<size_t> *changed_and_children,
        map<string, set<size_t> > *possibly_changed,
        std::map<Value *, size_t> *value_to_alias_group,
        string filename, Module &M) {
#ifdef PROFILE
    long start = microseconds();
#endif
#ifdef VERBOSE
    llvm::errs() << "        Adding alias change location at call to \"" <<
        (callee ? callee->getName().str() : "NULL") << "\", is known? " <<
        isKnownFunction(callee) << "\n";
#endif

    /*
     * If we hit a call, we need to register the changes made within a
     * basic block so that a callee that calls checkpoint() knows to
     * checkpoint that state.
     */
    if (!isa<IntrinsicInst>(call) && mayCreateCheckpoint(callee) != DOES_NOT) {
#ifdef VERBOSE
        llvm::errs() << "        Done adding alias change location\n";
#endif
#ifdef PROFILE
        addAliasChangeLocTime += (microseconds() - start);
#endif
        return true;
    }

    // Perform updates to the change sets
    updateChanges(call, callee, changed, changed_and_children, possibly_changed,
            value_to_alias_group, filename, M);

#ifdef VERBOSE
    llvm::errs() << "        Done adding alias change location\n";
#endif

#ifdef PROFILE
    addAliasChangeLocTime += (microseconds() - start);
#endif
    return false;
}

#ifdef VERBOSE
static void printAccumulatedState(set<size_t> *changed,
        set<size_t> *changed_and_children,
        map<string, set<size_t> > *possibly_changed) {
    llvm::errs() << "  Changed={";
    for (set<size_t>::iterator i = changed->begin(),
            e = changed->end(); i != e; i++) {
        llvm::errs() << " " << *i;
    }
    llvm::errs() << "  }\n  Change w/ children={";
    for (set<size_t>::iterator i = changed_and_children->begin(),
            e = changed_and_children->end(); i != e; i++) {
        llvm::errs() << " " << *i;
    }
    llvm::errs() << "  }\n  Possibly changed={\n";
    for (map<string, set<size_t> >::iterator i =
            possibly_changed->begin(), e =
            possibly_changed->end(); i != e; i++) {
        llvm::errs() << "    " << i->first << " -> [";
        for (set<size_t>::iterator ii = i->second.begin(),
                ee = i->second.end(); ii != ee; ii++) {
            llvm::errs() << " " << *ii;
        }
        llvm::errs() << " ]\n";
    }
    llvm::errs() << "  }\n";
}
#endif

CollectedTraversal *Play::traverseBBBackwards(
        BasicBlock::reverse_iterator start, BasicBlock *curr, bool from_beginning,
        vector<ReverseBasicBlockContext> *to_process,
        set<CallInst *> *processed, string filename,
        map<Value *, size_t> *value_to_alias_group, Module &M,
        set<BasicBlock *> *visited, map<BasicBlock *, CollectedTraversal *> *cache) {
    if (visited->find(curr) != visited->end()) {
        return NULL;
    }
    if (from_beginning) {
        visited->insert(curr);
    }
    if (from_beginning && cache->find(curr) != cache->end()) {
        return cache->at(curr);
    }

    CollectedTraversal *results = new CollectedTraversal();

    while (start != curr->rend()) {
        Instruction *insn = &*start;
#ifdef VERBOSE
        llvm::errs() << "Traversing backwards over [" <<
            value_to_string(insn) << "]\n";
#endif
        if (StoreInst *store = dyn_cast<StoreInst>(insn)) {
            size_t group = value_to_alias_group->at(store->getPointerOperand());
            results->get_changed()->insert(group);
        } else if (CallInst *call = dyn_cast<CallInst>(insn)) {
            Function *callee = call->getCalledFunction();
            bool is_change_loc = addAliasChangeLocation(call, callee, results->get_changed(),
                    results->get_changed_and_children(), results->get_possibly_changed(),
                    value_to_alias_group, filename, M);
            if (is_change_loc) {
                if (processed->find(call) == processed->end()) {
                    bool already_added = false;
                    for (vector<ReverseBasicBlockContext>::iterator i =
                            to_process->begin(), e = to_process->end(); i != e;
                            i++) {
                        if (i->get_start() == start) already_added = true;
                    }

                    if (!already_added) {
                        set<size_t> *changed_ptr, *changed_and_children_ptr;
                        map<string, set<size_t> > *possibly_changed_ptr;
                        createNewAliasLocation(call->getDebugLoc().getLine(),
                                call->getDebugLoc().getCol(), filename, true,
                                callee, &changed_ptr, &changed_and_children_ptr,
                                &possibly_changed_ptr);
                        to_process->push_back(ReverseBasicBlockContext(
                                    BasicBlock::reverse_iterator(start),
                                    curr, changed_ptr, changed_and_children_ptr,
                                    possibly_changed_ptr));
                    }
                }
                return results;
            }
        }
        start++;
    }

    set<BasicBlock *> unique_preds;

    for (auto i = pred_begin(curr),
            e = pred_end(curr); i != e; i++) {
        BasicBlock *pred = *i;
        unique_preds.insert(pred);
    }
    for (set<BasicBlock *>::iterator i = unique_preds.begin(),
            e = unique_preds.end(); i != e; i++) {
        BasicBlock *pred = *i;
        CollectedTraversal *child_results = traverseBBBackwards(pred->rbegin(),
                pred, true, to_process, processed, filename,
                value_to_alias_group, M, visited, cache);
        if (child_results) {
            results->merge_from(child_results);
        }
    }

    if (from_beginning) {
        bool success = cache->insert(pair<BasicBlock *, CollectedTraversal *>(
                    curr, results)).second;
        assert(success);
    }
    return results;
}

void Play::collectLineToGroupsMappingInFunction(Function *func,
        map<Value *, size_t> *value_to_alias_group, string filename, Module &M,
        set<size_t> *changed_at_termination,
        set<size_t> *changed_and_children_at_termination,
        map<string, set<size_t> > *possibly_changed_at_termination) {

    set<CallInst *> processed;
    vector<ReverseBasicBlockContext> to_process;
    int count_instructions = 0;
    for (inst_iterator i = inst_begin(func), e = inst_end(func); i != e; i++) {
        Instruction *curr = &*i;
        if (ReturnInst *ret = dyn_cast<ReturnInst>(curr)) {
#ifdef VERBOSE
            llvm::errs() << "Found return " << value_to_string(ret) <<
                " in " << func->getName().str() << "\n";
#endif
            BasicBlock *parent = ret->getParent();
            to_process.push_back(ReverseBasicBlockContext(parent->rbegin(),
                        parent, changed_at_termination,
                        changed_and_children_at_termination,
                        possibly_changed_at_termination));
        }
        count_instructions++;
    }

#ifdef VERBOSE
    llvm::errs() << "After initial seeding of returns, have " <<
        to_process.size() << " locations to process, " <<
        count_instructions << " instructions in this function\n";
#endif

    map<BasicBlock *, CollectedTraversal *> cache;
    while (to_process.size() > 0) {
        ReverseBasicBlockContext ctx = to_process.front();
        to_process.erase(to_process.begin());
        BasicBlock::reverse_iterator start = ctx.get_start();

        Instruction *starting = &*(start);
        if (CallInst *call = dyn_cast<CallInst>(starting)) {
            processed.insert(call);
            /*
             * Add the changes contributed by the call we are tracing backwards
             * from before we start the actual traversal.
             */
            updateChanges(call, call->getCalledFunction(),
                    ctx.get_changed(), ctx.get_changed_and_children(),
                    ctx.get_possibly_changed(), value_to_alias_group, filename,
                    M);
            start++;
        }

#ifdef VERBOSE
        llvm::errs() << "Traversing backwards from [" << value_to_string(starting) << "]\n";
        printAccumulatedState(ctx.get_changed(), ctx.get_changed_and_children(),
                ctx.get_possibly_changed());
#endif

        set<BasicBlock *> visited;
        CollectedTraversal *collected = traverseBBBackwards(start, ctx.get_parent(), false,
                &to_process, &processed, filename,
                value_to_alias_group, M, &visited, &cache);
        assert(collected);
#ifdef VERBOSE
        llvm::errs() << "Calculated values for traversal from [" <<
            value_to_string(starting) << "]:\n";
        printAccumulatedState(collected->get_changed(), collected->get_changed_and_children(),
                collected->get_possibly_changed());
#endif
        collected->add_to(ctx.get_changed(), ctx.get_changed_and_children(),
                ctx.get_possibly_changed());
#ifdef VERBOSE
        llvm::errs() << "For [" << value_to_string(starting) << "]\n";
        printAccumulatedState(ctx.get_changed(), ctx.get_changed_and_children(),
                ctx.get_possibly_changed());
#endif
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
std::map<Function *, TermInfo> *Play::collectLineToGroupsMapping(
        Module& M, std::map<Value *, size_t> *value_to_alias_group) {
#ifdef VERBOSE
    int count_functions = 0;
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F->getBasicBlockList().size() > 0) {
            BasicBlock& entry = F->getEntryBlock();
            if (basicBlockIsValid(&entry)) {
            }
            count_functions++;
        }
    }
    llvm::errs() << "In total, " << count_functions << " functions to " <<
        "analyze in this module\n";
#endif

    std::map<Function *, TermInfo> *result =
        new std::map<Function *, TermInfo>();
    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        std::set<BasicBlock *> visited;

        // A function may have no basic blocks if it is defined externally
        if (F->getBasicBlockList().size() > 0) {
            BasicBlock& entry = F->getEntryBlock();

#ifdef VERBOSE
            llvm::errs() << "Collecting changes in function " <<
                F->getName().str() << ", " << F->getBasicBlockList().size() <<
                " basic block(s)\n";
#endif

            if (basicBlockIsValid(&entry)) {
                std::string filename = findFilenameContainingBB(entry, M);
                std::set<size_t> *changed_at_termination = new std::set<size_t>();
                std::set<size_t> *changed_and_children_at_termination = new std::set<size_t>();
                std::map<std::string, std::set<size_t> > *possibly_changed_at_termination =
                    new std::map<std::string, std::set<size_t> >();

                collectLineToGroupsMappingInFunction(F, value_to_alias_group,
                        filename, M, changed_at_termination,
                        changed_and_children_at_termination,
                        possibly_changed_at_termination);

                result->insert(std::pair<Function *, TermInfo>(F,
                            TermInfo(changed_at_termination,
                                changed_and_children_at_termination,
                                possibly_changed_at_termination)));
            }
        }
    }


    std::vector<GroupsModifiedAtLine *> final_line_to_groups_modified;
    for (std::vector<GroupsModifiedAtLine *>::iterator i =
            line_to_groups_modified.begin(), e = line_to_groups_modified.end();
            i != e; i++) {
        GroupsModifiedAtLine *curr = *i;
        if (!(curr->groups->size() == 0 &&
                curr->groups_and_children->size() == 0 &&
                is_empty_map(curr->groups_possibly_modified))) {
            final_line_to_groups_modified.push_back(curr);
        }
    }
    line_to_groups_modified = final_line_to_groups_modified;

    return result;
}

void Play::collectLineToAccessedGroupsInFunction(BasicBlock *curr,
        std::set<BasicBlock *> *visited, std::string filename,
        std::map<Value *, size_t> value_to_alias_group, Module &M,
        AccessesPerLine *accesses) {
    assert(curr != NULL);
    if (visited->find(curr) != visited->end()) return;
    visited->insert(curr);

    // Collect all pointers loaded from and stored to
    for (BasicBlock::iterator inst_iter = curr->begin(), inst_end = curr->end();
            inst_iter != inst_end; inst_iter++) {
        Instruction *curr_inst = inst_iter;
        int line_no = curr_inst->getDebugLoc().getLine();
        if (StoreInst *store = dyn_cast<StoreInst>(curr_inst)) {
            // Mark the destination alias group as modified
            size_t group = value_to_alias_group.at(store->getPointerOperand());
            accesses->add_access(line_no, group);
        } else if (LoadInst *load = dyn_cast<LoadInst>(curr_inst)) {
            size_t group = value_to_alias_group.at(load->getPointerOperand());
            accesses->add_access(line_no, group);
        }
    }

    TerminatorInst *term = curr->getTerminator();
    for (unsigned int i = 0; i < term->getNumSuccessors(); i++) {
        BasicBlock *child = term->getSuccessor(i);
        collectLineToAccessedGroupsInFunction(child, visited, filename,
                value_to_alias_group, M, accesses);
    }
}

std::map<std::string, AccessesPerLine *> *Play::collectLineToAccessedGroups(
        Module &M, std::map<Value *, size_t> value_to_alias_group) {
    std::map<std::string, AccessesPerLine *> *result =
        new std::map<std::string, AccessesPerLine *>();

   for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        std::set<BasicBlock *> visited;

        // A function may have no basic blocks if it is defined externally
        if (F->getBasicBlockList().size() > 0) {
            BasicBlock& entry = F->getEntryBlock();

            if (basicBlockIsValid(&entry)) {
                std::string filename = findFilenameContainingBB(entry, M);

                if (result->find(filename) == result->end()) {
                    result->insert(std::pair<std::string, AccessesPerLine *>(
                                filename, new AccessesPerLine((filename))));
                }
                collectLineToAccessedGroupsInFunction(&entry, &visited,
                        filename, value_to_alias_group, M, result->at(filename));
            }
        }
   }

   return result;
}

void Play::dumpLineToAccessedGroupsMapping(const char *filename,
        std::map<std::string, AccessesPerLine *> *accesses) {
    FILE *fp = fopen(filename, "w");

    for (std::map<std::string, AccessesPerLine *>::iterator i = accesses->begin(),
            e = accesses->end(); i != e; i++) {
        for (std::map<int, std::set<size_t> >::iterator ii = i->second->begin(),
                ee = i->second->end(); ii != ee; ii++) {
            fprintf(fp, "%s %d", i->first.c_str(), ii->first);
            for (std::set<size_t>::iterator group_iter = ii->second.begin(),
                    group_end = ii->second.end(); group_iter != group_end;
                    group_iter++) {
                fprintf(fp, " %lu", *group_iter);
            }
            fprintf(fp, "\n");
        }
    }

    fclose(fp);
}

void Play::dumpLineToGroupsMappingTo(const char *filename) {
    FILE *fp = fopen(filename, "w");

    for (std::vector<GroupsModifiedAtLine *>::iterator line_iter =
            line_to_groups_modified.begin(), line_end =
            line_to_groups_modified.end(); line_iter != line_end; line_iter++) {
        GroupsModifiedAtLine *curr = *line_iter;
        std::set<size_t> *groups = curr->groups;
        std::set<size_t> *groups_and_children = curr->groups_and_children;
        std::map<std::string, std::set<size_t> > *groups_possibly_modified =
            curr->groups_possibly_modified;

        fprintf(fp, "%s %d %d : { ", curr->loc.filename->c_str(),
                curr->loc.line_no, curr->loc.col);

        for (std::set<size_t>::iterator groups_iter = groups->begin(),
                groups_end = groups->end(); groups_iter != groups_end;
                groups_iter++) {
            if (groups_iter != groups->begin()) fprintf(fp, ", ");
            fprintf(fp, "%lu", *groups_iter);
        }

        fprintf(fp, " } { ");

        for (set<size_t>::iterator groups_iter = groups_and_children->begin(),
                groups_end = groups_and_children->end();
                groups_iter != groups_end; groups_iter++) {
            if (groups_iter != groups->begin()) fprintf(fp, ", ");
            fprintf(fp, "%lu", *groups_iter);
        }

        fprintf(fp, " } %s { ", curr->reason->c_str());

        bool first = true;
        for (std::map<std::string, std::set<size_t> >::iterator function_iter =
                groups_possibly_modified->begin(), function_end =
                groups_possibly_modified->end(); function_iter != function_end;
                function_iter++) {
            if (function_iter->second.size() == 0) continue;

            if (!first) {
                fprintf(fp, ", ");
            }

            fprintf(fp, "%s { ", function_iter->first.c_str());
            for (std::set<size_t>::iterator groups_iter =
                    function_iter->second.begin(), groups_end =
                    function_iter->second.end(); groups_iter != groups_end;
                    groups_iter++) {
                if (groups_iter != function_iter->second.begin()) {
                    fprintf(fp, ", ");
                }
                fprintf(fp, "%lu", *groups_iter);
            }
            fprintf(fp, " }");

            first = false;
        }
        fprintf(fp, " }\n");
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

        std::string s(line);

        std::string fname;
        std::vector<unsigned> changes;

        size_t end = s.find(' ');
        while (end != std::string::npos) {
            if (fname.size() == 0) {
                fname = s.substr(0, end);
            } else {
                changes.push_back(atoi(s.substr(0, end).c_str()));
            }
            s = s.substr(end + 1);
            end = s.find(' ');
        }
        if (fname.size() == 0) {
            fname = s;
        } else {
            changes.push_back(atoi(s.c_str()));
        }

        if (fname.size() > 0) {
            functionChanges[fname] = changes;
            doesFunctionCreateCheckpoint[fname] = DOES_NOT;
        }
    }
    fclose(fp);
}

void Play::initMarkedFunctions() {
    char *nocheckpoint_file = getenv("NOCHECKPOINT_FILE");
    assert(nocheckpoint_file);

    ssize_t nchars;
    char *line = NULL; size_t line_length = 0;
    FILE *fp = fopen(nocheckpoint_file, "r");
    if (fp) {
        while ((nchars = getline(&line, &line_length, fp)) != (ssize_t)-1) {
            while (nchars > 0 && line[nchars - 1] == '\n') {
                line[nchars - 1] = '\0';
                nchars--;
            }

            std::string s(line);
            functionsMarkedWithNoCheckpoint.insert(s);
        }
        fclose(fp);
    }
}

bool Play::isKnownFunction(Function *F) {
    return (F != NULL && doesFunctionCreateCheckpoint.find(F->getName().str()) !=
        doesFunctionCreateCheckpoint.end());
}

bool Play::isMarkedWithNoCheckpoint(Function *F) {
    if (F == NULL) return false;
    std::string fname = demangleABIName(F->getName().str());
    return (functionsMarkedWithNoCheckpoint.find(fname) !=
            functionsMarkedWithNoCheckpoint.end());
}

CALLS_CHECKPOINT Play::knownFunctionCreatesCheckpoint(Function *F) {
    assert(isKnownFunction(F));
    return doesFunctionCreateCheckpoint.at(F->getName().str());
}

CALLS_CHECKPOINT Play::mayCreateCheckpointHelper(Function *F,
        std::set<Instruction *> *visited) {
    if (F == NULL) return MAY;

#ifdef VERBOSE
    llvm::errs() << "Checking if " << F->getName().str() << " creates checkpoint\n";
#endif

    if (can_call_checkpoint.find(F) != can_call_checkpoint.end()) {
        return can_call_checkpoint.at(F);
    }

    CALLS_CHECKPOINT result = DOES_NOT;

    if (isCheckpoint(F)) {
        result = DOES;
    } else if (isMarkedWithNoCheckpoint(F)) {
        result = DOES_NOT;
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
                visited->insert(inst);

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
#ifdef PROFILE
    long start = microseconds();
#endif
    CALLS_CHECKPOINT result = mayCreateCheckpointHelper(F, &visited);
#ifdef PROFILE
    mayCreateCheckpointTime += (microseconds() - start);
#endif
    return result;
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

#ifdef VERBOSE
    for (int i = 0; i < nesting; i++) llvm::errs() << "  ";
    llvm::errs() << "DType_to_string: \"" << curr.getName().str() <<
        "\" (basic? " << curr.isBasicType() << ", composite? " <<
        curr.isCompositeType() << ", derived? " << curr.isDerivedType() <<
        ", tag=" << curr.getTag() << "\n";
#endif

    if (curr.isBasicType()) {
        return curr.getName().str();
    } else if (curr.isCompositeType()) {
        DICompositeType composite(curr);
        DIArray fields_defs = composite.getTypeArray();

        switch (composite.getTag()) {
            case (dwarf::DW_TAG_array_type): {
                /*
                 * fields_defs.getNumElements() is the number of dimensions in
                 * this array type. For example, int a[3][3]; will have 2
                 * elements.
                 */
                assert(fields_defs.getNumElements() > 0);
                size_t total_num_elements = 1;
                for (unsigned d = 0; d < fields_defs.getNumElements(); d++) {
                    assert(fields_defs.getElement(d).isSubrange());

                    DISubrange range(fields_defs.getElement(d));
                    assert(range.getLo() == 0);
                    assert(range.getCount() > 0);
                    total_num_elements *= range.getCount();
                }

                DIType from = composite.getTypeDerivedFrom().resolve(TypeIdentifierMap);
                if (from.isType()) {
                    std::string basetype = DType_to_string(from, nesting + 1,
                            TypeIdentifierMap);
                    if (basetype.length() > 0) {
                        std::stringstream acc;
                        acc << "[ " << total_num_elements << " x " << basetype << " ]";
                        return acc.str();
                    }
                }
                return "";
            }
            case (dwarf::DW_TAG_structure_type): {
                if (composite.getName().str().size() == 0) {
                    return "";
                } else {
                    return "%struct." + composite.getName().str();
                }
            }
            case (dwarf::DW_TAG_union_type): {
                assert(false);
            }
            case (dwarf::DW_TAG_enumeration_type): {
                return "int";
            }
            case (dwarf::DW_TAG_subroutine_type): {
                return "func";
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
            if (child.size() == 0) {
                switch (from.getTag()) {
                    case (dwarf::DW_TAG_subroutine_type):
                        child = "";
                        break;
                    case (dwarf::DW_TAG_structure_type):
                        child = "%struct." + curr.getName().str();
                        break;
                    default:
                        fprintf(stderr, "Unsupported tag=%d\n", from.getTag());
                        assert(false);
                }
            }
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

#ifdef VERBOSE
            llvm::errs() << "Looking for fields in " << struct_name << "\n";
#endif

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
#ifdef VERBOSE
                        llvm::errs() << "Field " << fieldname << "\n";
#endif

                        DIType from = derived.getTypeDerivedFrom().resolve(
                                TypeIdentifierMap);
                        std::string type = DType_to_string(from, 1,
                                TypeIdentifierMap);
#ifdef VERBOSE
                        llvm::errs() << "  Type: " << type << "\n";
#endif
                        fields.push_back(StructFieldInfo(fieldname, type));
                    }
                }
            }

            struct_fields->insert(std::pair<std::string, StructInfo>(
                        struct_name, StructInfo(fields, unnamed_struct,
                            di_struct.getSizeInBits())));
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

        fprintf(fp, "%s %lu %d", struct_iter->first.c_str(),
                struct_iter->second.get_size_in_bits(), (is_unnamed ? 1 : 0));
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
                return (demangleABIName(call->getCalledFunction()->getName().str()));
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
 * TODO change this return value to boolean? We kind of only care if it's YES or
 * not-YES
 */
IS_CHECKPOINTED Play::isCheckpointInLiveRange(BasicBlock *curr, bool currently_live,
        std::set<StoreInst *> *stores, std::set<LoadInst *> *loads,
        std::set<BasicBlock *> *visitedWhileLive,
        std::set<BasicBlock *> *visitedWhileDead,
        std::set<std::string> *may_cause_checkpoint, Module &M) {

    if (currently_live) {
        if (visitedWhileLive->find(curr) != visitedWhileLive->end()) {
            return MAYBE;
        }
        visitedWhileLive->insert(curr);
    } else {
        if (visitedWhileDead->find(curr) != visitedWhileDead->end()) {
            return MAYBE;
        }
        visitedWhileDead->insert(curr);
    }

    for (BasicBlock::reverse_iterator i = curr->rbegin(), e = curr->rend(); i != e; i++) {
        Instruction *insn = &*i;

        if (StoreInst *store = dyn_cast<StoreInst>(insn)) {
            if (stores->find(store) != stores->end()) {
                currently_live = false;
            }
        } else if (LoadInst *load = dyn_cast<LoadInst>(insn)) {
            if (loads->find(load) != loads->end()) {
                currently_live = true;
            }
        } else if (CallInst *call = dyn_cast<CallInst>(insn)) {
            if (currently_live) {
                if (isCheckpoint(call->getCalledFunction())) {
                    return YES;
                } else {
                    std::string checkpointable_call_name =
                        isPossibleCheckpointCall(call, M);
                    if (checkpointable_call_name.size() > 0) {
                        may_cause_checkpoint->insert(checkpointable_call_name);
                    }
                }
            }
        }
    }

    set<BasicBlock *> unique_preds;
    for (auto i = pred_begin(curr),
            e = pred_end(curr); i != e; i++) {
        BasicBlock *pred = *i;
        unique_preds.insert(pred);
    }
    for (set<BasicBlock *>::iterator i = unique_preds.begin(),
            e = unique_preds.end(); i != e; i++) {
        BasicBlock *pred = *i;
        IS_CHECKPOINTED parentResult = isCheckpointInLiveRange(pred,
                currently_live, stores, loads, visitedWhileLive,
                visitedWhileDead, may_cause_checkpoint, M);
        if (parentResult == YES) return YES;
    }

    if (may_cause_checkpoint->size() == 0) {
        return NO;
    } else {
        return MAYBE;
    }
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

    /*
     * Find all loads and stores to each stack allocation. If for some reason we
     * might not be able to resolve all loads and stores (e.g. the address of a
     * stack variable is taken and stored in some other pointer-to-pointers)
     * then we mark that stack variable as "unsolvable".
     *
     * AllocaVisitor is useful because it handles aliasing.
     */
    AllocaVisitor visitor(initial, this);
    visitor.driver();

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
            just_parent.insert(demangleABIName(F->getName().str()));
            result->insert(std::pair<AllocaInst *, std::set<std::string> >(curr,
                        just_parent));
        } else {
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

            vector<BasicBlock *> terminators;
            for (inst_iterator i = inst_begin(F), e = inst_end(F); i != e; i++) {
                Instruction *insn = &*i;
                if (ReturnInst *ret = dyn_cast<ReturnInst>(insn)) {
                    BasicBlock *parent = ret->getParent();
                    terminators.push_back(parent);
                }
            }

            std::set<BasicBlock *> visitedWhileLive, visitedWhileDead;
            std::set<std::string> may_cause_checkpoint;
            IS_CHECKPOINTED need_to_checkpoint = MAYBE;
            for (vector<BasicBlock *>::iterator i = terminators.begin(),
                    e = terminators.end(); need_to_checkpoint != YES && i != e; i++) {
                BasicBlock *bb = *i;
                IS_CHECKPOINTED local_need_to_checkpoint = isCheckpointInLiveRange(
                        bb, false, stores, loads, &visitedWhileLive,
                        &visitedWhileDead, &may_cause_checkpoint, M);
                switch (local_need_to_checkpoint) {
                    case (YES):
                        need_to_checkpoint = YES;
                        break;
                    case (NO):
                    case (MAYBE):
                        break;
                }
            }

            if (need_to_checkpoint == YES) {
            } else {
                if (may_cause_checkpoint.size() == 0) {
                    need_to_checkpoint = NO;
                } else {
                    need_to_checkpoint = MAYBE;
                }
            }

            if (need_to_checkpoint == YES) {
#ifdef VERBOSE
                llvm::errs() << "Checkpoint stack variable [" << *curr <<
                    "] because need_to_checkpoint == YES\n";
#endif
                std::set<std::string> just_checkpoint;
                just_checkpoint.insert("checkpoint");
                result->insert(std::pair<AllocaInst *, std::set<std::string> >(
                            curr, just_checkpoint));
            } else if (need_to_checkpoint == MAYBE) {
#ifdef VERBOSE
                llvm::errs() << "Checkpoint stack variable [" << *curr <<
                    "] because may_cause_checkpoint = [";
                for (std::set<std::string>::iterator i =
                        may_cause_checkpoint.begin(), e =
                        may_cause_checkpoint.end(); i != e; i++) {
                    llvm::errs() << " " << *i;
                }
                llvm::errs() << " ]\n";
#endif
                if (may_cause_checkpoint.find("---") != may_cause_checkpoint.end()) {
                    std::set<std::string> just_parent;
                    just_parent.insert(F->getName().str());
                    result->insert(std::pair<AllocaInst *, std::set<std::string> >(curr,
                                just_parent));
                } else {
                    result->insert(std::pair<AllocaInst *, std::set<std::string> >(
                                curr, may_cause_checkpoint));
                }
            }
        }
    }

    return (result);
}

/*
 * Find stack allocations that need to be checkpointed and store some metadata
 * about them.
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
     * Dump the information on each stack allocation to a file.
     */
    for (std::vector<StackAllocInfo *>::iterator alloc_iter =
            alloc_infos.begin(), alloc_end = alloc_infos.end();
            alloc_iter != alloc_end; alloc_iter++) {
        StackAllocInfo *info = *alloc_iter;
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

    for (Value::const_use_iterator i = callInst->use_begin(),
            e = callInst->use_end(); i != e; i++) {
        const Use *use = &*i;
        User *user = use->getUser();

        if (PHINode *phi = dyn_cast<PHINode>(user)) {
            if (phi->getNumUses() == 1) {
                user = (*(phi->use_begin())).getUser();
            }
        }

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
        FILE *fp,
        std::map<std::string, StructInfo> *structFields,
        std::string fname, std::map<Value *, size_t> *value_to_alias_group) {
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
        Type *base_type = inferHostAllocationType(callInst);

        if (base_type->isPointerTy()) {
            // is_ptr=1, is_struct=0
            fprintf(fp, " 1 0");
        } else if (base_type->isStructTy()) {
            printStructInfo(fp, base_type, structFields);
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
        FILE *fp,
        std::map<std::string, StructInfo> *structFields) {
    int line_no = callInst->getDebugLoc().getLine();
    int col = callInst->getDebugLoc().getCol();
    assert(line_no != 0);

    // no alias information supported on GPU yet
    fprintf(fp, "%d %d 0 %s", line_no, col, callee->getName().str().c_str());

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
        std::map<Value *, size_t> *value_to_alias_group) {
    FILE *fp = fopen(output_file, "w");

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
                                    callee, fp, structFields,
                                    F->getName().str(), value_to_alias_group);
                        } else if (callee->getName().str() == "cudaMalloc" ||
                                callee->getName().str() == "cudaFree") {
                            handleDeviceAllocation(callInst, callee, fp,
                                    structFields);
                        }
                    }
                }
            }
        }
    }

    fclose(fp);
}

void Play::printGroupsChanged(FILE *fp, Function *F,
        std::map<Function *, TermInfo> *func_to_groups_changed) {
    assert(func_to_groups_changed->find(F) != func_to_groups_changed->end());
    TermInfo changed = func_to_groups_changed->at(F);
    std::set<size_t> *groups = changed.get_groups();
    std::set<size_t> *groups_and_children = changed.get_groups_and_children();
    std::map<std::string, std::set<size_t> > *possibly_changed_at_termination =
        changed.get_possibly_changed_at_termination();

    fprintf(fp, " %lu", groups->size());

    for (std::set<size_t>::iterator i = groups->begin(), e = groups->end();
            i != e; i++) {
        size_t curr = *i;
        fprintf(fp, " %lu", curr);
    }

    fprintf(fp, " %lu", groups_and_children->size());

    for (set<size_t>::iterator i = groups_and_children->begin(),
            e = groups_and_children->end(); i != e; i++) {
        size_t curr = *i;
        fprintf(fp, " %lu", curr);
    }

    fprintf(fp, " %lu", possibly_changed_at_termination->size());

    for (std::map<std::string, std::set<size_t> >::iterator i =
            possibly_changed_at_termination->begin(), e =
            possibly_changed_at_termination->end(); i != e; i++) {
        fprintf(fp, " %s %lu", i->first.c_str(), i->second.size());
        std::set<size_t> possible_groups = i->second;
        for (std::set<size_t>::iterator ii = possible_groups.begin(), ee =
                possible_groups.end(); ii != ee; ii++) {
            size_t group = *ii;
            fprintf(fp, " %lu", group);
        }
    }
}

class CallLocation {
    public:
        CallLocation(std::string set_name, int set_line, int set_col) :
            name(set_name), line(set_line), col(set_col) { }

        std::string get_name() { return name; }
        int get_line() { return line; }
        int get_col() { return col; }

    private:
        std::string name;
        int line;
        int col;
};

/*
 * This function dumps a list of the names of the functions called for each
 * function defined in this module. This list only includes function names for
 * functions which MAY or DO create checkpoints. If a callee name cannot be
 * resolved (e.g. it is a function pointer) we explicitly indicate this in the
 * dumped output. The callee names may include functions that are defined
 * externally to this compilation unit.
 *
 * The dumped DOES/DOES NOT/MAY checkpoint relationship is indicative of this
 * function and all of its callees. It will only be DOES_NOT if calling this
 * function can never result in a function being created.
 */
void Play::dumpFunctionCallTree(Module &M, const char *output_file) {
    FILE *fp = fopen(output_file, "w");

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        bool contains_unknown_functions = false;
        std::vector<CallLocation> called;

        /*
         * These are some functions auto-generated by both C++ compilers and by
         * NVIDIA's frontend. Since they don't actually impact the running state
         * of the user application (but later passes can trip over them) we skip
         * them.
         */
        if (F->empty() ||
                isCompilerGenerated(demangleABIName(F->getName().str()))) {
            continue;
        }

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
                            std::string demangled = demangleABIName(
                                        callee->getName().str());
                            if (doesFunctionCreateCheckpoint.find(demangled) ==
                                    doesFunctionCreateCheckpoint.end() ||
                                    doesFunctionCreateCheckpoint[demangled] !=
                                    DOES_NOT) {
                                called.push_back(CallLocation(demangled,
                                            call->getDebugLoc().getLine(),
                                            call->getDebugLoc().getCol()));
                            }
                        }
                    }
                }
            }
        }

        std::string *caller_display_name = getFunctionDisplayName(F, M);
        assert(caller_display_name);
        fprintf(fp, "%s %s %d",
                demangleABIName(F->getName().str()).c_str(),
                F->getName().str().c_str(), contains_unknown_functions);

        CALLS_CHECKPOINT doesCheckpoint = mayCreateCheckpoint(F);
        if (doesCheckpoint == DOES) {
            fprintf(fp, " DOES");
        } else if (doesCheckpoint == DOES_NOT) {
            fprintf(fp, " DOES_NOT");
        } else {
            fprintf(fp, " MAY");
        }

        for (std::vector<CallLocation>::iterator i = called.begin(),
                e = called.end(); i != e; i++) {
            CallLocation curr = *i;
            fprintf(fp, " %s %d %d", curr.get_name().c_str(), curr.get_line(),
                    curr.get_col());
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

void Play::findFunctionExits(Module &M, const char *output_file,
        std::map<Value *, size_t> *value_to_alias_group,
        std::map<Function *, TermInfo> *func_to_groups_changed) {
    FILE *fp = fopen(output_file, "w");

    for (Module::iterator I = M.begin(), E = M.end(); I != E; I++) {
        Function *F = &*I;

        if (F->empty()) continue;

        std::string *display_name = getFunctionDisplayName(F, M);

        if (display_name == NULL ||
                isCompilerGenerated(F->getName().str())) continue;

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
#ifdef PROFILE
    const long start_overall = microseconds();
#endif
    Hasher *hashes = calculate_hashes(M);

    initKnownFunctions();
    /*
     * From the function unroll pass, read in a list of functions for the
     * current application that have been marked as not creating checkpoints by
     * the programmer.
     */
    initMarkedFunctions();

    /*
     * This first section of code groups values into alias sets, finds all alias
     * sets modified in each basic block, and produces the lines on which calls
     * to metrics collectors should be inserted in the original source code, as
     * well as the alias sets that should be marked by those calls.
     */

#ifdef PROFILE
    const long start_propagation = microseconds();
#endif
    ReachableInfo reachable = propagateAliases(M, hashes);
#ifdef PROFILE
    const long elapsed_propagation = microseconds() - start_propagation;
#endif

    dumpReachable(reachable, "reachable.info");

    findGlobalsAndConstants(M, "globals.info", "constants.info",
            reachable.get_value_to_alias_group());

#ifdef PROFILE
    const long start_groups = microseconds();
#endif
    std::map<Function *, TermInfo> *func_to_groups_changed =
        collectLineToGroupsMapping(M, reachable.get_value_to_alias_group());
#ifdef PROFILE
    const long elapsed_groups = microseconds() - start_groups;
#endif

    std::map<std::string, AccessesPerLine *> *accesses =
        collectLineToAccessedGroups(M, reachable.get_value_to_alias_group());
    dumpLineToAccessedGroupsMapping("accessed.info", accesses);

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

#ifdef PROFILE
    const long elapsed_overall = microseconds() - start_overall;
    llvm::errs() << "Propagation: " << elapsed_propagation << " us\n";
    llvm::errs() << "Groups:      " << elapsed_groups << " us\n";
    // llvm::errs() << "  PropagateGroupsDown " << propagateGroupsDownTime << " us\n";
    llvm::errs() << "    AddAliasChangeLoc    " << addAliasChangeLocTime << " us\n";
    llvm::errs() << "    FindCalls            " << findCallsTime << " us\n";
    llvm::errs() << "    CheckingVisited      " << checkingVisitedTime << " us\n";
    llvm::errs() << "    Leftover             " << leftoverTime << " us\n";
    llvm::errs() << "      CollectChangesAtTerm " << collectChangesAtTermTime << " us\n";
    llvm::errs() << "  MayCreateCheckpoint " << mayCreateCheckpointTime << " us\n";
    llvm::errs() << "================\n";
    llvm::errs() << "Overall:     " << elapsed_overall << " us\n";
#endif

    return false;
}
