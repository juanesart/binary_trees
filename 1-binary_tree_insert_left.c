#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
 *
 * Return: The new left node(leaf) or NULL on failure or if parent is NULL.
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (!parent)
		return (NULL);
	left_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
