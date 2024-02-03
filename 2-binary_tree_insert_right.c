#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts the right child node
 * @parent: the parent node where to insert into
 * @value: the value contained in the node
 *
 * Return: NULL if fails or a pointer to the new child right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->n = value;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
