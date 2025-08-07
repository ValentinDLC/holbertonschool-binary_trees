#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Description: The size of a binary tree is the total number of nodes
 * in the tree. This function recursively counts all nodes in the tree
 * by summing the current node (1) plus the sizes of left and right
 * subtrees.
 *
 * Return: Size of the tree (number of nodes), 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size;

	if (tree == NULL) /* NULL ~= not */
	{
		return (0);
	}
/* recusrive call to compute the size of the left and right subtree and stored in the variables*/
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
/* add the current node with left nodes and right nodes*/
	return (1 + left_size + right_size);
}
