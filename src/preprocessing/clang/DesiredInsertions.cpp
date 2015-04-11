#include "llvm/Support/raw_ostream.h"

#include "DesiredInsertions.h"

#include <iostream>
#include <fstream>
#include <sstream>

static int find_group_end(std::string *s) {
    int find = s->find(',');
    if (find != std::string::npos) return find;
    find = s->find(' ');
    if (find != std::string::npos) return find;
    return -1;
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

        std::string pragma = line;

        line = line.substr(line.find(' ') + 1);
        llvm::errs() << "\"" << line << "\"\n";
        assert(line.find("omp") == 0);

        // Only support the parallel pragma at the moment
        line = line.substr(line.find(' ') + 1);
        assert(line.find("parallel") == 0);

        end = line.find(' ');
        if (end == std::string::npos) {
            pragmas->push_back(OpenMPPragma(lines.get(line_no), line, "parallel"));
        } else {
            OpenMPPragma pragma(lines.get(line_no), line, "parallel");
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
            size_t return_alias = strtoul(line.c_str(), NULL, 10);
            FunctionExit *info = new FunctionExit(return_alias);
            (*result)[funcname] = info;
        } else {
            // At least one terminating alias
            size_t return_alias = strtoul(line.substr(0, end).c_str(), NULL, 10);
            line = line.substr(end + 1);
            FunctionExit *info = new FunctionExit(return_alias);

            end = line.find(' ');
            while (end != std::string::npos) {
                size_t alias = strtoul(line.substr(0, end).c_str(), NULL, 10);
                info->add_changed_group_at_term(alias);
                line = line.substr(end + 1);
                end = line.find(' ');
            }
            size_t alias = strtoul(line.c_str(), NULL, 10);
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
                size_t alias_no = strtoul(line.substr(0, end).c_str(), NULL,
                        10);
                func.add_alias_no(alias_no);
                line = line.substr(end + 1);
                end = line.find(' ');
            }
            size_t last_alias_no = strtoul(line.c_str(), NULL, 10);
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
            size_t alias = strtoul(line.c_str(), NULL, 10);

            callsite = new AliasesPassedToCallSite(funcname, lines.get(line_no),
                    col, alias);
        } else {
            size_t alias = strtoul(line.substr(0, end).c_str(), NULL, 10);
            line = line.substr(end + 1);

            callsite = new AliasesPassedToCallSite(funcname, lines.get(line_no),
                    col, alias);

            end = line.find(' ');
            while (end != std::string::npos) {
                size_t alias_no = strtoul(line.substr(0, end).c_str(), NULL, 10);
                callsite->add_alias_no(alias_no);
                line = line.substr(end + 1);
                end = line.find(' ');
            }
            size_t last_alias_no = strtoul(line.c_str(), NULL, 10);
            callsite->add_alias_no(last_alias_no);
        }

        callsites->push_back(*callsite);
    }
    fp.close();

    std::sort(callsites->begin(), callsites->end());

    return callsites;
}

std::map<Line*, std::map<std::string, std::vector<HeapAlloc> *> *> *DesiredInsertions::parseHeapAllocs() {
    std::map<Line*, std::map<std::string, std::vector<HeapAlloc> *> *> *allocs =
        new std::map<Line*, std::map<std::string, std::vector<HeapAlloc> *> *>();

    std::ifstream fp;
    fp.open(heap_file, std::ios::in);

    std::string line;
    while (getline(fp, line)) {
        size_t line_no_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_no_end);
        Line* line_no = lines.get(atoi(line_no_str.c_str()));
        line = line.substr(line_no_end + 1);

        size_t col_end = line.find(' ');
        std::string col_str = line.substr(0, col_end);
        int col = atoi(col_str.c_str());
        line = line.substr(col_end + 1);

        size_t group_end = line.find(' ');
        std::string group_str = line.substr(0, group_end);
        size_t group = strtoul(group_str.c_str(), NULL, 10);
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

    for (std::map<Line*, std::map<std::string, std::vector<HeapAlloc> *> *>::iterator i = allocs->begin(), e = allocs->end(); i != e; i++) {
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

        StackAlloc *alloc = new StackAlloc(filename, mangled_name, full_type,
                type_size_in_bits, is_ptr, is_struct);
        if (is_struct) {
            line = line.substr(is_struct_end + 1);

            int struct_type_name_end = line.find(' ');
            std::string struct_type_name = line.substr(0, struct_type_name_end);
            alloc->set_struct_type_name(struct_type_name);

            if (struct_type_name_end != line.length() - 1) {
                line = line.substr(struct_type_name_end + 1);

                while(1) {
                    int end = line.find(' ');
                    std::string fieldname = line.substr(0, end);

                    alloc->add_ptr_field(fieldname);

                    if (end == line.length() - 1) break;
                }
            }
        }

        assert(allocs->find(mangled_name) == allocs->end());
        (*allocs)[mangled_name] = alloc;
    }

    return allocs;
}

std::vector<StructFields *> *DesiredInsertions::parseStructs() {
    std::ifstream fp;
    fp.open(struct_info_file, std::ios::in);
    std::vector<StructFields *> *fields = new std::vector<StructFields *>();

    std::string line;
    while (getline(fp, line)) {
        int name_end = line.find(' ');
        std::string name = line.substr(0, name_end);
        StructFields *fields = new StructFields(name);

        line = line.substr(name_end + 1);
        while (line.find(' ') != std::string::npos) {
            int end = line.find(' ');
            std::string field = line.substr(0, end);
            fields->add_field(field);

            line = line.substr(end + 1);
        }
        fields->add_field(line);
    }
    return fields;
}

std::vector<StateChangeInsertion *> *DesiredInsertions::parseStateChangeInsertions() {
    std::ifstream fp;
    fp.open(lines_info_file, std::ios::in);

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
            size_t group = strtoul(group_str.c_str(), NULL, 10);
            groups->push_back(group);

            if (line[group_end + 1] == '}') break;

            line = line.substr(group_end + 2);
        }

        StateChangeInsertion *change = new StateChangeInsertion(filename,
                lines.get(line_no), col, groups);
        result->push_back(change);
    }

    fp.close();
    return result;
}

bool DesiredInsertions::contains(Line* line, int col, const char *filename) {
    std::string filename_str(filename);
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename_str) {
            assert(insert->get_line()->get() == line->get());
            return true;
        }
    }
    return false;
}


std::vector<size_t> *DesiredInsertions::get_groups(Line* line, int col,
        const char *filename) {
    std::string filename_str(filename);
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename_str) {
            assert(insert->get_line()->get() == line->get());
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

bool DesiredInsertions::findNextMatchingMemoryAllocation(Line *line,
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

        bool before = (curr.get_line()->get() < start_loc.getLine());
        bool after = (curr.get_line()->get() > end_loc.getLine());

        if (!before && !after) {
            result->push_back(curr);
        }
    }

    return result;
}

AliasesPassedToCallSite DesiredInsertions::findFirstMatchingCallsite(Line* line,
        std::string callee_name) {
    std::vector<AliasesPassedToCallSite>::iterator i = callsites->begin();
    std::vector<AliasesPassedToCallSite>::iterator e = callsites->end();
    while (i != e) {
        AliasesPassedToCallSite curr = *i;
        if (curr.get_line() == line) {
            assert(curr.get_line()->get() == line->get());

            if (curr.get_funcname().find(callee_name) != std::string::npos) {
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
        }
        i++;
    }

    if (i == e) {
        llvm::errs() << "Unable to find match for " << callee_name <<
            " on line " << line << "\n";
        assert(false);
    }

    AliasesPassedToCallSite result = *i;
    callsites->erase(i);
    return result;
}

FunctionArgumentAliasGroups DesiredInsertions::findMatchingFunction(
        std::string func) {
    for (std::vector<FunctionArgumentAliasGroups>::iterator i =
            functions->begin(), e = functions->end(); i != e; i++) {
        FunctionArgumentAliasGroups curr = *i;
        if (curr.get_funcname() == func) {
            return curr;
        }

        size_t template_index = curr.get_funcname().find('<');
        if (template_index != std::string::npos) {
            std::string without_template = curr.get_funcname().substr(0,
                    template_index);
            if (without_template == func) {
                return curr;
            }
        }
    }

    llvm::errs() << func << "\n";
    assert(false);
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

