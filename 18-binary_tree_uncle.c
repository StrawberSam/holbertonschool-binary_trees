#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 *
 * Description: The uncle of a node is the sibling of its parent.
 * If node is NULL, has no parent, or has no grandparent,
 * the function returns NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	/* Vérifie si le nœud est NULL */
	if (node == NULL)
		return (NULL);

	/* Vérifie si le parent du nœud est NULL */
	if (node->parent == NULL)
		return (NULL);

	/* Vérifie si le grand-parent du nœud est NULL */
	if (node->parent->parent == NULL)
		return (NULL);

	/* Récupère le grand-parent */
	grand_parent = node->parent->parent;

	/*
	 * Vérifie de quel côté se trouve le parent
	 * et retourne l'oncle correspondant
	 */
	if (grand_parent->left == node->parent)
		return (grand_parent->right);

	return (grand_parent->left);
}
