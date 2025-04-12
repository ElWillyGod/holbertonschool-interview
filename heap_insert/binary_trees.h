#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - binary tree node
 *
 * @n: integer stored in the node
 * @parent: pointer to the parent node
 * @left: pointer to the left child node
 * @right: pointer to the right child node
 */

typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *tree);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* _BINARY_TREES_H_ */
