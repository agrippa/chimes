#ifndef ALREADY_UPDATED_PTRS_H
#define ALREADY_UPDATED_PTRS_H

class already_updated_ptrs {
    private:
        unsigned char *base_ptr;
        size_t incr;
        size_t count;

    public:
        already_updated_ptrs(unsigned char *set_ptr, size_t set_incr,
                size_t set_count) : base_ptr(set_ptr), incr(set_incr),
                count(set_count) { }
        /*
         * Check if the provided pointer is one covered by the equation
         * base_ptr + (x * incr) where x is less than count
         */
        bool satisfies(void *ptr) {
            unsigned char *c_ptr = (unsigned char *)ptr;
            size_t diff_in_bytes = c_ptr - base_ptr;
            if (diff_in_bytes % incr != 0) return false;

            size_t diff_in_elems = diff_in_bytes / incr;
            if (diff_in_elems >= count) return false;

            return true;
        }
};

#endif
