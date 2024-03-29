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
 * tree_height - measures the height of a binary tree
 * @tree: the tree to measure
 * Return: tree height
*/
size_t tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left = (tree->left ? 1 : 0) + tree_height(tree->left);
	size_t right = (tree->right ? 1 : 0) + tree_height(tree->right);

	return (max(left, right));
}

/**
 * tree_size -  measures the size of a binary tree
 * @tree: the tree
 * Return: Tree Size
*/
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left = tree_size(tree->left);
	size_t right = tree_size(tree->right);

	return (1 + left + right);
}

/**
 * binary_tree_is_perfect - measures the perfectness of a binary tree
 * @tree: the tree to measure
 * Return: is it perfest => 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t h = tree_height(tree);
	size_t s = tree_size(tree);
	size_t p = (size_t)((1 << (h + 1)) - 1);

	if (p == s)
		return (1);
	return (0);
}
