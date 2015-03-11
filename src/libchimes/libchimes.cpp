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
#include "libchimes_cuda.h"
#endif

#ifdef __CHIMES_PROFILE
#include "perf_profile.h"
#endif

#include "chimes_common.h"
#include "stack_var.h"
#include "stack_frame.h"
#include "heap_allocation.h"
#include "stack_serialization.h"
#include "thread_serialization.h"
#include "global_serialization.h"
#include "ptr_and_size.h"
#include "already_updated_ptrs.h"
#include "chimes_stack.h"
#include "heap_allocation.h"
#include "type_info.h"
#include "thread_ctx.h"

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
static std::vector<stack_frame *> *get_stack_for(unsigned self_id);
static unsigned get_my_tid();
static thread_ctx *get_my_context();
static thread_ctx *get_context_for(unsigned tid);

// global data structures that must persist across library calls

/*
 * trace is used during replay to store the trace of calls or parallel regions
 * from the previous execution, and is then used to replay that trace. This
 * basically stores the old contents of stack_tracker.
 */
static map<unsigned, vector<int> > traces;
static map<unsigned, unsigned> trace_indices;

/*
 * Globally shared heap representation used by all threads.
 */
static map<void *, heap_allocation *> heap;
static map<size_t, vector<heap_allocation *> *> alias_to_heap;
static pthread_rwlock_t heap_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * Mapping from heap groups to the other heap groups they may be aliased with.
 */
static map<size_t, set<size_t> *> aliased_groups;
static pthread_rwlock_t aliased_groups_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * List of globally registered variables. This includes anything that isn't
 * declared inside a function.
 */
static map<std::string, stack_var *> global_vars;
static pthread_rwlock_t globals_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * A mapping from alias groups to the alias group that they may contain (in the
 * case of indirect references with nested pointers or structs with contain
 * pointers.
 */
static map<size_t, size_t> contains;
static pthread_rwlock_t contains_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * Track which modules have had their metadata initialized already, thread-safe.
 */
static set<size_t> initialized_modules;
static pthread_mutex_t module_mutex = PTHREAD_MUTEX_INITIALIZER;

/*
 * Thread-specific information tracked by each thread, e.g. program stack,
 * trace, etc.
 */
static map<unsigned, thread_ctx *> thread_ctxs;
static pthread_rwlock_t thread_ctxs_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * A mapping from the pthread library's representation of a thread to our
 * internal representation, an unsigned integer.
 */
static std::map<pthread_t, unsigned> pthread_to_id;
static pthread_mutex_t pthread_to_id_mutex = PTHREAD_MUTEX_INITIALIZER;

/*
 * count_threads is used to assign every pthread created a unique ID that we use
 * internally to represent each thread. 0 is reserved for main thread before
 * first OMP region, so we start from 1.
 */
static unsigned count_threads = 1;
static pthread_mutex_t count_threads_mutex = PTHREAD_MUTEX_INITIALIZER;

/*
 * Count threads that have hit the checkpoint so that we know when all are
 * inside.
 */
static unsigned threads_in_checkpoint = 0;
static pthread_mutex_t threads_in_checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t threads_in_checkpoint_cond = PTHREAD_COND_INITIALIZER;

#define PARENT_ALIASES_INIT_SIZE    1024
static size_t *parent_aliases = NULL;
static size_t parent_aliases_capacity = 0;
static size_t parent_aliases_length = 0;

#ifdef __CHIMES_PROFILE
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

int ____chimes_replaying = 0;
int ____chimes_rerunning = 0;

static inline bool valid_group(size_t group) {
    return group > 0;
}

static bool aliased(size_t group1, size_t group2) {
    bool result = false;
    if (group1 == group2) {
        result = true;
    } else {
        assert(pthread_rwlock_rdlock(&aliased_groups_lock) == 0);
        if (aliased_groups.find(group1) != aliased_groups.end() &&
                aliased_groups.find(group2) != aliased_groups.end()) {
            // Can just do a pointer comparison here
            result = aliased_groups[group1] == aliased_groups[group2];
        }
        assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);
    }
    return result;
}

void init_chimes() {
    atexit(onexit);

    pthread_t self = pthread_self();
    assert(pthread_to_id.size() == 0);
    pthread_to_id[self] = 0;
    thread_ctxs[0] = new thread_ctx(self);

    parent_aliases = (size_t *)malloc(sizeof(size_t) *
            PARENT_ALIASES_INIT_SIZE);
    parent_aliases_capacity = PARENT_ALIASES_INIT_SIZE;

    char *checkpoint_file = getenv("CHIMES_CHECKPOINT_FILE");
    if (checkpoint_file != NULL) {
#ifdef VERBOSE
        fprintf(stderr, "Using checkpoint file %s\n", checkpoint_file);
#endif
        ____chimes_replaying = 1;
        int fd = open(checkpoint_file, O_RDONLY);
        assert(fd >= 0);

        int nthreads;
        safe_read(fd, &nthreads, sizeof(nthreads), "nthreads",
                checkpoint_file);
        for (int i = 0; i < nthreads; i++) {
            unsigned thread;
            safe_read(fd, &thread, sizeof(thread), "thread", checkpoint_file);

            traces[thread] = vector<int>();
            trace_indices[thread] = 0;

            int trace_len;
            safe_read(fd, &trace_len, sizeof(trace_len), "trace_len",
                    checkpoint_file);
            for (int j = 0; j < trace_len; j++) {
                int trace_ele;
                safe_read(fd, &trace_ele, sizeof(trace_ele), "trace_ele",
                        checkpoint_file);
                traces[thread].push_back(trace_ele);
            }
        }

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
                    group, is_cuda_alloc, elem_is_ptr, elem_is_struct);

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

    assert(pthread_rwlock_rdlock(&contains_lock) == 0);
    map<size_t, size_t>::iterator child1_iter = contains.find(alias1);
    map<size_t, size_t>::iterator child2_iter = contains.find(alias2);
    map<size_t, size_t>::iterator end = contains.end();
    assert(pthread_rwlock_unlock(&contains_lock) == 0);

    if (child1_iter != end && child2_iter != end) {
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
#ifdef __CHIMES_PROFILE
    pp.start_timer(INIT_MODULE);
#endif
    assert(pthread_mutex_lock(&module_mutex) == 0);

    bool replay = (getenv("CHIMES_CHECKPOINT_FILE") != NULL);
    va_list vl;
    va_start(vl, nstructs);

    bool initialized = (initialized_modules.find(module_id) !=
            initialized_modules.end());
    assert(!initialized);
    initialized_modules.insert(module_id);

    assert(pthread_rwlock_wrlock(&contains_lock) == 0);
    for (int i = 0; i < n_contains_mappings; i++) {
        size_t container = va_arg(vl, size_t);
        size_t child = va_arg(vl, size_t);

        if (!replay) {
            contains[container] = child;
        }
    }
    assert(pthread_rwlock_unlock(&contains_lock) == 0);

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

    assert(pthread_mutex_unlock(&module_mutex) == 0);

#ifdef __CHIMES_PROFILE
    pp.stop_timer(INIT_MODULE);
#endif
}

void new_stack(unsigned int n_local_arg_aliases, unsigned int nargs, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(NEW_STACK);
#endif
    thread_ctx *ctx = get_my_context();
    std::vector<stack_frame *> *program_stack = ctx->get_stack();

    int calling_label = ctx->get_calling_label();
    assert(program_stack->size() == 0 || calling_label >= 0);
    if (calling_label >= 0) {
        ctx->get_stack_tracker().push(calling_label);
    }
    program_stack->push_back(new stack_frame());
    ctx->increment_stack_nesting();

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

    ctx->push_return_alias();

    if (program_stack->size() > 1) {
        for (unsigned i = 0; i < n_local_arg_aliases; i++) {
            if (valid_group(new_aliases[i]) && valid_group(parent_aliases[i])) {
                assert(pthread_rwlock_wrlock(&aliased_groups_lock) == 0);
                merge_alias_groups(new_aliases[i], parent_aliases[i]);
                assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);

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

#ifdef __CHIMES_PROFILE
    pp.stop_timer(NEW_STACK);
#endif
}

void calling(int lbl, size_t set_return_alias, unsigned naliases, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(CALLING);
#endif
    thread_ctx *ctx = get_my_context();
    ctx->set_calling_label(lbl);
    ctx->set_return_alias(set_return_alias);

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

#ifdef __CHIMES_PROFILE
    pp.stop_timer(CALLING);
#endif
}

void rm_stack(bool has_return_alias, size_t returned_alias) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(RM_STACK);
#endif
    thread_ctx *ctx = get_my_context();
    std::vector<stack_frame *> *program_stack = ctx->get_stack();
    stack_frame *curr = program_stack->back();
    program_stack->pop_back();
    delete curr;

    size_t this_return_alias = ctx->pop_return_alias();

    /*
     * We pass returned_alias as 0 here when the value being returned is not a
     * pointer (in which case we don't care about its aliases).
     */
    if (has_return_alias && valid_group(returned_alias)) {
        assert(valid_group(this_return_alias));
        assert(pthread_rwlock_wrlock(&aliased_groups_lock) == 0);
        merge_alias_groups(this_return_alias, returned_alias);
        assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);

        assert(aliased(this_return_alias, returned_alias));
    }

    ctx->get_stack_tracker().pop();
    ctx->decrement_stack_nesting();

    if (____chimes_rerunning && ctx->get_stack_nesting() < 0) {
#ifdef VERBOSE
        fprintf(stderr, "Exiting replay...\n");
#endif
        exit(55);
    }
#ifdef __CHIMES_PROFILE
    pp.stop_timer(RM_STACK);
#endif
}

int get_next_call() {
    int tid = get_my_tid();
    assert(trace_indices[tid] < traces[tid].size());
    int ele = traces[tid][trace_indices[tid]];
    trace_indices[tid] = trace_indices[tid] + 1;
    return ele;
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
#ifdef __CHIMES_PROFILE
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
#ifdef __CHIMES_PROFILE
    pp.stop_timer(REGISTER_STACK_VAR);
#endif
}

void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(REGISTER_GLOBAL_VAR);
#endif
    va_list vl;
    va_start(vl, n_ptr_fields);
    stack_var *new_var = get_var(mangled_name, full_type, ptr, size, is_ptr,
            is_struct, n_ptr_fields, vl);
    va_end(vl);

    std::string mangled_name_str(mangled_name);

    assert(pthread_rwlock_wrlock(&globals_lock) == 0);
    assert(global_vars.find(mangled_name_str) == global_vars.end());
    global_vars[mangled_name_str] = new_var;
    assert(pthread_rwlock_unlock(&globals_lock) == 0);

#ifdef __CHIMES_PROFILE
    pp.stop_timer(REGISTER_GLOBAL_VAR);
#endif
}

int alias_group_changed(int ngroups, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(ALIAS_GROUP_CHANGED);
#endif
    va_list vl;
    va_start(vl, ngroups);
    for (int i = 0; i < ngroups; i++) {
        size_t group = va_arg(vl, size_t);

        if (valid_group(group)) {
            get_my_context()->add_changed_group(group);
        }
    }
    va_end(vl);
#ifdef __CHIMES_PROFILE
    pp.stop_timer(ALIAS_GROUP_CHANGED);
#endif
    return 0;
}

void malloc_helper(void *new_ptr, size_t nbytes, size_t group,
        int is_cuda_alloc, int is_ptr, int is_struct, int elem_size,
        int *ptr_field_offsets, int n_ptr_field_offsets) {
    assert(valid_group(group) || is_cuda_alloc);

    heap_allocation *alloc = new heap_allocation(new_ptr, nbytes, group,
            is_cuda_alloc, is_ptr, is_struct);

    if (is_struct) {
        alloc->add_struct_elem_size(elem_size);
        for (int i = 0; i < n_ptr_field_offsets; i++) {
            alloc->add_pointer_offset(ptr_field_offsets[i]);
        }
        if (n_ptr_field_offsets > 0) free(ptr_field_offsets);
    }

    assert(pthread_rwlock_wrlock(&heap_lock) == 0);
    assert(heap.find(new_ptr) == heap.end());
    heap[new_ptr] = alloc;
    if (alias_to_heap.find(group) == alias_to_heap.end()) {
        alias_to_heap[group] = new vector<heap_allocation *>();
    }
    alias_to_heap[group]->push_back(alloc);
    assert(pthread_rwlock_unlock(&heap_lock) == 0);
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
#ifdef __CHIMES_PROFILE
    pp.start_timer(MALLOC_WRAPPER);
#endif
    assert(valid_group(group));

    void *ptr = malloc(nbytes);

    if (ptr != NULL) {
        chimes_type_info info; memset(&info, 0x00, sizeof(info));

        if (is_struct) {
            va_list vl;
            va_start(vl, is_struct);
            parse_type_info(vl, &info);
            va_end(vl);
        }
        malloc_helper(ptr, nbytes, group, 0, is_ptr, is_struct, info.elem_size,
                info.ptr_field_offsets, info.n_ptr_fields);
    }

#ifdef __CHIMES_PROFILE
    pp.stop_timer(MALLOC_WRAPPER);
#endif
    return ptr;
}

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(REALLOC_WRAPPER);
#endif
    assert(valid_group(group));

    void *new_ptr = realloc(ptr, nbytes);

    if (ptr != NULL) {
        map<void *, heap_allocation *>::iterator alloc_ptr = find_in_heap(ptr);

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

#ifdef __CHIMES_PROFILE
    pp.stop_timer(REALLOC_WRAPPER);
#endif
    return new_ptr;
}

void free_helper(void *ptr) {
    map<void *, heap_allocation *>::iterator in_heap =
        find_in_heap(ptr);
    size_t group = in_heap->second->get_alias_group();

    // Update heap metadata
    assert(pthread_rwlock_wrlock(&heap_lock) == 0);
    vector<heap_allocation *>::iterator in_alias_to_heap =
        std::find(alias_to_heap[group]->begin(), alias_to_heap[group]->end(),
                in_heap->second);
    assert(in_alias_to_heap != alias_to_heap[group]->end());
    alias_to_heap[group]->erase(in_alias_to_heap);

    heap.erase(in_heap);
    assert(pthread_rwlock_unlock(&heap_lock) == 0);
}

map<void *, heap_allocation *>::iterator find_in_heap(void *ptr) {

    assert(pthread_rwlock_rdlock(&heap_lock) == 0);
    map<void *, heap_allocation *>::iterator in_heap = heap.find(ptr);
    assert(in_heap != heap.end());
    assert(pthread_rwlock_unlock(&heap_lock) == 0);

    assert(in_heap->second->get_address() == ptr);

    return in_heap;
}

void free_wrapper(void *ptr, size_t group) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(FREE_WRAPPER);
#endif
    map<void *, heap_allocation *>::iterator in_heap = find_in_heap(ptr);
    size_t original_group = in_heap->second->get_alias_group();
    assert(aliased(original_group, group));

    free_helper(ptr);
    free(ptr);
#ifdef __CHIMES_PROFILE
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
    map<size_t, size_t> *contains;

    map<unsigned, vector<int> *> *stack_trackers;
} checkpoint_thread_ctx;
static void *checkpoint_func(void *data);

void wait_for_checkpoint() {
    assert(pthread_mutex_lock(&checkpoint_mutex) == 0);
    if (checkpoint_thread_running) {
        pthread_join(checkpoint_thread, NULL);
    }
    assert(pthread_mutex_unlock(&checkpoint_mutex) == 0);
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

    assert(pthread_mutex_lock(&threads_in_checkpoint_mutex) == 0);
    unsigned thread_count = ++threads_in_checkpoint;
    while (threads_in_checkpoint < pthread_to_id.size()) {
        assert(pthread_cond_wait(&threads_in_checkpoint_cond,
                    &threads_in_checkpoint_mutex) == 0);
    }
    bool last_thread = (thread_count == pthread_to_id.size());
    if (last_thread) threads_in_checkpoint = 0;

    /*
     * On replay, the last thread to hit the checkpoint will skip the wait loop
     * above, enter this region, perform all the restores, and then set
     * ____chimes_replaying to zero so that no other thread enters here.
     *
     * Otherwise, the last thread will launch the checkpointing logic and all
     * other threads will be prevented from entering there.
     */
    if (____chimes_replaying) {
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
        assert(unpacked_program_stacks->size() == thread_ctxs.size());
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
            assert(thread_ctxs.find(tid) != thread_ctxs.end());

            restore_program_stack((*unpacked_program_stacks)[tid],
                    thread_ctxs[tid]->get_stack());
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
        for (map<unsigned, thread_ctx *>::iterator stacks_iter =
                thread_ctxs.begin(), stacks_end = thread_ctxs.end();
                stacks_iter != stacks_end; stacks_iter++) {
            thread_ctx *ctx = stacks_iter->second;
            vector<stack_frame *> *stack = ctx->get_stack();

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

        ____chimes_replaying = 0;
        ____chimes_rerunning = 1;
        for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
                e = thread_ctxs.end(); i != e; i++) {
            thread_ctx *ctx = i->second;
            ctx->set_stack_nesting(1);
        }
    } else if (last_thread && !checkpoint_thread_running) {
        assert(pthread_mutex_lock(&checkpoint_mutex) == 0);

        if (checkpoint_thread_running) {
            assert(pthread_mutex_unlock(&checkpoint_mutex) == 0);
        } else {
            checkpoint_thread_running = 1;

            /*
             * At this stage we assume we only have a single stack to checkpoint
             * and it belongs to the calling thread, so those addresses will
             * remain valid for checkpointing as long as we're still here.
             * Therefore, we must checkpoint stack variables from here before
             * returning.
             *
             * However, because we control heap allocations through the
             * malloc/realloc/free wrappers, we can ensure they are only freed
             * once they have been fully checkpointed. We can return from this
             * function and allow the host application to mess with the heap
             * however much it likes. We just need to be sure we know exactly
             * which heap state we need to checkpoint, and which we don't. That
             * information is maintained by the heap sequence groups.
             */

            vector<heap_allocation *> *heap_to_checkpoint =
                new vector<heap_allocation *>();
            for (map<void *, heap_allocation *>::iterator heap_iter =
                    heap.begin(), heap_end = heap.end(); heap_iter != heap_end;
                    heap_iter++) {
                heap_allocation *curr = heap_iter->second;
                heap_allocation *copy = new heap_allocation();
                curr->copy(copy);
                heap_to_checkpoint->push_back(copy);
            }

            //TODO use change aliases to reduce checkpoint size
            set<size_t> *all_changed = new set<size_t>();
            for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
                    e = thread_ctxs.end(); i != e; i++) {
                thread_ctx *ctx = i->second;
                set<size_t> *changed = ctx->get_changed_groups();

                for (set<size_t>::iterator ii = changed->begin(),
                        ee = changed->end(); ii != ee; ii++) {
                    size_t group = *ii;

                    if (aliased_groups.find(group) != aliased_groups.end()) {
                        for (set<size_t>::iterator iter =
                                aliased_groups[group]->begin(), end =
                                aliased_groups[group]->end(); iter != end;
                                iter++) {
                            all_changed->insert(*iter);
                        }
                    } else {
                        all_changed->insert(group);
                    }
                }
                ctx->clear_changed_groups();
            }
            delete all_changed;

            checkpoint_thread_ctx *checkpoint_ctx = (checkpoint_thread_ctx *)malloc(
                    sizeof(checkpoint_thread_ctx));
            checkpoint_ctx->stacks_serialized = serialize_program_stacks(&thread_ctxs,
                    &checkpoint_ctx->stacks_serialized_len);
            checkpoint_ctx->globals_serialized = serialize_globals(&global_vars,
                    &checkpoint_ctx->globals_serialized_len);
            checkpoint_ctx->thread_hierarchy_serialized = serialize_thread_hierarchy(
                    &thread_ctxs,
                    &checkpoint_ctx->thread_hierarchy_serialized_len);
            checkpoint_ctx->heap_to_checkpoint = heap_to_checkpoint;

            checkpoint_ctx->stack_trackers = new map<unsigned, vector<int> *>();
            for (map<unsigned, thread_ctx *>::iterator ti = thread_ctxs.begin(),
                    te = thread_ctxs.end(); ti != te; ti++) {
                unsigned thread = ti->first;
                thread_ctx *info = ti->second;
                (*checkpoint_ctx->stack_trackers)[thread] = new vector<int>();
                info->get_stack_tracker().copy(checkpoint_ctx->stack_trackers->at(thread));
            }

            checkpoint_ctx->contains = new map<size_t, size_t>();
            assert(pthread_rwlock_rdlock(&contains_lock) == 0);
            for (map<size_t, size_t>::iterator i = contains.begin(),
                    e = contains.end(); i != e; i++) {
                (*checkpoint_ctx->contains)[i->first] = i->second;
            }
            assert(pthread_rwlock_unlock(&contains_lock) == 0);

            assert(pthread_mutex_unlock(&checkpoint_mutex) == 0);

            pthread_create(&checkpoint_thread, NULL, checkpoint_func, checkpoint_ctx);
        }
    }

    if (last_thread) {
        assert(pthread_cond_broadcast(&threads_in_checkpoint_cond) == 0);
    }
    assert(pthread_mutex_unlock(&threads_in_checkpoint_mutex) == 0);

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
             * to be passed into init_chimes. This is bad because that assumes
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
    map<size_t, size_t> *contains = ctx->contains;

    /*
     * Until we implement the planned client-server architecture, just dump
     * checkpoints to a file locally. Right now, we naively dump everything.
     */

    // Find a unique file for this checkpoint
    int count = 0;
    char dump_filename[256];
    sprintf(dump_filename, "chimes.%d.ckpt", count);
    int fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    while (fd < 0) {
        count++;
        sprintf(dump_filename, "chimes.%d.ckpt", count);
        fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    }

    // Write the trace of function calls out
    int nthreads = ctx->stack_trackers->size();
    safe_write(fd, &nthreads, sizeof(nthreads), "nthreads", dump_filename);
    for (map<unsigned, vector<int> *>::iterator i =
            ctx->stack_trackers->begin(), e = ctx->stack_trackers->end();
            i != e; i++) {
        unsigned thread = i->first;
        vector<int> *trace = i->second;

        safe_write(fd, &thread, sizeof(thread), "thread", dump_filename);
        int trace_len = trace->size();
        safe_write(fd, &trace_len, sizeof(trace_len), "trace length",
                dump_filename);
        for (std::vector<int>::iterator trace_iter = trace->begin(),
                trace_end = trace->end(); trace_iter != trace_end;
                trace_iter++) {
            int trace = *trace_iter;
            safe_write(fd, &trace, sizeof(trace), "trace element",
                    dump_filename);
        }
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

    unsigned n_contains_mappings = contains->size();
    safe_write(fd, &n_contains_mappings, sizeof(n_contains_mappings),
            "n_contains_mappings", dump_filename);
    // Dump container information to be loaded with the checkpoint
    for (map<size_t, size_t>::iterator i = contains->begin(), e = contains->end();
            i != e; i++) {
        size_t container = i->first;
        size_t child = i->second;
        safe_write(fd, &container, sizeof(container), "container",
                dump_filename);
        safe_write(fd, &child, sizeof(child), "child", dump_filename);
    }

    assert(pthread_rwlock_rdlock(&aliased_groups_lock) == 0);
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
    assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);

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
    delete ctx->stack_trackers;
    delete contains;
    free(ctx);

    checkpoint_thread_running = 0;

    return NULL;
}

unsigned entering_omp_parallel(unsigned lbl, unsigned nlocals, ...) {
    thread_ctx *ctx = get_my_context();
    ctx->clear_parent_vars();

    ctx->get_stack_tracker().push(lbl);

    va_list vl;
    va_start(vl, nlocals);

    for (unsigned i = 0; i < nlocals; i++) {
        void *addr = va_arg(vl, void *);
        ctx->add_parent_var(addr);
    }

    va_end(vl);

    return get_my_tid();
}

static stack_var *find_var(void *addr,
        vector<stack_frame *> *parent_stack) {
    for (vector<stack_frame *>::reverse_iterator i = parent_stack->rbegin(),
            e = parent_stack->rend(); i != e; i++) {
        stack_frame *frame = *i;

        for (stack_frame::iterator ii = frame->begin(), ee = frame->end();
                ii != ee; ii++) {
            string name = ii->first;
            stack_var *info = ii->second;

            if (info->get_address() == addr) return info;
        }
    }
    return NULL;
}

void register_thread_local_stack_vars(unsigned relation, unsigned parent,
        unsigned nlocals, ...) {
    unsigned global_tid;
    pthread_t self = pthread_self();

    if (____chimes_replaying) {
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

        /*
         * Update count_threads so that on replay we don't have any thread ID
         * collisions.
         */
        assert(pthread_mutex_lock(&count_threads_mutex) == 0);
        if (global_tid + 1 > count_threads) {
            count_threads = global_tid + 1;
        }
        assert(pthread_mutex_unlock(&count_threads_mutex) == 0);

        assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
        if (pthread_to_id.find(self) == pthread_to_id.end()) {
            assert(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);
            thread_ctxs[global_tid] = new thread_ctx(self);
            assert(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);

            pthread_to_id[self] = global_tid;
        } else {
            assert(global_tid == pthread_to_id[self]);
        }
        assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);
    } else {
        assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
        if (pthread_to_id.find(self) == pthread_to_id.end()) {
            /*
             * If this thread is being launched for the first time here, first
             * get a globally unique ID for it.
             */
            assert(pthread_mutex_lock(&count_threads_mutex) == 0);
            global_tid = count_threads++;
            assert(pthread_mutex_unlock(&count_threads_mutex) == 0);

            // Then create a thread ctx for it
            assert(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);
            thread_ctxs[global_tid] = new thread_ctx(self);
            assert(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);

            // Store the mapping from pthread_t to self
            pthread_to_id[self] = global_tid;
        } else {
            global_tid = pthread_to_id[self];
        }
        assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);
    }

    thread_ctx *ctx = get_my_context();
    ctx->push_parent(parent, relation);
    std::vector<stack_frame *> *stack = ctx->get_stack();
    stack->push_back(new stack_frame());
    ctx->increment_stack_nesting();

    thread_ctx *parent_ctx = get_context_for(parent);
    vector<stack_frame *> *parent_stack = parent_ctx->get_stack();
    assert(parent_ctx->parent_vars_size() == nlocals);

    va_list vl;
    va_start(vl, nlocals);
    for (unsigned l = 0; l < nlocals; l++) {
        void *child_addr = va_arg(vl, void *);
        void *parent_addr = parent_ctx->get_parent_var(l);
        stack_var *parent_var = find_var(parent_addr, parent_stack);
        assert(parent_var);

        stack_var *child_var = new stack_var(parent_var->get_name().c_str(),
                parent_var->get_type().c_str(), child_addr,
                parent_var->get_size(), parent_var->check_is_ptr());
        for (vector<int>::iterator i = parent_var->get_ptr_offsets()->begin(),
                e = parent_var->get_ptr_offsets()->end(); i != e; i++) {
            child_var->add_pointer_offset(*i);
        }
        stack->back()->add_stack_var(child_var);
    }
    va_end(vl);
}

void leaving_omp_parallel() {
    unsigned parent = get_my_tid();

    vector<map<unsigned, thread_ctx *>::iterator> to_erase;

    assert(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);

    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
            e = thread_ctxs.end(); i != e; i++) {
        thread_ctx *ctx = i->second;

        if (ctx->get_parent() == parent) {
            ctx->pop_parent();
            vector<stack_frame *> *program_stack = ctx->get_stack();
            stack_frame *curr = program_stack->back();
            program_stack->pop_back();
            delete curr;

            if (program_stack->size() == 0) {
                // Erase this thread
                map<pthread_t, unsigned>::iterator found = pthread_to_id.find(
                        ctx->get_pthread());
                assert(found != pthread_to_id.end());
                pthread_to_id.erase(found);

                to_erase.push_back(i);
            }
        }
    }

    for (vector<map<unsigned, thread_ctx *>::iterator>::iterator i =
            to_erase.begin(), e = to_erase.end(); i != e; i++) {
        map<unsigned, thread_ctx *>::iterator curr = *i;
        thread_ctxs.erase(curr);
    }

    assert(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);
}

static unsigned get_my_tid() {
    pthread_t self = pthread_self();

    assert(pthread_mutex_lock(&pthread_to_id_mutex) == 0);
    assert(pthread_to_id.find(self) != pthread_to_id.end());
    unsigned self_id = pthread_to_id[self];
    assert(pthread_mutex_unlock(&pthread_to_id_mutex) == 0);

    return self_id;
}

static thread_ctx *get_context_for(unsigned tid) {
    assert(pthread_rwlock_rdlock(&thread_ctxs_lock) == 0);
    assert(thread_ctxs.find(tid) != thread_ctxs.end());

    thread_ctx *result = thread_ctxs[tid];
    assert(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);
    return result;
}

static thread_ctx *get_my_context() {
    return get_context_for(get_my_tid());
}

static std::vector<stack_frame *> *get_stack_for(unsigned tid) {
    return get_context_for(tid)->get_stack();
}

static std::vector<stack_frame *> *get_my_stack() {
    return get_stack_for(get_my_tid());
}

void onexit() {
#ifdef VERBOSE
    fprintf(stderr, "Locking...\n");
#endif
    assert(pthread_mutex_lock(&checkpoint_mutex) == 0);
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
    assert(pthread_mutex_unlock(&checkpoint_mutex) == 0);
#ifdef __CHIMES_PROFILE
    fprintf(stderr, "%s\n", pp.tostr().c_str());
#endif
}
