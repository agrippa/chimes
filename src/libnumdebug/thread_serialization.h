#ifndef THREAD_SERIALIZATION_H
#define THREAD_SERIALIZATION_H

#include <map>

extern unsigned char *serialize_thread_hierarchy(
        map<unsigned, pair<unsigned, unsigned> > *child_to_parent_threads,
        uint64_t *out_len);
extern map<unsigned, pair<unsigned, unsigned> > *deserialize_thread_hierarchy(
        unsigned char *serialized, uint64_t len);

#endif
