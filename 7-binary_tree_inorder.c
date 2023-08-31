#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using inorder method
 * @tree: pointer to the root node of the tree that is to be traversed
 * @func: pointer to a function call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
