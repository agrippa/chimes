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
            HeapAlloc *alloc = insertions->isMemoryAllocation(start_line,
                    start_col);
            if (alloc != NULL) {
                const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s);
                assert(call != NULL);

                const clang::FunctionDecl *callee = call->getDirectCallee();
                assert(callee->getNameAsString() == alloc->get_fname());

                std::stringstream ss;
                ss << alloc->get_fname() << "_wrapper";
                ReplaceText(start, alloc->get_fname().size(), ss.str());

                std::stringstream ss2;
                ss2 << ", " << alloc->get_group();

                if (alloc->get_fname() == "malloc") {
                    if(alloc->get_have_type_info()) {
                        ss2 << ", 1"; // has type info
                        ss2 << ", " << (alloc->get_is_elem_ptr() ? "1" : "0") <<
                            ", " << (alloc->get_is_elem_struct() ? "1" : "0");
                        if (alloc->get_is_elem_struct()) {
                            ss2 << ", (int)sizeof(struct " <<
                                alloc->get_struct_type_name() << "), " <<
                                alloc->get_num_field_ptrs();

                            std::vector<std::string> *struct_field_ptrs =
                                alloc->get_struct_field_ptrs();
                            for (std::vector<std::string>::iterator p_i =
                                    struct_field_ptrs->begin(), p_e =
                                    struct_field_ptrs->end(); p_i != p_e; p_i++) {
                                std::string fieldname = *p_i;
                                ss2 << ", (int)offsetof(struct " <<
                                    alloc->get_struct_type_name() << ", " <<
                                    fieldname << ")";
                            }
                        }
                    } else {
                        ss2 << ", 0"; // does not have type info
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
