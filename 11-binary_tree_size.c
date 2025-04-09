#include "binary_trees.h"

/**
 * binary_tree_size - fonction qui calcule la taille de l'arbre
 * @tree: pointeur qui pointe la racine de l'arbre
 * Return: la taille
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int sleft;/*initialisation de variable*/
	int sright;

	if (!tree)/*condition si tree est null, retourne 0*/
		return (0);

	/*récupère la taille du sous-arbre gauche*/
	sleft = binary_tree_size(tree->left);
	/*récupère la taille du sous-arbre droit*/
	sright = binary_tree_size(tree->right);

	return (sleft + sright + 1); /*+1 pour le noeud courant*/
}
