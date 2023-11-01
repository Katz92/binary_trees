#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a c_node.
 * @c_node: pointer to the c_node to find the uncle.
 * If c_node is NULL or the parent is NULL, return NULL.
 * If c_node has no sibling, return NULL.
 * Return:  pointer to the uncle c_node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *c_node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;
	binary_tree_t *parent = (c_node != NULL ? c_node->parent : NULL);

	if ((parent != NULL) && (parent->parent != NULL))
	{
		left = parent->parent->left;
		right = parent->parent->right;
	}
	return (left == parent ? right : left);
}

