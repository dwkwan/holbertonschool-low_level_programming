#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of underscores
*/
void print_line(int n)
{
	int u;

	if (n > 0)
	{
		for (u = 0 ; u < n ; u++)
			_putchar ('_');
		_putchar ('\n');
	}
	else
		_putchar ('\n');
}
