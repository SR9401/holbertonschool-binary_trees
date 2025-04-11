#include "binary_trees.h"

/**
*binary_tree_insert_right - fonction qui ajoute un noued a droite du noeud
*
*@parent: noeud ou la fonction agit
*
*@value: valeur du nouveau noeud
*
*Return: adresse du nouveau noeud ou null si echec
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *n_noeud;

	if (n_noeud == NULL)
	{
		return (NULL);
	}

	n_noeud->n = value;
	n_noeud->left = NULL;
	n_noeud->right = NULL;
	n_noeud->parent = parent;

	if (parent->right != NULL)
	{
	n_noeud->right = parent->right;
	parent->right->parent = n_noeud;
	}
	parent->right = n_noeud;

return (n_noeud);
}
