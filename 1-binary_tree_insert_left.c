#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent
 * @value: the value
 * Return: tree
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (!parent || !node || !value)
		return (NULL);

	node->n = value;
	node->left = node->right = NULL;
	node->parent = parent;
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = node;
		node->left = tmp;
		tmp->parent = node;
	}
	else
		parent->left = node;

	return (node);
}
