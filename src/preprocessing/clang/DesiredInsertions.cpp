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

std::vector<LabelInfo *> *DesiredInsertions::parseLabels() {
    std::vector<LabelInfo *> *labels = new std::vector<LabelInfo *>();

    std::ifstream fp;
    fp.open(labels_file, std::ios::in);

    std::string line;
    while (getline(fp, line)) {
       int line_no_end = line.find(' ');
       std::string line_no_str = line.substr(0, line_no_end);
       int line_no = atoi(line_no_str.c_str());
       line = line.substr(line_no_end + 1);

       int col_end = line.find(' ');
       std::string col_str = line.substr(0, col_end);
       int col = atoi(col_str.c_str());
       line = line.substr(col_end + 1);

       int fname_end = line.find(' ');
       std::string fname = line.substr(0, fname_end);
       line = line.substr(fname_end + 1);

       int lbl_end = line.find(' ');
       std::string lbl_str = line.substr(0, lbl_end);
       int lbl = atoi(lbl_str.c_str());
       line = line.substr(lbl_end + 1);

       int type_end = line.find(' ');
       std::string type_str = line.substr(0, type_end);
       enum LBL_TYPE type;
       if (type_str == "STACK_REGISTRATION") {
           type = STACK_REGISTRATION;
       } else if (type_str == "CALLSITE") {
           type = CALLSITE;
       } else {
           assert(false);
       }
       line = line.substr(type_end + 1);

       std::string filename = line;

       labels->push_back(new LabelInfo(line_no, col, lbl, type, filename,
                   fname));
    }

    return labels;
}

std::vector<HeapAlloc *> *DesiredInsertions::parseHeapAllocs() {
    std::vector<HeapAlloc *> *allocs = new std::vector<HeapAlloc *>();

    std::ifstream fp;
    fp.open(heap_file, std::ios::in);

    std::string line;
    while (getline(fp, line)) {
        int line_no_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_no_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_no_end + 1);

        int col_end = line.find(' ');
        std::string col_str = line.substr(0, col_end);
        int col = atoi(col_str.c_str());
        line = line.substr(col_end + 1);

        int group_end = line.find(' ');
        std::string group_str = line.substr(0, group_end);
        int group = atoi(group_str.c_str());
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
        HeapAlloc *alloc = new HeapAlloc(line_no, col, group, fname,
                have_type_info);

        if (have_type_info) {
            // have more type info

            int is_elem_ptr_end = line.find(' ');
            std::string is_elem_ptr_str = line.substr(0, is_elem_ptr_end);
            bool is_elem_ptr = (is_elem_ptr_str == "1" ? true : false);
            line = line.substr(is_elem_ptr_end + 1);

            int is_elem_struct_end = line.find(' ');
            std::string is_elem_struct_str = line.substr(0, is_elem_struct_end);
            bool is_elem_struct = (is_elem_struct_str == "1" ? true : false);
            line = line.substr(is_elem_struct_end + 1);

            alloc->add_type_info(is_elem_ptr, is_elem_struct);

            if (is_elem_struct) {
                int struct_type_name_end = line.find(' ');
                std::string struct_type_name = line.substr(0, struct_type_name_end);
                line = line.substr(struct_type_name_end + 1);

                std::vector<std::string> *struct_field_ptrs = new std::vector<std::string>();
                while (1) {
                    int end = line.find(' ');
                    if (end == std::string::npos) {
                        end = line.size();
                    }
                    std::string fieldname = line.substr(0, end);
                    struct_field_ptrs->push_back(fieldname);

                    if (end == line.size()) break;
                    line = line.substr(end + 1);
                }

                alloc->add_struct_type_info(struct_type_name, struct_field_ptrs);
            }
        }

        allocs->push_back(alloc);
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

std::vector<Declaration *> *DesiredInsertions::parseDeclarations() {
    std::ifstream fp;
    fp.open(decl_file, std::ios::in);

    std::vector<Declaration *> *declarations = new std::vector<Declaration *>();

    std::string line;
    while (getline(fp, line)) {
        int line_no_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_no_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_no_end + 1);

        int col_end = line.find(' ');
        std::string col_str = line.substr(0, col_end);
        int col = atoi(col_str.c_str());
        line = line.substr(col_end + 1);

        int varname_end = line.find(' ');
        std::string varname = line.substr(0, varname_end);

        Declaration *d = new Declaration(line_no, col, varname);
        declarations->push_back(d);
    }

    return declarations;
}

std::vector<int> *DesiredInsertions::parseFunctionExits() {
    std::vector<int> *result = new std::vector<int>();
    std::ifstream fp;
    fp.open(function_exits_file, std::ios::in);

    std::string line;
    while (getline(fp, line)) {
        int line_no = atoi(line.c_str());
        result->push_back(line_no);
    }
    return result;
}

std::vector<StructFields *> *DesiredInsertions::parseStructs() {
    std::ifstream fp;
    fp.open(func_start_info_file, std::ios::in);
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

std::vector<FunctionStartInsertion *> *DesiredInsertions::parseFunctionStartInsertions(int *main_line) {
    std::ifstream fp;
    fp.open(func_start_info_file, std::ios::in);

    std::vector<FunctionStartInsertion *> *result =
        new std::vector<FunctionStartInsertion *>();
    *main_line = -1;

    std::string line;
    while (getline(fp, line)) {
        // /scratch/jmg3/num-debug/src/preprocessing/../examples/cpp/simple_stencil.cpp 6 main
        int filename_end = line.find(' ');
        std::string filename = line.substr(0, filename_end);
        line = line.substr(filename_end + 1);

        int line_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_end + 1);
        
        std::string function_name = line;

        FunctionStartInsertion *insert =
            new FunctionStartInsertion(filename, function_name, line_no);
        result->push_back(insert);

        if (function_name == "main") {
            assert(*main_line == -1);
            *main_line = line_no;
        }
    }

    return result;
}

std::vector<StateChangeInsertion *> *DesiredInsertions::parseStateChangeInsertions() {
    std::ifstream fp;
    fp.open(lines_info_file, std::ios::in);

    std::vector<StateChangeInsertion *> *result =
        new std::vector<StateChangeInsertion *>();

    std::string line;
    while (getline(fp, line)) {
        // test.cpp:25:9 : { 2, 3, 4, 5, 6 }
        int filename_end = line.find(':');
        std::string filename = line.substr(0, filename_end);
        line = line.substr(filename_end + 1);

        int line_no_end = line.find(':');
        std::string line_no_str = line.substr(0, line_no_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_no_end + 1);

        int col_end = line.find(' ');
        std::string col_str = line.substr(0, col_end);
        int col = atoi(col_str.c_str());
        line = line.substr(col_end + 5);

        std::vector<int> *groups = new std::vector<int>();
        while (1) {
            int group_end = find_group_end(&line);
            std::string group_str = line.substr(0, group_end);
            int group = atoi(group_str.c_str());
            groups->push_back(group);

            int next_start = group_end + 2;
            if (next_start >= line.length()) break;
            else line = line.substr(group_end + 2);
        }

        StateChangeInsertion *change = new StateChangeInsertion(filename,
                line_no, col, groups);
        result->push_back(change);
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


std::vector<int> *DesiredInsertions::get_groups(int line, int col,
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

FunctionStartInsertion *DesiredInsertions::is_function_start(int line) {
    for (std::vector<FunctionStartInsertion *>::iterator i =
            function_starts->begin(), e = function_starts->end(); i != e; i++) {
        FunctionStartInsertion *s = *i;
        if (s->get_line() == line) return s;
    }
    return NULL;
}


bool DesiredInsertions::is_function_exit(int line) {
    for (std::vector<int>::iterator i = function_exits->begin(),
            e = function_exits->end(); i != e; i++) {
        int line_no = *i;
        if (line_no == line) return true;
    }
    return false;
}


StackAlloc *DesiredInsertions::findStackAlloc(std::string mangled_name) {
    std::map<std::string, StackAlloc *>::iterator iter =
        stack_allocs->find(mangled_name);
    if (iter == stack_allocs->end()) return NULL;

    return iter->second;
}

HeapAlloc *DesiredInsertions::isMemoryAllocation(int line, int col) {
    for(std::vector<HeapAlloc *>::iterator i = heap_allocs->begin(),
            e = heap_allocs->end(); i != e; i++) {
        HeapAlloc *alloc = *i;
        if (alloc->get_line_no() == line && alloc->get_col() == col) {
            return alloc;
        }
    }
    return NULL;
}

int DesiredInsertions::getLabelAssignedFor(int line, int col) {
    for (std::vector<LabelInfo *>::iterator i = labels->begin(),
            e = labels->end(); i != e; i++) {
        LabelInfo *info = *i;
        if (info->get_line_no() == line && info->get_col() == col) {
            return info->get_lbl();
        }
    }
    llvm::errs() << "missing " << line << " " << col << "\n";
    assert(false);
}

LabelInfo *DesiredInsertions::isLabeledLoc(int line, int col) {
    for (std::vector<LabelInfo *>::iterator i = labels->begin(),
            e = labels->end(); i != e; i++) {
        LabelInfo *info = *i;
        if (info->get_line_no() == line && info->get_col() == col) {
            return info;
        }
    }
    return NULL;
}
