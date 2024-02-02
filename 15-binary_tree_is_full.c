#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if all the nodes have 2 children
 *
 * @tree: pointer to the root or node to check
 *
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int data = 1;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
	return (data);
}
