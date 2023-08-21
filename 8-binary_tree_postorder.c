#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses through a tree using post order traverse
 * @tree: tree
 * @func: function used
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
