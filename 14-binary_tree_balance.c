#include "binary_trees.h"

/**
 * binary_tree_balance - gets the balance factor of a binary tree
 *
 * @tree: pointer to the root or node to check balance
 *
 * Return: balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);

}

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
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}

