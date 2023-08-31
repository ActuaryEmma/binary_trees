#include "binary_trees.h"
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree
  * Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
}

/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree: pointer to the root of the tree to measure the balance factor
  * Return: balance factor otherwise 0 is tree is NULL
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_tree = (int)binary_tree_height(tree->left);
	right_tree = (int)binary_tree_height(tree->right);

	return (left_tree - right_tree);

}
