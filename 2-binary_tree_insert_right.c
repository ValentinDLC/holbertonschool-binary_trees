#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Description: If parent already has a right-child, the new node takes its
 * place and the old right-child becomes the right-child of the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right;

	if (!parent) return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node) return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	/*We reapeat the same operation as in task 2,
	 this time assigning to the former right child*/
	old_right = parent->right;
	parent->right = new_node;

	if (old_right)
	{
		new_node->right = old_right;
		old_right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}

	return (new_node);
}
