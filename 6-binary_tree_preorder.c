#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using preorder method
 * @tree: pointer to the root node of the tree that is to be traversed
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
