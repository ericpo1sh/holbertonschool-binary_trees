#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node pointer
 * Return: Pointer to the node on success, NULL if fail
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!binary_tree_sibling(node->parent))
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
