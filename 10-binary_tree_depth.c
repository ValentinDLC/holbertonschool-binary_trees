#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * 
 * Return: 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth;
    if (tree == NULL)
    {
        return (0);
    }
    for (depth = 0; tree->parent != NULL; depth++)
    {
        tree = tree->parent;
        
    }
    /*return the value of the depth*/
    return (depth); 
}