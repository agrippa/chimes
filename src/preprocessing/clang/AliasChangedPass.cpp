#include <sstream>

#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

static std::vector<MatchedLocation *> already_matched;

static bool matched(int line, int col, std::string &filename) {
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

static void mark_matched(int line, int col, std::string &filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

void AliasChangedPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        unsigned start_line = SM->getPresumedLineNumber(start);
        unsigned start_col = SM->getPresumedColumnNumber(start);
        unsigned end_line = SM->getPresumedLineNumber(end);
        unsigned end_col = SM->getPresumedColumnNumber(end);
        std::string filename = SM->getFilename(start);

        if (insertions->contains(start_line, start_col, filename) &&
                !matched(start_line, start_col, filename)) {
            mark_matched(start_line, start_col, filename);

            std::vector<int> *groups = insertions->get_groups(start_line,
                    start_col, filename);
            std::stringstream ss;
            ss << "alias_group_changed(" << groups->size();
            for (std::vector<int>::iterator i = groups->begin(),
                    e = groups->end(); i != e; i++) {
                ss << ", " << *i;
            }
            ss << ")";
            switch (parent->getStmtClass()) {
                case clang::Stmt::IfStmtClass: {
                    ss << " || ";
                    TheRewriter->InsertText(start, ss.str(), true, true);
                    break;
                }
                case clang::Stmt::ForStmtClass: {
                    const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(parent);
                    if (f->getInit() == s || f->getInc() == s) {
                        ss << ", ";
                        TheRewriter->InsertText(start, ss.str(), true, true);
                    } else if (f->getCond() == s) {
                        llvm::errs() << "Unsupported\n";
                        assert(false);
                    } else {
                        llvm::errs() << "Unsupported\n";
                        assert(false);
                    }
                    break;
                }
                default: {
                    ss << "; ";
                    TheRewriter->InsertText(start, ss.str(), true, true);
                    break;
                }
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
