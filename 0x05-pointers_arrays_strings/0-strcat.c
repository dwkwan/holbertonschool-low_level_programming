#include "holberton.h"
int _strlen(char *s);
/**
 * _strcat - concatenates two strings
 * @dest: pointer to dest string
 * @src: pointer to src string
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int n = 0;
	int c;

	for (c = len1; c <= len1 + len2; c++, n++)
		dest[c] = src[n];
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
