#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the,
 * left-child of another node.
 *
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent,
 * is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new = NULL;

	if (parent != NULL)
	{
		node_new = malloc(sizeof(binary_tree_t));
		if (node_new != NULL)
		{
			node_new->left = parent->left;
			node_new->right = NULL;
			node_new->parent = parent;
			node_new->n = value;
			if (parent->left != NULL)
				parent->left->parent = node_new;
			parent->left = node_new;
		}
	}
	return (node_new);
}

