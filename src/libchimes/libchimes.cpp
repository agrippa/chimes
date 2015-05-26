#include <set>
#include <map>
#include <string>
#include <vector>

#include <omp.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <aio.h>
#include <errno.h>

#ifdef CUDA_SUPPORT
#include <cuda_runtime.h>
#include "libchimes_cuda.h"
#endif

#include "perf_profile.h"

#include "libchimes.h"
#include "merge_info.h"
#include "npm_context.h"
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
#include "trace_serialization.h"
#include "container_serialization.h"
#include "alias_groups_serialization.h"
#include "checkpointable_heap_serialization.h"
#include "ptr_and_size.h"
#include "already_updated_ptrs.h"
#include "chimes_stack.h"
#include "heap_allocation.h"
#include "checkpointable_heap_allocation.h"
#include "type_info.h"
#include "thread_ctx.h"

#include "xxhash/xxhash.h"

using namespace std;

// #define HASHING_DIAGNOSTICS

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

typedef struct _serialized_checkpoint_time {
    unsigned tid;
    clock_t delta;
} serialized_checkpoint_time;

typedef struct _checkpoint_thread_ctx {
    unsigned char *stacks_serialized;
    unsigned char *globals_serialized;
    unsigned char *constants_serialized;
    unsigned char *thread_hierarchy_serialized;
    uint64_t stacks_serialized_len;
    uint64_t globals_serialized_len;
    uint64_t constants_serialized_len;
    uint64_t thread_hierarchy_serialized_len;

    std::vector<std::pair<unsigned, clock_t> > *checkpoint_entry_times;

    vector<checkpointable_heap_allocation> *heap_to_checkpoint;

    void *contains_serialized;
    size_t contains_serialized_len;
    void *serialized_alias_groups;
    size_t serialized_alias_groups_len;

    map<unsigned, vector<int> *> *stack_trackers;
} checkpoint_thread_ctx;

class checkpoint_ctx {
    public:
        checkpoint_ctx(size_t set_id, unsigned set_thread_count) : id(set_id),
            threads_in_checkpoint(0), thread_count(set_thread_count),
            checkpoint_in_progress(true) { }

        size_t get_id() {
            return id;
        }
        unsigned incr_threads_in_checkpoint() {
            return (++threads_in_checkpoint);
        }
        unsigned decr_threads_in_checkpoint() {
            return (--threads_in_checkpoint);
        }
        void clear_threads_in_checkpoint() {
            threads_in_checkpoint = 0;
        }
        unsigned get_threads_in_checkpoint() {
            return (threads_in_checkpoint);
        }
        void add_entry_time(unsigned tid, clock_t entry) {
            checkpoint_entry_times.push_back(std::pair<unsigned, clock_t>(tid,
                        entry));
        }
        unsigned get_thread_count() {
            return (thread_count);
        }
        bool is_checkpoint_in_progress() {
            return (checkpoint_in_progress);
        }
        void set_checkpoint_in_progress(bool s) {
            checkpoint_in_progress = s;
        }
        void set_exit_time() {
            checkpoint_exit_time = clock();
        }
        clock_t get_exit_time() {
            return checkpoint_exit_time;
        }
        std::vector<std::pair<unsigned, clock_t> > get_checkpoint_entry_times() {
            return (checkpoint_entry_times);
        }

    private:
        size_t id;
        unsigned threads_in_checkpoint;
        unsigned thread_count;
        bool checkpoint_in_progress;
        std::vector<std::pair<unsigned, clock_t> > checkpoint_entry_times;
        clock_t checkpoint_exit_time;
};

// functions defined in this file
int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned n_args, ...);
void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id);
void register_stack_var(const char *mangled_name, int *cond_registration,
        unsigned thread, const char *full_type, void *ptr, size_t size,
        int is_ptr, int is_struct, int n_ptr_fields, ...);
void register_stack_vars(int nvars, ...);
int alias_group_changed(unsigned loc_id);
void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...);
void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
void free_wrapper(void *ptr, size_t group);

void onexit();

static void safe_write(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);
static void safe_read(int fd, void *ptr, size_t size, const char *msg,
        const char *filename);
static void skip(int fd, ssize_t size, const char *msg, const char *filename);
static off_t safe_seek(int fd, off_t offset, int whence, const char *msg,
        const char *filename);
static void *translate_old_ptr(void *ptr,
        std::map<void *, ptr_and_size *> *old_to_new, void *container);
static void fix_stack_or_global_pointer(void *container, string type, int nesting);
map<void *, heap_allocation *>::iterator find_in_heap(void *ptr);
void free_helper(void *ptr);
static stack_var *get_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        va_list vl);
static bool need_to_register(int *cond_registration, string mangled_name);
inline void register_stack_var_helper(std::string mangled_name_str,
        int *cond_registration, const char *full_type, void *ptr, size_t size,
        int is_ptr, int is_struct, int n_ptr_fields, va_list vl,
        std::vector<stack_frame *> *program_stack);
static inline void alias_group_changed_helper(unsigned loc_id,
        thread_ctx *ctx);
static void merge_npm_aliases(string fname, size_t return_alias,
        vector<size_t> param_aliases);
static void *checkpoint_func(void *data);

static std::vector<stack_frame *> *get_my_stack();
static std::vector<stack_frame *> *get_stack_for(unsigned self_id);
static unsigned get_my_tid();
static int get_my_tid_may_fail();
static thread_ctx *get_my_context();
static thread_ctx *get_my_context_may_fail();
static thread_ctx *get_context_for(unsigned tid);
static bool wait_for_all_threads(clock_t *entry_time, checkpoint_ctx **out);

// global data structures that must persist across library calls

/*
 * trace is used during replay to store the trace of calls or parallel regions
 * from the previous execution, and is then used to replay that trace. This
 * basically stores the old contents of stack_tracker.
 */
static map<unsigned, vector<int> > *traces;
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
 * The start and end of the TEXT region of the running executable. This
 * information can be used to update function pointers without getting the
 * address of every function in the compilation unit (which messes with compiler
 * inter-procedural analysis).
 */
static void *text_start = NULL;
static size_t text_len = 0;
static set<string> all_functions;

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
static pthread_rwlock_t pthread_to_id_lock = PTHREAD_RWLOCK_INITIALIZER;

/*
 * count_threads is used to assign every pthread created a unique ID that we use
 * internally to represent each thread. 0 is reserved for main thread before
 * first OMP region, so we start from 1.
 */
static unsigned count_threads = 1;

/*
 * Count the number of total threads to ensure that checkpoints are created by
 * all threads at once.
 */
static unsigned thread_count = 1; // start with one thread
static unsigned regions_initializing = 0;
static size_t checkpoint_initializing = 0;
static std::map<size_t, unsigned> regions_counted;
static pthread_mutex_t thread_count_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t thread_count_cond = PTHREAD_COND_INITIALIZER;

static size_t sync_id_counter = 1;
static std::map<size_t, checkpoint_ctx*> checkpoint_info;

/*
 * Counter for the number of parallel regions entered. Incremented every time we
 * enter a new parallel region to provide a unique ID for that instance of
 * parallelism.
 */
static unsigned long long regions_executed = 0;

/*
 * A mapping from function name to functions called by that function. If a
 * function calls any functions which are unresolvable at compile-time (e.g.
 * through a function pointer) it will not be included in this list because the
 * mapping cannot be made complete.
 */
static map<string, set<string> > call_tree;

/*
 * A mapping from function name to true/false, whether calling that function may
 * cause a checkpoint to be created. Functions not present in this map must be
 * treated as if they mapped to true (i.e. they always create a checkpoint).
 */
static map<string, bool> does_checkpoint;

/*
 * Pointers to conditional variables protecting NPM mode for functions which may
 * not create checkpoints.
 */
static map<string, vector<int *> > npm_conditional_pointers;

/*
 * A mapping from unique variable names to the functions called which mean they
 * must be checkpointed (i.e. functions which may or may not create a
 * checkpoint, we don't know).
 */
static map<string, set<string> > var_checkpoint_causes;

/*
 * A mapping from stack variable name to whether it must be registered for
 * checkpoints. This is conditioned on whether it may be storing a value that is
 * later referenced when a checkpoint is created. The values in this map are
 * generated based on does_checkpoint and var_checkpoint_causes.
 *
 * If a variable is registered which is in this map and maps to false, then we
 * can skip that registration. However, if it is registered and it maps to true
 * or has no entry in this map, we must register it.
 */
static map<string, bool> need_to_checkpoint;

/*
 * A mapping from the unique integer ID of a change location (a location where
 * some alias groups have been modified) to the alias groups that may have been
 * modified by that location.
 */
static map<unsigned, set<size_t> > change_loc_id_to_aliases;
static unsigned count_change_locations = 1;

/*
 * This map stores the alias groups which may be members of the specified alias
 * change locations depending on whether we know that certain functions are
 * defined/transformed by CHIMES. If they are not, we must conservatively assume
 * that all pointer-typed arguments are changed by these external functions and
 * the set of alias groups that may change is added to change_loc_id_to_aliases.
 */
static map<unsigned, map<string, set<size_t> > > possible_alias_changes;

/*
 * During resume, track what locations in memory (heap or stack) have already
 * had their values updated.
 */
static set<void *> *already_translated = NULL;

/*
 * Custom initialization handlers for third-party object types (e.g.
 * cudaStream_t, omp_lock_t, etc).
 */
static map<string, void (*)(void *)> init_handlers;

/*
 * A mapping from plain function name to the location of its definition.
 */
static map<string, void *> provided_npm_functions;

/*
 * A mapping from the name of the original function to its function pointer, and
 * a mapping from the address of the original function to its NPM counterpart.
 * If we find that for a function in fname_to_original_function no checkpoint is
 * ever created, the corresponding mapping is inserted in
 * original_function_to_npm. This is used to allow NPM mode even through
 * function pointer calls.
 */
static map<string, void *> fname_to_original_function;
static map<void *, pair<void *, string> > original_function_to_npm;

/*
 * A mapping from NPM function name to the set of alias change locations inside
 * of it.
 */
static map<string, set<unsigned> > fname_to_alias_locs;

/*
 * A mpping from NPM function name to a list of the function calls it makes,
 * along with information on the aliases passed to those function calls.
 */
static map<string, vector<call_aliases> > fname_to_calls_made;

/*
 * A mapping from an NPM function name to its externally exposed alias groups
 * (i.e. the alias IDs assigned to each of its parameters and its return value.
 */
static map<string, function_io_aliases> fname_to_outer_aliases;

/*
 * A mapping from plain function name to a list of locations where its
 * definition is required.
 */
static map<string, vector<void **> > requested_npm_functions;

/*
 * A mapping from function name to the full NPM context that must be used when
 * that function is called to ensure that all of the proper state change is
 * registered.
 */
static map<string, npm_context *> fname_to_npm_info;

/*
 * Mapping from possibly dynamically inserted NPM calls to the parent-child
 * alias merges that need to be done for that function call.
 */
static map<string, vector<merge_info> > npm_callee_to_dynamic_merge_info;
static map<string, vector<merge_info> > npm_callee_to_static_merge_info;

/*
 * Variables related to the hashing of large arrays. Hashing is done in CHIMES
 * to prevent redundant checkpointing of in-memory state that hasn't changed
 * since the last checkpoint. Currently, we use a high-throughput hashing
 * function on heap allocations that meet certain criteria to reduce their size
 * in the checkpoint. This reduces the checkpoint size on-disk, the amount of
 * disk bandwidth required, and the amount of duplicated heap state necessary
 * in-memory.
 */
static unsigned long long total_allocations = 0;
static hash_chunker *hash_chunker = new fixed_chunk_size_chunker(
        16 * 1024UL * 1024UL);
// Just dump things smaller than this, don't waste time hashing.
static const size_t DONT_HASH_SIZE = 1024UL * 1024UL;
// The target size of a checkpoint, as a percentage of total heap bytes.
static double target_checkpoint_size_perc = 0.2;

// The target amount of overhead to add to the host program.
static bool disable_throttling = false;
static double target_time_overhead = 0.05;
static unsigned long long chimes_overhead = 0;
static unsigned long long dead_thread_time = 0;

#define ADD_TO_OVERHEAD __sync_fetch_and_add(&chimes_overhead, \
        perf_profile::current_time_ms() - __chimes_overhead_start_time);

#define MAX_CHECKPOINT_FILENAME_LEN 256
static char previous_checkpoint_filename[MAX_CHECKPOINT_FILENAME_LEN] =
        { '\0' };
static char checkpoint_directory[MAX_CHECKPOINT_FILENAME_LEN];

#ifdef __CHIMES_PROFILE
enum PROFILE_LABEL_ID { NEW_STACK = 0, RM_STACK, REGISTER_STACK_VAR, CALLING,
    INIT_MODULE, REGISTER_GLOBAL_VAR, ALIAS_GROUP_CHANGED, MALLOC_WRAPPER,
    REALLOC_WRAPPER, FREE_WRAPPER, CALLOC_WRAPPER, REGISTER_CONSTANT,
    LEAVING_OMP_PARALLEL, REGISTER_THREAD_LOCAL_STACK_VARS,
    ENTERING_OMP_PARALLEL, CHECKPOINT_THREAD, CHECKPOINT, INIT_CHIMES,
    WAIT_FOR_ALL_THREADS, HASHING, REGISTER_STACK_VARS, REGISTER_FUNCTIONS,
    N_LABELS };
static const char *PROFILE_LABELS[] = { "new_stack", "rm_stack",
    "register_stack_var", "calling", "init_module", "register_global_var",
    "alias_group_changed", "malloc_wrapper", "realloc_wrapper",
    "free_wrapper", "calloc_wrapper", "register_constant",
    "leaving_omp_parallel", "register_thread_local_stack_vars",
    "entering_omp_parallel", "checkpoint_thread", "checkpoint", "init_chimes",
    "wait_for_all_threads", "hashing", "register_stack_vars",
    "register_text" };

perf_profile pp(PROFILE_LABELS, N_LABELS);
#endif

static map<unsigned, vector<stack_frame *> *> *unpacked_program_stacks;
static map<std::string, stack_var *> *unpacked_global_vars;
static map<size_t, constant_var*> *unpacked_constants;
static map<unsigned, pair<unsigned, unsigned> > *unpacked_thread_hierarchy;
static map<unsigned, clock_t> *checkpoint_entry_deltas;
/*
 * A list of objects specifying what memory locations were updated with
 * corrected pointers during the sweep over heap allocations.
 */
static vector<already_updated_ptrs *> already_updated;
static std::map<void *, ptr_and_size *> *old_to_new;

static std::map<std::string, std::vector<struct_field> *> structs;

static pthread_t checkpoint_thread;
static checkpoint_thread_ctx running_checkpoint_ctx;
static pthread_mutex_t checkpoint_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t checkpoint_cond = PTHREAD_COND_INITIALIZER;
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
            VERIFY(pthread_rwlock_rdlock(&aliased_groups_lock) == 0);
        }

        if (aliased_groups.find(group1) != aliased_groups.end() &&
                aliased_groups.find(group2) != aliased_groups.end()) {
            // Can just do a pointer comparison here
            result = (aliased_groups[group1] == aliased_groups[group2]);
        }

        if (need_to_lock) {
            VERIFY(pthread_rwlock_unlock(&aliased_groups_lock) == 0);
        }
    }
    return result;
}

static void read_heap_from_file(int fd, char *checkpoint_file,
        std::map<void *, ptr_and_size *> *old_to_new,
        std::vector<heap_allocation *> *new_heap,
        std::map<void *, memory_filled *> *filled,
        std::map<void *, heap_allocation *> *old_to_alloc) {
    uint64_t n_heap_allocs;
    safe_read(fd, &n_heap_allocs, sizeof(n_heap_allocs), "n_heap_allocs",
            checkpoint_file);

#ifdef VERBOSE
    fprintf(stderr, "\nHeap serialized to file %s has %d allocations\n\n",
            checkpoint_file, n_heap_allocs);
#endif
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

        size_t elem_size = 0;
        vector<int> elem_ptr_offsets;
        if (elem_is_struct) {
            safe_read(fd, &elem_size, sizeof(elem_size), "elem_size",
                    checkpoint_file);

            int elem_ptr_offsets_len;
            safe_read(fd, &elem_ptr_offsets_len,
                    sizeof(elem_ptr_offsets_len),
                    "elem_ptr_offsets_len", checkpoint_file);
            for (int j = 0; j < elem_ptr_offsets_len; j++) {
                int offset;
                safe_read(fd, &offset, sizeof(offset), "offset",
                        checkpoint_file);
                elem_ptr_offsets.push_back(offset);
            }
        }

        int n_ranges;
        size_t buffer_length = 0;
        safe_read(fd, &n_ranges, sizeof(n_ranges), "n_ranges", checkpoint_file);
        vector<pair<size_t, size_t> > ranges;
        for (int j = 0; j < n_ranges; j++) {
            size_t range_start, range_end;
            safe_read(fd, &range_start, sizeof(range_start), "range_start",
                    checkpoint_file);
            safe_read(fd, &range_end, sizeof(range_end), "range_end",
                    checkpoint_file);
            ranges.push_back(pair<size_t, size_t>(range_start, range_end));
            buffer_length += (range_end - range_start);
        }
        void *buffer = malloc(buffer_length);
        safe_read(fd, buffer, buffer_length, "buffer", checkpoint_file);

#ifdef VERBOSE
        fprintf(stderr, "read_heap_from_file: loading old_address=%p\n",
                old_address);
#endif

        heap_allocation *alloc = NULL;
        memory_filled *already_filled = NULL;
        /*
         * This block should simply initialize a new heap_allocation object (if
         * necessary). Later we actually populate the data from buffer, based on
         * ranges.
         */
        if (old_to_new->find(old_address) == old_to_new->end()) {
            assert(filled->find(old_address) == filled->end());
            assert(old_to_alloc->find(old_address) == old_to_alloc->end());

            void *new_address;
            if (is_cuda_alloc) {
                CHECK(cudaMalloc((void **)&new_address, size));
            } else {
                new_address = malloc(size);
                assert(new_address != NULL);
            }
#ifdef VERBOSE
            fprintf(stderr, "  first load of this heap allocation, "
                    "new_address=%p\n", new_address);
#endif

            alloc = new heap_allocation(new_address, size,
                    group, is_cuda_alloc, elem_is_ptr, elem_is_struct,
                    *hash_chunker);
            if (elem_is_struct) {
                alloc->add_struct_elem_size(elem_size);
                alloc->set_pointer_offsets(&elem_ptr_offsets);
            }

            already_filled = new memory_filled(size);

            new_heap->push_back(alloc);

            assert(heap.find(alloc->get_address()) == heap.end());
            heap[alloc->get_address()] = alloc;

            if (alias_to_heap.find(group) == alias_to_heap.end()) {
                alias_to_heap[group] = new vector<heap_allocation *>();
            }
            alias_to_heap[group]->push_back(alloc);

            assert(old_to_new->find(old_address) == old_to_new->end());
            old_to_new->insert(pair<void *, ptr_and_size *>(old_address,
                        new ptr_and_size(new_address, size)));
            filled->insert(pair<void *, memory_filled *>(old_address,
                        already_filled));
            old_to_alloc->insert(pair<void *, heap_allocation *>(old_address,
                        alloc));
        } else {
            assert(filled->find(old_address) != filled->end());
            assert(old_to_alloc->find(old_address) != old_to_alloc->end());

#ifdef VERBOSE
            fprintf(stderr, "  not the first load of this heap allocation\n");
#endif

            alloc = old_to_alloc->at(old_address);
            already_filled = filled->at(old_address);
        }

#ifdef VERBOSE
        fprintf(stderr, "  ranges:\n");
#endif
        /*
         * Populate the live buffer in alloc based on the already filled ranges
         * in already_filled and the available ranges in ranges.
         */
        size_t sofar = 0;
        unsigned char *c_new_address = (unsigned char *)alloc->get_address();
        for (vector<pair<size_t, size_t> >::iterator range_iter =
                ranges.begin(), range_e = ranges.end();
                range_iter != range_e; range_iter++) {
            size_t range_start = range_iter->first;
            size_t range_end = range_iter->second;
            unsigned char *in_buffer = ((unsigned char *)buffer) + sofar;
#ifdef VERBOSE
            fprintf(stderr, "    %lu -> %lu\n", range_start, range_end);
#endif

            vector<pair<size_t, size_t> > *needed = already_filled->offer(
                    range_start, range_end);
            for (vector<pair<size_t, size_t> >::iterator needed_iter =
                    needed->begin(), needed_end = needed->end(); needed_iter !=
                    needed_end; needed_iter++) {
                assert(needed_iter->first >= range_start);
                size_t in_buf_offset = needed_iter->first - range_start;
                assert(needed_iter->second <= range_end);
                size_t in_buf_length = needed_iter->second - needed_iter->first;

#ifdef VERBOSE
                fprintf(stderr, "      using %lu -> %lu\n", needed_iter->first,
                        needed_iter->second);
#endif

                if (alloc->get_is_cuda_alloc()) {
                    CHECK(cudaMemcpy(c_new_address + needed_iter->first,
                                in_buffer + in_buf_offset, in_buf_length,
                                cudaMemcpyHostToDevice));
                } else {
                    memcpy(c_new_address + needed_iter->first,
                            in_buffer + in_buf_offset, in_buf_length);
                }
            }
            delete needed;

            sofar += (range_end - range_start);
        }

        free(buffer);
    }
}

static void read_heap_from_previous_checkpoint(
        char checkpoint_file[MAX_CHECKPOINT_FILENAME_LEN],
        std::map<void *, ptr_and_size *> *old_to_new,
        std::vector<heap_allocation *> *new_heap,
        std::map<void *, memory_filled *> *filled,
        std::map<void *, heap_allocation *> *old_to_alloc) {
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

    safe_seek(fd, 0, SEEK_SET, "seek_to_start", checkpoint_file);
    skip(fd, heap_offset, "skip", checkpoint_file);

    read_heap_from_file(fd, checkpoint_file, old_to_new, new_heap, filled,
            old_to_alloc);

    close(fd);

    if (filename_length > 1) {
        read_heap_from_previous_checkpoint(previous_checkpoint_file, old_to_new,
                new_heap, filled, old_to_alloc);
    }
}

void init_omp_lock(void *ptr) {
    omp_lock_t *omp_ptr = (omp_lock_t *)ptr;
    omp_init_lock(omp_ptr);
}

/*
 * The obj_name argument should be a string literal, as this function is called
 * on resume before the rest of the program stack is reconstructed.
 */
void register_custom_init_handler(const char *obj_name, void (*fp)(void *)) {
    string obj_name_str(obj_name);
    assert(init_handlers.find(obj_name_str) == init_handlers.end());
    assert(thread_count == 1); // not thread-safe

    init_handlers[obj_name_str] = fp;
}

static void addCallToNPMContext(npm_context *ctx, call_aliases call) {
    if (fname_to_outer_aliases.find(call.get_callee_name()) ==
            fname_to_outer_aliases.end()) {
        /*
         * Functions external to this program but which have been identified as
         * non-checkpointable (e.g. malloc) may be passed here, but their
         * information does not need to be included in the NPM context.
         */
        return;
    }
    function_io_aliases callee =
        fname_to_outer_aliases.at(call.get_callee_name());

    assert(call.get_n_args() == callee.get_n_params());
    if (call.get_return_alias() == 0UL || callee.get_return_alias() == 0UL) {
        assert(call.get_return_alias() == 0UL &&
                callee.get_return_alias() == 0UL);
    } else {
        ctx->add_created_alias(call.get_return_alias(),
                callee.get_return_alias());
    }

    for (unsigned a = 0; a < call.get_n_args(); a++) {
        size_t parent = call.get_arg_alias(a);
        size_t child = callee.get_param_alias(a);

        if (parent == 0UL || child == 0UL) {
            assert(parent == 0UL && child == 0UL);
        } else {
            ctx->add_created_alias(parent, child);
        }
    }
}

static void constructNPMContext(npm_context *ctx, string current_function,
        set<string> *visited) {
    if (visited->find(current_function) != visited->end()) {
        return;
    }
    visited->insert(current_function);

    if (fname_to_alias_locs.find(current_function) == fname_to_alias_locs.end()) {
        /*
         * We won't have information on the internal alias change locations for
         * certain functions which are statically identified as
         * non-checkpointable (e.g. malloc).
         */
        return;
    }

    set<unsigned> locs = fname_to_alias_locs[current_function];
    ctx->add_alias_locs(locs);

    vector<call_aliases> calls_made = fname_to_calls_made[current_function];
    for (vector<call_aliases>::iterator i = calls_made.begin(),
            e = calls_made.end(); i != e; i++) {
        call_aliases call = *i;

        addCallToNPMContext(ctx, call);

        constructNPMContext(ctx, call.get_callee_name(), visited);
    }
}

void init_chimes() {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    atexit(onexit);

    register_custom_init_handler("omp_lock_t", init_omp_lock);

    pthread_create(&checkpoint_thread, NULL, checkpoint_func,
            &running_checkpoint_ctx);

    pthread_t self = pthread_self();
    assert(pthread_to_id.size() == 0);
    pthread_to_id[self] = 0;
    thread_ctxs[0] = new thread_ctx(self, count_change_locations);

    char *chimes_disable_throttling = getenv("CHIMES_DISABLE_THROTTLING");
    if (chimes_disable_throttling && strlen(chimes_disable_throttling) > 0) {
        disable_throttling = true;
    }

    char *chunk_size = getenv("CHIMES_CHUNK_SIZE_MB");
    if (chunk_size != NULL) {
        hash_chunker = new fixed_chunk_size_chunker(
                atoi(chunk_size) * 1024UL * 1024UL);
    }

    char *checkpoint_dir = getenv("CHIMES_CHECKPOINT_DIR");
    if (checkpoint_dir == NULL) {
        fprintf(stderr, "A directory for storing checkpoint files must be "
                "specified by the CHIMES_CHECKPOINT_DIR environment variable\n");
        exit(1);
    }
    memcpy(checkpoint_directory, checkpoint_dir, strlen(checkpoint_dir) + 1);

    /*
     * Figure out all of the functions in this executable that may cause a
     * checkpoint to be created.
     */
    does_checkpoint["checkpoint"] = true;
    bool changed;
    do {
        changed = false;
        for (map<string, set<string> >::iterator i = call_tree.begin(),
                e = call_tree.end(); i != e; i++) {
            string func = i->first;
            /*
             * If we already know this function causes a checkpoint, nothing can
             * change that so we continue.
             */
            if (does_checkpoint.find(func) != does_checkpoint.end() &&
                    does_checkpoint[func]) {
                continue;
            }

            bool causes_checkpoint = false;
#ifdef VERBOSE
            std::string checkpoint_causer;
#endif
            for (set<string>::iterator callee_iter = i->second.begin(),
                    callee_end = i->second.end(); callee_iter != callee_end;
                    callee_iter++) {
                string callee = *callee_iter;
                /*
                 * If this is either a function that we don't know about (and
                 * therefore can't know if it will checkpoint or not), or a
                 * function that we think will checkpoint, then apply that
                 * property transitively to the current function.
                 */
                if (call_tree.find(callee) == call_tree.end() ||
                        (does_checkpoint.find(callee) != does_checkpoint.end() &&
                        does_checkpoint[callee])) {
                    causes_checkpoint = true;
#ifdef VERBOSE
                    checkpoint_causer = callee;
#endif
                    break;
                }
            }

            if (does_checkpoint.find(func) == does_checkpoint.end()) {
                // No existing knowledge of this function
#ifdef VERBOSE
                fprintf(stderr, "%s causes checkpoint? %s", func.c_str(),
                        (causes_checkpoint ? "true" : "false"));
                if (causes_checkpoint) {
                    fprintf(stderr, " (because %s)", checkpoint_causer.c_str());
                }
                fprintf(stderr, "\n");
#endif
                does_checkpoint[func] = causes_checkpoint;
                changed = true;
            } else {
                /*
                 * Already have a value for this function, only mark changed if
                 * it actually changes.
                 */
                if (causes_checkpoint && !does_checkpoint[func]){ 
                    does_checkpoint[func] = true;
#ifdef VERBOSE
                fprintf(stderr, "%s causes checkpoint? true (because %s)\n",
                        func.c_str(), checkpoint_causer.c_str());
#endif
                    changed = true;
                }
            }
        }
    } while (changed);

#ifdef VERBOSE
    for (map<string, bool>::iterator i = does_checkpoint.begin(),
            e = does_checkpoint.end(); i != e; i++) {
        fprintf(stderr, "%s does checkpoint? %d\n", i->first.c_str(),
                i->second);
    }
#endif

    for (map<string, vector<int *> >::iterator i =
            npm_conditional_pointers.begin(), e =
            npm_conditional_pointers.end(); i != e; i++) {
        /*
         * If there isn't an entry in does_checkpoint for this function, it must
         * be an externally compiled function that we don't have checkpointing
         * information on.
         */
        if (does_checkpoint.find(i->first) != does_checkpoint.end()) {
            /*
             * All variables are initialized to one, so we set to 0 if we
             * discover a function that will not cause a checkpoint (and for
             * which this information could not be discovered at compile time)
             * and which we can therefore run in NPM mode.
             */
#ifdef VERBOSE
            fprintf(stderr, "Setting conditional NPM variables for %s\n",
                    i->first.c_str());
#endif
            if (!does_checkpoint.at(i->first)) {
                for (vector<int *>::iterator ii = i->second.begin(),
                        ee = i->second.end(); ii != ee; ii++) {
                    *(*ii) = 0;
                }
            }
        }
    }

    /*
     * Iterate over all non-checkpointing functions and collect NPM info for
     * them.
     */
    for (map<string, void *>::iterator i = provided_npm_functions.begin(),
            e = provided_npm_functions.end(); i != e; i++) {
        std::string fname = i->first;
        const bool does_not_cause_checkpoint = (does_checkpoint.find(fname) !=
                does_checkpoint.end() && !does_checkpoint.at(fname));
#ifdef VERBOSE
        fprintf(stderr, "Generating NPM info for function %s, does not "
                "checkpoint? %d\n", fname.c_str(), does_not_cause_checkpoint);
#endif

        if (does_not_cause_checkpoint) {
            set<string> visited;
            npm_context *ctx = new npm_context(fname);
            constructNPMContext(ctx, fname, &visited);

            VERIFY(fname_to_npm_info.insert(pair<string, npm_context *>(fname,
                            ctx)).second);

            if (fname_to_original_function.find(fname) !=
                    fname_to_original_function.end()) {
                void *npm_fptr = provided_npm_functions.at(fname);
                void *original_ptr = fname_to_original_function.at(fname);
                original_function_to_npm.insert(
                        pair<void *, pair<void *, string> >(original_ptr,
                            pair<void *, string>(npm_fptr, fname)));
            }
        }
    }

    for (map<string, vector<merge_info> >::iterator i =
            npm_callee_to_static_merge_info.begin(), e =
            npm_callee_to_static_merge_info.end(); i != e; i++) {
        string callee_name = i->first;
        vector<merge_info> info = i->second;

        for (vector<merge_info>::iterator ii = info.begin(), ee = info.end();
                ii != ee; ii++) {
            merge_info curr = *ii;
            merge_npm_aliases(callee_name, curr.get_return_alias(),
                    curr.get_param_aliases());
        }
    }

    for (map<string, vector<merge_info> >::iterator i =
            npm_callee_to_dynamic_merge_info.begin(), e =
            npm_callee_to_dynamic_merge_info.end(); i != e; i++) {
        string callee_name = i->first;
        vector<merge_info> info = i->second;

        /*
         * Information on the outermost aliases for this function may be missing
         * if it is not convertible to NPM mode (e.g. makes function pointer
         * calls). In this case, there's no need to insert this aliases ahead of
         * time, as they will always be inserted at runtime by calling(). Hence,
         * we check if callee is in the provided NPM functions here.
         */
        if (does_checkpoint.find(callee_name) != does_checkpoint.end() &&
                provided_npm_functions.find(callee_name) !=
                    provided_npm_functions.end() &&
                !does_checkpoint.at(callee_name)) {
            for (vector<merge_info>::iterator ii = info.begin(),
                    ee = info.end(); ii != ee; ii++) {
                merge_info curr = *ii;
                merge_npm_aliases(callee_name, curr.get_return_alias(),
                        curr.get_param_aliases());
            }
        }
    }

    /*
     * Resolve any NPM function pointers that different compilation units depend
     * on, and updated the compilation-unit-local function pointers for those
     * externally defined NPM function pointers.
     */
    for (map<string, vector<void **> >::iterator i =
            requested_npm_functions.begin(), e = requested_npm_functions.end();
            i != e; i++) {
        string fname = i->first;
        void *npm_fptr = NULL;

        if (provided_npm_functions.find(fname) !=
                provided_npm_functions.end() &&
                does_checkpoint.find(fname) != does_checkpoint.end() &&
                !does_checkpoint.at(fname)) {
            npm_fptr = provided_npm_functions.at(fname);
        } else {
#ifdef VERBOSE
            fprintf(stderr, "Seems like we're missing %s?\n", fname.c_str());
#endif
        }

        if (npm_fptr) {
            for (vector<void **>::iterator ii = i->second.begin(),
                    ee = i->second.end(); ii != ee; ii++) {
                void **ptr_to_ptr = *ii;
                *ptr_to_ptr = npm_fptr;
            }
        }
    }

    for (map<string, set<string> >::iterator i = var_checkpoint_causes.begin(),
            e = var_checkpoint_causes.end(); i != e; i++) {
        string varname = i->first;
        bool must_checkpoint = false;

        for (set<string>::iterator cause_iter = i->second.begin(),
                cause_end = i->second.end(); cause_iter != cause_end;
                cause_iter++) {
            string cause = *cause_iter;
            if (does_checkpoint.find(cause) == does_checkpoint.end() ||
                    does_checkpoint[cause]) {
#ifdef VERBOSE
                fprintf(stderr, "Must checkpoint %s because of %s\n",
                        varname.c_str(), cause.c_str());
#endif
                must_checkpoint = true;
                break;
            }
        }

        assert(need_to_checkpoint.find(varname) == need_to_checkpoint.end());
        need_to_checkpoint[varname] = must_checkpoint;
    }

    /*
     * Check for any missing function definitions that mean we need to make more
     * conserviative decisions about the aliases changed by a function call.
     */
    for (map<unsigned, map<string, set<size_t> > >::iterator i =
            possible_alias_changes.begin(), e = possible_alias_changes.end();
            i != e; i++) {
        unsigned loc_id = i->first;
        map<string, set<size_t> > funcname_to_aliases = i->second;

#ifdef VERBOSE
        fprintf(stderr, "looking at location %u for possible additional "
                "aliases, %u possible contributing functions\n", loc_id,
                funcname_to_aliases.size());
#endif

        for (map<string, set<size_t> >::iterator ii =
                funcname_to_aliases.begin(), ee = funcname_to_aliases.end();
                ii != ee; ii++) {
            string funcname = ii->first;
            set<size_t> aliases = ii->second;

            if (all_functions.find(funcname) == all_functions.end()) {
#ifdef VERBOSE
                fprintf(stderr, "Missing function %s causes conservative alias "
                        "change groups for location %u\n", funcname.c_str(),
                        loc_id);
#endif
                for (set<size_t>::iterator iii = aliases.begin(),
                        eee = aliases.end(); iii != eee; iii++) {
                    change_loc_id_to_aliases.at(loc_id).insert(*iii);
                }
            } else {
#ifdef VERBOSE
                fprintf(stderr, "Have definition for function %s so can skip "
                        "conservative change sets at location %u\n",
                        funcname.c_str(), loc_id);
#endif
            }
        }
    }

    char *checkpoint_file = getenv("CHIMES_CHECKPOINT_FILE");
    if (checkpoint_file != NULL) {
        /*
         * Any checkpoints created during this resume should be a new branch in
         * the tree of checkpoints.
         */
        strcpy(previous_checkpoint_filename, checkpoint_file);

#ifdef VERBOSE
        fprintf(stderr, "Using checkpoint file %s\n", checkpoint_file);
#endif
        ____chimes_replaying = 1;
        already_translated = new set<void *>();

        int fd = open(checkpoint_file, O_RDONLY);
        if (fd < 0) {
            fprintf(stderr, "Error opening checkpoint file %s\n",
                    checkpoint_file);
            exit(1);
        }

        size_t filename_length;
        char previous_checkpoint_file[MAX_CHECKPOINT_FILENAME_LEN];
        safe_read(fd, &filename_length, sizeof(filename_length),
                "filename_length", checkpoint_file);
        safe_read(fd, previous_checkpoint_file, filename_length,
                "previous_checkpoint_file", checkpoint_file);

        size_t heap_offset;
        safe_read(fd, &heap_offset, sizeof(heap_offset), "heap_offset",
                checkpoint_file);

        // Read heap entry times from checkpoint
        checkpoint_entry_deltas =
            new std::map<unsigned, clock_t>();
        int n_checkpoint_times;
        safe_read(fd, &n_checkpoint_times, sizeof(n_checkpoint_times),
                "n_checkpoint_times", checkpoint_file);
        serialized_checkpoint_time *serialized_times =
            (serialized_checkpoint_time *)malloc(n_checkpoint_times *
                    sizeof(serialized_checkpoint_time));
        safe_read(fd, serialized_times, n_checkpoint_times *
                sizeof(serialized_checkpoint_time), "serialized_times",
                checkpoint_file);
        for (int i = 0; i < n_checkpoint_times; i++) {
            unsigned tid = serialized_times[i].tid;
            clock_t delta = serialized_times[i].delta;

            checkpoint_entry_deltas->insert(std::pair<unsigned, clock_t>(tid,
                        delta));
        }

        // Read traces from checkpoint
        size_t serialized_traces_len;
        safe_read(fd, &serialized_traces_len, sizeof(serialized_traces_len),
                "serialized_traces_len", checkpoint_file);
        void *serialized_traces = malloc(serialized_traces_len);
        safe_read(fd, serialized_traces, serialized_traces_len, "serialized_traces",
                checkpoint_file);
        traces = deserialize_traces(serialized_traces, serialized_traces_len,
                &trace_indices);

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

        // read in function pointers from previous program execution
        void *unpacked_text_start;
        size_t unpacked_text_len;
        safe_read(fd, &unpacked_text_start, sizeof(unpacked_text_start),
                "text_start", checkpoint_file);
        safe_read(fd, &unpacked_text_len, sizeof(unpacked_text_len), "text_len",
                checkpoint_file);

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
        old_to_new = new std::map<void *, ptr_and_size *>();
        std::vector<heap_allocation *> *new_heap =
            new std::vector<heap_allocation *>();
        std::map<void *, memory_filled *> *filled = new std::map<void *,
            memory_filled *>();
        std::map<void *, heap_allocation *> *old_to_alloc = new std::map<void *,
            heap_allocation *>();
        read_heap_from_file(fd, checkpoint_file, old_to_new, new_heap, filled,
                old_to_alloc);

        if (filename_length > 1) {
            read_heap_from_previous_checkpoint(previous_checkpoint_file,
                    old_to_new, new_heap, filled, old_to_alloc);
        }

        assert(filled->size() == new_heap->size());
        assert(old_to_new->size() == filled->size());
        assert(old_to_alloc->size() == filled->size());

        for (std::map<void *, memory_filled *>::iterator filled_i =
                filled->begin(), filled_e = filled->end(); filled_i != filled_e;
                filled_i++) {
            memory_filled *curr = filled_i->second;
#ifdef VERBOSE
            if (!curr->empty()) {
                fprintf(stderr, "non-empty range for old_address=%p, "
                        "missing:\n", filled_i->first);
                vector<pair<size_t, size_t> > *not_filled =
                    curr->get_not_filled();
                for (vector<pair<size_t, size_t> >::iterator missing_i =
                        not_filled->begin(), missing_e = not_filled->end();
                        missing_i != missing_e; missing_i++) {
                    size_t start = missing_i->first;
                    size_t end = missing_i->second;
                    fprintf(stderr, "  %lu -> %lu\n", start, end);
                }
            }
#endif
            assert(curr->empty());
        }

        delete filled;
        delete old_to_alloc;

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

        assert(old_to_new->find(unpacked_text_start) == old_to_new->end());
        assert(unpacked_text_len == text_len); // This is very strict
        old_to_new->insert(pair<void *, ptr_and_size *>(unpacked_text_start,
                    new ptr_and_size(text_start, text_len)));

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
                    VERIFY(false);
#endif
                } else {
                    void **arr = (void **)(alloc->get_address());

#ifdef VERBOSE
                    fprintf(stderr, "translating an array of pointers, arr=%p "
                            "nelems=%d\n", arr, nelems);
#endif
                    for (int i = 0; i < nelems; i++) {
                        void *new_ptr = translate_old_ptr(arr[i], old_to_new, arr + i);
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
                        VERIFY(false);
#endif
                    } else {
#ifdef VERBOSE
                        fprintf(stderr, "translating struct elements in an "
                                "array nelems=%d\n", nelems);
#endif
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
                                void *new_address = translate_old_ptr(*ptr_address, old_to_new, ptr_address);
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

        delete new_heap;

        size_t serialized_contains_len;
        safe_read(fd, &serialized_contains_len, sizeof(serialized_contains_len),
                "serialized_contains_len", checkpoint_file);
        void *serialized_contains = malloc(serialized_contains_len);
        safe_read(fd, serialized_contains, serialized_contains_len,
                "serialized_contains", checkpoint_file);
        deserialize_containers(serialized_contains, serialized_contains_len,
                &contains);
        free(serialized_contains);

        size_t serialized_alias_groups_len;
        safe_read(fd, &serialized_alias_groups_len,
                sizeof(serialized_alias_groups_len),
                "serialized_alias_groups_len", checkpoint_file);
        void *serialized_alias_groups = malloc(serialized_alias_groups_len);
        safe_read(fd, serialized_alias_groups, serialized_alias_groups_len,
                "serialized_alias_groups", checkpoint_file);
        deserialize_alias_groups(serialized_alias_groups,
                serialized_alias_groups_len, &aliased_groups);
        free(serialized_alias_groups);

        close(fd);
    }
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(INIT_CHIMES, __start_time);
#endif
}

static void *translate_old_ptr(void *ptr,
        std::map<void *, ptr_and_size *> *old_to_new, void *container) {
    assert(already_translated);

    if (already_translated->find(container) != already_translated->end()) {
        /*
         * Don't try to re-update locations that we've already updated. If the
         * address space of the old program and the new program overlap, then
         * this may lead to us doubly updating a location to some new address in
         * the new address space.
         */
        return NULL;
    }

    unsigned char *c_ptr = (unsigned char *)ptr;
    for (std::map<void *, ptr_and_size *>::iterator i = old_to_new->begin(),
            e = old_to_new->end(); i != e; i++) {
        ptr_and_size *n = i->second;
        unsigned char *c_old_ptr = (unsigned char *)(i->first);
        size_t diff_in_bytes = c_ptr - c_old_ptr;
        if (diff_in_bytes < n->get_size()) {
#ifdef VERBOSE
            fprintf(stderr, "found matching old allocation starting at %p, "
                    "size %lu, diff %lu, new ptr %p\n", i->first, n->get_size(),
                    diff_in_bytes, n->get_ptr());
#endif
            already_translated->insert(container);
            return ((unsigned char *)n->get_ptr()) + diff_in_bytes;
        }
    }
    return NULL;
}

static map<size_t, size_t>::iterator find_alias_in_contains(size_t alias,
        size_t *out_alias) {
    if (aliased_groups.find(alias) == aliased_groups.end()) {
        *out_alias = alias;
        return contains.find(alias);
    } else {
        vector<size_t> *aliased = aliased_groups.at(alias);
        for (vector<size_t>::iterator i = aliased->begin(), e = aliased->end();
                i != e; i++) {
            size_t curr = *i;
            map<size_t, size_t>::iterator found = contains.find(curr);
            if (found != contains.end()) {
                *out_alias = curr;
                return found;
            }
        }
    }
    return contains.end();
}

static void merge_alias_groups(size_t alias1, size_t alias2) {
    assert(valid_group(alias1));
    assert(valid_group(alias2));

    if (aliased(alias1, alias2, false)) return;

    VERIFY(pthread_rwlock_rdlock(&contains_lock) == 0);
    size_t alias1_alias, alias2_alias;
    map<size_t, size_t>::iterator child1_iter = find_alias_in_contains(alias1,
            &alias1_alias);
    map<size_t, size_t>::iterator child2_iter = find_alias_in_contains(alias2,
            &alias2_alias);
    map<size_t, size_t>::iterator end = contains.end();

    if (child1_iter != end && child2_iter == end) {
        contains[alias2] = contains[alias1_alias];
    } else if (child1_iter == end && child2_iter != end) {
        contains[alias1] = contains[alias2_alias];
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
    VERIFY(pthread_rwlock_unlock(&contains_lock) == 0);

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

static void parse_merges(int n_merges, va_list vl,
        map<string, vector<merge_info> > *out) {
    for (int i = 0; i < n_merges; i++) {
        std::string callee_name(va_arg(vl, const char *));
        size_t return_alias = va_arg(vl, size_t);
        int n_param_aliases = va_arg(vl, int);
#ifdef VERBOSE
        fprintf(stderr, "Parsing NPM merges for callee=%s return_alias=%lu "
                "n_param_aliases=%d\n", callee_name.c_str(), return_alias,
                n_param_aliases);
#endif

        vector<size_t> param_aliases;
        for (int j = 0; j < n_param_aliases; j++) {
            size_t alias = va_arg(vl, size_t);
#ifdef VERBOSE
            fprintf(stderr, "  param alias %d: %lu\n", j, alias);
#endif
            param_aliases.push_back(alias);
        }

        if (out->find(callee_name) == out->end()) {
            out->insert(pair<string, vector<merge_info> >(callee_name,
                        vector<merge_info>()));
        }
        out->at(callee_name).push_back(merge_info(param_aliases, return_alias));
    }
}

void init_module(size_t module_id, int n_contains_mappings, int nfunctions,
        int nvars, int n_change_locs, int n_provided_npm_functions,
        int n_external_npm_functions, int n_npm_conditionals,
        int n_static_merges, int n_dynamic_merges, int nstructs, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    VERIFY(pthread_mutex_lock(&module_mutex) == 0);

    bool replay = (getenv("CHIMES_CHECKPOINT_FILE") != NULL);
    va_list vl;
    va_start(vl, nstructs);

    bool initialized = (initialized_modules.find(module_id) !=
            initialized_modules.end());
    assert(!initialized);
    initialized_modules.insert(module_id);

    // Generate unique IDs for each change location
    for (int i = 0; i < n_change_locs; i++) {
        // Unique ID for this location
        unsigned this_loc_id = count_change_locations++;

        /*
         * Location in the host application to store the integer ID of this
         * location.
         */
        unsigned *change_loc_id_ptr = va_arg(vl, unsigned *);
        // Number of aliases that have definitely changed at this location
        const unsigned n_aliases_at_loc = va_arg(vl, unsigned);
        /*
         * Number of aliases which may have to be marked changed at this
         * location. These are groups that are passed to externally defined
         * functions. If we do not get that function registered at runtime, we
         * have to conservatively assume these groups have changed.
         */
        const unsigned n_possible_aliases_at_loc = va_arg(vl, unsigned);

#ifdef VERBOSE
        fprintf(stderr, "Change location %u has %u aliases, %u more possible "
                "aliases\n", this_loc_id, n_aliases_at_loc,
                n_possible_aliases_at_loc);
#endif

        // Read definite changes
        set<size_t> aliases_changed;
        for (unsigned j = 0; j < n_aliases_at_loc; j++) {
            size_t alias = va_arg(vl, size_t);
            aliases_changed.insert(alias);
        }
        change_loc_id_to_aliases.insert(pair<unsigned, set<size_t> >(
                    this_loc_id, aliases_changed));

        /*
         * Read a mapping from externally defined function name to the aliases
         * it is passed which it may (or may not) change.
         */
        map<string, set<size_t> > possible_aliases;
        for (unsigned j = 0; j < n_possible_aliases_at_loc; j++) {
            std::string funcname(va_arg(vl, const char *));
            unsigned naliases = va_arg(vl, unsigned);

            assert(possible_aliases.find(funcname) == possible_aliases.end());
            possible_aliases.insert(pair<string, set<size_t> >(funcname,
                        set<size_t>()));

            for (unsigned k = 0; k < naliases; k++) {
                size_t alias = va_arg(vl, size_t);
                possible_aliases.at(funcname).insert(alias);
            }
        }

        possible_alias_changes.insert(
                pair<unsigned, map<string, set<size_t> > >(this_loc_id,
                    possible_aliases));

        *change_loc_id_ptr = this_loc_id;
    }

    // Iterate over the NPM functions defined inside this compilation unit.
    for (int i = 0; i < n_provided_npm_functions; i++) {
        std::string fname(va_arg(vl, char *));
        void *fptr = va_arg(vl, void *);
        void *original_fptr = va_arg(vl, void *);

        /*
         * original_fptr will be NULL for any functions whose addresses are not
         * taken within the same compilation unit. This serves as an
         * optimization to help the compiler with inter-procedural analysis --
         * code runs much more slowly when you load the function address for
         * every function in a compilation unit, forcing the compiler to make
         * more conservative decisions.
         */
        if (original_fptr) {
            assert(fname_to_original_function.find(fname) ==
                    fname_to_original_function.end());
            fname_to_original_function[fname] = original_fptr;
        }

        // Alias locations that are stored in this function
        const int n_alias_locs = va_arg(vl, int);
        set<unsigned> alias_locs;
        for (int j = 0; j < n_alias_locs; j++) {
            unsigned *loc_id_ptr = va_arg(vl, unsigned *);
            alias_locs.insert(*loc_id_ptr);
        }

        /*
         * The aliases that this function assigns to its input parameters and
         * its returned value.
         */
        vector<size_t> param_aliases;
        size_t return_alias;
        const int n_param_aliases = va_arg(vl, int);
        for (int j = 0; j < n_param_aliases; j++) {
            param_aliases.push_back(va_arg(vl, size_t));
        }
        return_alias = va_arg(vl, size_t);
        function_io_aliases outer_aliases(param_aliases, return_alias);

        /*
         * The set of calls made from the current function, including the name
         * of the function called, the number of arguments passed, the aliases
         * assigned to each of those arguments, and the return alias assigned to
         * any value that is returned.
         */
        const int n_calls_made = va_arg(vl, int);
        vector<call_aliases> calls;
        for (int j = 0; j < n_calls_made; j++) {
            vector<size_t> arg_aliases;
            size_t return_alias;

            string callee_name(va_arg(vl, const char *));
            const int n_args = va_arg(vl, int);
            for (int k = 0; k < n_args; k++) {
                arg_aliases.push_back(va_arg(vl, size_t));
            }
            return_alias = va_arg(vl, size_t);
            calls.push_back(call_aliases(callee_name, arg_aliases,
                        return_alias));
        }

        VERIFY(provided_npm_functions.insert(pair<string, void *>(fname,
                        fptr)).second);
        VERIFY(fname_to_alias_locs.insert(pair<string, set<unsigned> >(fname,
                        alias_locs)).second);
        VERIFY(fname_to_outer_aliases.insert(pair<string, function_io_aliases>(
                        fname, outer_aliases)).second);
        VERIFY(fname_to_calls_made.insert(pair<string, vector<call_aliases> >(
                        fname, calls)).second);
    }

    // Iterate over the NPM functions that this compilation unit depends on
    for (int i = 0; i < n_external_npm_functions; i++) {
        std::string npm_fname(va_arg(vl, const char *));
        void **fptr = va_arg(vl, void **);

        if (requested_npm_functions.find(npm_fname) ==
                requested_npm_functions.end()) {
            requested_npm_functions.insert(pair<string, vector<void **> >(
                        npm_fname, vector<void **>()));
        }

        requested_npm_functions.at(npm_fname).push_back(fptr);
    }

    /*
     * Get the addresses of the global variables which prevent conditional NPM
     * execution.
     */
    for (int i = 0; i < n_npm_conditionals; i++) {
        std::string func_name(va_arg(vl, const char *));
        int *conditional = va_arg(vl, int *);

        if (npm_conditional_pointers.find(func_name) ==
                npm_conditional_pointers.end()) {
            VERIFY(npm_conditional_pointers.insert(pair<string, vector<int *> >(
                            func_name, vector<int *>())).second);
        }
        npm_conditional_pointers.at(func_name).push_back(conditional);
    }

    // Read an initial parent-child relationship of alias groups
    for (int i = 0; i < n_contains_mappings; i++) {
        size_t container = va_arg(vl, size_t);
        size_t child = va_arg(vl, size_t);

        if (!replay) {
            assert(contains.find(container) == contains.end());
            contains[container] = child;
        }
    }

    for (int i = 0; i < nstructs; i++) {
        char *struct_name = va_arg(vl, char *);
        int nfields = va_arg(vl, int);
        string struct_name_str(struct_name);

        if (nfields == 0) continue;

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
        fprintf(stderr, "struct %s nfields=%d insert_new=%d offsets:",
                struct_name_str.c_str(), nfields, insert_new);
#endif
        if (!insert_new) {
            assert((unsigned)nfields == structs[struct_name_str]->size());
        }

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
#ifdef VERBOSE
        fprintf(stderr, "\n");
#endif
    }

    // Parse call tree from arguments.
    for (int i = 0; i < nfunctions; i++) {
        char *func_name = va_arg(vl, char *);
        unsigned n_callees = va_arg(vl, unsigned);

        string func_name_str(func_name);

        if (call_tree.find(func_name_str) != call_tree.end()) {
            assert(n_callees == call_tree[func_name_str].size());

            for (unsigned c = 0; c < n_callees; c++) {
                char *callee_name = va_arg(vl, char *);
                string callee_name_str(callee_name);
                assert(call_tree[func_name_str].find(callee_name_str) !=
                        call_tree[func_name_str].end());
            }
        } else {
            call_tree.insert(pair<string, set<string> >(func_name_str,
                        set<string>()));

            for (unsigned c = 0; c < n_callees; c++) {
                char *callee_name = va_arg(vl, char *);
                string callee_name_str(callee_name);

                call_tree[func_name_str].insert(callee_name_str);
            }
        }
    }

    // Parse checkpoint causes from the arguments
    for (int i = 0; i < nvars; i++) {
        char *var_name = va_arg(vl, char *);
        unsigned n_causes = va_arg(vl, unsigned);

        string var_name_str(var_name);

        assert(var_checkpoint_causes.find(var_name_str) ==
                var_checkpoint_causes.end());
        var_checkpoint_causes.insert(pair<string, set<string> >(var_name_str,
                    set<string>()));

        for (unsigned c = 0; c < n_causes; c++) {
            char *cause = va_arg(vl, char *);
            string cause_str(cause);

            var_checkpoint_causes[var_name_str].insert(cause_str);
        }
    }

    parse_merges(n_static_merges, vl, &npm_callee_to_static_merge_info);
    parse_merges(n_dynamic_merges, vl, &npm_callee_to_dynamic_merge_info);

    va_end(vl);

    VERIFY(pthread_mutex_unlock(&module_mutex) == 0);

#ifdef __CHIMES_PROFILE
    pp.add_time(INIT_MODULE, __start_time);
#endif
}

static bool need_to_manage_stack(int *conditional, string funcname) {
    if (conditional) {
        if (*conditional == 2) {
            const map<string, bool>::iterator does_checkpoint_iter =
                does_checkpoint.find(funcname);
            if (does_checkpoint_iter != does_checkpoint.end() && !does_checkpoint_iter->second) {
                *conditional = 0;
                return (false);
            } else {
                *conditional = 1;
            }
        } else if (*conditional == 0) {
            return (false);
        }
    }
    return (true);
}

static void add_argument_aliases(unsigned n_local_arg_aliases, thread_ctx *ctx,
        va_list vl, bool pre_stack_increment) {
    const unsigned stack_minimum = (pre_stack_increment ? 0 : 1);
    for (unsigned i = 0; i < n_local_arg_aliases; i++) {
        size_t alias = va_arg(vl, size_t);
        if (ctx->get_stack()->size() > stack_minimum) {
            if (valid_group(alias) && valid_group(ctx->get_parent_alias(i))) {
                VERIFY(pthread_rwlock_wrlock(&aliased_groups_lock) == 0);
                merge_alias_groups(alias, ctx->get_parent_alias(i));
                VERIFY(pthread_rwlock_unlock(&aliased_groups_lock) == 0);
            }
        }
    }
}

enum DISABLED_THREAD { DISABLED, NOT_DISABLED, ALREADY_DISABLED };

int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned int n_local_arg_aliases, unsigned int nargs, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();

    thread_ctx *ctx = get_my_context_may_fail();
    /*
     * If we enter a quick function underneath NPM mode (e.g. through a function
     * pointer passed to a third-party library) we know it is safe to skip
     * everything.
     */
    if (!ctx) {
        return (ALREADY_DISABLED);
    }
    std::vector<stack_frame *> *program_stack = ctx->get_stack();

    if (program_stack->size() > 0 && func_ptr != ctx->get_func_ptr()) {
        if (!ctx->get_printed_func_ptr_mismatch()) {
            /*
             * Reasons we can get here:
             *   1. Control passed through a third-party function which used a
             *      function pointer to call back into transformed code.
             *   2. Function call passed to a constructor.
             *   3. Function call from inside a non-resumable parallel section
             *      (e.g. an omp for).
             */
            fprintf(stderr, "WARNING: Mismatch in expected function (%p) and "
                    "function that we entered (%p) for function %s. Possibly passed"
                    " through a third-party library.\n", ctx->get_func_ptr(),
                    func_ptr, funcname);
            ctx->set_printed_func_ptr_mismatch(true);
        }
        if (disable_current_thread()) {
            return DISABLED;
        } else {
            return ALREADY_DISABLED;
        }
    }

    if (!need_to_manage_stack(conditional, std::string(funcname)) ||
            ctx->is_disabled()) {
#ifdef VERBOSE
        fprintf(stderr, "Entering %s, dont need to manage stack\n", funcname);
#endif
        assert(program_stack->size() == 0 ||
                n_local_arg_aliases == ctx->get_n_parent_aliases());
        va_list vl;
        va_start(vl, nargs);
        add_argument_aliases(n_local_arg_aliases, ctx, vl, true);
        va_end(vl);

        ctx->push_return_alias();

        return NOT_DISABLED;
    }

#ifdef VERBOSE
    fprintf(stderr, "Entering %s, need to manage stack\n", funcname);
#endif

    if (program_stack->size() > 0) {
        int calling_label = ctx->get_calling_label();
        assert(calling_label >= 0);
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
        add_argument_aliases(n_local_arg_aliases, ctx, vl, false);
    }

    ctx->push_return_alias();

    for (unsigned i = 0; i < nargs; i++) {
        const char *mangled_name = va_arg(vl, const char *);
        int *cond_registration = va_arg(vl, int *);
        const char *full_type = va_arg(vl, const char *);
        void *ptr = va_arg(vl, void *);
        size_t size = va_arg(vl, size_t);
        int is_ptr = va_arg(vl, int);
        int is_struct = va_arg(vl, int);
        int n_ptr_fields = va_arg(vl, int);

        std::string mangled_name_str(mangled_name);
        if (need_to_register(cond_registration, mangled_name_str)) {
            register_stack_var_helper(mangled_name_str, cond_registration,
                    full_type, ptr, size, is_ptr, is_struct, n_ptr_fields, vl,
                    program_stack);
        }
    }

    va_end(vl);

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(NEW_STACK, __start_time);
#endif
    return NOT_DISABLED;
}

static void merge_npm_aliases(string fname, size_t return_alias,
        vector<size_t> param_aliases) {
#ifdef VERBOSE
    fprintf(stderr, "Doing ahead of time merge for %s\n", fname.c_str());
#endif
    npm_context *npm_ctx = fname_to_npm_info.at(fname);
    function_io_aliases callee = fname_to_outer_aliases.at(fname);

#ifdef VERBOSE
    fprintf(stderr, "  callee.return_alias=%lu\n", callee.get_return_alias());
    fprintf(stderr, "  callee.n_params=%d\n", callee.get_n_params());
    fprintf(stderr, "  caller.return_alias=%lu\n", return_alias);
    fprintf(stderr, "  caller.n_params=%d\n", param_aliases.size());
#endif

    for (vector<pair<size_t, size_t> >::iterator i =
            npm_ctx->get_aliases_created()->begin(), e =
            npm_ctx->get_aliases_created()->end(); i != e; i++) {
        size_t parent = (*i).first;
        size_t child = (*i).second;

        assert(valid_group(parent) && valid_group(child));
        merge_alias_groups(parent, child);
    }

    if (return_alias == 0UL || callee.get_return_alias() == 0UL) {
        assert(return_alias == 0UL && callee.get_return_alias() == 0UL);
    } else {
        merge_alias_groups(return_alias, callee.get_return_alias());
    }

    assert(callee.get_n_params() == param_aliases.size());

    for (unsigned i = 0; i < param_aliases.size(); i++) {
        size_t parent = param_aliases.at(i);
        size_t child = callee.get_param_alias(i);

        if (parent == 0UL || child == 0UL) {
            assert(parent == 0UL && child == 0UL);
        } else {
            merge_alias_groups(parent, child);
        }
    }
}

static void calling_npm_helper(const char *name, unsigned loc_id,
        bool has_alias_info, size_t return_alias, int n_params, va_list vl) {
    thread_ctx *ctx = get_my_context();
    std::string fname(name);
    npm_context *npm_ctx = fname_to_npm_info.at(fname);

    if (loc_id > 0) {
        alias_group_changed_helper(loc_id, ctx);
    }

    for (set<unsigned>::iterator i = npm_ctx->get_alias_locs()->begin(),
            e = npm_ctx->get_alias_locs()->end(); i != e; i++) {
        unsigned loc_id = *i;
        assert(loc_id > 0);
        alias_group_changed_helper(loc_id, ctx);
    }

    if (has_alias_info) {
        vector<size_t> param_aliases;
        for (int i = 0; i < n_params; i++) {
            size_t alias = va_arg(vl, size_t);
            param_aliases.push_back(alias);
        }
        merge_npm_aliases(fname, return_alias, param_aliases);
    }
}

void calling_npm(const char *name, unsigned loc_id) {
    calling_npm_helper(name, loc_id, false, 0, 0, 0x0);
}

static void calling_helper(void *func_ptr, int lbl, unsigned loc_id,
        size_t set_return_alias, unsigned naliases, va_list vl) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    thread_ctx *ctx = get_my_context();

    /* Function pointer is only necessary if calling a function outside of our
     * compilation unit, where we need to verify that the function we're
     * entering is one that was transformed.
     */
    ctx->set_func_ptr(func_ptr);

    /*
     * only necessary if there is a checkpoint call somewhere underneath us on
     * the stack
     */
    if (!ctx->is_disabled()) {
        ctx->set_calling_label(lbl);
    }

    /*
     * only necessary if the call being made is unknown and we cannot hoist the
     * alias group changes out of it as well.
     */
    if (loc_id > 0) {
        alias_group_changed_helper(loc_id, ctx);
    }

    /*
     * the below mappings should be possible at compile time
     */
    ctx->set_return_alias(set_return_alias);

    ctx->init_parent_aliases(vl, naliases);

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(CALLING, __start_time);
#endif
}

void *translate_fptr(void *fptr, int lbl, unsigned loc_id, size_t return_alias,
        int n_params, ...) {
    map<void *, pair<void *, string> >::iterator exists =
        original_function_to_npm.find(fptr);
    void *result;
    va_list vl;
    va_start(vl, n_params);
    if (exists != original_function_to_npm.end()) {
        calling_npm_helper(exists->second.second.c_str(), loc_id, true,
                return_alias, n_params, vl);
        result = exists->second.first;
    } else {
        calling_helper(fptr, lbl, loc_id, return_alias, n_params, vl);
        result = fptr;
    }
    va_end(vl);
    return (result);
}

void calling(void *func_ptr, int lbl, unsigned loc_id, size_t return_alias,
        unsigned naliases, ...) {
    va_list vl;
    va_start(vl, naliases);
    calling_helper(func_ptr, lbl, loc_id, return_alias, naliases, vl);
    va_end(vl);
}

static void add_return_alias(bool has_return_alias, size_t returned_alias,
        thread_ctx *ctx) {
    size_t this_return_alias = ctx->pop_return_alias();

    /*
     * We pass returned_alias as 0 here when the value being returned is not a
     * pointer (in which case we don't care about its aliases).
     */
    if (has_return_alias && valid_group(returned_alias)) {
        assert(valid_group(this_return_alias));
        VERIFY(pthread_rwlock_wrlock(&aliased_groups_lock) == 0);
        merge_alias_groups(this_return_alias, returned_alias);
        VERIFY(pthread_rwlock_unlock(&aliased_groups_lock) == 0);
    }
}

static inline void alias_group_changed_helper(unsigned loc_id,
        thread_ctx *ctx) {
    assert(loc_id > 0); // 0 is reserved to indicate an invalid loc
    ctx->add_changed_loc(loc_id);
}

void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id,
        int did_disable) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();

    thread_ctx *ctx = get_my_context_may_fail();
    if (!ctx) {
        return;
    }

    if (!need_to_manage_stack(conditional, std::string(funcname)) ||
            ctx->is_disabled()) {
#ifdef VERBOSE
        fprintf(stderr, "Leaving %s, dont need to manage stack\n", funcname);
#endif
        if (loc_id > 0) {
            alias_group_changed_helper(loc_id, ctx);
        }
        if (did_disable == NOT_DISABLED) {
            add_return_alias(has_return_alias, returned_alias, ctx);
        }

        reenable_current_thread(did_disable == DISABLED);

        return;
    }

#ifdef VERBOSE
    fprintf(stderr, "Leaving %s, need to manage stack\n", funcname);
#endif

    std::vector<stack_frame *> *program_stack = ctx->get_stack();
    stack_frame *curr = program_stack->back();
    program_stack->pop_back();
    delete curr;

    add_return_alias(has_return_alias, returned_alias, ctx);

    ctx->get_stack_tracker().pop();
    ctx->decrement_stack_nesting();

    if (loc_id > 0) {
        alias_group_changed_helper(loc_id, ctx);
    }

    if (____chimes_rerunning && ctx->get_stack_nesting() < 0) {
#ifdef VERBOSE
        fprintf(stderr, "Exiting replay...\n");
#endif
        /*
         * TODO is exiting when we go higher up in the stack then the checkpoint
         * still necessary? What was the original reasoning?
         *
         * We reuse the logic for checkpoint synchronization here.
         */
        bool final_thread = wait_for_all_threads(NULL, NULL);
        if (final_thread) {
            fprintf(stderr, "CHIMES exiting, higher stack nesting than "
                    "checkpoint was taken at...\n");
            exit(55);
        }
    }
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(RM_STACK, __start_time);
#endif
}

int get_next_call() {
    unsigned tid = get_my_tid();
    assert(trace_indices[tid] < traces->at(tid).size());
    int ele = traces->at(tid)[trace_indices[tid]];
    trace_indices[tid] = trace_indices[tid] + 1;
    return ele;
}

static bool is_pointer_type(string type) {
    return (type[type.length() - 1] == '*');
}

static bool is_array_type(string type) {
    return (type[0] == '[' && type[type.length() - 1] == ']');
}

static string get_points_to_type(string ptr_type) {
    assert(is_pointer_type(ptr_type));
    return ptr_type.substr(0, ptr_type.size() - 1);
}

static string get_nested_array_type(string array_type) {
    assert(is_array_type(array_type));
    string remove_braces = array_type.substr(1, array_type.length() - 2);
    // Increment past array length
    int index = 0;
    // remove any leading whitespace before array dimension
    while (remove_braces[index] == ' ') index++;
    while (remove_braces[index] != ' ') index++; // iterate over array length
    // trailing whitespace following array length
    while (remove_braces[index] == ' ') index++;
    VERIFY(remove_braces[index++] == 'x');
    while (remove_braces[index] == ' ') index++;

    int type_start = index;
    string just_type = remove_braces.substr(type_start);
    while (just_type[just_type.size() - 1] == ' ') {
        just_type = just_type.substr(0, just_type.size() - 1);
    }
    return just_type;
}

static int get_array_length(string array_type) {
    assert(is_array_type(array_type));
    string remove_braces = array_type.substr(1, array_type.length() - 2);

    int index = 0;
    // remove any leading whitespace before array dimension
    while (remove_braces[index] == ' ') index++;

    int length_start = index;
    string length = remove_braces.substr(length_start);
    index = 0;

    while (length[index] != ' ') index++; // iterate over array length
    length = length.substr(0, index);

    assert(length != "na");

    return atoi(length.c_str());
}

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

static bool need_to_register(int *cond_registration, string mangled_name) {
    /*
     * If cond_registration is NULL, it means this variable was marked as
     * something that had to be checkpointed unconditionally.
     */
    if (cond_registration) {
        if (*cond_registration == 2) { // UNKNOWN
            const map<string, bool>::iterator must_checkpoint_iter =
                need_to_checkpoint.find(mangled_name);
            if (must_checkpoint_iter != need_to_checkpoint.end() &&
                    !must_checkpoint_iter->second) {
                // Can skip stack variable registration!
                *cond_registration = 0;
                return (false);
            } else {
                *cond_registration = 1;
            }
        } else if (*cond_registration == 0) { // DONT CHECKPOINT
            return (false);
        }
    }

    return (true);
}

inline void register_stack_var_helper(std::string mangled_name_str,
        int *cond_registration, const char *full_type, void *ptr, size_t size,
        int is_ptr, int is_struct, int n_ptr_fields, va_list vl,
        std::vector<stack_frame *> *program_stack) {

#ifdef VERBOSE
    fprintf(stderr, "  Actually registering %s, address=%p\n",
            mangled_name_str.c_str(), ptr);
#endif

    // Skip the expensive stack var creation if we can
    if (!program_stack->back()->stack_var_exists(mangled_name_str,
                ptr)) {

        stack_var *new_var = get_var(mangled_name_str.c_str(), full_type, ptr,
                size, is_ptr, is_struct, n_ptr_fields, vl);

        program_stack->back()->add_stack_var(new_var);
    }
}

void register_stack_vars(int nvars, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();

    thread_ctx *ctx = get_my_context();
    std::vector<stack_frame *> *program_stack = ctx->get_stack();

    va_list vl;
    va_start(vl, nvars);
    for (int i = 0; i < nvars; i++) {
        const char *mangled_name = va_arg(vl, const char *);
        int *cond_registration = va_arg(vl, int *);
        const char *full_type = va_arg(vl, const char *);
        void *ptr = va_arg(vl, void *);
        size_t size = va_arg(vl, size_t);
        int is_ptr = va_arg(vl, int);
        int is_struct = va_arg(vl, int);
        int n_ptr_fields = va_arg(vl, int);

        const string mangled_name_str(mangled_name);

#ifdef VERBOSE
        fprintf(stderr, "Thinking about registering %s...\n", mangled_name);
#endif
        if (ctx->is_disabled() ||
                !need_to_register(cond_registration, mangled_name_str)) {
            // Need to consume extra arguments that weren't used by the helper
            for (int j = 0; j < n_ptr_fields; j++) {
                va_arg(vl, int);
            }
        } else {
            register_stack_var_helper(mangled_name_str, cond_registration,
                    full_type, ptr, size, is_ptr, is_struct, n_ptr_fields, vl,
                    program_stack);
        }
    }
    va_end(vl);

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(REGISTER_STACK_VARS, __start_time);
#endif

}

/*
 * TODO support stack arrays:
 *   Today, the registration of a stack array appears as follows:
 *     lbl_4: int arr2[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
 *     register_stack_var("main|arr2|0", "[10 x i32]", &arr2, 40, 0, 0, 0);
 *   This registration would not allow the full recreation of stack state at
 *   replay.
 */
void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();

    const string mangled_name_str(mangled_name);
#ifdef VERBOSE
    fprintf(stderr, "Thinking about registering %s...\n", mangled_name);
#endif
    if (get_my_context()->is_disabled() ||
            !need_to_register(cond_registration, mangled_name_str)) {
        return;
    }

    va_list vl;
    va_start(vl, n_ptr_fields);
    std::vector<stack_frame *> *program_stack = get_my_stack();
    register_stack_var_helper(mangled_name_str, cond_registration, full_type,
            ptr, size, is_ptr, is_struct, n_ptr_fields, vl, program_stack);
    va_end(vl);

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(REGISTER_STACK_VAR, __start_time);
#endif
}

void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    va_list vl;
    va_start(vl, n_ptr_fields);
    stack_var *new_var = get_var(mangled_name, full_type, ptr, size, is_ptr,
            is_struct, n_ptr_fields, vl);
    va_end(vl);

    std::string mangled_name_str(mangled_name);

    VERIFY(pthread_rwlock_wrlock(&globals_lock) == 0);
    assert(global_vars.find(mangled_name_str) == global_vars.end());
    global_vars[mangled_name_str] = new_var;
    VERIFY(pthread_rwlock_unlock(&globals_lock) == 0);

#ifdef __CHIMES_PROFILE
    pp.add_time(REGISTER_GLOBAL_VAR, __start_time);
#endif
}

//TODO does not support nested pointer types
void register_constant(size_t const_id, void *address, size_t length) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif

    constant_var *var = new constant_var(const_id, address, length);

    VERIFY(pthread_rwlock_wrlock(&constants_lock) == 0);
    assert(constants.find(const_id) == constants.end());
    constants[const_id] = var;
    VERIFY(pthread_rwlock_unlock(&constants_lock) == 0);

#ifdef __CHIMES_PROFILE
    pp.add_time(REGISTER_CONSTANT, __start_time);
#endif
}

void register_text(void *start, size_t len) {
    if (text_start == NULL) {
        text_start = start;
        text_len = len;
    } else {
        assert(text_start == start);
        assert(text_len == len);
    }
}

int alias_group_changed(unsigned loc_id) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
#ifdef VERBOSE
    fprintf(stderr, "alias_group_changed: location=%u\n", loc_id);
    fprintf(stderr, "  maps to alias groups: ");
    assert(change_loc_id_to_aliases.find(loc_id) !=
            change_loc_id_to_aliases.end());
    set<size_t> aliases = change_loc_id_to_aliases.at(loc_id);
    for (set<size_t>::iterator i = aliases.begin(), e = aliases.end(); i != e;
            i++) {
        fprintf(stderr, "%lu ", *i);
    }
    fprintf(stderr, "\n");
#endif

    thread_ctx *ctx = get_my_context();
    alias_group_changed_helper(loc_id, ctx);
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(ALIAS_GROUP_CHANGED, __start_time);
#endif

    return 0;
}

void malloc_helper(void *new_ptr, size_t nbytes, size_t group,
        int is_cuda_alloc, int is_ptr, int is_struct, int elem_size,
        int *ptr_field_offsets, int n_ptr_field_offsets) {
    assert(valid_group(group) || is_cuda_alloc);

    heap_allocation *alloc = new heap_allocation(new_ptr, nbytes, group,
            is_cuda_alloc, is_ptr, is_struct, *hash_chunker);

    get_my_context()->add_changed_alias(group);

    if (is_struct) {
        alloc->add_struct_elem_size(elem_size);
        for (int i = 0; i < n_ptr_field_offsets; i++) {
            alloc->add_pointer_offset(ptr_field_offsets[i]);
        }
        if (n_ptr_field_offsets > 0) free(ptr_field_offsets);
    }

    VERIFY(pthread_rwlock_wrlock(&heap_lock) == 0);
    assert(heap.find(new_ptr) == heap.end());
    heap.insert(pair<void *, heap_allocation *>(new_ptr, alloc));
    if (alias_to_heap.find(group) == alias_to_heap.end()) {
        alias_to_heap[group] = new vector<heap_allocation *>();
    }
    alias_to_heap[group]->push_back(alloc);
    VERIFY(pthread_rwlock_unlock(&heap_lock) == 0);
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
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    assert(valid_group(group));

#ifdef VERBOSE
    fprintf(stderr, "malloc_wrapper: nbytes=%lu group=%lu is_ptr=%d "
            "is_struct=%d\n", nbytes, group, is_ptr, is_struct);
#endif

    void *ptr = malloc(nbytes);

    if (nbytes > 0 && ptr != NULL) {
        chimes_type_info info; memset(&info, 0x00, sizeof(info));

        __sync_fetch_and_add(&total_allocations, nbytes);

        if (is_struct) {
            va_list vl;
            va_start(vl, is_struct);
            parse_type_info(vl, &info);
            va_end(vl);
        }
        malloc_helper(ptr, nbytes, group, 0, is_ptr, is_struct, info.elem_size,
                info.ptr_field_offsets, info.n_ptr_fields);
    }

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(MALLOC_WRAPPER, __start_time);
#endif

    return ptr;
}

void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    assert(valid_group(group));

    void *ptr = calloc(num, size);

    if (ptr != NULL) {
        chimes_type_info info; memset(&info, 0x00, sizeof(info));

        __sync_fetch_and_add(&total_allocations, num * size);

        if (is_struct) {
            va_list vl;
            va_start(vl, is_struct);
            parse_type_info(vl, &info);
            va_end(vl);
        }
        malloc_helper(ptr, num * size, group, 0, is_ptr, is_struct,
                info.elem_size, info.ptr_field_offsets, info.n_ptr_fields);
    }

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(CALLOC_WRAPPER, __start_time);
#endif

    return ptr;

}

void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    assert(valid_group(group));

    void *new_ptr = realloc(ptr, nbytes);
    unsigned long long old_size = 0;

    if (ptr != NULL && new_ptr == ptr) {
        /*
         * The location in memory of a previous allocation did not change, only
         * the size was extended.
         */
        map<void *, heap_allocation *>::iterator alloc_ptr = find_in_heap(ptr);

        heap_allocation *alloc = alloc_ptr->second;
        old_size = alloc->get_size();
        assert(alloc->get_alias_group() == group);
        alloc->update_size(nbytes);

        get_my_context()->add_changed_alias(group);
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
            old_size = alloc->get_size();

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
            /*
             * A realloc of a NULL pointer, equivalent to a fresh malloc.
             */
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

    if (old_size < nbytes) {
        __sync_fetch_and_add(&total_allocations, nbytes - old_size);
    } else if (nbytes < old_size) {
        __sync_fetch_and_sub(&total_allocations, old_size - nbytes);
    }

    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(REALLOC_WRAPPER, __start_time);
#endif

    return new_ptr;
}

void free_helper(void *ptr) {
    map<void *, heap_allocation *>::iterator in_heap =
        find_in_heap(ptr);
    size_t group = in_heap->second->get_alias_group();

    // Update heap metadata
    VERIFY(pthread_rwlock_wrlock(&heap_lock) == 0);
    vector<heap_allocation *>::iterator in_alias_to_heap =
        std::find(alias_to_heap[group]->begin(), alias_to_heap[group]->end(),
                in_heap->second);
    assert(in_alias_to_heap != alias_to_heap[group]->end());
    alias_to_heap[group]->erase(in_alias_to_heap);

    heap.erase(in_heap);
    VERIFY(pthread_rwlock_unlock(&heap_lock) == 0);
}

map<void *, heap_allocation *>::iterator find_in_heap(void *ptr) {

    VERIFY(pthread_rwlock_rdlock(&heap_lock) == 0);
    map<void *, heap_allocation *>::iterator in_heap = heap.find(ptr);
    assert(in_heap != heap.end());
    VERIFY(pthread_rwlock_unlock(&heap_lock) == 0);

    assert(in_heap->second->get_address() == ptr);

    return in_heap;
}

void free_wrapper(void *ptr, size_t group) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    map<void *, heap_allocation *>::iterator in_heap = find_in_heap(ptr);
    size_t original_group = in_heap->second->get_alias_group();

    assert(aliased(original_group, group, true));

    __sync_fetch_and_sub(&total_allocations, in_heap->second->get_size());

    free_helper(ptr);
    free(ptr);
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(FREE_WRAPPER, __start_time);
#endif
}

void wait_for_checkpoint() {
    VERIFY(pthread_mutex_lock(&checkpoint_mutex) == 0);
    if (checkpoint_thread_running == 1) {
        pthread_join(checkpoint_thread, NULL);
    }
    VERIFY(pthread_mutex_unlock(&checkpoint_mutex) == 0);
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

    /*
     * Some compilers may choose to re-use stack slots with the same address
     * for temporary variables whose lifetimes do not overlap. As a result,
     * multiple register_stack_var calls may pass the same address. If that
     * is the case, we can assume that the old variable is no longer
     * in-scope and cannot be referenced anymore. We therefore simply assert
     * that the mapping we would insert is the same that already exists, and
     * therefore the state of the variable will be updated appropriately.
     */
    if (old_to_new->find(dead->get_address()) != old_to_new->end()) {
        ptr_and_size *existing = old_to_new->at(dead->get_address());
        assert(existing->get_ptr() == live->get_address());
        existing->update_size(live->get_size());
    } else {
        old_to_new->insert(pair<void *, ptr_and_size *>(dead->get_address(),
                    new ptr_and_size(live->get_address(), live->get_size())));
    }
}

static void restore_program_stack(vector<stack_frame *> *unpacked,
        vector<stack_frame *> *real) {

#ifdef VERBOSE
    fprintf(stderr, "Restoring program stack. Unpacked program stack has %lu "
            "frames, live program stack has %lu frames.\n", unpacked->size(),
            real->size());
#endif

    assert(unpacked->size() == real->size());

    vector<stack_frame *>::iterator unpacked_stack_iter = unpacked->begin();
    vector<stack_frame *>::iterator unpacked_stack_end = unpacked->end();
    vector<stack_frame *>::iterator live_stack_iter = real->begin();
    vector<stack_frame *>::iterator live_stack_end = real->end();

    while (unpacked_stack_iter != unpacked_stack_end &&
            live_stack_iter != live_stack_end) {
        stack_frame *live = *live_stack_iter;
        stack_frame *unpacked = *unpacked_stack_iter;

#ifdef VERBOSE
        fprintf(stderr, "  Frame: unpacked has %d vars, live has %d vars\n",
                unpacked->size(), live->size());
        fprintf(stderr, "    Unpacked: ");
        for (stack_frame::iterator i = unpacked->begin(),
                e = unpacked->end(); i != e; i++) {
            fprintf(stderr, "%s ", i->first.c_str());
        }
        fprintf(stderr, "\n    Live:     ");
        for (stack_frame::iterator i = live->begin(),
                e = live->end(); i != e; i++) {
            fprintf(stderr, "%s ", i->first.c_str());
        }
        fprintf(stderr, "\n");
#endif

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

static bool wait_for_all_threads(clock_t *entry_ptr, checkpoint_ctx **out) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif

    VERIFY(pthread_mutex_lock(&thread_count_mutex) == 0);

    checkpoint_ctx *curr_ckpt = NULL;
    if (checkpoint_initializing == 0) {
        // first thread in the checkpoint
        size_t checkpoint_id = sync_id_counter++;
        checkpoint_initializing = checkpoint_id;

        curr_ckpt = new checkpoint_ctx(checkpoint_id, thread_count);
        VERIFY(checkpoint_info.insert(std::pair<size_t, checkpoint_ctx*>(
                        checkpoint_id, curr_ckpt)).second);
    }
    curr_ckpt = (curr_ckpt ? curr_ckpt :
            checkpoint_info.at(checkpoint_initializing));

    const unsigned checkpoint_thread_count = curr_ckpt->incr_threads_in_checkpoint();

    if (entry_ptr) {
        const unsigned tid = get_my_tid();
        curr_ckpt->add_entry_time(tid, *entry_ptr);
    }

    bool checkpointing_thread = false;
    if (checkpoint_thread_count != thread_count || regions_initializing) {
        while (curr_ckpt->is_checkpoint_in_progress() &&
                (curr_ckpt->get_threads_in_checkpoint() !=
                    curr_ckpt->get_thread_count() ||
                 regions_initializing)) {
            VERIFY(pthread_cond_wait(&thread_count_cond, &thread_count_mutex) == 0);
        }
        if (curr_ckpt->is_checkpoint_in_progress() &&
                curr_ckpt->get_threads_in_checkpoint() ==
                curr_ckpt->get_thread_count()) {
            checkpointing_thread = true;
        }
    } else {
        checkpointing_thread = true;
    }
    if (checkpointing_thread) {
        checkpoint_initializing = 0;
    }

    if (out) {
        *out = curr_ckpt;
    }
#ifdef __CHIMES_PROFILE
    pp.add_time(WAIT_FOR_ALL_THREADS, __start_time);
#endif
    return (checkpointing_thread);
}

static bool compare_entry_times(std::pair<unsigned, clock_t> i,
        std::pair<unsigned, clock_t> j) {
    return (i.second < j.second);
}

static bool compare_heap_allocations(pair<size_t, heap_allocation *> i,
        pair<size_t, heap_allocation *> j) {
    return (i.first < j.first);
}

static bool should_hash(size_t alloc_len, size_t desired_checkpoint_size,
        size_t copied_so_far) {
    if (alloc_len < DONT_HASH_SIZE) {
        return false;
    }
    if (copied_so_far >= desired_checkpoint_size) {
        return true;
    }

    size_t remaining = desired_checkpoint_size - copied_so_far;
    return (alloc_len > (remaining / 2));
}

bool within_overhead_bounds() {
    if (disable_throttling) {
        return true;
    }

    unsigned long long running_time = dead_thread_time;
    for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
            e = thread_ctxs.end(); i != e; i++) {
        running_time += i->second->elapsed_time();
    }
    double curr_percent_overhead = (double)chimes_overhead /
        (double)running_time;
    return (curr_percent_overhead < target_time_overhead);
}

static void collect_all_aliases(size_t group, set<size_t> *all_changed) {
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

bool disable_current_thread() {
    thread_ctx *ctx = get_my_context();
    std::vector<stack_frame *> *stack = ctx->get_stack();

    if (!ctx->is_disabled()) {
        ctx->set_disabled_nesting(stack->size());
        return true;
    } else {
        return false;
    }
}

void reenable_current_thread(bool was_disabled) {
    thread_ctx *ctx = get_my_context();
    std::vector<stack_frame *> *stack = ctx->get_stack();

    if (was_disabled) {
        assert(stack->size() == ctx->get_disabled_nesting());
        ctx->set_disabled_nesting(0);
    }
}

// The code transformer should replace any calls to checkpoint
void checkpoint() {
    assert(false);
}

void checkpoint_transformed(int lbl, unsigned loc_id) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();

    clock_t enter_time = clock();

    thread_ctx *ctx = get_my_context();
    VERIFY(!ctx->is_disabled());
    ctx->set_calling_label(lbl);
    ctx->set_func_ptr((void *)checkpoint_transformed);
    ctx->set_return_alias(0UL);
    ctx->clear_parent_aliases();
    if (loc_id > 0) {
        alias_group_changed_helper(loc_id, ctx);
    }

    new_stack((void *)checkpoint_transformed, "checkpoint", NULL, 0, 0);
    const bool was_a_replay = ____chimes_replaying;
    checkpoint_ctx *curr_ckpt;

    bool checkpointing_thread = wait_for_all_threads(&enter_time, &curr_ckpt);

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

            assert(dead->get_size() == live->get_size());
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
#ifdef VERBOSE
                    fprintf(stderr, "Fixing stack variable %s of type %s\n",
                            var->get_name().c_str(), var->get_type().c_str());
#endif
                    fix_stack_or_global_pointer(var->get_address(),
                            var->get_type(), 0);
                }
            }
        }

        for (map<string, stack_var *>::iterator globals_iter =
                global_vars.begin(), globals_end = global_vars.end();
                globals_iter != globals_end; globals_iter++) {
            stack_var *var = globals_iter->second;
            fix_stack_or_global_pointer(var->get_address(), var->get_type(), 0);
        }

        delete already_translated;

        ____chimes_replaying = 0;
        ____chimes_rerunning = 1;
        for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
                e = thread_ctxs.end(); i != e; i++) {
            thread_ctx *ctx = i->second;
            ctx->set_stack_nesting(1);
        }
    } else if (checkpointing_thread && checkpoint_thread_running == 0 &&
            within_overhead_bounds()) {
        VERIFY(pthread_mutex_lock(&checkpoint_mutex) == 0);

        if (checkpoint_thread_running == 1) {
            VERIFY(pthread_mutex_unlock(&checkpoint_mutex) == 0);
        } else {
            checkpoint_thread_running = 1;

            /*
             * At this stage we assume we only have a single stack to checkpoint
             * and it belongs to the calling thread, so those addresses will
             * remain valid for checkpointing as long as we're still here.
             * Therefore, we must checkpoint stack variables from here before
             * returning.
             */

            set<size_t> *all_changed = new set<size_t>();
            for (map<unsigned, thread_ctx *>::iterator i = thread_ctxs.begin(),
                    e = thread_ctxs.end(); i != e; i++) {
                thread_ctx *ctx = i->second;
                set_of_aliases *changed = ctx->get_changed_groups();

                for (unsigned loc = 0; loc < changed->capacity; loc++) {
                    if ((changed->set)[loc]) {
                        for (set<size_t>::iterator iter =
                                change_loc_id_to_aliases.at(loc).begin(), end =
                                change_loc_id_to_aliases.at(loc).end();
                                iter != end; iter++) {
                            size_t group = *iter;
                            collect_all_aliases(group, all_changed);
                        }
                    }
                }

                for (set<size_t>::iterator iter =
                        changed->explicit_aliases.begin(), end =
                        changed->explicit_aliases.end(); iter != end; iter++) {
                    size_t group = *iter;
                    collect_all_aliases(group, all_changed);
                }
                ctx->clear_changed_groups();
            }
#ifdef VERBOSE
            fprintf(stderr, "checkpointing the following alias groups:\n");
            for (set<size_t>::iterator changed_iter = all_changed->begin(),
                    changed_end = all_changed->end();
                    changed_iter != changed_end; changed_iter++) {
                size_t alias = *changed_iter;
                fprintf(stderr, "    %lu\n", alias);
            }
#endif

            vector<pair<size_t, heap_allocation *> > heap_to_checkpoint_sorted;
            heap_to_checkpoint_sorted.reserve(heap.size());
            for (map<void *, heap_allocation *>::iterator heap_iter =
                    heap.begin(), heap_end = heap.end(); heap_iter != heap_end;
                    heap_iter++) {
                heap_allocation *curr = heap_iter->second;
                /*
                 * At the moment, we don't calculate alias groups for CUDA
                 * allocations because they are never dereferenced from the
                 * host. In future TODO work, we could track which allocations
                 * are passed to kernels and use that as a way to reduce the
                 * number of CUDA allocations that need to be checkpointed.
                 */
                if (all_changed->find(curr->get_alias_group()) !=
                        all_changed->end() || curr->get_is_cuda_alloc()) {
#ifdef VERBOSE
                    fprintf(stderr, "  because of group %lu we checkpoint heap "
                            "allocation %p, size=%lu\n",
                            curr->get_alias_group(), curr->get_address(),
                            curr->get_size());
#endif
                    heap_to_checkpoint_sorted.push_back(
                            pair<size_t, heap_allocation *>(curr->get_size(),
                                curr));
                }
            }

            std::sort(heap_to_checkpoint_sorted.begin(),
                    heap_to_checkpoint_sorted.end(), compare_heap_allocations);
            vector<checkpointable_heap_allocation> *to_checkpoint =
                new vector<checkpointable_heap_allocation>();

#ifdef __CHIMES_PROFILE
            const unsigned long long __hashing_start = perf_profile::current_time_ms();
#endif
            const size_t desired_checkpoint_size =
                (size_t)(target_checkpoint_size_perc *
                        (double)total_allocations);
            size_t copied_so_far = 0;
#ifdef HASHING_DIAGNOSTICS
            fprintf(stderr, "Hashing diagnostics for checkpoint:\n");
#endif
            for (vector<pair<size_t, heap_allocation *> >::iterator i =
                    heap_to_checkpoint_sorted.begin(),
                    e = heap_to_checkpoint_sorted.end(); i != e; i++) {
                heap_allocation *curr = i->second;
                if (!should_hash(curr->get_size(), desired_checkpoint_size,
                            copied_so_far)) {
#ifdef HASHING_DIAGNOSTICS
                    fprintf(stderr, "  not hashing allocation, size=%lu "
                            "invalid hashes=%d copied_so_far=%lu desired=%lu\n",
                            curr->get_size(), curr->hashes_invalid(),
                            copied_so_far, desired_checkpoint_size);
#endif
                    to_checkpoint->push_back(checkpointable_heap_allocation(
                                curr));
                    curr->invalidate_hashes();
                    copied_so_far += curr->get_size();
                } else {
                    if (curr->hashes_invalid()) {
#ifdef HASHING_DIAGNOSTICS
                    fprintf(stderr, "  not hashing allocation due to invalid hashes, size=%lu "
                            "copied_so_far=%lu desired=%lu\n", curr->get_size(),
                            copied_so_far, desired_checkpoint_size);
#endif

                        curr->update_hashes();
                        to_checkpoint->push_back(checkpointable_heap_allocation(
                                    curr));
                        curr->mark_hashes_valid();
                        copied_so_far += curr->get_size();
                    } else {
                        size_t n_bytes_changed = 0;
                        vector<pair<size_t, size_t> > ranges;
                        for (unsigned chunk = 0; chunk < curr->get_n_hash_chunks(); chunk++) {
                            unsigned long long curr_hash = curr->get_hash(chunk);
                            unsigned long long new_hash =
                                curr->calculate_hash(chunk);
                            if (curr_hash != new_hash) {
                                const size_t chunk_start =
                                    curr->get_hash_chunk_start(chunk);
                                const size_t chunk_end =
                                    curr->get_hash_chunk_end(chunk);
                                const size_t chunk_size =
                                    chunk_end - chunk_start;
                                if (ranges.size() == 0) {
                                    ranges.push_back(pair<size_t, size_t>(
                                                chunk_start, chunk_end));
                                } else {
                                    if (ranges.back().second == chunk_start) {
                                        ranges.back().second = chunk_end;
                                    } else {
                                        ranges.push_back(pair<size_t, size_t>(
                                                    chunk_start, chunk_end));
                                    }
                                }
                                n_bytes_changed += chunk_size;
                                curr->update_hash(chunk, new_hash);
                            }
                        }
#ifdef HASHING_DIAGNOSTICS
                        fprintf(stderr, "  hashing reduced allocation size "
                                "from %lu to %lu, copied_so_far=%lu "
                                "desired=%lu\n", curr->get_size(),
                                n_bytes_changed, copied_so_far,
                                desired_checkpoint_size);
#endif
                        size_t packed_so_far = 0;
                        unsigned char *source = (unsigned char *)curr->get_address();
                        unsigned char *buffer = (unsigned char *)malloc(n_bytes_changed);
                        for (vector<pair<size_t, size_t> >::iterator i =
                                ranges.begin(), e = ranges.end(); i != e; i++) {
                            if (curr->get_is_cuda_alloc()) {
                                CHECK(cudaMemcpy(buffer + packed_so_far,
                                            source + i->first,
                                            i->second - i->first,
                                            cudaMemcpyDeviceToHost));
                            } else {
                                memcpy(buffer + packed_so_far,
                                        source + i->first,
                                        i->second - i->first); 
                            }
                        }
                        to_checkpoint->push_back(checkpointable_heap_allocation(
                                    curr, buffer, &ranges));
                        curr->mark_hashes_valid();
                        copied_so_far += n_bytes_changed;
                    }
                }
            }
#ifdef HASHING_DIAGNOSTICS
            fprintf(stderr, "    Hashed checkpoint size = %lu\n", copied_so_far);
#endif

#ifdef __CHIMES_PROFILE
    pp.add_time(HASHING, __hashing_start);
#endif

            delete all_changed;

            running_checkpoint_ctx.stacks_serialized = serialize_program_stacks(&thread_ctxs,
                    &running_checkpoint_ctx.stacks_serialized_len);
            running_checkpoint_ctx.globals_serialized = serialize_globals(&global_vars,
                    &running_checkpoint_ctx.globals_serialized_len);
            running_checkpoint_ctx.constants_serialized = serialize_constants(&constants,
                    &running_checkpoint_ctx.constants_serialized_len);
            running_checkpoint_ctx.thread_hierarchy_serialized = serialize_thread_hierarchy(
                    &thread_ctxs,
                    &running_checkpoint_ctx.thread_hierarchy_serialized_len);
            running_checkpoint_ctx.heap_to_checkpoint = to_checkpoint;

            running_checkpoint_ctx.checkpoint_entry_times =
                new std::vector<std::pair<unsigned, clock_t> >(
                        curr_ckpt->get_checkpoint_entry_times());
            std::sort(running_checkpoint_ctx.checkpoint_entry_times->begin(),
                    running_checkpoint_ctx.checkpoint_entry_times->end(),
                    compare_entry_times);

            running_checkpoint_ctx.stack_trackers = new map<unsigned, vector<int> *>();
            for (map<unsigned, thread_ctx *>::iterator ti = thread_ctxs.begin(),
                    te = thread_ctxs.end(); ti != te; ti++) {
                unsigned thread = ti->first;
                thread_ctx *info = ti->second;
                (*running_checkpoint_ctx.stack_trackers)[thread] = new vector<int>();
                info->get_stack_tracker().copy(running_checkpoint_ctx.stack_trackers->at(thread));
            }

            VERIFY(pthread_rwlock_rdlock(&contains_lock) == 0);
            running_checkpoint_ctx.contains_serialized = serialize_containers(
                    &contains, &(running_checkpoint_ctx.contains_serialized_len));
            VERIFY(pthread_rwlock_unlock(&contains_lock) == 0);

            VERIFY(pthread_rwlock_rdlock(&aliased_groups_lock) == 0);
            running_checkpoint_ctx.serialized_alias_groups = serialize_alias_groups(
                    &aliased_groups,
                    &(running_checkpoint_ctx.serialized_alias_groups_len));
            VERIFY(pthread_rwlock_unlock(&aliased_groups_lock) == 0);

            VERIFY(pthread_cond_signal(&checkpoint_cond) == 0);
            VERIFY(pthread_mutex_unlock(&checkpoint_mutex) == 0);
        }
    }

    if (checkpointing_thread) {
        curr_ckpt->set_checkpoint_in_progress(false);
        if (was_a_replay) {
            curr_ckpt->set_exit_time();
        }
        VERIFY(pthread_cond_broadcast(&thread_count_cond) == 0);
    }
    clock_t exit_time;
    if (was_a_replay) {
        exit_time = curr_ckpt->get_exit_time();
        unsigned nthreads_left = curr_ckpt->decr_threads_in_checkpoint();
        if (nthreads_left == 0) {
            // Free checkpoint metadata and remove from checkpoint_info
            VERIFY(checkpoint_info.erase(curr_ckpt->get_id()) == 1);
            delete curr_ckpt;
        }
    }

    VERIFY(pthread_mutex_unlock(&thread_count_mutex) == 0);

    if (was_a_replay) {
        clock_t my_delta = checkpoint_entry_deltas->at(get_my_tid());
        while (clock() - exit_time < my_delta) ;
    }

    rm_stack(false, 0, "checkpoint", NULL, 0, 0);
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(CHECKPOINT, __start_time);
#endif
}

#ifdef VERBOSE
static void add_nesting(int nesting) {
    for (int i = 0; i < nesting; i++) {
        fprintf(stderr, "  ");
    }
}
#endif

static void brute_force_pointer_fixing(void *ptr, heap_allocation *alloc,
        std::set<void *> *visited) {
    if (visited->find(ptr) != visited->end()) return;
    visited->insert(ptr);

    unsigned char *c_ptr = (unsigned char *)ptr;
    size_t size = alloc->get_size();

    for (size_t i = 0; i < size - (sizeof(void *) - 1); i++) {
        void **container = (void **)(c_ptr + i);
        void *possible_address = *container;

        void *new_ptr = translate_old_ptr(possible_address, old_to_new, container);
        if (new_ptr != NULL) {
            *container = new_ptr;
        }

        if (already_translated->find(container) != already_translated->end()) {
            assert(heap.find(*container) != heap.end());
            heap_allocation *alloc = heap[*container];
            brute_force_pointer_fixing(*container, alloc, visited);
        }
    }
}

/*
 * container points to the location in live memory where an object (pointer,
 * struct, array) to be updated is stored. type stores the full type of the
 * current address being operated on.
 */
static void fix_stack_or_global_pointer(void *container, string type,
        int nesting) {

#ifdef VERBOSE
    add_nesting(nesting);
    fprintf(stderr, "fix_stack_or_global_pointer: %s (ptr? %d struct? %d "
            "array? %d) %p\n", type.c_str(), is_pointer_type(type),
            is_struct_type(type), is_array_type(type), container);
#endif

    if (is_pointer_type(type)) {
        void **nested_container = (void **)container;
        void *new_ptr = translate_old_ptr(*nested_container, old_to_new,
                nested_container);
#ifdef VERBOSE
        add_nesting(nesting);
        fprintf(stderr, "  translated old ptr=%p to new ptr=%p\n",
                *nested_container, new_ptr);
#endif
        if (new_ptr != NULL) {
            *nested_container = new_ptr;
        }
       
        /*
         * If the current item has been successfully updated to the new address
         * space we are operating in.
         */
        if (already_translated->find(nested_container) != already_translated->end()) {
            string points_to = get_points_to_type(type);
#ifdef VERBOSE
            add_nesting(nesting);
            fprintf(stderr, "  points_to=%s, is struct? %d\n",
                    points_to.c_str(), is_struct_type(points_to));
#endif

            if (points_to == "void") {
#ifdef VERBOSE
                fprintf(stderr, "  void pointer... matching heap allocation? "
                        "%d\n", (heap.find(*nested_container) != heap.end()));
#endif
                assert(heap.find(*nested_container) != heap.end());
                heap_allocation *alloc = heap[*nested_container];

                /*
                 * Since its a pointer to void, we just take a look at each
                 * possible pointer in the allocated region and see if we
                 * can do a successful translation. Unfortunately we have
                 * zero type information here, so if there are any nested
                 * pointers below this level there's no way to get to them. At
                 * best, we can brute force search as long as we have heap
                 * allocation information and a pointer to traverse.
                 */
                std::set<void *> visited;
                brute_force_pointer_fixing(*nested_container, alloc, &visited);
            } else {
                if (is_struct_type(points_to)) {
                    fix_stack_or_global_pointer(*nested_container, points_to,
                            nesting + 1);
                }
            }
        }
    } else if (is_struct_type(type)) {

        string struct_name = type.substr(8);
        if (struct_name.find("=") != std::string::npos) {
            struct_name = struct_name.substr(0, struct_name.find("=") - 1);
        }

        if (structs.find(struct_name) == structs.end()) {
            fprintf(stderr, "Missing struct definition \"%s\"\n",
                    struct_name.c_str());
            exit(1);
        }

        if (init_handlers.find(struct_name) != init_handlers.end()) {
#ifdef VERBOSE
            fprintf(stderr, "Using custom initialization handler for struct of "
                    "type %s\n", struct_name.c_str());
#endif
            void (*fp)(void *) = init_handlers[struct_name];
            fp(container);
        } else {
#ifdef VERBOSE
            fprintf(stderr, "Using automated initialization for struct of "
                    "type %s\n", struct_name.c_str());
#endif

            std::vector<struct_field> *fields = structs.at(struct_name);

            for (unsigned field_index = 0; field_index < fields->size();
                    field_index++) {
                string curr = fields->at(field_index).get_ty();
                unsigned char *field_ptr = ((unsigned char *)container) +
                    (*fields)[field_index].get_offset();
                fix_stack_or_global_pointer((void *)field_ptr, curr, nesting +
                        1);
            }
        }
    } else if (is_array_type(type)) {
        string nested = get_nested_array_type(type);
        if (is_pointer_type(nested)) {
            int array_length = get_array_length(type);
            void **ptr_container = (void **)container;

            for (int i = 0; i < array_length; i++) {
                fix_stack_or_global_pointer(ptr_container + i, nested,
                        nesting + 1);
            }
        }
    }
}

static aiocb *prep_async_safe_write(int fd, void *ptr, size_t size,
        off_t file_offset, off_t *count_bytes, const char *msg,
        vector<aiocb *> *async_tokens) {
    const size_t chunk_size = 1024UL * 1024UL * 1024UL;
    const size_t nchunks = (size + chunk_size - 1) / chunk_size;
    aiocb *cb = NULL;

    for (size_t i = 0; i < nchunks; i++) {
        cb = (aiocb*)malloc(sizeof(aiocb));
        assert(cb);
        memset(cb, 0x00, sizeof(aiocb));

        size_t base = i * chunk_size;
        size_t towrite = chunk_size;
        if (size - base < towrite) {
            towrite = size - base;
        }

        cb->aio_nbytes = towrite;
        cb->aio_offset = file_offset + base;
        cb->aio_fildes = fd;
        cb->aio_buf = ((unsigned char *)ptr) + base;
        cb->aio_sigevent.sigev_notify = SIGEV_NONE;

        if (async_tokens != NULL) {
            async_tokens->push_back(cb);
        }

#ifdef VERBOSE
        fprintf(stderr, "Prepping chunk %lu/%lu for %s: offset=%lld nbytes=%lu\n",
                i + 1, nchunks, msg, cb->aio_offset, cb->aio_nbytes);
#endif
    }

    *count_bytes += size;

    if (async_tokens == NULL) {
        assert(nchunks == 1);
        return (cb);
    } else {
        return (NULL);
    }
}

static void safe_write(int fd, void *ptr, size_t size, const char *msg,
        const char *filename) {
    size_t sofar = 0;
    const size_t chunk = 1024UL * 1024UL * 1024UL;
    do {
        size_t towrite = chunk;
        if (sofar + towrite > size) {
            towrite = size - sofar;
        }
        ssize_t written = write(fd, (unsigned char *)ptr + sofar, towrite);
        if (written == -1) {
            fprintf(stderr, "Error writing to %s: %s\n", filename, msg);
            fprintf(stderr, "  writing %ld bytes from %p to fd=%d\n", size, ptr,
                    fd);
            fprintf(stderr, "  sofar=%ld\n", sofar);
            perror(NULL);
            exit(1);

        }
        sofar += written;
    } while (sofar < size);
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

static off_t safe_seek(int fd, off_t offset, int whence, const char *msg,
        const char *filename) {
    off_t result = lseek(fd, offset, whence);
    if (result == (off_t)-1) {
        fprintf(stderr, "Error seeking in %s: %s\n", filename, msg);
        exit(1);
    }
    return (result);
}

static int wait_for_running_writes(struct aiocb * aio_list[],
        int n_writes_running, off_t *count_bytes, char dump_filename[],
        vector<aiocb *> *async_tokens) {
#ifdef VERBOSE
    fprintf(stderr, "Waiting for %d running writes\n", n_writes_running);
#endif

    int a = 0;
    int n_left_running = n_writes_running;
    if (aio_suspend(aio_list, n_writes_running, NULL) != 0) {
        fprintf(stderr ,"aio_suspend waiting for %d writes\n",
                n_writes_running);
        perror("aio_suspend");
        exit(1);
    }

    while (a < n_left_running) {
        aiocb *curr = aio_list[a];
        const int ret = aio_error(curr);
        if (ret == EINPROGRESS) {
            // Write is still in-progress, so just iterate to the next
            a++;
        } else if (ret == 0) {
            // Write completed, but may not have written all data
            ssize_t written = aio_return(curr);
            assert(written >= 0);

            if ((size_t)written < curr->aio_nbytes) {
                // Write only partially finished
                size_t left = curr->aio_nbytes - (size_t)written;
                aio_list[a] = prep_async_safe_write(
                        curr->aio_fildes,
                        ((unsigned char *)curr->aio_buf) + written,
                        left, curr->aio_offset + written, count_bytes, "retry", NULL);
                VERIFY(aio_write(aio_list[a]) == 0);
                a++;
            } else {
                // Write is finished
                n_left_running--;
                if (n_left_running > 0 && a != n_left_running) {
                    aio_list[a] = aio_list[n_left_running];
                }
            }
            free(curr);
        } else {
            fprintf(stderr, "Unexpected error on aio_write to %s\n",
                    dump_filename);
            fprintf(stderr, "fildes=%d offset=%ld nbytes=%lu buf=%p a=%d\n",
                    curr->aio_fildes, curr->aio_offset, curr->aio_nbytes,
                    curr->aio_buf, a);
            perror(NULL);
            exit(1);
        }
    }

#ifdef VERBOSE
    fprintf(stderr, "Done, %d writes remaining\n", n_left_running);
#endif

    return (n_left_running);
}

void *checkpoint_func(void *data) {
    checkpoint_thread_ctx *ctx = (checkpoint_thread_ctx *)data;

    while (true) {
        VERIFY(pthread_mutex_lock(&checkpoint_mutex) == 0);

        while (checkpoint_thread_running == 0) {
            VERIFY(pthread_cond_wait(&checkpoint_cond, &checkpoint_mutex) == 0);
        }

        VERIFY(pthread_mutex_unlock(&checkpoint_mutex) == 0);

        /*
         * Main thread will signal checkpoint thread to exit by setting an
         * invalid value.
         */
        if (checkpoint_thread_running == -1) break;

#ifdef __CHIMES_PROFILE
        const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
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
        vector<checkpointable_heap_allocation> *to_checkpoint =
            ctx->heap_to_checkpoint;
        void *contains_serialized = ctx->contains_serialized;
        size_t contains_serialized_len = ctx->contains_serialized_len;
        void *serialized_alias_groups = ctx->serialized_alias_groups;
        size_t serialized_alias_groups_len = ctx->serialized_alias_groups_len;

        vector<aiocb *> async_tokens;
        off_t count_bytes = 0;

        /*
         * Until we implement the planned client-server architecture, just dump
         * checkpoints to a file locally. Right now, we naively dump everything.
         */

        // Total number of async writes issued below
        int n_writes_running = 0;

        // Find a unique file for this checkpoint
        int count = 0;
        char dump_filename[MAX_CHECKPOINT_FILENAME_LEN];
        sprintf(dump_filename, "%s/chimes.%d.ckpt", checkpoint_directory, count);
        int fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
        while (fd < 0) {
            count++;
            sprintf(dump_filename, "%s/chimes.%d.ckpt", checkpoint_directory, count);
            fd = open(dump_filename, O_CREAT | O_EXCL | O_WRONLY, 0666);
        }

#ifdef VERBOSE
        fprintf(stderr, "Creating checkpoint in \"%s\", previous_checkpoint="
                "\"%s\"\n", dump_filename, previous_checkpoint_filename);
#endif

        // Write the name of the preceding checkpoint file out
        size_t filename_length = strlen(previous_checkpoint_filename) + 1;
        prep_async_safe_write(fd, &filename_length,
                sizeof(filename_length), count_bytes, &count_bytes, "filename_length", &async_tokens);
        prep_async_safe_write(fd, previous_checkpoint_filename,
                filename_length, count_bytes, &count_bytes, "previous_checkpoint_filename", &async_tokens);

        size_t heap_offset = -1; // placeholder until we figure out the actual value
        off_t heap_offset_offset = sizeof(filename_length) + filename_length;
        prep_async_safe_write(fd, &heap_offset,
                    sizeof(heap_offset), count_bytes, &count_bytes, "heap_offset", &async_tokens);

        // Write the heap entry times to the dump file, sorted by entry order
        int n_checkpoint_times = ctx->checkpoint_entry_times->size();
        prep_async_safe_write(fd, &n_checkpoint_times, sizeof(n_checkpoint_times), count_bytes,
                    &count_bytes, "n_checkpoint_times", &async_tokens);
        serialized_checkpoint_time *serialized_times = (serialized_checkpoint_time *)malloc(
                n_checkpoint_times * sizeof(serialized_checkpoint_time));
        assert(serialized_times);

        int index = 0;
        clock_t baseline;
        for (vector<pair<unsigned, clock_t> >::iterator i =
                ctx->checkpoint_entry_times->begin(),
                e = ctx->checkpoint_entry_times->end(); i != e; i++) {
            unsigned tid = i->first;
            clock_t t = i->second;
            if (index == 0) {
                baseline = t;
            }
            clock_t delta = t - baseline;
            serialized_times[index].tid = tid;
            serialized_times[index].delta = delta;
            index++;
        }
        prep_async_safe_write(fd, serialized_times,
                    n_checkpoint_times * sizeof(serialized_checkpoint_time), count_bytes,
                    &count_bytes, "serialized_times", &async_tokens);

        // Write the trace of function calls out
        size_t serialized_traces_len;
        void *serialized_traces = serialize_traces(ctx->stack_trackers,
                &serialized_traces_len);
        prep_async_safe_write(fd, &serialized_traces_len,
                    sizeof(serialized_traces_len), count_bytes, &count_bytes, "serialized_traces_len", &async_tokens);
        prep_async_safe_write(fd, serialized_traces,
                    serialized_traces_len, count_bytes, &count_bytes, "serialized_traces", &async_tokens);

        // Write the serialized stack out
        prep_async_safe_write(fd, &stacks_serialized_len,
                    sizeof(stacks_serialized_len), count_bytes, &count_bytes, "stacks_serialized_len", &async_tokens);
        prep_async_safe_write(fd, stacks_serialized,
                    ctx->stacks_serialized_len, count_bytes, &count_bytes, "stacks_serialized", &async_tokens);

        // Write the serialized globals out
        prep_async_safe_write(fd, &globals_serialized_len,
                    sizeof(globals_serialized_len), count_bytes, &count_bytes, "globals_serialized_len", &async_tokens);
        prep_async_safe_write(fd, globals_serialized,
                globals_serialized_len, count_bytes, &count_bytes, "globals_serialized", &async_tokens);

        // Write the constants out
        prep_async_safe_write(fd, &constants_serialized_len,
                sizeof(constants_serialized_len), count_bytes, &count_bytes, "constants_serialized_len", &async_tokens);
        prep_async_safe_write(fd, constants_serialized,
                constants_serialized_len, count_bytes, &count_bytes, "constants_serialized", &async_tokens);

        // Write the function pointers out
        prep_async_safe_write(fd, &text_start, sizeof(text_start), count_bytes,
                &count_bytes, "text_start", &async_tokens);
        prep_async_safe_write(fd, &text_len, sizeof(text_len), count_bytes,
                &count_bytes, "text_len", &async_tokens);

        // Write out the thread hierarchy
        prep_async_safe_write(fd, &thread_hierarchy_serialized_len,
                sizeof(thread_hierarchy_serialized_len), count_bytes, &count_bytes, "thread_hierarchy_serialized_len", &async_tokens);
        prep_async_safe_write(fd, thread_hierarchy_serialized,
                thread_hierarchy_serialized_len, count_bytes, &count_bytes, "thread_hierarchy_serialized", &async_tokens);

        /*
         * At the end (after all asynchronous I/Os have completed) we write a
         * pointer to the heap offset into the file near the front.
         *
         * TODO
         */
        heap_offset = count_bytes;

        // Write the heap allocations out
        uint64_t n_heap_allocs = to_checkpoint->size();
        prep_async_safe_write(fd, &n_heap_allocs,
                    sizeof(n_heap_allocs), count_bytes, &count_bytes, "n_heap_allocs", &async_tokens);
        vector<serialized_heap_var> *serialized_heap_vars =
            serialize_checkpointable_heap(to_checkpoint);
        assert(serialized_heap_vars->size() == to_checkpoint->size());

        for (unsigned i = 0; i < to_checkpoint->size(); i++) {
            prep_async_safe_write(fd,
                        serialized_heap_vars->at(i).get_serialized(),
                        serialized_heap_vars->at(i).get_serialized_len(), count_bytes,
                        &count_bytes, "serialized_heap_vars", &async_tokens);
            prep_async_safe_write(fd,
                        to_checkpoint->at(i).get_buffer(),
                        serialized_heap_vars->at(i).get_buffer_len(), count_bytes,
                        &count_bytes, "to_checkpoint", &async_tokens);
        }

        prep_async_safe_write(fd, &contains_serialized_len,
                sizeof(contains_serialized_len), count_bytes, &count_bytes,
                "contains_serialized_len", &async_tokens);
        prep_async_safe_write(fd, contains_serialized, contains_serialized_len,
                    count_bytes, &count_bytes, "serialized_contains",
                    &async_tokens);

        prep_async_safe_write(fd, &serialized_alias_groups_len,
                    sizeof(serialized_alias_groups_len), count_bytes, &count_bytes,
                    "serialized_alias_groups_len", &async_tokens);
        prep_async_safe_write(fd, serialized_alias_groups,
                    serialized_alias_groups_len, count_bytes, &count_bytes,
                    "serialized_alias_groups", &async_tokens);

        /*
         * Done! Wait for async I/Os and finally write the heap offset info in the
         * header of the checkpoint file.
         *
         * Iterate in reverse so we wait for the last ones first.
         */
        struct aiocb * aio_list[async_tokens.size()];
        while (!async_tokens.empty()) {
            aiocb *torun = async_tokens.front();
            async_tokens.erase(async_tokens.begin());

            /*
             * Some writes may be empty (e.g. if there are no globals then the
             * serialized globals len will be == 0).
             */
            if (torun->aio_nbytes == 0) {
                free(torun);
                continue;
            }

            int err = aio_write(torun);

            if (err == -1) {
                async_tokens.push_back(torun);
                if (errno == EAGAIN) {
                    if (n_writes_running) {
                        n_writes_running = wait_for_running_writes(aio_list,
                                n_writes_running, &count_bytes, dump_filename, &async_tokens);
                    }
                } else {
                    fprintf(stderr, "Unexpected error while writing asynchronously "
                            "to %s\n", dump_filename);
                    perror(NULL);
                    exit(1);
                }
            } else {
                aio_list[n_writes_running++] = torun;
            }
        }

        while (n_writes_running > 0) {
            n_writes_running = wait_for_running_writes(aio_list, n_writes_running,
                    &count_bytes, dump_filename, &async_tokens);
        }

        VERIFY(safe_seek(fd, heap_offset_offset, SEEK_SET, "heap_offset_offset",
                dump_filename) == heap_offset_offset);
        safe_write(fd, &heap_offset, sizeof(heap_offset), "heap_offset_final",
                dump_filename);
        close(fd);

        for (unsigned i = 0; i < to_checkpoint->size(); i++) {
            free(to_checkpoint->at(i).get_buffer());
            free(serialized_heap_vars->at(i).get_serialized());
        }

        free(stacks_serialized);
        free(globals_serialized);
        free(constants_serialized);
        free(thread_hierarchy_serialized);
        free(serialized_times);
        free(serialized_traces);
        free(contains_serialized);
        free(serialized_alias_groups);
        delete to_checkpoint;
        delete ctx->stack_trackers;
        delete ctx->checkpoint_entry_times;
        delete serialized_heap_vars;

        strcpy(previous_checkpoint_filename, dump_filename);

        VERIFY(pthread_mutex_lock(&checkpoint_mutex) == 0);
        assert(checkpoint_thread_running == 1 ||
                checkpoint_thread_running == -1);
        if (checkpoint_thread_running == -1) break;

        checkpoint_thread_running = 0;
        VERIFY(pthread_mutex_unlock(&checkpoint_mutex) == 0);

#ifdef __CHIMES_PROFILE
        pp.add_time(CHECKPOINT_THREAD, __start_time);
#endif
    }

    return (NULL);
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

/*
 * entering_omp_parallel is responsible for:
 *   1. adding to the trace of jumps that will be necessary to resume from
 *      inside this parallel region.
 *   2. storing the parent addresses of any region-private variables.
 *   3. Fetching a unique ID for the region we are about to enter and passing it
 *      back to the host application through unique_region_id.
 *   4. Incrementing the number of regions initializing to prevent a checkpoint
 *      from being taken while threads are being created and ensure that all
 *      active threads are included in that checkpoint.
 *   5. Getting the parent TID for this region and returning it to the host
 *      application.
 */
unsigned entering_omp_parallel(unsigned lbl, size_t *unique_region_id,
        unsigned nlocals, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    thread_ctx *ctx = get_my_context();

    ctx->get_stack_tracker().push(lbl);
    ctx->create_new_parent_vars_context();

    if (!ctx->is_disabled()) {
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
    }

    *unique_region_id = __sync_fetch_and_add(&regions_executed, 1);

    VERIFY(pthread_mutex_lock(&thread_count_mutex) == 0);
    regions_initializing++;
    VERIFY(pthread_mutex_unlock(&thread_count_mutex) == 0);

    const int my_tid = get_my_tid();
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(ENTERING_OMP_PARALLEL, __start_time);
#endif

    return my_tid;
}

void register_thread_local_stack_vars(unsigned relation, unsigned parent,
        unsigned threads_in_region, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    unsigned global_tid;
    pthread_t self = pthread_self();

    VERIFY(pthread_mutex_lock(&thread_count_mutex) == 0);
    if (regions_counted.find(region_id) == regions_counted.end()) {
        /*
         * If we haven't already accounted for this parallel region then update
         * the number of running threads and the number of initializing regions
         * once the first thread in the region gets here.
         */
        VERIFY(regions_counted.insert(std::pair<size_t, unsigned>(region_id,
                        threads_in_region - 1)).second);

        /*
         * -1 below because one of the threads in this region will be the parent
         * thread, and so we already know about it.
         */
        thread_count += (threads_in_region - 1);

        regions_initializing--;

        VERIFY(pthread_cond_broadcast(&thread_count_cond) == 0);
    }
    VERIFY(pthread_mutex_unlock(&thread_count_mutex) == 0);

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
        unsigned old = count_threads;
        while (global_tid + 1 > old) {
            old = __sync_val_compare_and_swap(&count_threads, old,
                    global_tid + 1);
        }

        /*
         * On resume, store a mapping from the pthread this OMP logical thread
         * is running on to its CHIMES global TID.
         */
        VERIFY(pthread_rwlock_wrlock(&pthread_to_id_lock) == 0);
        if (pthread_to_id.find(self) == pthread_to_id.end()) {
            VERIFY(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);
            thread_ctxs[global_tid] = new thread_ctx(self, count_change_locations);
            VERIFY(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);

            pthread_to_id[self] = global_tid;
        } else {
            assert(global_tid == pthread_to_id[self]);
        }
        VERIFY(pthread_rwlock_unlock(&pthread_to_id_lock) == 0);
    } else {
        VERIFY(pthread_rwlock_wrlock(&pthread_to_id_lock) == 0);
        if (pthread_to_id.find(self) == pthread_to_id.end()) {
            /*
             * If this thread is being launched for the first time here, first
             * get a globally unique ID for it.
             */
            global_tid = __sync_fetch_and_add(&count_threads, 1);

            // Then create a thread ctx for it
            VERIFY(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);
            thread_ctxs.insert(pair<unsigned, thread_ctx *>(global_tid,
                        new thread_ctx(self, count_change_locations)));
            VERIFY(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);

            // Store the mapping from pthread_t to self
            pthread_to_id.insert(pair<pthread_t, unsigned>(self, global_tid));
        } else {
            global_tid = pthread_to_id.at(self);
        }
        VERIFY(pthread_rwlock_unlock(&pthread_to_id_lock) == 0);
    }

    thread_ctx *ctx = get_my_context();
    ctx->push_parent(parent, relation, region_id);
    std::vector<stack_frame *> *stack = ctx->get_stack();
    stack->push_back(new stack_frame());
    ctx->increment_stack_nesting();

    thread_ctx *parent_ctx = get_context_for(parent);
    if (parent_ctx->get_disabled_nesting() != 0 && parent_ctx != ctx) {
        ctx->set_disabled_nesting(1);
    }

    if (!ctx->is_disabled()) {
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
                stack_var *child_var = new stack_var(
                        parent_var->get_name().c_str(),
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
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(REGISTER_THREAD_LOCAL_STACK_VARS, __start_time);
#endif
}

unsigned get_parent_vars_stack_depth() {
    return get_my_context()->parent_vars_depth();
}

unsigned get_thread_stack_depth() {
    return get_my_context()->get_stack()->size();
}

void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id) {
#ifdef __CHIMES_PROFILE
    const unsigned long long __start_time = perf_profile::current_time_ms();
#endif
    const unsigned long long __chimes_overhead_start_time =
        perf_profile::current_time_ms();
    unsigned parent = get_my_tid();
    thread_ctx *my_ctx = get_my_context();
    /*
     * If this thread participated in the preceding parallel region, it should
     * have the same stack depth it had before the parallel region, plus one.
     *
     * A parent thread may not participate in a parallel region if the parent
     * thread is a thread created in an omp parallel region which contains an
     * omp for region. If the omp for region has fewer iterations than the total
     * number of threads, some threads from the outer omp parallel region will
     * not receive work.
     */
    if (my_ctx->get_parent_region() == region_id) {
        assert(my_ctx->get_stack()->size() ==
                (expected_parent_stack_depth + 1U));
    } else {
        assert(my_ctx->get_stack()->size() ==
                (expected_parent_stack_depth));
    }

    my_ctx->get_stack_tracker().pop();
    my_ctx->pop_parent_vars_entry();

    vector<map<unsigned, thread_ctx *>::iterator> to_erase;

    VERIFY(pthread_rwlock_wrlock(&thread_ctxs_lock) == 0);

    int nthreads_joined = 0;

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
                VERIFY(pthread_rwlock_wrlock(&pthread_to_id_lock) == 0);
                map<pthread_t, unsigned>::iterator found = pthread_to_id.find(
                        ctx->get_pthread());
                assert(found != pthread_to_id.end());
                pthread_to_id.erase(found);
                VERIFY(pthread_rwlock_unlock(&pthread_to_id_lock) == 0);

                __sync_fetch_and_add(&dead_thread_time, ctx->elapsed_time());

                to_erase.push_back(i);
                nthreads_joined++;
            } else {
                if (program_stack->size() < ctx->get_disabled_nesting()) {
                    ctx->set_disabled_nesting(0);
                }
            }
        }
    }

    for (vector<map<unsigned, thread_ctx *>::iterator>::iterator i =
            to_erase.begin(), e = to_erase.end(); i != e; i++) {
        map<unsigned, thread_ctx *>::iterator curr = *i;
        thread_ctxs.erase(curr);
    }

    VERIFY(pthread_mutex_lock(&thread_count_mutex) == 0);
    
    /*
     * It is possible for a parallel region to be created by a thread which is
     * never entered, e.g. a parallel for which has insufficient iterations for
     * all worker threads to enter. In that case, the region will never have
     * been inserted in regions_counted and thread_count will not have changed
     * but regions_initializing will have still been incremented. This doesn't
     * break anything at the moment as we don't allow checkpointing inside
     * parallel for regions, so the fact that regions_initializing will be
     * positive for the entirety of this parallel for region is not a problem
     * (i.e. cannot cause deadlock).
     */
    if (regions_counted.find(region_id) != regions_counted.end()) {
        thread_count -= regions_counted.at(region_id);
        VERIFY(regions_counted.erase(region_id) == 1);
    } else {
        regions_initializing--;
    }

    VERIFY(pthread_cond_broadcast(&thread_count_cond) == 0);
    VERIFY(pthread_mutex_unlock(&thread_count_mutex) == 0);

    VERIFY(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);
    ADD_TO_OVERHEAD
#ifdef __CHIMES_PROFILE
    pp.add_time(LEAVING_OMP_PARALLEL, __start_time);
#endif
}

void chimes_error() {
    exit(42);
}

static int get_my_tid_may_fail() {
    pthread_t self = pthread_self();

    VERIFY(pthread_rwlock_rdlock(&pthread_to_id_lock) == 0);
    map<pthread_t, unsigned>::iterator found = pthread_to_id.find(self);
    int self_id;
    if (found == pthread_to_id.end()) {
        self_id = -1;
    } else {
        self_id = found->second;
    }
    VERIFY(pthread_rwlock_unlock(&pthread_to_id_lock) == 0);

    return self_id;
}

static unsigned get_my_tid() {
    pthread_t self = pthread_self();

    VERIFY(pthread_rwlock_rdlock(&pthread_to_id_lock) == 0);
    assert(pthread_to_id.find(self) != pthread_to_id.end());
    unsigned self_id = pthread_to_id[self];
    VERIFY(pthread_rwlock_unlock(&pthread_to_id_lock) == 0);

    return self_id;
}

static thread_ctx *get_context_for(unsigned tid) {
    VERIFY(pthread_rwlock_rdlock(&thread_ctxs_lock) == 0);
    thread_ctx *result = thread_ctxs.at(tid);
    VERIFY(pthread_rwlock_unlock(&thread_ctxs_lock) == 0);

    return result;
}

static thread_ctx *get_my_context_may_fail() {
    int tid = get_my_tid_may_fail();
    if (tid < 0) return NULL;
    else return get_context_for(tid);
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
    VERIFY(pthread_mutex_lock(&checkpoint_mutex) == 0);
#ifdef VERBOSE
    fprintf(stderr, "Done\n");
#endif
    checkpoint_thread_running = -1;
#ifdef VERBOSE
    fprintf(stderr, "Signalling...\n");
#endif
    VERIFY(pthread_cond_signal(&checkpoint_cond) == 0);
#ifdef VERBOSE
    fprintf(stderr, "Unlocking...\n");
#endif
    VERIFY(pthread_mutex_unlock(&checkpoint_mutex) == 0);
#ifdef VERBOSE
    fprintf(stderr, "Joining\n");
#endif
    pthread_join(checkpoint_thread, NULL);

#ifdef VERBOSE
    fprintf(stderr, "Done\n");
#endif
}
