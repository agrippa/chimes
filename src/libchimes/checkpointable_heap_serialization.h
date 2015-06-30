#ifndef CHECKPOINTABLE_HEAP_SERIALIZATION_H
#define CHECKPOINTABLE_HEAP_SERIALIZATION_H

#include <stdlib.h>
#include <vector>
#include "checkpointable_heap_allocation.h"

class serialized_heap_var {
    public:
        serialized_heap_var(void *set_serialized, size_t set_serialized_len,
                size_t set_buffer_len) : serialized(set_serialized),
                serialized_len(set_serialized_len), buffer_len(set_buffer_len) {
        }

        void *get_serialized() { return serialized; }
        size_t get_serialized_len() { return serialized_len; }
        size_t get_buffer_len() { return buffer_len; }

    private:
        void *serialized;
        size_t serialized_len;
        size_t buffer_len;
};

extern std::vector<serialized_heap_var> *serialize_checkpointable_heap(
        std::vector<checkpointable_heap_allocation> *to_checkpoint);


extern void *serialize_heap_allocation(heap_allocation *alloc,
        vector<pair<size_t, size_t> > *ranges, void *buffer, size_t *used,
        size_t *capacity);
extern void *serialize_heap_allocation(heap_allocation *alloc, void *buffer,
        size_t *used, size_t *capacity);

#endif
