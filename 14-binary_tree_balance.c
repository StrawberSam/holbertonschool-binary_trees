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

	/* Si l'arbre est vide, la hauteur est 0 */
	if (tree == NULL)
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

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor (left height - right height), or 0 if tree is NULL
 *
 * Description: The balance factor is the difference between
 * the height of the left subtree and the height of the right subtree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int balance;

	/* Si l’arbre est vide, le facteur d’équilibre est 0 */
	if (tree == NULL)
		return (0);

	/* Calcule la hauteur du sous-arbre gauche */
	left_height = binary_tree_height(tree->left);

	/* Calcule la hauteur du sous-arbre droit */
	right_height = binary_tree_height(tree->right);

	/* Le facteur d’équilibre est la différence des hauteurs */
	balance = left_height - right_height;

	return (balance);
}
