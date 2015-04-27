#ifndef HASH_CHUNKER_H
#define HASH_CHUNKER_H

#include <stdlib.h>

class hash_chunker {
    public:
        virtual unsigned get_n_chunks(size_t len) = 0;
        virtual size_t get_chunk_start(unsigned chunk, unsigned nchunks,
                size_t len) = 0;
        virtual size_t get_chunk_end(unsigned chunk, unsigned nchunks,
                size_t len) = 0;
        virtual size_t get_chunk_len(unsigned chunk, unsigned nchunks,
                size_t len) = 0;
};

class fixed_chunk_size_chunker : public hash_chunker {
    public:
        fixed_chunk_size_chunker(size_t set_chunk_size);

        unsigned get_n_chunks(size_t len);
        size_t get_chunk_start(unsigned chunk, unsigned nchunks, size_t len);
        size_t get_chunk_end(unsigned chunk, unsigned nchunks, size_t len);
        size_t get_chunk_len(unsigned chunk, unsigned nchunks, size_t len);
    private:
        size_t chunk_size;
};

class fixed_num_chunks_chunker : public hash_chunker {
    public:
        fixed_num_chunks_chunker(size_t set_num_chunks);

        unsigned get_n_chunks(size_t len);
        size_t get_chunk_start(unsigned chunk, unsigned nchunks, size_t len);
        size_t get_chunk_end(unsigned chunk, unsigned nchunks, size_t len);
        size_t get_chunk_len(unsigned chunk, unsigned nchunks, size_t len);
    private:
        size_t get_chunk_size(unsigned nchunks, size_t len);
        size_t num_chunks;
};

#endif
