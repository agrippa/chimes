#ifndef STACK_VAR_H
#define STACK_VAR_H

#include <vector>
#include <string>

using namespace std;

class stack_var {
    private:
        string name;
        void *address;
        size_t size;
        int is_ptr;
        std::vector<int> ptr_offsets;

    public:
        stack_var(const char *set_name, void *set_address, size_t set_size,
                int set_is_ptr) : name(set_name), address(set_address),
                size(set_size), is_ptr(set_is_ptr) {
            assert(!is_ptr || size == sizeof(void *));
        }
        string get_name() { return name; }
        void *get_address() { return address; }
        size_t get_size() { return size; }
        int check_is_ptr() { return is_ptr; }
        std::vector<int> *get_ptr_offsets() { return &ptr_offsets; }

        void add_pointer_offset(int offset) {
            assert(!is_ptr);
            assert(std::find(ptr_offsets.begin(), ptr_offsets.end(), offset) ==
                    ptr_offsets.end());
            ptr_offsets.push_back(offset);
        }
};

#endif
