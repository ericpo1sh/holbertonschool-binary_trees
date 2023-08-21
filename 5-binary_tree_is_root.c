#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node that we are given
 * Return: Status of node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return(0);
}
