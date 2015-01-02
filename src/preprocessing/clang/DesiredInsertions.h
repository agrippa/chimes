#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <vector>
#include <string>
#include <map>

class StackAlloc {
public:
    StackAlloc(std::string set_enclosing_file, std::string set_mangled_name,
            std::string set_full_type, int set_type_size_in_bits,
            bool set_is_ptr, bool set_is_struct) :
        enclosing_file(set_enclosing_file),
        mangled_varname(set_mangled_name), full_type(set_full_type),
        type_size_in_bits(set_type_size_in_bits), is_ptr(set_is_ptr),
        is_struct(set_is_struct) { }

    void set_struct_type_name(std::string s) { struct_type_name = s; }
    std::string get_struct_type_name() { return struct_type_name; }

    void add_ptr_field(std::string f) { ptr_fields.push_back(f); }

    std::string get_enclosing_file() { return enclosing_file; }
    std::string get_mangled_varname() { return mangled_varname; }
    std::string get_full_type() { return full_type; }
    int get_type_size_in_bits() { return type_size_in_bits; }
    bool get_is_ptr() { return is_ptr; }
    bool get_is_struct() { return is_struct; }

private:
    std::string enclosing_file;
    std::string mangled_varname;
    std::string full_type;
    int type_size_in_bits;
    bool is_ptr;
    bool is_struct;
    std::string struct_type_name;
    std::vector<std::string> ptr_fields;
};

class Declaration {
public:
    Declaration(int set_line_no, int set_col, std::string set_varname) :
        line_no(set_line_no), col(set_col), varname(set_varname) {}
    int get_line_no() { return line_no; }
    int get_col() { return col; }
    std::string get_varname() { return varname; }

private:
    int line_no;
    int col;
    std::string varname;
};

class StructFields {
public:
    StructFields(std::string set_name) : name(set_name) {}
    void add_field(std::string &field) { fields.push_back(field); }

    std::string get_name() { return name; }
    int num_fields() { return fields.size(); }
    std::vector<std::string>::iterator begin() { return fields.begin(); }
    std::vector<std::string>::iterator end() { return fields.end(); }

private:
    std::string name;
    std::vector<std::string> fields;
};

class MatchedLocation {
public:
    MatchedLocation(int set_line, int set_col, std::string set_filename) :
        line(set_line), col(set_col), filename(set_filename) {}
    int get_line() { return line; }
    int get_col() { return col; }
    std::string get_filename() { return filename; }

private:
    int line, col;
    std::string filename;
};

class FunctionStartInsertion {
public:
    FunctionStartInsertion(std::string set_func, int set_line) : func(set_func),
            line_no(set_line) {}
    std::string get_func() { return func; }
    int get_line() { return line_no; }

private:
    std::string func;
    int line_no;
};

class StateChangeInsertion {
public:
    StateChangeInsertion(std::string set_filename, int set_line_no, int set_col,
            std::vector<int> *set_groups) : filename(set_filename),
            line_no(set_line_no), col(set_col), groups(set_groups) {
    }

    int get_line() { return line_no; }
    int get_col() { return col; }
    std::string get_filename() { return filename; }
    std::vector<int> *get_groups() { return groups; }

private:
    std::string filename;
    int line_no;
    int col;
    std::vector<int> *groups;
};

class DesiredInsertions {
public:
    DesiredInsertions(const char *set_original_file,
            const char *lines_info_filename,
            const char *func_start_info_filename,
            const char *struct_info_filename,
            const char *function_exits_filename,
            const char *stack_allocs_filename, const char *decl_filename) :
            original_file(set_original_file),
            lines_info_file(lines_info_filename),
            func_start_info_file(func_start_info_filename),
            struct_info_file(struct_info_filename),
            function_exits_file(function_exits_filename),
            stack_allocs_file(stack_allocs_filename), decl_file(decl_filename) {
        state_change_insertions = parseStateChangeInsertions();
        function_starts = parseFunctionStartInsertions(&main_line);
        struct_fields = parseStructs();
        function_exits = parseFunctionExits();
        declarations = parseDeclarations();
        stack_allocs = parseStackAllocs();
    }

    bool contains(int line, int col, std::string &filename);
    std::vector<int> *get_groups(int line, int col, std::string &filename);
    int get_main_line() { return main_line; }
    std::vector<StructFields *> *get_struct_fields() { return struct_fields; }
    std::string get_original_file() { return original_file; }

    FunctionStartInsertion *is_function_start(int line);
    bool is_function_exit(int line);

private:
        std::string lines_info_file, func_start_info_file, struct_info_file,
            function_exits_file, stack_allocs_file, decl_file;
        std::string original_file;

        std::vector<StateChangeInsertion *> *state_change_insertions;
        std::vector<FunctionStartInsertion *> *function_starts;
        int main_line;
        std::vector<StructFields *> *struct_fields;
        std::vector<int> *function_exits;
        std::vector<Declaration *> *declarations;
        std::map<std::string, StackAlloc *> *stack_allocs;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<FunctionStartInsertion *> *parseFunctionStartInsertions(
                int *main_line);
        std::vector<StructFields *> *parseStructs();
        std::vector<int> *parseFunctionExits();
        std::vector<Declaration *> *parseDeclarations();
        std::map<std::string, StackAlloc *> *parseStackAllocs();
};

#endif
