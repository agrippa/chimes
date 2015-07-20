#include <sstream>

#include "MallocPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

using namespace std;

extern DesiredInsertions *insertions;
extern std::map<std::string, int> function_starting_lines;
extern std::map<std::string, int> earliest_call_line;
extern std::set<std::string> npm_functions;

std::string MallocPass::getMetadataArgs(HeapAlloc *alloc) {
    std::stringstream ss;
    ss << ", " << alloc->get_group() << "UL";

    /*
     * This is already asserted while generating heap.info from
     * LLVM, but assert here to improve readability and protect
     * against parsing errors.
     */
    assert(!(alloc->get_is_elem_ptr() &&
                alloc->get_is_elem_struct()));
    if (alloc->get_is_elem_ptr()) {
        // elements in allocation are pointers, not structs
        ss << ", 1, 0";
    } else if (alloc->get_is_elem_struct()) {
        // elements in allocation are structs, not pointers
        ss << ", 0, 1";
        StructFields *struct_info =
            insertions->get_struct_fields_for(
                    alloc->get_struct_type_name());
        assert(struct_info);

        std::string full_type_name;
        if (struct_info->get_is_unnamed()) {
            full_type_name = alloc->get_struct_type_name();
        } else {
            full_type_name = "struct " + alloc->get_struct_type_name();
        }

        // Element size for each struct
        ss << ", (int)sizeof(" << full_type_name << "), ";

        // Number of pointer-typed fields
        ss << alloc->get_num_field_ptrs();

        // Offests in struct of all pointer fields
        std::vector<std::string> *struct_field_ptrs =
            alloc->get_struct_field_ptrs();
        for (std::vector<std::string>::iterator p_i =
                struct_field_ptrs->begin(), p_e =
                struct_field_ptrs->end(); p_i != p_e; p_i++) {
            std::string fieldname = *p_i;
            ss << ", (int)__builtin_offsetof(" <<
                full_type_name << ", " << fieldname << ")";
        }
    } else {
        ss << ", 0, 0";
    }

    return ss.str();
}

void MallocPass::VisitTopLevel(clang::FunctionDecl *toplevel) {

#ifdef VERBOSE
    llvm::errs() << "Visiting function " <<
        toplevel->getNameInfo().getAsString() <<
        " in MallocPass during NPM pass\n";
#endif

    if (npm_pass) {
        clang::PresumedLoc presumed_start = SM->getPresumedLoc(
                toplevel->getLocStart());
        std::string fname = toplevel->getName().str();
        assert(function_starting_lines.find(fname) ==
                function_starting_lines.end());
        function_starting_lines.insert(std::pair<std::string, int>(fname,
                    presumed_start.getLine()));

        if (toplevel->getNameInfo().getAsString() != "main" &&
                insertions->eligible_npm_function(toplevel->getNameAsString())) {
            clang::SourceLocation name_start = toplevel->getNameInfo().getLoc();
            int current_name_len = toplevel->getNameInfo().getAsString().size();

            npm_functions.insert(toplevel->getNameAsString());
            ReplaceText(name_start, current_name_len,
                    toplevel->getNameInfo().getAsString() + "_npm");
        }
    }
   
    // For each line that has a memory allocation or free statement
    for (map<int, map<string, vector<FoundAlloc> *> *>::iterator i =
            found_allocs.begin(), e = found_allocs.end(); i != e; i++) {
        int line = i->first;
        map<string, vector<FoundAlloc> *> *per_line = i->second;

        for (std::map<std::string, std::vector<FoundAlloc> *>::iterator ii =
                per_line->begin(), ee = per_line->end(); ii != ee; ii++) {
            std::string funcname = ii->first;
            std::vector<FoundAlloc> *per_func = ii->second;

            std::sort(per_func->begin(), per_func->end());

            for (std::vector<FoundAlloc>::iterator iii = per_func->begin(),
                    eee = per_func->end(); iii != eee; iii++) {
                FoundAlloc found = *iii;
                const clang::CallExpr *call = found.get_call();
                const clang::FunctionDecl *callee = call->getDirectCallee();

                HeapAlloc alloc;
                bool found_info = insertions->findNextMatchingMemoryAllocation(
                        line, callee->getNameAsString(), &alloc);
                if (!found_info) {
                    llvm::errs() << "Failed to find memory allocation on " <<
                        "line " << line << " with name " <<
                        callee->getNameAsString() << "\n";
                    assert(false);
                }

                assert(callee->getNameAsString() == alloc.get_fname());

                // std::string call_str = stmtToString(call);

                std::stringstream helper_ss;

                std::string ret_val_str = "(____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr)";

                if (alloc.get_fname() == "malloc") {
                    std::string call_str = "malloc((" +
                        stmtToString(call->getArg(0)) + ") + sizeof(void *))";
                    helper_ss << " ({ void *____chimes_tmp_ptr = " << call_str <<
                        "; ";
                    helper_ss << "malloc_helper(____chimes_tmp_ptr, " <<
                        getArgString(call, 0);
                    helper_ss << getMetadataArgs(&alloc);
                    helper_ss << "); " << ret_val_str << "; }) ";
                } else if (alloc.get_fname() == "calloc") {
                    std::string num_str = stmtToString(call->getArg(0));
                    std::string size_str = stmtToString(call->getArg(1));
                    std::string increase_by = "(sizeof(void *) + " + size_str +
                        " - 1) / " + size_str;
                    std::string call_str = "calloc((" + num_str + ") + (" +
                        increase_by + "), " + size_str + ")";
                    helper_ss << " ({ void *____chimes_tmp_ptr = " << call_str <<
                        "; ";
                    helper_ss << "calloc_helper(____chimes_tmp_ptr, " <<
                        getArgString(call, 0) << ", " << getArgString(call, 1);
                    helper_ss << getMetadataArgs(&alloc);
                    helper_ss << "); " << ret_val_str << "; }) ";
                } else if (alloc.get_fname() == "realloc") {
                    std::string old_base_ptr = stmtToString(call->getArg(0));
                    std::string old_ptr_str = "(" + old_base_ptr +
                        " ? (((unsigned char *)" + old_base_ptr +
                        ") - sizeof(void *)) : (unsigned char *)(" + old_base_ptr + "))";
                    std::string size_str = "(" + stmtToString(call->getArg(1)) +
                        ") + sizeof(void *)";
                    std::string call_str = "realloc(" + old_ptr_str + ", " +
                        size_str + ")";
                    helper_ss << " ({ void *____chimes_tmp_header = " << stmtToString(call->getArg(0)) << "; " <<
                        "if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } " <<
                        "void *____chimes_tmp_ptr = " << call_str << "; ";
                    helper_ss << "realloc_helper(____chimes_tmp_ptr, " <<
                        old_ptr_str << ", ____chimes_tmp_header, " <<
                        getArgString(call, 1);
                    helper_ss << getMetadataArgs(&alloc);
                    helper_ss << "); " << ret_val_str << "; }) ";
                } else if (alloc.get_fname() == "free") {
                    /*
                     * Because the allocation/freeing of memory with malloc/free
                     * is not kept in the same protected transaction as CHIMES
                     * heap inserts/deletions, it is necessary to ensure that
                     * frees only come after free_helper and allocations only
                     * come before malloc_helper. Otherwise, it is possible for
                     * one thread to free a heap region, another thread to
                     * allocate that same heap region, and the second thread to
                     * enter malloc_helper before the first enters free_helper
                     * (depending on scheduling). Right now we don't do the same
                     * for cudaFree.
                     */
                    std::string ptr_str = "(((unsigned char *)" +
                        stmtToString(call->getArg(0)) + ") - sizeof(void *))";
                    std::string call_str = "free(" + ptr_str + ")";
                    helper_ss << " ({ free_helper(" << ptr_str <<
                        ", " << alloc.get_group() << "UL);" << call_str <<
                        ";  }) ";
                } else if (alloc.get_fname() == "cudaMalloc") {
                    std::string call_str = stmtToString(call);
                    helper_ss << " ({ cudaError_t ____chimes_err = " <<
                        call_str << "; cudaMalloc_helper(____chimes_err, " <<
                        getArgString(call, 0) << ", " <<
                        getArgString(call, 1) << getMetadataArgs(&alloc) <<
                        "); ____chimes_err; }) ";
                } else if (alloc.get_fname() == "cudaFree") {
                    std::string call_str = stmtToString(call);
                    helper_ss << " ({ cudaError_t ____chimes_err = " <<
                        call_str << "; cudaFree_helper(____chimes_err, " <<
                        getArgString(call, 0) << "); ____chimes_err; }) ";
                } else {
                    fprintf(stderr, "Unsupported allocation function \"%s\"\n",
                            alloc.get_fname().c_str());
                    assert(false);
                }

                clang::SourceLocation start = call->getLocStart();
                clang::SourceLocation end = call->getLocEnd();
                ReplaceText(clang::SourceRange(start, end), helper_ss.str());
            }
        }
    }

    found_allocs.clear();
}

void MallocPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        int start_line = SM->getPresumedLineNumber(start);
        int start_col = SM->getPresumedColumnNumber(start);

        if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
            const clang::FunctionDecl *callee = call->getDirectCallee();
            if (callee != NULL) {
                std::string funcname = callee->getNameAsString();

                if (npm_pass) {
                    if (earliest_call_line.find(funcname) ==
                            earliest_call_line.end()) {
                        earliest_call_line[funcname] = start_line;
                    } else {
                        if (start_line <
                                earliest_call_line[funcname]) {
                            earliest_call_line[funcname] =
                                start_line;
                        }
                    }
                }

                if (supportedAllocationFunctions.find(funcname) !=
                        supportedAllocationFunctions.end()) {
                    if (found_allocs.find(start_line) == found_allocs.end()) {
                        found_allocs[start_line] = new std::map<std::string,
                        std::vector<FoundAlloc> *>();
                    }
                    std::map<std::string, std::vector<FoundAlloc> *> *per_line =
                        found_allocs[start_line];

                    if (per_line->find(funcname) == per_line->end()) {
                        (*per_line)[funcname] = new std::vector<FoundAlloc>();
                    }
                    std::vector<FoundAlloc> *per_func = (*per_line)[funcname];

                    per_func->push_back(FoundAlloc(start_col, call));
                }
            }

            if (npm_pass && callee == NULL) {
                /*
                 * Function pointer call in an NPM function, will only get
                 * written out if all function pointer calls in this function
                 * are to pointers marked as non-checkpointing.
                 */
                clang::PresumedLoc presumed_start = SM->getPresumedLoc(
                        call->getLocStart());
                AliasesPassedToCallSite callsite =
                    insertions->findExactMatchingCallsite(
                            presumed_start.getLine(),
                            presumed_start.getColumn());
                // std::string regular_call = generateNormalCall(call, -1,
                //         callsite, false, "0");
                std::string regular_call = generateFunctionPointerCall(call,
                        callsite, -1, "0");
                ReplaceText(clang::SourceRange(call->getLocStart(),
                            call->getLocEnd()), regular_call);
            }
        }
    }

    visitChildren(s);
}
