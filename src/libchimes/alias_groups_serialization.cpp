#include "alias_groups_serialization.h"
#include <assert.h>
#include <string.h>

using namespace std;

void *serialize_alias_groups(set<vector<size_t> *> *aliased_groups_ptr,
        size_t *out_len) {
    unsigned n_aliased_groups = aliased_groups_ptr->size();
    size_t len = sizeof(n_aliased_groups);

    for (set<vector<size_t> *>::iterator i = aliased_groups_ptr->begin(),
            e = aliased_groups_ptr->end(); i != e; i++) {
        vector<size_t> *curr = *i;
        len += sizeof(unsigned); // curr_size
        len += curr->size() * sizeof(size_t);
    }

    void *buffer = malloc(len);
    unsigned char *iter = (unsigned char *)buffer;

    memcpy(iter, &n_aliased_groups, sizeof(n_aliased_groups));
    iter += sizeof(n_aliased_groups);

    for (set<vector<size_t> *>::iterator i = aliased_groups_ptr->begin(),
            e = aliased_groups_ptr->end(); i != e; i++) {
        vector<size_t> *curr = *i;

        unsigned curr_size = curr->size();
        memcpy(iter, &curr_size, sizeof(curr_size));
        iter += sizeof(curr_size);

        for (vector<size_t>::iterator ii = curr->begin(), ee = curr->end();
                ii != ee; ii++) {
            size_t group = *ii;
            memcpy(iter, &group, sizeof(group));
            iter += sizeof(group);
        }
    }

    assert((size_t)(iter - (unsigned char *)buffer) == len);
    *out_len = len;
    return (buffer);
}

void deserialize_alias_groups(void *buffer, size_t len,
        map<size_t, vector<size_t> *> *aliased_groups) {
    unsigned char *iter = (unsigned char *)buffer;

    unsigned n_aliased_groups;
    memcpy(&n_aliased_groups, iter, sizeof(n_aliased_groups));
    iter += sizeof(n_aliased_groups);

    for (unsigned i = 0; i < n_aliased_groups; i++) {
        std::vector<size_t> *groups = new std::vector<size_t>();

        unsigned size;
        memcpy(&size, iter, sizeof(size));
        iter += sizeof(size);

        for (unsigned ii = 0; ii < size; ii++) {
            size_t group;
            memcpy(&group, iter, sizeof(group));
            iter += sizeof(group);

            groups->push_back(group);

            assert(aliased_groups->find(group) == aliased_groups->end());
            aliased_groups->insert(pair<size_t, std::vector<size_t> *>(group,
                        groups));
        }
    }

    assert((size_t)(iter - (unsigned char *)buffer) == len);
}

