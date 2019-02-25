#include "holberton.h"
/**
 * _strchr -  locates a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: the pointer to first occurrence of c or return NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	do {
		if (*(s + i) == c)
			return (s + i);
		i++;
	} while (*(s + i) != '\0');
	return (0);
}
