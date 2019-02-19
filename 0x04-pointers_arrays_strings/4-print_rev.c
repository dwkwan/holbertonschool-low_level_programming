#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string
 */
int _strleng(char *s);

void print_rev(char *s)
{
	int c;

	for (c = _strlen(s); c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}

int _strlen(char *s)
{
        int c = 0;

        while (s[c] != '\0')
                c++;
        return (c);
}
