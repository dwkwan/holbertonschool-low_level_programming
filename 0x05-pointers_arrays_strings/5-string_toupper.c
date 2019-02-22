#include "holberton.h"
int _strlen(char *s);
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to string
 * Return: the pointer to the string
 */
char *string_toupper(char *s)
{
	int c;
	int len = _strlen(s);

	for (c = 0; c < len; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
	}
	return (s);
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
