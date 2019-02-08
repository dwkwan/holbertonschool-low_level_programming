#include <stdio.h>
/**
 * main - returns 0
 *
 * Description - main returns 0
 * putchar - Prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48 ; i < 58 ; i++)
{
putchar (i);
if (i != 57)
{
putchar (44);
putchar (32);
}
}
putchar('\n');
return (0);
}
