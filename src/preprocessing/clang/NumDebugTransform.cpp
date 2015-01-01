#include "NumDebugTransform.h"
#include "DesiredInsertions.h"

extern DesiredInsertions *insertions;
static std::vector<MatchedLocation *> already_matched;

bool matched(int line, int col, std::string &filename) {
    for (std::vector<MatchedLocation *>::iterator i = already_matched.begin(),
            e = already_matched.end(); i != e; i++) {
        MatchedLocation *loc = *i;
        if (loc->get_line() == line && loc->get_col() == col &&
                loc->get_filename() == filename) {
            return true;
        }
    }
    return false;
}

void mark_matched(int line, int col, std::string &filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

void NumDebugTransform::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM.isInMainFile(start)) {
        unsigned start_line = SM.getPresumedLineNumber(start);
        unsigned start_col = SM.getPresumedColumnNumber(start);
        unsigned end_line = SM.getPresumedLineNumber(end);
        unsigned end_col = SM.getPresumedColumnNumber(end);
        std::string filename = SM.getFilename(start);
        // llvm::errs() << "Visiting " << filename << ":" << start_line << ":" <<
        //     start_col << " -> " << end_line << ":" << end_col << " \"";
        // s->dump();
        // llvm::errs() << "\"\n";

        if (insertions->contains(start_line, start_col, filename) &&
                !matched(start_line, start_col, filename)) {
            llvm::errs() << "Found a match for " << filename << ":" <<
                start_line << ":" << start_col << "\n";
            s->dump();
            llvm::errs() << "\n";
            mark_matched(start_line, start_col, filename);
        }

        // TheRewriter.InsertText(start, "hello!", true, true);
    }

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            VisitStmt(child);
        }
    }
}
