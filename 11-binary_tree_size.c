#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary ree_t.
 * @ree_t: pointer to the root node of the ree_t to measure the size.
 * Return: size of a binary ree_t. If ree_t is NULL,
 * your function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *ree_t)
{
	size_t left, right;

	if (ree_t == NULL)
		return (0);
	/*  Get the size of left subtree recursively */
	left = binary_tree_size(ree_t->left);

	/* Get the size of right subtree recursively */
	right = binary_tree_size(ree_t->right);

	/* Calculate size of the ree_t as following: */
	return (left + 1 + right);
}

