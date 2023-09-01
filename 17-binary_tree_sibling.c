#include "binary_trees.h"

/**
 * binary_tree_is_left - Checks if a node is the left child of its parent.
 * @node: Pointer to the node to check.
 * Return: 1 if node is the left child, 0 otherwise.
 */
int binary_tree_is_left(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (node->parent->left == node);
}

/**
 * binary_tree_is_right - Checks if a node is the right child of its parent.
 * @node: Pointer to the node to check.
 * Return: 1 if node is the right child, 0 otherwise.
 */
int binary_tree_is_right(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (node->parent->right == node);
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: A pointer to the sibling node and null otherwise
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (binary_tree_is_left(node))
	{
		if (node->parent->right != NULL)
		{
			return (node->parent->right);
		}
	}
	if (binary_tree_is_right(node))
	{
		if (node->parent->left != NULL)
		{
			return (node->parent->left);
		}
	}

	return (NULL);
}
