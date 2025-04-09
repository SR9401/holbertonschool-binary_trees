#include "binary_trees.h"
/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein
 * @tree: Pointeur vers le nœud racine de l’arbre à vérifier
 *
 * Return: 1 si l’arbre est plein, 0 sinon
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
