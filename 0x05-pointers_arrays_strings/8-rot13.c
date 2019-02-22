#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 * Return: the pointer to the string
 */
char *rot13(char *s)
{
	int c, j;
	char alpha[54] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'
			   , 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's'
			   , 't', 'u', 'v', 'w', 'x', 'y', 'z'
			  , 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'
			   , 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S'
			   , 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char pair[54] = {'n', 'o', 'p', 'q', 'r', 's'
			   , 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b'
			 , 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
			 , 'm', 'N', 'O', 'P', 'Q', 'R', 'S'
			   , 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B'
			 , 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'
			 , 'M'};

	for (c = 0; s[c] != '\0'; c++)
	{
		if ((s[c] >= 'a' && s[c] <= 'z') || (s[c] >= 'A' && s[c] <= 'Z'))
		{
			for (j = 0; s[c] != alpha[j]; j++)
			{}
			s[c] = pair[j];
		}
	}
	return (s);
}
