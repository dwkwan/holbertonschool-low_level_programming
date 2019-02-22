#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 * Return: the pointer to the string
 */
char *rot13(char *s)
{
	int c, j;
	char alpha[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'
			   , 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's'
			   , 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char pair[27] = {'n', 'o', 'p', 'q', 'r', 's'
			   , 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b'
			 , 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
			 , 'm'};

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			for (j = 0; s[c] != alpha[j]; j++)
			{}
			s[c] = pair[j];
		}
	}
	return (s);
}
