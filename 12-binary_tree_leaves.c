#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaf nodes, or 0 if tree is NULL
 *
 * Description: A leaf is a node with no children.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	/* Si l’arbre est vide, il n’y a pas de feuilles */
	if (tree == NULL)
		return (0);

	/* Si le nœud n’a pas d’enfants, c’est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Compte les feuilles dans le sous-arbre gauche */
	left_side = binary_tree_leaves(tree->left);

	/* Compte les feuilles dans le sous-arbre droit */
	right_side = binary_tree_leaves(tree->right);

	/* Retourne le total des feuilles des deux côtés */
	return (left_side + right_side);
}
