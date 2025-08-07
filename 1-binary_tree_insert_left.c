#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Description: If parent already has a left-child, the new node takes its
 * place and the old left-child becomes the left-child of the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left;

	if (!parent)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/*Save the parent's old left child,
	insert the new node as the new left child,
	and update the necessary pointers.*/
	old_left = parent->left;
	parent->left = new_node;

	if (old_left)
	{
		new_node->left = old_left;
		old_left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}

	return (new_node);
}
