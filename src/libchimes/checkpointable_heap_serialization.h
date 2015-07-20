#ifndef CHECKPOINTABLE_HEAP_SERIALIZATION_H
#define CHECKPOINTABLE_HEAP_SERIALIZATION_H

#include <stdlib.h>
#include <vector>
#include "heap_serialization_wrapper.h"

extern void serialize_heap_allocation(heap_allocation *alloc,
        heap_serialization_wrapper *buffer);
extern void serialize_heap_allocation(heap_allocation *alloc,
        vector<pair<size_t, size_t> > *ranges,
        heap_serialization_wrapper *buffer);

#endif
