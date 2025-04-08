#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 *
 * Description: Height is the number of edges on the longest
 * path from the root node down to the farthest leaf node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	/* Si l'arbre est vide ou si c’est une feuille, la hauteur est 0 */
	if (tree == NULL || (tree -> left == NULL && tree -> right == NULL))
		return (0);

	/* Récupère la hauteur du sous-arbre gauche */
	left_side = binary_tree_height(tree->left);

	/* Récupère la hauteur du sous-arbre droit */
	right_side = binary_tree_height(tree->right);

	/* Retourne la plus grande hauteur + 1 pour le nœud courant */
	if (left_side > right_side)
		return (left_side + 1);

	else
		return (right_side + 1);
}
