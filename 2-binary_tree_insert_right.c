#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: the parent node
 * @value: is the value to be inserted in the new node
 * Return: A pointer to the created node or null on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}
