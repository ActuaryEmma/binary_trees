#include "binary_trees.h"
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree
  * Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
		int lheight, rheight;

		if (tree == NULL)
		{
				return (0);
		}
		lheight = binary_tree_height(tree->left);
		rheight = binary_tree_height(tree->right);

		if (lheight > rheight)
				return (lheight + 1);
		else
				return (rheight + 1);
}
