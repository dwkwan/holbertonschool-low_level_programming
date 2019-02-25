#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: character array to check
 * @accept: character array to check for
 * Return: the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;
	int flag = 1;

	for (i = 0; s[i] != ' '; i++)
		if (flag == 1)
		{
			flag = 0;
		for  (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				n++;
				flag = 1;
			}
		}
			else
				return (n);
	return (n);
}
