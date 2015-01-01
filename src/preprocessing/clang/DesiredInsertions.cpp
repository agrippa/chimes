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

std::vector<StateChangeInsertion *> *DesiredInsertions::parseStateChangeInsertions() {
    llvm::errs() << "Initializing from " << lines_info_file << "\n";

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
