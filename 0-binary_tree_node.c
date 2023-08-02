#include "binary_trees.h"
/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to new node, NULL if fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
newNode = malloc(sizeof(binary_tree_t));

if (newNode == NULL)
{
return NULL;
}
newNode->n = value;
newNode->parent = parent;
newNode->left = NULL;
newnode->right = NULL;

return (newNode);
}
