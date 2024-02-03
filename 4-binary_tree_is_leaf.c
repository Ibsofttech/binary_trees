#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a particular node is external
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, if not return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
