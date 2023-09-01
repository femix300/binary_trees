#include "binary_trees.h"

/**
 * binary_tree_grandparent - Finds the grandparent of a node.
 * @node: Pointer to the node to find the grandparent for.
 * Return: Pointer to the grandparent node, or NULL if not found.
 */
binary_tree_t *binary_tree_grandparent(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (node->parent->parent);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: A pointer to the uncle node or null otherwise
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL)
	{
		return (NULL);
	}

	grandparent = binary_tree_grandparent(node);

	if (grandparent == NULL)
	{
		return (NULL);
	}

	if (node->parent == grandparent->left)
	{
		if (grandparent->right != NULL)
			return (grandparent->right);
	}

	if (node->parent == grandparent->right)
	{
		if (grandparent->left != NULL)
			return (grandparent->left);
	}

	return (NULL);

}
