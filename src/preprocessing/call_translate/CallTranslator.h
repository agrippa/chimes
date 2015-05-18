#ifndef CALL_TRANSLATOR_H
#define CALL_TRANSLATOR_H

#include <vector>
#include <fstream>

enum INSIDE_QUICK_FUNC { YES, NO, UNKNOWN };

class CallTranslator : public clang::ConstStmtVisitor<CallTranslator> {
    public:
        CallTranslator(const char *data_filename) {
            std::ifstream in(data_filename);
            std::string line;
            while (std::getline(in, line)) {
                size_t index = line.find(' ');
                transformed_functions.push_back(line.substr(0, index));
            }
        }

        void setRewriter(clang::Rewriter &R) {
            rewriter = &R;
            SM = &R.getSourceMgr();
        }
        void setContext(clang::ASTContext &set_Context) {
            Context = &set_Context;
        }

        void visitChildren(const clang::Stmt *s);
        void VisitStmt(const clang::Stmt *s);
        std::string to_string(const clang::Stmt *stmt);

    protected:
        clang::ASTContext *Context;
        clang::SourceManager *SM;
        clang::Rewriter *rewriter;
        std::vector<std::string> transformed_functions;

        bool is_transformed(std::string fname) {
            return (std::find(transformed_functions.begin(),
                        transformed_functions.end(), fname) !=
                    transformed_functions.end());
        }
};

#endif
