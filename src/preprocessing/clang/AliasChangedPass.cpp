#include <sstream>

#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/ADT/ArrayRef.h>

extern DesiredInsertions *insertions;

static std::vector<MatchedLocation *> already_matched;

static bool matched(Line* line, int col, const char *filename) {
    std::string filename_str(filename);
    for (std::vector<MatchedLocation *>::iterator i = already_matched.begin(),
            e = already_matched.end(); i != e; i++) {
        MatchedLocation *loc = *i;
        if (loc->get_line() == line && loc->get_col() == col &&
                loc->get_filename() == filename_str) {
            assert(loc->get_line()->get() == line->get());
            return true;
        }
    }
    return false;
}

static void mark_matched(Line* line, int col, const char *filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

int AliasChangedPass::startingLine(const clang::Stmt *stmt) {
    return SM->getPresumedLoc(stmt->getLocStart()).getLine();
}

int AliasChangedPass::endingLine(const clang::Stmt *stmt) {
    return SM->getPresumedLoc(stmt->getLocEnd()).getLine();
}

int AliasChangedPass::countLines(std::string s, llvm::raw_string_ostream& stream) {
    stream.flush();

    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '\n') count++;
    }
    return count;
}

void AliasChangedPass::addNecessaryLines(int curr_line, int target,
        llvm::raw_string_ostream &stream) {
    for (int i = 0; i < (target - curr_line); i++) {
        stream << "\n";
    }
}

std::string AliasChangedPass::to_string(const clang::Stmt *stmt) {
    std::string s;
    llvm::raw_string_ostream stream(s);

    stmt->printPretty(stream, NULL, Context->getPrintingPolicy());
    stream.flush();

    int start_index = 0;
    while (start_index < s.length() && std::isspace(s[start_index])) {
        start_index++;
    }

    int end_index = s.length() - 1;
    while (end_index >= 0 && std::isspace(s[end_index])) {
        end_index--;
    }

    return s.substr(start_index, end_index - start_index + 1);
}

void AliasChangedPass::WrapAroundBlock(const clang::Stmt *block,
        std::string toPrefix, std::string toAppend, const clang::Stmt *parent) {
    if (clang::isa<clang::IfStmt>(block)) {
        /*
         * It seems it is possible this gets passed a full IfStmt as the body of
         * an 'else' in the case of an 'else if'.
         */
        const clang::IfStmt *nested = clang::dyn_cast<const clang::IfStmt>(block);
        parent = nested;
        block = nested->getThen();
    }

    clang::SourceLocation start = block->getLocStart();
    clang::SourceLocation end = block->getLocEnd();

    clang::PresumedLoc start_loc = SM->getPresumedLoc(start);
    clang::PresumedLoc end_loc = SM->getPresumedLoc(end);

    if (clang::isa<clang::CompoundStmt>(block)) {
        /*
         * TODO is this necessary? Will compound statments all already have
         * braces around them?
         */
        InsertText(start, toPrefix, true, true);
        InsertTextAfterToken(end, toAppend);
    } else {
        std::string block_str;
        llvm::raw_string_ostream block_stream(block_str);
        block->printPretty(block_stream, NULL, Context->getPrintingPolicy());
        block_stream.flush();

        std::stringstream new_block;
        new_block << toPrefix << block_str << toAppend;

        ReplaceText(clang::SourceRange(start, end), new_block.str());
    }
}

void AliasChangedPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid()) {
        clang::PresumedLoc start_loc = SM->getPresumedLoc(start);
        clang::PresumedLoc end_loc = SM->getPresumedLoc(end);
        std::string filename_str(start_loc.getFilename());

        /*
         * If this statement is at a line:column location that was marked by the
         * analysis pass as a good point to insert an alias change notification.
         */
        if (insertions->isMainFile(start_loc.getFilename()) &&
                insertions->contains(lines.get(start_loc.getLine()),
                    start_loc.getColumn(), start_loc.getFilename()) &&
                !matched(lines.get(start_loc.getLine()), start_loc.getColumn(),
                    start_loc.getFilename())) {
            mark_matched(lines.get(start_loc.getLine()), start_loc.getColumn(),
                    start_loc.getFilename());

            // Get the list of alias groups changed at this location
            std::vector<size_t> *groups = insertions->get_groups(
                    lines.get(start_loc.getLine()), start_loc.getColumn(),
                    start_loc.getFilename());

            // Generate the alias_group_changed callback
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

    /*
     * Visit children and do call inserts before adding braces around any
     * children
     */
    visitChildren(s);

    // Insert braces around all if and for statement bodies
    switch(s->getStmtClass()) {
        case clang::Stmt::ForStmtClass: {
            const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(s);
            assert(f);

            const clang::Stmt *body = f->getBody();
            assert(body != NULL);

            if (!clang::isa<clang::CompoundStmt>(body)) {
                std::string for_str;
                llvm::raw_string_ostream for_stream(for_str);

                int base_line = startingLine(f);

                std::string init_str = to_string(f->getInit());
                std::string cond_str = to_string(f->getCond());
                std::string inc_str = to_string(f->getInc());
                std::string body_str = to_string(f->getBody());

                for_stream << "for (";

                addNecessaryLines(base_line, startingLine(f->getInit()), for_stream);
                for_stream << init_str;
                if (f->getInit()->getStmtClass() != clang::Stmt::DeclStmtClass) {
                    for_stream << "; ";
                }

                addNecessaryLines(base_line + countLines(for_str, for_stream),
                        startingLine(f->getCond()), for_stream);
                for_stream << cond_str << "; ";

                addNecessaryLines(base_line + countLines(for_str, for_stream),
                        startingLine(f->getInc()), for_stream);
                for_stream << inc_str << ") { ";

                addNecessaryLines(base_line + countLines(for_str, for_stream),
                        startingLine(f->getBody()), for_stream);
                for_stream << body_str << "; }";

                for_stream.flush();

                ReplaceText(f->getSourceRange(), for_str);
            }
            break;
        }
        case clang::Stmt::IfStmtClass: {
            const clang::IfStmt *f = clang::dyn_cast<clang::IfStmt>(s);
            assert(f);

            assert(f->getThen() != NULL);

            if (!clang::isa<clang::CompoundStmt>(f->getThen()) ||
                    (f->getElse() != NULL && !clang::isa<clang::CompoundStmt>(f->getElse()))) {
                std::string if_str;
                llvm::raw_string_ostream if_stream(if_str);

                int base_line = startingLine(f);
                llvm::errs() << "If starting on line " << base_line << "\n";

                std::string cond_str = to_string(f->getCond());
                std::string then_str = to_string(f->getThen());

                llvm::errs() << "  cond=\"" << cond_str << "\"\n";
                llvm::errs() << "  then=\"" << then_str << "\"\n";

                if_stream << "if (";

                llvm::errs() << "  cond: " << base_line << " " <<
                    startingLine(f->getCond()) << "\n";
                addNecessaryLines(base_line, startingLine(f->getCond()), if_stream);
                if_stream << cond_str << ") {";

                llvm::errs() << "  then: " << (base_line +
                        countLines(if_str, if_stream)) << " " <<
                    startingLine(f->getThen()) << "\n";

                addNecessaryLines(base_line + countLines(if_str, if_stream),
                        startingLine(f->getThen()), if_stream);
                if_stream << then_str << "; }";

                if (f->getElse() != NULL) {
                    if_stream << " else ";
                    if (!clang::isa<clang::IfStmt>(f->getElse())) {
                        if_stream << " {";
                    }
                    llvm::errs() << "  else: " << (base_line +
                            countLines(if_str, if_stream)) << " " <<
                        startingLine(f->getElse()) << "\n";

                    addNecessaryLines(base_line + countLines(if_str, if_stream),
                            startingLine(f->getElse()), if_stream);
                    std::string else_str = to_string(f->getElse());
                    llvm::errs() << "  ese=\"" << else_str << "\"\n";
                    if_stream << else_str;
                    if (!clang::isa<clang::IfStmt>(f->getElse())) {
                        if_stream << "} ";
                    }
                }
                if_stream.flush();

                ReplaceText(f->getSourceRange(), if_str);
            }
            break;
        }
        default:
            break;
    }
}
