#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL or is the root
 *
 * Description: Depth is the number of edges from the node to the root node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int max_depth;

	/* Si le nœud est NULL ou si c’est la racine, la profondeur est 0 */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* Appel récursif pour remonter jusqu’à la racine */
	max_depth = binary_tree_depth(tree->parent);

	/* On ajoute 1 pour chaque niveau remonté */
	return (max_depth + 1);
}
