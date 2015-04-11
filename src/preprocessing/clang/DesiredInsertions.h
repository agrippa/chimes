#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>

#include "clang/AST/Decl.h"
#include "clang/AST/Stmt.h"
#include "clang/Basic/SourceManager.h"
#include "LineNoSet.h"

extern std::string curr_func;

class OpenMPPragma {
    public:
        OpenMPPragma(Line* set_line,
                std::string set_pragma, std::string set_pragma_name) :
                line(set_line), pragma(set_pragma),
                pragma_name(set_pragma_name) { }

        void add_clause(std::string clause_name,
                std::vector<std::string> clause_arguments) {
            assert(clauses.find(clause_name) == clauses.end());
            clauses[clause_name] = clause_arguments;
        }

        Line* get_line() { return line; }
        std::string get_pragma() { return pragma; }

        std::string get_pragma_name() { return pragma_name; }
        std::map<std::string, std::vector<std::string> > get_clauses() {
            return clauses;
        }

    private:
        Line* line;
        std::string pragma;

        std::string pragma_name;
        std::map<std::string, std::vector<std::string> > clauses;
};

class ReachableInfo {
    public:
        ReachableInfo(size_t set_container, size_t set_child) :
            container(set_container), child(set_child) {}

        size_t get_container() { return container; }
        size_t get_child() { return child; }
    private:
        size_t container;
        size_t child;
};

class FunctionExit {
    public:
        FunctionExit(size_t set_return_alias) :
            return_alias(set_return_alias) {}

        size_t get_return_alias() { return return_alias; }
        std::set<size_t> get_groups_changed_at_termination() {
            return groups_changed_at_termination;
        }
        void add_changed_group_at_term(size_t group) {
            groups_changed_at_termination.insert(group);
        }

    private:
        size_t return_alias;
        std::set<size_t> groups_changed_at_termination;
};

class FunctionArgumentAliasGroups {
    public:
        FunctionArgumentAliasGroups(std::string set_funcname) :
            funcname(set_funcname) {}

        std::string get_funcname() { return funcname; }
        void add_alias_no(size_t alias) { alias_nos.push_back(alias); }
        unsigned nargs() { return alias_nos.size(); }
        size_t alias_no_for(int arg) { return alias_nos[arg]; }

    private:
        std::string funcname;
        std::vector<size_t> alias_nos;
};

class AliasesPassedToCallSite {
    public:
        AliasesPassedToCallSite(std::string set_funcname, Line* set_line,
                int set_col, size_t set_return_alias) : funcname(set_funcname),
                line(set_line), col(set_col), return_alias(set_return_alias) {}

        std::string get_funcname() { return funcname; }
        Line* get_line() { return line; }
        void add_alias_no(size_t alias_no) { alias_nos.push_back(alias_no); }
        int nparams() { return alias_nos.size(); }
        size_t alias_no_for(int arg) { return alias_nos[arg]; }
        size_t get_return_alias() { return return_alias; }

        bool operator < (const AliasesPassedToCallSite& other) const {
            if (line->get() == other.line->get()) {
                return col < other.col;
            } else {
                return line->get() < other.line->get();
            }
        }

    private:
        std::string funcname;
        Line* line;
        int col;
        size_t return_alias;
        std::vector<size_t> alias_nos;
};

class HeapAlloc {
public:
    HeapAlloc() { }
    HeapAlloc(Line* set_line_no, int set_col, size_t set_group,
            std::string set_fname) : line_no(set_line_no), col(set_col),
            group(set_group), fname(set_fname), is_elem_ptr(false),
            is_elem_struct(false) {}

    void incr_col(int i) { col += i; }
    Line *get_line_no() { return line_no; }
    int get_col() { return col; }
    size_t get_group() { return group; }
    std::string get_fname() { return fname; }
    bool get_is_elem_ptr() { return is_elem_ptr; }
    bool get_is_elem_struct() { return is_elem_struct; }
    std::string get_struct_type_name() { return struct_type_name; }
    std::vector<std::string> *get_struct_field_ptrs() { return struct_field_ptrs; }
    int get_num_field_ptrs() {
        assert(struct_field_ptrs != NULL);
        return struct_field_ptrs->size();
    }

    void add_type_info(bool set_is_elem_ptr, bool set_is_elem_struct) {
        // The only invalid state is for both to be true
        assert(!(set_is_elem_ptr && set_is_elem_struct));

        is_elem_ptr = set_is_elem_ptr;
        is_elem_struct = set_is_elem_struct;
    }

    void add_struct_type_info(std::string set_struct_type_name,
            std::vector<std::string> *set_struct_field_ptrs) {
        struct_type_name = set_struct_type_name;
        struct_field_ptrs = set_struct_field_ptrs;
    }

    bool operator < (const HeapAlloc& other) const {
        if (line_no->get() == other.line_no->get()) {
            return col < other.col;
        } else {
            return line_no->get() < other.line_no->get();
        }
    }

private:
    Line* line_no;
    int col;
    size_t group;
    std::string fname;

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

class StateChangeInsertion {
public:
    StateChangeInsertion(std::string set_filename, Line* set_line_no, int set_col,
            std::vector<size_t> *set_groups) : filename(set_filename),
            line_no(set_line_no), col(set_col), groups(set_groups) {
    }

    Line* get_line() { return line_no; }
    int get_col() { return col; }
    std::string get_filename() { return filename; }
    std::vector<size_t> *get_groups() { return groups; }

private:
    std::string filename;
    Line* line_no;
    int col;
    std::vector<size_t> *groups;
};

class DesiredInsertions {
public:
    DesiredInsertions(const char *module_name,
            const char *lines_info_filename,
            const char *struct_info_filename,
            const char *stack_allocs_filename,
            const char *heap_filename, const char *original_filename,
            const char *diagnostic_filename, const char *working_dirname,
            const char *func_filename, const char *call_filename,
            const char *exit_filename, const char *reachable_filename,
            const char *omp_filename) :
            lines_info_file(lines_info_filename),
            struct_info_file(struct_info_filename),
            stack_allocs_file(stack_allocs_filename),
            heap_file(heap_filename), original_file(original_filename),
            diagnostic_file(diagnostic_filename), working_dir(working_dirname),
            func_file(func_filename), call_file(call_filename),
            exit_file(exit_filename), reachable_file(reachable_filename),
            omp_file(omp_filename) {
        state_change_insertions = parseStateChangeInsertions();
        struct_fields = parseStructs();
        stack_allocs = parseStackAllocs();
        heap_allocs = parseHeapAllocs();
        functions = parseFunctions();
        callsites = parseCallSites();
        func_exits = parseFunctionExits();
        reachable = parseReachable();
        module_id = hash(module_name);
        omp_pragmas = parseOMPPragmas();
        diagnostics.open(diagnostic_file);
    }

    ~DesiredInsertions() {
        diagnostics.close();
    }

    bool contains(Line* line, int col, const char *filename);
    std::vector<size_t> *get_groups(Line* line, int col, const char *filename);
    std::vector<StructFields *> *get_struct_fields() { return struct_fields; }
    std::vector<ReachableInfo> *get_reachable() { return reachable; }
    std::vector<OpenMPPragma> *get_omp_pragmas_for(clang::FunctionDecl *decl,
            clang::SourceManager &SM);
    size_t hash(const char *s, size_t seed = 0) {
        size_t hash = seed;
        while (*s) {
            hash = hash * 101 + *s++;
        }
        return hash;
    }

    StackAlloc *findStackAlloc(std::string mangled_name);
    bool findNextMatchingMemoryAllocation(Line* line, std::string func,
            HeapAlloc *ret);

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

    void AppendToDiagnostics(std::string action, clang::SourceLocation loc,
            std::string val, clang::SourceManager &SM);

    FunctionExit *getFunctionExitInfo(std::string funcname);
    AliasesPassedToCallSite findFirstMatchingCallsite(Line* line,
            std::string callee_name);
    FunctionArgumentAliasGroups findMatchingFunction(std::string func);

    size_t get_module_id() {
        return module_id;
    }

    LineNoSet& get_lines() { return lines; }

private:
        std::string lines_info_file, struct_info_file,
            stack_allocs_file, heap_file, original_file, diagnostic_file,
            working_dir, func_file, call_file, exit_file, reachable_file,
            omp_file;
        std::ofstream diagnostics;

        LineNoSet lines;

        std::vector<StateChangeInsertion *> *state_change_insertions;
        std::vector<StructFields *> *struct_fields;
        std::map<std::string, StackAlloc *> *stack_allocs;
        std::map<Line*, std::map<std::string, std::vector<HeapAlloc> *> *> *heap_allocs;
        std::vector<FunctionArgumentAliasGroups> *functions;
        std::vector<AliasesPassedToCallSite> *callsites;
        std::map<std::string, FunctionExit *> *func_exits;
        std::vector<ReachableInfo> *reachable;
        std::vector<OpenMPPragma> *omp_pragmas;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<StructFields *> *parseStructs();
        std::map<std::string, StackAlloc *> *parseStackAllocs();
        std::map<Line*, std::map<std::string, std::vector<HeapAlloc> *> *> *parseHeapAllocs();
        std::vector<FunctionArgumentAliasGroups> *parseFunctions();
        std::vector<AliasesPassedToCallSite> *parseCallSites();
        std::map<std::string, FunctionExit *> *parseFunctionExits();
        std::vector<ReachableInfo> *parseReachable();
        std::vector<OpenMPPragma> *parseOMPPragmas();

        size_t module_id;
};

#endif
