#include "binary_trees.h"
/**
 * binary_tree_sibling - Retourne le frère ou la sœur d’un nœud
 * @node: Pointeur vers le nœud à tester
 *
 * Return: Pointeur vers le sibling, ou NULL si aucun
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	else
	{
		return (node->parent->left);
	}
}
