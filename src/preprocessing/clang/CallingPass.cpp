#include <sstream>

#include "CallingPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

static std::vector<int> labels_used;

void CallingPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);
        unsigned end_line = SM->getPresumedLineNumber(end);
        unsigned end_col = SM->getPresumedColumnNumber(end);
        std::string filename = SM->getFilename(start);

        LabelInfo *label_info = insertions->isLabeledLoc(start_line, start_col);
        if (label_info != NULL && label_info->get_type() == CALLSITE) {
            int lbl = insertions->getLabelAssignedFor(start_line, start_col);
            if (std::find(labels_used.begin(), labels_used.end(), lbl) ==
                    labels_used.end()) {
                std::stringstream ss;
                ss << " call_lbl_" << lbl << ": calling(" << lbl << "); ";
                TheRewriter->InsertText(start, ss.str(), true, true);
                labels_used.push_back(lbl);
            }
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
