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

static void safe_write(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);
static void safe_read(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);

// global data structures that must persist across library calls
static vector<stack_frame *> program_stack;
static vector<int> stack_tracker;
static vector<int> trace;
static int trace_index = 0;
static set<int> changed_groups;
static map<void *, heap_allocation *> heap;
static map<int, vector<heap_allocation *> *> alias_to_heap;
static map<uint64_t, vector<heap_allocation *> *> heap_sequence_groups;
static uint64_t curr_seq_no = 0;

static vector<stack_frame *> *unpacked_program_stack;

static pthread_t checkpoint_thread;
static pthread_mutex_t checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static volatile int checkpoint_thread_running = 0;

int ____numdebug_replaying = 0;

void init_numdebug() {
    atexit(onexit);

    char *checkpoint_file = getenv("NUMDEBUG_CHECKPOINT_FILE");
    if (checkpoint_file != NULL) {
        ____numdebug_replaying = 1;
        int fd = open(checkpoint_file, O_RDONLY);
        assert(fd >= 0);

        int trace_len;
        safe_read(fd, &trace_len, sizeof(trace_len), "trace_len",
                checkpoint_file);
        for (int i = 0; i < trace_len; i++) {
            int trace_ele;
            safe_read(fd, &trace_ele, sizeof(trace_ele), "trace_ele",
                    checkpoint_file);
            trace.push_back(trace_ele);
        }

        // read in stack state
        uint64_t stack_serialized_len;
        safe_read(fd, &stack_serialized_len, sizeof(stack_serialized_len),
                "stack_serialized_len", checkpoint_file);
        unsigned char *stack_serialized = (unsigned char *)malloc(
                stack_serialized_len);
        safe_read(fd, stack_serialized, stack_serialized_len,
                "stack_serialized", checkpoint_file);
        unpacked_program_stack = deserialize_program_stack(stack_serialized,
                stack_serialized_len);

        // TODO read in heap serialization
        // TODO find pointers in the heap and restore them to point to the correct object
        // TODO find pointers in the stack and restore them to point to the correct object
        // TODO restore non-pointers in the stack to have the correct values

        close(fd);
    }
}

void new_stack() {
    program_stack.push_back(new stack_frame());
}

void calling(int lbl) {
    stack_tracker.push_back(lbl);
}

void rm_stack() {
    stack_frame *curr = program_stack.back();
    program_stack.pop_back();
    delete curr;

    stack_tracker.pop_back();
}

int get_next_call() {
    assert(trace_index < trace.size());
    return trace[trace_index++];
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

    vector<int> *stack_tracker;
} checkpoint_thread_ctx;
static void *checkpoint_func(void *data);

void checkpoint() {
    if (____numdebug_replaying) {
        fprintf(stderr, "Got to the desired checkpoint with a stack size of "
                "%lu ( ", program_stack.size());
        for (std::vector<stack_frame *>::iterator i = program_stack.begin(),
                e = program_stack.end(); i != e; i++) {
            fprintf(stderr, "%d ", (*i)->size());
        }
        fprintf(stderr, ")\n");
        
        assert(unpacked_program_stack->size() == program_stack.size());

        /*
         * TODO restore stack and heap state from checkpoint file (see TODOs
         * above about getting it out of the checkpoint file) and updating the
         * pointers in both the stack and heap. This update will require type
         * information on the first-level types of all stack and heap
         * allocations, which will need to be added to the dump file or
         * callbacks somewhere. We only really care about either the allocation
         * of pointers (don't really care if they are nested because we only
         * update the one we're looking at) and structs that contain pointers.
         */
        ____numdebug_replaying = 0;

        exit(0);
    }

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
    thread_ctx->stack_tracker = new std::vector<int>();
    *(thread_ctx->stack_tracker) = stack_tracker;
    // for (std::vector<int>::iterator i = stack_tracker.begin(),
    //         e = stack_tracker.end(); i != e; i++) {
    //     thread_ctx->stack_tracker.push_back(*i);
    // }

    pthread_mutex_unlock(&checkpoint_mutex);

    pthread_create(&checkpoint_thread, NULL, checkpoint_func, thread_ctx);
}

static void safe_write(int fd, void *ptr, size_t size, const char *msg,
        const char *filename) {
    if (write(fd, ptr, size) != size) {
        fprintf(stderr, "Error writing to %s: %s\n", filename, msg);
        exit(1);
    }
}

static void safe_read(int fd, void *ptr, size_t size, const char *msg,
        const char *filename) {
    if (read(fd, ptr, size) != size) {
        fprintf(stderr, "Error reading from %s: %s\n", filename, msg);
        exit(1);
    }
}

void *checkpoint_func(void *data) {
    checkpoint_thread_ctx *ctx = (checkpoint_thread_ctx *)data;
    unsigned char *stack_serialized = ctx->stack_serialized;
    uint64_t stack_serialized_len = ctx->stack_serialized_len;
    vector<heap_allocation *> *heap_to_checkpoint = ctx->heap_to_checkpoint;

    /*
     * Until we implement the planned client-server architecture, just dump
     * checkpoints to a file locally. Right now, we naively dump everything.
     */

    // Find a unique file for this checkpoint
    int count = 0;
    char dump_filename[256];
    sprintf(dump_filename, "numdebug.dump.%d", count);
    int fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    while (fd < 0) {
        count++;
        sprintf(dump_filename, "numdebug.dump.%d", count);
        fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    }

    // Write the trace of function calls out
    int trace_len = ctx->stack_tracker->size();
    safe_write(fd, &trace_len, sizeof(trace_len), "trace length", dump_filename);
    for (std::vector<int>::iterator trace_iter = ctx->stack_tracker->begin(),
            trace_end = ctx->stack_tracker->end(); trace_iter != trace_end;
            trace_iter++) {
        int trace = *trace_iter;
        safe_write(fd, &trace, sizeof(trace), "trace element", dump_filename);
    }

    // Write the serialized stack out
    safe_write(fd, &stack_serialized_len, sizeof(stack_serialized_len),
            "stack_serialized_len", dump_filename);
    safe_write(fd, stack_serialized, ctx->stack_serialized_len,
            "stack_serialized_len", dump_filename);

    // Write the heap allocations out (all of them, for now)
    uint64_t n_heap_allocs = heap_to_checkpoint->size();
    safe_write(fd, &n_heap_allocs, sizeof(n_heap_allocs), "n_heap_allocs",
            dump_filename);

    for (vector<heap_allocation *>::iterator heap_iter =
            heap_to_checkpoint->begin(), heap_end = heap_to_checkpoint->end();
            heap_iter != heap_end; heap_iter++) {
        heap_allocation *alloc = *heap_iter;
        void *address = alloc->get_address();
        size_t size = alloc->get_size();

        safe_write(fd, &address, sizeof(address), "address", dump_filename);
        safe_write(fd, &size, sizeof(size), "size", dump_filename);
        safe_write(fd, address, size, "heap contents", dump_filename);

        // Release any deffered frees
        int refs = alloc->decr_refcount();
        if (refs == 0 && alloc->has_been_freed()) {
            map<void *, heap_allocation *>::iterator in_heap = find_in_heap(
                    alloc->get_address());
            free_helper(in_heap);
        }
    }

    close(fd);
    free(stack_serialized);
    delete heap_to_checkpoint;
    delete ctx->stack_tracker;
    free(ctx);

    return NULL;
}

void onexit() {
    pthread_mutex_lock(&checkpoint_mutex);
    if (checkpoint_thread_running) {
        pthread_join(checkpoint_thread, NULL);
    }
    pthread_mutex_unlock(&checkpoint_mutex);
}
