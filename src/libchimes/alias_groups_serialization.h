#ifndef ALIAS_GROUPS_SERIALIZATION_H
#define ALIAS_GROUPS_SERIALIZATION_H

#include <stdlib.h>
#include <vector>
#include <set>
#include <map>

extern void *serialize_alias_groups(
        std::map<size_t, std::vector<size_t> *> *aliased_groups,
        size_t *out_len);
extern void deserialize_alias_groups(void *buffer, size_t len,
        std::map<size_t, std::vector<size_t> *> *alias_groups);

#endif
