#include <stdio.h>
/**
 * main - returns 0
 *
 * Description - main returns 0
 * putchar - Prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
for (i = 48 ; i < 58 ; i++)
{
	for (j = i + 1 ; j < 58 ; j++)
	{
		for (k = j + 1 ; k < 58 ; k++)
		{
		putchar (i);
		putchar (j);
		putchar (k);

		if (i != 55 || j != 56 || k != 57)
		{
			putchar (44);
			putchar (32);
		}
		}
	}
}
putchar('\n');
return (0);
}
