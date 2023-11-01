#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary ree_t is full.
 * @ree_t: pointer to the root node of the ree_t to check.
 * Return: 1 if ree_t is full. 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *ree_t)
{
	int left, right;

	/* if binary ree_t node is NULL then it is not a full binary ree_t */
	if (ree_t == NULL)
		return (0);

	/* if binary ree_t node does have empty left and right sub-trees */
	/* (if leaf node) */
	if (ree_t->left == NULL && ree_t->right == NULL)
		return (1);

	/* if both left and right are not NULL, and left & right subtrees are full */
	if ((ree_t->left) && (ree_t->right))
	{
		left = binary_tree_is_full(ree_t->left);
		right = binary_tree_is_full(ree_t->right);
		return (left && right);
	}

	/* We reach here when none of the above if conditions work */
	return (0);
}

