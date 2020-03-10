#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 * Return: Nothing 
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		exit(0);
	}
	else
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
		}
		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
