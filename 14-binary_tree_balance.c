#include "binary_trees.h"

/**
* height - calcule la hauteur d'un arbre binaire
* @tree: pointeur vers la racine de l'arbre
* Return: hauteur de l'arbre, 0 si NULL
*/
size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t left = height(tree->left);
	size_t right = height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
* binary_tree_balance - calcule le facteur d'equilibre d'un noeud
* @tree: pointeur vers le noeud
* Return: facteur d'equilibre, ou 0 si tree est NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (height(tree->left) - height(tree->right));
}
