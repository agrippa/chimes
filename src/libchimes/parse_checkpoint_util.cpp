#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <assert.h>
#include <stdint.h>

#include "serialized_checkpoint_time.h"

#define MAX_CHECKPOINT_FILENAME_LEN 256

static void skip(int fd, ssize_t size, const char *msg, const char *filename);
static void safe_read(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);

int main(int argc, char **argv) {

    const char *checkpoint_file = argv[1];
    printf("%s\n", checkpoint_file);

    int fd = open(checkpoint_file, O_RDONLY);
    assert(fd >= 0);

    size_t filename_length;
    char previous_checkpoint_file[MAX_CHECKPOINT_FILENAME_LEN];
    safe_read(fd, &filename_length, sizeof(filename_length),
            "filename_length", checkpoint_file);
    safe_read(fd, previous_checkpoint_file, filename_length,
            "previous_checkpoint_file", checkpoint_file);

    size_t heap_offset;
    safe_read(fd, &heap_offset, sizeof(heap_offset), "heap_offset",
            checkpoint_file);

    int n_omp_threads;
    safe_read(fd, &n_omp_threads, sizeof(n_omp_threads), "n_omp_threads",
            checkpoint_file);

    unsigned long long total_allocations;
    safe_read(fd, &total_allocations, sizeof(total_allocations),
            "total_allocations", checkpoint_file);

    // Read heap entry times from checkpoint
    int n_checkpoint_times;
    safe_read(fd, &n_checkpoint_times, sizeof(n_checkpoint_times),
            "n_checkpoint_times", checkpoint_file);
    skip(fd, n_checkpoint_times * sizeof(serialized_checkpoint_time),
            "serialized_times", checkpoint_file);

    // Read traces from checkpoint
    size_t serialized_traces_len;
    safe_read(fd, &serialized_traces_len, sizeof(serialized_traces_len),
            "serialized_traces_len", checkpoint_file);
    skip(fd, serialized_traces_len, "serialized_traces", checkpoint_file);

    // read in stack state
    uint64_t stack_serialized_len;
    safe_read(fd, &stack_serialized_len, sizeof(stack_serialized_len),
            "stack_serialized_len", checkpoint_file);
    skip(fd, stack_serialized_len, "stack_serialized", checkpoint_file);

    // read in globals state
    uint64_t globals_serialized_len;
    safe_read(fd, &globals_serialized_len, sizeof(globals_serialized_len),
            "globals_serialized_len", checkpoint_file);
    skip(fd, globals_serialized_len, "globals_serialized", checkpoint_file);

    // read in constants state
    uint64_t constants_serialized_len;
    safe_read(fd, &constants_serialized_len,
            sizeof(constants_serialized_len),
            "constants_serialized_len", checkpoint_file);
    skip(fd, constants_serialized_len, "constants_serialized", checkpoint_file);

    printf("heap: %llu\n", total_allocations);
    printf("stack: %lu\n", stack_serialized_len);
    printf("globals: %lu\n", globals_serialized_len);
    printf("constants: %lu\n", constants_serialized_len);

    close(fd);

    return 0;
}

static void safe_read(int fd, void *ptr, size_t size, const char *msg,
        const char *filename) {
    unsigned char *c_ptr = (unsigned char *)ptr;
    const size_t chunk = 1024UL * 1024UL * 1024UL;
    size_t sofar = 0;

    do {
        size_t toread = chunk;
        if (sofar + toread > size) {
            toread = size - sofar;
        }
        ssize_t r = read(fd, c_ptr + sofar, toread);
        if (r == -1) {
            fprintf(stderr, "Error reading from %s: %s\n", filename, msg);
            exit(1);
        }
        sofar += r;
    } while (sofar < size);
}

static void skip(int fd, ssize_t size, const char *msg, const char *filename) {
    if (lseek(fd, size, SEEK_CUR) == (off_t)-1) {
        fprintf(stderr, "Error skipping in %s: %s\n", filename, msg);
        exit(1);
    }
}

