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

#endif
