#include "llvm/Support/raw_ostream.h"

#include "DesiredInsertions.h"

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

static int find_group_end(std::string *s) {
    int find = s->find(',');
    if (find != std::string::npos) return find;
    find = s->find(' ');
    if (find != std::string::npos) return find;
    return -1;
}

size_t DesiredInsertions::get_module_id() {
    return module_id;
}

size_t DesiredInsertions::hash(const char *s, size_t seed) {
    size_t hash = seed;
    while (*s) {
        hash = hash * 101 + *s++;
    }
    return hash;
}

/*
 * Increment all aliases by module_id to ensure uniqueness even in applications
 * compiled from multiple modules (i.e. files).
 */
size_t DesiredInsertions::unique_alias(size_t alias) {
    if (alias == 0) return alias;
    else return module_id + alias;
}

std::vector<OpenMPPragma> *DesiredInsertions::parseOMPPragmas() {
    std::vector<OpenMPPragma> *pragmas = new std::vector<OpenMPPragma>();

    std::ifstream fp;
    fp.open(omp_file, std::ios::in);
    std::string line;

    while (getline(fp, line)) {
        size_t end = line.find(' ');
        unsigned line_no = atoi(line.substr(0, end).c_str());
        line = line.substr(end + 1);

        end = line.find(' ');
        unsigned last_line = atoi(line.substr(0, end).c_str());
        line = line.substr(end + 1);

        std::string pragma = line;

        line = line.substr(line.find(' ') + 1);
        assert(line.find("omp") == 0);

        line = line.substr(line.find(' ') + 1);

        // Look for a command like parallel, for, etc.
        end = line.find(' ');

        if (end == std::string::npos) {
            // No clauses, just pragma name
            std::string pragma_name = line;

            pragmas->push_back(OpenMPPragma(line_no, last_line, line,
                        pragma_name));
        } else {
            std::string pragma_name = line.substr(0, end);

            OpenMPPragma pragma(line_no, last_line, line, pragma_name);
            std::string clauses = line.substr(end + 1);

            std::vector<std::string> split_clauses;
            std::stringstream acc;
            int paren_depth = 0;
            int start = 0;
            int index = 0;

            while (index < clauses.size()) {
                if (clauses[index] == ' ' && paren_depth == 0) {
                    split_clauses.push_back(clauses.substr(start,
                                index - start));
                    index++;
                    while (index < clauses.size() && index == ' ') {
                        index++;
                    }
                    start = index;
                } else {
                    if (clauses[index] == '(') paren_depth++;
                    else if (clauses[index] == ')') paren_depth--;
                    index++;
                }
            }
            if (index != start) {
                split_clauses.push_back(clauses.substr(start));
            }

            for (std::vector<std::string>::iterator i = split_clauses.begin(),
                    e = split_clauses.end(); i != e; i++) {
                std::string clause = *i;

                if (clause.find("(") == std::string::npos) {
                    pragma.add_clause(clause, std::vector<std::string>());
                } else {
                    size_t open = clause.find("(");
                    assert(open != std::string::npos);

                    std::string args = clause.substr(open + 1);

                    size_t close = args.find_last_of(")");
                    assert(close != std::string::npos);

                    args = args.substr(0, close);

                    std::string clause_name = clause.substr(0, open);

                    std::vector<std::string> clause_args;
                    int args_index = 0;
                    int args_start = 0;
                    while (args_index < args.size()) {
                        if (args[args_index] == ',') {
                            clause_args.push_back(args.substr(args_start,
                                        args_index - args_start));
                            args_index++;
                            while (args_index < args.size() &&
                                    args[args_index] == ' ') {
                                args_index++;
                            }
                            args_start = args_index;
                        } else {
                            args_index++;
                        }
                    }

                    if (args_start != args_index) {
                        clause_args.push_back(args.substr(args_start));
                    }

                    pragma.add_clause(clause_name, clause_args);
                }
            }

            pragmas->push_back(pragma);
        }
    }
    fp.close();

    return pragmas;
}

std::vector<ReachableInfo> *DesiredInsertions::parseReachable() {
    std::vector<ReachableInfo> *reachable = new std::vector<ReachableInfo>();

    std::ifstream fp;
    fp.open(reachable_file, std::ios::in);
    std::string line;

    while (getline(fp, line)) {
        size_t end = line.find(' ');
        size_t container = strtoul(line.substr(0, end).c_str(), NULL, 10);
        line = line.substr(end + 1);

        size_t child = strtoul(line.c_str(), NULL, 10);

        reachable->push_back(ReachableInfo(container, child));
    }
    fp.close();
    return reachable;
}

std::map<std::string, FunctionExit *> *DesiredInsertions::parseFunctionExits() {
    std::map<std::string, FunctionExit *> *result =
        new std::map<std::string, FunctionExit *>();

    assert(state_change_insertions != NULL);

    std::ifstream fp;
    fp.open(exit_file, std::ios::in);
    std::string line;

    while (getline(fp, line)) {
        size_t end = line.find(' ');
        std::string funcname = line.substr(0, end);
        line = line.substr(end + 1);

        end = line.find(' ');

        if (end == std::string::npos) {
            // No terminating aliases
            size_t return_alias = unique_alias(strtoul(line.c_str(), NULL, 10));
            FunctionExit *info = new FunctionExit(0, return_alias);
            (*result)[funcname] = info;
        } else {
            // At least one terminating alias
            size_t return_alias = unique_alias(
                    strtoul(line.substr(0, end).c_str(), NULL, 10));
            line = line.substr(end + 1);
            FunctionExit *info = new FunctionExit(count_locs++, return_alias);

            end = line.find(' ');
            while (end != std::string::npos) {
                size_t alias = unique_alias(strtoul(line.substr(0, end).c_str(),
                            NULL, 10));
                info->add_changed_group_at_term(alias);
                line = line.substr(end + 1);
                end = line.find(' ');
            }
            size_t alias = unique_alias(strtoul(line.c_str(), NULL, 10));
            info->add_changed_group_at_term(alias);

            (*result)[funcname] = info;
        }
    }

    fp.close();

    return result;
}

std::vector<FunctionArgumentAliasGroups> *DesiredInsertions::parseFunctions() {
    std::vector<FunctionArgumentAliasGroups> *functions =
        new std::vector<FunctionArgumentAliasGroups>();

    std::ifstream fp;
    fp.open(func_file, std::ios::in);
    std::string line;
    while (getline(fp, line)) {
        size_t end = line.find(' ');
        if (end == std::string::npos) {
            std::string funcname = line;
            functions->push_back(FunctionArgumentAliasGroups(funcname));
        } else {
            std::string funcname = line.substr(0, end);
            line = line.substr(end + 1);
            FunctionArgumentAliasGroups func(funcname);

            end = line.find(' ');
            while (end != std::string::npos) {
                size_t alias_no = unique_alias(
                        strtoul(line.substr(0, end).c_str(), NULL, 10));
                func.add_alias_no(alias_no);
                line = line.substr(end + 1);
                end = line.find(' ');
            }
            size_t last_alias_no = unique_alias(
                    strtoul(line.c_str(), NULL, 10));
            func.add_alias_no(last_alias_no);

            functions->push_back(func);
        }
    }
    fp.close();

    return functions;
}

std::vector<AliasesPassedToCallSite> *DesiredInsertions::parseCallSites() {
    std::vector<AliasesPassedToCallSite> *callsites =
        new std::vector<AliasesPassedToCallSite>();

    std::ifstream fp;
    fp.open(call_file, std::ios::in);
    std::string line;
    while (getline(fp, line)) {
        size_t end = line.find(' ');
        std::string funcname = line.substr(0, end);
        line = line.substr(end + 1);

        end = line.find(' ');
        int line_no = atoi(line.substr(0, end).c_str());
        line = line.substr(end + 1);

        end = line.find(' ');
        int col = atoi(line.substr(0, end).c_str());
        line = line.substr(end + 1);

        AliasesPassedToCallSite *callsite;
        end = line.find(' ');
        if (end == std::string::npos) {
            size_t alias = unique_alias(strtoul(line.c_str(), NULL, 10));

            callsite = new AliasesPassedToCallSite(funcname, line_no,
                    col, alias);
        } else {
            size_t alias = unique_alias(
                    strtoul(line.substr(0, end).c_str(), NULL, 10));
            line = line.substr(end + 1);

            callsite = new AliasesPassedToCallSite(funcname, line_no,
                    col, alias);

            end = line.find(' ');
            while (end != std::string::npos) {
                size_t alias_no = unique_alias(
                        strtoul(line.substr(0, end).c_str(), NULL, 10));
                callsite->add_alias_no(alias_no);
                line = line.substr(end + 1);
                end = line.find(' ');
            }
            size_t last_alias_no = unique_alias(
                    strtoul(line.c_str(), NULL, 10));
            callsite->add_alias_no(last_alias_no);
        }

        callsites->push_back(*callsite);
    }
    fp.close();

    std::sort(callsites->begin(), callsites->end());

    return callsites;
}

std::map<int, std::map<std::string, std::vector<HeapAlloc> *> *> *DesiredInsertions::parseHeapAllocs() {
    std::map<int, std::map<std::string, std::vector<HeapAlloc> *> *> *allocs =
        new std::map<int, std::map<std::string, std::vector<HeapAlloc> *> *>();

    std::ifstream fp;
    fp.open(heap_file, std::ios::in);

    std::string line;
    while (getline(fp, line)) {
        size_t line_no_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_no_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_no_end + 1);

        size_t col_end = line.find(' ');
        std::string col_str = line.substr(0, col_end);
        int col = atoi(col_str.c_str());
        line = line.substr(col_end + 1);

        size_t group_end = line.find(' ');
        std::string group_str = line.substr(0, group_end);
        size_t group = unique_alias(strtoul(group_str.c_str(), NULL, 10));
        line = line.substr(group_end + 1);

        std::string fname;
        bool have_type_info;
        if (line.find(' ') == std::string::npos) {
            fname = line;
            have_type_info = false;
        } else {
            fname = line.substr(0, line.find(' '));
            line = line.substr(line.find(' ') + 1);
            have_type_info = true;
        }
        HeapAlloc alloc(line_no, col, group, fname);

        if (have_type_info) {
            // have more type info

            size_t is_elem_ptr_end = line.find(' ');
            std::string is_elem_ptr_str = line.substr(0, is_elem_ptr_end);
            bool is_elem_ptr = (is_elem_ptr_str == "1" ? true : false);
            line = line.substr(is_elem_ptr_end + 1);

            size_t is_elem_struct_end = line.find(' ');
            std::string is_elem_struct_str = line.substr(0, is_elem_struct_end);
            bool is_elem_struct = (is_elem_struct_str == "1" ? true : false);
            line = line.substr(is_elem_struct_end + 1);

            alloc.add_type_info(is_elem_ptr, is_elem_struct);

            if (is_elem_struct) {
                size_t struct_type_name_end = line.find(' ');

                std::string struct_type_name;
                std::vector<std::string> *struct_field_ptrs =
                    new std::vector<std::string>();
                if (struct_type_name_end == std::string::npos) {
                    struct_type_name = line;
                } else {
                    struct_type_name = line.substr(0, struct_type_name_end);
                    line = line.substr(struct_type_name_end + 1);

                    while (1) {
                        size_t end = line.find(' ');
                        if (end == std::string::npos) {
                            end = line.size();
                        }
                        std::string fieldname = line.substr(0, end);
                        struct_field_ptrs->push_back(fieldname);

                        if (end == line.size()) break;
                        line = line.substr(end + 1);
                    }
                }

                alloc.add_struct_type_info(struct_type_name, struct_field_ptrs);
            }
        }

        if (allocs->find(line_no) == allocs->end()) {
            (*allocs)[line_no] = new std::map<std::string, std::vector<HeapAlloc> *>();
        }
        std::map<std::string, std::vector<HeapAlloc> *> *for_line =
            (*allocs)[line_no];

        if (for_line->find(fname) == for_line->end()) {
            (*for_line)[fname] = new std::vector<HeapAlloc>();
        }
        std::vector<HeapAlloc> *for_func = (*for_line)[fname];

        for_func->push_back(alloc);
    }

    for (map<int, map<string, vector<HeapAlloc> *> *>::iterator i =
            allocs->begin(), e = allocs->end(); i != e; i++) {
        std::map<std::string, std::vector<HeapAlloc> *> *curr_line = i->second;

        for (std::map<std::string, std::vector<HeapAlloc> *>::iterator ii =
                curr_line->begin(), ee = curr_line->end(); ii != ee; ii++) {
            std::vector<HeapAlloc> *for_func = ii->second;
            std::sort(for_func->begin(), for_func->end());
        }
    }

    return allocs;
}

std::map<std::string, StackAlloc *> *DesiredInsertions::parseStackAllocs() {
    std::ifstream fp;
    fp.open(stack_allocs_file, std::ios::in);

    // Mapping from func|var name to is unique? information
    std::map<std::string, bool> is_unique_in_function;

    std::map<std::string, StackAlloc *> *allocs =
        new std::map<std::string, StackAlloc *>();

    std::string line;
    while (getline(fp, line)) {
        int filename_end = line.find(' ');
        std::string filename = line.substr(0, filename_end);
        line = line.substr(filename_end + 1);

        int mangled_name_end = line.find(' ');
        std::string mangled_name = line.substr(0, mangled_name_end);
        line = line.substr(mangled_name_end + 1);

        int open_quotes_end = line.find(' ');
        std::string open_quotes = line.substr(0, open_quotes_end);
        line = line.substr(open_quotes_end + 1);
        assert(open_quotes == "\"");

        std::stringstream ss;
        while (1) {
            int end = line.find(' ');
            std::string buf = line.substr(0, end);
            line = line.substr(end + 1);

            if (buf == "\"") {
                break;
            } else {
                ss << buf << " ";
            }
        }
        std::string full_type = ss.str();
        full_type = full_type.substr(0, full_type.length() - 1);

        int type_size_in_bits_end = line.find(' ');
        std::string type_size_in_bits_str = line.substr(0, type_size_in_bits_end);
        int type_size_in_bits = atoi(type_size_in_bits_str.c_str());
        line = line.substr(type_size_in_bits_end + 1);

        int is_ptr_end = line.find(' ');
        std::string is_ptr_str = line.substr(0, is_ptr_end);
        assert(is_ptr_str == "1" || is_ptr_str == "0");
        bool is_ptr;
        if (is_ptr_str == "1") {
            is_ptr = true;
        } else {
            is_ptr = false;
        }
        line = line.substr(is_ptr_end + 1);

        int is_struct_end = line.find(' ');
        if (is_struct_end == std::string::npos) {
            is_struct_end = line.length();
        }
        std::string is_struct_str = line.substr(0, is_struct_end);
        assert(is_struct_str == "1" || is_struct_str == "0");
        bool is_struct;
        if (is_struct_str == "1") {
            is_struct = true;
        } else {
            is_struct = false;
        }
        line = line.substr(is_struct_end + 1);

        StackAlloc *alloc = new StackAlloc(filename, mangled_name, full_type,
                type_size_in_bits, is_ptr, is_struct);
        if (is_struct) {
            size_t struct_type_name_end = line.find(' ');
            std::string struct_type_name = line.substr(0, struct_type_name_end);
            alloc->set_struct_type_name(struct_type_name);
            line = line.substr(struct_type_name_end + 1);

            size_t nfieldnames_end = line.find(' ');
            std::string nfieldnames_str = line.substr(0, nfieldnames_end);
            int nfieldnames = atoi(nfieldnames_str.c_str());

            if (nfieldnames_end != std::string::npos) {
                line = line.substr(nfieldnames_end + 1);

                for (int f = 0; f < nfieldnames; f++) {
                    size_t end = line.find(' ');
                    std::string fieldname = line.substr(0, end);
                    alloc->add_ptr_field(fieldname);
                    line = line.substr(end + 1);
                }
            } else {
                assert(nfieldnames == 0);
            }
        }

        size_t may_checkpoint_end = line.find(' ');
        std::string may_checkpoint_str = line.substr(0,
                may_checkpoint_end);
        int may_checkpoint = atoi(may_checkpoint_str.c_str());
        alloc->set_may_checkpoint(may_checkpoint > 0);

        if (may_checkpoint) {
            line = line.substr(may_checkpoint_end + 1);

            while (1) {
                size_t end = line.find(' ');
                std::string cause = line.substr(0, end);
                alloc->add_checkpoint_cause(cause);

                if (end == std::string::npos) break;
                line = line.substr(end + 1);
            }
        } else {
            assert(may_checkpoint_end == std::string::npos);
        }

        assert(allocs->find(mangled_name) == allocs->end());
        (*allocs)[mangled_name] = alloc;

        std::string func_var_name = alloc->get_func_var_name_from_mangled_name();
        if (is_unique_in_function.find(func_var_name) == is_unique_in_function.end()) {
            is_unique_in_function.insert(std::pair<std::string, bool>(func_var_name, true));
        } else {
            is_unique_in_function[func_var_name] = false;
        }
    }

    for (std::map<std::string, StackAlloc *>::iterator i = allocs->begin(),
            e = allocs->end(); i != e; i++) {
        StackAlloc *alloc = i->second;
        std::string func_var_name = alloc->get_func_var_name_from_mangled_name();
        assert(is_unique_in_function.find(func_var_name) !=
                is_unique_in_function.end());
        if (is_unique_in_function[func_var_name]) {
            alloc->set_is_unique_in_function(true);
        }
    }

    return allocs;
}

std::map<std::string, FunctionCallees *> *DesiredInsertions::parseCallTree() {
    std::ifstream fp;
    fp.open(call_tree_file, std::ios::in);
    std::map<std::string, FunctionCallees *> *call_tree =
        new std::map<std::string, FunctionCallees *>();

    std::string line;
    while (getline(fp, line)) {
        size_t end = line.find(' ');
        std::string name = line.substr(0, end);
        line = line.substr(end + 1);

        end = line.find(' ');
        std::string s_contains_unknown_functions = line.substr(0, end);
        assert(s_contains_unknown_functions == "1" ||
                s_contains_unknown_functions == "0");
        bool contains_unknown_functions = (s_contains_unknown_functions == "1");
        line = line.substr(end + 1);

        end = line.find(' ');
        std::string may_checkpoint_str = line.substr(0, end);
        CREATES_CHECKPOINT may_checkpoint;
        if (may_checkpoint_str == "DOES") {
            may_checkpoint = DOES;
        } else if (may_checkpoint_str == "DOES_NOT") {
            may_checkpoint = DOES_NOT;
        } else if (may_checkpoint_str == "MAY") {
            may_checkpoint = MAY;
        } else {
            assert(false);
        }
        line = line.substr(end + 1);

        FunctionCallees *callees = new FunctionCallees(name,
                contains_unknown_functions, may_checkpoint);

        do {
            end = line.find(' ');
            std::string func_name = line.substr(0, end);
            callees->add_checkpoint_cause(func_name);
            line = line.substr(end + 1);
        } while (end != std::string::npos);

        if (call_tree->find(name) != call_tree->end()) {
            /*
             * TODO An unforunate side effect of supporting CUDA but not C++ is
             * that CUDA drags some C++ things in with it (e.g. multiple
             * constructors for the dim3 type). To support this, we'll probably
             * need to add C++ support.
             */
            assert("dim3::dim3" == name);
        } else {
            assert(call_tree->find(name) == call_tree->end());
            call_tree->insert(std::pair<std::string, FunctionCallees *>(name,
                        callees));
        }
    }

    return (call_tree);
}

StructFields *DesiredInsertions::get_struct_fields_for(std::string name) {
    for (std::vector<StructFields *>::iterator i = struct_fields->begin(),
            e = struct_fields->end(); i != e; i++) {
        StructFields *curr = *i;
        if (curr->get_name() == name) return curr;
    }
    return NULL;
}

std::vector<StructFields *> *DesiredInsertions::parseStructs() {
    std::ifstream fp;
    fp.open(struct_info_file, std::ios::in);
    std::vector<StructFields *> *fields = new std::vector<StructFields *>();

    std::string line;
    while (getline(fp, line)) {
        size_t end = line.find(' ');
        std::string name = line.substr(0, end);
        line = line.substr(end + 1);

        end = line.find(' ');
        std::string unnamed_str = line.substr(0, end);
        bool unnamed = false;
        if (unnamed_str == "1") {
            unnamed = true;
        } else {
            assert(unnamed_str == "0");
        }

        StructFields *curr = new StructFields(name, unnamed);

        if (end != std::string::npos) {
            line = line.substr(end + 1);

            int index = 0;
            while (index < line.length()) {
                int field_name_start = index;
                while (index < line.length() && line[index] != ' ') {
                    index++;
                }
                int field_name_end = index;

                index++;
                assert(index < line.length() && line[index] == '"');
                index++;
                int field_type_start = index;
                while (index < line.length() && line[index] != '"') {
                    index++;
                }
                int field_type_end = index;

                curr->add_field(StructField(line.substr(field_name_start,
                                field_name_end - field_name_start),
                            line.substr(field_type_start,
                                field_type_end - field_type_start)));
                index += 2;
            }
        }
        fields->push_back(curr);
    }
    return fields;
}

std::vector<StateChangeInsertion *> *DesiredInsertions::parseStateChangeInsertions() {
    std::ifstream fp;
    fp.open(lines_info_file, std::ios::in);

    assert(func_exits == NULL);

    std::vector<StateChangeInsertion *> *result =
        new std::vector<StateChangeInsertion *>();

    std::string line;
    while (getline(fp, line)) {
        // test.cpp 25 9 : { 2, 3, 4, 5, 6 }
        int filename_end = line.find(' ');
        std::string filename = line.substr(0, filename_end);
        line = line.substr(filename_end + 1);

        int line_no_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_no_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_no_end + 1);

        int col_end = line.find(' ');
        std::string col_str = line.substr(0, col_end);
        int col = atoi(col_str.c_str());
        line = line.substr(col_end + 5);

        std::vector<size_t> *groups = new std::vector<size_t>();
        while (1) {
            int group_end = find_group_end(&line);
            std::string group_str = line.substr(0, group_end);
            size_t group = unique_alias(strtoul(group_str.c_str(), NULL, 10));
            groups->push_back(group);

            if (line[group_end + 1] == '}') {
                line = line.substr(group_end + 3);
                break;
            }

            line = line.substr(group_end + 2);
        }

        size_t first_colon = line.find(':');
        std::string direct = line.substr(0, first_colon);
        line = line.substr(first_colon + 1);
        size_t second_colon = line.find(':');
        std::string call = line.substr(0, second_colon);
        std::string reason = line.substr(second_colon + 1);

        StateChangeInsertion *change = new StateChangeInsertion(count_locs,
                filename, line_no, col, groups, direct, call, reason);
        result->push_back(change);
        count_locs++;
    }

    fp.close();
    return result;
}

bool DesiredInsertions::contains(int line, int col, const char *filename) {
    std::string filename_str(filename);
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename_str) {
            return true;
        }
    }
    return false;
}

void DesiredInsertions::update_alias_change_locations(int line, int col,
        const char *filename, int delta) {
    std::string filename_str(filename);
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() >= col &&
                insert->get_filename() == filename_str) {
            insert->set_col(insert->get_col() + delta);
        }
    }
}

StateChangeInsertion *DesiredInsertions::get_matching(int line, int col,
        const char *filename) {
    std::string filename_str(filename);
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename_str) {
            return insert;
        }
    }
    return (NULL);
}

std::vector<size_t> *DesiredInsertions::get_groups(int line, int col,
        const char *filename) {
    std::string filename_str(filename);
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename_str) {
            return insert->get_groups();
        }
    }
    assert(false);
}

StackAlloc *DesiredInsertions::findStackAlloc(std::string mangled_name) {
    std::map<std::string, StackAlloc *>::iterator iter =
        stack_allocs->find(mangled_name);
    if (iter == stack_allocs->end()) return NULL;

    return iter->second;
}

bool DesiredInsertions::findNextMatchingMemoryAllocation(int line,
        std::string func, HeapAlloc *ret) {
    if (heap_allocs->find(line) == heap_allocs->end()) {
        return false;
    }

    std::map<std::string, std::vector<HeapAlloc> *> *for_line =
        (*heap_allocs)[line];
    if (for_line->find(func) == for_line->end()) {
        return false;
    }

    std::vector<HeapAlloc> *for_func = (*for_line)[func];

    if (for_func->size() == 0) {
        return false;
    }

    std::vector<HeapAlloc>::iterator front = for_func->begin();
    *ret = *front;
    for_func->erase(front);
    return true;
}

void DesiredInsertions::AppendFirstPrivate(int starting_line, int ending_line,
        std::string varname) {
    firstprivate << starting_line << " " << ending_line << " " << varname <<
        "\n";
}

void DesiredInsertions::AppendToDiagnostics(std::string action,
        clang::SourceLocation loc, std::string val, clang::SourceManager &SM) {
    clang::PresumedLoc presumed = SM.getPresumedLoc(loc);
    const char *path = presumed.getFilename();
    if (strstr(path, working_dir.c_str()) == path) {
        const char *filename = path + working_dir.size();
        if (*filename == '/') filename++;
        path = filename;
    }

    diagnostics << action << " " << std::string(path) <<
        " " << presumed.getLine() << " " << presumed.getColumn() << " " <<
        val << "\n";
}

std::vector<OpenMPPragma> *DesiredInsertions::get_omp_pragmas_for(
        clang::FunctionDecl *decl, clang::SourceManager &SM) {
    std::vector<OpenMPPragma> *result = new std::vector<OpenMPPragma>();
    if (!decl->hasBody()) return result;

    clang::SourceLocation start = decl->getBody()->getLocStart();
    clang::SourceLocation end = decl->getBody()->getLocEnd();

    clang::PresumedLoc start_loc = SM.getPresumedLoc(start);
    clang::PresumedLoc end_loc = SM.getPresumedLoc(end);

    for (std::vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
            e = omp_pragmas->end(); i != e; i++) {
        OpenMPPragma curr = *i;

        bool before = (curr.get_line() < start_loc.getLine());
        bool after = (curr.get_line() > end_loc.getLine());

        if (!before && !after) {
            result->push_back(curr);
        }
    }

    return result;
}

OpenMPPragma *DesiredInsertions::get_omp_pragma_for(int line_no) {
    for (std::vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
            e = omp_pragmas->end(); i != e; i++) {
        OpenMPPragma *curr = &*i;
        if (curr->get_line() == line_no) return curr;
    }
    return NULL;
}

AliasesPassedToCallSite DesiredInsertions::findFirstMatchingCallsite(int line,
        std::string callee_name) {
    std::vector<AliasesPassedToCallSite>::iterator i = callsites->begin();
    std::vector<AliasesPassedToCallSite>::iterator e = callsites->end();
    while (i != e) {
        AliasesPassedToCallSite curr = *i;
        if (curr.get_line() == line &&
                curr.get_funcname().find(callee_name) != std::string::npos) {
            /*
             * TODO This is super ugly. The callee_name passed here is the
             * name as it appears in the source code. The function name
             * stored in curr is a mangled name (some C++ mangling
             * convention? not sure). Here, we just wait for the first match
             * where the user-visible name is a substring of the mangled
             * name.
             */
            break;
        }
        i++;
    }

    if (i == e) {
        llvm::errs() << "Unable to find match for call site on line " << line <<
            " with name " << callee_name << "\n";
        assert(false);
    }

    AliasesPassedToCallSite result = *i;
    callsites->erase(i);
    return result;
}

FunctionArgumentAliasGroups* DesiredInsertions::findMatchingFunctionNullReturn(
        std::string func) {
    for (std::vector<FunctionArgumentAliasGroups>::iterator i =
            functions->begin(), e = functions->end(); i != e; i++) {
        FunctionArgumentAliasGroups *curr = &*i;
        if (curr->get_funcname() == func) {
            return curr;
        }

        size_t template_index = curr->get_funcname().find('<');
        if (template_index != std::string::npos) {
            std::string without_template = curr->get_funcname().substr(0,
                    template_index);
            if (without_template == func) {
                return curr;
            }
        }
    }

    return (NULL);
}

FunctionArgumentAliasGroups DesiredInsertions::findMatchingFunction(
        std::string func) {
    FunctionArgumentAliasGroups *result = findMatchingFunctionNullReturn(func);

    if (result == NULL) {
        llvm::errs() << func << "\n";
        assert(false);
    }
    return *result;
}

FunctionExit *DesiredInsertions::getFunctionExitInfo(std::string funcname) {
    if (func_exits->find(funcname) == func_exits->end()) {
        for (std::map<std::string, FunctionExit *>::iterator i =
                func_exits->begin(), e = func_exits->end(); i != e; i++) {
            std::string curr = i->first;
            size_t template_index = curr.find('<');
            // Remove type parameters to see if its a match
            if (template_index != std::string::npos) {
                std::string without_template = curr.substr(0, template_index);
                if (without_template == funcname) {
                    return i->second;
                }
            }
        }
        llvm::errs() << "Unable to find function exit for \"" << funcname <<
            "\"\n";
        assert(false);
    }
    return func_exits->at(funcname);
}

void DesiredInsertions::add_line_collapse(int start, int end) {
    if (start == end) return;

    std::vector<CollapsedLines>::iterator i = transforms.begin();
    std::vector<CollapsedLines>::iterator e = transforms.end();
    while (i != e && i->get_start() < start) {
        i++;
    }

    if (i == e) {
        transforms.push_back(CollapsedLines(start, end));
    } else {
        if (start == i->get_start()) {
            // Merge overlapping
            i->update_end(end > i->get_end() ? end : i->get_end());
        } else {
            /*
             * i->get_start() > start. Either:
             *   1. the old range is directly adjacent to the new range (and
             *      must be greater than), in which case we merge the two into
             *      one.
             *   2. the new range entirely encloses the old range (in which case
             *      we replace the current entry with the new entry).
             *   3. there is no overlap (and we assert it cannot be a partial
             *      overlap), in which case we just insert a new range.
             */
            if (i->get_start() == end) {
                // Merge neighbors, with the new range starting lower
                i->update_start(start);
            } else if (i->get_end() < end) {
                // current range is entirely enclosed by new range
                i->update_start(start);
                i->update_end(end);
            } else {
                assert(i->get_start() > end);
                transforms.insert(i, CollapsedLines(start, end));
            }
        }
    }
}

int DesiredInsertions::lookup_new_line(int line) {
    int match = -1;
    int diff = 0;

    std::vector<CollapsedLines>::iterator i = transforms.begin();
    std::vector<CollapsedLines>::iterator e = transforms.end();

    while (i != e && i->get_start() < line) {
        if (line > i->get_start() && line <= i->get_end()) {
            return i->get_start();
        }
        i++;
    }
    
    return line;
}

void DesiredInsertions::update_line_numbers() {

    // Update state change insertion info
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        insert->update_line(lookup_new_line(insert->get_line()));
    }
    
    // Update heap allocation line info
    map<int, map<string, vector<HeapAlloc> *> *> *new_heap_allocs =
        new map<int, map<string, vector<HeapAlloc> *> *>();
    for (map<int, map<string, vector<HeapAlloc> *> *>::iterator i =
            heap_allocs->begin(), e = heap_allocs->end(); i != e; i++) {
        int new_line = lookup_new_line(i->first);
        map<string, vector<HeapAlloc> *> *allocs_on_line = i->second;

        // Insert if there isn't an entry for this line yet
        if (new_heap_allocs->find(new_line) == new_heap_allocs->end()) {
            (*new_heap_allocs)[new_line] =
                new map<string, vector<HeapAlloc> *>();
        }
        map<string, vector<HeapAlloc> *> *new_allocs_on_line =
            (*new_heap_allocs)[new_line];

        for (map<string, vector<HeapAlloc> *>::iterator ii =
                allocs_on_line->begin(), ee = allocs_on_line->end(); ii != ee;
                ii++) {
            string funcname = ii->first;
            vector<HeapAlloc> *allocs = ii->second;

            if (new_allocs_on_line->find(funcname) ==
                    new_allocs_on_line->end()) {
                (*new_allocs_on_line)[funcname] = new vector<HeapAlloc>();
            }
            vector<HeapAlloc> *new_allocs = (*new_allocs_on_line)[funcname];

            for (vector<HeapAlloc>::iterator iii = allocs->begin(),
                    eee = allocs->end(); iii != eee; iii++) {
                new_allocs->push_back(*iii);
            }
        }
    }

    for (map<int, map<string, vector<HeapAlloc> *> *>::iterator i =
            new_heap_allocs->begin(), e = new_heap_allocs->end(); i != e; i++) {
        map<string, vector<HeapAlloc> *> *for_line = i->second;
        for (map<string, vector<HeapAlloc> *>::iterator ii = for_line->begin(),
                ee = for_line->end(); ii != ee; ii++) {
            vector<HeapAlloc> *per_func = ii->second;
            std::sort(per_func->begin(), per_func->end());
        }
    }
    heap_allocs = new_heap_allocs; // update with new line numbers

    /*
     * Update aliases passed line info. Don't resort callsites because every
     * statement should still be in the same order, some will just have their
     * lines merged together.
     */
    for (vector<AliasesPassedToCallSite>::iterator i = callsites->begin(),
            e = callsites->end(); i != e; i++) {
        int new_line = lookup_new_line(i->get_line());
        i->update_line(new_line);
    }
    
    // Update OMP pragma line info
    for (vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
            e = omp_pragmas->end(); i != e; i++) {
        i->update_line(lookup_new_line(i->get_line()));
    }

    transforms.clear();
}

bool DesiredInsertions::always_checkpoints(StackAlloc *alloc) {
    std::set<std::string> *checkpoint_causes = alloc->get_checkpoint_causes();
    for (std::set<std::string>::iterator i = checkpoint_causes->begin(),
            e = checkpoint_causes->end(); i != e; i++) {
        std::string cause = *i;

        if (cause == "checkpoint") return (true);

        if (call_tree->find(cause) == call_tree->end()) {
            /*
             * Externally defined functions may not have an entry in the call
             * tree. For example, given an application compiled from two files
             * there may be missing nodes in the call tree from file B when
             * transforming file A. For these functions, we can't assert that
             * they always checkpoint so we just skip them.
             */
            continue;
        }

        if (call_tree->at(cause)->get_may_checkpoint() == DOES) {
            return (true);
        }
    }
    return (false);
}

bool DesiredInsertions::has_callees(std::string name) {
    return (call_tree->find(name) != call_tree->end());
}

FunctionCallees *DesiredInsertions::get_callees(std::string name) {
    if (call_tree->find(name) == call_tree->end()) {
        return NULL;
    }
    return (call_tree->at(name));
}

bool DesiredInsertions::may_cause_checkpoint(std::string fname) {
    bool may = true;
    if (has_callees(fname)) {
        may = (get_callees(fname)->get_may_checkpoint() != DOES_NOT);
    }
    return (may);
}

std::string DesiredInsertions::get_alias_loc_var(unsigned id) {
    std::stringstream ss;
    ss << "____alias_loc_id_" << id;
    return ss.str();
}
