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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 *
 * Description: A perfect binary tree is a tree where all internal
 * nodes have two children and all leaves are at the same level.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_side;
	int right_side;
	int left_height;
	int right_height;

	/* Si l'arbre est vide, il n'est pas parfait */
	if (tree == NULL)
		return (0);

	/* Calcul de la hauteur des sous-arbres gauche et droit */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Si le nœud est une feuille, l'arbre est parfait */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si un seul enfant est présent, l'arbre n'est pas parfait */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Vérification récursive des sous-arbres gauche et droit */
	left_side = binary_tree_is_perfect(tree->left);
	right_side = binary_tree_is_perfect(tree->right);

	/* L'arbre est parfait si les hauteurs sont égales et sous-arbres parfaits */
	if (left_height == right_height)
		return (left_side && right_side);

	return (0);
}
