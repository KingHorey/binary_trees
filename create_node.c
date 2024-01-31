#include "binary_tree.h"

/**
 * create_binary_node - creates a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value to be stored in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 *
 */

binary_tree_t *create_child_binary_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}


/**
 *
 * create_parent_node - creates a binary tree node for parent/root
 *
 * @value: value to be stored in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *create_parent_binary_node(int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	new_node->parent = NULL;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
