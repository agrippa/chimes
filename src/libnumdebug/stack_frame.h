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

        typedef map<string, stack_var *>::iterator iterator;
        typedef map<string, stack_var *>::const_iterator const_iterator;

        iterator begin() { return locals.begin(); }
        const_iterator begin() const { return locals.begin(); }
        iterator end() { return locals.end(); }
        const_iterator end() const { return locals.end(); }

        int size() { return locals.size(); }
};

#endif
