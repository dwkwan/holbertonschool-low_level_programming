#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix to find sum of
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int j, m;
	int diagright = 0;
	int diagleft = 0;

	for (m = 0; m < (size * size); m = m + (size + 1))
		diagleft += a[m];
	for (j = size - 1; j < (size * size)
		     && j + (size - 1) < (size * size); j = j + (size - 1))
		diagright += a[j];
	printf("%i, %i \n", diagleft, diagright);
}
