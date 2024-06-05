#include "binary_trees.h"

/**
 * binary_tree_inorder - pre-order traversal with func call
 * @tree: the tree to traverse
 * @func: the function to call each time
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		(*func)(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
