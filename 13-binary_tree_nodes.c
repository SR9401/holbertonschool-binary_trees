#include "binary_trees.h"
/**
 * binary_tree_nodes - Compte les nœuds ayant au moins un enfant
 * @tree: Pointeur vers le nœud racine de l’arbre à parcourir
 *
 * Return: Nombre de nœuds avec au moins un enfant, ou 0 si tree est NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		return (0 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
}
