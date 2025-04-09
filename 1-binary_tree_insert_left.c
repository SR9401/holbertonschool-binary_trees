#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insère un nœud en tant qu'enfant gauche
 * d'un autre nœud
 * @parent: Pointeur vers le nœud dans lequel insérer l'enfant gauche
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud créé, ou NULL en cas d'échec
 * ou si parent est NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
