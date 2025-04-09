#include "binary_trees.h"

/**
*binary_tree_leaves - fonction qui compte les feuilles
*
*@tree: pointeur sur noeud
*
*Return: 0 si null 1 si root est la feuille ou le nombre de feuille
**/

size_t binary_tree_leaves(const binary_tree_t *tree)

{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
