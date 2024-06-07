#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a tree
 * @tree: the tree to calculate
 * Return: the height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t height_l;
		size_t height_r;

		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);
		return ((height_l > height_r ? height_l : height_r) + 1);
	}
}

/**
 * binary_tree_balance - returns balance factor of a tree
 * @tree: the tree
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int heigh_l;
		int height_r;

		heigh_l = (int)binary_tree_height(tree->left);
		height_r = (int)binary_tree_height(tree->right);
		return (heigh_l - height_r);
	}
}
