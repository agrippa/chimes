#ifndef THREAD_CTX_H
#define THREAD_CTX_H

#include <pthread.h>
#include <vector>
#include <set>

#include "stack_frame.h"
#include "heap_allocation.h"
#include "chimes_stack.h"

class thread_ctx {
    public:
        thread_ctx(pthread_t set_pthread) : pthread(set_pthread),
                stack_nesting(0), calling_label(-1), func_ptr(NULL),
                is_inside_parallel_for(false) {}

        std::vector<stack_frame *> *get_stack() { return &program_stack; }
        void push_parent(unsigned parent, unsigned relation) {
            parents.push_back(pair<unsigned, unsigned>(parent, relation));
        }
        void pop_parent() {
            parents.pop_back();
        }
        unsigned get_parent() {
            return parents[parents.size() - 1].first;
        }
        unsigned get_relation_to_parent() {
            return parents[parents.size() - 1].second;
        }
        bool has_parent() {
            return parents.size() > 0;
        }

        bool get_is_inside_parallel_for() { return is_inside_parallel_for; }
        void set_is_inside_parallel_for(bool s) { is_inside_parallel_for = s; }

        void increment_stack_nesting() { stack_nesting++; }
        void decrement_stack_nesting() { stack_nesting--; }
        int get_stack_nesting() { return stack_nesting; }
        void set_stack_nesting(int set) { stack_nesting = set; }

        pthread_t get_pthread() { return pthread; }

        void clear_parent_vars() { parent_vars.clear(); }
        unsigned parent_vars_size() { return parent_vars.size(); }
        void add_parent_var(void *addr) { parent_vars.push_back(addr); }
        void *get_parent_var(int index) { return parent_vars[index]; }

        void clear_changed_groups() { changed_groups.clear(); }
        set<size_t> *get_changed_groups() { return &changed_groups; }
        void add_changed_group(size_t group) { changed_groups.insert(group); }

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
        vector<void *> parent_vars;
        vector<stack_frame *> program_stack;
        vector<pair<unsigned, unsigned> > parents;
        int stack_nesting;
        set<size_t> changed_groups;
        int calling_label;
        void *func_ptr;
        bool is_inside_parallel_for;

        /*
         * During normal execution, has every function call and parallel region
         * entry recorded in it so that these transitions can be replayed later.
         */
        chimes_stack stack_tracker;

        size_t return_alias;
        vector<size_t> return_aliases;
};

#endif
