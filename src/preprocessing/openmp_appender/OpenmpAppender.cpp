#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "llvm/Support/raw_ostream.h"

#include "OpenmpAppender.h"

extern std::string curr_func;
extern int func_start_line;
extern int func_start_col;
extern int func_end_line;
extern int func_end_col;

void OpenmpAppender::visitChildren(const clang::Stmt *s) {
    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            VisitStmt(child);
        }
    }
}

int OpenmpAppender::getLine(clang::SourceLocation loc) {
    return SM->getPresumedLoc(loc).getLine();
}

int OpenmpAppender::getCol(clang::SourceLocation loc) {
    return SM->getPresumedLoc(loc).getColumn();
}

void OpenmpAppender::finalize() {
    for (std::map<int, const clang::Stmt *>::iterator i = following.begin(),
            e = following.end(); i != e; i++) {
        const clang::Stmt *s = i->second;
        AppendInfo info = appends->at(i->first);

#ifdef VERBOSE
        llvm::errs() << "Found the following statement for pragma " << info.str() << ":\n";
        s->dump();
#endif
        assert(clang::isa<clang::CompoundStmt>(s) ||
                clang::isa<clang::ForStmt>(s));

        clang::SourceLocation startLoc = s->getLocStart();
        clang::SourceLocation endLoc = s->getLocEnd();

        if (info.get_is_parallel_for()) {
            const clang::ForStmt *for_stmt = clang::dyn_cast<clang::ForStmt>(s);
            assert(for_stmt);
            startLoc = for_stmt->getBody()->getLocStart();
        }

        rewriter->InsertTextAfterToken(startLoc, info.get_at_start());
        rewriter->InsertTextBefore(endLoc, info.get_at_end());
        rewriter->InsertTextAfterToken(endLoc, info.get_after());
        appends->at(i->first).mark_matched();
    }

    following.clear();
}

void OpenmpAppender::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation loc = s->getLocStart();

    if (loc.isValid()) {
        int line_no = getLine(loc);
        int col = getCol(loc);

        for (std::map<int, AppendInfo>::iterator i = appends->begin(),
                e = appends->end(); i != e; i++) {
            if (i->second.get_pragma_line() >= func_start_line &&
                    i->second.get_pragma_line() < func_end_line &&
                    line_no > i->first) {
                if (following.find(i->first) == following.end()) {
                    following.insert(std::pair<int, const clang::Stmt *>(i->first, s));
#ifdef VERBOSE
                    llvm::errs() << "For pragma at line " << i->first <<
                        " got statement at " << line_no << ":" << col << "\n";
#endif
                } else {
                    int existingLine = getLine(following.at(i->first)->getLocStart());
                    int existingCol = getCol(following.at(i->first)->getLocStart());
                    if (line_no < existingLine || (line_no == existingLine && col < existingCol)) {
#ifdef VERBOSE
                        llvm::errs() << "For pragma at line " << i->first <<
                            " got statement at " << line_no << ":" << col <<
                            "\n";
#endif
                        following.find(i->first)->second = s;
                    }
                }
            }
        }
    }

    visitChildren(s);
}
