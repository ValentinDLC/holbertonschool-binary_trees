#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0
 */
static int tree_height(const binary_tree_t *tree)
{
	int count_height;

	if (!tree)
		return (0);

	/* Recursively get the height of the subtrees */
	count_height = (tree_height(tree->left) > tree_height(tree->right)) ?
		tree_height(tree->left) : tree_height(tree->right);

	/* Return the greater height plus one for the current node */
	return (1 + count_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor (left height - right height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int size_height;

	if (!tree)
		return (0);

	/* Get height of subtrees and calculate balance factor */
	size_height = tree_height(tree->left) - tree_height(tree->right);

	return (size_height);
}
