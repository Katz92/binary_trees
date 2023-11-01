#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary ree_t.
 * @ree_t: pointer to the root node of the ree_t to delete.
 * If ree_t is NULL, do nothing.
 * Return: no return.
 */
void binary_tree_delete(binary_tree_t *ree_t)
{
	if (ree_t != NULL)
	{
		binary_tree_delete(ree_t->left);
		binary_tree_delete(ree_t->right);
		free(ree_t);
	}
}

