#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  is a pointer to the node to insert the right-child in
 * @value:  is the value to store in the new node
 * Return: a pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		binary_tree_t *newnode;

		newnode = malloc(sizeof(binary_tree_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		if (parent->right == NULL)
		{
			newnode->n = value;
			parent->right = newnode;
			newnode->right = NULL;
			newnode->left = NULL;
			newnode->parent = parent;
			return (newnode);
		}
		else
		{
			newnode->n = value;
			newnode->right = parent->right;
			newnode->right->parent = newnode;
			newnode->left = NULL;
			parent->right = newnode;
			newnode->parent = parent;
			return (newnode);
		}
	}
}
