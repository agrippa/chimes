#ifndef LINE_NO_SET_H
#define LINE_NO_SET_H

#include <map>

class Line {
    public:
        Line(int set_line);
        int get();
        void update(int set_line);

    private:
        int line;
};

class LineNoSet {
    public:
        Line *get(int line);

    private:
        std::map<int, Line *> line_mapping;
};

extern bool line_ptr_comparator(Line *a, Line *b);

#endif
