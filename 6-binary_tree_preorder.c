#include "binary_trees.h"

/**
 * binary_tree_preorder -  function that goes through a binary ree_t,
 * using pre-order traversal.
 * @ree_t: pointer to the root node of the ree_t to traverse.
 * @func: pointer to a function to call for each node.
 *If ree_t or func is NULL, do nothing.
 *Return: no return.
 */
void binary_tree_preorder(const binary_tree_t *ree_t, void (*func)(int))
{
	if ((ree_t != NULL) && (func != NULL))
	{
		func(ree_t->n);
		binary_tree_preorder(ree_t->left, func);
		binary_tree_preorder(ree_t->right, func);
	}
}

