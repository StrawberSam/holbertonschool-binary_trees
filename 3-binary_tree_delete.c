#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Recursively frees the nodes of a binary tree
 * using post-order traversal (left, right, root).
 * If tree is NULL, does nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Si tree est NULL, on s'arrête */
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left); /* on parcourt le sous-arbre de gauche */
	binary_tree_delete(tree->right); /* on parcourt le sous-arbre de droite */
	free(tree); /* on free tree */
}
