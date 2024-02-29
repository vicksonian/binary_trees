#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
