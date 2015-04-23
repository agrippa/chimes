#ifndef CONSTANT_VAR_H
#define CONSTANT_VAR_H

class constant_var {
    public:
        constant_var(size_t set_id, void *set_address,
            size_t set_length) : id(set_id), address(set_address),
            length(set_length) { }

        size_t get_id() { return id; }
        void *get_address() { return address; }
        size_t get_length() { return length; }

    private:
        size_t id;
        void *address;
        size_t length;
};

#endif
