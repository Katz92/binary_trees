#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a c_node is a leaf.
 * @c_node: pointer to the c_node to check.
 *Return: 1 if c_node is a leaf, otherwise 0. If c_node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *c_node)
{
	int n = 0;

	if (c_node != NULL)
	{
		n = ((c_node->left == NULL) && (c_node->right == NULL) ? 1 : 0);
	}
	return (n);
}

