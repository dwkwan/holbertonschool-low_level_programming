#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to a  string
 * @s2: pointer to another string
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	if (*s1 == *s2)
		return (0);

	for (c = 0; s1[c] == s2[c]; c++)
	{}
	if (s1[c] > s2[c])
		return (s1[c] - s2[c]);
	else
		return (-(s2[c] - s1[c]));
}
