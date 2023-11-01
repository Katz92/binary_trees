#include "binary_trees.h"

/**
 * binary_tree_leaves - function that  counts the leaves in a binary ree_t.
 * @ree_t: pointer to the root ree_t of the ree_t to count the no. of leaves.
 *Return: number of leaves. If ree_t is NULL the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *ree_t)
{
	size_t left, right;

	if (ree_t == NULL)
		return (0);
	/* Check for leaf node */
	if (ree_t->left == NULL && ree_t->right == NULL)
		return (1);
	/* traverse the binary ree_t using pre Order traversal as below */

	/* find the leaf nodes in left and right sub ree_t recursively */
	left = binary_tree_leaves(ree_t->left);
	right = binary_tree_leaves(ree_t->right);

	return (left + right);
}

