#include <sstream>

#include "InitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void InitPass::VisitTopLevel(clang::Decl *toplevel) {
    clang::FunctionDecl *func = clang::dyn_cast<clang::FunctionDecl>(toplevel);
    if (func != NULL) {
        const clang::Stmt *body = func->getBody();
        assert(clang::isa<clang::CompoundStmt>(body));
        const clang::CompoundStmt *cmpd = clang::dyn_cast<const clang::CompoundStmt>(body);

        if (func->getNameAsString() == "main") {
            clang::Stmt::const_child_iterator iter = cmpd->child_begin();
            const clang::Stmt *child = *iter;
            std::stringstream ss;

            ss << "init_numdebug(" << insertions->get_struct_fields()->size();
            for (std::vector<StructFields *>::iterator i =
                    insertions->get_struct_fields()->begin(), e =
                    insertions->get_struct_fields()->end(); i != e; i++) {
                StructFields *fields = *i;

                ss << ", \"" << fields->get_name() << "\", " <<
                    fields->num_fields();
                for (std::vector<std::string>::iterator ii = fields->begin(),
                        ee = fields->end(); ii != ee; ii++) {
                    std::string field_name = *ii;
                    ss << ", (int)offsetof(struct " << fields->get_name() <<
                        ", " << field_name << ")";
                }
            }

            ss << "); ";
            InsertText(child->getLocStart(), ss.str(), true, true);
        }
    }
}

void InitPass::VisitStmt(const clang::Stmt *s) {
}
