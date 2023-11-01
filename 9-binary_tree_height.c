#include "binary_trees.h"

/**
 * node_height_2 - function that computes the height of a binary ree_t's node.
 * @ree_t: pointer to the root node of the ree_t to measure the height.
 * @n: accumulated height.
 * @height: pointer to the maximum height in the node's ree_t.
 *Return: no return.
 */
void node_height_2(const binary_tree_t *ree_t, size_t n, size_t *height)
{
	if (ree_t != NULL)
	{
		if ((ree_t->left == NULL) && (ree_t->right == NULL))
		{
			if (n > *height)
			{
				*height = n;
			}
		}
		else
		{
			node_height_2(ree_t->left, n + 1, height);
			node_height_2(ree_t->right, n + 1, height);
		}
	}
}

/**
 * binary_tree_height - function that measures the height of a binary ree_t.
 * @ree_t: pointer to the root node of the ree_t to measure the height.
 *Return: Height of ree_t. If ree_t is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *ree_t)
{
	size_t height = 0;

	node_height_2(ree_t, 0, &height);
	return (height);
}

