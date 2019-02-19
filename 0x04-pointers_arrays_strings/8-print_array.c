#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to string
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n - 1; c++)
		printf("%i, ", a[c]);
	printf("%i", a[n - 1]);
	printf("\n");
}
