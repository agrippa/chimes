#include "llvm/Support/raw_ostream.h"

#include "DesiredInsertions.h"

#include <iostream>
#include <fstream>

static int find_group_end(std::string *s) {
    int find = s->find(',');
    if (find != std::string::npos) return find;
    find = s->find(' ');
    if (find != std::string::npos) return find;
    return -1;
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
        // 13 main
        int line_end = line.find(' ');
        std::string line_no_str = line.substr(0, line_end);
        int line_no = atoi(line_no_str.c_str());
        line = line.substr(line_end + 1);

        FunctionStartInsertion *insert =
            new FunctionStartInsertion(line, line_no);
        result->push_back(insert);

        if (line == "main") {
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

bool DesiredInsertions::contains(int line, int col, std::string &filename) {
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename) {
            return true;
        }
    }
    return false;
}


std::vector<int> *DesiredInsertions::get_groups(int line, int col,
        std::string &filename) {
    for (std::vector<StateChangeInsertion *>::iterator i =
            state_change_insertions->begin(), e =
            state_change_insertions->end(); i != e; i++) {
        StateChangeInsertion *insert = *i;
        if (insert->get_line() == line && insert->get_col() == col &&
                insert->get_filename() == filename) {
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
