#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the,
 * right-child of another node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 * Return: pointer to the created node, or NULL on failure or if parent,
 * is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new = NULL;

	if (parent != NULL)
	{
		node_new = malloc(sizeof(binary_tree_t));
		if (node_new != NULL)
		{
			node_new->left = NULL;
			node_new->right = parent->right;
			node_new->parent = parent;
			node_new->n = value;
			if (parent->right != NULL)
				parent->right->parent = node_new;
			parent->right = node_new;
		}
	}
	return (node_new);
}

