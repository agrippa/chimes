#include "CollapsedLines.h"

CollapsedLines::CollapsedLines(int set_start, int set_end) : start(set_start),
    end(set_end) {
}

int CollapsedLines::get_start() { return start; }
int CollapsedLines::get_end() { return end; }

void CollapsedLines::update_start(int set_start) { start = set_start; }
void CollapsedLines::update_end(int set_end) { end = set_end; }
