#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node pointer
 * Return: NULL if fail, no sibling, node if success.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
	return (NULL);
}
