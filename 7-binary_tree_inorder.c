#include "binary_trees.h"

/**
 * binary_tree_inorder - Parcourt un arbre binaire en utilisant l'ordre infixe
 * @tree: Pointeur vers la racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque valeur de nœud
 *
 * Description : Dans un parcours en ordre infixe (in-order),
 * on parcourt d'abord le sous-arbre gauche, puis on traite le nœud courant,
 * et enfin on parcourt le sous-arbre droit.
 * Si tree ou func est NULL, la fonction ne fait rien.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
