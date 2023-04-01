#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function creates a node of a binary tree
 * @parent: parent node of the binary tree
 * @value: value that is to be inserted into the node
 *
 * Return: Binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		binary_tree_t *head = malloc(sizeof(binary_tree_t));

		if (!head)
			return (NULL);
		head->parent = NULL;
		head->left = NULL;
		head->right = NULL;
		head->n = value;
		return (head);
	}
	else
	{
		binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

		if (!new_node)
			return (NULL);
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		if (value < parent->n)
			parent->left = new_node;
		else
		{
			if (value > parent->n)
				parent->right = new_node;
		}
		return (new_node);
	}
}
