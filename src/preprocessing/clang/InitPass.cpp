#include <sstream>

#include "InitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

static bool found_main = false;

void InitPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);
        unsigned end_line = SM->getPresumedLineNumber(end);
        unsigned end_col = SM->getPresumedColumnNumber(end);
        std::string filename = SM->getFilename(start);

        if (!found_main && start_line == insertions->get_main_line()) {
            clang::Stmt::const_child_iterator iter = s->child_begin();
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
            TheRewriter->InsertText(child->getLocStart(), ss.str(), true, true);
            found_main = true;
        }
    }

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            parent = s;
            VisitStmt(child);
        }
    }
}
