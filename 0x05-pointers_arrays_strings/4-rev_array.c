#include "holberton.h"
int _strlen(char *s);
/**
 * reverse_array - reverses the contents of an array of integers
 * @a: pointer to string
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int c, d;
	int array[n];
	int g = n - 1;

	for (d = 0; d < n; d++, g--)
		array[d] = a[g];
	for (c = 0; c <= n; c++)
		a[c] = array[c];
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
