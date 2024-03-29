#include "binary_trees.h"

/**
 * max - get the max
 * @a: first
 * @b: second
 * Return: max
*/
int max(int a, int b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure
 * Return: tree height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	size_t left = (tree->left ? 1 : 0) + binary_tree_height(tree->left);
	size_t right = (tree->right ? 1 : 0) + binary_tree_height(tree->right);

	return (max(left, right));
}
