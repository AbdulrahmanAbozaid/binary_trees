#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent
 * @value: the value
 * Return: tree
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (!node || !value)
		return (NULL);

	if (!parent)
	{
		free(node);
		return (NULL);
	}

	node->n = value;
	node->left = node->right = NULL;
	node->parent = parent;
	if (parent->right)
	{
		tmp = parent->right;
		parent->right = node;
		node->right = tmp;
		tmp->parent = node;
	}
	else
		parent->right = node;

	return (node);
}
