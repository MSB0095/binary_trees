#include "binary_trees.h"
/**
 * binary_tree_postorder - postorder traversal
 * @tree: the tree to traverse
 * @func: the function to call everytime
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, (*func));
		binary_tree_postorder(tree->right, (*func));
		(*func)(tree->n);
	}
}
