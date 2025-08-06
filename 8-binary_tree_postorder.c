#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: In post-order traversal, we visit left subtree first,
 * then right subtree, and finally the root node. If tree or func is NULL,
 * the function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if(!(tree && func))
    {
        return;
    }
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);

}
