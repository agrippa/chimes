#ifndef THREAD_SERIALIZATION_H
#define THREAD_SERIALIZATION_H

#include <map>
#include "thread_ctx.h"

extern unsigned char *serialize_thread_hierarchy(
        map<unsigned, thread_ctx *> *thread_ctxs,
        uint64_t *out_len);
extern map<unsigned, pair<unsigned, unsigned> > *deserialize_thread_hierarchy(
        unsigned char *serialized, uint64_t len);

#endif
