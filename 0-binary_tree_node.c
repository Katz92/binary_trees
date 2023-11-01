#include "binary_trees.h"

/**
 * binary_tree_node - funtion that creates a binary tree.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * When created, a node does not have any child.
 * Return: pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new = NULL;

	node_new = malloc(sizeof(binary_tree_t));
	if (node_new != NULL)
	{
		node_new->left = NULL;
		node_new->right = NULL;
		node_new->parent = parent;
		node_new->n = value;
	}
	return (node_new);
}

