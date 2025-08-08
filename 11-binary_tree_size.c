#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
* @tree: Pointer to the root node of the tree
*
* Return: Size of the tree or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t sum_size;
if (tree == NULL)
{
return (0);
}
/* get the size of the left and right subtrees and sum them*/
sum_size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
/* return the total size and add 1 for the current node*/
return (1 + sum_size);
}