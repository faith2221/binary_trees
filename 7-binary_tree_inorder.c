#include "binary_trees.h"

/**
 * binary_tree_inorder - It goes through a binary tree using in-ordertraversal.
 * @tree: The tree to traverse
 * @func: The pointer to a func to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
}
