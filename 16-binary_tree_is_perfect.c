#include "binary_trees.h"

/**
 * tree_stats - function that computes some statistics about a binary ree_t.
 * @ree_t: pointer to the root node of the ree_t to check.
 * @n: accumulated height of the current path in the ree_t.
 * @leaves: pointer to the ree_t's leaf count value.
 * @height: pointer to the ree_t's maximum height value.
 * Return: no return.
 */
void tree_stats(const binary_tree_t *ree_t, size_t n,
	size_t *leaves, size_t *height)
{
	if (ree_t != NULL)
	{
		if ((ree_t->left == NULL) && (ree_t->right == NULL))
		{
			if (leaves != NULL)
				(*leaves)++;
			if ((height != NULL) && (n > *height))
				*height = n;
		}
		else
		{
			tree_stats(ree_t->left, n + 1, leaves, height);
			tree_stats(ree_t->right, n + 1, leaves, height);
		}
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary ree_t is perfect.
 * @ree_t: pointer to the root node of the ree_t to check.
 * Return: 1 if ree_t is full. 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *ree_t)
{
	size_t leaves_count = 0;
	size_t tree_height = 0;

	tree_stats(ree_t, 0, &leaves_count, &tree_height);
	return ((int)leaves_count == (1 << tree_height) ? 1 : 0);
}

