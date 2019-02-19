#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int c;

	for (c = _strlen(s); s[c] >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
