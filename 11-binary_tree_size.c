#include "binary_trees.h"


/**
 * binary_tree_size - gets the size of a binary tree
 *
 * @tree: pointer to the node to be traversed
 *
 * Return: the number of nodes in a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t c = 1;

	if (tree == NULL)
		return (0);
	if (tree->right || tree->left)
		return (c + binary_tree_size(tree->right) + binary_tree_size(tree->left));
	return (c);
}
