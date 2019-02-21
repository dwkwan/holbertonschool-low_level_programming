#include "holberton.h"
int _strlen(char *s);
/**
 * _strncpy - writes a function that copies a string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1 = _strlen(src);
	int len2 = _strlen(dest);
	int c, j;

	if (len1 < len2)
	{
		if (len1 > n)
		{
			for (c = 0; c < n; c++)
				dest[c] = src[c];
		}
		else
		{
			for (c = 0; c <= len1; c++)
				dest[c] = src[c];
			for (j = len1; j < n; j++)
				dest[j] = '\0';
		}
		return (dest);
	}
	else
	{
			return (src);
	}
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
