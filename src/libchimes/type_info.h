#ifndef TYPE_INFO_H
#define TYPE_INFO_H

#include <cstdarg>

typedef struct _chimes_type_info {
    int elem_size, n_ptr_fields;
    int *ptr_field_offsets;
} chimes_type_info;

extern void parse_type_info(va_list *vl, chimes_type_info *info);

#endif
