#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: the tree
 * Return: size of that
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left = binary_tree_nodes(tree->left);
	size_t right = binary_tree_nodes(tree->right);

	return ((tree->left || tree->right) + left + right);
}
