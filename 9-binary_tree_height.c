#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 *
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}

