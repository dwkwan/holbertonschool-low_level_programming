#include "holberton.h"
/**
 * pow_recursion - returns value of x raised to y
 * @x: the base
 * @y: the power
 * Return: the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * (_pow_recursion(x, y - 1)));
}
