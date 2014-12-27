#ifndef STACK_FRAME_H
#define STACK_FRAME_H

#include <map>
#include "stack_var.h"

using namespace std;

class stack_frame {
    private:
        map<string, stack_var *> locals;
    public:
        stack_frame() { }
        void add_stack_var(stack_var *var);
        map<string, stack_var *> get_locals() { return locals; }
};

#endif
