#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a node into the left of
 * a binary tree
 * @parent: parent node
 * @value: value to be inserted
 *
 * Return: parent node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new_node = creates_node(value);

	binary_tree_t *prnt;

	prnt = parent;
	if (value < prnt->n)
	{
		if (prnt->left == NULL)
		{
			prnt->left = new_node;
			new_node->parent = prnt;
		}
		else
		{
			if (prnt->left != NULL)
				insert_left(prnt, new_node);
		}
	}
	else
	{
		if (value > prnt->n)
		{
			if (prnt->right == NULL)
				prnt->right = new_node;
		}
		else
		{
			if (prnt->right != NULL)
				insert_right(prnt, new_node);
		}
	}
	return (parent);
}

/**
 * insert_right - creates a node to the right of
 * it's parent if the node is not NULL
 *
 * Description: If the parent node already has a child (reserve),
 * the new node becomes the new child with reserve becoming the
 * child of the new_node.
 * Hence, reserve becomes a descendant/grandchild of previous parent
 *
 * @prnt: parent node to be used for insertion
 * @new_node: newly created node
 */


void insert_right(binary_tree_t *prnt, binary_tree_t *new_node)
{
	binary_tree_t *reserve;

	reserve = prnt->right;
	reserve->parent = new_node;
	new_node->parent = prnt;
	new_node->right = reserve;
	prnt->right = new_node;

}

/**
 * insert_left - creates a node to the left of
 * it's parent if the node is not NULL
 *
 * Description: If the parent node already has a child (reserve),
 * the new node becomes the new child with reserve becoming the
 * child of the new_node.
 * Hence, reserve becomes a descendant/grandchild of previous parent
 *
 * @prnt: parent node to be used for insertion
 * @new_node: newly created node
 */

void insert_left(binary_tree_t *prnt, binary_tree_t *new_node)
{
	binary_tree_t *reserve;

	reserve = prnt->left;
	reserve->parent = new_node;
	new_node->parent = prnt;
	new_node->left = reserve;
	prnt->left = new_node;
}

