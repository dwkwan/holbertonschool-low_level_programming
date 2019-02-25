#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: character array to copy to
 * @src: character array to copy from
 * @n: how many bytes to copy
 * Return: the pointer to the char array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
