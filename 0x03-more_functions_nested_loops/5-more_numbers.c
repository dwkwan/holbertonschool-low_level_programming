#include "holberton.h"
/**
 * more_numbers - prints 0-14, 10 times
*/
void more_numbers(void)
{
	int n;

	for (n = 0 ; n < 15 ; n++)
	{
		if (n > 9)
			_putchar ((n / 10) + '0');
		_putchar (n % 10 + '0');
	}
		_putchar ('\n');
}
