#include "binary_trees.h"

/**
 * binary_tree_is_full - measures the fullness of a binary tree
 * @tree: the tree to measure
 * Return: is it full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (1 && binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	else
		return (0);
}
