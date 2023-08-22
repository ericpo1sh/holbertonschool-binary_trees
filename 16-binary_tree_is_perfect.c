#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node
 * Return: 0 if not perfect, 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t left = 0;
	binary_tree_t right = 0;

	if (!tree)
		return (0);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left && right && binary_tree_height(left)
	 == binary_tree_height(right))
		return (1);
	return (0);
}

