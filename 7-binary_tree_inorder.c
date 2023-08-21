#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a tree using inorder traversal
 * @tree: tree
 * @func: function of choice
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_inorder(tree->left);
	binary_tree_inorder(tree->right);
}