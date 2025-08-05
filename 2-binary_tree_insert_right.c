#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node, *old_right;
if (parent == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
/*Initialize the new node*/
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
/*save the current right child*/
old_right = parent->right;
/*If parent already has a right-child, the new node must take its place*/
if (old_right != NULL)
{
new_node->right = old_right;
/*the old right-child must be set as the right-child of the new node*/
old_right->parent = new_node;
}
/*update the parent right-child to pointer to the new_node*/
parent->right = new_node;
return (new_node);
}
