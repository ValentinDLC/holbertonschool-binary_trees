#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Description: A leaf is a node that has no children (both left and right
 * children are NULL). This function recursively traverses the tree and
 * counts all leaf nodes. A NULL pointer is not considered a leaf.
 *
 * Return: Number of leaves in the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves;
	
	if (!tree)
	{
		return 0;
	}
/* morgan law*/
	if (!(tree->left || tree->right))
	{
		return (1);
	}
/* recursively counts the numnbers of leaf nodes in the subtree*/
	count_leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
/* return the total number of leaf nodes*/
	return(count_leaves);
}
