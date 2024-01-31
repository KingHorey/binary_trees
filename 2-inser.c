#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = NULL;

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);
	ptr->parent = parent;
	ptr->n = value;
	ptr->left = NULL;
	ptr->right = NULL;

	if (parent == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (parent->right == NULL)
		parent->right = ptr;
	else
	{
		ptr->right = parent->right;
		parent->right = ptr;
	}
	return (ptr);
}
