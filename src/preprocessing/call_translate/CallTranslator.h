#ifndef CALL_TRANSLATOR_H
#define CALL_TRANSLATOR_H

#include <vector>
#include <fstream>

enum INSIDE_FUNC {YES, NO, UNKNOWN};

class ExternalNPMCall {
    public:
        ExternalNPMCall(std::string set_function_name, std::string set_var,
                std::string set_var_decl, int set_first_line_referenced,
                std::string set_filename) :
            function_name(set_function_name), var(set_var),
            var_decl(set_var_decl), filename(set_filename),
            first_line_referenced(set_first_line_referenced) { }
        void update_line(int new_line) {
            if (new_line < first_line_referenced) {
                first_line_referenced = new_line;
            }
        }

        std::string get_function_name() { return function_name; }
        std::string get_var() { return var; }
        std::string get_var_decl() { return var_decl; }
        std::string get_filename() { return filename; }
        int get_first_line_referenced() { return first_line_referenced; }

    private:
        std::string function_name;
        std::string var;
        std::string var_decl;
        std::string filename;
        int first_line_referenced;
};

class CallTranslator : public clang::ConstStmtVisitor<CallTranslator> {
    public:
        CallTranslator(const char *quick_data_filename,
                const char *npm_data_filename) {
            std::ifstream quick_in(quick_data_filename);
            std::string line;
            while (std::getline(quick_in, line)) {
                size_t index = line.find(' ');
                quick_transformed_functions.push_back(line.substr(0, index));

                while (line != "-----") {
                    std::getline(quick_in, line);
                }
            }
            quick_in.close();

            std::ifstream npm_in(npm_data_filename);
            while (std::getline(npm_in, line)) {
                size_t index = line.find(' ');
                npm_transformed_functions.push_back(line.substr(0, index));

                while (line != "-----") {
                    std::getline(npm_in, line);
                }
            }
            npm_in.close();
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
        std::vector<std::string> quick_transformed_functions;
        std::vector<std::string> npm_transformed_functions;

        bool is_quick_transformed(std::string fname) {
            return (std::find(quick_transformed_functions.begin(),
                        quick_transformed_functions.end(), fname) !=
                    quick_transformed_functions.end());
        }

        bool is_npm_transformed(std::string fname) {
            return (std::find(npm_transformed_functions.begin(),
                        npm_transformed_functions.end(), fname) !=
                    npm_transformed_functions.end());
        }
};

#endif
