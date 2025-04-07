#include "binary_trees.h"

/**
*binary_tree_is_leaf - fonction qui verifie si un noeud est une feuille
*
*@node: noeud a verifier
*
*Return: 1 si vrai 0 si faux
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
