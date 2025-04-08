#include "binary_trees.h"

/**
*binary_tree_preorder - fonction pour afficher la valeur des noeuds
*
*@tree: pointeur sur le noeud racine
*
*@func: function en parametre
*
**/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
	{
		return;
	}


	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
