#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with atleast one child
 * @tree: tree root pointer
 * Return: 0 if fail, count if success
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		counter += 1;

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + counter);
}
