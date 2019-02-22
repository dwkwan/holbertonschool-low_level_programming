#include "holberton.h"
int _strlen(char *s);
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 * Return: the pointer to the string
 */
char *cap_string(char *s)
{
	int c;
	int len = _strlen(s);

	for (c = 0; c < len; c++)
	{
		if (c == 0 && s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			if (s[c - 1] == ' ' || s[c - 1] == '\t' ||
			    s[c - 1] == '\n' || s[c - 1] == ',' ||
			    s[c - 1] == ';' || s[c - 1] == '.' ||
			    s[c - 1] == '!' || s[c - 1] == '?' ||
			    s[c - 1] == '"' || s[c - 1] == '(' ||
			    s[c - 1] == ')' || s[c - 1] == '{' ||
			    s[c - 1] == '}')
				s[c] = s[c] - 32;
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
