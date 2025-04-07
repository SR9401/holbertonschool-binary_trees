#include "binary_trees.h"

/**
*
*
*
*
*
*
*
**/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
binary_tree_t *n_noeud;

	n_noeud = malloc(sizeof(binary_tree_t));

	if (n_noeud == NULL)
	{
		return (NULL);
	}

	n_noeud->n = value;
	n_noeud->parent = parent;
	n_noeud->right = NULL;
	n_noeud->left = NULL;

return (n_noeud);
}
