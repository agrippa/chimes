#include "numdebug_stack.h"

void numdebug_stack::ensure_capacity(int target) {
    if (capacity >= target) {
        return;
    }

    int new_capacity = 2 * capacity;
    while (new_capacity < target) {
        new_capacity = 2 * new_capacity;
    }

    stack = (int *)realloc(stack, new_capacity * sizeof(int));
    capacity = new_capacity;
}

void numdebug_stack::push(int e) {
    ensure_capacity(len + 1);

    stack[len++] = e;
}

int numdebug_stack::pop() {
    int val = stack[len - 1];
    len--;
    return val;
}

void numdebug_stack::copy(std::vector<int> *dst) {
    for (int i = 0; i < len; i++) {
        dst->push_back(stack[i]);
    }
}
