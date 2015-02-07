#include <sstream>

#include "MallocPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void MallocPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);

        if (const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s)) {
            const clang::FunctionDecl *callee = call->getDirectCallee();

            HeapAlloc alloc;
            bool found = insertions->findNextMatchingMemoryAllocation(
                    start_line, callee->getNameAsString(), &alloc);
            if (supportedAllocationFunctions.find(callee->getNameAsString()) !=
                    supportedAllocationFunctions.end()) {
                assert(found);
            } else {
                assert(!found);
            }

            if (found) {
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

    visitChildren(s);
}
