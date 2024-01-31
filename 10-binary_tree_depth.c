#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 *@tree: pointer to the node to measure the depth
 *
 * Return: depth of the node or 0 if tree is NULL or if parent
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || tree->parent == NULL)
		return (count);
	count = binary_tree_depth_search(tree, 0);
	return (count);
}

/**
 * binary_tree_depth_search - search for the depth of a node
 *
 * @t: pointer to the node to measure the depth
 * @c: counter for the depth
 *
 * Return: depth of the node or 0 if tree is NULL or if parent
 */
size_t binary_tree_depth_search(const binary_tree_t *t, size_t c)
{
	if (t == NULL || t->parent == NULL)
		return (c);
	return (binary_tree_depth_search(t->parent, c + 1));
}

