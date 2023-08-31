#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the depth of the node or 0 if the tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
