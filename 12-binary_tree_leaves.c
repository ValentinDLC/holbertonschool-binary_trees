#include "binary_trees.h"
/**
* binary_tree_leaves - Count the leaves in a tree
* @tree: Pointer to the root node of the tree to count the number of leaves
*
* Return: Number of leaves in the tree or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
/* return 1 if left and right subtree is a leaf*/
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
/* count recursively the number of leaves in left and right subtree */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
