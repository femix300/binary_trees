#include "binary_trees.h"

/**
 * binary_tree_full_height - Measures the full height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Full height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_full_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_full_height(tree->left);
	right = binary_tree_full_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: the height of the binary tree or 0 if the tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t full_height;

	full_height = binary_tree_full_height(tree);

	if (full_height == 0)
		return (0);

	return (full_height - 1);
}
