#ifndef HEAP_TREE_H
#define HEAP_TREE_H

#include <set>

class heap_tree_node {
    public:
        void *old_address;
        void *new_address;
        size_t size;

        int height;
        heap_tree_node *left, *right;

        heap_tree_node();
        heap_tree_node(void *set_old_address, void *set_new_address, size_t set_size);
};

class heap_tree {
    private:
        heap_tree_node *root;
    public:
        heap_tree();
        void insert(void *old_address, void *new_address, size_t size);
        int height(heap_tree_node *t);
        int max(int lhs, int rhs);
        heap_tree_node *insert(void *old_address, void *new_address,
                size_t size, heap_tree_node *t);
        heap_tree_node *rotateWithLeftChild(heap_tree_node* k2);
        heap_tree_node *rotateWithRightChild(heap_tree_node *k1);
        heap_tree_node *doubleWithLeftChild(heap_tree_node *k3);
        heap_tree_node *doubleWithRightChild(heap_tree_node *k1);
        bool search(void *old_address, void *container, void **ret_new_address,
                std::set<void *> *already_translated);
        bool search(heap_tree_node *r, void *old_address, void *container,
                void **ret_new_address, std::set<void *> *already_translated);
        heap_tree_node *exact_search(void *address);
        heap_tree_node *exact_search_helper(heap_tree_node *n, void *address);

        size_t size_helper(heap_tree_node *n);
        size_t size();

        int serialize(void ***old_out, void ***new_out, size_t **size_out);
        void serialize_helper(heap_tree_node *node, void **old_ptrs,
                void **new_ptrs, size_t *size, int *index);
};

#endif
