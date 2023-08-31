#include "binary_trees.h"

/**
 * binary_tree_is_leaf - deletes an entire binary tree
 * @node: pointer to the root node of the tree to delete
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* If node is NULL, return 0 */

	return (node->left == NULL && node->right == NULL);
}
