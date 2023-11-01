#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a c_node.
 * @c_node: pointer to the c_node to find the sibling.
 * If c_node is NULL or the parent is NULL, return NULL.
 * If c_node has no sibling, return NULL.
 * Return:  pointer to the sibling c_node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *c_node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if ((c_node != NULL) && (c_node->parent != NULL))
	{
		left = c_node->parent->left;
		right = c_node->parent->right;
	}
	return (left == c_node ? right : left);
}

