#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is NULL, it is vacuously full */
	if (tree == NULL)
		return (1);

	/* If the current node is a leaf, return true */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children are present, recursively check their subtrees */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If we reach here, the tree is not full */
	return (0);
}
