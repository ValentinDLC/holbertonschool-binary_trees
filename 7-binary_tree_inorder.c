#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In-order traversal visits nodes in the following order:
 * 1. Traverse the left subtree recursively
 * 2. Visit the root node (apply function to current node)
 * 3. Traverse the right subtree recursively
 * For binary search trees, this produces values in sorted order.
 *
 * Return: Nothing (void)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree && func))
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
