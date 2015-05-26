#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>

#include "clang/AST/Decl.h"
#include "clang/AST/Stmt.h"
#include "clang/Basic/SourceManager.h"
#include "CollapsedLines.h"

extern std::string curr_func;

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
        FunctionExit(std::string set_func_name, unsigned set_id,
                size_t set_return_alias) : func_name(set_func_name), id(set_id),
            return_alias(set_return_alias) {}

        void update_id(unsigned s) { id = s; }
        unsigned get_id() { return (id); }
        size_t get_return_alias() { return return_alias; }
        std::set<size_t> get_groups_changed_at_termination() {
            return groups_changed_at_termination;
        }
        std::map<std::string, std::set<size_t> > get_groups_possibly_changed_at_termination() {
            return (possibly_changed_at_termination);
        }

        void add_changed_group_at_term(size_t group) {
            groups_changed_at_termination.insert(group);
        }
        void add_possibly_changed_groups(std::string fname, std::set<size_t> groups) {
            if (possibly_changed_at_termination.find(fname) == possibly_changed_at_termination.end()) {
                possibly_changed_at_termination.insert(std::pair<std::string,
                        std::set<size_t> >(fname, std::set<size_t>()));
            }

            for (std::set<size_t>::iterator i = groups.begin(),
                    e = groups.end(); i != e; i++) {
                possibly_changed_at_termination.at(fname).insert(*i);
            }
        }

        std::string str() {
            std::stringstream ss;
            ss << "exit location (id=" << id << ") [\n";
            ss << "  funcname=" << func_name << "\n";
            ss << "  return_alias=" << return_alias << "\n";
            ss << "  groups_changed=[\n";
            for (std::set<size_t>::iterator i =
                    groups_changed_at_termination.begin(), e =
                    groups_changed_at_termination.end(); i != e; i++) {
                ss << "    " << *i << "\n";
            }
            ss << "  ]\n";
            ss << "  groups_possibly_changed=[\n";
            for (std::map<std::string, std::set<size_t> >::iterator i =
                    possibly_changed_at_termination.begin(), e =
                    possibly_changed_at_termination.end(); i != e; i++) {
                std::string fname = i->first;
                std::set<size_t> groups = i->second;
                ss << "    " << fname << "-> {\n";
                for (std::set<size_t>::iterator ii = groups.begin(),
                        ee = groups.end(); ii != ee; ii++) {
                    ss << "      " << *ii << "\n";
                }
                ss << "    }\n";
            }
            ss << "  ]\n";
            ss << "]\n";
            return ss.str();
        }

    private:
        std::string func_name;
        unsigned id;
        size_t return_alias;
        std::set<size_t> groups_changed_at_termination;
        std::map<std::string, std::set<size_t> > possibly_changed_at_termination;
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
        AliasesPassedToCallSite(std::string set_funcname,
                std::string set_caller_name, int set_line, int set_col,
                size_t set_return_alias) : funcname(set_funcname),
                caller_name(set_caller_name), line(set_line), col(set_col),
                return_alias(set_return_alias) {}

        std::string get_funcname() { return funcname; }
        std::string get_caller_name() { return caller_name; }
        int get_line() { return line; }
        void update_line(int set_line) { line = set_line; }
        void add_alias_no(size_t alias_no) { alias_nos.push_back(alias_no); }
        int nparams() { return alias_nos.size(); }
        size_t alias_no_for(int arg) { return alias_nos[arg]; }
        size_t get_return_alias() { return return_alias; }
        std::vector<size_t> get_param_aliases() { return alias_nos; }

        bool operator < (const AliasesPassedToCallSite& other) const {
            if (line == other.line) {
                return col < other.col;
            } else {
                return line < other.line;
            }
        }

    private:
        std::string funcname;
        std::string caller_name;
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
        is_struct(set_is_struct), is_unique_in_function(false) { }

    std::string get_function_from_mangled_name() {
        size_t index = mangled_varname.find('|');
        return mangled_varname.substr(0, index);
    }

    std::string get_varname_from_mangled_name() {
        size_t first_index = mangled_varname.find('|');
        std::string suffix = mangled_varname.substr(first_index + 1);
        size_t second_index = suffix.find('|');
        return suffix.substr(0, second_index);
    }

    std::string get_func_var_name_from_mangled_name() {
        size_t second_index = mangled_varname.rfind('|');
        return mangled_varname.substr(0, second_index);
    }

    void set_is_unique_in_function(bool s) { is_unique_in_function = s; }
    bool get_is_unique_in_function() { return is_unique_in_function; }

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
    bool is_array_type() { return full_type[0] == '['; }
    bool is_statically_sized_array_type() {
        if (is_array_type()) {
            int index = 1;
            while (full_type[index] != ' ') index++;
            std::string size_str = full_type.substr(1, index - 1);
            return (size_str != "na");
        }
        return (false);
    }

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
    bool is_unique_in_function;
};

enum CREATES_CHECKPOINT { DOES_NOT = 0, MAY = 1, DOES = 2 };

class CheckpointCause {
    public:
        CheckpointCause(std::string set_name, int set_line, int set_col) :
            name(set_name), line(set_line), col(set_col) { }

        std::string get_name() { return name; }
        int get_line() { return line; }
        int get_col() { return col; }
        void update_line(int s) { line = s; }

        bool operator < (const CheckpointCause& other) const {
            if (line == other.line) {
                return col < other.col;
            } else {
                return line < other.line;
            }
        }

    private:
        std::string name;
        int line;
        int col;
};

class FunctionCallees {
    public:
        FunctionCallees(std::string set_name, bool set_calls_unknown_functions,
                CREATES_CHECKPOINT set_may_checkpoint) : name(set_name),
                calls_unknown_functions(set_calls_unknown_functions),
                may_checkpoint(set_may_checkpoint) { }
        void add_checkpoint_cause(std::string cause, int line, int col) {
            checkpoint_causes.push_back(CheckpointCause(cause, line, col));
        }

        CREATES_CHECKPOINT get_may_checkpoint() { return may_checkpoint; }

        bool get_calls_unknown_functions() { return calls_unknown_functions; }

        std::vector<CheckpointCause>::iterator begin() {
            return checkpoint_causes.begin();
        }

        std::vector<CheckpointCause>::iterator end() {
            return checkpoint_causes.end();
        }

        void sort_checkpoint_causes() {
            std::sort(checkpoint_causes.begin(), checkpoint_causes.end());
        }
    private:
        std::string name;
        bool calls_unknown_functions;
        CREATES_CHECKPOINT may_checkpoint;
        std::vector<CheckpointCause> checkpoint_causes;
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
    StateChangeInsertion(unsigned set_id, std::string set_filename,
            int set_line_no, int set_col, std::vector<size_t> *set_groups,
            std::map<std::string, std::set<size_t> > *set_possibly_changed_groups,
            std::string set_direct, std::string set_call,
            std::string set_reason) :
            id(set_id), filename(set_filename), line_no(set_line_no),
            col(set_col), groups(set_groups),
            possibly_changed_groups(set_possibly_changed_groups) {
        direct = (set_direct == "direct");
        call = (set_call == "call");
        reason = set_reason;
    }

    unsigned get_id() { return (id); }
    int get_line() { return line_no; }
    int get_col() { return col; }
    void set_col(int c) { col = c; }
    void update_line(int set_line) { line_no = set_line; }
    std::string get_filename() { return filename; }
    std::vector<size_t> *get_groups() { return groups; }

    bool is_direct() { return direct; }
    bool is_call() { return call; }
    bool is_terminator() { return !call; }
    std::string get_reason() { return reason; }

    std::string str() {
        std::stringstream ss;
        ss << "state change location (id=" << id << ") {\n";
        ss << "  loc=" << filename << ":" << line_no << ":" << col << "\n";
        ss << "  direct? " << (direct ? "true" : "false") << ", call? " <<
            (call ? "true" : "false") << ", reason=" << reason << "\n";
        ss << "  groups=[";
        for (std::vector<size_t>::iterator i = groups->begin(),
                e = groups->end(); i != e; i++) {
            ss << " " << *i;
        }
        ss << " ]\n";
        ss << "  possibly_changed_groups=[\n";
        for (std::map<std::string, std::set<size_t> >::iterator i =
                possibly_changed_groups->begin(), e =
                possibly_changed_groups->end(); i != e; i++) {
            std::string fname = i->first;
            std::set<size_t> groups = i->second;
            ss << "    " << fname << " -> {";
            for (std::set<size_t>::iterator ii = groups.begin(),
                    ee = groups.end(); ii != ee; ii++) {
                ss << " " << *ii;
            }
            ss << " }\n";
        }
        ss << "  ]\n";
        ss << "\n";
        return ss.str();
    }

private:
    unsigned id;
    std::string filename;
    int line_no;
    int col;
    std::vector<size_t> *groups;
    std::map<std::string, std::set<size_t> > *possibly_changed_groups;

    bool direct;
    bool call;
    std::string reason;
};

class DesiredInsertions {
public:
    DesiredInsertions(
            const char *module_name,
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
            call_tree_file(call_tree_filename),
            state_change_insertions(NULL), func_exits(NULL) {
        module_id = hash(module_name);
        // parseStateChangeInsertions must be called before parseFunctionExits
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
    // std::vector<size_t> *get_groups(int line, int col, const char *filename);

    void update_alias_change_locations(int line, int col,
            const char *filename, int delta);
    StateChangeInsertion *get_matching(int line, int col, const char *filename);
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
    std::vector<AliasesPassedToCallSite>::iterator getCallsiteStart();

    std::vector<AliasesPassedToCallSite>::iterator findFirstMatchingCallsiteAfter(
            int line, std::string callee_name,
            std::vector<AliasesPassedToCallSite>::iterator start);
    FunctionArgumentAliasGroups findMatchingFunction(std::string func);
    FunctionArgumentAliasGroups* findMatchingFunctionNullReturn(
            std::string func);

    void add_line_collapse(int start, int end);
    int lookup_new_line(int line);
    void update_line_numbers();
    size_t get_module_id();

    bool always_checkpoints(StackAlloc *alloc);
    FunctionCallees *get_callees(std::string name);
    bool calls_unknown_functions(std::string fname);
    bool has_callees(std::string name);
    bool may_cause_checkpoint(std::string fname);
    bool does_not_cause_checkpoint(std::string fname);
    bool always_checkpoints(std::string fname);
    bool eligible_npm_function(std::string fname);
    bool no_children_call_function_ptrs(std::string fname,
        std::set<std::string> *visited);
    bool have_main_in_call_tree();
    int get_distance_from_main(std::string fname);
    int get_distance_from_main_helper(std::string curr,
            std::string target, int depth);

    std::string get_alias_loc_var(unsigned id);

    void resetHeapAllocIters();

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
        std::map<int, std::map<std::string, std::vector<HeapAlloc>::iterator> *> heap_alloc_iters;
        std::vector<FunctionArgumentAliasGroups> *functions;
        std::vector<AliasesPassedToCallSite> *callsites;
        std::map<std::string, FunctionExit *> *func_exits;
        std::vector<ReachableInfo> *reachable;
        std::vector<OpenMPPragma> *omp_pragmas;
        std::map<std::string, FunctionCallees *> *call_tree;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<StructFields *> *parseStructs();
        std::map<std::string, StackAlloc *> *parseStackAllocs();
        std::map<int, std::map<std::string, std::vector<HeapAlloc> *> *> *parseHeapAllocs();
        std::vector<FunctionArgumentAliasGroups> *parseFunctions();
        std::vector<AliasesPassedToCallSite> *parseCallSites();
        std::map<std::string, FunctionExit *> *parseFunctionExits();
        std::vector<ReachableInfo> *parseReachable();
        std::vector<OpenMPPragma> *parseOMPPragmas();
        std::map<std::string, FunctionCallees *> *parseCallTree();

        size_t module_id;

        unsigned count_locs = 0;
};

#endif
