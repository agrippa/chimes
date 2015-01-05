#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <vector>
#include <string>
#include <map>

enum LBL_TYPE { STACK_REGISTRATION, CALLSITE };

class LabelInfo {
public:
    LabelInfo(int set_line_no, int set_col, int set_lbl, enum LBL_TYPE set_type,
            std::string set_filename, std::string set_function) :
            line_no(set_line_no), col(set_col), lbl(set_lbl), type(set_type),
            filename(set_filename), function(set_function) {}

    int get_line_no() { return line_no; }
    int get_col() { return col; }
    int get_lbl() { return lbl; }
    enum LBL_TYPE get_type() { return type; }
    std::string get_filename() { return filename; }
    std::string get_function() { return function; }

private:
    int line_no;
    int col;
    int lbl;
    enum LBL_TYPE type;
    std::string filename;
    std::string function;
};

class HeapAlloc {
public:
    HeapAlloc(int set_line_no, int set_col, int set_group,
            std::string set_fname, bool set_have_type_info) :
            line_no(set_line_no), col(set_col), group(set_group),
            fname(set_fname), have_type_info(set_have_type_info) {}

    int get_line_no() { return line_no; }
    int get_col() { return col; }
    int get_group() { return group; }
    std::string get_fname() { return fname; }
    bool get_have_type_info() { return have_type_info; }
    bool get_is_elem_ptr() { return is_elem_ptr; }
    bool get_is_elem_struct() { return is_elem_struct; }
    std::string get_struct_type_name() { return struct_type_name; }
    std::vector<std::string> *get_struct_field_ptrs() { return struct_field_ptrs; }
    int get_num_field_ptrs() {
        assert(struct_field_ptrs != NULL);
        return struct_field_ptrs->size();
    }

    void add_type_info(bool set_is_elem_ptr, bool set_is_elem_struct) {
        is_elem_ptr = set_is_elem_ptr;
        is_elem_struct = set_is_elem_struct;
    }

    void add_struct_type_info(std::string set_struct_type_name,
            std::vector<std::string> *set_struct_field_ptrs) {
        struct_type_name = set_struct_type_name;
        struct_field_ptrs = set_struct_field_ptrs;
    }

private:
    int line_no;
    int col;
    int group;
    std::string fname;
    bool have_type_info;

    bool is_elem_ptr, is_elem_struct;
    std::string struct_type_name;
    std::vector<std::string> *struct_field_ptrs;
};

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
    int get_num_ptr_fields() { return ptr_fields.size(); }
    std::vector<std::string>::iterator ptrs_begin() {
        return ptr_fields.begin(); }
    std::vector<std::string>::iterator ptrs_end() { return ptr_fields.end(); }

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
    MatchedLocation(int set_line, int set_col, const char *set_filename) :
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
    FunctionStartInsertion(std::string set_filename, std::string set_func,
            int set_line) : filename(set_filename), func(set_func),
            line_no(set_line) {}
    std::string get_func() { return func; }
    int get_line() { return line_no; }
    std::string get_filename() { return filename; }

private:
    std::string filename;
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
            const char *stack_allocs_filename, const char *decl_filename,
            const char *heap_filename,
            const char *labels_filename) :
            original_file(set_original_file),
            lines_info_file(lines_info_filename),
            func_start_info_file(func_start_info_filename),
            struct_info_file(struct_info_filename),
            function_exits_file(function_exits_filename),
            stack_allocs_file(stack_allocs_filename), decl_file(decl_filename),
            heap_file(heap_filename),
            labels_file(labels_filename) {
        state_change_insertions = parseStateChangeInsertions();
        function_starts = parseFunctionStartInsertions(&main_line);
        struct_fields = parseStructs();
        function_exits = parseFunctionExits();
        declarations = parseDeclarations();
        stack_allocs = parseStackAllocs();
        heap_allocs = parseHeapAllocs();
        labels = parseLabels();
    }

    bool contains(int line, int col, const char *filename);
    std::vector<int> *get_groups(int line, int col, const char *filename);
    int get_main_line() { return main_line; }
    std::vector<StructFields *> *get_struct_fields() { return struct_fields; }
    std::string get_original_file() { return original_file; }

    FunctionStartInsertion *is_function_start(int line);
    bool is_function_exit(int line);

    StackAlloc *findStackAlloc(std::string mangled_name);
    HeapAlloc *isMemoryAllocation(int line, int col);
    int getLabelAssignedFor(int line, int col);
    LabelInfo *isLabeledLoc(int line, int col);
    std::vector<LabelInfo *>::iterator labels_begin() { return labels->begin(); }
    std::vector<LabelInfo *>::iterator labels_end() { return labels->end(); }

    // GotoInfo *shouldAddGotoAt(int line);
    // GotoInfo *shouldAddGotoAfter(int line, int col);

private:
        std::string lines_info_file, func_start_info_file, struct_info_file,
            function_exits_file, stack_allocs_file, decl_file, heap_file,
            labels_file;
        std::string original_file;

        std::vector<StateChangeInsertion *> *state_change_insertions;
        std::vector<FunctionStartInsertion *> *function_starts;
        int main_line;
        std::vector<StructFields *> *struct_fields;
        std::vector<int> *function_exits;
        std::vector<Declaration *> *declarations;
        std::map<std::string, StackAlloc *> *stack_allocs;
        std::vector<HeapAlloc *> *heap_allocs;
        std::vector<LabelInfo *> *labels;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<FunctionStartInsertion *> *parseFunctionStartInsertions(
                int *main_line);
        std::vector<StructFields *> *parseStructs();
        std::vector<int> *parseFunctionExits();
        std::vector<Declaration *> *parseDeclarations();
        std::map<std::string, StackAlloc *> *parseStackAllocs();
        std::vector<HeapAlloc *> *parseHeapAllocs();
        std::vector<LabelInfo *> *parseLabels();
};

#endif
