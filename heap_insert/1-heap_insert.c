#include "binary_trees.h"
#include <stdlib.h>

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new_node, *parent;

	if (root == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	if (*root == NULL)
	{
		*root = new_node;
		return (new_node);
	}

	parent = *root;
	while (parent->left && parent->right)
	{
		if (parent->left->n < parent->right->n)
			parent = parent->left;
		else
			parent = parent->right;
	}

	if (parent->left == NULL)
		parent->left = new_node;
	else
		parent->right = new_node;

	new_node->parent = parent;

	return (new_node);
}

//esto se puede hacer con recursion mucho mas lindo
