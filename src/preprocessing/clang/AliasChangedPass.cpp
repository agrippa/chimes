#include <sstream>

#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

static std::vector<MatchedLocation *> already_matched;

static bool matched(int line, int col, const char *filename) {
    std::string filename_str(filename);
    for (std::vector<MatchedLocation *>::iterator i = already_matched.begin(),
            e = already_matched.end(); i != e; i++) {
        MatchedLocation *loc = *i;
        if (loc->get_line() == line && loc->get_col() == col &&
                loc->get_filename() == filename_str) {
            return true;
        }
    }
    return false;
}

static void mark_matched(int line, int col, const char *filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

void AliasChangedPass::WrapAroundBlock(const clang::Stmt *block,
        std::string toPrefix, std::string toAppend) {

    if (clang::isa<clang::IfStmt>(block)) {
        /*
         * It seems it is possible this gets passed a full IfStmt as the body of
         * an 'else' in the case of an 'else if'.
         */
        const clang::IfStmt *nested = clang::dyn_cast<const clang::IfStmt>(block);
        block = nested->getThen();
    }

    clang::SourceLocation start = block->getLocStart();
    clang::SourceLocation end = block->getLocEnd();

    clang::PresumedLoc start_loc = SM->getPresumedLoc(start);
    clang::PresumedLoc end_loc = SM->getPresumedLoc(end);

    if (clang::isa<clang::CompoundStmt>(block)) {
        InsertText(start, toPrefix, true, true);
        InsertTextAfterToken(end, toAppend);
    } else {
        std::string block_str;
        llvm::raw_string_ostream block_stream(block_str);
        block->printPretty(block_stream, NULL, Context->getPrintingPolicy());
        block_stream.flush();

        std::stringstream new_block;
        new_block << toPrefix << block_str << toAppend;

        ReplaceText(end, block_str.size(), new_block.str());
    }
}

void AliasChangedPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid()) {
        clang::PresumedLoc start_loc = SM->getPresumedLoc(start);
        clang::PresumedLoc end_loc = SM->getPresumedLoc(end);
        std::string filename_str(start_loc.getFilename());

        if (insertions->isMainFile(start_loc.getFilename()) &&
                insertions->contains(start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename()) && !matched(start_loc.getLine(),
                    start_loc.getColumn(), start_loc.getFilename())) {
            mark_matched(start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename());

            std::vector<size_t> *groups = insertions->get_groups(
                    start_loc.getLine(), start_loc.getColumn(),
                    start_loc.getFilename());
            std::stringstream ss;
            ss << "alias_group_changed(" << groups->size();
            for (std::vector<size_t>::iterator i = groups->begin(),
                    e = groups->end(); i != e; i++) {
                ss << ", (size_t)(" << *i << "UL)";
            }
            ss << ")";

            unsigned int inserted_line = start_loc.getLine();
            unsigned int inserted_col = start_loc.getColumn();
            unsigned int ninserted;

            switch (parent->getStmtClass()) {
                case clang::Stmt::IfStmtClass: {
                    ss << " || ";
                    InsertText(start, ss.str(), true, true);
                    ninserted = ss.str().length();
                    break;
                }
                case clang::Stmt::ForStmtClass: {
                    const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(parent);
                    if (f->getInit() == s || f->getInc() == s) {
                        ss << ", ";
                        InsertText(start, ss.str(), true, true);
                        ninserted = ss.str().length();
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
                    clang::PresumedLoc insert_loc = InsertAtFront(s, ss.str());
                    inserted_line = insert_loc.getLine();
                    inserted_col = insert_loc.getColumn();
                    ninserted = ss.str().length();
                    break;
                }
            }
        }
    }

    // Insert braces around all if and for statement bodies
    switch(s->getStmtClass()) {
        case clang::Stmt::ForStmtClass: {
            const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(s);
            assert(f);
            const clang::Stmt *body = f->getBody();
            WrapAroundBlock(body, "{ ", " }");
            break;
        }
        case clang::Stmt::IfStmtClass: {
            const clang::IfStmt *f = clang::dyn_cast<clang::IfStmt>(s);
            assert(f);

            const clang::Stmt *then = f->getThen();
            WrapAroundBlock(then, "{ ", " }");

            const clang::Stmt *els = f->getElse();
            if (els) {
                WrapAroundBlock(els, "{ ", " }");
            }
            break;
        }
        default:
            break;
    }

    visitChildren(s);
}
