#include "binary_trees.h"

/**
 * binary_tree_node - It creates a binary tree node
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 *
 * Return: The pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode;

	if (Newnode == NULL)
		return (NULL);

	Newnode->n = value;
	Newnode->parent = parent;
	Newnode->left = NULL;
	Newnode->right = NULL;

	return (Newnode);
}
