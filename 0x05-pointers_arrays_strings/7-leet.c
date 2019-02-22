#include "holberton.h"

char *leet(char *s)
{
	int c, j;
	char letter[12] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l'
				 , 'L'};
	char number[12] = {'4', '4', '3', '3', '0', '0', '7', '7', '1'
				 , '1'};

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' ||
		    s[c] == 'o' || s[c] == 'O' || s[c] == 't' || s[c] == 'T' ||
		    s[c] == 'l' || s[c] == 'L')
		{
			for (j = 0; s[c] != letter[j]; j++)
			{}
			s[c] = number[j];
		}
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
