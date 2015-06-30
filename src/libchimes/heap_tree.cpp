/*
 * Based on the (buggy) code from:
 *
 * http://www.sanfoundry.com/cpp-program-implement-self-balancing-binary-tree/
 *
 */

#include <stdio.h>
#include <cstdlib>
#include <assert.h>

#include "heap_tree.h"

heap_tree_node::heap_tree_node() {
    left = right = NULL;
    height = 0;
    old_address = new_address = NULL;
    size = 0;
}

heap_tree_node::heap_tree_node(void *set_old_address, void *set_new_address,
        size_t set_size) {
    left = right = NULL;
    height = 0;
    old_address = set_old_address;
    new_address = set_new_address;
    size = set_size;
}

heap_tree::heap_tree() {
    root = NULL;
}

size_t heap_tree::size() {
    return size_helper(root);
}

size_t heap_tree::size_helper(heap_tree_node *n) {
    if (n == NULL) return 0;

    return size_helper(n->left) + 1 + size_helper(n->right);
}

int heap_tree::serialize(void ***old_out, void ***new_out, size_t **size_out) {
    size_t my_size = size();
    void **old_ptrs = (void **)malloc(sizeof(void *) * my_size);
    void **new_ptrs = (void **)malloc(sizeof(void *) * my_size);
    size_t *size = (size_t *)malloc(sizeof(size_t) * my_size);

    int index = 0;
    serialize_helper(root, old_ptrs, new_ptrs, size, &index);

    *old_out = old_ptrs;
    *new_out = new_ptrs;
    *size_out = size;

    return index;
}

void heap_tree::serialize_helper(heap_tree_node *node, void **old_ptrs,
        void **new_ptrs, size_t *size, int *index) {
    if (node == NULL) return;

    int my_index = *index;
    *index = *index + 1;

    old_ptrs[my_index] = node->old_address;
    new_ptrs[my_index] = node->new_address;
    size[my_index] = node->size;

    serialize_helper(node->left, old_ptrs, new_ptrs, size, index);
    serialize_helper(node->right, old_ptrs, new_ptrs, size, index);
}

void heap_tree::insert(void *old_address, void *new_address, size_t size) {
    root = insert(old_address, new_address, size, root);
}

int heap_tree::height(heap_tree_node *t) {
    return t == NULL ? -1 : t->height;
}

int heap_tree::max(int lhs, int rhs) {
    return lhs > rhs ? lhs : rhs;
}

heap_tree_node *heap_tree::insert(void *old_address, void *new_address,
        size_t size, heap_tree_node *t) {

    if (t != NULL) {
        /*
         * Assert there are no overlapping heap allocations. We could make a
         * stronger assertion at the top level by doing a search() for
         * old_address and asserting that search returns false?
         */
        if (!(old_address < t->old_address ||
                ((unsigned char *)old_address) >=
                    (((unsigned char *)t->old_address) + t->size))) {
            fprintf(stderr, "Expected non-overlapping memory regions\n");
            fprintf(stderr, "  old address being inserted = %p\n", old_address);
            fprintf(stderr, "  current node: old_address=%p size=%lu\n", t->old_address, t->size);
            assert(false);
        }
    }

    if (t == NULL) {
        t = new heap_tree_node(old_address, new_address, size);
    } else if (old_address < t->old_address) {
        t->left = insert(old_address, new_address, size, t->left);
        if (height(t->left) - height(t->right) == 2) {
            if (old_address < t->left->old_address) {
                t = rotateWithLeftChild(t);
            } else {
                t = doubleWithLeftChild(t);
            }
        }
    } else if (old_address > t->old_address) {
        t->right = insert(old_address, new_address, size, t->right);

        if (height(t->right) - height(t->left) == 2) {

            if (old_address > t->right->old_address) {
                t = rotateWithRightChild(t);
            } else {
                t = doubleWithRightChild(t);
            }
        }
    }

    t->height = max(height(t->left), height(t->right)) + 1;

    return t;
}

heap_tree_node *heap_tree::rotateWithLeftChild(heap_tree_node* k2) {
    heap_tree_node *k1 = k2->left;
    k2->left = k1->right;
    k1->right = k2;
    k2->height = max(height(k2->left), height(k2->right)) + 1;
    k1->height = max(height(k1->left), k2->height) + 1;
    return k1;
}

heap_tree_node *heap_tree::rotateWithRightChild(heap_tree_node *k1) {
    heap_tree_node *k2 = k1->right;
    k1->right = k2->left;
    k2->left = k1;
    k1->height = max(height(k1->left), height(k1->right)) + 1;
    k2->height = max(height(k2->right), k1->height) + 1;
    return k2;
}

heap_tree_node *heap_tree::doubleWithLeftChild(heap_tree_node *k3) {
    k3->left = rotateWithRightChild(k3->left);
    return rotateWithLeftChild(k3);
}

heap_tree_node *heap_tree::doubleWithRightChild(heap_tree_node *k1) {
    k1->right = rotateWithLeftChild(k1->right);
    return rotateWithRightChild(k1);
}

heap_tree_node *heap_tree::exact_search(void *address) {
    return exact_search_helper(root, address);
}

heap_tree_node *heap_tree::exact_search_helper(heap_tree_node *n, void *address) {
    if (n == NULL) return NULL;

    if (n->old_address == address) return n;

    if (address < n->old_address) {
        n = n->left;
    } else if (address > n->old_address) {
        n = n->right;
    }

    return exact_search_helper(n, address);
}

bool heap_tree::search(void *old_address, void *container, void **ret_new_address,
        std::set<void *> *already_translated) {
    return search(root, old_address, container, ret_new_address, already_translated);
}

bool heap_tree::search(heap_tree_node *r, void *old_address, void *container,
        void **ret_new_address, std::set<void *> *already_translated) {
    if (r == NULL) return false;

    unsigned char *c_old_address = (unsigned char *)old_address;

    void *rval = r->old_address;
    unsigned char *c_rval = (unsigned char *)rval;

    size_t diff_in_bytes = c_old_address - c_rval;
    if (c_old_address >= c_rval && diff_in_bytes < r->size) {
#ifdef VERBOSE
        fprintf(stderr, "found matching old allocation starting at %p, "
                "size %lu, diff %lu, new ptr %p\n", r->old_address, r->size,
                diff_in_bytes, r->new_address);
#endif
        already_translated->insert(container);
        *ret_new_address = ((unsigned char *)r->new_address) + diff_in_bytes;
        return true;
    }

    if (old_address < rval) {
        r = r->left;
    } else if (old_address > rval) {
        r = r->right;
    }

    return search(r, old_address, container, ret_new_address,
            already_translated);
}
