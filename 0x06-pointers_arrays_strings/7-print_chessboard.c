#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array to print
 */
void print_chessboard(char (*a)[8])
{
	int i, j, k, m, n, p;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
	for (k = 2; k < 6; k++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[k][m]);
		_putchar ('\n');
	}
	for (n = 6; n < 8; n++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[n][p]);
		_putchar ('\n');
	}

}
