#ifndef STACK_VAR_H
#define STACK_VAR_H

#include <string>

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
        size_t get_size() { return size; }
};

#endif
