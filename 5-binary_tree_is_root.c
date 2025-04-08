#include "binary_trees.h"

/**
 * binary_tree_is_root - Vérifie si un nœud est une racine
 * @node: Pointeur vers le nœud à vérifier
 * Return: 1 si le nœud est une racine, 0 sinon
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Vérifie si le nœud est NULL (n'existe pas) */
	if (!node)
		return (0); /* Ce n'est pas une racine s'il n'y a pas de nœud */

	/* Vérifie si le nœud n'a pas de parent */
	if (node->parent == NULL)
		return (1); /* Le nœud est une racine s'il n'a pas de parent */

	else
		/* Si le nœud a un parent, alors ce n'est pas une racine */
		return (0);
}
