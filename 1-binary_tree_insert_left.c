#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert the left child node
 *
 * @parent: the parent node
 * @value: value to insert into node
 *
 * Return: pointer to the left child nodr created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->n = value;
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
