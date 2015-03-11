#ifndef STACK_FRAME_H
#define STACK_FRAME_H

#include <string>
#include <map>
#include <stdint.h>
#include "stack_var.h"

using namespace std;

class stack_frame {
    private:
        map<string, stack_var *> locals;
    public:
        stack_frame() { }
        ~stack_frame() {
            for (map<string, stack_var *>::iterator i = locals.begin(),
                    e = locals.end(); i != e; i++) {
                stack_var *var = i->second;
                delete var;
            }
        }

        void add_stack_var(stack_var *var);
        bool stack_var_exists(std::string name, void *address);

        typedef map<string, stack_var *>::iterator iterator;
        typedef map<string, stack_var *>::const_iterator const_iterator;

        iterator begin() { return locals.begin(); }
        const_iterator begin() const { return locals.begin(); }
        iterator end() { return locals.end(); }
        const_iterator end() const { return locals.end(); }

        iterator find(string s) { return locals.find(s); }

        int size() { return locals.size(); }

        string str();
};

#endif
