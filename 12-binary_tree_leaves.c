#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the tree
 * Return: num of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	size_t left = binary_tree_leaves(tree->left);
	size_t right = binary_tree_leaves(tree->right);

	return ((!tree->left && !tree->right) + left + right);
}
