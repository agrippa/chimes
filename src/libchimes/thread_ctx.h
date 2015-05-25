#ifndef THREAD_CTX_H
#define THREAD_CTX_H

#include <pthread.h>
#include <vector>
#include <set>
#include <stdarg.h>

#include "set_of_aliases.h"
#include "perf_profile.h"
#include "stack_frame.h"
#include "heap_allocation.h"
#include "chimes_stack.h"

#define PARENT_ALIASES_INIT_SIZE    1024

class thread_relation {
    public:
        thread_relation(unsigned set_parent, unsigned set_relation,
                size_t set_region_id) : parent(set_parent),
                relation(set_relation), region_id(set_region_id) { }

        unsigned get_parent() { return parent; }
        unsigned get_relation() { return relation; }
        size_t get_region_id() { return region_id; }

    private:
        unsigned parent;
        unsigned relation;
        size_t region_id;
};

class thread_ctx {
    public:
        thread_ctx(pthread_t set_pthread, unsigned n_change_locs) :
                pthread(set_pthread), stack_nesting(0),
                changed_groups(n_change_locs), calling_label(-1), func_ptr(NULL),
                disabled_nesting(0),
                parent_aliases_capacity(PARENT_ALIASES_INIT_SIZE),
                parent_aliases_length(0), printed_func_ptr_mismatch(false),
                printed_func_args_mismatch(false) {
            parent_aliases = (size_t*)malloc(sizeof(size_t) *
                    PARENT_ALIASES_INIT_SIZE);
            assert(parent_aliases);
            thread_start_time = perf_profile::current_time_ms();
        }
        ~thread_ctx() {
            free(parent_aliases);
        }

        unsigned long long elapsed_time() {
            return (perf_profile::current_time_ms() - thread_start_time);
        }

        bool get_printed_func_ptr_mismatch() {
            return printed_func_ptr_mismatch;
        }
        bool get_printed_func_args_mismatch() {
            return printed_func_args_mismatch;
        }
        void set_printed_func_ptr_mismatch(bool s) {
            printed_func_ptr_mismatch = s;
        }
        void set_printed_func_args_mismatch(bool s) {
            printed_func_args_mismatch = s;
        }

        size_t get_n_parent_aliases() { return parent_aliases_length; }
        size_t get_parent_alias(unsigned i) {
            assert(i < parent_aliases_length);
            return parent_aliases[i];
        }

        void clear_parent_aliases() {
            parent_aliases_length = 0;
        }

        void init_parent_aliases(va_list vl, unsigned naliases) {
            if (naliases > parent_aliases_capacity) {
                parent_aliases_capacity *= 2;
                parent_aliases = (size_t *)realloc(parent_aliases,
                        sizeof(size_t) * parent_aliases_capacity);
                assert(parent_aliases);
            }

            for (unsigned i = 0; i < naliases; i++) {
                parent_aliases[i] = va_arg(vl, size_t);
            }
            parent_aliases_length = naliases;
        }

        std::vector<stack_frame *> *get_stack() { return &program_stack; }
        void push_parent(unsigned parent, unsigned relation, size_t region_id) {
            parents.push_back(thread_relation(parent, relation, region_id));
        }
        void pop_parent() {
            parents.pop_back();
        }
        unsigned get_parent() {
            return parents[parents.size() - 1].get_parent();
        }
        unsigned get_relation_to_parent() {
            return parents[parents.size() - 1].get_relation();
        }
        size_t get_parent_region() {
            return parents[parents.size() - 1].get_region_id();
        }
        bool has_parent() {
            return parents.size() > 0;
        }

        void set_disabled_nesting(unsigned s) {
            disabled_nesting = s;
        }
        bool is_disabled() {
            return (disabled_nesting != 0);
        }
        unsigned get_disabled_nesting() {
            return (disabled_nesting);
        }

        void increment_stack_nesting() { stack_nesting++; }
        void decrement_stack_nesting() { stack_nesting--; }
        int get_stack_nesting() { return stack_nesting; }
        void set_stack_nesting(int set) { stack_nesting = set; }

        pthread_t get_pthread() { return pthread; }

        unsigned parent_vars_depth() { return parent_vars.size(); }
        void add_parent_var(stack_var *var) {
            parent_vars.back().push_back(var);
        }
        vector<stack_var *> &get_parent_vars_at_depth(int depth) {
            return parent_vars[depth];
        }
        void pop_parent_vars_entry() {
            assert(parent_vars.size() > 0);
            parent_vars.pop_back();
        }
        void create_new_parent_vars_context() {
            parent_vars.push_back(vector<stack_var *>());
        }

        void clear_changed_groups() { changed_groups.clear(); }
        set_of_aliases *get_changed_groups() { return &changed_groups; }
        void add_changed_loc(unsigned id) {
            changed_groups.add_loc(id);
        }
        void add_changed_alias(size_t alias) {
            changed_groups.add_alias(alias);
        }

        void set_calling_label(int label) { calling_label = label; }
        int get_calling_label() { return calling_label; }

        void set_func_ptr(void *ptr) { func_ptr = ptr; }
        void *get_func_ptr() { return func_ptr; }

        chimes_stack &get_stack_tracker() { return stack_tracker; }

        void push_return_alias() { return_aliases.push_back(return_alias); }
        size_t pop_return_alias() {
            size_t result = return_aliases.back();
            return_aliases.pop_back();
            return result;
        }
        void set_return_alias(size_t set_return_alias) {
            return_alias = set_return_alias;
        }

    private:
        pthread_t pthread;
        vector< vector<stack_var *> > parent_vars;
        vector<stack_frame *> program_stack;
        vector<thread_relation> parents;
        int stack_nesting;
        set_of_aliases changed_groups;
        int calling_label;
        void *func_ptr;

        /*
         * A thread can be disabled if it is inside an OMP region that is not
         * simply a parallel (e.g. a for, a critical, etc).
         */
        unsigned disabled_nesting;

        size_t *parent_aliases;
        size_t parent_aliases_capacity;
        size_t parent_aliases_length;

        bool printed_func_ptr_mismatch;
        bool printed_func_args_mismatch;

        unsigned long long thread_start_time;

        /*
         * During normal execution, has every function call and parallel region
         * entry recorded in it so that these transitions can be replayed later.
         */
        chimes_stack stack_tracker;

        size_t return_alias;
        vector<size_t> return_aliases;
};

#endif
