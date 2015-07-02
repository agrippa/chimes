#ifndef SET_OF_ALIASES_H
#define SET_OF_ALIASES_H

#include <set>
#include <stdio.h>

class set_of_aliases {
    public:
        set_of_aliases(unsigned set_capacity) {
            capacity = set_capacity;
            set = (unsigned char *)malloc(capacity * sizeof(unsigned char));
            memset(set, 0x00, capacity * sizeof(unsigned char));
        }

        ~set_of_aliases() {
            free(set);
        }

        void clear() {
            memset(set, 0x00, capacity * sizeof(unsigned char));
            explicit_aliases.clear();
        }

        void add_alias(size_t alias) {
            fprintf(stderr, "size=%lu\n", explicit_aliases.size());
            explicit_aliases.insert(alias);
        }

        void add_loc(unsigned id) {
            set[id] = 1;
        }

        // TODO Ugly to have these public
        unsigned char *set;
        unsigned capacity;
        std::set<size_t> explicit_aliases;
};
#endif
