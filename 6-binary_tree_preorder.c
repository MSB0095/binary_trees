#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal with func call
 * @tree: the tree to traverse
 * @func: the function to call each time
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, (*func));
		binary_tree_preorder(tree->right, (*func));
	}
}
