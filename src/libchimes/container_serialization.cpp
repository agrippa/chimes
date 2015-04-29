#include "container_serialization.h"
#include <assert.h>
#include <string.h>

using namespace std;

void *serialize_containers(map<size_t, size_t> *contains,
        size_t *out_len) {
    size_t len = sizeof(unsigned) + (contains->size() * 2 * sizeof(size_t));
    void *buffer = malloc(len);
    unsigned char *iter = (unsigned char *)buffer;

    unsigned n_contains_mappings = contains->size();
    memcpy(iter, &n_contains_mappings, sizeof(n_contains_mappings));
    iter += sizeof(n_contains_mappings);

    // Dump container information to be loaded with the checkpoint
    for (map<size_t, size_t>::iterator i = contains->begin(), e = contains->end();
            i != e; i++) {
        size_t container = i->first;
        memcpy(iter, &container, sizeof(container));
        iter += sizeof(container);

        size_t child = i->second;
        memcpy(iter, &child, sizeof(child));
        iter += sizeof(child);
    }
    assert((size_t)(iter - (unsigned char *)buffer) == len);

    *out_len = len;
    return (buffer);
}

void deserialize_containers(void *buffer, size_t len,
        map<size_t, size_t> *contains) {
    unsigned char *iter = (unsigned char *)buffer;

    unsigned n_contains_mappings;
    memcpy(&n_contains_mappings, iter, sizeof(n_contains_mappings));
    iter += sizeof(n_contains_mappings);

    for (unsigned i = 0; i < n_contains_mappings; i++) {
        size_t container;
        memcpy(&container, iter, sizeof(container));
        iter += sizeof(container);

        size_t child;
        memcpy(&child, iter, sizeof(child));
        iter += sizeof(child);
        assert(contains->find(container) == contains->end());
        contains->insert(pair<size_t, size_t>(container, child));
    }

    assert((size_t)(iter - (unsigned char *)buffer) == len);
}
