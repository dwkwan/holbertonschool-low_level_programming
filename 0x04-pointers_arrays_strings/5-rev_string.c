#include "holberton.h"
int _strlen(char *s);
/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int n = _strlen(s) - 1;
	int c;
	int d;
	char array[1000];

	for (d = 0; d < len; d++, n--)
		array[d] = s[n];
	for (c = 0; c < len; c++)
		s[c] = array[c];
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
