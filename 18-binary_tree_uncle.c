#include "binary_trees.h"

/**
 * tree_sibling - finds the sibling of a node
 * @node: the tree to measure
 * Return: A sibling
*/
binary_tree_t *tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (!node || !node->parent)
		return (NULL);

	temp = node->parent;

	if (temp->left == node)
		return (temp->right);
	else
		return (temp->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the tree to measure
 * Return: A sibling
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (!node || !node->parent)
		return (NULL);

	temp = node->parent;

	return (tree_sibling(temp));
}
