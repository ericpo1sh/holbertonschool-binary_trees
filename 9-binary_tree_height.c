#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: binary tree
 * Return: the height of the tree, 0 if failed
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right || tree)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);

	return (right);
}
