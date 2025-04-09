#include "binary_trees.h"

/**
*binary_tree_is_perfect - verifie i un arbre binaire est parfait
*
*@tree: pointeur sur noeud
*
*Return: 1 si arbre est parfait sinon 0
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int g;
int d;
binary_tree_t *tmpd = (binary_tree_t *)tree;
binary_tree_t *tmpg = (binary_tree_t *)tree;

	if (tree == NULL)
	{
		return (0);
	}

	for (d = 0; tmpd->right != NULL; d++)
	{
		tmpd = tmpd->right;
		if (tmpd->parent->left == NULL)
		{
			return (0);
		}
	}
	if (tmpd->left != NULL)
	{
		d++;
	}
	for (g = 0; tmpg->left != NULL; g++)
	{
		tmpg = tmpg->left;
		if (tmpg->parent->right == NULL)
		{
		return (0);
		}
	}
	if (tmpg->right != NULL)
	{
	g++;
	}
	if (d == g)
	{
		return (1);
	}
	return (0);
}
