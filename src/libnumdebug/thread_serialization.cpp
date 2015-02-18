#include <map>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

using namespace std;

unsigned char *serialize_thread_hierarchy(
        map<unsigned, pair<unsigned, unsigned> > *child_to_parent_threads,
        uint64_t *out_len) {
    unsigned int nthreads = child_to_parent_threads->size();
    uint64_t len = nthreads * 3 * sizeof(unsigned);
    unsigned char *serialized = (unsigned char *)malloc(len);

    unsigned char *iter = serialized;
    for (map<unsigned, pair<unsigned, unsigned> >::iterator i =
            child_to_parent_threads->begin(), e =
            child_to_parent_threads->end(); i != e; i++) {
        unsigned thread = i->first;
        pair<unsigned, unsigned> info = i->second;
        unsigned parent = info.first;
        unsigned relation = info.second;

        memcpy(iter, &thread, sizeof(thread));
        iter += sizeof(thread);

        memcpy(iter, &parent, sizeof(parent));
        iter += sizeof(parent);

        memcpy(iter, &relation, sizeof(relation));
        iter += sizeof(parent);
    }

    assert(iter == serialized + len);

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
