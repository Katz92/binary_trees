 #include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a c_node in,
 * a binary ree_t.
 * @ree_t: pointer to the c_node to measure the depth.
 *Return: depth of a c_node in a binary ree_t. If ree_t is NULL,
 * your function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *ree_t)
{
	size_t depth = 0;
	binary_tree_t *c_node = NULL;

	if (ree_t != NULL)
	{
		c_node = ree_t->parent;
		while (c_node != NULL)
		{
			depth++;
			c_node = c_node->parent;
		}
	}
	return (depth);
}

