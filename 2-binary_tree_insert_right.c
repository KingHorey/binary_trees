#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_right - inserts a node into the right of
 * a binary tree
 * @parent: parent node
 * @value: value to be inserted
 *
 * Return: parent node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *head, *new_node;

	if (!parent)
		return (NULL);
	new_node = creates_node(value);
	if (!new_node)
		return (NULL);
	head = parent;
	if (head->right == NULL)
	{
		new_node->parent = head;
		head->right = new_node;
	}
	else
	{
		insert_right(head, new_node);
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
