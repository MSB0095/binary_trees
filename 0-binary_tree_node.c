#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newtree;

	newtree = malloc(sizeof(binary_tree_t));
	if (newtree == NULL)
	{
		return (NULL);
	}
	else
	{
		newtree->parent = parent;
		newtree->n = value;
		newtree->left = NULL;
		newtree->right = NULL;
	}
	return (newtree);
}
