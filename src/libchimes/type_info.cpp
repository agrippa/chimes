#include <cstdarg>
#include <stdlib.h>
#include "type_info.h"

void parse_type_info(va_list vl, chimes_type_info *info) {
    info->elem_size = va_arg(vl, int);
    info->n_ptr_fields = va_arg(vl, int);
    info->ptr_field_offsets = (int *)malloc(sizeof(int) *
            info->n_ptr_fields);
    for (int i = 0; i < info->n_ptr_fields; i++) {
        (info->ptr_field_offsets)[i] = va_arg(vl, int);
    }
}
