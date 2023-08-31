#include "binary_trees.h"
/**
  * binary_tree_is_full - checks is a binary tree is full
  * @tree: pointer to the root node of the tree to check
  * Return: if NULL return 0 else 1
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_tree = binary_tree_is_full(tree->left);
	right_tree = binary_tree_is_full(tree->right);

	if (left_tree && right_tree)
		return (1);
	return (0);
}
