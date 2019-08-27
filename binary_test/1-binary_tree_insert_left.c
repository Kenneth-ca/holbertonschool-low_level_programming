#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent
 * @value: the value
 * Return: a pointer.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left;

	if (parent == NULL)
		return (NULL);

	node_left = binary_tree_node(parent, value);
	if (node_left == NULL)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = node_left;
		node_left->left = parent->left;
	}
	parent->left = node_left;
	return (node_left);
}
