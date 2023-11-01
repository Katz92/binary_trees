#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a c_node is a leaf.
 * @c_node: pointer to the c_node to check.
 * Return: 1 if c_node is a leaf, and 0 otherwise. If c_node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *c_node)
{
	if (c_node != NULL && c_node->left == NULL && c_node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - function that counts the nodes with at least,
 * 1 child in a binary ree_t.
 * @ree_t: pointer to the root ree_t of the ree_t to count the no. of nodes.
 * A NULL pointer is not a c_node.
 * Return: number of nodes. If ree_t is NULL the function must return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *ree_t)
{
	size_t left, right;

	if (ree_t == NULL || binary_tree_is_leaf(ree_t))
		return (0);
	left = binary_tree_nodes(ree_t->left);
	right = binary_tree_nodes(ree_t->right);
	return (1 + left + right);
}

