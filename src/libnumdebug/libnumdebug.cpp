#include <map>
#include <string>
#include <stack>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class stack_var {
    private:
        string name;
        void *address;
        size_t size;

    public:
        stack_var(const char *set_name, void *set_address, size_t set_size) :
            name(set_name), address(set_address), size(set_size) { }
        string get_name() { return name; }
        void *get_address() { return address; }
};

class stack_frame {
    private:
        map<string, stack_var *> locals;
    public:
        stack_frame() { }
        void add_stack_var(stack_var *var);
        map<string, stack_var *> get_locals() { return locals; }
};

void stack_frame::add_stack_var(stack_var *var) {
    if (locals.find(var->get_name()) != locals.end()) {
        assert(locals[var->get_name()]->get_address() == var->get_address());
    } else {
        locals[var->get_name()] = var;
    }
}

stack<stack_frame *> program_stack;

void new_stack() {
    program_stack.push(new stack_frame());
}

void rm_stack() {
    stack_frame *curr = program_stack.top();
    program_stack.pop();

    for (map<string, stack_var *>::iterator locals_iter =
            curr->get_locals().begin(), locals_end = curr->get_locals().end();
            locals_iter != locals_end; locals_iter++) {
        delete locals_iter->second;
    }

    delete curr;
}

void register_stack_var(const char *mangled_name, void *ptr, size_t size) {
    program_stack.top()->add_stack_var(new stack_var(mangled_name, ptr, size));
}

void alias_group_changed(int group) {
}

void *malloc_wrapper(size_t nbytes, int group) {
    return NULL;
}

void *realloc_wrapper(void *ptr, size_t nbytes, int group) {
    return NULL;
}

void free_wrapper(void *ptr, int group) {
}
