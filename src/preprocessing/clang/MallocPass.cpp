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

void MallocPass::VisitTopLevel(clang::FunctionDecl *toplevel) {

    if (npm_pass) {
        clang::PresumedLoc presumed_start = SM->getPresumedLoc(
                toplevel->getLocStart());
        std::string fname = toplevel->getName().str();
        assert(function_starting_lines.find(fname) ==
                function_starting_lines.end());
        function_starting_lines.insert(std::pair<std::string, int>(fname,
                    presumed_start.getLine()));
    }

    if (npm_pass && toplevel->getNameInfo().getAsString() != "main") {
        clang::SourceLocation name_start = toplevel->getNameInfo().getLoc();
        int current_name_len = toplevel->getNameInfo().getAsString().size();

        npm_functions.insert(toplevel->getNameAsString());
        ReplaceText(name_start, current_name_len,
                toplevel->getNameInfo().getAsString() + "_npm");

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
                clang::SourceLocation start = call->getLocStart();

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

                std::stringstream ss;
                ss << alloc.get_fname() << "_wrapper";
                ReplaceText(start, alloc.get_fname().size(), ss.str());

                std::stringstream ss2;
                ss2 << ", " << alloc.get_group() << "UL";

                if (alloc.get_fname() == "malloc" ||
                        alloc.get_fname() == "calloc" ||
                        alloc.get_fname() == "realloc" ||
                        alloc.get_fname() == "cudaMalloc") {
                    /*
                     * This is already asserted while generating heap.info from
                     * LLVM, but assert here to improve readability and protect
                     * against parsing errors.
                     */
                    assert(!(alloc.get_is_elem_ptr() &&
                            alloc.get_is_elem_struct()));
                    if (alloc.get_is_elem_ptr()) {
                        // elements in allocation are pointers, not structs
                        ss2 << ", 1, 0";
                    } else if (alloc.get_is_elem_struct()) {
                        // elements in allocation are structs, not pointers
                        ss2 << ", 0, 1";
                        StructFields *struct_info =
                            insertions->get_struct_fields_for(
                                    alloc.get_struct_type_name());
                        assert(struct_info);

                        // Element size for each struct
                        if (struct_info->get_is_unnamed()) {
                            ss2 << ", (int)sizeof(" <<
                                alloc.get_struct_type_name() << "), ";
                        } else {
                            ss2 << ", (int)sizeof(struct " <<
                                alloc.get_struct_type_name() << "), ";
                        }
                        ss2 << alloc.get_num_field_ptrs();

                        // Offests in struct of all pointer fields
                        std::vector<std::string> *struct_field_ptrs =
                            alloc.get_struct_field_ptrs();
                        for (std::vector<std::string>::iterator p_i =
                                struct_field_ptrs->begin(), p_e =
                                struct_field_ptrs->end(); p_i != p_e; p_i++) {
                            std::string fieldname = *p_i;
                            ss2 << ", (int)__builtin_offsetof(struct " <<
                                alloc.get_struct_type_name() << ", " <<
                                fieldname << ")";
                        }
                    } else {
                        ss2 << ", 0, 0";
                    }
                }

                const clang::Expr *arg = call->getArg(call->getNumArgs() - 1);
                clang::SourceLocation end_arg = arg->getLocEnd();
                InsertTextAfterToken(end_arg, ss2.str());
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
        }
    }

    visitChildren(s);
}
