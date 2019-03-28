#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 32768;
	int flag = 0;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag)
				_putchar('0');
		}
		else
		{
			flag = 1;
			_putchar('1');
		}
		mask = mask >> 1;
	}
}
