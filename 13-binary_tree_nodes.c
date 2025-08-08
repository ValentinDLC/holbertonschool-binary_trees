#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes in.
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count_nodes;

    if (!tree)
    {
        return (0);
    }
	if (!(tree->left || tree->right))
	{
		return (0);
	}
/* recursively count nodes subtrees */
    count_nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) ;
/* add 1 for the current node, this function count non-leaf nodes */
    return (1 + count_nodes);
}
