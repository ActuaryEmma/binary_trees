#include "binary_trees.h"
/**
  * binary_tree_leaves - count the leaves in a binary tree
  * @tree: pointer to the root node of the tree to count the no of leaves
  * Return: return the count of leaves in a binary tree
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_tree = 0, right_tree = 0, count = 0;

	if (tree == NULL)
		return (0);
	left_tree = binary_tree_leaves(tree->left);
	right_tree = binary_tree_leaves(tree->right);

	if (left_tree == 0 && right_tree == 0)
	{
		count++;
	}
	return (count + left_tree + right_tree);
}
