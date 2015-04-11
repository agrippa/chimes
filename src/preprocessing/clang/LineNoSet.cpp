#include "LineNoSet.h"

Line::Line(int set_line) {
    line = set_line;
}

int Line::get() {
    return line;
}

void Line::update(int set_line) {
    line = set_line;
}

Line *LineNoSet::get(int line) {
    if (line_mapping.find(line) == line_mapping.end()) {
        line_mapping[line] = new Line(line);
    }
    return line_mapping[line];
}

bool line_ptr_comparator(Line *a, Line *b) {
    return (a->get() < b->get());
}

