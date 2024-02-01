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
	left = getHeight(tree, 0);
	right = getHeight(tree, 0);
	if (left > right)
		return (left);
	return (right);
}

/**
 * getHeight - helper function that gets the height of a binary tree
 *
 * @node: pointer to the node for traversal
 * @a: counter for height
 *
 * Return: height of the tree
*/

int getHeight(const binary_tree_t *node, size_t a)
{
	if (node->left)
		return (getHeight(node->left, a + 1));
	if (node->right)
		return (getHeight(node->right, a + 1));
	return (a);
}
