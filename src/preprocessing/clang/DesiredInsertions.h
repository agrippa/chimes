#ifndef DESIRED_INSERTIONS_H
#define DESIRED_INSERTIONS_H

#include <vector>
#include <string>

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
    MatchedLocation(int set_line, int set_col, std::string set_filename) :
        line(set_line), col(set_col), filename(set_filename) {}
    int get_line() { return line; }
    int get_col() { return col; }
    std::string get_filename() { return filename; }

private:
    int line, col;
    std::string filename;
};

class FunctionStartInsertion {
public:
    FunctionStartInsertion(std::string set_func, int set_line) : func(set_func),
            line_no(set_line) {}
    std::string get_func() { return func; }
    int get_line() { return line_no; }

private:
    std::string func;
    int line_no;
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
            const char *func_start_info_filename, const char *struct_info_filename) :
            lines_info_file(lines_info_filename),
            func_start_info_file(func_start_info_filename),
            struct_info_file(struct_info_filename) {
        state_change_insertions = parseStateChangeInsertions();
        function_starts = parseFunctionStartInsertions(&main_line);
        struct_fields = parseStructs();
    }
    bool contains(int line, int col, std::string &filename);
    std::vector<int> *get_groups(int line, int col, std::string &filename);
    int get_main_line() { return main_line; }
    std::vector<StructFields *> *get_struct_fields() { return struct_fields; }

    FunctionStartInsertion *is_function_start(int line);

private:
        std::string lines_info_file, func_start_info_file, struct_info_file;
        std::vector<StateChangeInsertion *> *state_change_insertions;
        std::vector<FunctionStartInsertion *> *function_starts;
        int main_line;
        std::vector<StructFields *> *struct_fields;

        std::vector<StateChangeInsertion *> *parseStateChangeInsertions();
        std::vector<FunctionStartInsertion *> *parseFunctionStartInsertions(
                int *main_line);
        std::vector<StructFields *> *parseStructs();
};

#endif
