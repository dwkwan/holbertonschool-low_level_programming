#include "holberton.h"
#include <stdlib.h>
/**
 * strdup - returns a pointer to dup string, newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (*(str + j) != '\0')
	{
		len ++;
		j ++;
	}
	a = malloc(len * sizeof(char));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(a + i) = *(str + i);
		i++;
	}
	*(a + len) = '\0';
	return (a);
}
