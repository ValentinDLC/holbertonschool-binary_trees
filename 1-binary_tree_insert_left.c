#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    
    binary_tree_t *new_node;
    if (parent == NULL)
    {
        return (NULL);
    }
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

/*If parent already has a left-child, the new node must take its place*/
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
/*and the old left-child must be set as the left-child of the new node*/
        
    }
    return (new_node);
    
}
