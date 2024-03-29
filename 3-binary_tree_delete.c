#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the tree struture
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right, *curr;

	if (!tree)
		return;

	left = tree->left;
	right = tree->right;
	curr = tree;

	binary_tree_delete(left);
	binary_tree_delete(right);

	curr->parent = curr->left = curr->right = NULL;
	free(curr);
}
