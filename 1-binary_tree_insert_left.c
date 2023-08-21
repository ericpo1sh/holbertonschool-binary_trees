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
	binary_tree_t *temp = NULL;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new;
		new->n = value;
		new->right = NULL;
		new->left = temp;

	}
	else
	{
		parent->left = new;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
