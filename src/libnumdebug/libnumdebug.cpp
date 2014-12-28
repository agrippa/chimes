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
#include <stdarg.h>

#include "stack_var.h"
#include "stack_frame.h"
#include "heap_allocation.h"
#include "stack_serialization.h"
#include "ptr_and_size.h"
#include "already_updated_ptrs.h"
#include "numdebug_stack.h"
#include "heap_allocation.h"

using namespace std;

// functions defined in this file
void new_stack();
void rm_stack();
void register_stack_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int n_ptr_fields, ...);
void alias_group_changed(int group);
void *malloc_wrapper(size_t nbytes, int group);
void *realloc_wrapper(void *ptr, size_t nbytes, int group);
void free_wrapper(void *ptr, int group);
void onexit();

static void safe_write(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);
static void safe_read(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);
static void *translate_old_ptr(void *ptr,
        std::map<void *, ptr_and_size *> *old_to_new);
static void follow_pointers(void *container, string type,
        set<void *> *updated);

// global data structures that must persist across library calls
static vector<stack_frame *> program_stack;
static numdebug_stack stack_tracker;
static vector<int> trace;
static int trace_index = 0;
static set<int> changed_groups;
static map<void *, heap_allocation *> heap;
static map<int, vector<heap_allocation *> *> alias_to_heap;
static map<uint64_t, vector<heap_allocation *> *> heap_sequence_groups;
static uint64_t curr_seq_no = 0;

static vector<stack_frame *> *unpacked_program_stack;
static vector<already_updated_ptrs *> already_updated;
static std::map<void *, ptr_and_size *> *old_to_new;

static std::map<std::string, std::vector<int> *> structs;

static pthread_t checkpoint_thread;
static pthread_mutex_t checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static volatile int checkpoint_thread_running = 0;

static int stack_nesting = 0;
int ____numdebug_replaying = 0;
int ____numdebug_rerunning = 0;

void init_numdebug(int nstructs, ...) {
    atexit(onexit);

    va_list vl;
    va_start(vl, nstructs);
    for (int i = 0; i < nstructs; i++) {
        char *struct_name = va_arg(vl, char *);
        int nfields = va_arg(vl, int);
        string struct_name_str(struct_name);
        structs[struct_name_str] = new std::vector<int>();

#ifdef VERBOSE
        fprintf(stderr, "struct %s offsets:", struct_name_str.c_str());
#endif

        for (int j = 0; j < nfields; j++) {
            int offset = va_arg(vl, int);
            assert(offset >= 0);
            structs[struct_name_str]->push_back(offset);
#ifdef VERBOSE
            fprintf(stderr, " %d", offset);
#endif
        }
    }
    va_end(vl);

    char *checkpoint_file = getenv("NUMDEBUG_CHECKPOINT_FILE");
    if (checkpoint_file != NULL) {
#ifdef VERBOSE
        fprintf(stderr, "Using checkpoint file %s\n", checkpoint_file);
#endif
        ____numdebug_replaying = 1;
        int fd = open(checkpoint_file, O_RDONLY);
        assert(fd >= 0);

        int trace_len;
        safe_read(fd, &trace_len, sizeof(trace_len), "trace_len",
                checkpoint_file);
#ifdef VERBOSE
        fprintf(stderr, "Trace = {");
#endif
        for (int i = 0; i < trace_len; i++) {
            int trace_ele;
            safe_read(fd, &trace_ele, sizeof(trace_ele), "trace_ele",
                    checkpoint_file);
            trace.push_back(trace_ele);
#ifdef VERBOSE
            fprintf(stderr, " %d", trace_ele);
#endif
        }
#ifdef VERBOSE
        fprintf(stderr, " }\n");
#endif

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

        // read in heap serialization
        uint64_t n_heap_allocs;
        safe_read(fd, &n_heap_allocs, sizeof(n_heap_allocs), "n_heap_allocs",
                checkpoint_file);
        old_to_new = new std::map<void *, ptr_and_size *>();
        std::vector<heap_allocation *> *new_heap =
            new std::vector<heap_allocation *>();
        for (int i = 0; i < n_heap_allocs; i++) {
            void *old_address;
            size_t size;
            int group;

            safe_read(fd, &old_address, sizeof(old_address), "old_address",
                    checkpoint_file);
            safe_read(fd, &size, sizeof(size), "size", checkpoint_file);
            safe_read(fd, &group, sizeof(group), "group", checkpoint_file);

            void *new_address = malloc(size);
            safe_read(fd, new_address, size, "heap contents", checkpoint_file);

            heap_allocation *alloc = new heap_allocation(new_address, size, group,
                    0);

            int have_type_info;
            safe_read(fd, &have_type_info, sizeof(have_type_info),
                    "have_type_info", checkpoint_file);
            if (have_type_info) {
                size_t elem_size;
                int elem_is_ptr, elem_is_struct;

                safe_read(fd, &elem_size, sizeof(elem_size), "elem_size",
                        checkpoint_file);
                safe_read(fd, &elem_is_ptr, sizeof(elem_is_ptr), "elem_is_ptr",
                        checkpoint_file);
                safe_read(fd, &elem_is_struct, sizeof(elem_is_struct),
                        "elem_is_struct", checkpoint_file);
                alloc->add_type_info(elem_size, elem_is_ptr, elem_is_struct);

                if (elem_is_struct) {
                    int elem_ptr_offsets_len;
                    safe_read(fd, &elem_ptr_offsets_len,
                            sizeof(elem_ptr_offsets_len),
                            "elem_ptr_offsets_len", checkpoint_file);
                    for (int j = 0; j < elem_ptr_offsets_len; j++) {
                        int offset;
                        safe_read(fd, &offset, sizeof(offset), "offset",
                                checkpoint_file);
                        alloc->add_pointer_offset(offset);
                    }
                }

            }

            new_heap->push_back(alloc);

            assert(heap.find(alloc->get_address()) == heap.end());
            heap[alloc->get_address()] = alloc;

            if (alias_to_heap.find(group) == alias_to_heap.end()) {
                alias_to_heap[group] = new vector<heap_allocation *>();
            }
            alias_to_heap[group]->push_back(alloc);

            // All restored allocations will have sequence #0
            if(heap_sequence_groups.find(0) == heap_sequence_groups.end()) {
                heap_sequence_groups[0] = new vector<heap_allocation *>();
            }
            heap_sequence_groups[0]->push_back(alloc);

            assert(old_to_new->find(old_address) == old_to_new->end());
            (*old_to_new)[old_address] = new ptr_and_size(new_address, size);
        }

        /*
         * find pointers in the heap and restore them to point to the correct
         * object. this process relies on the compilation pass having identified
         * types for allocations. if no types could be identified, this is
         * essentially a no-op.
         */
        for (std::vector<heap_allocation *>::iterator heap_iter = new_heap->begin(),
                heap_end = new_heap->end(); heap_iter != heap_end; heap_iter++) {
            heap_allocation *alloc = *heap_iter;
            if (alloc->check_have_type_info()) {
                if (alloc->check_elem_is_ptr()) {
                    /*
                     * Iterate through all elements of this array and convert
                     * pointers from old values to new values.
                     */
                    assert(alloc->get_size() % sizeof(void *) == 0);
                    int nelems = alloc->get_size() / sizeof(void *);
                    void **arr = (void **)(alloc->get_address());

                    for (int i = 0; i < nelems; i++) {
                        void *new_ptr = translate_old_ptr(arr[i], old_to_new);
                        if (new_ptr != NULL) arr[i] = new_ptr;
                    }

                    already_updated_ptrs *updated = new already_updated_ptrs(
                            (unsigned char *)arr, sizeof(void *), nelems);
                    already_updated.push_back(updated);

                } else if (alloc->check_elem_is_struct()) {
                    int elem_size = alloc->get_elem_size();
                    std::vector<int> *ptr_field_offsets = alloc->get_ptr_field_offsets();
                    if (ptr_field_offsets->size() > 0) {
                        assert(alloc->get_size() % elem_size == 0);
                        /*
                         * Iterate through all of the structs in the array and
                         * convert the pointers at the specified offsets.
                         */
                        int nelems = alloc->get_size() / elem_size;
                        unsigned char *raw_arr = (unsigned char *)(alloc->get_address());
                        for (int i = 0; i < nelems; i++) {
                            unsigned char *this_struct = raw_arr + (elem_size * i);
                            for (std::vector<int>::iterator f_iter =
                                    ptr_field_offsets->begin(), f_end =
                                    ptr_field_offsets->end(); f_iter != f_end;
                                    f_iter++) {
                                unsigned char *field_address = this_struct + *f_iter;
                                void **ptr_address = (void **)field_address;
                                void *new_address = translate_old_ptr(*ptr_address, old_to_new);
                                if (new_address != NULL) *ptr_address = new_address;
                            }
                        }

                        for (std::vector<int>::iterator f_iter =
                                ptr_field_offsets->begin(), f_end =
                                ptr_field_offsets->end(); f_iter != f_end;
                                f_iter++) {
                            int field_offset = *f_iter;
                            unsigned char *base = raw_arr + field_offset;

                            already_updated_ptrs *updated =
                                new already_updated_ptrs(base, elem_size,
                                        nelems);
                            already_updated.push_back(updated);
                        }
                    }
                }
            }
        }

        close(fd);
    }
}

static void *translate_old_ptr(void *ptr,
        std::map<void *, ptr_and_size *> *old_to_new) {
    unsigned char *c_ptr = (unsigned char *)ptr;
    for (std::map<void *, ptr_and_size *>::iterator i = old_to_new->begin(),
            e = old_to_new->end(); i != e; i++) {
        ptr_and_size *n = i->second;
        unsigned char *c_old_ptr = (unsigned char *)(i->first);
        size_t diff_in_bytes = c_ptr - c_old_ptr;
        if (diff_in_bytes < n->get_size()) {
            return ((unsigned char *)n->get_ptr()) + diff_in_bytes;
        }
    }
    return NULL;
}

void new_stack() {
    program_stack.push_back(new stack_frame());
    stack_nesting++;
#ifdef VERBOSE
    fprintf(stderr, "Incrementing stack depth to %d\n", stack_nesting);
#endif
}

void calling(int lbl) {
    stack_tracker.push(lbl);
#ifdef VERBOSE
    fprintf(stderr, "Calling %d: ", lbl);
    for (unsigned int i = 0; i < stack_tracker.size(); i++) {
        fprintf(stderr, "%d ", stack_tracker.at(i));
    }
    fprintf(stderr, "\n");
#endif
}

void rm_stack() {
    stack_frame *curr = program_stack.back();
    program_stack.pop_back();
    delete curr;

    stack_tracker.pop();
    stack_nesting--;
#ifdef VERBOSE
    fprintf(stderr, "Decrementing stack depth to %d\n", stack_nesting);
#endif

    if (____numdebug_rerunning && stack_nesting < 0) {
#ifdef VERBOSE
        fprintf(stderr, "Exiting replay...\n");
#endif
        exit(0);
    }
}

int get_next_call() {
    assert(trace_index < trace.size());
    return trace[trace_index++];
}

void register_stack_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int n_ptr_fields, ...) {
    stack_var *new_var = new stack_var(mangled_name, full_type, ptr, size,
            is_ptr);

    va_list vl;
    va_start(vl, n_ptr_fields);
    for (int i = 0; i < n_ptr_fields; i++) {
        int offset = va_arg(vl, int);
        assert(offset >= 0);
        new_var->add_pointer_offset(offset);
    }
    va_end(vl);

    program_stack.back()->add_stack_var(new_var);
}

void alias_group_changed(int group) {
    changed_groups.insert(group);
}

static void malloc_helper(void *new_ptr, size_t nbytes, int group,
        int has_type_info, int is_ptr, int is_struct, int elem_size,
        int *ptr_field_offsets, int n_ptr_field_offsets) {
    heap_allocation *alloc = new heap_allocation(new_ptr, nbytes, group,
            curr_seq_no);
    if (has_type_info) {
        alloc->add_type_info(elem_size, is_ptr, is_struct);
        for (int i = 0; i < n_ptr_field_offsets; i++) {
            alloc->add_pointer_offset(ptr_field_offsets[i]);
        }
        if (n_ptr_field_offsets > 0) free(ptr_field_offsets);
    }

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

void *malloc_wrapper(size_t nbytes, int group, int has_type_info, ...) {
    void *ptr = malloc(nbytes);

    if (ptr != NULL) {
        int is_ptr = 0, is_struct = 0, elem_size = 0, n_ptr_fields = 0;
        int *ptr_field_offsets = NULL;

        if (has_type_info) {
            va_list vl;
            va_start(vl, has_type_info);
            is_ptr = va_arg(vl, int);
            is_struct = va_arg(vl, int);
            if (is_struct) {
                elem_size = va_arg(vl, int);
                n_ptr_fields = va_arg(vl, int);
                ptr_field_offsets = (int *)malloc(sizeof(int) * n_ptr_fields);
                for (int i = 0; i < n_ptr_fields; i++) {
                    ptr_field_offsets[i] = va_arg(vl, int);
                }
            }
            va_end(vl);
        }
        malloc_helper(ptr, nbytes, group, has_type_info, is_ptr, is_struct,
                elem_size, ptr_field_offsets, n_ptr_fields);
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
            int has_type_info = alloc->check_have_type_info();
            int is_ptr = 0; int is_struct = 0; int n_struct_ptr_fields = 0;
            int elem_size = 0;
            int *ptr_field_offsets = NULL;
            if (has_type_info) {
                is_ptr = alloc->check_elem_is_ptr();
                is_struct = alloc->check_elem_is_struct();
                if (is_struct) {
                    elem_size = alloc->get_elem_size();
                    n_struct_ptr_fields = alloc->get_ptr_field_offsets()->size();
                    ptr_field_offsets = (int *)malloc(sizeof(int) * n_struct_ptr_fields);
                    for (int i = 0; i < n_struct_ptr_fields; i++) {
                        ptr_field_offsets[i] = (*alloc->get_ptr_field_offsets())[i];
                    }
                }
            }

            free_wrapper(ptr, group);
            malloc_helper(new_ptr, nbytes, group, has_type_info, is_ptr,
                    is_struct, elem_size, ptr_field_offsets, n_struct_ptr_fields);
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

    free_helper(in_heap);
}

typedef struct _checkpoint_thread_ctx {
    unsigned char *stack_serialized;
    uint64_t stack_serialized_len;

    vector<heap_allocation *> *heap_to_checkpoint;

    vector<int> *stack_tracker;
} checkpoint_thread_ctx;
static void *checkpoint_func(void *data);

void checkpoint() {
    new_stack();

    if (____numdebug_replaying) {
#ifdef VERBOSE
        fprintf(stderr, "Got to the desired checkpoint with a stack size of "
                "%lu ( ", program_stack.size());
        for (std::vector<stack_frame *>::iterator i = program_stack.begin(),
                e = program_stack.end(); i != e; i++) {
            fprintf(stderr, "%d ", (*i)->size());
        }
        fprintf(stderr, ")\n");
#endif
        
        assert(unpacked_program_stack->size() == program_stack.size());
        /*
         * restore non-pointers in the stack to have the correct values by
         * transferring from the deserialized objects into the newly registered
         * addresses
         */
        vector<stack_frame *>::iterator unpacked_iter =
            unpacked_program_stack->begin();
        vector<stack_frame *>::iterator unpacked_end =
            unpacked_program_stack->end();
        vector<stack_frame *>::iterator real_iter = program_stack.begin();
        vector<stack_frame *>::iterator real_end = program_stack.end();

        while (unpacked_iter != unpacked_end && real_iter != real_end) {
            stack_frame *real = *real_iter;
            stack_frame *unpacked = *unpacked_iter;
            assert(real->size() == unpacked->size());

            // Matching entries in each frame
            for (stack_frame::iterator i = real->begin(), e = real->end();
                    i != e; i++) {
                assert(unpacked->find(i->first) != unpacked->end());
            }
            for (stack_frame::iterator i = unpacked->begin(),
                    e = unpacked->end(); i != e; i++) {
                assert(real->find(i->first) != real->end());
            }

            for (stack_frame::iterator i = real->begin(), e = real->end();
                    i != e; i++) {
                string name = i->first;
                stack_var *live = i->second;
                stack_frame::iterator found = unpacked->find(name);
                stack_var *dead = found->second;

                assert(live->get_name() == dead->get_name());
                assert(live->get_type() == dead->get_type());
                assert(live->get_size() == dead->get_size());
                assert(live->check_is_ptr() == dead->check_is_ptr());
                assert(live->get_ptr_offsets()->size() ==
                        dead->get_ptr_offsets()->size());
                assert(dead->get_tmp_buffer() != NULL);

                memcpy(live->get_address(), dead->get_tmp_buffer(),
                        live->get_size());
                dead->clear_tmp_buffer();
            }

            unpacked_iter++;
            real_iter++;
        }

        assert(unpacked_iter == unpacked_end && real_iter == real_end);

        /*
         * find pointers in the stack and restore them to point to the correct
         * object. at the same time, use these pointers as indicators of places
         * in the heap where other references need updating by following
         * pointers.
         */
        set<void *> updated;
        for (vector<stack_frame *>::iterator frame_iter = program_stack.begin(),
                frame_end = program_stack.end(); frame_iter != frame_end;
                frame_iter++) {
            stack_frame *frame = *frame_iter;
            for (stack_frame::iterator var_iter = frame->begin(),
                    var_end = frame->end(); var_iter != var_end; var_iter++) {
                stack_var *var = var_iter->second;
                string type = var->get_type();
                void *address = var->get_address();

                follow_pointers(address, type, &updated);
            }
        }

        ____numdebug_replaying = 0;
        ____numdebug_rerunning = 1;
        stack_nesting = 1;

        rm_stack();
        return;
    }

    if (checkpoint_thread_running) {
        rm_stack();
        return;
    }

    pthread_mutex_lock(&checkpoint_mutex);

    if (checkpoint_thread_running) {
        pthread_mutex_unlock(&checkpoint_mutex);
        rm_stack();
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

    /*
     * TODO this doesn't actually work because even though we know the
     * allocations will still be there, the host program may change them and
     * then we're checkpointing inconsistent data.
     */
    vector<heap_allocation *> *heap_to_checkpoint =
        new vector<heap_allocation *>();
    for (map<void *, heap_allocation *>::iterator heap_iter = heap.begin(),
            heap_end = heap.end(); heap_iter != heap_end; heap_iter++) {
        heap_allocation *curr = heap_iter->second;
        heap_allocation *copy = new heap_allocation();
        curr->copy(copy);
        heap_to_checkpoint->push_back(copy);
    }

    checkpoint_thread_ctx *thread_ctx = (checkpoint_thread_ctx *)malloc(
            sizeof(checkpoint_thread_ctx));
    thread_ctx->stack_serialized = serialize_program_stack(&program_stack,
            &thread_ctx->stack_serialized_len);
    thread_ctx->heap_to_checkpoint = heap_to_checkpoint;
    thread_ctx->stack_tracker = new std::vector<int>();
    stack_tracker.copy(thread_ctx->stack_tracker);

    pthread_mutex_unlock(&checkpoint_mutex);

    pthread_create(&checkpoint_thread, NULL, checkpoint_func, thread_ctx);

    rm_stack();
}

static bool is_pointer_type(string type) {
    return type[type.length() - 1] == '*';
}

static bool is_struct_type(string type) {
    size_t index = type.find("%%struct.");
    return index != string::npos && index == 0;
}

static bool is_already_updated(void *ptr) {
    for (vector<already_updated_ptrs *>::iterator i = already_updated.begin(),
            e = already_updated.end(); i != e; i++) {
        already_updated_ptrs *updated = *i;
        if (updated->satisfies(ptr)) {
            return true;
        }
    }
    return false;
}

static void follow_pointers(void *container, string type,
        set<void *> *updated) {
    if (updated->find(container) != updated->end()) return;

    if (is_already_updated(container)) return;

    if (is_pointer_type(type)) {
        void **nested_container = (void **)container;
        void *new_ptr = translate_old_ptr(*nested_container, old_to_new);
        if (new_ptr != NULL) {
            updated->insert(nested_container);
            *nested_container = new_ptr;
            follow_pointers(new_ptr, type.substr(0, type.length() - 1),
                    updated);
        }
    } else if (is_struct_type(type)) {
        size_t open_brace_index = type.find("{");
        assert(open_brace_index != string::npos);
        open_brace_index += 2;
        size_t close_brace_index = type.find("}");
        assert(close_brace_index != string::npos);
        close_brace_index -= 1;

        string struct_name = type.substr(8, type.find("=") - 1);
        std::vector<int> *fields = structs[struct_name];
        string nested_types = type.substr(open_brace_index, close_brace_index -
                open_brace_index);

        int field_index = 0;
        int index = 0;
        int start = 0;
        while (index < nested_types.length()) {
            while (index < nested_types.length() && nested_types[index] != ',') {
                index++;
            }

            /*
             * This requires the offset of every field in every declared struct
             * to be passed into init_numdebug. This is bad because that assumes
             * that struct definitions are all defined in the same scope as
             * main. This is okay for the moment, as we only support single-file
             * compilation, but should be addressed as a future TODO.
             */
            string curr = nested_types.substr(start, index);
            unsigned char *field_ptr = ((unsigned char *)container) +
                (*fields)[field_index];
            follow_pointers((void *)field_ptr, curr, updated);

            start = index + 1;
            while (start < nested_types.length() && nested_types[start] == ' ') {
                start++;
            }
            index = start;
            
            field_index++;
        }
    }
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
        assert(alloc->get_tmp_buffer() != NULL);
        void *address = alloc->get_address();
        size_t size = alloc->get_size();
        int group = alloc->get_alias_group();
        int have_type_info = alloc->check_have_type_info() ? 1 : 0;

        safe_write(fd, &address, sizeof(address), "address", dump_filename);
        safe_write(fd, &size, sizeof(size), "size", dump_filename);
        safe_write(fd, &group, sizeof(group), "group", dump_filename);
        safe_write(fd, alloc->get_tmp_buffer(), size, "heap contents",
                dump_filename);

        safe_write(fd, &have_type_info, sizeof(have_type_info),
                "have_type_info", dump_filename);
        if (alloc->check_have_type_info()) {
            size_t elem_size = alloc->get_elem_size();
            int elem_is_ptr = alloc->check_elem_is_ptr();
            int elem_is_struct = alloc->check_elem_is_struct();

            safe_write(fd, &elem_size, sizeof(elem_size), "elem_size",
                    dump_filename);
            safe_write(fd, &elem_is_ptr, sizeof(elem_is_ptr), "elem_is_ptr",
                    dump_filename);
            safe_write(fd, &elem_is_struct, sizeof(elem_is_struct),
                    "elem_is_struct", dump_filename);
            if (elem_is_struct) {
                int elem_ptr_offsets_len =
                    alloc->get_ptr_field_offsets()->size();
                safe_write(fd, &elem_ptr_offsets_len,
                        sizeof(elem_ptr_offsets_len), "elem_ptr_offsets_len",
                        dump_filename);
                for (int i = 0; i < alloc->get_ptr_field_offsets()->size();
                        i++) {
                    int offset = (*alloc->get_ptr_field_offsets())[i];
                    safe_write(fd, &offset, sizeof(offset), "offset",
                            dump_filename);
                }
            }
        }

        // Release any deffered frees
        free(alloc->get_tmp_buffer());
    }

    close(fd);
    free(stack_serialized);
    delete heap_to_checkpoint;
    delete ctx->stack_tracker;
    free(ctx);

    checkpoint_thread_running = 0;

    return NULL;
}

void onexit() {
#ifdef VERBOSE
    fprintf(stderr, "Locking...\n");
#endif
    pthread_mutex_lock(&checkpoint_mutex);
#ifdef VERBOSE
    fprintf(stderr, "Done\n");
#endif
    if (checkpoint_thread_running) {
#ifdef VERBOSE
        fprintf(stderr, "Joining\n");
#endif
        pthread_join(checkpoint_thread, NULL);
#ifdef VERBOSE
        fprintf(stderr, "Done\n");
#endif
    }
    pthread_mutex_unlock(&checkpoint_mutex);
}
