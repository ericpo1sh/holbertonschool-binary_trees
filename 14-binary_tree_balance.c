#include "binary_trees.h"

/**
 *
 *
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int balance = 0;

	if (!tree)
		return (0);

	left = binary_tree_balance(tree->left);
	right = binary_tree-balance(tree->right);

	if (binary_tree_height(left) != binary_tree_height(right))
		balance = left - right;
	if (binary_tree_height(left) == binary_tree_height(right))
		balance = 0;
	return (balance);
}
