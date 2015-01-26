#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

extern std::string curr_func;

class HeapAlloc {
public:
    HeapAlloc(int set_line_no, int set_col, int set_group,
            std::string set_fname, bool set_have_type_info) :
            line_no(set_line_no), col(set_col), group(set_group),
            fname(set_fname), have_type_info(set_have_type_info) {}

    void incr_col(int i) { col += i; }
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
    DesiredInsertions(const char *lines_info_filename,
            const char *struct_info_filename,
            const char *stack_allocs_filename,
            const char *heap_filename, const char *original_filename,
            const char *diagnostic_filename) :
            lines_info_file(lines_info_filename),
            struct_info_file(struct_info_filename),
            stack_allocs_file(stack_allocs_filename),
            heap_file(heap_filename), original_file(original_filename),
            diagnostic_file(diagnostic_filename) {
        state_change_insertions = parseStateChangeInsertions();
        struct_fields = parseStructs();
        stack_allocs = parseStackAllocs();
        heap_allocs = parseHeapAllocs();
        diagnostics.open(diagnostic_file);
    }

    ~DesiredInsertions() {
        diagnostics.close();
    }

    bool contains(int line, int col, const char *filename);
    std::vector<int> *get_groups(int line, int col, const char *filename);
    std::vector<StructFields *> *get_struct_fields() { return struct_fields; }

    StackAlloc *findStackAlloc(std::string mangled_name);
    HeapAlloc *isMemoryAllocation(int line, int col);
    void updateMemoryAllocations(unsigned int line, unsigned int col,
            unsigned int increment_by);

    void updateMainFile(std::string file) {
        original_file = file;
    }

    bool isMainFile(const char *filename) {
        std::string file(filename);
        return (original_file == file);
    }

    bool isNvCompilerFunction(std::string func) {
        return func == std::string("__nv_save_fatbinhandle_for_managed_rt") ||
            func == std::string("__nv_init_managed_rt");
    }

    std::ofstream &diag() { return diagnostics; }

private:
        std::string lines_info_file, struct_info_file,
            stack_allocs_file, heap_file, original_file, diagnostic_file;
        std::ofstream diagnostics;

        std::vector<StateChangeInsertion *> *state_change_insertions;
        std::vector<StructFields *> *struct_fields;
        std::map<std::string, StackAlloc *> *stack_allocs;
        std::vector<HeapAlloc *> *heap_allocs;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<StructFields *> *parseStructs();
        std::map<std::string, StackAlloc *> *parseStackAllocs();
        std::vector<HeapAlloc *> *parseHeapAllocs();
};

#endif
