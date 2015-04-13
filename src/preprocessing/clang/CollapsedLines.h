#ifndef COLLAPSED_LINES_H
#define COLLAPSED_LINES_H

class CollapsedLines {
    public:
        CollapsedLines(int set_start, int set_end);

        int get_start();
        int get_end();

        void update_start(int set_start);
        void update_end(int set_end);

    private:
        int start;
        int end;
};

#endif
