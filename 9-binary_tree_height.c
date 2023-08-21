#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: binary tree
 * Return: the height of the tree, 0 if failed
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);

	return (right);
}
