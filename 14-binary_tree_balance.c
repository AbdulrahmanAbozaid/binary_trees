#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: the tree to measure
 * Return: tree balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);


	size_t left = (tree->left ? 1 : 0) + binary_tree_balance(tree->left);
	size_t right = (tree->right ? 1 : 0) + binary_tree_balance(tree->right);

	return (left - right);
}
