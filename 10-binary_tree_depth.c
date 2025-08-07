#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Description: The depth of a node is the number of edges from the node
 * to the root of the tree. The root node has depth 0, its children have
 * depth 1, and so on. This function counts edges by traversing up to
 * the root through parent pointers.
 *
 * Return: Depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	} 
/*Count the depth of a binary tree assuming node depth = parent depth + 1*/
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
