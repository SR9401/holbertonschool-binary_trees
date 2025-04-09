#include "binary_trees.h"

/**
*binary_tree_balance - fonction qui compte les feuilles
*
*@tree: pointeur sur noeud
*
*Return: 0 si null ou la difference entre la branche d et l
**/

int binary_tree_balance(const binary_tree_t *tree)

{
size_t l = 0;
size_t d = 0;

	if (tree == NULL)
	{
		return (0);
	}


	if (tree->left != NULL)
	{
		l = 1 + binary_tree_balance(tree->left);
	}
	if (tree->right != NULL)
	{
		d = 1 + binary_tree_balance(tree->right);
	}
return (l - d);
}
