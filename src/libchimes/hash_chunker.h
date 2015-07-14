#ifndef HASH_CHUNKER_H
#define HASH_CHUNKER_H

#include <stdlib.h>

#define CHIMES_CHUNK_SIZE (16UL * 1024UL * 1024UL)
#define CHIMES_N_CHUNKS(my_len) \
    (((my_len) + CHIMES_CHUNK_SIZE - 1) / CHIMES_CHUNK_SIZE)
#define CHIMES_CHUNK_START(my_chunk) \
    ((my_chunk) * CHIMES_CHUNK_SIZE)
#define CHIMES_CHUNK_END(my_chunk, my_len) \
    ((((my_chunk) + 1) * CHIMES_CHUNK_SIZE) < (my_len) ? \
     (((my_chunk) + 1) * CHIMES_CHUNK_SIZE) : (my_len))
#define CHIMES_CHUNK_LEN(my_chunk, my_len) \
    (CHIMES_CHUNK_END(my_chunk, my_len) - CHIMES_CHUNK_START(my_chunk))

#endif
