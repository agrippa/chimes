#ifndef LIBNUMDEBUG_CUDA_H
#define LIBNUMDEBUG_CUDA_H

#include <map>
#include <vector>
#include "ptr_and_size.h"

extern void translate_cuda_pointers(void *d_arr, int nelems, int elem_size,
        std::vector<int> ptr_offsets,
        std::map<void *, ptr_and_size *> *old_to_new);

#endif
