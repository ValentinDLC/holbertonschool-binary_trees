#include "binary_trees.h"
/**
 * binary_tree_preorder -  goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
/*Call the function on the current node*/
func(tree->n);
/*Traverse left subtree*/
binary_tree_preorder(tree->left, func);
/*Traverse right subtree*/
binary_tree_preorder(tree->right, func);
}
