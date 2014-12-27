#include <set>
#include <map>
#include <string>
#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>
#include <fcntl.h>
#include <unistd.h>

#include "stack_var.h"
#include "stack_frame.h"
#include "heap_allocation.h"
#include "stack_serialization.h"

using namespace std;

// functions defined in this file
void new_stack();
void rm_stack();
void register_stack_var(const char *mangled_name, void *ptr, size_t size);
void alias_group_changed(int group);
void *malloc_wrapper(size_t nbytes, int group);
void *realloc_wrapper(void *ptr, size_t nbytes, int group);
void free_wrapper(void *ptr, int group);
void onexit();

// global data structures that must persist across library calls
static vector<stack_frame *> program_stack;
static set<int> changed_groups;
static map<void *, heap_allocation *> heap;
static map<int, vector<heap_allocation *> *> alias_to_heap;
static map<uint64_t, vector<heap_allocation *> *> heap_sequence_groups;
static uint64_t curr_seq_no = 0;

static pthread_t checkpoint_thread;
static pthread_mutex_t checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static volatile int checkpoint_thread_running = 0;
static int initialized = 0;

void new_stack() {
    if (!initialized) {
        atexit(onexit);
        initialized = 1;
    }
    program_stack.push_back(new stack_frame());
}

void rm_stack() {
    stack_frame *curr = program_stack.back();
    program_stack.pop_back();

    delete curr;
}

void register_stack_var(const char *mangled_name, void *ptr, size_t size) {
    program_stack.back()->add_stack_var(new stack_var(mangled_name, ptr, size));
}

void alias_group_changed(int group) {
    changed_groups.insert(group);
}

static void malloc_helper(void *new_ptr, size_t nbytes, int group) {
    heap_allocation *alloc = new heap_allocation(new_ptr, nbytes, group,
            curr_seq_no);

    assert(heap.find(new_ptr) == heap.end());
    heap[new_ptr] = alloc;
    if (alias_to_heap.find(group) == alias_to_heap.end()) {
        alias_to_heap[group] = new vector<heap_allocation *>();
    }

    alias_to_heap[group]->push_back(alloc);

    if(heap_sequence_groups.find(curr_seq_no) == heap_sequence_groups.end()) {
        heap_sequence_groups[curr_seq_no] = new vector<heap_allocation *>();
    }
    heap_sequence_groups[curr_seq_no]->push_back(alloc);
}

void *malloc_wrapper(size_t nbytes, int group) {
    void *ptr = malloc(nbytes);

    if (ptr != NULL) {
        malloc_helper(ptr, nbytes, group);
    }

    return ptr;
}

void *realloc_wrapper(void *ptr, size_t nbytes, int group) {
    void *new_ptr = realloc(ptr, nbytes);

    if (ptr != NULL) {
        map<void *, heap_allocation *>::iterator alloc_ptr = heap.find(ptr);
        assert(alloc_ptr != heap.end());

        heap_allocation *alloc = alloc_ptr->second;
        assert(alloc->get_alias_group() == group);

        if (new_ptr == ptr) {
            // The location in memory did not change, only the size was extended
            alloc->update_size(nbytes);
        } else {
            // The memory allocation was moved to satisfy this realloc
            free_wrapper(ptr, group);
            malloc_helper(new_ptr, nbytes, group);
        }
    }

    return new_ptr;
}

static void free_helper(map<void *, heap_allocation *>::iterator in_heap) {
    int group = in_heap->second->get_alias_group();
    void *ptr = in_heap->second->get_address();
    int seq = in_heap->second->get_seq();

    vector<heap_allocation *>::iterator in_alias_to_heap =
        std::find(alias_to_heap[group]->begin(), alias_to_heap[group]->end(),
                in_heap->second);
    assert(in_alias_to_heap != alias_to_heap[group]->end());

    vector<heap_allocation *>::iterator in_heap_sequence_groups =
        std::find(heap_sequence_groups[seq]->begin(),
                heap_sequence_groups[seq]->end(), in_heap->second);
    assert(in_heap_sequence_groups != heap_sequence_groups[seq]->end());

    heap.erase(in_heap);
    alias_to_heap[group]->erase(in_alias_to_heap);
    heap_sequence_groups[seq]->erase(in_heap_sequence_groups);
    if (heap_sequence_groups[seq]->empty()) {
        heap_sequence_groups.erase(seq);
    }

    free(ptr);
}

map<void *, heap_allocation *>::iterator find_in_heap(void *ptr) {
    map<void *, heap_allocation *>::iterator in_heap = heap.find(ptr);
    assert(in_heap != heap.end());
    assert(in_heap->second->get_address() == ptr);

    return in_heap;
}

void free_wrapper(void *ptr, int group) {
    map<void *, heap_allocation *>::iterator in_heap = find_in_heap(ptr);
    assert(in_heap->second->get_alias_group() == group);

    if (in_heap->second->get_refcount() > 0) {
        in_heap->second->set_free();
    } else {
        free_helper(in_heap);
    }
}

typedef struct _checkpoint_thread_ctx {
    unsigned char *stack_serialized;
    uint64_t stack_serialized_len;

    vector<heap_allocation *> *heap_to_checkpoint;
} checkpoint_thread_ctx;
static void *checkpoint_func(void *data);

void checkpoint() {
    if (checkpoint_thread_running) return;

    pthread_mutex_lock(&checkpoint_mutex);

    if (checkpoint_thread_running) {
        pthread_mutex_unlock(&checkpoint_mutex);
        return;
    }

    checkpoint_thread_running = 1;

    /*
     * At this stage we assume we only have a single stack to checkpoint and it
     * belongs to the calling thread, so those addresses will remain valid for
     * checkpointing as long as we're still here. Therefore, we must checkpoint
     * stack variables from here before returning.
     *
     * However, because we control heap allocations through the
     * malloc/realloc/free wrappers, we can ensure they are only freed once they
     * have been fully checkpointed. We can return from this function and allow
     * the host application to mess with the heap however much it likes. We just
     * need to be sure we know exactly which heap state we need to checkpoint,
     * and which we don't. That information is maintained by the heap sequence
     * groups.
     */
    curr_seq_no++;

    vector<heap_allocation *> *heap_to_checkpoint =
        new vector<heap_allocation *>();
    for (map<void *, heap_allocation *>::iterator heap_iter = heap.begin(),
            heap_end = heap.end(); heap_iter != heap_end; heap_iter++) {
        if (!heap_iter->second->has_been_freed()) {
            heap_to_checkpoint->push_back(heap_iter->second);
            heap_iter->second->incr_refcount();
        }
    }

    checkpoint_thread_ctx *thread_ctx = (checkpoint_thread_ctx *)malloc(
            sizeof(checkpoint_thread_ctx));
    thread_ctx->stack_serialized = serialize_program_stack(&program_stack,
            &thread_ctx->stack_serialized_len);
    thread_ctx->heap_to_checkpoint = heap_to_checkpoint;

    pthread_mutex_unlock(&checkpoint_mutex);

    pthread_create(&checkpoint_thread, NULL, checkpoint_func, thread_ctx);
}

void *checkpoint_func(void *data) {
    checkpoint_thread_ctx *ctx = (checkpoint_thread_ctx *)data;
    unsigned char *stack_serialized = ctx->stack_serialized;
    uint64_t stack_serialized_len = ctx->stack_serialized_len;
    vector<heap_allocation *> *heap_to_checkpoint = ctx->heap_to_checkpoint;

    free(ctx);

    /*
     * Until we implement the planned client-server architecture, just dump
     * checkpoints to a file locally. Right now, we naively dump everything.
     */

    int count = 0;
    char dump_filename[256];
    sprintf(dump_filename, "numdebug.dump.%d", count);
    int fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    while (fd < 0) {
        count++;
        sprintf(dump_filename, "numdebug.dump.%d", count);
        fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    }

    if (write(fd, &stack_serialized_len, sizeof(stack_serialized_len)) !=
            sizeof(stack_serialized_len)) {
        fprintf(stderr, "Error writing stack_serialized_len to %s\n",
                dump_filename);
        exit(1);
    }

    if (write(fd, stack_serialized, ctx->stack_serialized_len) !=
            ctx->stack_serialized_len) {
        fprintf(stderr, "Error writing stack_serialized of length %llu to %s\n",
                ctx->stack_serialized_len, dump_filename);
        exit(1);
    }

    uint64_t n_heap_allocs = heap_to_checkpoint->size();
    if (write(fd, &n_heap_allocs, sizeof(n_heap_allocs)) !=
            sizeof(n_heap_allocs)) {
        fprintf(stderr, "Error writing n_heap_allocs to %s\n", dump_filename);
        exit(1);
    }

    for (vector<heap_allocation *>::iterator heap_iter =
            heap_to_checkpoint->begin(), heap_end = heap_to_checkpoint->end();
            heap_iter != heap_end; heap_iter++) {
        heap_allocation *alloc = *heap_iter;
        void *address = alloc->get_address();
        size_t size = alloc->get_size();

        if (write(fd, &address, sizeof(address)) != sizeof(address)) {
            fprintf(stderr, "Error writing alloc->address to %s\n",
                    dump_filename);
            exit(1);
        }

        if (write(fd, &size, sizeof(size)) != sizeof(size)) {
            fprintf(stderr, "Error writing alloc->size to %s\n", dump_filename);
            exit(1);
        }

        if (write(fd, address, size) != size) {
            fprintf(stderr, "Error writing heap contents from address %p with "
                    "length %lu to %s\n", address, size, dump_filename);
            exit(1);
        }
    }

    close(fd);
    free(stack_serialized);

    for (vector<heap_allocation *>::iterator heap_iter =
            heap_to_checkpoint->begin(), heap_end = heap_to_checkpoint->end();
            heap_iter != heap_end; heap_iter++) {
        heap_allocation *alloc = *heap_iter;

        int refs = alloc->decr_refcount();
        if (refs == 0 && alloc->has_been_freed()) {
            map<void *, heap_allocation *>::iterator in_heap = find_in_heap(
                    alloc->get_address());
            free_helper(in_heap);
        }
    }
    delete heap_to_checkpoint;

    return NULL;
}

void onexit() {
    pthread_mutex_lock(&checkpoint_mutex);
    if (checkpoint_thread_running) {
        pthread_join(checkpoint_thread, NULL);
    }
    pthread_mutex_unlock(&checkpoint_mutex);
}
