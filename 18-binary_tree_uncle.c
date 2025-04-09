#include "binary_trees.h"

/**
*binary_tree_uncle - fonction qui permet de trouver "l'oncle d'un noeud"
*
*@node: pointeur su rle noeud a trouver
*
*Return: le noeud "oncle" ou nul si il n'existe pas
**/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	else if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	else if (node->parent == node->parent->parent->left)
	{
	return (node->parent->parent->right);
	}
	else
	{
	return (NULL);
	}
}
