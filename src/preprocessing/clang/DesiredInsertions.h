#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <vector>
#include <string>

class MatchedLocation {
public:
    MatchedLocation(int set_line, int set_col, std::string set_filename) :
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

private:
    std::string filename;
    int line_no;
    int col;
    std::vector<int> *groups;
};

class DesiredInsertions {
public:
    DesiredInsertions(const char *lines_info_filename) :
            lines_info_file(lines_info_filename) {
        state_change_insertions = parseStateChangeInsertions();
    }
    bool contains(int line, int col, std::string &filename);

private:
        std::string lines_info_file;
        std::vector<StateChangeInsertion *> *state_change_insertions;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
};

#endif
