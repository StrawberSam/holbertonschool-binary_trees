#include "binary_trees.h"

/**
 * binary_tree_nodes -Counts the nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 *
 * Description: Only counts nodes that have at least one child (left or right).
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	/* Si l’arbre est vide, il n’y a aucun nœud à compter */
	if (tree == NULL)
		return (0);

	/* Compte les nœuds avec enfants dans le sous-arbre gauche */
	left_side = binary_tree_nodes(tree->left);

	/* Compte les nœuds avec enfants dans le sous-arbre droit */
	right_side = binary_tree_nodes(tree->right);

	/* Si le nœud actuel a au moins un enfant, on l’ajoute au total */
	if (tree->left != NULL || tree->right != NULL)
		return (left_side + right_side + 1);

	/* Sinon, on retourne juste le total gauche + droit */
	return (left_side + right_side);
}
