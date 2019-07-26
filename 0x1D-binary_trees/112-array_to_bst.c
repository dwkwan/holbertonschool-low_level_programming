#include "binary_trees.h"
/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: number of element in the array
 *
 * Return: a pointer to the root node of the created BST or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	bst_t *rvalue = NULL;
	uint i = 0;

	if (!array || size < 1)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		rvalue = bst_insert(&root, array[i]);
		if (rvalue == NULL)
			return (NULL);
	}
	return (root);
}
