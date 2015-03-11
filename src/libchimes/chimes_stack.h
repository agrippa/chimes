#ifndef STACK_H
#define STACK_H

#include <string>
#include <sstream>
#include <vector>

#include <stdlib.h>
#include <assert.h>

class chimes_stack {
    private:
        int *stack;
        int capacity;
        int len;

        void ensure_capacity(int len);
    public:
        chimes_stack() {
            stack = (int *)malloc(1024 * sizeof(int));
            capacity = 1024;
            len = 0;
        }

        void push(int e);
        int pop();
        void copy(std::vector<int> *dst);
        int size() { return len; }
        int at(int index) { assert(index < len); return stack[index]; }
        std::string str();
};

#endif
