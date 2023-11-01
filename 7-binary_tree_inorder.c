#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary ree_t using,
 * in-order traversal.
 * @ree_t: pointer to the root node of the ree_t to traverse.
 * @func: pointer to a function to call for each node.
 *If ree_t or func is NULL, do nothing.
 *Return: no return.
 */
void binary_tree_inorder(const binary_tree_t *ree_t, void (*func)(int))
{
	if ((ree_t != NULL) && (func != NULL))
	{
		binary_tree_inorder(ree_t->left, func);
		func(ree_t->n);
		binary_tree_inorder(ree_t->right, func);
	}
}

