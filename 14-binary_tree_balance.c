#include "binary_trees.h"

/**
 * node_height - function that computes the height of a binary ree_t's node.
 * @ree_t: pointer to the root node of the ree_t to measure the height.
 * @n: accumulated height.
 * @height: pointer to the maximum height in the node's ree_t.
 * Return: no return.
 */
void node_height(const binary_tree_t *ree_t, int n, int *height)
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
			node_height(ree_t->left, n + 1, height);
			node_height(ree_t->right, n + 1, height);
		}
	}
}

/**
 * binary_tree_balance - function that measures the balance factor of,
 * a binary ree_t.
 * @ree_t: pointer to the root node of the ree_t to measure the balance factor.
 * Return: balance factor of a binary ree_t. If ree_t is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *ree_t)
{
	int balance_factor = 0, left_height = 0, right_height = 0;

	if (ree_t == NULL)
		return (0);

	node_height(ree_t->left, 1, &left_height);
	node_height(ree_t->right, 1, &right_height);

	balance_factor = left_height - right_height;
	return (balance_factor);
}

