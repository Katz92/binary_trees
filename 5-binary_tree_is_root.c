#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given c_node is a root.
 * @c_node: pointer to the c_node to check.
 *Return: 1 if c_node is a root, otherwise 0. If c_node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *c_node)
{
	if (c_node != NULL && c_node->parent == NULL)
		return (1);
	return (0);
}

