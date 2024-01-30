#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (value < parent->n)
	{
		if (parent->left != NULL)
		{
			if (value > parent->left->n)
			{
				new_node->left = parent->left;
				new_node->right = NULL;
				new_node->parent = parent;
				parent->left->parent = new_node;
				parent->left = new_node;
			}
			else
			{
				parent->left = new_node;
				new_node->left = NULL;
				new_node->parent = parent;
				new_node->right = NULL;
			}
		}
		else
		{
			parent->left = new_node;
			new_node->parent = parent;
			new_node->left = NULL;
			new_node->right = NULL;
		}
	}
	return (new_node);
}



/**
 * recurse_search - searches for the appropriate node to insert the new node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 *
 */

binary_tree_t *recurse_search(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	if (parent == NULL)
		return (NULL);
	ptr = parent->parent;
	if (value >= ptr->n)
		return (recurse_search(ptr, value));
	return (ptr);
}

