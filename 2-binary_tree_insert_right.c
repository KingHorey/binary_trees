#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	if (value)
		new_node->n = value;
	else
		return (NULL);
	if (parent->right != NULL)
	{
		if (parent->right->n)
		{
			if (value <= parent->right->n)
			{
				new_node->right = parent->right;
				new_node->left = NULL;
				new_node->parent = parent->right->parent;
				parent->right->parent = new_node;
				parent->right = new_node;
			}
			else
			{
				parent->right = new_node;
				new_node->left = NULL;
				new_node->parent = parent;
				new_node->right = NULL;
			}
		}
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}
