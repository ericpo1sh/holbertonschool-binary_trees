#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree 
 * Return: the size of the tree on success, 0 if fail
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_size(tree->left);

	if (tree->right)
		right = 1 + binary_tree_size(tree->right);

	return (left + right);
}
