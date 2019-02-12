#include "holberton.h"
/**
 * print_alphabet_x10 - writes a function that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n <= 9)
{
		c = 'a';
	while (c <= 'z')
{
		_putchar(c);
		c++;
}
		_putchar('\n');
		n++;
	}

}
