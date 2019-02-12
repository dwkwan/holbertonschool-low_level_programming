#include "holberton.h"
/**
 * _islower - write a function that checks for lowercase character.
 * @c: The characer to print
 *
 * Return: 1 if the character is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c < 'z' && c > 'a')
		return (1);
		else
			return (0);
	}
