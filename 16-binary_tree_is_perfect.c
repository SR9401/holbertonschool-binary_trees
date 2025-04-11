#include "binary_trees.h"

#include "binary_trees.h"

/**
* binary_tree_is_perfect - Verifie si un arbre est parfait
* @tree: pointeur vers la racine de larbre
* Return: 1 si parfait, 0 sinon
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;
	const binary_tree_t *g, *d;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
	return (0);

	g = tree->left;
	while (g)
	{
		hl++;
		g = g->left;
	}

	d = tree->right;
	while (d)
	{
		hr++;
		d = d->right;
	}

	if (hl == hr &&
	    binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
