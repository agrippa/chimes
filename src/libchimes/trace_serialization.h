#ifndef TRACE_SERIALIZATION_H
#define TRACE_SERIALIZATION_H

#include <vector>
#include <map>
#include <stdlib.h>

extern void *serialize_traces(
        std::map<unsigned, std::vector<int> *> *thread_traces, size_t *out_len);
extern std::map<unsigned, std::vector<int> >* deserialize_traces(void *buffer,
        size_t len, std::map<unsigned, unsigned> *trace_indices);

#endif
