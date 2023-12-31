#include "binary_trees.h"

#define X(a, b) ((a) > (b) ? (a) : (b))

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h, right_h;

if (tree == NULL)
return (0);

left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);
return (1 + X(left_h, right_h));
}
