#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: The height of a binary tree is the number of edges from
 * the root to the deepest leaf. A tree with only one node (root) has
 * height 0, and an empty tree has height 0.
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
	{
		return (0);
	} 

	if (!(tree->left || tree->right))
	{
		return (0);
	} 

	left_height = tree->left ? binary_tree_height(tree->left) : 0;
	right_height = tree->right ? binary_tree_height(tree->right) : 0;

	return (1 + (left_height > right_height ? left_height : right_height));
}
