#include "binary_trees.h"
/**
 * binary_tree_is_full - measures the is full of a binary tree
 * @tree: is a pointer to the tree node of the tree to traverse
 * Return: Always 0 (Succes)
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
