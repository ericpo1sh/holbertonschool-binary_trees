#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree 
 * Return: the size of the tree on success, 0 if fail
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = NULL;
	size_t right = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_size(tree->left) + 1;

	if (tree->right)
		right = binary_tree_size(tree->right) + 1;

	return (left + right);
}

