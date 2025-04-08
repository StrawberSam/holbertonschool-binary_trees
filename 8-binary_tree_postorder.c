#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node (takes an int)
 *
 * Description: This function traverses the binary tree in post-order
 * (left subtree, right subtree, then root node), and applies the
 * provided function to the value of each visited node.
 * If tree or func is NULL, the function does nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
