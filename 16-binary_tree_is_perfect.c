#include "binary_trees.h"

/**
 * depth - Measures the depth of the leftmost path
 * @tree: pointer to the node
 *
 * Return: depth of the tree
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}

	return (d);
}

/**
 * is_perfect_recursive - Helper to check if tree is perfect
 * @tree: current node
 * @d: expected depth
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
    {
        return (1);
    } 
/* Check if leaf is at the expected depth */
	if (tree->left == NULL && tree->right == NULL)
    {
        return (d == level + 1);
    } 
/* Not full node, hence not perfect */
	if (tree->left == NULL || tree->right == NULL)
    {
        return (0);
    } 
/*Check both subtrees recursively*/
	return (is_perfect_recursive(tree->left, d, level + 1) &&
		is_perfect_recursive(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;
	if (!tree)
    {
        return (0);
    } 
/* Get expected depth from leftmost path */
	d = depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
