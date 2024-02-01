#include "binary_trees.h"

/**
 * binary_tree_leaves - function to get the number of leafs a
 * node has
 *
 * @tree: pointer to the node to check
 *
 * Return: 0 if tree is NULL or the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
		return (2);
	if (tree->left && tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right)
		return (1);
	return (1);
}

