#include "binary_trees.h"

/**
 * binary_tree_inorder - surf through a tree with inorder transverse
 *
 * @tree: a pointer to the root of the tree
 * @func: a function pointer to call each node
 *
 * Descr: left node, root node, right node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
