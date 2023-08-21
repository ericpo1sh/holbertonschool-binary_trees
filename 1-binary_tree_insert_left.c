#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node to the left under parent
 * @parent: parent node
 * @value: value of the new node that we insert
 * Return: NULL if failed, New if success.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new = NULL;

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}

	parent->left = new;

	return (new);
}
