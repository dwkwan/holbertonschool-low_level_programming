#include "holberton.h"
int check(int num, int root);
/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number we are finding the square root of
 *
 * Return: the natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(0, n));
}

/**
 * check - checks for square root based on number
 * @n: the number we are looking for the square root of
 * @root: the possible root
 *
 *Return: return the root or -1
 */
int check(int root, int n)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (check(root + 1, n));
}
