#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (value > parent->n)
	{
		if (parent->right != NULL)
		{
			if (value < parent->right->n)
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
		else
		{
			parent->right = new_node;
			new_node->parent = parent;
			new_node->left = NULL;
			new_node->right = NULL;
		}
	}
	return (new_node);
}

