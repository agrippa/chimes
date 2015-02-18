#ifndef THREAD_CTX_H
#define THREAD_CTX_H

#include <pthread.h>
#include <vector>
#include <set>

#include "stack_frame.h"
#include "heap_allocation.h"

class thread_ctx {
    public:
        thread_ctx(pthread_t set_pthread) : pthread(set_pthread),
                stack_nesting(0), calling_label(-1) {}

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

    private:
        pthread_t pthread;
        vector<void *> parent_vars;
        vector<stack_frame *> program_stack;
        vector<pair<unsigned, unsigned> > parents;
        int stack_nesting;
        set<size_t> changed_groups;
        int calling_label;
};

#endif
