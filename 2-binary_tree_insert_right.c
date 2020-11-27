#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in.
 * @value: is the value to store in the new node.
 *
 * Return: The new right node(leaf) or NULL on failure.
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!parent)
		return (NULL);
	right_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
