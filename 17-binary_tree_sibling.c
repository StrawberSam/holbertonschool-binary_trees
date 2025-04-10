#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling
 *
 * Description: The sibling of a node is the other child of its parent.
 * If node is NULL or has no parent, the function returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Vérifie si le nœud est NULL ou s'il n'a pas de parent */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Vérifie si le nœud est l'enfant gauche */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Vérifie si le nœud est l'enfant droit */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Aucun sibling trouvé */
	return (node);
}

/* coucou kéké la serpi - Kiki la vraie serpi, 10.04.2025 */
