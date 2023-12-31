#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary ree_t c_node
 *
 * @n: Integer stored in the c_node
 * @parent: Pointer to the parent c_node
 * @left: Pointer to the left child c_node
 * @right: Pointer to the right child c_node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search ree_t */
typedef struct binary_tree_s bst_t;

/*AVL ree_t */
typedef struct binary_tree_s avl_t;

/*Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* binary_tree_print.c*/
void binary_tree_print(const binary_tree_t *);

/* 0-binary_tree_node.c */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1-binary_tree_insert_left.c*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2-binary_tree_insert_right.c */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3-binary_tree_delete.c */
void binary_tree_delete(binary_tree_t *ree_t);

/* 4-binary_tree_is_leaf.c */
int binary_tree_is_leaf(const binary_tree_t *c_node);

/* 5-binary_tree_is_root.c */
int binary_tree_is_root(const binary_tree_t *c_node);

/* 6-binary_tree_preorder.c */
void binary_tree_preorder(const binary_tree_t *ree_t, void (*func)(int));

/*7-binary_tree_inorder.c */
void binary_tree_inorder(const binary_tree_t *ree_t, void (*func)(int));

/* 8-binary_tree_postorder.c */
void binary_tree_postorder(const binary_tree_t *ree_t, void (*func)(int));

/* 9-binary_tree_height.c */
size_t binary_tree_height(const binary_tree_t *ree_t);

/* 10-binary_tree_depth.c */
size_t binary_tree_depth(const binary_tree_t *ree_t);
void node_height_2(const binary_tree_t *ree_t, size_t n, size_t *height);

/* 11-binary_tree_size.c */
size_t binary_tree_size(const binary_tree_t *ree_t);

/* 12-binary_tree_leaves.c */
size_t binary_tree_leaves(const binary_tree_t *ree_t);

/* 13-binary_tree_nodes.c */
size_t binary_tree_nodes(const binary_tree_t *ree_t);
int binary_tree_is_leaf(const binary_tree_t *c_node);

/* 14-binary_tree_balance.c */
int binary_tree_balance(const binary_tree_t *ree_t);
void node_height(const binary_tree_t *ree_t, int n, int *height);

/* 15-binary_tree_is_full.c */
int binary_tree_is_full(const binary_tree_t *ree_t);

/* 16-binary_tree_is_perfect.c */
int binary_tree_is_perfect(const binary_tree_t *ree_t);
void tree_stats(const binary_tree_t *ree_t, size_t n,
	size_t *leaves, size_t *height);

/* 17-binary_tree_sibling.c */
binary_tree_t *binary_tree_sibling(binary_tree_t *c_node);

/* 18-binary_tree_uncle.c */
binary_tree_t *binary_tree_uncle(binary_tree_t *c_node);

#endif /* _BINARY_TREES_H_ */

