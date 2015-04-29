#ifndef CONTAINER_SERIALIZATION_H
#define CONTAINER_SERIALIZATION_H

#include <stdlib.h>
#include <map>

extern void *serialize_containers(std::map<size_t, size_t> *contains,
        size_t *out_len);
extern void deserialize_containers(void *buffer, size_t len,
        std::map<size_t, size_t> *contains);

#endif
