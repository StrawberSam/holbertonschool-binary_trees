#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if node is NULL
 *
 * Description: A leaf is a node with no children.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* si node est NULL, on retourne 0 */
	if (node == NULL)
		return (0);

	/* Si node->left ET node->right sont NULL, on retourne 1 */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* Sinon on retourne 0 */
	else
		return (0);
}
