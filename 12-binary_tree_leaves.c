#include "binary_trees.h"

/**
* binary_tree_leaves - count the number of leaves in the tree
* @tree: The root node in this case
* Return: 0 IF failed, counter if success
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t counter = 0;

    if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        counter++;

    binary_tree_leaves(tree->left);
    binary_tree_leaves(tree->right);

    return (counter);
}