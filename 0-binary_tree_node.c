#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node of binary tree
 *
 * @parent: a pointer to the parent node
 * @value: value for the new child node
 *
 * Return: a pointer to the new child node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
