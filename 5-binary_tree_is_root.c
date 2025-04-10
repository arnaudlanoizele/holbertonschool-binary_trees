#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - A function to check if a node is a root
 *
 * @node: The node to check
 *
 * Return: 1 is node is a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
