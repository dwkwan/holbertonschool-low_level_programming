#include "holberton.h"
/**
 * _islower - write a function that checks for lowercase character.
 * @c: The character to prin.t
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
