#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: the tree to check
 * Return: 1 if full 0 if no
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			return (1);
		}
		else
		{
			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
		}
	}
}
