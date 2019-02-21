#include "holberton.h"
int _strlen(char *s);
/**
 * _strncat - concatenates two strings with at most n bytes from src
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = _strlen(dest);
	int i = 0;
	int c;

	for (c = len1; c < len1 + n; c++, i++)
		dest[c] = src[i];
	return (dest);
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
