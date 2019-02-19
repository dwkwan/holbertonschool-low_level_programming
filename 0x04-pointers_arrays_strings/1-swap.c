#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to int a
 * @b: pointer to int b
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
