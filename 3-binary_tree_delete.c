#include "binary_trees.h"
/**
 * binary_tree_delete - Supprime un arbre binaire entier
 * @tree: Pointeur vers la racine de l’arbre à supprimer
 *
 * Cette fonction libère tous les nœuds de l’arbre récursivement.
 * Si tree est NULL, la fonction ne fait rien.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

