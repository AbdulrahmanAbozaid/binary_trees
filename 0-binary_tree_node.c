#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: the value
 * Return: binary tree node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!value || !node)
		return (NULL);

	node->parent = parent;
	node->left = node->right = NULL;
	node->n = value;

	return (node);
}
