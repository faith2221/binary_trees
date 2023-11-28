#include "binary_trees.h"

/**
 * binary_tree_insert_left - It inserts a node as left-child of another node.
 * @parent: The pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure.
 * Or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode;

	if (!parent)
		return (NULL);

	Newnode = malloc(sizeof(binary_tree_t));
	if (!Newnode)
		return (NULL);

	Newnode->n = value;
	Newnode->parent = parent;
	Newnode->left = NULL;
	Newnode->right = NULL;

	if (parent->left)
	{
		Newnode->left = parent->left;
		Newnode->left->parent = Newnode;
	}
	parent->left = Newnode;

	return (Newnode);
}
