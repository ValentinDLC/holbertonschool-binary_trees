#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: 1 if the tree is full (every node has 0 or 2 children),
 *         0 otherwise. An empty tree is not considered full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
    {
        return 0;
    }
    if (!(tree->left || tree->right))
    {
        return 1;
    }
    if (!(tree->left == NULL || tree->right == NULL))
    {
        /* If the node has both left and right children,
     * check recursively if both subtrees are full
     */
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    }
/* If the node has only one child, it's not a full tree */
    return (0);
}
