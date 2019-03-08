#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *intarray;
	int i, p, j, count;

	if (min > max)
		return (NULL);
	count = 0;
	i = min;
	while (i <= max)
	{
		i++;
		count++;
	}
	intarray = malloc(count * sizeof(int));
	if (intarray == NULL)
		return (NULL);
	j = min;
	for (p = 0; p < count; p++, j++)
		intarray[p] = j;
	return (intarray);
}
