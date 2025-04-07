#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* On alloue de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		/* Si l'allocation échoue, on retourne NULL */
		return (NULL);
	}

	/* On initialise les champs du nœud */
	new_node->n = value;	   /* Valeur stockée dans le nœud */
	new_node->parent = parent; /* Lien vers le parent */
	new_node->left = NULL;	   /* Pas d'enfant gauche au début */
	new_node->right = NULL;	   /* Pas d'enfant droit au début */

	/* On retourne le pointeur vers le nœud créé */
	return (new_node);
}
