#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Pre-order traversal visits nodes in the following order:
 * 1. Visit the root node (apply function to current node)
 * 2. Traverse the left subtree recursively
 * 3. Traverse the right subtree recursively
 * The value in each node is passed as a parameter to the function.
 *
 * Return: Nothing (void)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree && func))
	{
		return;
	} 

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
