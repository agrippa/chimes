#ifndef SET_OF_ALIASES_H
#define SET_OF_ALIASES_H

#define INIT_SET_SIZE 1024

class set_of_aliases {
    public:
        set_of_aliases() {
            set = (size_t **)malloc(INIT_SET_SIZE * sizeof(size_t *));
            capacity = (size_t *)malloc(INIT_SET_SIZE * sizeof(size_t));
            for (int i = 0; i < INIT_SET_SIZE; i++) {
                set[i] = (size_t *)malloc(INIT_SET_SIZE * sizeof(size_t));
                capacity[i] = INIT_SET_SIZE;
            }

            len = (size_t *)malloc(INIT_SET_SIZE * sizeof(size_t));
            memset(len, 0x00, INIT_SET_SIZE * sizeof(size_t));
            count = 0;
        }

        ~set_of_aliases() {
            for (int i = 0; i < INIT_SET_SIZE; i++) {
                free(set[i]);
            }
            free(set); free(len); free(capacity);
        }

        void clear() {
            memset(len, 0x00, INIT_SET_SIZE * sizeof(size_t));
            count = 0;
        }

        size_t size() {
            return count;
        }

        void add(size_t alias) {
            const size_t hash = alias % INIT_SET_SIZE;
            size_t *inner_set = set[hash];
            const size_t inner_len = len[hash];

            for (size_t i = 0; i < inner_len; i++) {
                if (inner_set[i] == alias) return;
            }

            if (inner_len == capacity[hash]) {
                capacity[hash] += INIT_SET_SIZE;
                set[hash] = (size_t *)realloc(inner_set, capacity[hash] * sizeof(size_t));
            }
            set[hash][len[hash]++] = alias;
        }

        // TODO Ugly to have these public
        size_t **set;
        size_t *capacity;
        size_t *len;
        size_t count;
};
#endif
