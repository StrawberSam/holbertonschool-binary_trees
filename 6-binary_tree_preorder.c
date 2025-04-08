#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcourt un arbre binaire, utilisant l'ordre préfixe
 * @tree: Pointeur vers la racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque valeur de nœud
 *
 * Description : Dans un parcours en ordre préfixe, on traite d'abord le nœud
 * courant, puis le sous-arbre gauche, et enfin le sous-arbre droit.
 * Si tree ou func est NULL, la fonction ne fait rien.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
