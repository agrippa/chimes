#include <map>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "thread_ctx.h"

using namespace std;

unsigned char *serialize_thread_hierarchy(
        map<unsigned, thread_ctx *> *thread_ctxs,
        uint64_t *out_len) {
    /*
     * See comment at top of serialize_program_stacks in stack_serialization.cpp.
     */
    unsigned nthreads = 0;
    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs->begin(),
            e = thread_ctxs->end(); i != e; i++) {
        if (i->second->get_stack()->size() > 0) {
            nthreads++;
        }
    }

    uint64_t len = nthreads * 3 * sizeof(unsigned);
    unsigned char *serialized = (unsigned char *)malloc(len);
    assert(serialized);

    unsigned char *iter = serialized;
    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs->begin(),
            e = thread_ctxs->end(); i != e; i++) {
        unsigned thread = i->first;
        thread_ctx *ctx = i->second;

        if (ctx->get_stack()->size() == 0) continue;

        if (!ctx->has_parent()) {
            /*
             * The main thread may not have a parent if this is a
             * single-threaded program (or if we are not checkpointing inside a
             * parallel region). However, it may have a parent because pthreads
             * are re-used by OMP for nested parallel regions.
             */
            assert(thread == 0);
            nthreads--;
        } else {
            unsigned parent = ctx->get_parent();
            unsigned relation = ctx->get_relation_to_parent();

            memcpy(iter, &thread, sizeof(thread));
            iter += sizeof(thread);

            memcpy(iter, &parent, sizeof(parent));
            iter += sizeof(parent);

            memcpy(iter, &relation, sizeof(relation));
            iter += sizeof(parent);
        }
    }

    len = nthreads * 3 * sizeof(unsigned);
    assert(iter == serialized + len);
    serialized = (unsigned char *)realloc(serialized, len);
    assert(serialized || len == 0);

    *out_len = len;
    return serialized;
}

map<unsigned, pair<unsigned, unsigned> > *deserialize_thread_hierarchy(
        unsigned char *serialized, uint64_t len) {
    map<unsigned, pair<unsigned, unsigned> > *result =
        new map<unsigned, pair<unsigned, unsigned> >();
    unsigned nthreads = len / (3 * sizeof(unsigned));
    unsigned char *iter = serialized;

    for (unsigned i = 0; i < nthreads; i++) {
        unsigned thread, parent, relation;

        memcpy(&thread, iter, sizeof(thread));
        iter += sizeof(thread);

        memcpy(&parent, iter, sizeof(parent));
        iter += sizeof(parent);

        memcpy(&relation, iter, sizeof(relation));
        iter += sizeof(relation);

        assert(result->find(thread) == result->end());
        (*result)[thread] = pair<unsigned, unsigned>(parent, relation);
    }
    assert(iter == serialized + len);

    return result;
}
