#include <sstream>

#include "MallocPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void MallocPass::VisitTopLevel(clang::Decl *toplevel) {
    // For each line that has a memory allocation or free statement
   
    std::vector<Line*> sorted_lines; // for deterministic code generation
    for (std::map<Line*, std::map<std::string, std::vector<FoundAlloc> *> *>::iterator i = found_allocs.begin(), e = found_allocs.end(); i != e; i++) {
        sorted_lines.push_back(i->first);
    }
    std::sort(sorted_lines.begin(), sorted_lines.end(), line_ptr_comparator);

    for (std::vector<Line*>::iterator i = sorted_lines.begin(),
            e = sorted_lines.end(); i != e; i++) {
        Line *line = *i;
        std::map<std::string, std::vector<FoundAlloc> *> *per_line =
            found_allocs[line];

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
                        "line " << line->get() << " with name " <<
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

                        // Element size for each struct
                        ss2 << ", (int)sizeof(struct " <<
                            alloc.get_struct_type_name() << "), " <<
                            alloc.get_num_field_ptrs();

                        // Offests in struct of all pointer fields
                        std::vector<std::string> *struct_field_ptrs =
                            alloc.get_struct_field_ptrs();
                        for (std::vector<std::string>::iterator p_i =
                                struct_field_ptrs->begin(), p_e =
                                struct_field_ptrs->end(); p_i != p_e; p_i++) {
                            std::string fieldname = *p_i;
                            ss2 << ", (int)offsetof(struct " <<
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
        Line* start_line = lines.get(SM->getPresumedLineNumber(start));
        int start_col = SM->getPresumedColumnNumber(start);

        if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
            const clang::FunctionDecl *callee = call->getDirectCallee();
            std::string funcname = callee->getNameAsString();

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

    visitChildren(s);
}
