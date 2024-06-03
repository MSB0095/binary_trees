#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 * Return: a pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);
    }
    else
    {
        binary_tree_t *newnode;
        newnode = malloc(sizeof(binary_tree_t));
        if (newnode == NULL)
        {
            return (NULL);
        }
        if (parent->left == NULL)
        {
            newnode->n = value;
            parent->left = newnode;
            newnode->left = NULL;
            newnode->right = NULL;
            newnode->parent = parent;
            return (newnode);
        }
        else
        {
            newnode->n = value;
            newnode->left = parent->left;
            newnode->left->parent = newnode;
            newnode->right = NULL;
            parent->left = newnode;
            newnode->parent = parent;
            return (newnode);
        }
    }
}
