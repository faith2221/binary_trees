#include "binary_trees.h"

/**
 * binary_tree_insert_right - It inserts a node as right-child of another node.
 * @parent: The pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure.
 * Or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	Newnode->right = parent->right;
	parent->right = Newnode;
	if (Newnode->right)
		Newnode->right->parent = Newnode;
	return (Newnode);
}
