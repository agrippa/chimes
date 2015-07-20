#ifndef STRUCT_FIELD_H
#define STRUCT_FIELD_H

class struct_field {
    public:
        struct_field(int set_offset, std::string set_ty) : offset(set_offset),
                ty(set_ty) { }

        int get_offset() { return offset; }
        std::string get_ty() { return ty; }

    private:
        int offset;
        std::string ty;
};

class struct_info {
    public:
        struct_info(size_t set_size_in_bits) : size_in_bits(set_size_in_bits) { }
        size_t get_size_in_bits() { return size_in_bits; }
        unsigned size() { return fields.size(); }
        void add_field(int offset, std::string ty_str) {
            fields.push_back(struct_field(offset, ty_str));
        }
        struct_field at(int index) { return fields.at(index); }

    private:
        size_t size_in_bits;
        std::vector<struct_field> fields;
};

#endif
