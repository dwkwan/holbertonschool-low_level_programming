#include <stdio.h>
/**
 * main - returns 0
 *
 * Description - main returns 0
 * putchar - Prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
int i;
int j;
for (i = 48 ; i < 58 ; i++)
{
	for (j = i + 1 ; j < 58 ; j++)
	{
		putchar (i);
		putchar (j);
		if (i != 56 || j != 57)
		{
			putchar (44);
			putchar (32);
		}
	}
}
putchar('\n');
return (0);
}
