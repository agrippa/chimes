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
#include "CollapsedLines.h"

extern std::string curr_func;

class OpenMPPragma {
    public:
        OpenMPPragma(int set_line, int set_last_line,
                std::string set_pragma, std::string set_pragma_name) :
                line(set_line), last_line(set_last_line), pragma(set_pragma),
                pragma_name(set_pragma_name) { }

        void add_clause(std::string clause_name,
                std::vector<std::string> clause_arguments) {
            if (clauses.find(clause_name) == clauses.end()) {
                clauses[clause_name] = clause_arguments;
            } else {
                for (std::vector<std::string>::iterator i =
                        clause_arguments.begin(), e = clause_arguments.end();
                        i != e; i++) {
                    clauses[clause_name].push_back(*i);
                }
            }
        }

        int get_line() { return line; }
        int get_last_line() { return last_line; }
        void update_line(int set_line) { line = set_line; }
        std::string get_pragma() { return pragma; }

        std::string get_pragma_name() { return pragma_name; }
        std::map<std::string, std::vector<std::string> > get_clauses() {
            return clauses;
        }

    private:
        int line;
        int last_line;
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
        AliasesPassedToCallSite(std::string set_funcname, int set_line,
                int set_col, size_t set_return_alias) : funcname(set_funcname),
                line(set_line), col(set_col), return_alias(set_return_alias) {}

        std::string get_funcname() { return funcname; }
        int get_line() { return line; }
        void update_line(int set_line) { line = set_line; }
        void add_alias_no(size_t alias_no) { alias_nos.push_back(alias_no); }
        int nparams() { return alias_nos.size(); }
        size_t alias_no_for(int arg) { return alias_nos[arg]; }
        size_t get_return_alias() { return return_alias; }

        bool operator < (const AliasesPassedToCallSite& other) const {
            if (line == other.line) {
                return col < other.col;
            } else {
                return line < other.line;
            }
        }

    private:
        std::string funcname;
        int line;
        int col;
        size_t return_alias;
        std::vector<size_t> alias_nos;
};

class HeapAlloc {
public:
    HeapAlloc() { }
    HeapAlloc(int set_line_no, int set_col, size_t set_group,
            std::string set_fname) : line_no(set_line_no), col(set_col),
            group(set_group), fname(set_fname), is_elem_ptr(false),
            is_elem_struct(false) {}

    void incr_col(int i) { col += i; }
    int get_line_no() { return line_no; }
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
        if (line_no == other.line_no) {
            return col < other.col;
        } else {
            return line_no < other.line_no;
        }
    }

private:
    int line_no;
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

    bool get_may_checkpoint() { return may_checkpoint; }
    void set_may_checkpoint(bool s) { may_checkpoint = s; }
    void add_checkpoint_cause(std::string funcname) {
        checkpoint_causes.insert(funcname);
    }
    std::set<std::string> *get_checkpoint_causes() { return &checkpoint_causes; }

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
    bool may_checkpoint;
    std::set<std::string> checkpoint_causes;
};

enum CREATES_CHECKPOINT { DOES_NOT = 0, MAY = 1, DOES = 2 };

class FunctionCallees {
    public:
        FunctionCallees(std::string set_name, bool set_calls_unknown_functions,
                CREATES_CHECKPOINT set_may_checkpoint) : name(set_name),
                calls_unknown_functions(set_calls_unknown_functions),
                may_checkpoint(set_may_checkpoint) { }
        void add_checkpoint_cause(std::string cause) {
            checkpoint_causes.insert(cause);
        }
        CREATES_CHECKPOINT get_may_checkpoint() { return may_checkpoint; }
    private:
        std::string name;
        bool calls_unknown_functions;
        CREATES_CHECKPOINT may_checkpoint;
        std::set<std::string> checkpoint_causes;
};

class StructField {
    public:
        StructField(std::string set_name, std::string set_type) :
            name(set_name), type(set_type) { }

        std::string get_name() { return name; }
        std::string get_type() { return type; }
    private:
        std::string name;
        std::string type;
};

class StructFields {
public:
    StructFields(std::string set_name, bool set_is_unnamed) : name(set_name),
        is_unnamed(set_is_unnamed) {}
    void add_field(StructField field) { fields.push_back(field); }

    std::string get_name() { return name; }
    bool get_is_unnamed() { return is_unnamed; }
    int num_fields() { return fields.size(); }
    std::vector<StructField>::iterator begin() { return fields.begin(); }
    std::vector<StructField>::iterator end() { return fields.end(); }

private:
    std::string name;
    bool is_unnamed;
    std::vector<StructField> fields;
};

/*
 * This class can store an explicit line number without updating it because it
 * is only used in the first pass (before any line number changes can be
 * introduced).
 */
class StateChangeInsertion {
public:
    StateChangeInsertion(std::string set_filename, int set_line_no, int set_col,
            std::vector<size_t> *set_groups) : filename(set_filename),
            line_no(set_line_no), col(set_col), groups(set_groups) {
    }

    int get_line() { return line_no; }
    int get_col() { return col; }
    void update_line(int set_line) { line_no = set_line; }
    std::string get_filename() { return filename; }
    std::vector<size_t> *get_groups() { return groups; }

private:
    std::string filename;
    int line_no;
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
            const char *omp_filename, const char *firstprivate_filename,
            const char *call_tree_filename) :
            lines_info_file(lines_info_filename),
            struct_info_file(struct_info_filename),
            stack_allocs_file(stack_allocs_filename),
            heap_file(heap_filename), original_file(original_filename),
            diagnostic_file(diagnostic_filename), working_dir(working_dirname),
            func_file(func_filename), call_file(call_filename),
            exit_file(exit_filename), reachable_file(reachable_filename),
            omp_file(omp_filename), firstprivate_file(firstprivate_filename),
            call_tree_file(call_tree_filename) {
        module_id = hash(module_name);
        state_change_insertions = parseStateChangeInsertions();
        struct_fields = parseStructs();
        stack_allocs = parseStackAllocs();
        heap_allocs = parseHeapAllocs();
        functions = parseFunctions();
        callsites = parseCallSites();
        func_exits = parseFunctionExits();
        reachable = parseReachable();
        omp_pragmas = parseOMPPragmas();
        call_tree = parseCallTree();

        diagnostics.open(diagnostic_file);
        firstprivate.open(firstprivate_file);
    }

    ~DesiredInsertions() {
        diagnostics.close();
        firstprivate.close();
    }

    bool contains(int line, int col, const char *filename);
    std::vector<size_t> *get_groups(int line, int col, const char *filename);
    std::vector<StructFields *> *get_struct_fields() { return struct_fields; }
    StructFields *get_struct_fields_for(std::string name);
    std::vector<ReachableInfo> *get_reachable() { return reachable; }
    std::vector<OpenMPPragma> *get_omp_pragmas_for(clang::FunctionDecl *decl,
            clang::SourceManager &SM);
    OpenMPPragma *get_omp_pragma_for(int line_no);

    size_t hash(const char *s, size_t seed = 0);
    size_t unique_alias(size_t alias);

    StackAlloc *findStackAlloc(std::string mangled_name);
    bool findNextMatchingMemoryAllocation(int line, std::string func,
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
    void AppendFirstPrivate(int starting_line, int ending_line,
            std::string varname);

    FunctionExit *getFunctionExitInfo(std::string funcname);
    AliasesPassedToCallSite findFirstMatchingCallsite(int line,
            std::string callee_name);
    FunctionArgumentAliasGroups findMatchingFunction(std::string func);
    FunctionArgumentAliasGroups* findMatchingFunctionNullReturn(
            std::string func);

    void add_line_collapse(int start, int end);
    int lookup_new_line(int line);
    void update_line_numbers();
    size_t get_module_id();

    bool always_checkpoints(StackAlloc *alloc);

private:
        std::string lines_info_file, struct_info_file,
            stack_allocs_file, heap_file, original_file, diagnostic_file,
            working_dir, func_file, call_file, exit_file, reachable_file,
            omp_file, firstprivate_file, call_tree_file;
        std::ofstream diagnostics;
        std::ofstream firstprivate;

        std::vector<CollapsedLines> transforms;

        std::vector<StateChangeInsertion *> *state_change_insertions;
        std::vector<StructFields *> *struct_fields;
        std::map<std::string, StackAlloc *> *stack_allocs;
        std::map<int, std::map<std::string, std::vector<HeapAlloc> *> *> *heap_allocs;
        std::vector<FunctionArgumentAliasGroups> *functions;
        std::vector<AliasesPassedToCallSite> *callsites;
        std::map<std::string, FunctionExit *> *func_exits;
        std::vector<ReachableInfo> *reachable;
        std::vector<OpenMPPragma> *omp_pragmas;
        std::map<std::string, FunctionCallees> *call_tree;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<StructFields *> *parseStructs();
        std::map<std::string, StackAlloc *> *parseStackAllocs();
        std::map<int, std::map<std::string, std::vector<HeapAlloc> *> *> *parseHeapAllocs();
        std::vector<FunctionArgumentAliasGroups> *parseFunctions();
        std::vector<AliasesPassedToCallSite> *parseCallSites();
        std::map<std::string, FunctionExit *> *parseFunctionExits();
        std::vector<ReachableInfo> *parseReachable();
        std::vector<OpenMPPragma> *parseOMPPragmas();
        std::map<std::string, FunctionCallees> *parseCallTree();

        size_t module_id;
};

#endif
