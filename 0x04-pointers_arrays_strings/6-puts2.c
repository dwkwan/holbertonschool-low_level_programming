#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string, followed by a new line
 * @str: pointer to string
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c += 2)
		_putchar(str[c]);
	_putchar('\n');
}
