#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a tree
 * @tree: the tree
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
}
