#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Description: A root node is a node that has no parent (parent is NULL).
 * This function checks if the given node meets this criteria.
 *
 * Return: 1 if node is a root, 0 otherwise or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->parent)
	{
		return (1);
	}
	return (0);
}
