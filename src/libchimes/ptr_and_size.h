#ifndef PTR_AND_SIZE_H
#define PTR_AND_SIZE_H

class ptr_and_size {
    private:
        void *ptr;
        size_t size;

    public:
        ptr_and_size(void *set_ptr, size_t set_size) : ptr(set_ptr),
                size(set_size) { }
        void *get_ptr() { return ptr; }
        size_t get_size() { return size; }
        void update_size(size_t s) { size = (s > size ? s : size); }
};

#endif
