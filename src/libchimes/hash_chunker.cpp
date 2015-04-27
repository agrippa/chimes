#include "hash_chunker.h"

fixed_chunk_size_chunker::fixed_chunk_size_chunker(size_t set_chunk_size) :
        chunk_size(set_chunk_size) {
}

unsigned fixed_chunk_size_chunker::get_n_chunks(size_t len) {
    return ((len + chunk_size - 1) / chunk_size);
}

size_t fixed_chunk_size_chunker::get_chunk_start(unsigned chunk,
        unsigned nchunks, size_t len) {
    return (chunk * chunk_size);
}

size_t fixed_chunk_size_chunker::get_chunk_end(unsigned chunk,
        unsigned nchunks, size_t len) {
    size_t end = ((chunk + 1) * chunk_size);
    return (end < len ? end : len);
}

size_t fixed_chunk_size_chunker::get_chunk_len(unsigned chunk,
        unsigned nchunks, size_t len) {
    return (get_chunk_end(chunk, nchunks, len) -
            get_chunk_start(chunk, nchunks, len));
}

fixed_num_chunks_chunker::fixed_num_chunks_chunker(size_t set_num_chunks) :
        num_chunks(set_num_chunks) {
}

unsigned fixed_num_chunks_chunker::get_n_chunks(size_t len) {
    return (num_chunks);
}

size_t fixed_num_chunks_chunker::get_chunk_size(unsigned nchunks, size_t len) {
    return ((len + nchunks - 1) / nchunks);
}

size_t fixed_num_chunks_chunker::get_chunk_start(unsigned chunk,
        unsigned nchunks, size_t len) {
    return (chunk * get_chunk_size(nchunks, len));
}

size_t fixed_num_chunks_chunker::get_chunk_end(unsigned chunk,
        unsigned nchunks, size_t len) {
    size_t end = ((chunk + 1) * get_chunk_size(nchunks, len));
    return (end < len ? end : len);
}

size_t fixed_num_chunks_chunker::get_chunk_len(unsigned chunk,
        unsigned nchunks, size_t len) {
    return (get_chunk_end(chunk, nchunks, len) -
            get_chunk_start(chunk, nchunks, len));
}
