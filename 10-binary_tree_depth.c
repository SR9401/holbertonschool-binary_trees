#include "binary_trees.h"

/**
*binary_tree_depth - fonction qui mesure la profondeur d'un noeud
*
*@tree: pointeur sur le noeud a mesurer
*
*Return: profondeur du noeud
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{

size_t n = 0;

if (tree == NULL)
{
	return (0);

}
while (tree != NULL)
{

tree = tree->parent;
n++;
}
return (n - 1);

}
