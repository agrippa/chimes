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
#include "struct_field.h"
#include "constant_var.h"
#include "stack_var.h"
#include "stack_frame.h"
#include "heap_allocation.h"
#include "stack_serialization.h"
#include "thread_serialization.h"
#include "global_serialization.h"
#include "constant_serialization.h"
#include "ptr_and_size.h"
#include "already_updated_ptrs.h"
#include "chimes_stack.h"
#include "heap_allocation.h"
#include "type_info.h"
#include "thread_ctx.h"

using namespace std;

/*
 * A note on OMP nested parallelism and how that maps to pthreads.
 *
 * In OMP, you can created nested parallel regions like so:
 *
 *     #pragma omp parallel
 *     {
 *       int outer = omp_get_thread_num();
 *       #pragma omp parallel
 *       {
 *         int inner = omp_get_thread_num();
 *       }
 *     }
 *
 * OMP nested parallelism is enabled by either setting the environment variable
 * OMP_NESTED to TRUE or by calling omp_set_nested(1). If an OMP program
 * encounters nested parallel regions but nested parallelism is not enabled, the
 * inner region will be executed by each thread from the outer region but with a
 * team size of 1 corresponding to each individual thread. That is, if we took
 * the code above and executed it without nested parallelism then the outer
 * variable would store 0->N-1 for N threads, but the inner variable would store
 * 0 for each thread (and omp_get_num_threads from inside the inner region would
 * return 1).
 *
 * However, if nested parallelism is enabled then the outer behavior will be the
 * same but we will see inner also take the values of 0->N-1 for each of the N
 * outer threads. Therefore, there will be N threads in the outer region and N*N
 * threads in the inner region.
 *
 * We can verify this with a simple test like the one below, which displays the
 * inner and outer values for each thread, as well as the actual pthread_t it is
 * executed on. Running code like this shows that each of the N*N OMP threads in
 * the inner region map to a different pthread_t and that for inner==0 re-uses
 * the pthread from the outer region.
 *
 *     #pragma omp parallel
 *     {
 *       int outer = omp_get_thread_num();
 *       pthread_t outer_me = pthread_self();
 *       #pragma omp parallel
 *       {
 *         int inner = omp_get_thread_num();
 *         pthread_t inner_me = pthread_self();
 *         printf("%d %d %p %p\n", outer, inner, outer_me, inner_me);
 *       }
 *     }
 *
 */

// functions defined in this file
void new_stack(void *func_ptr, unsigned n_local_arg_aliases, unsigned n_args,
        ...);
void rm_stack(bool has_return_alias, size_t returned_alias);
void register_stack_var(const char *mangled_name, unsigned thread,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
int alias_group_changed(int ngroups, ...);
void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...);
void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
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
static map<size_t, vector<size_t> *> aliased_groups;
static pthread_rwlock_t aliased_groups_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * List of globally registered variables. This includes anything that isn't
 * declared inside a function.
 */
static map<std::string, stack_var *> global_vars;
static pthread_rwlock_t globals_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * A list of pointers and lengths of constant values identified as reachable by
 * the analysis pass. These are only constants which have a pointer type.
 */
static map<size_t, constant_var *> constants;
static pthread_rwlock_t constants_lock = PTHREAD_RWLOCK_INITIALIZER;

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
static volatile unsigned threads_in_checkpoint = 0;
static volatile bool checkpoint_in_progress = false;
static pthread_mutex_t threads_in_checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t threads_in_checkpoint_cond = PTHREAD_COND_INITIALIZER;

/*
 * Counter for the number of parallel regions entered. Incremented every time we
 * enter a new parallel region to provide a unique ID for that instance of
 * parallelism.
 */
static size_t regions_executed = 0;
static pthread_mutex_t regions_executed_mutex = PTHREAD_MUTEX_INITIALIZER;

#define MAX_CHECKPOINT_FILENAME_LEN 256
static char previous_checkpoint_filename[MAX_CHECKPOINT_FILENAME_LEN] = { '\0' };

#ifdef __CHIMES_PROFILE
enum PROFILE_LABEL_ID { NEW_STACK = 0, RM_STACK, REGISTER_STACK_VAR, CALLING,
    INIT_MODULE, REGISTER_GLOBAL_VAR, ALIAS_GROUP_CHANGED, MALLOC_WRAPPER,
    REALLOC_WRAPPER, FREE_WRAPPER, CALLOC_WRAPPER, REGISTER_CONSTANT,
    N_LABELS };
static const char *PROFILE_LABELS[] = { "new_stack", "rm_stack",
    "register_stack_var", "calling", "init_module", "register_global_var",
    "alias_group_changed", "malloc_wrapper", "realloc_wrapper",
    "free_wrapper", "calloc_wrapper", "register_constant" };

perf_profile pp(PROFILE_LABELS, N_LABELS);
#endif

static map<unsigned, vector<stack_frame *> *> *unpacked_program_stacks;
static map<std::string, stack_var *> *unpacked_global_vars;
static map<size_t, constant_var*> *unpacked_constants;
static map<unsigned, pair<unsigned, unsigned> > *unpacked_thread_hierarchy;
/*
 * A list of objects specifying what memory locations were updated with
 * corrected pointers during the sweep over heap allocations.
 */
static vector<already_updated_ptrs *> already_updated;
static std::map<void *, ptr_and_size *> *old_to_new;

static std::map<std::string, std::vector<struct_field> *> structs;

static pthread_t checkpoint_thread;
static pthread_mutex_t checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static volatile int checkpoint_thread_running = 0;

int ____chimes_replaying = 0;
int ____chimes_rerunning = 0;

static inline bool valid_group(size_t group) {
    return group > 0;
}

static bool aliased(size_t group1, size_t group2, bool need_to_lock) {
    bool result = false;
    if (group1 == group2) {
        result = true;
    } else {
        if (need_to_lock) {
            assert(pthread_rwlock_rdlock(&aliased_groups_lock) == 0);
        }

        if (aliased_groups.find(group1) != aliased_groups.end() &&
                aliased_groups.find(group2) != aliased_groups.end()) {
            // Can just do a pointer comparison here
            result = (aliased_groups[group1] == aliased_groups[group2]);
        }

        if (need_to_lock) {
            assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);
        }
    }
    return result;
}

void init_chimes() {
    atexit(onexit);

    pthread_t self = pthread_self();
    assert(pthread_to_id.size() == 0);
    pthread_to_id[self] = 0;
    thread_ctxs[0] = new thread_ctx(self);

    char *checkpoint_file = getenv("CHIMES_CHECKPOINT_FILE");
    if (checkpoint_file != NULL) {
#ifdef VERBOSE
        fprintf(stderr, "Using checkpoint file %s\n", checkpoint_file);
#endif
        ____chimes_replaying = 1;
        int fd = open(checkpoint_file, O_RDONLY);
        assert(fd >= 0);

        size_t filename_length;
        char previous_checkpoint_file[MAX_CHECKPOINT_FILENAME_LEN];
        safe_read(fd, &filename_length, sizeof(filename_length),
                "filename_length", checkpoint_file);
        safe_read(fd, previous_checkpoint_file, filename_length,
                "previous_checkpoint_file", checkpoint_file);

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

        // read in constants state
        uint64_t constants_serialized_len;
        safe_read(fd, &constants_serialized_len,
                sizeof(constants_serialized_len),
                "constants_serialized_len", checkpoint_file);
        unsigned char *constants_serialized = (unsigned char *)malloc(
                constants_serialized_len);
        safe_read(fd, constants_serialized, constants_serialized_len,
                "constants_serialized", checkpoint_file);
        unpacked_constants = deserialize_constants(constants_serialized,
                constants_serialized_len);

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

        for (map<size_t, constant_var*>::iterator i = constants.begin(),
                e = constants.end(); i != e; i++) {
            size_t id = i->first;
            constant_var *live = i->second;

            assert(unpacked_constants->find(id) != unpacked_constants->end());
            constant_var *dead = unpacked_constants->at(id);

            assert(dead->get_length() == live->get_length());

            assert(old_to_new->find(dead->get_address()) == old_to_new->end());
            old_to_new->insert(pair<void *, ptr_and_size *>(dead->get_address(),
                        new ptr_and_size(live->get_address(),
                            live->get_length())));
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
            std::vector<size_t> *groups = new std::vector<size_t>();
            unsigned size;
            safe_read(fd, &size, sizeof(size), "aliased_groups_size",
                    checkpoint_file);
            for (unsigned ii = 0; ii < size; ii++) {
                size_t group;
                safe_read(fd, &group, sizeof(group), "group", checkpoint_file);
                groups->push_back(group);

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

    if (aliased(alias1, alias2, false)) return;

    assert(pthread_rwlock_rdlock(&contains_lock) == 0);
    map<size_t, size_t>::iterator child1_iter = contains.find(alias1);
    map<size_t, size_t>::iterator child2_iter = contains.find(alias2);
    map<size_t, size_t>::iterator end = contains.end();

    // TODO Need to update contains anytime you merge alias groups so that 
    if (child1_iter != end && child2_iter == end) {
        contains[alias2] = contains[alias1];
    } else if (child1_iter == end && child2_iter != end) {
        contains[alias1] = contains[alias2];
    } else if (child1_iter != end && child2_iter != end) {
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
    assert(pthread_rwlock_unlock(&contains_lock) == 0);

    map<size_t, vector<size_t> *>::iterator existing1_iter =
        aliased_groups.find(alias1);
    map<size_t, vector<size_t> *>::iterator existing2_iter =
        aliased_groups.find(alias2);

    std::vector<size_t> *existing1 = NULL;
    std::vector<size_t> *existing2 = NULL;
    if (existing1_iter != aliased_groups.end()) {
        existing1 = existing1_iter->second;
    }
    if (existing2_iter != aliased_groups.end()) {
        existing2 = existing2_iter->second;
    }

    if (existing1 == NULL && existing2 == NULL) {
        // Neither is aliased to anything yet, so alias them to each other only
        std::vector<size_t> *new_aliases = new std::vector<size_t>();
        new_aliases->push_back(alias1);
        new_aliases->push_back(alias2);
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
            std::vector<size_t> *new_groups = new std::vector<size_t>();
            for (unsigned int i = 0; i < existing1->size(); i++) {
                if (std::find(new_groups->begin(), new_groups->end(),
                            existing1->at(i)) == new_groups->end()) {
                    new_groups->push_back(existing1->at(i));
                }
            }
            for (unsigned int i = 0; i < existing2->size(); i++) {
                if (std::find(new_groups->begin(), new_groups->end(),
                            existing2->at(i)) == new_groups->end()) {
                    new_groups->push_back(existing2->at(i));
                }
            }

            for (std::vector<size_t>::iterator i = new_groups->begin(),
                    e = new_groups->end(); i != e; i++) {
                aliased_groups[*i] = new_groups;
            }
        }
    } else if (existing1 != NULL) {
        // alias2 is missing
        existing1->push_back(alias2);
        aliased_groups[alias2] = existing1;
    } else if (existing2 != NULL) {
        // alias1 is missing
        existing2->push_back(alias1);
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
            assert(contains.find(container) == contains.end());
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
            structs[struct_name_str] = new std::vector<struct_field>();
        }

#ifdef VERBOSE
        fprintf(stderr, "struct %s offsets:", struct_name_str.c_str());
#endif

        for (int j = 0; j < nfields; j++) {
            char *ty = va_arg(vl, char *);
            int offset = va_arg(vl, int);
            std::string ty_str(ty);

            assert(offset >= 0);
            if (insert_new) {
                structs[struct_name_str]->push_back(struct_field(offset,
                            ty_str));
            } else {
                assert(structs[struct_name_str]->at(j).get_offset() == offset);
                assert(structs[struct_name_str]->at(j).get_ty() == ty_str);
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

void new_stack(void *func_ptr, unsigned int n_local_arg_aliases,
        unsigned int nargs, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(NEW_STACK);
#endif
    thread_ctx *ctx = get_my_context();
    std::vector<stack_frame *> *program_stack = ctx->get_stack();

    if (!ctx->get_printed_func_ptr_mismatch() && program_stack->size() > 0 &&
            func_ptr != ctx->get_func_ptr()) {
        fprintf(stderr, "WARNING: Mismatch in expected function (%p) and "
                "function that we entered (%p). Possibly passed through a "
                "third-party library.\n", ctx->get_func_ptr(), func_ptr);
        ctx->set_printed_func_ptr_mismatch(true);
    }

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
    va_list vl;
    va_start(vl, nargs);

    if (program_stack->size() != 1 &&
            n_local_arg_aliases != ctx->get_n_parent_aliases()) {
        if (!ctx->get_printed_func_args_mismatch()) {
            fprintf(stderr, "WARNING: Mismatch in # passed aliases (%lu) and # "
                    "expected aliases (%u), ignoring\n",
                    ctx->get_n_parent_aliases(), n_local_arg_aliases);
            ctx->set_printed_func_args_mismatch(true);
        }

        for (unsigned i = 0; i < n_local_arg_aliases; i++) {
            va_arg(vl, size_t);
        }
    } else {
        std::vector<size_t> new_aliases;
        for (unsigned i = 0; i < n_local_arg_aliases; i++) {
            size_t alias = va_arg(vl, size_t);
            new_aliases.push_back(alias);
        }

        if (program_stack->size() > 1) {
            for (unsigned i = 0; i < n_local_arg_aliases; i++) {
                if (valid_group(new_aliases[i]) && valid_group(ctx->get_parent_alias(i))) {
                    assert(pthread_rwlock_wrlock(&aliased_groups_lock) == 0);
                    merge_alias_groups(new_aliases[i], ctx->get_parent_alias(i));
                    assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);

                    assert(aliased(new_aliases[i], ctx->get_parent_alias(i), true));
                }
            }
        }
    }

    ctx->push_return_alias();

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

void calling(void *func_ptr, int lbl, size_t set_return_alias, unsigned naliases, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(CALLING);
#endif
    thread_ctx *ctx = get_my_context();
    ctx->set_func_ptr(func_ptr);
    ctx->set_calling_label(lbl);
    ctx->set_return_alias(set_return_alias);

    ctx->ensure_parent_alias_capacity(naliases);
    ctx->clear_parent_aliases();

    va_list vl;
    va_start(vl, naliases);
    for (unsigned i = 0; i < naliases; i++) {
        ctx->add_parent_alias(va_arg(vl, size_t));
    }
    va_end(vl);

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

        assert(aliased(this_return_alias, returned_alias, true));
    }

    ctx->get_stack_tracker().pop();
    ctx->decrement_stack_nesting();

    if (____chimes_rerunning && ctx->get_stack_nesting() < 0) {
#ifdef VERBOSE
        fprintf(stderr, "Exiting replay...\n");
#endif
        // TODO is this necessary still?
        fprintf(stderr, "CHIMES exiting, higher stack nesting than checkpoint was taken at...\n");
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

static bool is_pointer_type(string type) {
    return (type[type.length() - 1] == '*');
}

static bool is_array_type(string type) {
    return (type[0] == '[' && type[type.length() - 1] == ']');
}

static string get_nested_array_type(string array_type) {
    assert(is_array_type(array_type));
    string remove_braces = array_type.substr(1, array_type.length() - 2);
    // Increment past array length
    int index = 0;
    while (remove_braces[index] >= '0' && remove_braces[index] <= '9') {
        index++;
    }
    assert(remove_braces[index++] == ' ');
    assert(remove_braces[index++] == 'x');
    assert(remove_braces[index++] == ' ');
    return remove_braces.substr(index);
}

#if 0



static int get_array_length(string array_type) {
    assert(is_array_type(array_type));
    string remove_braces = array_type.substr(1, array_type.length() - 2);
    // Increment past array length
    int index = 0;
    while (remove_braces[index] >= '0' && remove_braces[index] <= '9') {
        index++;
    }
    return atoi(remove_braces.substr(0, index).c_str());
}
#endif

static bool is_struct_type(string type) {
    size_t index = type.find("%struct.");
    return (index != string::npos && index == 0);
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

//TODO does not support nested pointer types
void register_constant(size_t const_id, void *address, size_t length) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(REGISTER_CONSTANT);
#endif

    constant_var *var = new constant_var(const_id, address, length);

    assert(pthread_rwlock_wrlock(&constants_lock) == 0);
    assert(constants.find(const_id) == constants.end());
    constants[const_id] = var;
    assert(pthread_rwlock_unlock(&constants_lock) == 0);

#ifdef __CHIMES_PROFILE
    pp.stop_timer(REGISTER_CONSTANT);
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
    heap.insert(pair<void *, heap_allocation *>(new_ptr, alloc));
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

void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(CALLOC_WRAPPER);
#endif
    assert(valid_group(group));

    void *ptr = calloc(num, size);

    if (ptr != NULL) {
        chimes_type_info info; memset(&info, 0x00, sizeof(info));

        if (is_struct) {
            va_list vl;
            va_start(vl, is_struct);
            parse_type_info(vl, &info);
            va_end(vl);
        }
        malloc_helper(ptr, num * size, group, 0, is_ptr, is_struct,
                info.elem_size, info.ptr_field_offsets, info.n_ptr_fields);
    }

#ifdef __CHIMES_PROFILE
    pp.stop_timer(CALLOC_WRAPPER);
#endif
    return ptr;

}

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    pp.start_timer(REALLOC_WRAPPER);
#endif
    assert(valid_group(group));

    void *new_ptr = realloc(ptr, nbytes);

    if (ptr != NULL && new_ptr == ptr) {
        /*
         * The location in memory of a previous allocation did not change, only
         * the size was extended.
         */
        map<void *, heap_allocation *>::iterator alloc_ptr = find_in_heap(ptr);

        heap_allocation *alloc = alloc_ptr->second;
        assert(alloc->get_alias_group() == group);
        alloc->update_size(nbytes);
    } else {
        /*
         * An initial allocation, or a movement of an old allocation. In either
         * case, we have to insert a new heap entry.
         */

        int n_struct_ptr_fields = 0;
        int elem_size = 0;
        int *ptr_field_offsets = NULL;

        if (ptr != NULL) {
            /*
             * An actual realloc, because the original pointer is non-NULL.
             * Remove the existing entry in the heap but re-use the information
             * in it to avoid the overhead of re-parsing the allocation type.
             */
            map<void *, heap_allocation *>::iterator alloc_ptr =
                find_in_heap(ptr);
            heap_allocation *alloc = alloc_ptr->second;
            assert(alloc->get_alias_group() == group);

            if (alloc->check_elem_is_struct()) {
                elem_size = alloc->get_elem_size();
                n_struct_ptr_fields = alloc->get_ptr_field_offsets()->size();
                ptr_field_offsets = (int *)malloc(sizeof(int) *
                        n_struct_ptr_fields);
                for (int i = 0; i < n_struct_ptr_fields; i++) {
                    ptr_field_offsets[i] = (*alloc->get_ptr_field_offsets())[i];
                }
            }
            free_helper(ptr);
        } else {
            chimes_type_info info; memset(&info, 0x00, sizeof(info));

            if (is_struct) {
                va_list vl;
                va_start(vl, is_struct);
                parse_type_info(vl, &info);
                va_end(vl);
            }
            elem_size = info.elem_size;
            ptr_field_offsets = info.ptr_field_offsets;
            n_struct_ptr_fields = info.n_ptr_fields;
        }

        malloc_helper(new_ptr, nbytes, group, 0, is_ptr, is_struct,
                elem_size, ptr_field_offsets, n_struct_ptr_fields);
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
    assert(aliased(original_group, group, true));

    free_helper(ptr);
    free(ptr);
#ifdef __CHIMES_PROFILE
    pp.stop_timer(FREE_WRAPPER);
#endif
}

typedef struct _checkpoint_thread_ctx {
    unsigned char *stacks_serialized;
    unsigned char *globals_serialized;
    unsigned char *constants_serialized;
    unsigned char *thread_hierarchy_serialized;
    uint64_t stacks_serialized_len;
    uint64_t globals_serialized_len;
    uint64_t constants_serialized_len;
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
    new_stack((void *)checkpoint, 0, 0);

    assert(pthread_mutex_lock(&threads_in_checkpoint_mutex) == 0);
    unsigned thread_count = ++threads_in_checkpoint;
    if (thread_count == 1) {
        checkpoint_in_progress = true;
    }
    bool last_thread = (thread_count == pthread_to_id.size());
    if (!last_thread) {
        while (checkpoint_in_progress) {
            assert(pthread_cond_wait(&threads_in_checkpoint_cond,
                        &threads_in_checkpoint_mutex) == 0);
        }
    } else {
        threads_in_checkpoint = 0;
    }

    /*
     * On replay, the last thread to hit the checkpoint will skip the wait loop
     * above, enter this region, perform all the restores, and then set
     * ____chimes_replaying to zero so that no other thread enters here.
     *
     * Otherwise, the last thread will launch the checkpointing logic and all
     * other threads will be prevented from entering there.
     */
    if (____chimes_replaying) {
       
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

            if (is_array_type(var->get_type())) {
                string nested_type =get_nested_array_type(var->get_type()); 
                if (is_pointer_type(nested_type)) {
                    size_t size = var->get_size();
                    assert(size % sizeof(void*) == 0);
                    size_t npointers = size / sizeof(void*);
                    void **container = (void **)var->get_address();
                    for (int i = 0; i < npointers; i++) {
                        fix_stack_or_global_pointer(container + i, nested_type);
                    }
                }
            }
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

        assert(get_my_context()->get_first_parallel_for_nesting() == 0);
        assert(get_my_context()->get_first_critical_nesting() == 0);

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
                        for (vector<size_t>::iterator iter =
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
            checkpoint_ctx->constants_serialized = serialize_constants(&constants,
                    &checkpoint_ctx->constants_serialized_len);
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
        checkpoint_in_progress = false;
        assert(pthread_cond_broadcast(&threads_in_checkpoint_cond) == 0);
    }
    assert(pthread_mutex_unlock(&threads_in_checkpoint_mutex) == 0);

    rm_stack(false, 0);
}

static void fix_stack_or_global_pointer(void *container, string type) {

    if (is_pointer_type(type)) {
        void **nested_container = (void **)container;
        void *new_ptr = translate_old_ptr(*nested_container, old_to_new);
        if (new_ptr != NULL) {
            *nested_container = new_ptr;
        }
    } else if (is_struct_type(type)) {
        // size_t open_brace_index = type.find("{");
        // assert(open_brace_index != string::npos);
        // open_brace_index += 2;
        // size_t close_brace_index = type.find("}");
        // assert(close_brace_index != string::npos);
        // close_brace_index -= 1;

        string struct_name = type.substr(8);
        if (struct_name.find("=") != std::string::npos) {
            struct_name = struct_name.substr(0, struct_name.find("=") - 1);
        }

        assert(structs.find(struct_name) != structs.end());
        std::vector<struct_field> *fields = structs.at(struct_name);
        // string nested_types = type.substr(open_brace_index, close_brace_index -
        //         open_brace_index);

        // int field_index = 0;
        // unsigned int index = 0;
        // unsigned int start = 0;

        for (int field_index = 0; field_index < fields->size(); field_index++) {
            string curr = fields->at(field_index).get_ty();
            unsigned char *field_ptr = ((unsigned char *)container) +
                (*fields)[field_index].get_offset();
            fix_stack_or_global_pointer((void *)field_ptr, curr);

        }
        // while (index < nested_types.length()) {
        //     while (index < nested_types.length() && nested_types[index] != ',') {
        //         index++;
        //     }

        //     /*
        //      * This requires the offset of every field in every declared struct
        //      * to be passed into init_chimes. This is bad because that assumes
        //      * that struct definitions are all defined in the same scope as
        //      * main. This is okay for the moment, but should be addressed as a
        //      * future TODO. Recently, the practice of passing module-specific
        //      * information through new_stack was introduced, that would be a
        //      * good place to add module-specific struct declarations.
        //      */
        //     string curr = nested_types.substr(start, index - start);
        //     unsigned char *field_ptr = ((unsigned char *)container) +
        //         (*fields)[field_index].get_offset();
        //     fix_stack_or_global_pointer((void *)field_ptr, curr);

        //     start = index + 1;
        //     while (start < nested_types.length() && nested_types[start] == ' ') {
        //         start++;
        //     }
        //     index = start;
        //     
        //     field_index++;
        // }
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
    unsigned char *constants_serialized = ctx->constants_serialized;
    uint64_t constants_serialized_len = ctx->constants_serialized_len;
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
    char dump_filename[MAX_CHECKPOINT_FILENAME_LEN];
    sprintf(dump_filename, "chimes.%d.ckpt", count);
    int fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    while (fd < 0) {
        count++;
        sprintf(dump_filename, "chimes.%d.ckpt", count);
        fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
    }

    // Write the name of the preceding checkpoint file out
    size_t filename_length = strlen(previous_checkpoint_filename) + 1;
    safe_write(fd, &filename_length, sizeof(filename_length), "filename_length",
            dump_filename);
    safe_write(fd, previous_checkpoint_filename,
            filename_length, "previous_checkpoint_filename", dump_filename);

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

    // Write the constants out
    safe_write(fd, &constants_serialized_len, sizeof(constants_serialized_len),
            "constants_serialized_len", dump_filename);
    safe_write(fd, constants_serialized, constants_serialized_len,
            "constants_serialized", dump_filename);

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
    set<vector<size_t> *> aliased_groups_ptr;
    for (map<size_t, vector<size_t> *>::iterator i = aliased_groups.begin(),
            e = aliased_groups.end(); i != e; i++) {
        aliased_groups_ptr.insert(i->second);
    }

    unsigned n_aliased_groups = aliased_groups_ptr.size();
    safe_write(fd, &n_aliased_groups, sizeof(n_aliased_groups),
            "n_aliased_groups", dump_filename);
    for (set<vector<size_t> *>::iterator i = aliased_groups_ptr.begin(),
            e = aliased_groups_ptr.end(); i != e; i++) {
        vector<size_t> *curr = *i;
        unsigned curr_size = curr->size();
        safe_write(fd, &curr_size, sizeof(curr_size), "curr_size",
                dump_filename);

        for (vector<size_t>::iterator ii = curr->begin(), ee = curr->end();
                ii != ee; ii++) {
            size_t group = *ii;
            safe_write(fd, &group, sizeof(group), "group", dump_filename);
        }
    }
    assert(pthread_rwlock_unlock(&aliased_groups_lock) == 0);

    close(fd);
    free(stacks_serialized);
    free(globals_serialized);
    free(constants_serialized);
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

    strcpy(previous_checkpoint_filename, dump_filename);

    checkpoint_thread_running = 0;

    return NULL;
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

unsigned entering_omp_parallel(unsigned lbl, size_t *unique_region_id,
        unsigned nlocals, ...) {
    thread_ctx *ctx = get_my_context();

    ctx->get_stack_tracker().push(lbl);
    ctx->create_new_parent_vars_context();

    va_list vl;
    va_start(vl, nlocals);

    for (unsigned i = 0; i < nlocals; i++) {
        void *addr = va_arg(vl, void *);
        stack_var *var = find_var(addr, ctx->get_stack());
        /*
         * var may be null here if the analysis stage determined that this
         * function could not possibly create a checkpoint (or be part of a
         * stack trace with a checkpoint). In that case, it optimizes out the
         * analysis of stack variables and register_stack_var calls will be
         * missing.
         *
         * To address that, we accept var as potentially NULL here and must
         * handle that as we generate the child context in
         * register_thread_local_stack_vars. If the parent entry for a variable
         * is NULL, we can safely assume that we will never query for metadata
         * on the child either.
         */
        ctx->add_parent_var(var);
    }

    va_end(vl);

    assert(pthread_mutex_lock(&regions_executed_mutex) == 0);
    *unique_region_id = regions_executed++;
    assert(pthread_mutex_unlock(&regions_executed_mutex) == 0);

    return get_my_tid();
}

void register_thread_local_stack_vars(unsigned relation, unsigned parent,
        bool is_parallel_for, bool is_critical, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...) {
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
    ctx->push_parent(parent, relation, region_id);
    std::vector<stack_frame *> *stack = ctx->get_stack();
    stack->push_back(new stack_frame());
    ctx->increment_stack_nesting();

    thread_ctx *parent_ctx = get_context_for(parent);
    if (is_parallel_for && ctx->get_first_parallel_for_nesting() == 0) {
        ctx->set_first_parallel_for_nesting(stack->size());
    }
    if (is_critical && ctx->get_first_critical_nesting() == 0) {
        ctx->set_first_critical_nesting(stack->size());
    }

    vector<stack_var *>& parent_vars = parent_ctx->get_parent_vars_at_depth(
            parent_stack_depth);
    assert(parent_vars.size() == nlocals);

    va_list vl;
    va_start(vl, nlocals);
    for (unsigned l = 0; l < nlocals; l++) {
        void *child_addr = va_arg(vl, void *);
        stack_var *parent_var = parent_vars[l];

        /*
         * See the comment above in entering_omp_parallel on why parent_var
         * might be NULL.
         */
        if (parent_var != NULL) {
            stack_var *child_var = new stack_var(parent_var->get_name().c_str(),
                    parent_var->get_type().c_str(), child_addr,
                    parent_var->get_size(), parent_var->check_is_ptr());
            for (vector<int>::iterator i =
                    parent_var->get_ptr_offsets()->begin(),
                    e = parent_var->get_ptr_offsets()->end(); i != e; i++) {
                child_var->add_pointer_offset(*i);
            }
            stack->back()->add_stack_var(child_var);
        }
    }
    va_end(vl);
}

unsigned get_parent_vars_stack_depth() {
    return get_my_context()->parent_vars_depth();
}

unsigned get_thread_stack_depth() {
    return get_my_context()->get_stack()->size();
}

void leaving_omp_parallel(int expected_parent_stack_depth, size_t region_id) {
    unsigned parent = get_my_tid();
    thread_ctx *my_ctx = get_my_context();
    /*
     * If this thread participated in the preceding parallel region, it should have the same stack depth it had before the parallel region, plus one.
     *
     * A parent thread may not participate in a parallel region if the parent
     * thread is a thread created in an omp parallel region which contains an
     * omp for region. If the omp for region has fewer iterations than the total
     * number of threads, some threads from the outer omp parallel region will
     * not receive work.
     */
    if (my_ctx->get_parent_region() == region_id) {
        assert(my_ctx->get_stack()->size() ==
                (expected_parent_stack_depth + 1));
    } else {
        assert(my_ctx->get_stack()->size() ==
                (expected_parent_stack_depth));
    }

    my_ctx->get_stack_tracker().pop();
    my_ctx->pop_parent_vars_entry();

    vector<map<unsigned, thread_ctx *>::iterator> to_erase;

    assert(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);

    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
            e = thread_ctxs.end(); i != e; i++) {
        thread_ctx *ctx = i->second;

        if (ctx->has_parent() && ctx->get_parent() == parent &&
                ctx->get_parent_region() == region_id) {
            ctx->pop_parent();
            vector<stack_frame *> *program_stack = ctx->get_stack();
            ctx->decrement_stack_nesting();
            stack_frame *curr = program_stack->back();
            program_stack->pop_back();
            delete curr;

            if (ctx != my_ctx) {
                assert(program_stack->size() == 0);
            }

            if (program_stack->size() == 0) {
                // Erase this thread
                map<pthread_t, unsigned>::iterator found = pthread_to_id.find(
                        ctx->get_pthread());
                assert(found != pthread_to_id.end());
                pthread_to_id.erase(found);

                to_erase.push_back(i);
            } else {
                if (program_stack->size() <
                        ctx->get_first_parallel_for_nesting()) {
                    ctx->set_first_parallel_for_nesting(0);
                }
                if (program_stack->size() <
                        ctx->get_first_critical_nesting()) {
                    ctx->set_first_critical_nesting(0);
                }
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

void chimes_error() {
    exit(42);
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
