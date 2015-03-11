#ifndef STACK_VAR_H
#define STACK_VAR_H

#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class stack_var {
    private:
        string name;
        string type;
        void *address;
        size_t size;
        int is_ptr;
        std::vector<int> ptr_offsets;
        void *tmp_buffer;

    public:
        stack_var(const char *set_name, const char *set_type, void *set_address,
                size_t set_size, int set_is_ptr) : name(set_name),
                type(set_type), address(set_address), size(set_size),
                is_ptr(set_is_ptr), tmp_buffer(NULL) {
            assert(!is_ptr || size == sizeof(void *));
        }
        string get_name() { return name; }
        string get_type() { return type; }
        void *get_address() { return address; }
        size_t get_size() { return size; }
        int check_is_ptr() { return is_ptr; }
        std::vector<int> *get_ptr_offsets() { return &ptr_offsets; }

        void *get_tmp_buffer() { return tmp_buffer; }
        void set_tmp_buffer(void *set_tmp_buffer) {
            assert(tmp_buffer == NULL);
            tmp_buffer = set_tmp_buffer;
        }
        void clear_tmp_buffer() {
            free(tmp_buffer);
            tmp_buffer = NULL;
        }

        void add_pointer_offset(int offset) {
            assert(!is_ptr);
            assert(std::find(ptr_offsets.begin(), ptr_offsets.end(), offset) ==
                    ptr_offsets.end());
            ptr_offsets.push_back(offset);
        }
};

#endif
