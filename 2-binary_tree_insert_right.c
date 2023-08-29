#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert right child of another node
 * @parent: pointer to the node to insert the right child
 * @value: value to store in the new node
 * Return: return the inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* check if parent is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}
	/* create a newnode with given value */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		/* set the newnode to parent's current right child*/
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (parent);
}
