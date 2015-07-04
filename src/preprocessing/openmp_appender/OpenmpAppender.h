#ifndef OPENMP_APPENDER_H
#define OPENMP_APPENDER_H

#include <string>
#include <sstream>

class AppendInfo {
    public:
        AppendInfo(int set_pragma_line, int set_is_parallel_for,
                std::string set_funcname, std::string set_filename,
                int set_body_start_line, int set_body_start_col,
                int set_body_end_line, int set_body_end_col,
                std::string set_after, std::string set_at_start,
                std::string set_at_end) : pragma_line(set_pragma_line),
            is_parallel_for(set_is_parallel_for),
            funcname(set_funcname), filename(set_filename), body_start_line(set_body_start_line),
            body_start_col(set_body_start_col),
            body_end_line(set_body_end_line), body_end_col(set_body_end_col),
            after(set_after), at_start(set_at_start), at_end(set_at_end) { }

        std::string str() {
            std::stringstream ss;
            ss << "[pragma_line=" << pragma_line << " filename=" << filename << "]";
            return ss.str();
        }

        std::string get_after() { return after; }
        std::string get_at_start() { return at_start; }
        std::string get_at_end() { return at_end; }
        std::string get_funcname() { return funcname; }
        int get_pragma_line() { return pragma_line; }
        int get_is_parallel_for() { return is_parallel_for; }

        void mark_matched() { matched ++; }
        int nmatches() { return matched; }

    private:
        int pragma_line;
        int is_parallel_for;
        std::string filename;
        std::string funcname;
        int body_start_line;
        int body_start_col;
        int body_end_line;
        int body_end_col;
        
        std::string after;
        std::string at_start;
        std::string at_end;

        int matched = 0;
};

class OpenmpAppender : public clang::ConstStmtVisitor<OpenmpAppender> {
    public:
        OpenmpAppender(std::map<int, AppendInfo> *set_appends) : appends(set_appends) { }

        void setRewriter(clang::Rewriter &R) {
            rewriter = &R;
            SM = &R.getSourceMgr();
        }
        void setContext(clang::ASTContext &set_Context) {
            Context = &set_Context;
        }

        void visitChildren(const clang::Stmt *s);
        void VisitStmt(const clang::Stmt *s);
        void finalize();
        int getLine(clang::SourceLocation loc);
        int getCol(clang::SourceLocation loc);

    protected:
        clang::ASTContext *Context;
        clang::SourceManager *SM;
        clang::Rewriter *rewriter;
        std::map<int, AppendInfo> *appends;

        std::map<int, const clang::Stmt *> following;
};

#endif
