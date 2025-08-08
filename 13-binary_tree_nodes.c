#include "binary_trees.h"
/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes
*
* Return: Number of nodes with a least 1 child in the tree or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
/* if left or right subtree has at least 1 child */
if (tree->left != NULL || tree->right != NULL)
{
/*count the number of nodes with a child and add 1 for current node*/
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
return (0);
}