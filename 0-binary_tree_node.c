#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: parent node of the new node
 * @value: value of the new node
 * Return: NULL if failed, new if success.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
