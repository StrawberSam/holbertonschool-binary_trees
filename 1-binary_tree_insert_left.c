#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insère un nœud à gauche d’un parent donné
 * @parent: Pointeur vers le nœud parent où insérer le nœud gauche
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL si échec
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Création du nouveau nœud avec le parent donné */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/*Si le parent a déjà un enfant gauche, on déplace sous le nouveau nœud*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* Le nouveau nœud devient l'enfant gauche du parent */
	parent->left = new_node;

	return (new_node);
}
