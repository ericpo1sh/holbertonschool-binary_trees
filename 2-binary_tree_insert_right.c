#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right under parent
 * @parent: parent node
 * @value: value of the new node that we insert
 * Return: NULL if failed, New if success.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}

	parent->right = new;

	return (new);
}
