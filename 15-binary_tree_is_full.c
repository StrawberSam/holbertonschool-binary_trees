#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A full binary tree is a tree in which every node
 * has either 0 or 2 children.
 *
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	/* Si l'arbre est vide, il n'est pas plein */
	if (tree == NULL)
		return (0);

	/* Si le nœud est une feuille (pas d'enfants), c'est un arbre plein */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si le nœud a un seul enfant, l'arbre n'est pas plein */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Vérification récursive des sous-arbres gauche et droit */
	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	/* Retourne 1 uniquement si les deux sous-arbres sont pleins */
	return (left_side && right_side);
}


