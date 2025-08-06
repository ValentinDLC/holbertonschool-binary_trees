#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * 
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL)
{
return(0);
}
/*Check if the node is a leaf*/
if (tree->left == NULL && tree->right == NULL)
{
return(0);
}
/*recursively calculate the height of the left subtree and the height of the right subtree*/
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
/*Compare the heights of the left and right subtrees*/
if (left_height > right_height)
{
/*If left subtree is taller, +1 for the edge to connect the current node to left child*/
return (left_height + 1);
}
else 
/*If right subtree is taller or equal, +1 for the edge to connect the current node to right child*/
{
return (right_height + 1);
}
}
