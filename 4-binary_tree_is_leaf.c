#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to be checked
 * Return: Status of leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);

	else
		return (0);
}
