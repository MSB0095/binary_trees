#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with childs
 * @tree: the tree to check
 * Return:0 or the number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
		}
		else
		{
			return (0);
		}
	}
}
