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
#include <string.h>

#ifdef CUDA_SUPPORT
#include <cuda_runtime.h>
#include "libnumdebug_cuda.h"
#endif

#ifdef __NUMDEBUG_PROFILE
#include "perf_profile.h"
#endif

#include "numdebug_common.h"
#include "stack_var.h"
#include "stack_frame.h"
#include "heap_allocation.h"
#include "stack_serialization.h"
#include "thread_serialization.h"
#include "global_serialization.h"
#include "ptr_and_size.h"
#include "already_updated_ptrs.h"
#include "numdebug_stack.h"
#include "heap_allocation.h"
#include "type_info.h"

using namespace std;

// functions defined in this file
void new_stack(unsigned n_local_arg_aliases, unsigned n_args, ...);
void rm_stack(bool has_return_alias, size_t returned_alias);
void register_stack_var(const char *mangled_name, unsigned thread,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
int alias_group_changed(int ngroups, ...);
void *malloc_wrapper(size_t nbytes, size_t group, int has_type_info, ...);
void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
void free_wrapper(void *ptr, size_t group);

void onexit();

static void safe_write(int fd, void *ptr, ssize_t size, const char *msg,
        const char *filename);
static void safe_read(int fd, void *ptr, ssize_t size, const char *msg,
        const char *filename);
static void *translate_old_ptr(void *ptr,
        std::map<void *, ptr_and_size *> *old_to_new);
static void fix_stack_or_global_pointer(void *container, string type);
map<void *, heap_allocation *>::iterator find_in_heap(void *ptr);
void free_helper(void *ptr);
static stack_var *get_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        va_list vl);
static std::vector<stack_frame *> *get_my_stack();

// global data structures that must persist across library calls
// static vector<stack_frame *> program_stack;
static numdebug_stack stack_tracker;
static vector<int> trace;
static unsigned int trace_index = 0;
static set<size_t> changed_groups;
static map<void *, heap_allocation *> heap;
static map<size_t, vector<heap_allocation *> *> alias_to_heap;
static map<uint64_t, vector<heap_allocation *> *> heap_sequence_groups;
static size_t return_alias;
static vector<size_t> return_aliases;
static int calling_lbl = -1;
static map<size_t, set<size_t> *> aliased_groups;
static uint64_t curr_seq_no = 0;
static map<size_t, size_t> contains;
static set<size_t> initialized_modules;
static map<std::string, stack_var *> global_vars;
static std::vector<void *> parent_vars;

/*
 * A mapping from the libnumdebug-assigned thread ID to the program stack for
 * that thread.
 */
static std::map<unsigned, std::vector<stack_frame *> *> program_stacks;
static pthread_mutex_t program_stacks_mutex = PTHREAD_MUTEX_INITIALIZER;

/*
 * A mapping from the pthread library's representation of a thread to our
 * internal representation, an unsigned integer.
 */
static std::map<pthread_t, unsigned> pthread_to_id;
static pthread_mutex_t pthread_to_id_mutex = PTHREAD_MUTEX_INITIALIZER;

/*
 * A mapping from a thread to 1) its parent thread, and 2) its offset from that
 * parent thread. Each child of a given thread will have a unique offset. For
 * the case of nested OMP parallel regions, this offset is the thread num of the
 * child thread.
 */
static std::map<unsigned, pair<unsigned, unsigned> > child_to_parent_threads;
static pthread_mutex_t child_to_parent_threads_mutex =
        PTHREAD_MUTEX_INITIALIZER;

/*
 * count_threads is used to assign every pthread created a unique ID that we use
 * internally to represent each thread. 0 is reserved for main thread before
 * first OMP region, so we start from 1.
 */
static unsigned count_threads = 1;
static pthread_mutex_t count_threads_mutex = PTHREAD_MUTEX_INITIALIZER;

#define PARENT_ALIASES_INIT_SIZE    1024
static size_t *parent_aliases = NULL;
static size_t parent_aliases_capacity = 0;
static size_t parent_aliases_length = 0;

#ifdef __NUMDEBUG_PROFILE
enum PROFILE_LABEL_ID { NEW_STACK = 0, RM_STACK, REGISTER_STACK_VAR, CALLING,
    INIT_MODULE, REGISTER_GLOBAL_VAR, ALIAS_GROUP_CHANGED, MALLOC_WRAPPER,
    REALLOC_WRAPPER, FREE_WRAPPER, N_LABELS };
static const char *PROFILE_LABELS[] = { "new_stack", "rm_stack",
    "register_stack_var", "calling", "init_module", "register_global_var",
    "alias_group_changed", "malloc_wrapper", "realloc_wrapper",
    "free_wrapper" };

perf_profile pp(PROFILE_LABELS, N_LABELS);
#endif

static map<unsigned, vector<stack_frame *> *> *unpacked_program_stacks;
static map<std::string, stack_var *> *unpacked_global_vars;
static map<unsigned, pair<unsigned, unsigned> > *unpacked_thread_hierarchy;
/*
 * A list of objects specifying what memory locations were updated with
 * corrected pointers during the sweep over heap allocations.
 */
static vector<already_updated_ptrs *> already_updated;
static std::map<void *, ptr_and_size *> *old_to_new;

static std::map<std::string, std::vector<int> *> structs;

static pthread_t checkpoint_thread;
static pthread_mutex_t checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static volatile int checkpoint_thread_running = 0;

static int stack_nesting = 0;
int ____numdebug_replaying = 0;
int ____numdebug_rerunning = 0;

static inline bool valid_group(size_t group) {
    return group > 0;
}

static bool aliased(size_t group1, size_t group2) {
    if (group1 == group2) return true;

    if (aliased_groups.find(group1) != aliased_groups.end() &&
            aliased_groups.find(group2) != aliased_groups.end()) {
        // Can just do a pointer comparison here
        return aliased_groups[group1] == aliased_groups[group2];
    }
    return false;
}

void init_numdebug() {
    atexit(onexit);

    pthread_t self = pthread_self();
    assert(pthread_to_id.size() == 0);
    pthread_to_id[self] = 0;
    program_stacks[0] = new std::vector<stack_frame *>();

    parent_aliases = (size_t *)malloc(sizeof(size_t) *
            PARENT_ALIASES_INIT_SIZE);
    parent_aliases_capacity = PARENT_ALIASES_INIT_SIZE;

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
        unpacked_program_stacks = deserialize_program_stacks(stack_serialized,
                stack_serialized_len);

        // read in globals state
        uint64_t globals_serialized_len;
        safe_read(fd, &globals_serialized_len, sizeof(globals_serialized_len),
                "globals_serialized_len", checkpoint_file);
        unsigned char *globals_serialized = (unsigned char *)malloc(
                globals_serialized_len);
        safe_read(fd, globals_serialized, globals_serialized_len,
                "globals_serialized", checkpoint_file);
        unpacked_global_vars = deserialize_globals(globals_serialized,
                globals_serialized_len);

        // read in thread state
        uint64_t thread_hierarchy_serialized_len;
        safe_read(fd, &thread_hierarchy_serialized_len,
                sizeof(thread_hierarchy_serialized_len),
                "thread_hierarchy_serialized_len", checkpoint_file);
        unsigned char *thread_hierarchy_serialized = (unsigned char *)malloc(
                thread_hierarchy_serialized_len);
        safe_read(fd, thread_hierarchy_serialized,
                thread_hierarchy_serialized_len, "thread_hierarchy_serialized",
                checkpoint_file);
        unpacked_thread_hierarchy = deserialize_thread_hierarchy(
                thread_hierarchy_serialized, thread_hierarchy_serialized_len);

        // read in heap serialization
        uint64_t n_heap_allocs;
        safe_read(fd, &n_heap_allocs, sizeof(n_heap_allocs), "n_heap_allocs",
                checkpoint_file);
        old_to_new = new std::map<void *, ptr_and_size *>();
        std::vector<heap_allocation *> *new_heap =
            new std::vector<heap_allocation *>();
        for (unsigned int i = 0; i < n_heap_allocs; i++) {
            void *old_address;
            size_t size;
            size_t group;
            int is_cuda_alloc, elem_is_ptr, elem_is_struct;

            safe_read(fd, &old_address, sizeof(old_address), "old_address",
                    checkpoint_file);
            safe_read(fd, &size, sizeof(size), "size", checkpoint_file);
            safe_read(fd, &group, sizeof(group), "group", checkpoint_file);
            safe_read(fd, &is_cuda_alloc, sizeof(is_cuda_alloc),
                    "is_cuda_alloc", checkpoint_file);
            safe_read(fd, &elem_is_ptr, sizeof(elem_is_ptr), "elem_is_ptr",
                    checkpoint_file);
            safe_read(fd, &elem_is_struct, sizeof(elem_is_struct), "elem_is_struct",
                    checkpoint_file);

            void *new_address;
            if (is_cuda_alloc) {
                void *host_tmp = malloc(size);
                assert(host_tmp != NULL);
                safe_read(fd, host_tmp, size, "heap contents", checkpoint_file);

                CHECK(cudaMalloc((void **)&new_address, size));
                CHECK(cudaMemcpy(new_address, host_tmp, size,
                            cudaMemcpyHostToDevice));
                free(host_tmp);
            } else {
                new_address = malloc(size);
                assert(new_address != NULL);
                safe_read(fd, new_address, size, "heap contents",
                        checkpoint_file);
            }

            heap_allocation *alloc = new heap_allocation(new_address, size,
                    group, 0, is_cuda_alloc, elem_is_ptr, elem_is_struct);

            if (elem_is_struct) {
                size_t elem_size;

                safe_read(fd, &elem_size, sizeof(elem_size), "elem_size",
                        checkpoint_file);
                alloc->add_struct_elem_size(elem_size);

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
            if (alloc->check_elem_is_ptr()) {
                /*
                 * Iterate through all elements of this array and convert
                 * pointers from old values to new values.
                 */
                assert(alloc->get_size() % sizeof(void *) == 0);
                int nelems = alloc->get_size() / sizeof(void *);
                if (alloc->get_is_cuda_alloc()) {
#ifdef CUDA_SUPPORT
                    vector<int> ptr_offsets; ptr_offsets.push_back(0);
                    translate_cuda_pointers(alloc->get_address(), nelems,
                            sizeof(void *), ptr_offsets, old_to_new);
#else
                    assert(false);
#endif
                } else {
                    void **arr = (void **)(alloc->get_address());

                    for (int i = 0; i < nelems; i++) {
                        void *new_ptr = translate_old_ptr(arr[i], old_to_new);
                        if (new_ptr != NULL) arr[i] = new_ptr;
                    }

                    already_updated_ptrs *updated = new already_updated_ptrs(
                            (unsigned char *)arr, sizeof(void *), nelems);
                    already_updated.push_back(updated);
                }

            } else if (alloc->check_elem_is_struct()) {
                int elem_size = alloc->get_elem_size();
                std::vector<int> *ptr_field_offsets = alloc->get_ptr_field_offsets();
                if (ptr_field_offsets->size() > 0) {
                    assert(alloc->get_size() % elem_size == 0);

                    int nelems = alloc->get_size() / elem_size;
                    if (alloc->get_is_cuda_alloc()) {
#ifdef CUDA_SUPPORT
                        translate_cuda_pointers(alloc->get_address(),
                                nelems, elem_size, *ptr_field_offsets,
                                old_to_new);
#else
                        assert(false);
#endif
                    } else {
                        /*
                         * Iterate through all of the structs in the array and
                         * convert the pointers at the specified offsets.
                         */
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

        unsigned n_contains_mappings;
        safe_read(fd, &n_contains_mappings, sizeof(n_contains_mappings),
                "n_contains_mappings", checkpoint_file);
        for (unsigned i = 0; i < n_contains_mappings; i++) {
            size_t container, child;
            safe_read(fd, &container, sizeof(container), "container",
                    checkpoint_file);
            safe_read(fd, &child, sizeof(child), "child", checkpoint_file);

            assert(contains.find(container) == contains.end());
            contains[container] = child;
        }

        unsigned n_aliased_groups;
        safe_read(fd, &n_aliased_groups, sizeof(n_aliased_groups),
                "n_aliased_groups", checkpoint_file);
        for (unsigned i = 0; i < n_aliased_groups; i++) {
            std::set<size_t> *groups = new std::set<size_t>();
            unsigned size;
            safe_read(fd, &size, sizeof(size), "aliased_groups_size",
                    checkpoint_file);
            for (unsigned ii = 0; ii < size; ii++) {
                size_t group;
                safe_read(fd, &group, sizeof(group), "group", checkpoint_file);
                groups->insert(group);

                assert(aliased_groups.find(group) == aliased_groups.end());
                aliased_groups[group] = groups;
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

static void merge_alias_groups(size_t alias1, size_t alias2) {
    assert(valid_group(alias1));
    assert(valid_group(alias2));

    map<size_t, set<size_t> *>::iterator existing1_iter =
        aliased_groups.find(alias1);
    map<size_t, set<size_t> *>::iterator existing2_iter =
        aliased_groups.find(alias2);

    std::set<size_t> *existing1 = NULL;
    std::set<size_t> *existing2 = NULL;
    if (existing1_iter != aliased_groups.end()) {
        existing1 = existing1_iter->second;
    }
    if (existing2_iter != aliased_groups.end()) {
        existing2 = existing2_iter->second;
    }

    map<size_t, size_t>::iterator child1_iter = contains.find(alias1);
    map<size_t, size_t>::iterator child2_iter = contains.find(alias2);

    if (child1_iter != contains.end() && child2_iter != contains.end()) {
        size_t child1 = child1_iter->second;
        size_t child2 = child2_iter->second;

        /*
         * It's possible to get a cycle here if aliases can be their own
         * children (e.g. if you cast a pointer to store it in itself). This
         * doesn't really fix the problem except for in trivial cases, so TODO.
         */
        if (child1 != alias1 || child2 != alias2) {
            merge_alias_groups(child1, child2);
        }
    }

    if (existing1 == NULL && existing2 == NULL) {
        // Neither is aliased to anything yet, so alias them to each other only
        std::set<size_t> *new_aliases = new std::set<size_t>();
        new_aliases->insert(alias1);
        new_aliases->insert(alias2);
        aliased_groups[alias1] = new_aliases;
        aliased_groups[alias2] = new_aliases;
    } else if (existing1 != NULL && existing2 != NULL) {
        if (existing1 == existing2) {
            /*
             * We know they're already aliased, and both aliases must already be
             * in this vector
             */
            return;
        } else {
            std::set<size_t> *new_groups = new std::set<size_t>();
            for (std::set<size_t>::iterator i = existing1->begin(),
                    e = existing1->end(); i != e; i++) {
                new_groups->insert(*i);
            }
            for (std::set<size_t>::iterator i = existing2->begin(),
                    e = existing2->end(); i != e; i++) {
                new_groups->insert(*i);
            }

            for (std::set<size_t>::iterator i = new_groups->begin(),
                    e = new_groups->end(); i != e; i++) {
                aliased_groups[*i] = new_groups;
            }

            delete existing1; delete existing2;
        }
    } else if (existing1 != NULL) {
        // alias2 is missing
        existing1->insert(alias2);
        aliased_groups[alias2] = existing1;
    } else if (existing2 != NULL) {
        // alias1 is missing
        existing2->insert(alias1);
        aliased_groups[alias1] = existing2;
    }
}

void init_module(size_t module_id, int n_contains_mappings, int nstructs, ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(INIT_MODULE);
#endif

    bool replay = (getenv("NUMDEBUG_CHECKPOINT_FILE") != NULL);
    va_list vl;
    va_start(vl, nstructs);

    bool initialized = (initialized_modules.find(module_id) !=
            initialized_modules.end());
    assert(!initialized);

    for (int i = 0; i < n_contains_mappings; i++) {
        size_t container = va_arg(vl, size_t);
        size_t child = va_arg(vl, size_t);

        if (!replay) {
            contains[container] = child;
        }
    }

    for (int i = 0; i < nstructs; i++) {
        char *struct_name = va_arg(vl, char *);
        int nfields = va_arg(vl, int);
        string struct_name_str(struct_name);
        /*
         * We may receive struct information from multiple modules, resulting in
         * repeated inserts of the same struct definition. We use the first
         * definition to insert an entry into structs, and then check all future
         * definitions against it.
         */
        bool insert_new = false;
        if (structs.find(struct_name_str) == structs.end()) {
            insert_new = true;
            structs[struct_name_str] = new std::vector<int>();
        }

#ifdef VERBOSE
        fprintf(stderr, "struct %s offsets:", struct_name_str.c_str());
#endif

        for (int j = 0; j < nfields; j++) {
            int offset = va_arg(vl, int);
            assert(offset >= 0);
            if (insert_new) {
                structs[struct_name_str]->push_back(offset);
            } else {
                assert(structs[struct_name_str]->at(j) == offset);
            }
#ifdef VERBOSE
            fprintf(stderr, " %d", offset);
#endif
        }
    }

    va_end(vl);

#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(INIT_MODULE);
#endif
}

void new_stack(unsigned int n_local_arg_aliases, unsigned int nargs, ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(NEW_STACK);
#endif
    std::vector<stack_frame *> *program_stack = get_my_stack();
    assert(program_stack->size() == 0 || calling_lbl >= 0);
    if (calling_lbl >= 0) {
        stack_tracker.push(calling_lbl);
    }
    program_stack->push_back(new stack_frame());
    stack_nesting++;

    /*
     * If this is the first new_stack, we just entered main and there are no
     * parent aliases.
     *
     * A callee may have fewer arguments than a caller if the callee is a
     * variable argument function. I'm not sure if variable argument functions
     * are really supported at the moment, so for now we assert they are equal.
     */
    assert(program_stack->size() == 1 || n_local_arg_aliases ==
            parent_aliases_length);

    std::vector<size_t> new_aliases;
    va_list vl;
    va_start(vl, nargs);
    for (unsigned i = 0; i < n_local_arg_aliases; i++) {
        size_t alias = va_arg(vl, size_t);
        new_aliases.push_back(alias);
    }

    return_aliases.push_back(return_alias);

    if (program_stack->size() > 1) {
        for (unsigned i = 0; i < n_local_arg_aliases; i++) {
            if (valid_group(new_aliases[i]) && valid_group(parent_aliases[i])) {
                merge_alias_groups(new_aliases[i], parent_aliases[i]);
                assert(aliased(new_aliases[i], parent_aliases[i]));
            }
        }
    }

    for (unsigned i = 0; i < nargs; i++) {
        const char *mangled_name = va_arg(vl, const char *);
        const char *full_type = va_arg(vl, const char *);
        void *ptr = va_arg(vl, void *);
        size_t size = va_arg(vl, size_t);
        int is_ptr = va_arg(vl, int);
        int is_struct = va_arg(vl, int);
        int n_ptr_fields = va_arg(vl, int);
        stack_var *new_var = get_var(mangled_name, full_type, ptr, size, is_ptr,
                is_struct, n_ptr_fields, vl);
        program_stack->back()->add_stack_var(new_var);
    }

    va_end(vl);

#ifdef VERBOSE
    fprintf(stderr, "Incrementing stack depth to %d\n", stack_nesting);
#endif
#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(NEW_STACK);
#endif
}

void calling(int lbl, size_t set_return_alias, unsigned naliases, ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(CALLING);
#endif
    calling_lbl = lbl;
    return_alias = set_return_alias;

    if (parent_aliases_capacity < naliases) {
        parent_aliases_capacity *= 2;
        parent_aliases = (size_t *)realloc(parent_aliases, sizeof(size_t) *
                parent_aliases_capacity);
    }

    va_list vl;
    va_start(vl, naliases);
    for (unsigned i = 0; i < naliases; i++) {
        parent_aliases[i] = va_arg(vl, size_t);
    }
    va_end(vl);
    parent_aliases_length = naliases;

#ifdef VERBOSE
    fprintf(stderr, "Calling %d: ", lbl);
    for (unsigned int i = 0; i < stack_tracker.size(); i++) {
        fprintf(stderr, "%d ", stack_tracker.at(i));
    }
    fprintf(stderr, "\n");
#endif
#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(CALLING);
#endif
}

void rm_stack(bool has_return_alias, size_t returned_alias) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(RM_STACK);
#endif
    std::vector<stack_frame *> *program_stack = get_my_stack();
    stack_frame *curr = program_stack->back();
    program_stack->pop_back();
    delete curr;

    size_t this_return_alias = return_aliases.back();
    return_aliases.pop_back();

    /*
     * We pass returned_alias as 0 here when the value being returned is not a
     * pointer (in which case we don't care about its aliases).
     */
    if (has_return_alias && valid_group(returned_alias)) {
        assert(valid_group(this_return_alias));
        merge_alias_groups(this_return_alias, returned_alias);
        assert(aliased(this_return_alias, returned_alias));
    }

    stack_tracker.pop();
    stack_nesting--;
#ifdef VERBOSE
    fprintf(stderr, "Decrementing stack depth to %d\n", stack_nesting);
#endif

    if (____numdebug_rerunning && stack_nesting < 0) {
#ifdef VERBOSE
        fprintf(stderr, "Exiting replay...\n");
#endif
        exit(55);
    }
#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(RM_STACK);
#endif
}

int peek_next_call() {
    assert(trace_index < trace.size());
    return trace[trace_index];
}

int get_next_call() {
    assert(trace_index < trace.size());
    return trace[trace_index++];
}

static stack_var *get_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        va_list vl) {
    // Basic checks in case the code generation breaks
    assert(is_ptr == 0 || is_ptr == 1);
    assert(is_struct == 0 || is_struct == 1);
    assert(n_ptr_fields >= 0);
    assert(size >= 0);

    stack_var *new_var = new stack_var(mangled_name, full_type, ptr, size,
            is_ptr);
    for (int i = 0; i < n_ptr_fields; i++) {
        int offset = va_arg(vl, int);
        assert(offset >= 0);
        new_var->add_pointer_offset(offset);
    }
    return new_var;
}

/*
 * TODO support stack arrays:
 *   Today, the registration of a stack array appears as follows:
 *     lbl_4: int arr2[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
 *     register_stack_var("main|arr2|0", "[10 x i32]", &arr2, 40, 0, 0, 0);
 *   This registration would not allow the full recreation of stack state at
 *   replay.
 */
void register_stack_var(const char *mangled_name,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(REGISTER_STACK_VAR);
#endif
    // Skip the expensive stack var creation if we can
    std::vector<stack_frame *> *program_stack = get_my_stack();
    if (!program_stack->back()->stack_var_exists(std::string(mangled_name),
                ptr)) {

        va_list vl;
        va_start(vl, n_ptr_fields);
        stack_var *new_var = get_var(mangled_name, full_type, ptr, size, is_ptr,
                is_struct, n_ptr_fields, vl);
        va_end(vl);

        program_stack->back()->add_stack_var(new_var);
    }
#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(REGISTER_STACK_VAR);
#endif
}

void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(REGISTER_GLOBAL_VAR);
#endif
    va_list vl;
    va_start(vl, n_ptr_fields);
    stack_var *new_var = get_var(mangled_name, full_type, ptr, size, is_ptr,
            is_struct, n_ptr_fields, vl);
    va_end(vl);

    std::string mangled_name_str(mangled_name);
    assert(global_vars.find(mangled_name_str) == global_vars.end());
    global_vars[mangled_name_str] = new_var;

#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(REGISTER_GLOBAL_VAR);
#endif
}

int alias_group_changed(int ngroups, ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(ALIAS_GROUP_CHANGED);
#endif
    va_list vl;
    va_start(vl, ngroups);
    for (int i = 0; i < ngroups; i++) {
        size_t group = va_arg(vl, size_t);

        if (valid_group(group)) {
            changed_groups.insert(group);
        }
    }
    va_end(vl);
#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(ALIAS_GROUP_CHANGED);
#endif
    return 0;
}

void malloc_helper(void *new_ptr, size_t nbytes, size_t group,
        int is_cuda_alloc, int is_ptr, int is_struct, int elem_size,
        int *ptr_field_offsets, int n_ptr_field_offsets) {
    assert(valid_group(group) || is_cuda_alloc);

    heap_allocation *alloc = new heap_allocation(new_ptr, nbytes, group,
            curr_seq_no, is_cuda_alloc, is_ptr, is_struct);

    if (is_struct) {
        alloc->add_struct_elem_size(elem_size);
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

/*
 * If has_type_info is true, then the first two optional arguments are:
 *   int is_ptr : whether this allocation contains pointer elements
 *   int is_struct : whether this allocation contains struct elements
 *
 * If is_struct is true, then a list of the fields in the struct elements that
 * contain pointers is also passed. This list starts with:
 *   int elem_size : The size of each struct in this allocation
 *   int n_ptr_fields : The number of pointer fields in this struct
 *
 * followed by n_ptr_fields int arguments, each of which is an offset in the
 * struct at which a pointer can be found.
 */
void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(MALLOC_WRAPPER);
#endif
    assert(valid_group(group));

    void *ptr = malloc(nbytes);

    if (ptr != NULL) {
        numdebug_type_info info; memset(&info, 0x00, sizeof(info));

        if (is_struct) {
            va_list vl;
            va_start(vl, is_struct);
            parse_type_info(vl, &info);
            va_end(vl);
        }
        malloc_helper(ptr, nbytes, group, 0, is_ptr, is_struct, info.elem_size,
                info.ptr_field_offsets, info.n_ptr_fields);
    }

#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(MALLOC_WRAPPER);
#endif
    return ptr;
}

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(REALLOC_WRAPPER);
#endif
    assert(valid_group(group));

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
            int is_ptr = 0; int is_struct = 0; int n_struct_ptr_fields = 0;
            int elem_size = 0;
            int *ptr_field_offsets = NULL;
            if (alloc->check_elem_is_ptr()) {
                is_ptr = 1;
            } else if (alloc->check_elem_is_struct()) {
                is_struct = 1;
                elem_size = alloc->get_elem_size();
                n_struct_ptr_fields = alloc->get_ptr_field_offsets()->size();
                ptr_field_offsets = (int *)malloc(sizeof(int) *
                        n_struct_ptr_fields);
                for (int i = 0; i < n_struct_ptr_fields; i++) {
                    ptr_field_offsets[i] = (*alloc->get_ptr_field_offsets())[i];
                }
            }

            map<void *, heap_allocation *>::iterator in_heap =
                find_in_heap(ptr);
            assert(in_heap->second->get_alias_group() == group);
            free_helper(ptr);
            malloc_helper(new_ptr, nbytes, group, 0, is_ptr, is_struct,
                    elem_size, ptr_field_offsets, n_struct_ptr_fields);
        }
    }

#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(REALLOC_WRAPPER);
#endif
    return new_ptr;
}

void free_helper(void *ptr) {
    map<void *, heap_allocation *>::iterator in_heap =
        find_in_heap(ptr);
    size_t group = in_heap->second->get_alias_group();
    int seq = in_heap->second->get_seq();

    vector<heap_allocation *>::iterator in_alias_to_heap =
        std::find(alias_to_heap[group]->begin(), alias_to_heap[group]->end(),
                in_heap->second);
    assert(in_alias_to_heap != alias_to_heap[group]->end());

    vector<heap_allocation *> *seq_allocs = heap_sequence_groups[seq];
    vector<heap_allocation *>::iterator in_heap_sequence_groups =
        std::find(seq_allocs->begin(), seq_allocs->end(), in_heap->second);
    assert(in_heap_sequence_groups != seq_allocs->end());

    heap.erase(in_heap);
    alias_to_heap[group]->erase(in_alias_to_heap);

    seq_allocs->erase(in_heap_sequence_groups);
    if (seq_allocs->empty()) {
        heap_sequence_groups.erase(seq);
        delete seq_allocs;
    }
}

map<void *, heap_allocation *>::iterator find_in_heap(void *ptr) {
    map<void *, heap_allocation *>::iterator in_heap = heap.find(ptr);
    assert(in_heap != heap.end());
    assert(in_heap->second->get_address() == ptr);

    return in_heap;
}

void free_wrapper(void *ptr, size_t group) {
#ifdef __NUMDEBUG_PROFILE
    pp.start_timer(FREE_WRAPPER);
#endif
    map<void *, heap_allocation *>::iterator in_heap = find_in_heap(ptr);
    size_t original_group = in_heap->second->get_alias_group();
    assert(aliased(original_group, group));

    free_helper(ptr);
    free(ptr);
#ifdef __NUMDEBUG_PROFILE
    pp.stop_timer(FREE_WRAPPER);
#endif
}

typedef struct _checkpoint_thread_ctx {
    unsigned char *stacks_serialized;
    unsigned char *globals_serialized;
    unsigned char *thread_hierarchy_serialized;
    uint64_t stacks_serialized_len;
    uint64_t globals_serialized_len;
    uint64_t thread_hierarchy_serialized_len;

    vector<heap_allocation *> *heap_to_checkpoint;

    vector<int> *stack_tracker;
} checkpoint_thread_ctx;
static void *checkpoint_func(void *data);

void wait_for_checkpoint() {
    pthread_mutex_lock(&checkpoint_mutex);
    if (checkpoint_thread_running) {
        pthread_join(checkpoint_thread, NULL);
    }
    pthread_mutex_unlock(&checkpoint_mutex);
}

static void update_live_var(string name, stack_var *dead, stack_var *live) {

    assert(live->get_name() == dead->get_name());
    assert(live->get_type() == dead->get_type());
    assert(live->get_size() == dead->get_size());
    assert(live->check_is_ptr() == dead->check_is_ptr());
    assert(live->get_ptr_offsets()->size() == dead->get_ptr_offsets()->size());
    assert(dead->get_tmp_buffer() != NULL);

#ifdef VERBOSE
    fprintf(stderr, "Restoring variable %s with size %lu at %p\n", name.c_str(),
            live->get_size(), live->get_address());
#endif
    memcpy(live->get_address(), dead->get_tmp_buffer(), live->get_size());
    dead->clear_tmp_buffer();
}

static void restore_program_stack(vector<stack_frame *> *unpacked,
        vector<stack_frame *> *real) {

    assert(unpacked->size() == real->size());

    vector<stack_frame *>::iterator unpacked_stack_iter = unpacked->begin();
    vector<stack_frame *>::iterator unpacked_stack_end = unpacked->end();
    vector<stack_frame *>::iterator live_stack_iter = real->begin();
    vector<stack_frame *>::iterator live_stack_end = real->end();

    while (unpacked_stack_iter != unpacked_stack_end &&
            live_stack_iter != live_stack_end) {
        stack_frame *live = *live_stack_iter;
        stack_frame *unpacked = *unpacked_stack_iter;

        /*
         * It is possible that live is larger than unpacked if the
         * checkpoint run didn't reach some local variable declarations
         * before this checkpoint was created.
         */
        assert(live->size() >= unpacked->size());

        /*
         * Match entries in the checkpoint to known locals in the running
         * program
         */
        for (stack_frame::iterator i = unpacked->begin(),
                e = unpacked->end(); i != e; i++) {
            assert(live->find(i->first) != live->end());

            string name = i->first;
            stack_var *dead = i->second;
            stack_frame::iterator found = live->find(name);
            stack_var *live = found->second;

            update_live_var(name, dead, live);
        }

        unpacked_stack_iter++;
        live_stack_iter++;
    }

    assert(unpacked_stack_iter == unpacked_stack_end &&
            live_stack_iter == live_stack_end);
}

void checkpoint() {
    new_stack(0, 0);

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
       
        // Assert same number of threads
        assert(unpacked_program_stacks->size() == program_stacks.size());
        assert(unpacked_global_vars->size() == global_vars.size());
        /*
         * restore non-pointers in the stack to have the correct values by
         * transferring from the deserialized objects into the newly registered
         * addresses
         */

        for (map<unsigned, vector<stack_frame *> *>::iterator stacks_iter =
                unpacked_program_stacks->begin(), stacks_end =
                unpacked_program_stacks->end(); stacks_iter != stacks_end;
                stacks_iter++) {
            unsigned tid = stacks_iter->first;
            assert(program_stacks.find(tid) != program_stacks.end());

            restore_program_stack((*unpacked_program_stacks)[tid],
                    program_stacks[tid]);
        }

        /*
         * Verify all of the globals that we unpacked are also in the live
         * running program, then update them.
         */
        for (map<string, stack_var *>::iterator i =
                unpacked_global_vars->begin(), e = unpacked_global_vars->end();
                i != e; i++) {
            assert(global_vars.find(i->first) != global_vars.end());

            string name = i->first;
            stack_var *dead = i->second;
            stack_frame::iterator found = global_vars.find(name);
            stack_var *live = found->second;

            update_live_var(name, dead, live);
        }

        /*
         * find pointers in the stack and restore them to point to the correct
         * object. at the same time, use these pointers as indicators of places
         * in the heap where other references need updating by following
         * pointers.
         *
         * Use updated to track which local variables we've already updated and
         * skip them.
         */
        set<void *> updated;
        // For each stack frame
        for (map<unsigned, vector<stack_frame *> *>::iterator stacks_iter =
                program_stacks.begin(), stacks_end = program_stacks.end();
                stacks_iter != stacks_end; stacks_iter++) {
            vector<stack_frame *> *stack = stacks_iter->second;

            for (vector<stack_frame *>::iterator frame_iter =
                    stack->begin(), frame_end = stack->end();
                    frame_iter != frame_end; frame_iter++) {
                stack_frame *frame = *frame_iter;
                // For each stack variable in the current frame
                for (stack_frame::iterator var_iter = frame->begin(),
                        var_end = frame->end(); var_iter != var_end;
                        var_iter++) {
                    stack_var *var = var_iter->second;
                    fix_stack_or_global_pointer(var->get_address(),
                            var->get_type());
                }
            }
        }

        for (map<string, stack_var *>::iterator globals_iter =
                global_vars.begin(), globals_end = global_vars.end();
                globals_iter != globals_end; globals_iter++) {
            stack_var *var = globals_iter->second;
            fix_stack_or_global_pointer(var->get_address(), var->get_type());
        }

        ____numdebug_replaying = 0;
        ____numdebug_rerunning = 1;
        stack_nesting = 1;

        rm_stack(false, 0);
        return;
    }

    if (checkpoint_thread_running) {
        rm_stack(false, 0);
        return;
    }

    pthread_mutex_lock(&checkpoint_mutex);

    if (checkpoint_thread_running) {
        pthread_mutex_unlock(&checkpoint_mutex);
        rm_stack(false, 0);
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
        heap_allocation *curr = heap_iter->second;
        heap_allocation *copy = new heap_allocation();
        curr->copy(copy);
        heap_to_checkpoint->push_back(copy);
    }

    //TODO use change aliases to reduce checkpoint size
    set<size_t> all_changed;
    for (set<size_t>::iterator i = changed_groups.begin(), e =
            changed_groups.end(); i != e; i++) {
        size_t group = *i;
        if (aliased_groups.find(group) != aliased_groups.end()) {
            for (set<size_t>::iterator iter =
                    aliased_groups[group]->begin(), end =
                    aliased_groups[group]->end(); iter != end; iter++) {
                changed_groups.insert(*iter);
            }
        } else {
            changed_groups.insert(group);
        }
    }
    changed_groups.clear();

    checkpoint_thread_ctx *thread_ctx = (checkpoint_thread_ctx *)malloc(
            sizeof(checkpoint_thread_ctx));
    thread_ctx->stacks_serialized = serialize_program_stacks(&program_stacks,
            &thread_ctx->stacks_serialized_len);
    thread_ctx->globals_serialized = serialize_globals(&global_vars,
            &thread_ctx->globals_serialized_len);
    thread_ctx->thread_hierarchy_serialized = serialize_thread_hierarchy(
            &child_to_parent_threads,
            &thread_ctx->thread_hierarchy_serialized_len);
    thread_ctx->heap_to_checkpoint = heap_to_checkpoint;
    thread_ctx->stack_tracker = new std::vector<int>();
    stack_tracker.copy(thread_ctx->stack_tracker);

    pthread_mutex_unlock(&checkpoint_mutex);

    pthread_create(&checkpoint_thread, NULL, checkpoint_func, thread_ctx);

    rm_stack(false, 0);
}

static bool is_pointer_type(string type) {
    return type[type.length() - 1] == '*';
}

static bool is_struct_type(string type) {
    size_t index = type.find("%struct.");
    return index != string::npos && index == 0;
}

static void fix_stack_or_global_pointer(void *container, string type) {

    if (is_pointer_type(type)) {
        void **nested_container = (void **)container;
        void *new_ptr = translate_old_ptr(*nested_container, old_to_new);
        if (new_ptr != NULL) {
            *nested_container = new_ptr;
        }
    } else if (is_struct_type(type)) {
        size_t open_brace_index = type.find("{");
        assert(open_brace_index != string::npos);
        open_brace_index += 2;
        size_t close_brace_index = type.find("}");
        assert(close_brace_index != string::npos);
        close_brace_index -= 1;

        string struct_name = type.substr(8);
        struct_name = struct_name.substr(0, struct_name.find("=") - 1);

        std::vector<int> *fields = structs[struct_name];
        string nested_types = type.substr(open_brace_index, close_brace_index -
                open_brace_index);

        int field_index = 0;
        unsigned int index = 0;
        unsigned int start = 0;
        while (index < nested_types.length()) {
            while (index < nested_types.length() && nested_types[index] != ',') {
                index++;
            }

            /*
             * This requires the offset of every field in every declared struct
             * to be passed into init_numdebug. This is bad because that assumes
             * that struct definitions are all defined in the same scope as
             * main. This is okay for the moment, but should be addressed as a
             * future TODO. Recently, the practice of passing module-specific
             * information through new_stack was introduced, that would be a
             * good place to add module-specific struct declarations.
             */
            string curr = nested_types.substr(start, index - start);
            unsigned char *field_ptr = ((unsigned char *)container) +
                (*fields)[field_index];
            fix_stack_or_global_pointer((void *)field_ptr, curr);

            start = index + 1;
            while (start < nested_types.length() && nested_types[start] == ' ') {
                start++;
            }
            index = start;
            
            field_index++;
        }
    }
}

static void safe_write(int fd, void *ptr, ssize_t size, const char *msg,
        const char *filename) {
    if (write(fd, ptr, size) != size) {
        fprintf(stderr, "Error writing to %s: %s\n", filename, msg);
        exit(1);
    }
}

static void safe_read(int fd, void *ptr, ssize_t size, const char *msg,
        const char *filename) {
    if (read(fd, ptr, size) != size) {
        fprintf(stderr, "Error reading from %s: %s\n", filename, msg);
        exit(1);
    }
}

void *checkpoint_func(void *data) {
    checkpoint_thread_ctx *ctx = (checkpoint_thread_ctx *)data;
    unsigned char *stacks_serialized = ctx->stacks_serialized;
    uint64_t stacks_serialized_len = ctx->stacks_serialized_len;
    unsigned char *globals_serialized = ctx->globals_serialized;
    uint64_t globals_serialized_len = ctx->globals_serialized_len;
    unsigned char *thread_hierarchy_serialized =
        ctx->thread_hierarchy_serialized;
    uint64_t thread_hierarchy_serialized_len =
        ctx->thread_hierarchy_serialized_len;
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
    safe_write(fd, &stacks_serialized_len, sizeof(stacks_serialized_len),
            "stacks_serialized_len", dump_filename);
    safe_write(fd, stacks_serialized, ctx->stacks_serialized_len,
            "stacks_serialized", dump_filename);

    // Write the serialized globals out
    safe_write(fd, &globals_serialized_len, sizeof(globals_serialized_len),
            "globals_serialized_len", dump_filename);
    safe_write(fd, globals_serialized, globals_serialized_len,
            "globals_serialized", dump_filename);

    // Write out the thread hierarchy
    safe_write(fd, &thread_hierarchy_serialized_len,
            sizeof(thread_hierarchy_serialized_len),
            "thread_hierarchy_serialized_len", dump_filename);
    safe_write(fd, thread_hierarchy_serialized, thread_hierarchy_serialized_len,
            "thread_hierarchy_serialized", dump_filename);

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
        size_t group = alloc->get_alias_group();
        int is_cuda_alloc = alloc->get_is_cuda_alloc();
        int elem_is_ptr = alloc->check_elem_is_ptr();
        int elem_is_struct = alloc->check_elem_is_struct();

        safe_write(fd, &address, sizeof(address), "address", dump_filename);
        safe_write(fd, &size, sizeof(size), "size", dump_filename);
        safe_write(fd, &group, sizeof(group), "group", dump_filename);
        safe_write(fd, &is_cuda_alloc, sizeof(is_cuda_alloc), "is_cuda_alloc",
                dump_filename);
        safe_write(fd, &elem_is_ptr, sizeof(elem_is_ptr), "elem_is_ptr",
                dump_filename);
        safe_write(fd, &elem_is_struct, sizeof(elem_is_struct),
                "elem_is_struct", dump_filename);
        safe_write(fd, alloc->get_tmp_buffer(), size, "heap contents",
                dump_filename);

        if (elem_is_struct) {
            size_t elem_size = alloc->get_elem_size();

            safe_write(fd, &elem_size, sizeof(elem_size), "elem_size",
                    dump_filename);
            int elem_ptr_offsets_len =
                alloc->get_ptr_field_offsets()->size();
            safe_write(fd, &elem_ptr_offsets_len,
                    sizeof(elem_ptr_offsets_len), "elem_ptr_offsets_len",
                    dump_filename);
            for (unsigned int i = 0; i < alloc->get_ptr_field_offsets()->size();
                    i++) {
                int offset = (*alloc->get_ptr_field_offsets())[i];
                safe_write(fd, &offset, sizeof(offset), "offset",
                        dump_filename);
            }
        }

        // Release any deffered frees
        free(alloc->get_tmp_buffer());
    }

    unsigned n_contains_mappings = contains.size();
    safe_write(fd, &n_contains_mappings, sizeof(n_contains_mappings),
            "n_contains_mappings", dump_filename);
    // Dump container information to be loaded with the checkpoint
    for (map<size_t, size_t>::iterator i = contains.begin(), e = contains.end();
            i != e; i++) {
        size_t container = i->first;
        size_t child = i->second;
        safe_write(fd, &container, sizeof(container), "container",
                dump_filename);
        safe_write(fd, &child, sizeof(child), "child", dump_filename);
    }

    set<set<size_t> *> aliased_groups_ptr;
    for (map<size_t, set<size_t> *>::iterator i = aliased_groups.begin(),
            e = aliased_groups.end(); i != e; i++) {
        aliased_groups_ptr.insert(i->second);
    }

    unsigned n_aliased_groups = aliased_groups_ptr.size();
    safe_write(fd, &n_aliased_groups, sizeof(n_aliased_groups),
            "n_aliased_groups", dump_filename);
    for (set<set<size_t> *>::iterator i = aliased_groups_ptr.begin(),
            e = aliased_groups_ptr.end(); i != e; i++) {
        set<size_t> *curr = *i;
        unsigned curr_size = curr->size();
        safe_write(fd, &curr_size, sizeof(curr_size), "curr_size",
                dump_filename);

        for (set<size_t>::iterator ii = curr->begin(), ee = curr->end();
                ii != ee; ii++) {
            size_t group = *ii;
            safe_write(fd, &group, sizeof(group), "group", dump_filename);
        }
    }

    close(fd);
    free(stacks_serialized);
    free(globals_serialized);
    free(thread_hierarchy_serialized);
    for (vector<heap_allocation *>::iterator heap_iter =
            heap_to_checkpoint->begin(), heap_end = heap_to_checkpoint->end();
            heap_iter != heap_end; heap_iter++) {
        heap_allocation *curr = *heap_iter;
        delete curr;
    }
    delete heap_to_checkpoint;
    delete ctx->stack_tracker;
    free(ctx);

    checkpoint_thread_running = 0;

    return NULL;
}

unsigned entering_omp_parallel(unsigned lbl, unsigned nlocals, ...) {
    parent_vars.clear();

    stack_tracker.push(lbl);

    va_list vl;
    va_start(vl, nlocals);

    for (unsigned i = 0; i < nlocals; i++) {
        void *addr = va_arg(vl, void *);
        parent_vars.push_back(addr);
    }

    va_end(vl);

    pthread_t self = pthread_self();

    assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
    unsigned self_id = pthread_to_id[self];
    assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);

    return self_id;
}

unsigned register_thread_local_stack_vars(unsigned relation, unsigned parent,
        unsigned nlocals, ...) {
    unsigned global_tid;
    pthread_t self = pthread_self();

    if (____numdebug_replaying) {
        /*
         * Use the loaded thread hierarchy to figure out what ID this thread was
         * assigned previously.
         */
        bool found = false;
        for (map<unsigned, pair<unsigned, unsigned> >::iterator i =
                unpacked_thread_hierarchy->begin(), e =
                unpacked_thread_hierarchy->end(); i != e; i++) {
            unsigned id = i->first;
            pair<unsigned, unsigned> info = i->second;
            unsigned stored_parent = info.first;
            unsigned stored_relation = info.second;

            if (relation == stored_relation && parent == stored_parent) {
                global_tid = id;
                found = true;
                break;
            }
        }
        assert(found);

        assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
        if (pthread_to_id.find(self) == pthread_to_id.end()) {
            pthread_to_id[self] = global_tid;
        } else {
            assert(global_tid == pthread_to_id[self]);
        }
        assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);
    } else {
        assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
        if (pthread_to_id.find(self) == pthread_to_id.end()) {
            assert(pthread_mutex_lock(&count_threads_mutex) == 0);
            global_tid = count_threads++;
            assert(pthread_mutex_unlock(&count_threads_mutex) == 0);

            pthread_to_id[self] = global_tid;
        } else {
            global_tid = pthread_to_id[self];
        }
        assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);
    }

    assert(pthread_mutex_lock(&child_to_parent_threads_mutex));
    if (child_to_parent_threads.find(global_tid) !=
            child_to_parent_threads.end()) {
        // A thread may be a parent of itself
        assert(child_to_parent_threads[global_tid].first == global_tid);
        assert(child_to_parent_threads[global_tid].second == 0);
        assert(parent == global_tid);
        assert(relation == 0);
    } else {
        child_to_parent_threads[global_tid] = pair<unsigned, unsigned>(parent,
                relation);
    }
    assert(pthread_mutex_unlock(&child_to_parent_threads_mutex));

    return global_tid;
}

void leaving_omp_parallel() {
}

static std::vector<stack_frame *> *get_my_stack() {
    pthread_t self = pthread_self();

    assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
    assert(pthread_to_id.find(self) != pthread_to_id.end());
    unsigned self_id = pthread_to_id[self];
    assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);

    assert(pthread_mutex_lock(&program_stacks_mutex) == 0);
    assert(program_stacks.find(self_id) != program_stacks.end());
    std::vector<stack_frame *> *stack = program_stacks[self_id];
    assert(pthread_mutex_unlock(&program_stacks_mutex) == 0);

    return stack;
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
#ifdef __NUMDEBUG_PROFILE
    fprintf(stderr, "%s\n", pp.tostr().c_str());
#endif
}
