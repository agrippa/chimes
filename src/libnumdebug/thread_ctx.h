#ifndef THREAD_CTX_H
#define THREAD_CTX_H

#include <pthread.h>
#include <vector>

#include "stack_frame.h"

class thread_ctx {
    public:
        thread_ctx(pthread_t set_pthread) : pthread(set_pthread),
                stack_nesting(0) {}

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

    private:
        pthread_t pthread;
        vector<void *> parent_vars;
        vector<stack_frame *> program_stack;
        vector<pair<unsigned, unsigned> > parents;
        int stack_nesting;
};

#endif
